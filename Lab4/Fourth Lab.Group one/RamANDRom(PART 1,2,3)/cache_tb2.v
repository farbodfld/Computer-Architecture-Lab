`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:56:51 04/20/2021
// Design Name:   cache
// Module Name:   E:/Xilinx project/fourth lap.Group one/RamANDRom/cache_tb2.v
// Project Name:  RamANDRom
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cache
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cache_test;

	// Inputs
	reg clk;
	reg [7:0] address;
	reg [31:0] data;

	// Outputs
	wire hit;
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	cache uut (
		.clk(clk), 
		.address(address), 
		.data(data), 
		.hit(hit), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		address = 0;
		data = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		address = 8'b11111111;
		data = 1564235;
		#100;
		
		address = 8'b11111100;
		#100;
		
		address = 8'b11111101;
		#100;
		
		address = 8'b11111110;
		#100;
		
		address = 8'b11111111;
		#100;

	end
	
	always begin
		clk = !clk;
		#10;
	end
      
endmodule
