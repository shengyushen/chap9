// Copyright (c) 2015 CERN
// Maciej Suminski <maciej.suminski@cern.ch>
//
// This source code is free software; you can redistribute it
// and/or modify it in source code form under the terms of the GNU
// General Public License as published by the Free Software
// Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA


// Test reading files using std.textio library.

module vhdl_textio_read_test;
reg clk, active;
int line_counter;
vhdl_textio_read dut(clk, active, line_counter);

always #1 clk = ~clk;

initial begin
    clk = 0;
    active = 1;

    // wait until the input file is read
    #12 active = 0;

    if(dut.data_string != "string") begin
        $display("FAILED 1");
        $finish();
    end

    if(dut.data_int != 123) begin
        $display("FAILED 2");
        $finish();
    end

    if(dut.data_bool != 1) begin
        $display("FAILED 3");
        $finish();
    end

    if(dut.data_hex != 243) begin
        $display("FAILED 4");
        $finish();
    end

    if(dut.data_real != 12.21) begin
        $display("FAILED 5");
        $finish();
    end

    if(dut.data_time != 100) begin
        $display("FAILED 6");
        $finish();
    end

    if(line_counter != 6) begin
        $display("FAILED 7");
        $finish();
    end

    $display("PASSED");
    #0; // Need to wait for the file to close before we finish!
    $finish();
end
endmodule
