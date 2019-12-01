`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:17:49 11/27/2019
// Design Name:   gameController
// Module Name:   /home/ise/VirtualBox_Shared/TwentyFortyEight/tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gameController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

  // Inputs
  reg clk;
  reg [1:0] dir;
  reg rst;

  // Outputs
  wire [319:0] board;
  wire [20:0] score;
  wire [16:0] debug;

  integer i;

  function displayBoard;
    input [319:0] board;
    begin
      displayBoard = 0;
      for (i = 0; i < 16; i = i+4) begin
        $display("%d %d %d %d", board[i*20 +: 20], board[i*20+20 +: 20], board[i*20+40 +: 20], board[i*20+60 +: 20]);
      end
      $display("------------------------------");
    end
  endfunction

  // Instantiate the Unit Under Test (UUT)
  gameController uut (
    .clk(clk), 
    .dir(dir), 
    .rst(rst), 
    .board(board), 
    .score(score), 
    .debug(debug)
  );

  initial begin
    // Initialize Inputs
    clk = 0;
    dir = 0;
    rst = 1;

    // Wait 100 ns for global reset to finish
    #100;
      
    // Add stimulus here
      repeat(4) #10 clk = ~clk;
      rst = 0;
    forever #10 clk = ~clk;
  end
  
  initial begin
    @(negedge rst); // wait for reset
	 repeat(500) @(posedge clk);
    $display("starting board");
    displayBoard(board);
    dir = 1;
    $display("move 1");
    displayBoard(board);
    repeat(233) @(posedge clk);
    dir = 2;
    $display("move 2");
    displayBoard(board);
    repeat(212) @(posedge clk);
    dir = 3;
    $display("move 3");
    displayBoard(board);
    repeat(255) @(posedge clk);
    dir = 0;
    $display("move 0");
    displayBoard(board);
    repeat(256) @(posedge clk);
    dir = 1;
    $display("move 1");
    displayBoard(board);
    repeat(523) @(posedge clk);
    dir = 2;
    $display("move 2");
    displayBoard(board);
    repeat(257) @(posedge clk);
    dir = 3;
    $display("move 3");
    displayBoard(board);
    repeat(355) @(posedge clk);
    dir = 0;
    $display("move 0");
    displayBoard(board);
    $finish;
  end
  
  
  
      
endmodule

