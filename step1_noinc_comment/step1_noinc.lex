%{
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	using namespace std;

	class step1_noincScanner : public step1_noincFlexLexer {
	public :
		int linenumber ;
		int charnumber ;
		string filename ;
		step1_noincScanner(const string & fn , ifstream * pis) :
			filename{fn},
			linenumber(0),
			charnumber(0),
			step1_noincFlexLexer(pis)
		{ }
		int yylex();
		void print_pos () { cerr<< filename << " : " << linenumber << " : " << charnumber << endl << flush; }
		void incLineNumber () { linenumber++; charnumber=0 ; }
		void incCharNumber (int n) { charnumber+=n ; }
		void prt_fatal(string str)  { cerr<<"FATAL : "<<str<<endl<<flush; return; }
	};

%}

%option noyywrap
%option yylineno


string \"[^\n"]+\"
blank [ \t]
alpha [A-Za-z]
digit [0-9]a

%x comment

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
	cerr<<"step1_noinc [input filename]"<<endl;
	return;
}

int main ( int argc, char * argv[] ) {
	if(argc==2) {
		cerr<<"reading file name "<< argv[1] <<endl;
		ifstream foo( argv[1] );
		if( ( foo.is_open() ) == false) {
		   cerr << "FATAL : file doesn't exist\n"<<flush;
			 return 1;
		}
		step1_noincScanner * lexer= new step1_noincScanner(argv[1],&foo);
		while(lexer->yylex()!=0) {cout<<"loop"<<endl<<flush;}

		delete lexer;	
		return 0;
	} else {
		usage();
		return 1;
	}
}

