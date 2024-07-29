//=========================================================
// Module      : Testbench for ALU
// Description : Testbench to test all ALU features.
// Developer   : Mitu Raj
// Date        : July-2024
//=========================================================
// Time scale
`timescale 1ns/100ps

// Module definition
module tb_alu;
   // DUT signals
   reg  [7:0] dut_a     ;
   reg  [7:0] dut_b     ;
   reg  [2:0] dut_op    ;
   wire [7:0] dut_res   ;
   wire       dut_carry ;

   // Instantiate the ALU
   alu uut (
      .i_a     (dut_a)     ,
      .i_b     (dut_b)     ,
      .i_op    (dut_op)    ,
      .o_res   (dut_res)   ,
      .o_carry (dut_carry)
   );

   // VCD dump
   initial begin
      $dumpfile("./test_alu.vcd") ;
      $dumpvars(0, tb_alu)    ;
   end
   
   // Stimulus
   initial begin
      // Test Addition
      dut_a = 8'h0F; dut_b = 8'h01; dut_op = 3'b000 ;
      #10 ;

      // Test Subtraction
      dut_a = 8'h0F; dut_b = 8'h01; dut_op = 3'b001 ;
      #10 ;

      // Test Logical AND
      dut_a = 8'h0F; dut_b = 8'hF0; dut_op = 3'b010 ;
      #10 ;

      // Test Logical OR
      dut_a = 8'h0F; dut_b = 8'hF0; dut_op = 3'b011 ;
      #10 ;

      // Test Logical XOR
      dut_a = 8'h0F; dut_b = 8'hF0; dut_op = 3'b100 ;
      #10 ;

      // Test Logical NOT
      dut_a = 8'h0F; dut_b = 8'h00; dut_op = 3'b101 ;
      #10 ;

      // Test Logical Right Shift
      dut_a = 8'h0F; dut_b = 8'h02; dut_op = 3'b110 ;
      #10 ;

      // Test Logical Left Shift
      dut_a = 8'h0F; dut_b = 8'h02; dut_op = 3'b111 ;
      #10 ;

      // End simulation
      $finish ;
   end
endmodule