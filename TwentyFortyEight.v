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

// module TwentyFortyEight(clk, rst, dir);
module TwentyFortyEight(clk, rst, dir, btns, btnu, btnd, btnl, btnr, RsRx, RsTx);

input btns,btnu,btnd,btnr,btnl;

  input clk, rst;
  input [2:0] dir; // 0: up, 1: right, 2: down, 3: left, 4: no input
  input        RsRx;
  output       RsTx;
  reg [2:0] dir_store = 4;

  wire [319:0] board;
  wire [20:0] score = 0; 
  
  reg [20:0] score_out = 0;

  wire rst_btn, up_btn, down_btn, left_btn, right_btn;
  
  
  wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
  wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
  wire                 uart_tx_busy;           // From uart_top_ of uart_top.v
  wire                 seq_tx_valid;

  wire [7:0]tx_string; 
  wire done;
  
  
  debouncer debouncer1_(.clk(clk), .btn(btns), .pressed(rst_btn));
  debouncer debouncer2_(.clk(clk), .btn(btnu), .pressed(up_btn));
  debouncer debouncer3_(.clk(clk), .btn(btnd), .pressed(down_btn));
  debouncer debouncer4_(.clk(clk), .btn(btnl), .pressed(left_btn));
  debouncer debouncer5_(.clk(clk), .btn(btnr), .pressed(right_btn));
  
  gameController gameController_(.clk(clk), .dir(dir_store), .rst(rst), .board(board), .score(score));
  
  // gameController gameController_(.clk(clk), .dir(dir), .rst(rst), .board(board), .score(score));

  always @(posedge clk) begin
    if (up_btn == 1) dir_store <= 0;
    else if (right_btn == 1) dir_store <= 1;
    else if (down_btn == 1) dir_store <= 2;
    else if (left_btn == 1) dir_store <= 3;
    else dir_store <= 4;
	score_out <= score;
  end
  
  
  board_to_string board_to_string_(
    .board(board), .start(rst_btn || up_btn || down_btn || left_btn || right_btn),
	.clk(clk), .print_nxt(~uart_tx_busy),
	.score(0), .char_out(tx_string), .done(done)
  );
  
  
  uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (tx_string),
                       // Inputs
                       .clk             (clk),
                       .rst             (rst),
                       .i_tx_stb (~done)
                       );

  

endmodule
/*
module TwentyFortyEight(RsRx, clk, rst, RsTx, btns);
  input wire clk;
  input wire rst;
  input        RsRx;
  output       RsTx;
  input btns;
  
  reg [3:0] rc = 0;

  
  reg [320-1:0] board;
  wire board_updated;
  wire done;

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

                       // Inputs
                       .clk             (clk),
                       .rst             (rst),
                       .i_tx_stb (~done)
                       );

endmodule
*/