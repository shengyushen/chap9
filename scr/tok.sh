#!/bin/bash 
cat $1 | sed -e "s/@[ \t]*([ \t]*\*[ \t]*)/@*/g"                 | # replacing @ ( * ) to @*
sed -e "s/@[ \t]*([ \t]*\([a-zA-Z_][a-zA-Z0-9_]*\)[ \t]*)/@\1/g" | # replacing @ ( identifier ) to @ identifier
sed -e "s/\^~/~\^/g"                                             | # replacing ^~ to ~^ 
sed -e "s/\([0-9]*\)[ \t]*'\([sS]?[dDbBhHoO]\)[ \t]*\([0-9xXzZ]\)/\1'\2\3/g"            | # 'd x to 'dx
sed -e "s/'\([dDbBhHoO]\)0\+\([0-9xXzZ]\)/'\1\2/g"               | # 'd0x to 'dx
sed -e "s/^0\+\(.\)/\1/g"                                        | # 0xx to xx
grep -v "\`line"                                                 | # deleting `line
sed -e "s/\('[dDbBhHoO][0-9]\+\)_/\1/g"                          | # 'dxx_xx to 'dxxxx
sed -e "s/+[ \t]*:/+:/g"                                         | # + : to +:
sed -e "s/-[ \t]*:/-:/g"                                         | # + : to +:
sed -e "s/#[ \t]*0*\([1-9][0-9]*\)/#\1/g"                        | # reducing #00xx to #xx
sed -e "s/([ \t]*\([01]\)[ \t]*\([01]\)[ \t]*)/(\1\2)/g"         | # merging ( 0 1 ) to (01)
sed -e "s/'\([sS]?\)B/'\1b/g"                                    | # 'B to 'b
sed -e "s/'\([sS]?\)D/'\1d/g"                                    | # 'D to 'd
sed -e "s/'\([sS]?\)O/'\1o/g"                                    | # 'O to 'o
sed -e "s/'\([sS]?\)H/'\1h/g"                                    | # 'H to 'h
sed -e "s/'S/'s/g"                                    | # 'H to 'h
>  $1.add                                       

tokenizer $1.add                                                 | # convert to token
sed -e '/^[ \t]*$/d'  > $1.tok                                     # delete empty line
