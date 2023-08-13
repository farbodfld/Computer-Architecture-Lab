`timescale 1ns / 1ps

module imem(input [7:0] a,
	output [15:0] rd);

	reg [16:0] RAM[256:0];
	initial begin
		$readmemb("/home/parsa/ISEProjects/ARMCPU/memfile.dat",RAM);
	end
	assign rd = RAM[a[7:2]]; // word aligned

endmodule