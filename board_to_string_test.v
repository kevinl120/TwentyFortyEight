`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:30:43 12/03/2019
// Design Name:   board_to_string
// Module Name:   /home/ise/xilinx/TwentyFortyEight/board_to_string_test.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: board_to_string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module board_to_string_test;

	// Inputs
	reg [319:0] board;
	reg processing;
	reg clk;
	reg print_nxt;
	reg [10:0] ctnr;
	reg done;
	reg start;
	
	// Outputs
	wire [7:0] char_out;
	reg [20:0] score;

	// Instantiate the Unit Under Test (UUT)
	board_to_string uut (
		.board(board), .start(start), .clk(clk), .print_nxt(print_nxt), .score(score), .char_out(char_out), .done(done)
	);

	initial begin
		// Initialize Inputs
		ctnr = 0;
		board = 0;
		processing = 1;
		clk = 0;
		print_nxt = 0;
		start = 0;
		score = 102444;
      done = 1;
		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
	
	always begin
	  #1000
	  ctnr <= ctnr + 1;
	  clk <= ~clk;
	  print_nxt <= ~print_nxt;
	  if(ctnr == 2000) $finish;
	  if (ctnr == 3) start <= 1;
	  if (ctnr == 4) start <= 1;
	  if (ctnr > 4) start <= 0;
	end
      
endmodule

