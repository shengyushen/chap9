function disp_error() {
	print "\nerror in";
	print;
	exit 1;
}

function tranformlist (str) {
	sz1=split(str,crr);
	if(sz1==1) {
		return str;
	} else if(sz1>1) {
		if(crr[sz1]=="list") {
			st = "";
			for(ii=1;ii<sz1;ii=ii+1) {
				st=sprintf("%s %s",st,crr[ii]);
			}
			return sprintf("std::list<%s>",st);
		} else {
			return str;
		}
	} else {
		disp_error();
	}
}

function printclass (classname , vname , parameterstr) {
	sz=split(parameterstr,arr, /*/);
	#removing space before and after 
	for(i=1;i<=sz;i=i+1) {
		arr[i]=gensub(/^[ \t]*(.*)[ \t]*$/,"\\1","g",arr[i]);
	}
	#removing () before and after
	for(i=1;i<=sz;i=i+1) {
		arr[i]=gensub(/^\((.*)\)$/,"\\1","g",arr[i]);
	}
	# transform to shared_ptr 
	for(i=1;i<=sz;i=i+1) {
		arr[i]=tranformlist(arr[i]);
		arr[i]=sprintf("shared_ptr<%s>", arr[i]);
	}
	print "class " classname " : public ComponentBase {";
	print "  public :";
	for(i=1;i<=sz;i=i+1) {
		print "    " arr[i] " mem" i ";";
	}

	print "";

	print "  " classname "( ";
	for(i=1;i<=sz;i=i+1) {
		if(i!=1) {
			printf " , ";
		} else {
			printf "   ";
		}
		print "    " arr[i] " i" i ;
	}
	printf "  )";
	if(sz>0) {
		print ":";
	} else {
		print "";
	}

	for(i=1;i<=sz;i=i+1) {
		if(i!=1) {
			printf " , ";
		} else {
			printf "   ";
		}
		print "    mem"i  "(i" i ")";
	}

	print "  {}";
	print "};";
}

function collectstr (st,ed) {
	str="";
	for(i=st;i<=ed;i=i+1) {
		str=sprintf("%s %s",str,$i);
	}
	return str;
}

{
	if($1=="type" || $1=="and") {
		if(NF==3 && $3=="=") {
			vname=$2;
			first=0;
		} else {
			disp_error();
		}
	} else if($1==";;") {
		exit 1;
	} else if(NF==0) {
	} else if(NF==1) {
		# have no | and no parameter
		printclass($1,vname,"");
	} else if($2=="of") {
		# have no | and have parameter
		str=collectstr(3,NF);
		printclass($1,vname,str);
	} else if($1=="|") {
		if(NF==2) {
			#have | and no parameter
			printclass($2,vname,"");
		} else if ($3=="of") {
			#have | and have parameter
			str=collectstr(4,NF);
			printclass($2,vname,str);
		} else{
			disp_error();
		}
	} else {
		disp_error();
	}
	first=first+1;
}


