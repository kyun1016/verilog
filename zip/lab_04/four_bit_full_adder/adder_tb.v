`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:27:01 09/25/2019
// Design Name:   four_bit_full_adder
// Module Name:   D:/Xilinx/zip/lab_04/four_bit_full_adder/adder_tb.v
// Project Name:  four_bit_full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_full_adder
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
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire [3:0] S;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	four_bit_full_adder uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A <= 4'b0110;
		B <= 4'b0011;
		#200;
		A <= 4'b1011;
		B <= 4'b0110;
		// Add stimulus here

	end
      
endmodule

