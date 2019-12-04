`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:28:38 12/03/2019 
// Design Name: 
// Module Name:    btn_debouncer 
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
module btn_debouncer(clk, btn, pressed);
  input clk, btn;
  output reg pressed;

  reg [40:0] counter;

  always @(posedge clk) begin
    if (btn == 0) begin
      counter <= 0;
      pressed <= 0;
    end else begin
      if (counter == (1 << 20)) begin
        pressed <= 1;
        counter <= counter + 1;
      end else begin
        counter <= counter + 1;
        pressed <= 0;
      end
    end
  end
endmodule
