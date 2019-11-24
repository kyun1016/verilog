`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:52:42 10/12/2019
// Design Name:   my_application
// Module Name:   D:/Xilinx/zip/lab_06/my_application_with_dff/tb.v
// Project Name:  my_application_with_dff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_application
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
	wire [0:4] q;

	// Instantiate the Unit Under Test (UUT)
	my_application uut (
		.clk(clk), 
		.reset(reset), 
		.q(q)
	);

	initial begin
		clk = 0;
		reset = 1;
		reset <= #20 0;
		reset <= #30 1;
	end
	
	always begin
		#50 clk = clk + 1;
	end
      
endmodule

