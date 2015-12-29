%{
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<unistd.h>
	#include<vector>

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
	void prt_info (string str)  { cerr<<"INOF  : "<<str<<endl<<flush; return; }

	vector<string> macros;

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


%%
\r 

\n	{
	/*counting lines*/
	this->incLineNumber();
	ECHO;
}

"`define"{blank}+{identifier}{blank}* {
	cerr<<yytext<<endl;
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
			macros.push_back(macroname);
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

