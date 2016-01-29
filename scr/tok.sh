#!/bin/bash 
cat $1 | sed -e "s/@[ \t]*([ \t]*\*[ \t]*)/@\* /g"               | # replacing @ ( * ) to @*
sed -e "s/@[ \t]*([ \t]*\([a-zA-Z_][a-zA-Z0-9_]*\)[ \t]*)[ \t]*/@\1 /g" | # replacing @ ( identifier ) to @ identifier
sed -e "s/\^~/~\^/g"                                             | # replacing ^~ to ~^ 
sed -e "s/\([0-9]*\)[ \t]*'\([sS]\?[dD]\)[ \t]*\([0-9xXzZ]\)/\1'\2\3/g"            | # 'd x to 'dx
sed -e "s/\([0-9]*\)[ \t]*'\([sS]\?[bB]\)[ \t]*\([0-1xXzZ]\)/\1'\2\3/g"            | # 'd x to 'dx
sed -e "s/\([0-9]*\)[ \t]*'\([sS]\?[hH]\)[ \t]*\([0-9a-zA-ZxXzZ]\)/\1'\2\3/g"      | # 'd x to 'dx
sed -e "s/\([0-9]*\)[ \t]*'\([sS]\?[oO]\)[ \t]*\([0-7xXzZ]\)/\1'\2\3/g"            | # 'd x to 'dx
sed -e "s/'\([sS]\?[dD]\)0\+\([0-9xXzZ]\)/'\1\2/g"               | # 'd0x to 'dx
sed -e "s/'\([sS]\?[bB]\)0\+\([0-1xXzZ]\)/'\1\2/g"               | # 'd0x to 'dx
sed -e "s/'\([sS]\?[hH]\)0\+\([0-9a-zA-ZxXzZ]\)/'\1\2/g"         | # 'd0x to 'dx
sed -e "s/'\([sS]\?[oO]\)0\+\([0-7xXzZ]\)/'\1\2/g"               | # 'd0x to 'dx
sed -e "s/\([^a-zA-Z0-9_]\)0\+\([1-9]\)/\1\2/g"                                        | # 0xx to xx
sed -e "s/\([^a-zA-Z0-9_]\)0\+\([^a-zA-Z0-9_]\)/\1 0\2/g"                                        | # 0xx to xx
sed -e "s/\`line.*$//g"                                          | # deleting `line
sed -e "s/\('[sS]\?[dD][0-9]\+\)_/\1/g"                          | # 'dxx_xx to 'dxxxx
sed -e "s/\('[sS]\?[bB][0-1]\+\)_/\1/g"                          | # 'dxx_xx to 'dxxxx
sed -e "s/\('[sS]\?[hH][0-9a-zA-Z]\+\)_/\1/g"                    | # 'dxx_xx to 'dxxxx
sed -e "s/\('[sS]\?[oO][0-7]\+\)_/\1/g"                          | # 'dxx_xx to 'dxxxx
sed -e "s/\([0-9]*\)_\([0-9]*\)[ \t]*\('[sS]\?[dDbBhHoO]\)/\1\2\3/g"   | # 1_0 'd x to 10'dx
sed -e "s/+[ \t]*:/+:/g"                                         | # + : to +:
sed -e "s/-[ \t]*:/-:/g"                                         | # + : to +:
sed -e "s/#[ \t]*([ \t]*\([0-9]*\)[ \t]*)/#\1/g"                 | # reducing # ( xx ) to #xx
sed -e "s/#[ \t]*0*\([1-9][0-9]*\)/#\1/g"                        | # reducing #00xx to #xx
sed -e "s/#[ \t]*0\+\([ \t]\)/#0\1/g"                            | # reducing #00xx to #xx
sed -e "s/([ \t]*\([01]\)[ \t]*\([01]\)[ \t]*)/(\1\2)/g"         | # merging ( 0 1 ) to (01)
sed -e "s/'\([sS]?\)B/'\1b/g"                                    | # 'B to 'b
sed -e "s/'\([sS]?\)D/'\1d/g"                                    | # 'D to 'd
sed -e "s/'\([sS]?\)O/'\1o/g"                                    | # 'O to 'o
sed -e "s/'\([sS]?\)H/'\1h/g"                                    | # 'H to 'h
sed -e "s/\`suppress_faults//g"                                  | # 
sed -e "s/\`enable_portfaults//g"                                | # 
sed -e "s/\`disable_portfaults//g"                               | # 
sed -e "s/\`nosuppress_faults//g"                                | # 
sed -e "s/\([0-9]*'[sS]\?[dDbBhHoO][0-9a-zA-ZxXzZ?]*\)_\+/\1/g"  | # 
sed -e "s/'S/'s/g"      >  $1.add                                  # 'H to 'h


tokenizer $1.add                                                 | # convert to token
sed -e '/^[ \t]*$/d'  > $1.tok                                     # delete empty line
