`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:55:48 04/20/2021 
// Design Name: 
// Module Name:    cache 
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
module cache(
	 input clk,
    input [7:0] address,
    input [31:0] data,
    output reg hit,
    output reg [7:0] out
    );
	 
	 reg [7:0] m00 [0:7];
	 reg [7:0] m01 [0:7];
	 reg [7:0] m10 [0:7];
	 reg [7:0] m11 [0:7];
	 reg [2:0] tag [0:7];
	 reg [7:0] v;
	 
	 initial begin 
	 v=8'b00000000;
	 end
	 
	 always @(posedge clk)
	 if(clk) begin
		if ( address [7:5] == tag [ address [4:2] ] && v [ address [7:5] ] == 1 ) begin
			hit <= 1;
			if( address[1:0] == 0 ) begin
				out <= m00[ address [7:5] ];
			end else if( address[1:0] == 1 ) begin
				out <= m01[ address [7:5] ];
			end else if( address[1:0] == 2 ) begin
				out <= m10[ address [7:5] ];
			end else begin
				out <= m11[ address [7:5] ];
			end
		end
		else begin
			v [ address [4:2] ] <= 1;
			tag [ address [4:2] ] <= address [7:5];
			hit <= 0;
			m00[ address [7:5] ] = data [7:0];
			m01[ address [7:5] ] = data [15:8];
			m10[ address [7:5] ] = data [23:16];
			m11[ address [7:5] ] = data [31:24];
			if( address[1:0] == 0 ) begin
				out <= m00[ address [7:5] ];
			end else if( address[1:0] == 1 ) begin
				out <= m01[ address [7:5] ];
			end else if( address[1:0] == 2 ) begin
				out <= m10[ address [7:5] ];
			end else begin
				out <= m11[ address [7:5] ];
			end
		end
	 end

endmodule
