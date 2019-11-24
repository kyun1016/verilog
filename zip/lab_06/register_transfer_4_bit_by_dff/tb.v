`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:37:22 10/12/2019
// Design Name:   pt4
// Module Name:   D:/Xilinx/zip/lab_06/register_transfer_4_bit_by_dff/tb.v
// Project Name:  register_transfer_4_bit_by_dff
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pt4
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
	reg [3:0] data_in;
	reg clk;

	// Outputs
	wire [3:0] a;
	wire [3:0] b;

	// Instantiate the Unit Under Test (UUT)
	pt4 uut (
		.data_in(data_in), 
		.clk(clk), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		clk = 0;
	end
	
	always begin
		#50 clk = 1; #50 clk = 0;
   end
	
	always begin
		#50 data_in = data_in + 1;
	end
	
endmodule

