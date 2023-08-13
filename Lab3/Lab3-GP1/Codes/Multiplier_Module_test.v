`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:37 04/06/2021
// Design Name:   Multiplier_Module
// Module Name:   C:/Xilinx/Lab3/Multiplier_Module_test.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multiplier_Module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Multiplier_Module_test;

	// Inputs
	reg [31:0] multiplicand;
	reg [31:0] multiplier;
	reg clk;
	reg clear;

	// Outputs
	wire [63:0] out;

	// Instantiate the Unit Under Test (UUT)
	Multiplier_Module uut (
		.multiplicand(multiplicand), 
		.multiplier(multiplier), 
		.clk(clk), 
		.clear(clear), 
		.out(out)
	);

	initial begin
		clk = 0;
	
		multiplicand = 5;
		multiplier = 24;
		clear = 1;
		#1.1;
		clear = 0;
		#41;
		
		multiplicand = 42;
		multiplier = 11;
		clear = 1;
		#1.1;
		clear = 0;
		#41;
		
		multiplicand = 20;
		multiplier = 30;
		clear = 1;
		#1.1;
		clear=0;
		#41;
		
	end
	
	always begin
		#1;
		clk = !clk;
	end
      
endmodule

