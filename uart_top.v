module uart_top (/*AUTOARG*/
   // Outputs
   o_tx, o_tx_busy, o_rx_data, o_rx_valid,
   // Inputs
   i_rx, i_tx_data, clk, rst, i_tx_stb
   );

   output                   o_tx; // asynchronous UART TX
   input                    i_rx; // asynchronous UART RX
   input                    i_tx_stb;
   
   output                   o_tx_busy;
   output [7:0]             o_rx_data;
   output                   o_rx_valid;
   
   input [7:0] i_tx_data;
   
   input                    clk;
   input                    rst;

   parameter stIdle = 0;
   parameter stCR   = 1;
   
   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire                 tfifo_empty;            // From tfifo_ of uart_fifo.v
   wire                 tfifo_full;             // From tfifo_ of uart_fifo.v
   wire [7:0]           tfifo_out;              // From tfifo_ of uart_fifo.v
   // End of automatics

   reg [7:0]            tfifo_in;
   wire                 tx_active;
   wire                 tfifo_rd;
   reg                  tfifo_rd_z;
   reg [7:0]  tx_data =0;
   reg [12-1:0]               state=0;

   assign o_tx_busy = (state!=stIdle);

   always @(posedge clk) begin
     if (rst) state <= stIdle;
     else begin
       if (state == stIdle) begin
         if(i_tx_stb) begin
          state   <= state + 1;
          tx_data <= i_tx_data;
          tfifo_in <= tx_data[7:0];
         end
       end
       else if (state < stCR) begin
         if (~tfifo_full) begin
           state   <= state + 1;
           tx_data <= tx_data << 8;
           tfifo_in <= tx_data[7:0];  
         end
       end
       else begin
         if (~tfifo_full) begin
           state <= stIdle;
         end
       end
         
     end
   end
     
   assign tfifo_rd = ~tfifo_empty & ~tx_active & ~tfifo_rd_z;

   assign tfifo_wr = ~tfifo_full & (state!=stIdle);
   
   uart_fifo tfifo_ (// Outputs
                     .fifo_cnt          (),
                     .fifo_out          (tfifo_out[7:0]),
                     .fifo_full         (tfifo_full),
                     .fifo_empty        (tfifo_empty),
                     // Inputs
                     .fifo_in           (tfifo_in[7:0]),
                     .fifo_rd           (tfifo_rd),
                     .fifo_wr           (tfifo_wr),
                     /*AUTOINST*/
                     // Inputs
                     .clk               (clk),
                     .rst               (rst));

   always @ (posedge clk)
     if (rst)
       tfifo_rd_z <= 1'b0;
     else
       tfifo_rd_z <= tfifo_rd;

   uart uart_ (// Outputs
               .received                (o_rx_valid),
               .rx_byte                 (o_rx_data[7:0]),
               .is_receiving            (),
               .is_transmitting         (tx_active),
               .recv_error              (),
               .tx                      (o_tx),
               // Inputs
               .rx                      (i_rx),
               .transmit                (tfifo_rd_z),
               .tx_byte                 (tfifo_out[7:0]),
               /*AUTOINST*/
               // Inputs
               .clk                     (clk),
               .rst                     (rst));
   
endmodule // uart_top
// Local Variables:
// verilog-library-flags:("-y ../../osdvu/")
// End: