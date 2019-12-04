`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:01:29 12/02/2019
// Design Name:   TwentyFortyEight
// Module Name:   /home/ise/VirtualBox_Shared/TwentyFortyEight/top_tb.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TwentyFortyEight
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [2:0] dir;
	reg btns;
	reg btnu;
	reg btnd;
	reg btnl;
	reg btnr;

	integer i, j;

	// Instantiate the Unit Under Test (UUT)
	TwentyFortyEight uut (
		.clk(clk), 
		.rst(rst), 
		.dir(dir), 
		.btns(btns), 
		.btnu(btnu), 
		.btnd(btnd), 
		.btnl(btnl), 
		.btnr(btnr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		dir = 0;
		btns = 0;
		btnu = 0;
		btnd = 0;
		btnl = 0;
		btnr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end

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

    for (j = 0; j <= 8; j = j+1) begin
      btnd = 1;
      repeat(30) @(posedge clk);
	   btnd = 0;
      repeat(50) @(posedge clk);
      repeat(227+j*7) @(posedge clk);
    end
	 
    btns = 1;
    repeat(32) @(posedge clk);
    btns = 0;
    repeat(50) @(posedge clk);

    $finish;

  end
      
endmodule

