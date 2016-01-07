function disp_error() {
	print "error in";
	print;
	exit 1;
}
function delete_parent_blank(ss) {
	zz=gensub(/^[ \t]*\((.*)\)[ \t]*$/,"\\1","g",ss);
	return zz;
}

BEGIN {cnt=1;}

{
	if(($1=="type" || $1=="and") ) {
		if(NF!=3 || $3!="=") {
			disp_error();
		}
		if($1=="and") {
			# handle previous setting
			printf "typedef std::tuple< ";
			for(i=1;i<cnt;i=i+1) {
				printf typename;
				printf i;
				if(i!=(cnt-1))  {
					printf " , ";
				}
			}
			print " > " typename " ;";
			print "";
		}
		typename=$2;
		cnt=1;
	} else if ($1==";;") {
		# handle previous setting
			printf "typedef std::tuple< ";
			for(i=1;i<cnt;i=i+1) {
				printf typename;
				printf i;
				if(i!=(cnt-1))  {
					printf " , ";
				}
			}
			print " > " typename " ;";
			print "";
		exit 1;
	} else {
		if($1!="|") {
			# $1 is the type variant name
			if($2=="of") {
				# we have a list of parameter
				sss="";
				for(i=3;i<=NF;i=i+1) {
					sss=sprintf("%s %s",sss,$i);
				}
				asz=split(sss,arr,"*");
				printf "typedef std::tuple<";
				printf $1;
				for(x=1;x<=asz;x=x+1) {
					printf " , ";
					
					tdd=delete_parent_blank(arr[x]);
					sz=split(tdd,crr);
					if(crr[sz]=="list") {
						# we have a list type
						subtypename="";
						for(i=1;i<sz;i=i+1) {
							subtypename=sprintf("%s %s",subtypename,crr[i]);
						}
						printf "std::list<" subtypename ">";
					} else {
						printf arr[x];
					}
				}
				printf " > ";
				printf typename ;
				printf cnt " ;";
				cnt=cnt+1;
			} else if(NF==1 ) {
				# we have no parameter
				printf "typedef std::tuple<";
				printf $1;
				printf " > ";
				printf typename ;
				printf cnt " ;";
				cnt=cnt+1;
			} else {
				disp_error();
			}
		} else {
			# $1 is |
			# $2 is the type variant name
			if($3=="of") {
				# we have a list of parameter
				sss="";
				for(i=4;i<=NF;i=i+1) {
					sss=sprintf("%s %s",sss,$i);
				}
				asz=split(sss,arr,"*");
				printf "typedef std::tuple<";
				printf $2;
				for(x=1;x<=asz;x=x+1) {
					printf " , ";

					tdd=delete_parent_blank(arr[x]);
					sz=split(tdd,crr);
					if(crr[sz]=="list") {
						# we have a list type
						subtypename="";
						for(i=1;i<sz;i=i+1) {
							subtypename=sprintf("%s %s",subtypename,crr[i]);
						}
						printf "std::list<" subtypename ">";
					} else {
						printf arr[x];
					}
				}
				printf " > ";
				printf typename ;
				printf cnt " ;";
				cnt=cnt+1;
			} else if(NF==2) {
				# we have no parameter
				printf "typedef std::tuple<";
				printf $2;
				printf " > ";
				printf typename ;
				printf cnt " ;";
				cnt=cnt+1;
			} else {
				disp_error();
			}
		}
	}
}
