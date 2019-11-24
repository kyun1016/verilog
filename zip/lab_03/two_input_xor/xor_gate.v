`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:27 09/18/2019 
// Design Name: 
// Module Name:    xor_gate 
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
module xor_gate(
    input A,
    input B,
    output X
    );

//��Ʈ ���� ������
assign X = A^B;

//����Ʈ ������Ƽ�� �𵨸�
xor U0(X, A, B);

//Behavioral �𵨸�
reg X;
always @ (A,B)
begin
	if((A==1 && B==0) || (A==0 && B==1))
		X = 1'b1;
	else
		X = 1'b0;
end

endmodule
