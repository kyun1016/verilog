`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:25:22 10/12/2019
// Design Name:   up_counter
// Module Name:   D:/Xilinx/zip/lab_06/up_counter_8_bit/up_counter_tb.v
// Project Name:  up_counter_8_bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: up_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module up_counter_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [7:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	up_counter uut (
		.clk(clk), 
		.reset(reset), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		// Wait 100 ns for global reset to finish
		reset <= #100 0;
		reset <= #110 1;
		
        
		// Add stimulus here

	end
	
	always begin
		#50 clk <= 1;
		#50 clk <= 0;
	end
      
endmodule

