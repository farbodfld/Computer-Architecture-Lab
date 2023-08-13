`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:32:30 04/20/2021
// Design Name:   RAM_256
// Module Name:   E:/Xilinx project/fourth lap.Group one/RamANDRom/Ram_test.v
// Project Name:  RamANDRom
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM_256
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
	reg [7:0] data_in;
	reg [7:0] address;
	reg W_R;
	reg CS;
	reg clk;

	// Outputs
	wire [7:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	RAM_256 uut (
		.data_in(data_in), 
		.address(address), 
		.W_R(W_R), 
		.CS(CS), 
		.clk(clk), 
		.data_out(data_out)
	);

	initial begin
		
		  // Initialize Inputs

  data_in  = 8'b0;

  address  = 8'b0;

  CS  = 1'b1;

  clk  = 1'b0;
  
  W_R = 1;


  // Wait 100 ns for global reset to finish

  #20;

  data_in  = 8'h0;

  address  = 8'h0;

  #20;

  data_in  = 8'h1;

  address  = 8'h1;

  #20;

  data_in  = 8'h10;

  address  = 8'h2;

  #20;

  data_in  = 8'h6;

  address  = 8'h3;

  #20;

  data_in  = 8'h12;

  address  = 8'h4;
  
  #20;

  data_in  = 8'h10;

  address  = 8'h5;
  
  #20;

  data_in  = 8'h19;

  address  = 8'h6;
  
  #20;

  data_in  = 8'h4;

  address  = 8'h7;

  #40;

  address  = 8'h0;

  W_R  = 1'b0;

  #20;

  address   = 8'h1;

  #20;

  address   = 8'h2;

  #20;

  address   = 8'h3;

  #20;

  address   = 8'h4;
  
  #20;

  address   = 8'h5;
  
  #20;

  address   = 8'h6;
  
  #20;

  address   = 8'h7;
  
  #20;
  
  CS = 0;

 end

   

 always #10 clk = ~clk;

      
endmodule

