function disp_error() {
	print "\nerror in";
	print;
	exit 1;
}


function delete_parent_blank(ss) {
	zz=gensub(/^[ \t]*\((.*)\)[ \t]*$/,"\\1","g",ss);
	return zz;
}

{
	if($1=="typedef") {
		if($2=="std::tuple" && $3=="<" && $4 ~ /headtype_.*/) {
			if($NF==";" && $(NF-1) ~ /tailtype_.*/ && $(NF-2)==">") {
				sss="";
				if($5==",") {
					for(i=1;i<=5;i=i+1) {
						printf $i " "
					}
					for(i=6;i<=(NF-3);i=i+1) {
						if($i==",") {
							printf " , ";
						} else if ($i=="int" || $i=="(int" || $i=="int)" || $i=="string" || $i=="(string" || $i=="string)") {
							printf " " $i " "
						} else {
							printf " boost::recursive_wrapper< " $i " > "
						}
					}
					for(i=(NF-2);i<=NF;i=i+1) {
						printf " " $i " "
					}
					print "";
					for(i=6;i<=(NF-3);i=i+1) {
						sss=sprintf("%s %s",sss,$i );
					}
					# print the function
					print $(NF-1)  >> "func.h" ;
					funcname = gensub(/^headtype_(.*)$/,"\\1","g",$4);
					printf funcname " ( \n">> "func.h" ;
					sz=split(sss,arr,",");
					for(i=1;i<=sz;i=i+1) {
						printf arr[i] " i" i >> "func.h" ; 
						if(i!=sz) {
							printf " ,\n">> "func.h" ;
						}
					}
					print "\n) { ">> "func.h" ;
					print  "  " $4 " inst1;">> "func.h"; 
					printf "  return std::make_tuple ( " >> "func.h" ;
					printf " inst1">> "func.h" ;
					for(i=1;i<=sz;i=i+1) {
						printf " , ">> "func.h" ;
						printf " i" i >> "func.h" ; 
					}
					print " ) ; \n} ">> "func.h" ;
				} else if ($5==">") {
					# signle
					print;
					# print the function
					print $(NF-1)>> "func.h" ;
					funcname = gensub(/^headtype_(.*)$/,"\\1","g",$4);
					printf funcname " ( ">> "func.h" ;
					print " ) { ">> "func.h" ;
					print " " $4 " inst1;">> "func.h" ;
					printf" return std::make_tuple ( " >> "func.h" ;
					printf  " inst1">> "func.h" ;
					print " ) ; \n} ">> "func.h" ;
					
				} else {
					disp_error();
				}
			} else {
				disp_error();
			}
		} else if ( $2=="boost::variant" && $3=="<" && $4 ~ /tailtype_.*/) {
			print;
		} else if ($2=="struct" && $3=="{}") {
			print;
		} else {
			disp_error();
		}
	} else if (NF==0) {
		print;
	} else {
		disp_error();
	}
}
