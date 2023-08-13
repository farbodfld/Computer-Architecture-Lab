`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:41:35 10/26/2020
// Design Name:   RAM
// Module Name:   D:/CAL/RAM_ROM/RAM_test.v
// Project Name:  RAM_ROM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM_test;

	// Inputs
	reg [7:0] address;
	reg [7:0] Data_in;
	reg W_R;
	reg CS;
	reg CLK;

	// Outputs
	wire [7:0] Data_out;

	// Instantiate the Unit Under Test (UUT)
	RAM_mod uut (
		.address(address), 
		.data(Data_in), 
		.w_r(W_R), 
		.cs(CS), 
		.clk(CLK), 
		.out(Data_out)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		Data_in = 0;
		W_R = 0;
		CS = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		Data_in=8'b11001100;W_R=1;address=0;CS=1;
		
		#100;
		Data_in=8'b11111100;address=1;
		
		#100;
		CS=0;
		
		#100;
		CS=1;W_R=0;address=0;
		
		#100;
		Data_in=8'b11111111;address=1;
		
		
	end
	
	always
	begin
	#10;
	CLK=!CLK;
	end
      
endmodule

