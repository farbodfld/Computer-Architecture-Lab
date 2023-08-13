`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:15 04/06/2021 
// Design Name: 
// Module Name:    Multiplier_Module 
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
module Multiplier_Module
	#(parameter N=32)
	(
		input [N-1:0] multiplicand,multiplier,
		input clk,clear,
		output [2*N-1:0] out
    );
	 
	 wire [2*N-1:0] updated_multiplicand,sum,updated_product;
	 wire [N-1:0] updated_multiplier;
	 
	 Multiplicand #(N) mltplc({32'b0,multiplicand},clk,clear,updated_multiplicand);
	 Multiplier #(N) multpli(multiplier,clk,clear,updated_multiplier);
	 ALU #(N) alu(updated_multiplicand,updated_product,sum);
	 
	 wire write;
	 assign write = updated_multiplier[0];
	 Product #(N) prd(sum,clk,write,clear,updated_product);
	 
	 assign out = updated_product;
	 

endmodule
