	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<unistd.h>
	#include<vector>
	#include<chrono>

	using namespace std;

	void usage() {
		cerr<<"genivlppcfg -I [head file dir] -I ..."<<endl;
		return;
	}
extern char *optarg;
extern int optind, optopt, opterr;
int main ( int argc, char * argv[] ) {

	//handling options
	int c;
	while ((c = getopt (argc, argv, "I:")) != -1) {
		switch (c)
		{
		case 'I': {
			string pathname{optarg};
			if(pathname[pathname.length()-1]!='/') pathname.push_back('/');
				cout<<"I:"<<pathname<<endl;
			}
			break;
		case '?' : {
			if (optopt == 'I')
				cerr << "Option -" <<optopt << " requires an argument.\n";
			else if (isprint (optopt))
				cerr << "Unknown option `-" << optopt << "'.\n";
			else
				cerr << "Unknown option character `\\xi" << optopt << "'.\n";
			usage();
			}
			return 1;
		default:
			usage();
			return 1;
		}
	}

	return 0;
}

