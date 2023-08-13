`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:41 03/03/2021 
// Design Name: 
// Module Name:    Three_Digit_BCD 
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
module Three_Digit_BCD(
    input [11:0] A,
    input [11:0] B,
	 output [11:0] Sum,
    output Cout
	 );

wire c1,c2;
BCDadder bcd1 (A[3:0],B[3:0],0,Sum[3:0],c1);
BCDadder bcd2 (A[7:4],B[7:4],c1,Sum[7:4],c2);
BCDadder bcd3 (A[11:8],B[11:8],c2,Sum[11:8],Cout);

endmodule
