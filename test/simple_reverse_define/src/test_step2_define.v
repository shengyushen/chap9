
//( should follow macro name
`define add21 (x1,x2) `add1 (x1)+x2
`define add31 (y1,y2,y3) `add2 (y1,y2)+ y3

`define add1(x) x

`define x 1
`define x 2

`define add2(x1,x2) `add1 (x1)+x2
`define add3(y1,y2,y3) `add2 (y1,y2)+ y3

module i(input a,b,c,output o2,o3);
assign o2 = `add2 (a,b);
assign o3 = `add3 (a,b,c);

endmodule
