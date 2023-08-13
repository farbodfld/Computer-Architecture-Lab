`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:04:10 03/03/2021
// Design Name:   BCDadder
// Module Name:   E:/Xilinx project/experiment 02/BCDAdder_Structural/BCD_tb.v
// Project Name:  BCDAdder_Structural
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCDadder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BCD_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Cin;

	// Outputs
	wire [3:0] Sum;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	BCDadder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Cout(Cout), 
		.Sum(Sum)
	);

		// Initialize Inputs
		 integer i;

	initial begin
	
			for (i = 1 ; i < 100 ; i = i + 1) begin :foo1
				A = i%10;
				B = i/10;
				Cin = 0;
				#10;
			end
			
			for (i = 1 ; i < 100 ; i = i + 1) begin : foo2
				A = i%10;
				B = i/10;
				Cin = 1;
				#10;
			end

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

