BEGIN {
	have =0;
}

{
	if($1=="and") {
		if(have ==1) {
			print "};";
		}
		have=1;
		if(NF==3 && $3=="=") {
			print "enum " $2 " { ";
		} else {
			print "Error : " $0;
		}
	} else if ($1==";;") {
		print "};";
	} else if (NF==1 && $1!="|" ) {
		print "   " $1;
	} else if (NF==2 && $1=="|") {
		print " , " $2;
	}
}
