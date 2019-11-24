`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:09:16 10/02/2019
// Design Name:   decoder
// Module Name:   D:/Xilinx/zip/lab_05/decoder38_by_if/decoder38_tb.v
// Project Name:  decoder38_by_if
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder38_tb;

	// Inputs
	reg A;
	reg B;
	reg C;

	// Outputs
	wire [7:0] O;

	// Instantiate the Unit Under Test (UUT)
	decoder uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.O(O)
	);

	initial begin
		{C,B,A} <= 3'b000;
		#100; {C,B,A} <= 3'b001;
		#100; {C,B,A} <= 3'b010;
		#100; {C,B,A} <= 3'b011;
		#100; {C,B,A} <= 3'b100;
		#100; {C,B,A} <= 3'b101;
		#100; {C,B,A} <= 3'b110;
		#100; {C,B,A} <= 3'b111;
	end
      
endmodule

