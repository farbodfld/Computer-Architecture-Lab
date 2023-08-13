`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:42 10/27/2020 
// Design Name: 
// Module Name:    RAM_mod 
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
module RAM_mod(
    input [7:0] address,
    input [7:0] data,
    input w_r,
    input clk,
    input cs,
    output [7:0] out
    );
B_RAM your_instance_name (
  .clka(clk), // input clka
  .ena(cs), // input ena
  .wea(w_r), // input [0 : 0] wea
  .addra(address), // input [7 : 0] addra
  .dina(data), // input [7 : 0] dina
  .douta(out) // output [7 : 0] douta
);

endmodule
