`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:01 04/04/2021 
// Design Name: 
// Module Name:    Multiplicand 
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
module Multiplicand
	#(parameter N=32)
	(
		input [2*N-1:0] multiplicand,
		input clk, clear,
		output [2*N-1:0] updated_multiplicand
	);
	
	reg [2*N-1:0] new_multiplicand;
	
	always @(posedge clk) begin
		if (clear)
			new_multiplicand <= multiplicand;
		else
			new_multiplicand <= new_multiplicand << 1;
	end
	
	assign updated_multiplicand = new_multiplicand;
endmodule
