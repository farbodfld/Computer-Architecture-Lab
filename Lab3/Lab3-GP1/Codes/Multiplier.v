`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:00 04/04/2021 
// Design Name: 
// Module Name:    Multiplier 
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
module Multiplier
	#(parameter N=32)
	(
		input [N-1:0] multiplier,
		input clk, clear,
		output [N-1:0] updated_multiplier
	);
	
	reg [N-1:0] new_multiplier;
	
	always @(posedge clk) begin
		if (clear)
			new_multiplier <= multiplier;
		else
			new_multiplier <= new_multiplier >> 1;
	end
	
	assign updated_multiplier = new_multiplier;
endmodule
