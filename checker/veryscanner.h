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
		int linenumber ;
		int charnumber ;
		string filename ;
		veryScanner() {}
		veryScanner(const string & fn , ifstream * pis) :
			filename{fn},
			linenumber(1),
			charnumber(0),
			veryFlexLexer(pis)
		{ }

		void open(const string & fn , ifstream * pis);
		void print_pos () ;
		void incLineNumber () ;
		void incCharNumber (int n);
		void setPosition(int ln , string fn) ;
		int yylex() ;
		yy::verilog_parser::symbol_type yylex1();
	};


#endif
