function disp_error() {
	print "\nerror in";
	print;
	exit 1;
}

function printclass (classname) {
	if(first!=1) {
		printf " , ";
	}
	print " std::shared_ptr<" classname ">";
}

{
	if($1=="type" || $1=="and") {
		if(NF==3 && $3=="=") {
			if(vname!="") {
				print " > " vname " ; ";
			}
			vname=$2;
			first=0;
			print "typedef boost::variant<";
		} else {
			disp_error();
		}
	} else if($1==";;") {
			if(vname!="") {
				print " > " vname " ; ";
			}
		exit 1;
	} else if(NF==0) {
	} else if(NF==1) {
		# have no | and no parameter
		printclass($1);
	} else if($2=="of") {
		# have no | and have parameter
		printclass($1);
	} else if($1=="|") {
		if(NF==2) {
			#have | and no parameter
			printclass($2);
		} else if ($3=="of") {
			#have | and have parameter
			printclass($2);
		} else{
			disp_error();
		}
	} else {
		disp_error();
	}
	first=first+1;
}

