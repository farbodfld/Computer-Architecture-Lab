`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:53 03/08/2021 
// Design Name: 
// Module Name:    Circuit74181 
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
//AEB: A=B output

module Circuit74181 (S, A, B, M, CN, F, G, P, CN4b, AEB);

  input [3:0] A, B, S;
  input CN, M; 
  output [3:0] F;
  output AEB, G, P, CN4b;
	
  TopLevel74181 alu74181 (S, A, B, M, CN, F, G, P, CN4b, AEB);

endmodule 
