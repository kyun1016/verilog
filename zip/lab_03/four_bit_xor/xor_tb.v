`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:13:31 09/18/2019
// Design Name:   xor_gate
// Module Name:   C:/Xilinx/zip/lab_03/four_bit_xor/xor_tb.v
// Project Name:  four_bit_xor
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
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire [3:0] Y;
	integer i,j;

	// Instantiate the Unit Under Test (UUT)
	xor_gate uut (
		.A(A), 
		.B(B), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		for(i=0;i<600;i=i+1)
		begin
			#20 B <= (B+1)% 2;
		end
		// Add stimulus here
	end
      
endmodule

