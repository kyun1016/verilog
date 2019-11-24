`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:56 10/17/2019 
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
module moore(in,out,reset,clk,state_out);
input in,clk,reset;
output reg out;
output reg [3:0] state_out;

localparam STATE_0 = 2'd0,
			  STATE_1 = 2'd1,
			  STATE_2 = 2'd2,
			  STATE_3 = 2'd3;
			  
reg [1:0] state;
reg [1:0] next_state;

always @(*) begin
	next_state = state;
	case (state)
		STATE_0 : begin
			if (in == 0) next_state = STATE_1;
		end
		STATE_1 : begin
			if (in == 1) next_state = STATE_2;
		end
		STATE_2 : begin
			if (in == 0) next_state = STATE_3;
		end
      STATE_3 : begin
			if (in == 0) next_state = STATE_1;
			else next_state = STATE_2;
		end		
		default : next_state = STATE_0;
	endcase
end

always @ (posedge clk, negedge reset) begin
	if(~reset) state <= STATE_0;
	else state <= next_state;
end

always @(*) begin
	out = 0;
	state_out = 4'b0000;
	case (state)
		STATE_0 : begin
			out = 0;
			state_out[0] = 1'b1;
		end
		STATE_1 : begin
			out = 0;
			state_out[1] = 1'b1;
		end
		STATE_2 : begin
			out = 0;
			state_out[2] = 1'b1;
		end
      STATE_3 : begin
			out = 1;
			state_out[3] = 1'b1;
		end		
		default : out = 0;
	endcase
end

endmodule
