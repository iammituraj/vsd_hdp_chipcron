//=========================================================
// Module      : ALU
// Description : 8-bit ALU to perform following operations:
//                1) Addition
//                2) Substraction
//                3) Logical AND
//                4) Logical OR
//                5) Logical XOR
//                6) Logical NOT
//                7) Logical Right Shift
//                8) Logical Left Shift
//
// Developer   : Mitu Raj
// Date        : July-2024
//=========================================================
module alu (
   input  wire [7:0] i_a     ,  // Input A
   input  wire [7:0] i_b     ,  // Input B
   input  wire [2:0] i_op    ,  // Opcode
   output reg  [7:0] o_res   ,  // Result
   output reg        o_carry    // Carry for add/substraction
);

// Operation decoding and result computation
always@(*) begin
   // Default value of carry
   o_carry = 1'b0 ;
   case (i_op) 
      3'b000 : begin  // ADD
         {o_carry, o_res} = {1'b0, i_a} + {1'b0, i_b} ;
      end
      3'b001 : begin  // SUB
         {o_carry, o_res} = {1'b0, i_a} - {1'b0, i_b} ;
      end
      3'b010 : begin  // AND
         o_res = i_a & i_b ;
      end
      3'b011 : begin  // OR
         o_res = i_a | i_b ;
      end
      3'b100 : begin  // XOR
         o_res = i_a ^ i_b ;
      end
      3'b101 : begin  // NOT (A)
         o_res = ~i_a ;
      end
      3'b110 : begin  // LRS by B
         o_res = i_a >> i_b[2:0] ;
      end
      3'b111 : begin  // LLS by B
         o_res = i_a << i_b[2:0] ;
      end
      default : ;
   endcase  
end

endmodule