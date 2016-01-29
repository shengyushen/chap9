function disp_error() {
	print "\nerror in";
	print;
	exit 1;
}

function ispod(str) {
	if(str=="unsigned") {return 1;}
	else if(str=="string") {return 1;}
	else if(str=="colon_config_opt") {return 1;}
	else if(str=="signedType") {return 1;}
	else if(str=="parameter_type") {return 1;}
	else if(str=="output_variable_type") {return 1;}
	else if(str=="vectored_scalared") {return 1;}
	else if(str=="net_type") {return 1;}
	else if(str=="strength") {return 1;}
	else if(str=="charge_strength") {return 1;}
	else if(str=="automatic") {return 1;}
	else if(str=="task_port_type") {return 1;}
	else if(str=="cmos_switchtype") {return 1;}
	else if(str=="enable_gatetype") {return 1;}
	else if(str=="mos_switchtype") {return 1;}
	else if(str=="n_input_gatetype") {return 1;}
	else if(str=="n_output_gatetype") {return 1;}
	else if(str=="pass_en_switchtype") {return 1;}
	else if(str=="pass_switchtype") {return 1;}
	else if(str=="polarity_operator") {return 1;}
	else if(str=="zero_or_one") {return 1;}
	else if(str=="z_or_x") {return 1;}
	else if(str=="edge_identifier") {return 1;}
	else if(str=="unary_operator") {return 1;}
	else if(str=="binary_operator") {return 1;}
	else if(str=="unary_module_path_operator") {return 1;}
	else if(str=="binary_module_path_operator") {return 1;}
	else if(str=="level_symbol") {return 1;}
	else if(str=="edge_symbol") {return 1;}
	else if(str=="netreg_type") {return 1;}
	else if(str=="io_type") {return 1;}
	else if(str=="reg") {return 1;}
	else {return 0;}
}

function tranformlist (str) {
	sz1=split(str,crr);
	if(sz1==1) {
		return str;
	} else if(sz1>1) {
		if(crr[sz1]=="list") {
			st = "";
			st=sprintf("%s",crr[1]);
			for(ii=2;ii<sz1;ii=ii+1) {
				st=sprintf("%s %s",st,crr[ii]);
			}
			if(ispod(st)==1) {
				return sprintf("std::list<%s>",st);
			} else {
				return sprintf("std::list<std::shared_ptr<%s>>",st);
			}
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
		if(ispod(arr[i])==0) {
			arr[i]=sprintf("std::shared_ptr<%s>", arr[i]);
		} 
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


