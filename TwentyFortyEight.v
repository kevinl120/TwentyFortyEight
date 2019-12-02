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
  input [2:0] dir; // 0: up, 1: right, 2: down, 3: left, 4: no input

  wire [319:0] board;
  wire [20:0] score = 0;
  
  gameController gameController_(.clk(clk), .dir(dir), .rst(rst), .board(board), .score(score));

  // uart
  // joystick integration (+ debouncer)
  
  // game logic
  // ai

endmodule
