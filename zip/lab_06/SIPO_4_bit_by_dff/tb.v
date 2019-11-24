`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:13:22 10/12/2019
// Design Name:   sipo4
// Module Name:   D:/Xilinx/zip/lab_06/SIPO_4_bit_by_dff/tb.v
// Project Name:  SIPO_4_bit_by_dff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sipo4
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
	reg data_in;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	sipo4 uut (
		.clk(clk), 
		.reset(reset), 
		.data_in(data_in), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		data_in = 0;
		
		#50 reset = 0; #50 reset = 1;
		#50 data_in = 1;
		#200 data_in = 0;
	end
	
	always begin
		#50 clk = ~clk;
	end
      
endmodule

