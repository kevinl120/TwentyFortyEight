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
module board_to_string(board, start, clk, print_nxt, score, char_out, done);
  input [319:0] board;
  input start;
  input clk;
  input print_nxt;
  input [20:0] score;
  output reg [7:0] char_out;
  output reg done = 1;
  
  reg [15:0] cntr = 0;
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
    if (start == 1) begin
	   // $display("Starting...");
	   done <= 0;
    end
	 else begin
		 if (done == 1) begin
				  // $display("ENDED...");
				  rw <= 0;
				  cl <= 0;
				  cntr <= 0;
		 end
		 else begin
			if (print_nxt == 1) begin
				ln <= cntr / 31;
				colloc <= cntr % 31;
				idxp <= 62 + 124*rw + 2 + cl*7+1;
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
						  else if (cntr >= idxp && cntr <= idxp + 3) begin
							 curnum <= board[(rw*4+cl)*20+:20];
							 if (cntr == idxp) char_out <= numToChar((curnum / 1000) % 10);
							 if (cntr == idxp+1) char_out <= numToChar((curnum / 100) % 10);
							 if (cntr == idxp+2) char_out <= numToChar((curnum / 10) % 10);
							 if (cntr == idxp+3) begin
								char_out <= numToChar(curnum % 10);
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
					  else if (colloc == 1) char_out <= "\r";
					  else if (colloc == 2) char_out <= "\n";
					  else if (colloc == 3) char_out <= "\r";
					  else if (colloc == 4) char_out <= "s";
					  else if (colloc == 5) char_out <= "c";
					  else if (colloc == 6) char_out <= "o";
					  else if (colloc == 7) char_out <= "r";
					  else if (colloc == 8) char_out <= "e";
					  else if (colloc == 9) char_out <= ":";
					  else if (colloc == 10) char_out <= " ";
					  else if (colloc == 11) char_out <= numToChar((score/1000000)%10);
					  else if (colloc == 12) char_out <= numToChar((score/100000)%10);
					  else if (colloc == 13) char_out <= numToChar((score/10000)%10);
					  else if (colloc == 14) char_out <= numToChar((score/1000)%10);
					  else if (colloc == 15) char_out <= numToChar((score/100)%10);
					  else if (colloc == 16) char_out <= numToChar((score/10)%10);
					  else if (colloc == 17) char_out <= numToChar((score/1)%10);
					  else if (colloc == 18) char_out <= "\n";
					  else if (colloc == 19) char_out <= "\r";
					  else if (colloc == 20) char_out <= "\n";
					  else if (colloc == 21) char_out <= "\r";
					  else done <= 1;
					end
				end
				// $write("%c", char_out);
				cntr <= cntr + 1;
			 end
		 end
	 end
	 /*
	 if (colloc % 14 == 13) char_out <= "|";
	 else if (colloc % 14 == 12) char_out <= "-";
	 else if (colloc % 14 == 11) char_out <= "\n";
	 else if (colloc % 14 == 10) char_out <= "\r";
	 else if (colloc % 14 < 10) char_out <= numToChar(colloc % 13);
	 */
  end
endmodule
