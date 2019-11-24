`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:26:50 10/23/2019 
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

module piezo(clk,FND_out,piezo_out,sw);
input clk;
input [7:0] sw;
output reg [7:0] FND_out;
output reg piezo_out;

parameter C_tone = 956,
			 D_tone = 851,
			 E_tone = 758,
			 F_tone = 716,
			 G_tone = 638,
			 A_tone = 568,
			 B_tone = 506;
			 
localparam NUM_1 = 8'b01100000,	//0
			  NUM_2 = 8'b11011010,	//2
			  NUM_3 = 8'b11110010,	//3
			  NUM_4 = 8'b01100110,	//4
			  NUM_5 = 8'b10110110,	//5
			  NUM_6 = 8'b10111110,	//6
			  NUM_7 = 8'b11100000,	//7
			  NUM_8 = 8'b11111110,	//8
			  NUM_9 = 8'b11110110,	//9
			  NUM_0 = 8'b11111110;	//0

integer piezo_count;

always @ (posedge clk) begin
	if(sw == 8'b10000000) begin
		FND_out = NUM_1;
		if(piezo_count >= C_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b01000000) begin
		FND_out = NUM_2;
		if(piezo_count >= D_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00100000) begin
		FND_out = NUM_3;
		if(piezo_count >= E_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00010000) begin
		FND_out = NUM_4;
		if(piezo_count >= F_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00001000) begin
		FND_out = NUM_5;
		if(piezo_count >= G_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00000100) begin
		FND_out = NUM_6;
		if(piezo_count >= A_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00000010) begin
		FND_out = NUM_7;
		if(piezo_count >= B_tone) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else if(sw == 8'b00000001) begin
		FND_out = NUM_8;
		if(piezo_count >= C_tone/2) begin
			piezo_out = ~piezo_out;
			piezo_count = 0;
		end
		else
			piezo_count = piezo_count + 1;
	end
	else begin
		piezo_count = 0;
		piezo_out = 0;
		FND_out = NUM_0;
	end
end

endmodule
