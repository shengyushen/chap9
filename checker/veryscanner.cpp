#undef yyFlexLexer
#define yyFlexLexer veryFlexLexer
#include <FlexLexer.h>

#include "veryscanner.h"

void veryScanner::open(const string & fn , ifstream * pis) {
	filename = fn;
	linenumber =1;
	charnumber = 0;
	switch_streams(pis);
}

void veryScanner::print_pos () { 
	cerr<< filename << " : " << linenumber << " : " << charnumber << endl << flush; 
}

void veryScanner::incLineNumber () { 
	linenumber++; charnumber=0 ; 
}

void veryScanner::incCharNumber (int n) { 
	charnumber+=n ; 
}

void veryScanner::setPosition(int ln , string fn) {
	linenumber=ln;filename=fn;charnumber=0;
}

int veryScanner::yylex() {}


