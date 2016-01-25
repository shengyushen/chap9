module top;

  // Check genvar/genvar name issues.
  genvar name_vv;

  /***********
   * Check tasks.
   ***********/

  // Check that task/task checks work in a generate block.
  generate
    begin: task_blk
      task name_tt;
        $display("FAILED in task name_tt(a)");
      endtask
    end
  endgenerate

endmodule
