`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:36 10/12/2019
// Design Name:   counter
// Module Name:   D:/Xilinx/zip/lab_06/counter_4_bit_with_clk/tb.v
// Project Name:  counter_4_bit_with_clk
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
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
	reg en;
	reg mode;
	reg [3:0] data;
	reg load;
	reg reset;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.clk(clk), 
		.q(q), 
		.en(en), 
		.mode(mode), 
		.data(data), 
		.load(load), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 1;
		mode = 0;
		data = 0;
		load = 0;
		reset = 1;
		
		reset <= #60 0;
		reset <= #70 1;
		#300 mode = 1;
		#300 data = 5; load = 1;
		#100 load = 0;
		#200 en = 0;
	end
	
	always begin
		#50 clk = clk + 1;
	end
      
endmodule

