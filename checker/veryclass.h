	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<vector>

	using namespace std;

	class veryScanner : public veryFlexLexer {
	public :
		int linenumber ;
		int charnumber ;
		string filename ;
		veryScanner(const string & fn , ifstream * pis) :
			filename{fn},
			linenumber(1),
			charnumber(0),
			veryFlexLexer(pis)
		{ }
		int yylex();
		void print_pos () { cerr<< filename << " : " << linenumber << " : " << charnumber << endl << flush; }
		void incLineNumber () { linenumber++; charnumber=0 ; }
		void incCharNumber (int n) { charnumber+=n ; }
		void setPosition(int ln , string fn) {linenumber=ln;filename=fn;charnumber=0;}
	};

