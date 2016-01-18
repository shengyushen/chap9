`define \x (x,y) `\y (x,y) + `\z (x,y)

`define \y (x,y) (x*y)+`\z ((x+y),y-x)
`define \z (a,b) a +b
`define \w (a,b) a-  \
  b + \
	`\v   
`define \v \
12 +\
21
module i1();

input a;
output b;
output c;
assign b = `\x (1+(2+1) ,3* 4 ) ;
assign c = `\z (`\w (7,5) , 1 );

endmodule
