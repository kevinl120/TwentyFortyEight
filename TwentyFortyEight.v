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
module TwentyFortyEight(RsRx, clk, rst, RsTx, btns);
  input wire clk;
  input wire rst;
  input        RsRx;
  output       RsTx;
  input btns;
  
  reg [3:0] rc = 0;

  wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
  wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
  wire                 uart_tx_busy;           // From uart_top_ of uart_top.v
  wire                 seq_tx_valid;

  wire [7:0]tx_string;
  reg [320-1:0] board;
  wire board_updated;
  reg done;

  board_to_string board_to_string_(
    .board(board), .start(1), .clk(clk), .print_nxt(~o_tx_busy),
	 .score(10244), .char_out(tx_string), .done(done)
  );
  
  uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_string),
                       /*AUTOINST*/
                       // Inputs
                       .clk             (clk),
                       .rst             (rst),
                       .i_tx_stb (~done)
                       );

endmodule
