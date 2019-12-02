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
  reg [2:0] dir;
  reg rst;

  // Outputs
  wire [319:0] board;
  wire [20:0] score;

  integer i;
  integer j;

  function displayBoard;
    input [319:0] board;
    begin
      displayBoard = 0;
      for (i = 0; i < 16; i = i+4) begin
        $display("%d %d %d %d", board[i*20 +: 20], board[i*20+20 +: 20], board[i*20+40 +: 20], board[i*20+60 +: 20]);
      end
    end
  endfunction

  // Instantiate the Unit Under Test (UUT)
  gameController uut (
    .clk(clk), 
    .dir(dir), 
    .rst(rst), 
    .board(board), 
    .score(score)
  );

  initial begin
    // Initialize Inputs
    clk = 0;
    dir = 4;
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

    for (j = 0; j <= 8; j = j+1) begin
      dir = j%4;
      @(posedge clk);
      $display("move %d", j%4);
      dir = 4;
      repeat(50) @(posedge clk);
      displayBoard(board);
      $display("score: %d", score);
      $display("------------------------------");
      repeat(200+j*7) @(posedge clk);
    end
	 
    rst = 1;
    @(posedge clk);
    rst = 0;
    repeat(50) @(posedge clk);
    $display("reset");
    displayBoard(board);
    $display("score: %d", score);

    $finish;

  end

endmodule

