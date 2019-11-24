`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:47:44 09/27/2019
// Design Name:   four_bit_comparator
// Module Name:   D:/Xilinx/zip/lab_04/four_bit_comparator/comparator_tb.v
// Project Name:  four_bit_comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module comparator_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire AGB;
	wire EQ;
	wire ALB;

	// Instantiate the Unit Under Test (UUT)
	four_bit_comparator uut (
		.A(A), 
		.B(B), 
		.AGB(AGB), 
		.EQ(EQ), 
		.ALB(ALB)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#50; A <= 4'b0000; B <= 4'b0001;	//0,1
		#50; A <= 4'b0001; B <= 4'b0010;	//1,2
		#50; A <= 4'b0010; B <= 4'b0011;	//2,3
		#50; A <= 4'b0011; B <= 4'b0011;	//3,3
		#50; A <= 4'b0100; B <= 4'b0100;	//4,4
		#50; A <= 4'b0101; B <= 4'b0100;	//5,4
		#50; A <= 4'b0110; B <= 4'b0110;	//6,6
		#50; A <= 4'b0111; B <= 4'b0101;	//7,5
		#50; A <= 4'b0111; B <= 4'b0110;	//7,6
		#50; A <= 4'b1000; B <= 4'b0000;	//-8,7
		#50; A <= 4'b1000; B <= 4'b1100;	//-8,-4
		#50; A <= 4'b1100; B <= 4'b1000;	//-4,-8
		#50; A <= 4'b1100; B <= 4'b1111;	//-4,-1
        
		// Add stimulus here

	end
      
endmodule

