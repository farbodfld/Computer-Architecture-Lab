`timescale 1ns / 1ps

module top(
	 input clk , reset,
	 output [15:0] Instr,
	 output [3:0] Flags,
	 output [7:0] ALU_result,ALU_result2,
	 output [7:0] SrcA, SrcB,
	 output PCSrc
	 ); 

	wire [7:0] ReadData;
	wire [7:0] PC; 
	wire [7:0] WriteData , DataAdr;

	//WriteData = write data and get it from second port of register file
	//ReadData = read data from memory
	//Flags = ALUFlags

	cpu cpu(clk, reset, PC, Instr, DataAdr, ALU_result,ALU_result2, WriteData, ReadData, Flags, SrcA, SrcB, PCSrc); 

 	imem imem(PC, Instr);
	dmem dmem(clk, MemWrite, DataAdr, WriteData, ReadData);

endmodule
 
