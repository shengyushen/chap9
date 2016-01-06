#ifndef VERYSCANNER_H
#define VERYSCANNER_H
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<vector>

#include <verilog_parser.h>

	using namespace std;
	class veryScanner : public veryFlexLexer {
	public :
		yy::location loc;
		veryScanner() {}
		veryScanner( string * fn , ifstream * pis) :
			loc{fn},
			veryFlexLexer(pis)
		{ }

		void open( string * fn , ifstream * pis);
		void print_pos () ;
		int yylex() ;
		yy::verilog_parser::symbol_type yylex1();
	};


#endif
