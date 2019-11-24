`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:00:37 10/17/2019
// Design Name:   sync
// Module Name:   C:/Xilinx/zip/make_input_sync_clk/tb.v
// Project Name:  make_input_sync_clk
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sync
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire input_sync;

	// Instantiate the Unit Under Test (UUT)
	sync uut (
		.clk(clk), 
		.in(in), 
		.input_sync(input_sync)
	);

	initial begin
		clk = 0;
		in = 0;
	end
	
	always begin
		#30 clk = ~clk;
	end
	
	always begin
		#160 in = ~in;
	end
      
endmodule

