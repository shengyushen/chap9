#ifndef VERYSCANNER_H
#define VERYSCANNER_H
	using namespace std;
	class veryScanner : public veryFlexLexer {
	public :
		yy::location loc;
		veryScanner() {}
		veryScanner( string * fn , ifstream * pis) :
			loc{fn},
			veryFlexLexer(pis),
			isInModuleDeclaration(false),
			isInConfig(false)
		{ }

		void open( string * fn , ifstream * pis) {
			loc.initialize(fn);
			switch_streams(pis);
		}
		
		void print_pos () { 
			cerr<< loc << endl << flush; 
		}
		yy::verilog_parser::symbol_type yylex1();

		//set when in module or macromodule
		//clean when met ;
		bool isInModuleDeclaration;
		bool isInConfig;
	};
#endif

