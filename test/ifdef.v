`define x

`ifdef x
	`define x1
	`ifdef x1
		x1
	`else 
		no x1
	`endif

	`ifndef x2
		no x2
	`else
		x2
	`endif
	`define x2
`elsif x2
	`define x3
	`ifdef x3
		x3
	`else
		no x3
	`endif

	`define x4
	`ifdef x5
		x5
	`elsif x4
		x4
	`else
		no x4 x5
	`endif
`else 
	`define x3
	`ifdef x3
		x3
	`else
		no x3
	`endif

	`define x4
	`ifdef x5
		x5
	`elsif x4
		x4
	`else
		no x4 x5
	`endif
`endif

		
`define x11

`ifdef x111
	`define x1
	`ifdef x1
		x1
	`else 
		no x1
	`endif

	`ifndef x2
		no x2
	`else
		x2
	`endif
	`define x2
`elsif x11
	`define x3
	`ifdef x3
		x3
	`else
		no x3
	`endif

	`define x4
	`ifdef x5
		x5
	`elsif x4
		x4
	`else
		no x4 x5
	`endif
`else 
	`define x3
	`ifdef x3
		x3
	`else
		no x3
	`endif

	`define x4
	`ifdef x5
		x5
	`elsif x4
		x4
	`else
		no x4 x5
	`endif
`endif

		
