`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:46:43 10/12/2019
// Design Name:   prescaler
// Module Name:   D:/Xilinx/zip/lab_06/prescaler_10_over_1/tb.v
// Project Name:  prescaler_10_over_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: prescaler
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
	reg reset;

	// Outputs
	wire next_clk;

	// Instantiate the Unit Under Test (UUT)
	prescaler uut (
		.clk(clk),
		.reset(reset),
		.next_clk(next_clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		reset <= #10 0;
		reset <= #20 1;
	end
	
	always begin
		#20 clk = clk+1;
	end
      
endmodule

