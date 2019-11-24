`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:34:28 10/02/2019
// Design Name:   mux_21_by_case
// Module Name:   D:/Xilinx/zip/lab_05/Mux_21_by_case/mux21_tb.v
// Project Name:  Mux_21_by_case
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_21_by_case
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux21_tb;

	// Inputs
	reg [1:0] A;
	reg S;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	mux_21_by_case uut (
		.A(A), 
		.S(S), 
		.Q(Q)
	);

	initial 
	begin
		A = 0; S = 0;
		#200; S = 1;
	end
	
	always 
	begin
		A[0] = 0; #50;
		A[0] = 1; #50;
   end
	
	always 
	begin
		A[1] = 0; #100;
		A[1] = 1; #100;
   end     
      
endmodule

