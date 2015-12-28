%{
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	using namespace std;
	
	struct filestatus_t {
		string filename;
		size_t linenumber;
		size_t charnumber;
	};
	
	filestatus_t filestatus;
	stack<filestatus_t> stk_filestatus;

	void incLineNumber() {
		filestatus.linenumber++;
		filestatus.charnumber=0;
	}
	void incCharNumber() {
		filestatus.charnumber++;
	}
	void setStatus(string str , size_t lineno) {
		filestatus.filename=str;
		filestatus.linenumber=lineno;
		filestatus.charnumber=0;
	}
	void pushStatus() {
		stk_filestatus.push(filestatus);
	}
	void popStatus() {
		filestatus = stk_filestatus.top();
		stk_filestatus.pop();
	}
	void prt_fatal(string str)  {
		cerr<<"FATAL : "<<str<<endl<<flush;
		return;
	}
	void print_pos () {
		cerr<<filestatus.filename << " : " << filestatus.linenumber << " : " << filestatus.charnumber<<endl;
	}
%}

%option noyywrap
%option yylineno
%%

<*>\n	{
	incLineNumber();
	print_pos();
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
		   cerr << "FATAL : file doesn't exist\n";
			 return 1;
		}
		step1_noincFlexLexer* lexer= new step1_noincFlexLexer(&foo);
		setStatus ( argv[1] , 1 ) ;
		delete lexer;	
		return 0;
	} else {
		usage();
		return 1;
	}
}

