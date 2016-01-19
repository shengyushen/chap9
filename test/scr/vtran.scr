#!/bin/bash 
cat $1 | sed -e "s/@[ \t]*([ \t]*\*[ \t]*)/@*/g" |                # replacing @ ( * ) to @*
sed -e "s/@[ \t]*([ \t]*\([a-zA-Z_][a-zA-Z0-9_]*\)[ \t]*)/@\1/g"| # replacing @ ( identifier ) to @ identifier
sed -e "s/\^~/~\^/g" >  $1.add                                    # replacing ^~ to ~^ 

tokenizer $1.add |                                                # convert to token
sed -e '/^[ \t]*$/d' |                                            # delete empty line
sed -e "s/'\([dDbBhHoO]\)[ \t]*\([0-9]\)/'\1\2/g" |               # 'd x to 'dx
sed -e "s/'\([dDbBhHoO]\)0\+\([0-9]\)/'\1\2/g" |                  # 'd0x to 'dx
sed -e "s/^0\+\(.\)/\1/g" |                                       # 0xx to xx
grep -v "\`line" |                                                # deleting `line
sed -e "s/\('[dDbBhHoO][0-9]\+\)_/\1/g" |                         # 'dxx_xx to 'dxxxx
sed -e "s/'D/'d/g"|                                               # 'D to 'd
sed -e "s/'O/'o/g" |                                              # 'O to 'o
sed -e "s/'H/'h/g" |                                              # 'H to 'h
sed -e "s/'B/'b/g" > $1.tok                                       # 'B to 'b
