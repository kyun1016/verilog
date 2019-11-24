`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:14 10/22/2019 
// Design Name: 
// Module Name:    my_app 
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
module my_applicaton(clk,A,B,out,num);
input clk,A,B;
output reg out;
//���� ���ڸ� led�� ǥ���ϱ� ���� output���� �����Ͽ���.
output reg [3:0] num;

//������¸� �����ϴ� ����ȸ�� ���
always @ (posedge clk) begin
	if(num == 4'b1011)
		out = 1'b1;
	else
		out = 1'b0;
end

reg delay_A,delay_B,data_A,data_B;

always @ (negedge clk) begin
	delay_A <= ~A; data_A <= A&delay_A;
	delay_B <= ~B; data_B <= B&delay_B;
	
	if(data_A^data_B) begin
		if(data_A) num <= {num[2:0] , 1'b1};
		else num <= {num[2:0] , 1'b0};
	end
end

endmodule