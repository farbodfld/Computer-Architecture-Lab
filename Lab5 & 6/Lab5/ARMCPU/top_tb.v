`timescale 1ns / 1ps

module top_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [15:0] Instr;
	wire [3:0] Flags;
	wire [7:0] ALUResult;
	wire [7:0] ALUResult2;
	wire [7:0] SrcA;
	wire [7:0] SrcB;
	wire PCSrc;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.reset(reset), 
		.Instr(Instr), 
		.Flags(Flags), 
		.ALU_result(ALUResult), 
		.ALU_result2(ALUResult2), 
		.SrcA(SrcA), 
		.SrcB(SrcB), 
		.PCSrc(PCSrc)
	);

	always #5 clk = ~clk;
	
	initial
	begin
		clk = 1;
		reset = 1; 
		#21; 
		reset = 0;
	end
	
endmodule

