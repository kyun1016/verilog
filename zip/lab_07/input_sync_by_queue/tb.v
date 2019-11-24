`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:07:39 10/19/2019
// Design Name:   sync
// Module Name:   C:/Xilinx/zip/lab_07/input_sync_by_queue/tb.v
// Project Name:  input_sync_by_queue
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
		// Initialize Inputs
		clk = 0;
		in = 0;
	end
	
	always begin
		#30 clk = !clk;
	end
   always begin
		#70 in = !in;
	end
   
endmodule

