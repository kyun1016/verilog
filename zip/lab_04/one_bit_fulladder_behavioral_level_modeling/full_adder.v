`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:31:39 09/25/2019 
// Design Name: 
// Module Name:    full_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module half_adder(A,B,S,C);
input A, B;
output S, C;

reg S, C;

always @ (A,B)
begin
	if(A && B)
	begin
		C = 1'b1;
		S = 1'b0;
	end
	else if(A || B)
	begin
		C = 1'b0;
		S = 1'b1;
	end
	else
	begin
		C = 1'b0;
		S = 1'b0;
	end

end

endmodule


module full_adder(A,B,Cin, Cout, S);
	input A, B, Cin;
	output S, Cout;
	
	//module instantiation
//	wire w1, w2, w3;
//	half_adder U1 (A, B, w1, w2);
//	half_adder U2 (w1, Cin, S, w3);
//	assign Cout = w2|w3;
	
	//Behavioral level modeling
	reg S, Cout;
	always @ (A,B,Cin)
	begin
		if(A&B || A&Cin || B&Cin)
			Cout = 1'b1;
		else
			Cout = 1'b0;
		if(A^B^Cin)
			S = 1'b1;
		else
			S = 1'b0;
		
	end
	

endmodule