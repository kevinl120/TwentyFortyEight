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
  output reg [5000-1:0] display_string;
  reg [5000-1:0] str_builder;
  input clk;
  reg [5:0] clkcounter;
  
  
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
  function [31:0] numToString;
      input [19:0] din;
      begin
			  numToString[32-1:8*3] = numToChar(din/1000);
			  numToString[32-1-8:8*2] = numToChar(din/100 % 10);
			  numToString[32-1-8*2:8*1] = numToChar(din/10 % 10);
			  numToString[32-1-8*3:0] = numToChar(din % 10);
      end
   endfunction
  reg [2:0] rw;
  reg [2:0] cl;
  reg [15:0] idxp;
  reg [32:0] numstr;
  
  always @(posedge clk) begin
    clkcounter <= clkcounter + 1;
    if (clkcounter == 40) begin
	   if (rw == 0 && cl == 0)
        str_builder <= "-----------------------------\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r-----------------------------\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r-----------------------------\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r-----------------------------\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r|      |      |      |      |\n\r-----------------------------\n\r";
      idxp <= 62*8 + 124*8*rw + 2*8 + cl*8*8;
		numstr <= numToString( board[(rw*4+cl)*20+:20]);
		str_builder [5000-1-idxp] <= numstr[31];
		str_builder [5000-1-idxp-1] <= numstr[31-1];
		str_builder [5000-1-idxp-2] <= numstr[31-2];
		str_builder [5000-1-idxp-3] <= numstr[31-3];
		str_builder [5000-1-idxp-4] <= numstr[31-4];
		str_builder [5000-1-idxp-5] <= numstr[31-5];
		str_builder [5000-1-idxp-6] <= numstr[31-6];
		str_builder [5000-1-idxp-7] <= numstr[31-7];
		str_builder [5000-1-idxp-8] <= numstr[31-8];
		str_builder [5000-1-idxp-9] <= numstr[31-9];
		str_builder [5000-1-idxp-10] <= numstr[31-10];
		str_builder [5000-1-idxp-11] <= numstr[31-11];
		str_builder [5000-1-idxp-12] <= numstr[31-12];
		str_builder [5000-1-idxp-13] <= numstr[31-13];
		str_builder [5000-1-idxp-14] <= numstr[31-14];
		str_builder [5000-1-idxp-15] <= numstr[31-15];
		str_builder [5000-1-idxp-16] <= numstr[31-16];
		str_builder [5000-1-idxp-17] <= numstr[31-17];
		str_builder [5000-1-idxp-18] <= numstr[31-18];
		str_builder [5000-1-idxp-19] <= numstr[31-19];
		str_builder [5000-1-idxp-20] <= numstr[31-20];
		str_builder [5000-1-idxp-21] <= numstr[31-21];
		str_builder [5000-1-idxp-22] <= numstr[31-22];
		str_builder [5000-1-idxp-23] <= numstr[31-23];
		str_builder [5000-1-idxp-24] <= numstr[31-24];
		str_builder [5000-1-idxp-25] <= numstr[31-25];
		str_builder [5000-1-idxp-26] <= numstr[31-26];
		str_builder [5000-1-idxp-27] <= numstr[31-27];
		str_builder [5000-1-idxp-28] <= numstr[31-28];
		str_builder [5000-1-idxp-29] <= numstr[31-29];
		str_builder [5000-1-idxp-30] <= numstr[31-30];
		str_builder [5000-1-idxp-31] <= numstr[31-31];



		if (rw == 3 && cl ==3) begin
		  display_string = str_builder;
		  clkcounter <= 0;
		  rw<=0;
		  cl<=0;
		end
		else if (cl == 3) begin
		  rw <= rw+1;
		  cl <=0;
		end
		else begin
		  cl <= cl + 1;
		end
    end
  end
endmodule
