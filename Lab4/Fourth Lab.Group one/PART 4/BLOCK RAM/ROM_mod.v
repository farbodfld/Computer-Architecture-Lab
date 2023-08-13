`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:48 10/27/2020 
// Design Name: 
// Module Name:    ROM_mod 
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
module ROM_mod(
    input clk,
    input cs,
    input [2:0] address,
    output [7:0] out
    );

B_ROM your_instance_name (
  .clka(clk), // input clka
  .ena(cs), // input ena
  .addra(address), // input [2 : 0] addra
  .douta(out) // output [7 : 0] douta
);

endmodule
