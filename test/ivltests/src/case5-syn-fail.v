/*
 * This tests the synthesis of a case statement that has an empty case.
 */
module main;

   reg clk, bit, foo;

   // Synchronous device that toggles whenever enabled by a high bit.
   always @(posedge clk)
     case (bit)
       1'b0: ;
       1'b1: foo <= ~foo;
     endcase // case(bit)

   (* ivl_synthesis_off *)
   always begin
      #5 clk = 1;
      #5 clk = 0;
   end

   (* ivl_synthesis_off *)
   initial begin
      clk = 0;
      bit = 0;
      foo = 0;
      # 6 $display("clk=%b, bit=%b, foo=%b", clk, bit, foo);
      if (bit !== 0 || foo !== 0) begin
	 $display("FAILED");
	 $finish;
      end

      #10 $display("clk=%b, bit=%b, foo=%b", clk, bit, foo);
      if (bit !== 0 || foo !== 0) begin
	 $display("FAILED");
	 $finish;
      end

      bit <= 1;
      #10 $display("clk=%b, bit=%b, foo=%b", clk, bit, foo);
      if (bit !== 1 || foo !== 1) begin
	 $display("FAILED");
	 $finish;
      end

      #10 $display("clk=%b, bit=%b, foo=%b", clk, bit, foo);
      if (bit !== 1 || foo !== 0) begin
	 $display("FAILED");
	 $finish;
      end

      $display("PASSED");
      $finish;
   end

endmodule // main