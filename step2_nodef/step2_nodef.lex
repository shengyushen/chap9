%{
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<unistd.h>
	#include<vector>
	#include<map>

	using namespace std;

	class step2_nodefScanner : public step2_nodefFlexLexer {
	public :
		int linenumber ;
		int charnumber ;
		string filename ;
		step2_nodefScanner(const string & fn , ifstream * pis) :
			filename{fn},
			linenumber(1),
			charnumber(0),
			step2_nodefFlexLexer(pis)
		{ }
		int yylex();
		void print_pos () { cerr<< filename << " : " << linenumber << " : " << charnumber << endl << flush; }
		void incLineNumber () { linenumber++; charnumber=0 ; }
		void incCharNumber (int n) { charnumber+=n ; }
	};

	void prt_fatal(string str)  { cerr<<"FATAL : "<<str<<endl<<flush; return; }
	void prt_info (string str)  { cerr<<"INFO  : "<<str<<endl<<flush; return; }
	void prt_warning (string str)  { cerr<<"WARNING  : "<<str<<endl<<flush; return; }

	//storing the map from macro name to body
	struct macrobody{
		vector<string> params;
		string body;
	};
	string currentMacroName;
	map<string,macrobody> macros;
	bool isInMacro(string mname) {
		if((macros.find(mname)) == (macros.end())) return false;
		else return true;
	}
	void insertMacro(string macroname, macrobody macrobody_inst) {
		if(isInMacro(macroname)) {
			prt_warning ("redefined macro "+macroname);
			auto x = macros.find(macroname);
			x->second=macrobody_inst;
		} else {
			macros.insert( make_pair ( macroname , macrobody_inst )  );
		}
	}
	bool isIDheadchar (char c) {
		if('a' <= c && c <= 'z') return true;
		else if('A' <= c && c <= 'Z') return true;
		else if(c == '_') return true;
		else return false;
	}
	bool isIDchar (char c ) {
		if(isIDheadchar(c)) return true;
		else if ('0' <= c && c <= '9') return true;
		else return false;
	}
	size_t searchID(string body , size_t pos) {
		if( isIDheadchar (body[pos] ) ) {
			pos++;
			while(isIDchar(body[pos]) && pos< body.length()) {pos++;}
			pos--;
			return pos;
		}
	}
	void replaceBody(string &body , const vector<string> &formallist ,const vector<string> &pamvec) {
		//construct a map
		vector<string> newfmlst = formallist;
		vector<string> newpamlst = pamvec;
		map<string,string> mm;
		while(newfmlst.empty()==false) {
			string fm = newfmlst.back();
			newfmlst.pop_back();
			string pam = newpamlst.back();
			newpamlst.pop_back();
			mm.insert(make_pair(fm,pam));
		}

		size_t last_pos=0;
		while(last_pos<body.length()) {
			if(isIDheadchar(body[last_pos])) {
				size_t postail = searchID(body,last_pos);
				string newsub=body.substr(last_pos,postail-last_pos+1);
				auto mmit=mm.find(newsub);
				if(mmit==mm.end()) { last_pos=postail+1;}
				else {
					body.replace(last_pos,postail-last_pos+1,mmit->second);
					last_pos=last_pos+((mmit->second).length());
				}
			} else {
				last_pos++;
			}
		}
	}
	vector<string> splitStringChar(const string s ,  char sep) {
		vector<string> vs;
		size_t bg=0;
		for(size_t i=0 ; i< s.length() ;i++) {
			if( sep == s[i] ) {
				if(i==bg) {
					vs.push_back("");
				} else {
					vs.push_back(s.substr(bg,i-bg));
				}
				bg=i+1;
			}
		}
		if(bg== s.length()) {
			//this means we have sep in last of s
			assert(s[s.length()-1] == sep);
			vs.push_back("");
		} else if(bg==0) {
			//this means we have NOT met a sep
			assert(vs.size()==0);
			vs.push_back(s);
		} else {
			vs.push_back(s.substr(bg,(s.length())-bg));
		}
		return vs;
	}
	void deleteblank(string & s) {
		while(s[0]==' '|| s[0]=='\t')  {s.erase(0,1);}
		while(s[0]==' '|| s[0]=='\t')  {s.pop_back();}
	}
	void replaceMacro(string & body) {
		size_t last_pos=0;
		while(last_pos<body.length()) {
			size_t pos = body.find('`', last_pos);
			if(pos==string::npos) {
				//no more macros
				return ;
			} else if(pos==body.length()-1) {
				//last char
				return;
			} else if(isIDheadchar(body[pos+1])) {
				size_t postail = searchID(body , pos+1);
				string nm = body.substr(pos+1,postail-(pos+1)+1);
				if(isInMacro(nm)) {
					auto mp = (macros.find(nm))->second;
					if((mp.params).size()==0) {
						//no parameter direct replace
						body.replace(pos+1,postail-(pos+1)+1,mp.body);
						last_pos = 0;//restart from head
					} else {
						//have parameter
						//find (
						size_t lppos=body.find('(',postail);
						if(lppos==string::npos) {
							prt_fatal("macro "+nm+" should have parameter list with (");
							exit(1);
						}
						size_t rppos = body.find(')',lppos);
						if(rppos==string::npos) {
							prt_fatal("macro "+nm+" should have parameter list with )");
							exit(1);
						}

						//now we have a list of parameter
						string paramstring = body.substr(lppos,rppos-lppos+1);
						assert(paramstring[0]=='(');
						assert(paramstring[paramstring.length()-1]==')');
						paramstring.erase(0,1);
						paramstring.pop_back();
						vector<string> pamvec = splitStringChar(paramstring , ',');
						for(auto & s : pamvec) {deleteblank(s);}
						
						//now we have the parameter vector in pamvec
						//and mp is the macrobody
						if((mp.params).size()!=pamvec.size()) {
							prt_fatal("length of macro "+nm+"'s parameter list are not the same");
							exit(1);
						}

						string newbody=mp.body;
						vector<string> newformallist = mp.params;
						replaceBody(newbody , newformallist , pamvec);
						body.replace(pos,rppos-pos+1,newbody);
						last_pos = 0 ;//restart
					}
				} else {
					prt_warning("not defined macro "+nm);
					last_pos = postail +1;
				}
			} else {
				//not an id
				last_pos = pos+1;
			}
		}
		return;
	}
	
	void usage() {
		cerr<<"step2_nodef [input filenamea] -I [head file dir] -I ..."<<endl;
		return;
	}
	
	bool testFileExistenceInDir(string dirname_filename) {
		ifstream foo( dirname_filename );
		return foo.is_open();
	}


%}

%option noyywrap
%option yylineno


string \"[^\n"]+\"
alpha [A-Za-z]
digit [0-9]
blank [ \t]
alnum {alpha}|{digit}
alnum_ {alnum}|[_]
alpha_ {alpha}|[_]
identifier {alpha_}{alnum_}*

%x macro

%%
\r 

\n	{
	/*counting lines*/
	this->incLineNumber();
	ECHO;
}

"`define"{blank}+{identifier} {
	string s(yytext);
	s.erase(0,7);
	deleteblank(s);
	cerr<<s<<endl;
	currentMacroName=s;
	ECHO;
	yy_push_state(macro);
}

<macro>{
	[(]({blank}*{identifier}{blank}*[,])*{blank}*{identifier}{blank}*[)][^\n]*\n {
		string s(yytext);
		s.pop_back();
		deleteblank(s);
		assert(s[0]=='(');
		size_t rppos = s.find_first_of(")");
		string paramlist = s.substr(1,rppos-1);
		vector<string> vs=splitStringChar(paramlist , ',');
		for(auto & s : vs) {deleteblank(s);}
		for(auto & s : vs) {cerr << "param "<<s<<"X\n";}
		macrobody mb;
		mb.params = vs;
		string body = s.substr(rppos+1,(s.length()-1-(rppos+1)+1));
		deleteblank(body);
		replaceMacro(body);
		mb.body = body;
		insertMacro(currentMacroName,mb);
		cerr<<"macro body "<<body<<endl;
		ECHO;
		yy_pop_state();
	}

	[^(\n].*\n {
		string s {yytext};
		s.pop_back();
		deleteblank(s);
		replaceMacro(s);
		macrobody mb;
		mb.params.clear();
		mb.body=s;
		insertMacro(currentMacroName,mb);
		cerr<<"macro body without param "<<s<<endl;
		ECHO;
		yy_pop_state();
	}

	\n {
		cerr<<"macro body without param "<<endl;
		ECHO;
		macrobody mb;
		mb.params.clear();
		mb.body="";
		insertMacro(currentMacroName,mb);
		yy_pop_state();
	}

	. {prt_fatal("improper define");exit(1);}
}

%%



extern char *optarg;
extern int optind, optopt, opterr;
int main ( int argc, char * argv[] ) {
	//handling options
	int c;
	while ((c = getopt (argc, argv, "D:")) != -1) {
		switch (c)
		{
		case 'D': {
			string macroname{optarg};
			macrobody mb;
			mb.params.clear();
			mb.body="";
			insertMacro ( macroname , mb );
			}
			break;
		case '?' : {
			if (optopt == 'I')
				cerr << "Option -" <<optopt << " requires an argument.\n";
			else if (isprint (optopt))
				cerr << "Unknown option `-" << optopt << "'.\n";
			else
				cerr << "Unknown option character `\\xi" << optopt << "'.\n";
			usage();
			}
			return 1;
		default:
			usage();
			return 1;
		}
	}

	if(optind<argc-1)  {
		prt_fatal ( "only allow 1 filename");
		usage();
		return 1;
	}

	//testing existence of file
	if( false == testFileExistenceInDir(argv[argc-1])) {
	   prt_fatal ( "input file doesn't exist " ) ;
		 return 1;
	}

	ifstream foo( argv[argc-1] );
	//creating files handler and scanner
	step2_nodefScanner * lexer= new step2_nodefScanner(argv[argc-1],&foo);
	while(lexer->yylex()!=0) {
		prt_fatal ("improper return");
		cout<<"// return here\n"<<flush;
	}
	

	return 0;
}

