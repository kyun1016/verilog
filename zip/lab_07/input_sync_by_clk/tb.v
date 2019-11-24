`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:32:32 10/21/2019
// Design Name:   input_sync
// Module Name:   C:/Xilinx/zip/lab_07/input_sync_by_clk/tb.v
// Project Name:  input_sync_by_clk
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: input_sync
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
	reg sw;

	// Outputs
	wire in_syn;

	// Instantiate the Unit Under Test (UUT)
	input_sync uut (
		.clk(clk), 
		.sw(sw), 
		.in_syn(in_syn)
	);

	initial begin
		clk = 0;
		sw = 0;
	end
	
	always begin
		#30 clk = ~clk;
	end
	always begin
		#170 sw = ~sw;
	end
      
endmodule

