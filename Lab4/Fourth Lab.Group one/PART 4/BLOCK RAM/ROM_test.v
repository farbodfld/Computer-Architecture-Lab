`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:53:00 10/26/2020
// Design Name:   ROM
// Module Name:   D:/CAL/RAM_ROM/ROM_test.v
// Project Name:  RAM_ROM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ROM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ROM_test;

	// Inputs
	reg [2:0] address;
	reg CE;
	reg CLK;

	// Outputs
	wire [7:0] Data_out;

	// Instantiate the Unit Under Test (UUT)
	ROM_mod uut (
		.address(address), 
		.cs(CE), 
		.clk(CLK), 
		.out(Data_out)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		CE = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		CE=1;
		
		#100;
		address=1;
		
		#100;
		address=2;
		
		#100;
		CE=0;address=3;
		
		#100;
		CE=1;
		

	end
	always
	begin
	#10;
	CLK=!CLK;
	end
      
endmodule

