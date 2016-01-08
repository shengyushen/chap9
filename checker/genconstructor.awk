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
					print;
					for(i=6;i<=(NF-3);i=i+1) {
						sss=sprintf("%s %s",sss,$i );
					}
					# print the function
					print $(NF-1) ;
					funcname = gensub(/^headtype_(.*)$/,"\\1","g",$4);
					printf funcname " ( \n";
					sz=split(sss,arr,",");
					for(i=1;i<=sz;i=i+1) {
						printf arr[i] " i" i ; 
						if(i!=sz) {
							printf " ,\n";
						}
					}
					printf "\n) { \n  return std::make_tuple ( " ;
					printf $4 " ";
					for(i=1;i<=sz;i=i+1) {
						printf " i" i ; 
						if(i!=sz) {
							printf " , ";
						}
					}
					print " ) ; \n} ";
				} else if ($5==">") {
					# signle
					print;
					# print the function
					print $(NF-1);
					funcname = gensub(/^headtype_(.*)$/,"\\1","g",$4);
					printf funcname " ( ";
					printf " ) { \n return std::make_tuple ( " ;
					printf $4 " ";
					print " ) ; \n} ";
					
				} else {
					disp_error();
				}
			} else {
				disp_error();
			}
		} else if ( $2=="boost::variant" && $3=="<" && $4 ~ /tailtype_.*/) {
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
