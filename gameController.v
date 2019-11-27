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
module gameController(dir, rst, board, score);

  input [1:0] dir
  input rst;
  output reg [319:0] board = 0;
  output reg [20:0] score = 0;

  /*
  procedure Increment(signal Counter : inout integer) is
  begin
    Counter <= Counter + 1;
  end procedure;
  */

  reg [3:0] rand = 0 

  // Find index in board given board index
  function [10:0] getSplice;
    input [5:0] index;
    begin
      getSpliceBegin = index * 20;
    end
  endfunction

  // Reset board and score
  task resetBoard;
    inout [319:0] board;
    inout [20:0] score;
    begin
      board <= 0;
      // set two cells in the middle to 2
      board[getSplice(5) +: 20] = 2
      board[getSplice(10) +: 20] = 2
      score <= 0;
    end
  endtask

  function emptyCellExists;
    input [319:0] board;
    begin
      emptyCellExists = 0;
      integer i;
      for (i = 0; i < 16; i = i+1) begin
        if (board[getSplice(i) +: 20] == 0) begin
          emptyCellExists = 1;
        end
      end
    end
  endfunction

  // task addNewCell

  // TODO
  function canCombine;
    input [20:0] board [3:0] [3:0];
    begin
      canCombine = 1;
    end
  endfunction


  // fill board with zeroes to begin
  // // fill two random cells
  // rand <= $urandom % 15;
  // if (board[rand/4][rand%4] == 0) begin
  //   if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
  //   else board[rc/4][rc%4] <= 2;
  // end
  // rand <= $urandom % 15;
  // if (board[rand/4][rand%4] == 0) begin
  //   if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
  //   else board[rc/4][rc%4] <= 2;
  // end

  initial begin
    resetBoard(board, score);
  end

  always @(dir, rst) begin
    // BEGIN: RESET LOGIC -----------------------------------------------------
    if (rst) begin
      resetBoard(board, score)
    end
    // END: RESET LOGIC -------------------------------------------------------

    // BEGIN: MOVE CELLS ------------------------------------------------------
    // END: MOVE CELLS --------------------------------------------------------

    // BEGIN: ADD CELLS -------------------------------------------------------
    // END: ADD CELLS ---------------------------------------------------------

    // BEGIN: END/CONTINUE GAME -----------------------------------------------
    // END: END/CONTINUE GAME -------------------------------------------------

    // move cells, combine if necessary and add score
    // add new cell
    // check if game is over
  end

endmodule
