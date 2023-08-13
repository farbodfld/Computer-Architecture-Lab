`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:11 04/20/2021 
// Design Name: 
// Module Name:    Ram_256 
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
module RAM_256(data_in, address, W_R, CS, clk, data_out);
output [7:0] data_out;
input [7:0] data_in;
input [7:0] address;
input W_R, CS, clk;
reg [7:0] out;
reg [7:0] DATA[255:0];
 
always @(posedge clk)
begin 
         if (CS == 1) 
      begin
            if(W_R == 1'b0) //READ
              out = DATA[address];
            else
               if(W_R == 1'b1)
					begin //WRITE
                 DATA[address] = data_in;
					  out = data_in;  //Optional
					end
		end
         else
            out=8'bz;
end
     assign data_out = out;
endmodule
