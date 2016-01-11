function disp_error() {
	print "\nerror in";
	print;
	exit 1;
}

function printclass (classname) {
	if(classname !~ /^T.*/ && classname !~ /^KEY_.*/) {
		disp_error();
	}
	print "class " classname ";";
	print "typedef class " classname " " classname " ;";
}

{
	if($1=="type" || $1=="and") {
	} else if($1==";;") {
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
}
