`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:35 04/20/2021 
// Design Name: 
// Module Name:    ROM_256_to_8 
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
module ROM_256_to_8(input clk, input en, input[7:0] address, output reg[7:0] out);

integer i;

always @(posedge clk) begin

   if(en == 1'b1) begin
	
	    for (i = 0; i < 20; i = i + 1) begin	
            case(address)		 
         i: out <= 20;
			    endcase
         end
			    for (i = 20; i < 40; i = i + 1) begin	
               case(address)				 
         i: out <= 42;
			      endcase
         end
			
			    for (i = 40; i < 60; i = i + 1) begin		
                 case(address)				 
         i: out <= 56;
			        endcase
         end
			
			    for (i = 60; i < 80; i = i + 1) begin	
                 case(address)				 
         i: out <= 73;
			        endcase
         end
			
			    for (i = 80; i < 100; i = i + 1) begin
                 case(address)				 
         i: out <= 2;
			        endcase
         end
			
			    for (i = 100; i < 120; i = i + 1) begin
                 case(address)				 
         i: out <= 5;
			        endcase
         end
			
			    for (i = 120; i < 140; i = i + 1) begin	
                 case(address)				 
         i: out <= 6;
			        endcase
         end
			
			    for (i = 140; i < 160; i = i + 1) begin	
                 case(address)				 
         i: out <= 31;
			        endcase
         end
			
			    for (i = 160; i < 180; i = i + 1) begin	
                 case(address)				 
         i: out <= 57;
			        endcase
         end
			
			    for (i = 180; i < 200; i = i + 1) begin	
                case(address)				 
         i: out <= 21;
			       endcase
         end
			
			    for (i = 200; i < 220; i = i + 1) begin
                case(address)				 
         i: out <= 12;
			       endcase
         end
			
			    for (i = 220; i < 240; i = i + 1) begin		
                 case(address)				 
         i: out <= 9;
			        endcase
         end
			
			    for (i = 240; i < 256; i = i + 1) begin
                 case(address)				 
         i: out <= 35;
			        endcase
         end
			
		end
	
	end
endmodule
