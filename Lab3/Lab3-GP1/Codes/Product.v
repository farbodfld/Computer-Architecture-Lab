`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:30:01 04/06/2021 
// Design Name: 
// Module Name:    Product 
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
module Product
	#(parameter N=32)
	(
		input [2*N-1:0] sum,
		input clk,write,clear,
		output [2*N-1:0] product
    );
	 
	 reg [2*N-1:0] new_product;
	 always @ (posedge clk) begin
		if (clear)
			new_product <= 0;
		else if (write)
			new_product <= sum;
	 end
	 
	 assign product = new_product;


endmodule
