`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:19:38 03/03/2021
// Design Name:   Three_Digit_BCD
// Module Name:   E:/Xilinx project/experiment 02/BCDAdder_Structural/Three_Digit_BCD_tb.v
// Project Name:  BCDAdder_Structural
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Three_Digit_BCD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Three_Digit_BCD_tb;

	// Inputs
	reg [11:0] A;
	reg [11:0] B;
	reg Cout;

	// Outputs
	
	wire [11:0] Sum;

	// Instantiate the Unit Under Test (UUT)
	Three_Digit_BCD uut (
		.A(A), 
		.B(B), 
		.Sum(Sum),
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cout = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A=12'b000100100100; B=12'b000001110110;// 124+76=200
		#100;
		A=12'b010101011000; B=12'b000101100000;// 558+130=688
		#100;
		A=12'b000000010010; B=12'b000100100000;// 288+18=306
        
		// Add stimulus here

	end
      
endmodule

