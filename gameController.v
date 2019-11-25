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
  output reg [20:0] board [3:0] [3:0];
  output reg [20:0] score = 0;

  /*
  procedure Increment(signal Counter : inout integer) is
  begin
    Counter <= Counter + 1;
  end procedure;
  */

  function emptyCellExists;
    input [20:0] board [3:0] [3:0];
    begin
      emptyCellExists = 0;
      for (i = 1; i <= 16; i = i+1) begin
        if (board[i/4][i%4] == 0) begin
          emptyCellExists = 1;
        end
      end
    end
  endfunction

  // TODO
  function canCombine;
    input [20:0] board [3:0] [3:0];
    begin
      canCombine = 1;
    end
  endfunction

  reg [3:0] rand = 0 

  // fill board with zeroes to begin
  for (i = 1; i <= 16; i = i+1) begin
    assign board[i/4][i%4] = 0;
  end
  // fill two random cells
  rand <= $urandom % 15;
  if (board[rand/4][rand%4] == 0) begin
    if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
    else board[rc/4][rc%4] <= 2;
  end
  rand <= $urandom % 15;
  if (board[rand/4][rand%4] == 0) begin
    if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
    else board[rc/4][rc%4] <= 2;
  end

  always @(dir, rst) begin
    if (rst) begin
      // fill board with zeroes to begin
      for (i = 1; i <= 16; i = i+1) begin
        assign board[i/4][i%4] = 0;
      end
      // fill two random cells
      rand <= $urandom % 15;
      if (board[rand/4][rand%4] == 0) begin
        if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
        else board[rc/4][rc%4] <= 2;
      end
      rand <= $urandom % 15;
      if (board[rand/4][rand%4] == 0) begin
        if ($urandom % 10 == 0) board[rand/4][rand%4] <= 4;
        else board[rc/4][rc%4] <= 2;
      end
    end
    // move cells, combine if necessary and add score
    // add new cell
    // check if game is over
  end

endmodule
