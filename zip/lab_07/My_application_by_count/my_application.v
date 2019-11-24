`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:43 10/18/2019 
// Design Name: 
// Module Name:    my_applicaton_FSM 
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

reg [1:0] state_num;
reg [1:0] next_state_num;

always @(*) begin
	next_state_num <= state_num;
	case(state_num)
		0 : begin
			if(A) next_state_num <= 1;
			if(B) next_state_num <= 2;
		end
		1 : begin
			next_state_num <= 0;
		end
		2 : begin
			next_state_num <= 0;
		end
		default : next_state_num <= 0;
	endcase
end

//현재상태를 저장하는 순차회로 블록
always @ (posedge clk) begin
	state <= next_state;
end

always @ (negedge clk) begin
	state_num <= next_state_num;
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