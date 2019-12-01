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
  output reg [319:0] board = 0;
  output reg [20:0] score = 0;
  output reg [16:0] debug = 0;

  reg [16:0] counter = 0;
  reg lastMoveValid = 0;
  integer i, j, k;

   // Find index in board given board index
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
      score <= 0;
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

  function [2:0] startX;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: startX = 0;
        2'b01: startX = 0;
        2'b10: startX = 3;
        2'b11: startX = 0;
      endcase
    end
  endfunction

  function [2:0] startY;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: startY = 0;
        2'b01: startY = 3;
        2'b10: startY = 3;
        2'b11: startY = 0;
      endcase
    end
  endfunction

  function [2:0] moveX;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: moveX = 0;
        2'b01: moveX = 1;
        2'b10: moveX = 0;
        2'b11: moveX = 1;
      endcase
    end
  endfunction

  function [2:0] moveY;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: moveY = 1;
        2'b01: moveY = 0;
        2'b10: moveY = -1;
        2'b11: moveY = 0;
      endcase
    end
  endfunction

  function [2:0] mergeX;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: mergeX = 1;
        2'b01: mergeX = 0;
        2'b10: mergeX = -1;
        2'b11: mergeX = 0;
      endcase
    end
  endfunction

  function [2:0] mergeY;
    input [1:0] dir;
    begin
      case (dir)
        2'b00: mergeY = 0;
        2'b01: mergeY = -1;
        2'b10: mergeY = 0;
        2'b11: mergeY = 1;
      endcase
    end
  endfunction

  function [2:0] max;
    input [2:0] a;
    input [2:0] b;
    begin
      if (a > b) max = a;
      else max = b;
    end
  endfunction

  task move;
    output validMove;
    reg [2:0] posX;
    reg [2:0] posY;
    begin
      validMove = 0;
      for (i = 0; i < 4; i = i+1) begin
        for (k = 0; k < 3; k = k+1) begin
          for (j = 0; j < 3; j = j+1) begin
            posX = startX(dir) + i*moveX(dir) + j*mergeX(dir);
            posY = startY(dir) + i*moveY(dir) + j*mergeY(dir);
            if (board[getSplice(posX*4+posY) +: 20] == 0 && board[getSplice((posX+mergeX(dir))*4 + posY+mergeY(dir)) +: 20] != 0) begin
              // Move nonzero cell onto zero
              board[getSplice(posX*4+posY) +: 20] = board[getSplice((posX+mergeX(dir))*4 + posY+mergeY(dir)) +: 20];
              board[getSplice((posX+mergeX(dir))*4 + posY+mergeY(dir)) +: 20] = 0;
              validMove = 1;
            end
            else if (board[getSplice(posX*4+posY) +: 20] == board[getSplice((posX+mergeX(dir))*4 + posY+mergeY(dir)) +: 20] && board[getSplice(posX*4+posY) +: 20] != 0) begin
              board[getSplice(posX*4+posY) +: 20] = board[getSplice(posX*4+posY) +: 20] * 2;
              board[getSplice(posX*4+posY) +: 20] = board[getSplice(posX*4+posY) +: 20] + max(posX, posY); // hack to avoid double merging
              board[getSplice((posX+mergeX(dir))*4 + posY+mergeY(dir)) +: 20] = 0;
              validMove = 1;
            end
          end
        end
      end

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
    // BEGIN: RESET LOGIC -----------------------------------------------------
    if (rst) begin
      resetBoard();
    end
    // END: RESET LOGIC -------------------------------------------------------

    // BEGIN: MOVE CELLS ------------------------------------------------------
    move(lastMoveValid);
    // END: MOVE CELLS --------------------------------------------------------

    // BEGIN: ADD CELLS -------------------------------------------------------
    addNewCell();
    // END: ADD CELLS ---------------------------------------------------------

    // BEGIN: END/CONTINUE GAME -----------------------------------------------
    // END: END/CONTINUE GAME -------------------------------------------------

    // move cells, combine if necessary and add score
    // add new cell
    // check if game is over
  end

endmodule
