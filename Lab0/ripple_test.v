`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:53 02/23/2021
// Design Name:   ripple_adder
// Module Name:   D:/Xilinx/project_one/ripple_adder_genvar/ripple_test.v
// Project Name:  ripple_adder_genvar
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ripple_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ripple_test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg cin;

	// Outputs
	wire [3:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	ripple_adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin

		a = 4'b0011; b = 4'b1100; cin = 1'b0; #100;
		a = 4'b0011; b = 4'b1100; cin = 1'b1; #100;
		a = 4'b0001; b = 4'b1111; cin = 1'b1; #100;


	end
      
endmodule

