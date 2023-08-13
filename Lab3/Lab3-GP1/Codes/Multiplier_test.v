`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:50:09 04/04/2021
// Design Name:   Multiplier
// Module Name:   C:/Xilinx/Lab3/Multiplier_test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Multiplier_test;

	// Inputs
	reg [31:0] multiplier;
	reg clk;
	reg clear;

	// Outputs
	wire [31:0] updated_multiplier;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.multiplier(multiplier), 
		.clk(clk), 
		.clear(clear), 
		.updated_multiplier(updated_multiplier)
	);

	initial begin
		// Initialize Inputs
		multiplier = 1024;
		clk = 0;
		clear = 1;
		#3;
		clear = 0;
		// Add stimulus here

	end
	
	always begin
		#2;
		clk = !clk;
	end
      
endmodule

