#include<string>
#include<iostream>
#include<fstream>
//we need yy and yy::verilog_parser
#include<list>
#include<memory>
#include<boost/variant.hpp>
#include"verilogast.h"
#include"verilog_parser.h"

using namespace std;
using namespace Verilogast;

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

//the result of parsing
std::shared_ptr<std::list<std::shared_ptr<Verilogast::description>>> ptr_source_text;

#include"printVisitor.h"

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
	} else {
		cerr<<"all done!!!"<<endl;
	}

	printVerilog(ptr_source_text);
	
	return 0;
}


