`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:58 03/03/2021 
// Design Name: 
// Module Name:    BCDadder 
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
module BCDadder(
    input [3:0] A,
    input [3:0] B,
    input Cin,
	 input [3:0] Sum,
    output Cout
    );

wire [1:0]connectors;
wire [3:0]sumb;
wire coutb;
wire cout2;

FullAdder F_A1 (A,B,Cin,coutb,sumb);
FullAdder F_A2 (sumb,{1'b0,Cout,Cout,1'b0},1'b0,cout2,Sum);

and(connectors[0],sumb[3],sumb[2]);
and(connectors[1],sumb[3],sumb[1]);
or (Cout,connectors[1],connectors[0],coutb);

endmodule
