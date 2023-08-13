`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:48 03/08/2021 
// Design Name: 
// Module Name:    TopLevel74181 
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
module TopLevel74181 (S, A, B, M, CNb, F, G, P, CN4b, AEB);

  input [3:0] A, B, S;
  input CNb, M; 
  output [3:0] F;
  output AEB, G, P, CN4b;
  wire [3:0] E, D, C, Bb;
  
  Emodule Emod1 (A, B, S, E, Bb);
  Dmodule Dmod2 (A, B, Bb, S, D);
  CLAmodule CLAmod3(E, D, CNb, C, G, P, CN4b);
  Summodule Summod4(E, D, C, M, F, AEB);

endmodule 
