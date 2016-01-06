#include<string>
#include<iostream>
#include<fstream>
#include<stack>
#include<assert.h>
#include<regex>
#include<unistd.h>
#include<vector>

using namespace std;

bool testFileExistenceInDir(string dirname_filename) {
	ifstream foo( dirname_filename );
	return foo.is_open();
}

void usage() {
	cout<<"Usage : checker.exe [input file]"<<endl;
}

#undef yyFlexLexer
#define yyFlexLexer veryFlexLexer
#include <FlexLexer.h>

#include"veryscanner.h"

veryScanner vs;
yy::verilog_parser::symbol_type yylex() {
	return vs.yylex1();
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
	vs.open(&filename , &foo);
	yy::verilog_parser vp(&filename);
	int res=vp.parse();
	if(0!=res) {
		cerr<<"improper structure"<<endl;
	}
	
	return 0;
}


