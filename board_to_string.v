`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:59 11/27/2019 
// Design Name: 
// Module Name:    board_to_string 
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
module board_to_string(board, display_string, clk);
  input [319:0] board;
  output [5000-1] display_string;
  input clk;
  
  always @(posedge clk) begin
    
  end
endmodule
