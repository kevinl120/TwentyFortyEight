`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:55:31 11/18/2019 
// Design Name: 
// Module Name:    TwentyFortyEight 
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
module TwentyFortyEight(clk, rst, dir);

  input clk, rst;
  input [3:0] dir;

  reg [20:0] board [0:15];
  reg [20:0] score = 0;
  
  gameController gameController_(.dir(dir), .rst(rst), .board(board), .score(score));
  
  // reg [3:0] rc = 0;
  // reg needMore = 1;
  // reg fillCount = 0;
  // always @(posedge clk) begin
  //   //getFillCount
  //   // fillCount <= getFillCount();
    
  //   if (needMore && fillCount == 16) begin
  //     // game over
  //   end
  //   else begin
  //       while (needMore) begin
  //         rc <= $urandom % 15;
  //         if (board[rc/4][rc%4] == 0) begin
  //           if ($urandom % 10 == 0) board[rc/4][rc%4] <= 4;
  //           else board[rc/4][rc%4] <= 2;
  //           needMore <= 0;
  //         end
  //       end
  //   end
  // end

  // uart
  // joystick integration (+ debouncer)
  
  // game logic
  // ai

endmodule
