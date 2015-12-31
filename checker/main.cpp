#include<string>
#include<iostream>
#include<fstream>
#include<stack>
#include<assert.h>
#include<regex>
#include<unistd.h>
#include<vector>

#undef yyFlexLexer
#define yyFlexLexer veryFlexLexer
//this one define yyFlexLexer, which can be remapped to veryFlexLexer by our define
#include<FlexLexer.h>
#include"veryclass.h"

using namespace std;

bool testFileExistenceInDir(string dirname_filename) {
	ifstream foo( dirname_filename );
	return foo.is_open();
}

void usage() {
	cout<<"Usage : checker.exe [input file]"<<endl;
}

int main ( int argc, char * argv[] ) {
	if(argc!=2) {
		usage();
		return 1;
	}
	//testing existence of file
	string filename{argv[1]};
	if( false == testFileExistenceInDir(filename)) {
	   cerr << "FATAL : input file doesn't exist " <<endl;
		 return 1;
	}
	ifstream foo( filename );
	//creating files handler and scanner
	veryScanner * lexer= new veryScanner( filename ,&foo);
	while(lexer->yylex()!=0) {
		cerr<<"improper return"<<endl;
		cout<<"// return here\n"<<flush;
	}

	return 0;
}


