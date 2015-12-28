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

	class step1_noinc_commentScanner : public step1_noinc_commentFlexLexer {
	public :
		int linenumber ;
		int charnumber ;
		string filename ;
		step1_noinc_commentScanner(const string & fn , ifstream * pis) :
			filename{fn},
			linenumber(0),
			charnumber(0),
			step1_noinc_commentFlexLexer(pis)
		{ }
		int yylex();
		void print_pos () { cerr<< filename << " : " << linenumber << " : " << charnumber << endl << flush; }
		void incLineNumber () { linenumber++; charnumber=0 ; }
		void incCharNumber (int n) { charnumber+=n ; }
		void prt_fatal(string str)  { cerr<<"FATAL : "<<str<<endl<<flush; return; }
	};

	vector<string> includePath;
%}

%option noyywrap
%option yylineno


string \"[^\n"]+\"
alpha [A-Za-z]
digit [0-9]a

%x comment include

%%

\n	{
	/*counting lines*/
	this->incLineNumber();
	ECHO;
}

"//"[^\n<<EOF>>]* /*discard one line comment*/

"/*" {
	yy_push_state(comment);
}

"`include"[ \t]* {
	yy_push_state(include);
}

<include>{
	\n	{
		/*counting lines*/
		this->incLineNumber();
		ECHO;
	}
	
	"//"[^\n<<EOF>>]* /*discard one line comment*/
	
	"/*" {
		yy_push_state(comment);
	}

	[ \t]+ 

	"\""[ \t]*[a-zA-Z0-9\._\/]+[ \t]*"\"" {
		string s {yytext};
		s.erase(0,1);
		s.erase(s.length()-1,1);
		while(s[0]==' ') {s.erase(0,1);}
		while(s[s.length()-1]==' ') {s.erase(s.length()-1,1);}
		cerr << "including " << s << "c" <<endl ;

		/*find files*/

//		step1_noinc_commentScanner * lexer= new step1_noinc_commentScanner(argv[argc-1],&foo);

		yy_pop_state();
	}

	.
}

<comment>{
	"*/" {
		yy_pop_state();
	}
	
	"/*" {
		yy_push_state(comment);
	}

	\n	{
	/*counting lines*/
		this->incLineNumber();
	}
	
	[^\*\/\n]+	{
		this->incCharNumber(yyleng);
	}

	. {
		this->incCharNumber(yyleng);
	}

}

%%


void usage() {
	cerr<<"step1_noinc_comment [input filenamea] -I [head file dir] -I ..."<<endl;
	return;
}

extern char *optarg;
extern int optind, optopt, opterr;
int main ( int argc, char * argv[] ) {
	int c;

	while ((c = getopt (argc, argv, "I:")) != -1) {
		switch (c)
		{
		case 'I': {
			const string pathname{optarg};
			includePath.push_back(pathname);
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
		cerr << "only allow 1 filename" <<endl;
		usage();
		return 1;
	}

	ifstream foo( argv[argc-1] );
	if( ( foo.is_open() ) == false) {
	   cerr << "FATAL : file doesn't exist\n"<<flush;
		 return 1;
	}
	step1_noinc_commentScanner * lexer= new step1_noinc_commentScanner(argv[argc-1],&foo);
	while(lexer->yylex()!=0) {cout<<"loop"<<endl<<flush;}

}

