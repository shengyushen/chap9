`define ssy

`ifdef ssy

`line 1 ./src/empty.v 1 
module empty();
endmodule




`line 5 src/test_step12_nodef_nofile.v 2 


`line 1 ./src/exp.v 1 

module xx();
output gg;
assign gg=    1 +   2 ;
endmodule


`line 6 src/test_step12_nodef_nofile.v 2 

`else

`include "e1.v"

`line 8 src/test_step12_nodef_nofile.v 2 

`endif

