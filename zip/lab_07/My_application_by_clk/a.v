`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:26 10/21/2019 
// Design Name: 
// Module Name:    a 
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
//현재 숫자를 led로 표시하기 위해 output으로 선언하였다.
output reg [3:0] num;

localparam STATE_0 = 1'd0,
			  STATE_1 = 1'd1;

reg state, next_state;

//다음상태를 결정하는 조합회로 블록
always @(*) begin
	next_state = state;
	case (state)
		STATE_0 : begin
			if (num == 4'b1011) next_state = STATE_1;
			else next_state = STATE_0;
		end
		STATE_1 : begin
			if (num == 4'b1011) next_state = STATE_1;
			else next_state = STATE_0;
		end
		default : next_state = STATE_0;
	endcase
end

//현재상태를 저장하는 순차회로 블록
always @ (posedge clk) begin
	state <= next_state;
end


reg delay_A,delay_B,sync_A,sync_B;
//negedge 신호에서 sw의 입력을 받는다.
always @(negedge clk) begin
	delay_A <= A; sync_A <= A&~delay_A;
	delay_B <= B; sync_B <= B&~delay_B;
	//동시에 들어오는 입력은 무시해주자.
	if(sync_A^sync_B) begin
		if(sync_A) num <= {num[2:0], 1'b1};
		else num <= {num[2:0], 1'b0};
	end
end

//출력값을 결정하는 조합회로 블록
always @(*) begin
	case (state)
		STATE_0 : begin
			out = 0;
		end
		STATE_1 : begin
			out = 1;
		end
		default : out = 0;
	endcase
end

endmodule