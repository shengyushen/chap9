#ifndef VERILOG_DRIVER_H
#define VERILOG_DRIVER_H

#include<fstream>
#include"verilog_parser.h"
// Tell Flex the lexer's prototype ...
//# define YY_DECL yy::verilog_parser::symbol_type yylex (verilog_driver& driver)
// ... and declare it for the parser's sake.
//YY_DECL;

using namespace std;

class verilog_driver
{
public:
	verilog_driver () : trace_scanning (false), trace_parsing (false) { }
	virtual ~verilog_driver () {}

	int result;
	// Used later to pass the file name to the location tracker.
	string file;
	ifstream fin;

	// Run the parser on file F.
	// Return 0 on success.
	int parse (const string &f) {
		file = f;
		fin.open(f);
		yy::verilog_parser parser (*this);
		parser.set_debug_level (trace_parsing);
		int res = parser.parse ();
		return res;
	}
	// Whether parser traces should be generated.
	bool trace_parsing;

	// Error handling.
	void error (const yy::location& l, const string& m) {
		cerr << l << ": " << m << endl;
	}
	
	void error (const string& m) {
		cerr << m << endl;
	}

	// Handling the scanner.
	bool trace_scanning;
};

#endif

