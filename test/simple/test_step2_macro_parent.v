module ssy();


`define x(y) y+y
reg z;

integer t= `x (1) ;

initial begin
	#10 $display("%d\n",t);
end

endmodule
