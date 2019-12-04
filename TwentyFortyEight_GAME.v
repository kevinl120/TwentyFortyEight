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

// module TwentyFortyEight(clk, rst, dir);
module TwentyFortyEight(clk, rst, dir, btns, btnu, btnd, btnl, btnr);
input btns,btnu,btnd,btnr,btnl;

  input clk, rst;
  input [2:0] dir; // 0: up, 1: right, 2: down, 3: left, 4: no input
  
  reg [2:0] dir_store = 4;

  wire [319:0] board;
  wire [20:0] score = 0;

  wire rst_btn, up_btn, down_btn, left_btn, right_btn;
  debouncer debouncer1_(.clk(clk), .btn(btns), .pressed(rst_btn));
  debouncer debouncer2_(.clk(clk), .btn(btnu), .pressed(up_btn));
  debouncer debouncer3_(.clk(clk), .btn(btnd), .pressed(down_btn));
  debouncer debouncer4_(.clk(clk), .btn(btnl), .pressed(left_btn));
  debouncer debouncer5_(.clk(clk), .btn(btnr), .pressed(right_btn));
  gameController gameController_(.clk(clk), .dir(dir_store), .rst(rst), .board(board), .score(score));
  
  // gameController gameController_(.clk(clk), .dir(dir), .rst(rst), .board(board), .score(score));

  always @(clk) begin
    if (up_btn == 1) dir_store <= 0;
    else if (right_btn == 1) dir_store <= 1;
    else if (down_btn == 1) dir_store <= 2;
    else if (left_btn == 1) dir_store <= 3;
    else dir_store <= 4;
  end

  // uart
  // joystick integration (+ debouncer)
  
  // game logic
  // ai

endmodule
