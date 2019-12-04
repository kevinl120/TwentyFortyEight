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
module TwentyFortyEight(clk, rst, MISO, SS, MOSI, SCLK, led);
  input clk;
  input rst;
  input MISO;

  output wire SS;
  output wire MOSI;
  output wire SCLK;

  output reg [7:0] led = 1;

  wire [2:0] dir;

  PmodJSTK_Dir givedir(
    .clk(clk),
    .rst(rst),
    .miso(MISO),
    .ss(SS),
    .mosi(MOSI),
    .sclk(SCLK),
    .dir(dir)
  );

  always @(posedge clk) begin
    led[0] = dir[0];
    led[1] = dir[1];
    led[5] = 1;
    // led[2] = dir[2];    // <- need to get this working
    // led[2:0] = dir;
  end


  //always @(dir) begin
    //led[0] = dir[0];
    //led[1] = dir[1];
    //led[5] = 1;
    // led[2] = dir[2];
  //end
  /*
  always @(posedge SS) begin
    led[3] = 1;
  end
  */

endmodule
