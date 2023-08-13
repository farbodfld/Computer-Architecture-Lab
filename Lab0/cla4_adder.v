`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:20 02/23/2021 
// Design Name: 
// Module Name:    cla4_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cla4_adder(
    input [3:0] a,
    input [3:0] b,
    input cin,
    output [3:0] sum,
    output cout
    );
	 
	wire [4:0] c;
	assign c[0] = cin;
	 
  genvar i;
  generate
    for (i=0; i<4;i=i+1) 
			begin : foo
				assign c[i+1] = (a[i] & b[i]) | ((a[i] | b[i]) & c[i]);	
				assign sum[i] = a[i] ^ b[i] ^ c[i];
			end
	endgenerate
	
	assign cout = c[4];


endmodule
