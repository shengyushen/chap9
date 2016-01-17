`define y `x
`define x 1
module t(
	input a ,
	output b
);

assign b = `y;


endmodule

`include "./src/test_step2_define.v"
