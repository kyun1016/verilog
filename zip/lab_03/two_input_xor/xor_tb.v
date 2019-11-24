`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:51:51 09/18/2019
// Design Name:   xor_gate
// Module Name:   C:/Xilinx/zip/lab_03/two_input_xor/xor_tb.v
// Project Name:  two_input_xor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: xor_gate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module xor_tb;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire X;

	// Instantiate the Unit Under Test (UUT)
	xor_gate uut (
		.A(A), 
		.B(B), 
		.X(X)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100 A <= 1; B <= 1;
		#100 A <= 1; B <= 0;
		#100 A <= 0; B <= 1;
      #100 A <= 0; B <= 0;
		  
		// Add stimulus here

	end
      
endmodule

