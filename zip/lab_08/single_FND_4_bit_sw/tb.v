`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:31:11 10/23/2019
// Design Name:   up_counter
// Module Name:   D:/Xilinx/zip/lab_08/single_FND_4_bit_sw/tb.v
// Project Name:  single_FND_4_bit_sw
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

module tb;

	// Inputs
	reg [3:0] bcd;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	up_counter uut (
		.bcd(bcd), 
		.out(out)
	);

	initial begin
		bcd = 0;
	end
	always #30 bcd=bcd+1;
      
endmodule

