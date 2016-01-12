
	#include<string>
	#include<fstream>

#undef yyFlexLexer
#define yyFlexLexer veryFlexLexer
#include <FlexLexer.h>

//I just need the namespace yy
#include<list>
#include<memory>
#include<boost/variant.hpp>
#include"verilogast.h"
#include"verilog_parser.h"
//#include"location.hh"

#include"veryscanner.h"
void veryScanner::open( string * fn , ifstream * pis) {
	loc.initialize(fn);
	switch_streams(pis);
}

void veryScanner::print_pos () { 
	cerr<< loc << endl << flush; 
}



