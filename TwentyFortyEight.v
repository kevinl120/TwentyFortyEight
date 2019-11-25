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
module TwentyFortyEight(RsRx, clk, rst, RsTx);
  input wire clk;
  input wire rst;
  input        RsRx;
  output       RsTx;

  reg [20:0] board [0:3] [0:3];
  
  reg [3:0] rc = 0;
  reg needMore = 1;
  reg fillCount = 0;
  wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
  wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
  wire                 uart_tx_busy;           // From uart_top_ of uart_top.v
  wire                 seq_tx_valid;
  /*
  procedure Increment(signal Counter : inout integer) is
  begin
    Counter <= Counter + 1;
  end procedure;
  */
  
  /*
  always @(posedge clk) begin
    
    if (needMore && fillCount == 16) begin
      // game over
    end
    else begin
        while (needMore) begin
          rc <= $urandom % 15;
          if (board[rc/4][rc%4] == 0) begin
            if ($urandom % 10 == 0) board[rc/4][rc%4] <= 4;
            else board[rc/4][rc%4] <= 2;
            needMore <= 0;
          end
        end
    end
  end
  */
  wire [32-1:0]tx_data;
  assign tx_data = "2048";

  uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_data),
                       /*AUTOINST*/
                       // Inputs
                       .clk             (clk),
                       .rst             (rst)
                       );

endmodule
