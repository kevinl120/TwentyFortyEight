`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:29:04 12/03/2019
// Design Name:   TwentyFortyEight
// Module Name:   /home/ise/xilinx/TwentyFortyEight/TwentyFortyEightTest.v
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

module TwentyFortyEightTest;

	// Inputs
	reg RsRx;
	reg clk;
	reg rst;
	reg btns;

	// Outputs
	wire RsTx;

	// Instantiate the Unit Under Test (UUT)
	TwentyFortyEight uut (
		.RsRx(RsRx), 
		.clk(clk), 
		.rst(rst), 
		.RsTx(RsTx), 
		.btns(btns)
	);

	initial begin
		// Initialize Inputs
		RsRx = 0;
		clk = 0;
		rst = 0;
		btns = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #300 btns <= !btns;
      
endmodule

