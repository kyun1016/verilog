`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:40:29 09/18/2019
// Design Name:   full_adder
// Module Name:   C:/Xilinx/zip/lab_03/single_bit_full_adder/adder_tb.v
// Project Name:  single_bit_full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire Cout;
	wire S;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Cout(Cout), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		for(i=0;i<8;i = i+1)
		begin
			#50;
			A <= i%2;
			B <= (i/2)%2;
			Cin <= i/4;
		end
		// Add stimulus here

	end
      
endmodule

