`define z(x, y ,a) x+ \
y + //sdf \
a
`define w(x, y ,a) x+ a + /*dfsg*/ y //sagd
`define y(x, y ,a) x+ a + /*df
sg*/ y //sagd

//macro name and ( must be together
//`define z (x,y) x+y

//the macro name must be at the first line
//`define \
//	z \
//	3


`timescale 1ns/10ps
module t(
	input a ,
	output [4:0] b,
	output [4:0] c,
	output [4:0] d
);

assign b = `y(1,2 , 3);
assign c = `z(1,2 , 3);
assign d = `w(1,2,3);

initial begin
	#1
	$display("%d",b);
	$display("%d",c);
	$display("%d",d);
end

endmodule

`define x(a,b) a+ \
b //
