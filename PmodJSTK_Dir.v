`timescale 1ns / 1ps

// =============================================================
//        DEFINE MODULE
// =============================================================

module PmodJSTK_Dir(
    input clk,          // 100Mhz onboard clock
    input rst,          // Button D -> check this
    input miso,         // Master In Slabe Out, Pin 3, Port JA
    output ss,          // Slave Select, Pin 1, Port JA
    output mosi,        // Master Out Slave In, Pin 2, Port JA
    output sclk,        // Serial Clock, Pin 4, Port JA
    output [2:0] dir    // Direction, 3-bits, main output of module
    );

// =============================================================
//        PARAMS, REGS AND WIRES
// =============================================================

    wire ss;            // Active low
    wire mosi;          // Data transfer from master to slave
    wire sclk;          // Serial clock that controls communication

    // Holds data to be sent to PmodJSTK
    wire [7:0] sndData;

    // Signal to send/receive data to/from PmodJSTK
    wire sndRec;

    // Data read from PmodJSTK
    wire [39:0] jstkData;

    // Signal carrying output data that user selected
    wire [9:0] posXDataRaw;
    wire [9:0] posYDataRaw;

    wire [15:0] posXData;
    wire [15:0] posYData;

    wire [1:0] posX;
    wire [1:0] posY;

// =============================================================
//        IMPLEMENTATION
// =============================================================

    // ---------------------------------------
    //        PmodJSTK Interface
    // ---------------------------------------
    PmodJSTK PmodJSTK_Int(
        .CLK(clk),
        .RST(rst),
        .sndRec(sndRec),
        .DIN(sndData),
        .MISO(miso),
        .SS(ss),
        .SCLK(sclk),
        .MOSI(mosi),
        .DOUT(jstkData)
    );

    // ---------------------------------------
    //        Send Receive Generator
    // ---------------------------------------
    ClkDiv_5Hz genSndRec(
        .CLK(clk),
        .RST(rst),
        .CLKOUT(sndRec)
    );
    // What is the purpose, especially in connection with sndRec

    // ---------------------------------------
    //        Get X Position - Decimal
    // ---------------------------------------
    Binary_To_BCD genDecimalPos(
        .CLK(clk),
        .RST(rst),
        .START(), // DCLK -> need?
        .BIN(posXDataRaw),
        .BCDOUT(posXData)
    );

    // ---------------------------------------
    //        Get Y Position - Decimal
    // ---------------------------------------
    Binary_To_BCD genDecimalPos(
        .CLK(clk),
        .RST(rst),
        .START(), // DCLK -> need?
        .BIN(posYDataRaw),
        .BCDOUT(posYData)
    );

    assign posXDataRaw = {jstkData[9:8], jstkData[23:16]};
    assign posYDataRaw = {jstkData[25:24], jstkData[39:32]};

    // ---------------------------------------
    //        Demultiplexer
    // ---------------------------------------

    always @(sndRec or jstkData or rst) begin
      if (rst == 1'b1) begin
      end
      else begin
          if (posXData >= 384 and posXData <= 640) begin
              posX = 0;
          end
          else if (posXData > 640) begin
              posX = 1;
          end
          else begin
              posX = 2;
          end

          if (posYData >= 384 and posYData <= 640) begin
              posY = 0;
          end
          else if (posYData > 640) begin
              posY = 1;
          end
          else begin
              posY = 2;
          end

          if (((posX == 1 or posX == 2) and posY == 0) or ((posY == 1 or posY == 2) and posX == 0)) begin
              if (posX == 0 and posY == 1) begin
                  dir = 0;
              end
              else if (posX == 0 and posY == 2) begin
                  dir = 1;
              end
              else if (posX == 1 and posY == 0) begin
                  dir = 2;
              end
              else if (posX == 2 and posY == 0) begin
                  dir = 3;
              end
          end
          else begin
              dir = 4;
          end
      end
    end










    // space
