module dmem(input clk, we,
		input [7:0] a, wd,
		output  [7:0] rd);

	reg [7:0] RAM[63:0];
	assign rd = RAM[a[7:2]]; // word aligned

	always @(posedge clk)
		if (we) RAM[a[7:2]] <= wd;
endmodule
