`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:37:52 04/20/2021
// Design Name:   ROM_256_to_8
// Module Name:   E:/Xilinx project/fourth lap.Group one/RamANDRom/ROM_test.v
// Project Name:  RamANDRom
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ROM_256_to_8
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
	reg clk;
	reg en;
	reg [7:0] address;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	ROM_256_to_8 uut (
		.clk(clk), 
		.en(en), 
		.address(address), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 1;
		address = 0;

     #20;
	  address = 5;
	  #20;
	  address = 30;
	  #20;
	  address = 61;
	  #20;
	  address = 84;
	  #20;
	  address = 120;
	  #20;
	  address = 143;
	  #20;
	  address = 152;
	  #20;
	  address = 155;
	  #20;
	  address = 33;
	  #20;
	  address = 68;
	  #20;
	  address = 95;
	  #20;
	  address = 111;
	  #20;
	  address = 123;
	  #20;
	  address = 143;
	  #20;
	  address = 152;
		end
			 always #10 clk = ~clk;
      
endmodule

