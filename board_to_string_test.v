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

	// Outputs
	wire [7:0] char_out;

	// Instantiate the Unit Under Test (UUT)
	board_to_string uut (
		.board(board), 
		.processing(processing), 
		.clk(clk), 
		.print_nxt(print_nxt), 
		.char_out(char_out)
	);

	initial begin
		// Initialize Inputs
		board = 0;
		processing = 1;
		clk = 0;
		print_nxt = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here

	end
	always #5 begin
	  clk <= ~clk;
	  print_nxt <= ~print_nxt;
	end
      
endmodule

