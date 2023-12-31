`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:35:47 03/08/2021
// Design Name:   Circuit74181
// Module Name:   E:/Xilinx project/experiment 03/ALU74181/Circuit_test.v
// Project Name:  ALU74181
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Circuit74181
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Circuit_test;

	// Inputs
	reg [3:0] S;
	reg [3:0] A;
	reg [3:0] B;
	reg M;
	reg CN;

	// Outputs
	wire [3:0] F;
	wire G;
	wire P;
	wire CN4b;
	wire AEB;

	// Instantiate the Unit Under Test (UUT)
	Circuit74181 uut (
		.S(S), 
		.A(A), 
		.B(B), 
		.M(M), 
		.CN(CN), 
		.F(F), 
		.G(G), 
		.P(P), 
		.CN4b(CN4b), 
		.AEB(AEB)
	);

	initial begin
	
	// m = 0 operates with active high in/out  (cn = 1)
      //1
	   S = 4'b0000;
		A = 4'b0100;
		B = 4'b0010;
		M = 0;
	   CN = 1;
		//2
		#100; S = 4'b0001;
		//3
		#100; S = 4'b0010; B = 4'b0100;
		//4
		#100; S = 4'b0011;
		//5
		#100; S = 4'b0100;
		//6
		#100;	S = 4'b0101; A = 4'b0011; B = 4'b0001;
		//7
		#100; S = 4'b0110;
		//8
		#100; S = 4'b0111;
		//9
		#100; S = 4'b1000; A = 4'b0001; B = 4'b0010;
		//10
		#100; S = 4'b1001; A = 4'b0011;
		//11
		#100; S = 4'b1010;
		//12
		#100; S = 4'b1011;
		//13
		#100; S = 4'b1100; A = 4'b0100; B = 4'b0001;
		//14
		#100; S = 4'b1101;
		//15
		#100; S = 4'b1110; A = 4'b1000;
		//16
		#100; S = 4'b1111;
		
		////// m = 0 operates with active low in/out (cn = 0)
		
		//1
		#100; CN = 0; M = 0; S = 4'b0000; A = 4'b0100; B = 4'b0010;
		//2
		#100; S = 4'b0001;
		//3
		#100; S = 4'b0010; B = 4'b0100;
		//4
		#100; S = 4'b0011;
		//5
		#100; S = 4'b0100;
		//6
		#100;	S = 4'b0101; A = 4'b0011; B = 4'b0001;
		//7
		#100; S = 4'b0110;
		//8
		#100; S = 4'b0111;
		//9
		#100; S = 4'b1000; A = 4'b0001; B = 4'b0010;
		//10
		#100; S = 4'b1001; A = 4'b0011;
		//11
		#100; S = 4'b1010;
		//12
		#100; S = 4'b1011;
		//13
		#100; S = 4'b1100; A = 4'b0100; B = 4'b0001;
		//14
		#100; S = 4'b1101;
		//15
		#100; S = 4'b1110; A = 4'b1000;
		//16
		#100; S = 4'b1111;
		
		// m = 1 operates with active high in/out  (cn = 1)
      //1
		#100;
	   S = 4'b0000;
		A = 4'b0100;
		B = 4'b0010;
		M = 1;
		CN = 1;
		//2
		#100; S = 4'b0001;
		//3
		#100; S = 4'b0010; B = 4'b0100;
		//4
		#100; S = 4'b0011;
		//5
		#100; S = 4'b0100;
		//6
		#100;	S = 4'b0101; A = 4'b0011; B = 4'b0001;
		//7
		#100; S = 4'b0110;
		//8
		#100; S = 4'b0111;
		//9
		#100; S = 4'b1000; A = 4'b0001; B = 4'b0010;
		//10
		#100; S = 4'b1001; A = 4'b0011;
		//11
		#100; S = 4'b1010;
		//12
		#100; S = 4'b1011;
		//13
		#100; S = 4'b1100; A = 4'b0100; B = 4'b0001;
		//14
		#100; S = 4'b1101;
		//15
		#100; S = 4'b1110; A = 4'b1000;
		//16
		#100; S = 4'b1111;
		
		////// m = 1 operates with active low in/out (cn = 0)
		
		//1
		#100; CN = 1; M = 1; S = 4'b0000; A = 4'b0100; B = 4'b0010;
		//2
		#100; S = 4'b0001;
		//3
		#100; S = 4'b0010; B = 4'b0100;
		//4
		#100; S = 4'b0011;
		//5
		#100; S = 4'b0100;
		//6
		#100;	S = 4'b0101; A = 4'b0011; B = 4'b0001;
		//7
		#100; S = 4'b0110;
		//8
		#100; S = 4'b0111;
		//9
		#100; S = 4'b1000; A = 4'b0001; B = 4'b0010;
		//10
		#100; S = 4'b1001; A = 4'b0011;
		//11
		#100; S = 4'b1010;
		//12
		#100; S = 4'b1011;
		//13
		#100; S = 4'b1100; A = 4'b0100; B = 4'b0001;
		//14
		#100; S = 4'b1101;
		//15
		#100; S = 4'b1110; A = 4'b1000;
		//16
		#100; S = 4'b1111;
		
		

	end
      
endmodule

