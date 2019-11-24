`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:31 10/18/2019 
// Design Name: 
// Module Name:    check_sync 
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
module check_sync(Input, clk, input_sync);
input Input, clk;
output reg input_sync;

localparam STATE_0 = 1'd0,
			  STATE_1 = 1'd1;

reg state, next_state;

//다음상태를 결정하는 조합회로 블록
always @(*) begin
	next_state = state;
	case (state)
		STATE_0 : begin
			if (Input == 1) next_state = STATE_1;
		end
		STATE_1 : begin
			next_state = STATE_0;
		end	
		default : next_state = STATE_0;
	endcase
end

//현재상태를 저장하는 순차회로 블록
always @ (negedge clk) begin
	state <= next_state;
end

//출력값을 결정하는 조합회로 블록
always @(*) begin
	case (state)
		STATE_0 : begin
			input_sync = 0;
		end
		STATE_1 : begin
			input_sync = 1;
		end
		default : input_sync = 0;
	endcase
end

endmodule
