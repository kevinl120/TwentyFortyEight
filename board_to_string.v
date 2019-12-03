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
module board_to_string(board, processing, clk, print_nxt, char_out);
  input [319:0] board;
  input processing;
  input clk;
  input print_nxt;
  output reg [7:0] char_out;
  
  reg [40:0] cntr = 0;
  reg [2:0] rw = 0;
  reg [2:0] cl = 0;
  reg [15:0] idxp = 0;

  reg [5:0] ln = 0;
  reg [6:0] colloc = 0;
  reg [20:0] curnum = 0;
  
  
  function [8:0] numToChar;
      input [4:0] din;
      begin
         case (din)
           8'h0: numToChar = "0";
           8'h1: numToChar = "1";
           8'h2: numToChar = "2";
           8'h3: numToChar = "3";
           8'h4: numToChar = "4";
           8'h5: numToChar = "5";
           8'h6: numToChar = "6";
           8'h7: numToChar = "7";
           8'h8: numToChar = "8";
           8'h9: numToChar = "9";
         endcase // case (char)
      end
  endfunction // numToChar
  
  
  always @(posedge clk) begin
    if (processing == 0) begin
			  rw<=0;
			  cl<=0;
			  cntr <= 0;
	 end
	 else begin
      if (print_nxt == 1) begin
			ln <= cntr / 31;
			colloc <= cntr % 31;
			idxp <= 62*8 + 124*8*rw + 2*8 + cl*7*8;
			if (colloc == 29) char_out <= "\n";
			else if (colloc == 30) char_out <= "\r";
			else begin
				if (ln < 17) begin
					if (ln % 4 == 0) char_out <= "-";
					else if (ln % 4 == 1 || ln % 4 == 3) begin
					  if (colloc % 7 == 0) char_out <= "|";
					  else char_out <= " ";
					end
					else begin
					  if (colloc % 7 == 0) char_out <= "|";
					  else if (colloc >= idxp && colloc <= idxp + 3) begin
					    curnum <= board[(rw*4+cl)*20+:20];
					    if (colloc == idxp) char_out <= numToChar(curnum / 1000 % 10);
						 if (colloc == idxp+1) char_out <= numToChar(curnum / 100 % 10);
						 if (colloc == idxp+2) char_out <= numToChar(curnum / 10 % 10);
						 if (colloc == idxp+3) begin
						   char_out <= numToChar(curnum / 1 % 10);
							if (rw== 3 && cl==3) begin
							  rw <=0;
							  cl <=0;
							end
							else if (cl == 3) begin
							  rw <= rw+1;
							  cl <= 0;
							end
							else begin 
							  cl <= cl + 1;
							end
					    end
					  end
					  else char_out <= " ";
					end
				end
				else if (ln == 18) begin
				  if (colloc == 0) char_out <= "\n";
				  if (colloc == 1) char_out <= "\r";
				  if (colloc == 2) char_out <= "\n";
				  if (colloc == 3) char_out <= "\r";
				end
			end
			cntr <= cntr + 1;
		 end
    end
  end
endmodule
