#!/bin/bash 

# A POSIX variable
OPTIND=1         # Reset in case getopts has been used previously in the shell.
# Initialize our own variables:
incdir=""
verbose=0

#Help function
function usage {
	echo "chap9 <verilog source file> -I <include dir> "
	exit 1
}

#Check the number of arguments. If none are passed, print help and exit.
NUMARGS=$#
if [ $NUMARGS -eq 0 ]; then
	usage
fi

#paring options
while getopts "hvI:" opt; do
	case "$opt" in
	h)
		usage
	;;
	v)  verbose=1
	;;
	I)  incdir=${incdir}" -I "${OPTARG}
	;;
	esac
done

shift $((OPTIND-1))
[ "$1" = "--" ] && shift

#echo "verbose=$verbose, incdir='$incdir', VerilogSourceFile: $@"
remainNumArgs=$#
if [ $remainNumArgs -ne 1 ]; then 
	echo "FATAL : only one source file allowed"
	usage
fi

fname=$@
# step1
step1_noinc_comment ${incdir} ${fname} > ${fname}.step1.v || exit 1
# I can add sed macros to remove unintended macros here
sed -e 's/`suppress_faults//g' ${fname}.step1.v | 
sed -e 's/`enable_portfaults//g' |
sed -e 's/`nosuppress_faults//g' |
sed -e 's/`disable_portfaults//g' > ${fname}.step1_1.v
step2_nodef         ${fname}.step1_1.v > ${fname}.step2.v || exit 1
checker             ${fname}.step2.v   > ${fname}.step3.v || exit 1

# End of file
