#undef yyFlexLexer
#define yyFlexLexer veryFlexLexer
#include <FlexLexer.h>

#include "veryscanner.h"

void veryScanner::open( string * fn , ifstream * pis) {
	loc.initialize(fn);
	switch_streams(pis);
}

void veryScanner::print_pos () { 
	cerr<< loc << endl << flush; 
}

int veryScanner::yylex() {}

