`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:20:11 12/02/2019 
// Design Name: 
// Module Name:    debouncer 
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


// // JOYSTICK DEBOUNCER
// module debouncer(clk, dir, debounced);
//   input clk;
//   input [2:0] dir;
//   output reg [2:0] debounced;

//   reg [40:0] counter;

//   always @(posedge clk) begin
//     if (dir >= 4) begin
//       counter <= 0;
//       debounced <= 4;
//     end else begin
//       if (counter == (1 << 20)) begin
//         debounced <= dir;
//         counter <= counter + 1;
//       end else begin
//         counter <= counter + 1;
//         debounced <= 4;
//       end
//     end
//   end
// endmodule

// BUTTON DEBOUNCER
module debouncer(clk, btn, pressed);
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
