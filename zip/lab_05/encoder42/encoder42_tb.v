`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:56:44 10/02/2019
// Design Name:   encoder42
// Module Name:   D:/Xilinx/zip/lab_05/encoder42/encoder42_tb.v
// Project Name:  encoder42
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder42
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module encoder42_tb;

	// Inputs
	reg [3:0] A;

	// Outputs
	wire [1:0] Y;

	// Instantiate the Unit Under Test (UUT)
	encoder42 uut (
		.A(A), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		// Wait 100 ns for global reset to finish
		#100; A= 4'b0001;
		#100; A= 4'b0010;
		#100; A= 4'b0100;
		#100; A= 4'b1000;
        
		// Add stimulus here

	end
      
endmodule

