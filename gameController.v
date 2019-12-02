`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:13:52 11/20/2019 
// Design Name: 
// Module Name:    gameController 
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
module gameController(clk, dir, rst, board, score, debug);
  input clk;
  input [1:0] dir;
  input rst;
  output reg [319:0] board = 2;
  output reg [20:0] score = 0;
  output reg [16:0] debug = 0;

  reg [16:0] counter = 0;
  reg lastMoveValid = 1;
  integer i, j, k;

  // There are 4 directions. Each direction has 24 possible movements. Each movement involves 2 cells, and each cell takes 4 bits to store (1-15). 4*24*2*4 = 768
  reg [767:0] precompute = 768'b110111001110110111011100111111101110110111011100100110001010100110011000101110101010100110011000010101000110010101010100011101100110010101010100000100000010000100010000001100100010000100010000100011000100100010001100000001000100100010001100100111010101100110011101000101010101100110011101101011100110101010101110001001100110101010101110101111110111101110111111001101110111101110111111111011111101111011101111110011011101111011101111101010111001101010101011100010011001101010101011011001110101011001100111010001010101011001100111001000110001001000100011000000010001001000100011011100111011011101110011111110111011011101110011011000101010011001100010111010101010011001100010010100011001010101010001110110011001010101010001010000001000010001000000110010001000010001000000;

  // Find index in board register given board index
  function [10:0] getSplice;
    input [5:0] index;
    begin
      getSplice = index * 20;
    end
  endfunction

  // Reset board and score
  task resetBoard;
    begin
      //board <= 0;
      addNewCell();
      addNewCell();
      score = 0;
    end
  endtask

  function emptyCellExists;
    input [319:0] board;
    begin
      emptyCellExists = 0;
      for (i = 0; i < 16; i = i+1) begin
        if (board[getSplice(i) +: 20] == 0) begin
          emptyCellExists = 1;
        end
      end
    end
  endfunction

  task addNewCell;
    reg [3:0] rand;
    reg added;
    begin
      added = 0;
      for (i = 0; i < 1; i = i+1) begin // TODO: MAKE MORE EFFICIENT ADDCELL. INCREASE LOOP COUNT TO INCREASE ACCURACY
        if (added == 0) begin
          rand <= counter % 16;
          if (board[getSplice(rand) +: 20] == 0) begin
            if (counter[4+:5]%10 == 0) board[getSplice(rand) +: 20] = 4;
            else board[getSplice(rand) +: 20] = 2;
            added = 1;
          end
        end
      end
    end
  endtask

  function [2:0] max;
    input [2:0] a;
    input [2:0] b;
    begin
      if (a > b) max = a;
      else max = b;
    end
  endfunction

  task move;
    output lastMoveValid;
    reg [10:0] precompute_dir;
    reg [10:0] index, newIndex;
    begin
      lastMoveValid = 0;
      precompute_dir = dir*192;
      for (i = 0; i < 192; i = i+8) begin
        // try to move board[newIndex] onto board[index]
        index = getSplice(precompute[(precompute_dir+i) +: 4]);
        newIndex = getSplice(precompute[(precompute_dir+i+4) +: 4]);

        if (board[newIndex +: 20] != 0) begin
          // Move nonzero cell onto zero
          if (board[index +: 20] == 0) begin
            board[index +: 20] = board[newIndex +: 20];
            board[newIndex +: 20] = 0;
            lastMoveValid = 1;
          end
          // Merge two like cells
          else if (board[index +: 20] == board[newIndex +: 20]) begin
            board[index +: 20] = board[index +: 20] * 2;
            score = score + board[index +: 20];
            board[index +: 20] = board[index +: 20] + max(index/80, (index/20)%4); // hack to avoid double merging
            board[newIndex +: 20] = 0;
            lastMoveValid = 1;
          end
        end
      end

      // compensate for double merging hack
      for (i = 0; i < 16; i = i+1) begin
        if (board[getSplice(i) +: 20] > 2) begin
          board[getSplice(i) +: 20] = board[getSplice(i) +: 20] - (board[getSplice(i) +: 20] % 4);
        end
      end
    end
  endtask

  initial begin
    resetBoard();
  end
  
  always @(clk) begin
    counter <= counter + 1;
	 // if (counter % 2347 == 0) addNewCell();
  end

  always @(dir, rst) begin
    if (rst) begin
      resetBoard();
    end

    move(lastMoveValid);
    if (lastMoveValid) addNewCell();
  end

endmodule
