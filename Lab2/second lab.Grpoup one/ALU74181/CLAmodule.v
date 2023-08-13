`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:29:49 03/08/2021 
// Design Name: 
// Module Name:    CLAmodule 
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
// Gb=E from Ebodule     Pb=D from Dmodule


module CLAmodule(Gb, Pb, CNb, C, Gg, Pp, CN4b);

  input [3:0] Gb, Pb;
  input CNb; 
  output [3:0] C;
  output Gg, Pp, CN4b;

	//c[0] = ~CNb
  not C0gate(C[0], CNb);

	//Pb0=Pb[0] 
  buf Pb0gate(Pb0, Pb[0]);
  and CNbGb0gate(CNbGb0, CNb, Gb[0]);

	//Pb1=Pb[1]
  buf Pb1gate(Pb1, Pb[1]);
  and Pb0Gb1gate(Pb0Gb1, Pb[0], Gb[1]);
  and CNbGb01gate(CNbGb01, CNb, Gb[0], Gb[1]);

  buf Pb2gate(Pb2, Pb[2]);
  and Pb1Gb2gate(Pb1Gb2, Pb[1], Gb[2]);
  and Pb0Gb12gate(Pb0Gb12, Pb[0], Gb[1], Gb[2]);
  and CNbGb012gate(CNbGb012, CNb, Gb[0], Gb[1], Gb[2]);

  buf Pb3gate(Pb3, Pb[3]);
  and Pb2Gb3gate(Pb2Gb3, Pb[2], Gb[3]);
  and Pb1Gb23gate(Pb1Gb23, Pb[1], Gb[2], Gb[3]);
  and Pb0Gb123gate(Pb0Gb123, Pb[0], Gb[1], Gb[2], Gb[3]);

	// Gg= ~&Gb
  nand Gggate(Gg, Gb[0], Gb[1], Gb[2], Gb[3]);
  
	// Pp = ~(Pb[3]|(Pb[2]&Gb[3])|(Pb[1]&Gb[2]&Gb[3])|(Pb[0]&Gb[1]&Gb[2]&Gb[3]))
  nor Ppgate(Pp, Pb3,Pb2Gb3,Pb1Gb23,Pb0Gb123);
  nand GgCNbgate(GgCNb, Gb[0], Gb[1], Gb[2], Gb[3], CNb);

  nand CN4bgate(CN4b, Pp, GgCNb);

  nor C3gate(C[3], Pb2, Pb1Gb2, Pb0Gb12, CNbGb012);

  nor C2gate(C[2], Pb1, Pb0Gb1, CNbGb01);

  nor C1gate(C[1], Pb0, CNbGb0);

endmodule /* CLAmodule */
