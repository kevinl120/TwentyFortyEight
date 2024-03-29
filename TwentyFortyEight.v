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
module TwentyFortyEight(clk, RsRx, RsTx, MISO, SS, MOSI, SCLK, led, btns);
//module TwentyFortyEight(clk, rst, btns, btnu, btnd, btnl, btnr, MISO, SS, MOSI, SCLK, led);

// input btns,btnu,btnd,btnr,btnl;
  input btns;
  input clk;
  input        RsRx;
  output       RsTx;
  input MISO;
  output wire SS;
  output wire MOSI;
  output wire SCLK;
  output reg [2:0] led;

  wire [2:0] dir; // 0: up, 1: right, 2: down, 3: left, 4: no input
  wire [2:0] dir_store;
  wire rst_btn;
  
  PmodJSTK_Dir PmodJSTK_Dir_(
    .clk(clk),
    .rst(rst_btn),
    .miso(MISO),
    .ss(SS),
    .mosi(MOSI),
    .sclk(SCLK),
    .dir(dir)
  );

  wire [319:0] board;
  wire [20:0] score = 0; 
  wire [767:0] precompute = 768'b110111001110110111011100111111101110110111011100100110001010100110011000101110101010100110011000010101000110010101010100011101100110010101010100000100000010000100010000001100100010000100010000100011000100100010001100000001000100100010001100100111010101100110011101000101010101100110011101101011100110101010101110001001100110101010101110101111110111101110111111001101110111101110111111111011111101111011101111110011011101111011101111101010111001101010101011100010011001101010101011011001110101011001100111010001010101011001100111001000110001001000100011000000010001001000100011011100111011011101110011111110111011011101110011011000101010011001100010111010101010011001100010010100011001010101010001110110011001010101010001010000001000010001000000110010001000010001000000;
  
  reg [20:0] score_out = 0;

  
  
  wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
  wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
  wire                 uart_tx_busy;           // From uart_top_ of uart_top.v
  wire                 seq_tx_valid;

  wire [7:0]tx_string; 
  wire done;
  reg start;
  
  always @(posedge clk) begin
    led[0] = dir[0];
    led[1] = dir[1];
    led[2] = dir[2];
    if (dir_store != 4) start <= 1;
    else start <= 0;
  end
  
  debouncer debouncer1_(.clk(clk), .dir(dir), .debounced(dir_store));
  btn_debouncer btn_debouncer1(.clk(clk), .btn(btns), .pressed(rst_btn));
  gameController gameController_(.clk(clk), .dir(dir_store), .rst(rst_btn), .board(board), .score(score), .precompute(precompute));
  
  //debouncer debouncer1_(.clk(clk), .btn(btns), .pressed(rst_btn));
  //debouncer debouncer2_(.clk(clk), .btn(btnu), .pressed(up_btn));
  //debouncer debouncer3_(.clk(clk), .btn(btnd), .pressed(down_btn));
  //debouncer debouncer4_(.clk(clk), .btn(btnl), .pressed(left_btn));
  //debouncer debouncer5_(.clk(clk), .btn(btnr), .pressed(right_btn));  
  
  // gameController gameController_(.clk(clk), .dir(dir), .rst(rst), .board(board), .score(score));
  
  //always @(posedge clk) begin
  //  if (up_btn == 1) dir_store <= 0;
  //  else if (right_btn == 1) dir_store <= 1;
  //  else if (down_btn == 1) dir_store <= 2;
  //  else if (left_btn == 1) dir_store <= 3;
  //  else dir_store <= 4;
  //	score_out <= score;
  //end
  
  board_to_string board_to_string_(
    .board(board), .start(start),
	.clk(clk), .print_nxt(~uart_tx_busy),
	.score(1024), .char_out(tx_string), .done(done)
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
                       .rst             (rst_btn),
                       .i_tx_stb (~done)
                       );


endmodule
