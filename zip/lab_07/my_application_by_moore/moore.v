`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:17 10/17/2019 
// Design Name: 
// Module Name:    moore 
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
module moore(clk,A,B,out,num);
input clk,A,B;
output reg out;
//현재 숫자를 led로 표시하기 위해 output으로 선언하였다.
output reg [3:0] num;

localparam STATE_0 = 1'd0,
			  STATE_1 = 1'd1;		  

//can_push는 지금 숫자 입력이 가능한지 체크하는 변수이다.
reg can_push;


always @(posedge clk) begin
	if(can_push) begin
		//두 개의 버튼 중 하나만 눌린 경우 숫자를 넣어주자.
		if(A^B) begin
			if(A) begin
				num[2:0] <= num[3:1];
				num[3] <= 1;
				//이제 숫자 입력이 불가능해진다.
				can_push = 1'b0;
			end
			else begin
				num[2:0] <= num[3:1];
				num[3] <= 0;
				can_push = 1'b0;
			end
		end
	end
	//두 버튼의 입력이 없는 경우 숫자 입력을 가능하게 바꾸어준다.
	if(A == 0 && B == 0)
		can_push = 1'b1;
	
	//저장되어있는 숫자가 1011인 경우 state를 변경한다.
	if(num == 4'b1011)
		out = STATE_1;
	else
		out = STATE_0;
end



endmodule
