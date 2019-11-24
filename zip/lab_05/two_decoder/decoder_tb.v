`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:13:00 10/02/2019
// Design Name:   decoder24
// Module Name:   D:/Xilinx/zip/lab_05/two_decoder/decoder_tb.v
// Project Name:  two_decoder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder24
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder_tb;

	// Inputs
	reg [1:0] A;

	// Outputs
	wire [3:0] Y;

	// Instantiate the Unit Under Test (UUT)
	decoder24 uut (
		.A(A), 
		.Y(Y)
	);

	initial begin
		// Initialize Inputs
		A = 0;

		// Wait 100 ns for global reset to finish
		#50; A=0;
		#50; A=1;
		#50; A=2;
		#50; A=3;
        
		// Add stimulus here

	end
      
endmodule

