## Week 1

### Assignment 1 - Binary arithmetic
Understanding of sign-magnitude, 1s, 2s complement binary arithmetic. Some solved examples are here:
[Assignment 1](https://github.com/iammituraj/vsd_hdp_chipcron/blob/main/week_1/binary_arithmetic.md)

### Assignment 2 - ALU in C
In this assignment, an ALU is designed in C. The ALU supports addition, substraction, multiplication, and division.
The program _alu.c_ is compiled with GCC and executed in the VM. The outputs are then verified.
![Assignment 2](https://github.com/iammituraj/vsd_hdp_chipcron/blob/main/week_1/support_files/alu_c_output.png)
**Summary of commands used**
```
gcc -o alu alu.c  // Compiles, links, and generates an executable file "alu" from source file "alu.c" in one shot!
./alu             // Execute the file!
```

### Assignment 3 - ALU in Verilog
In this assignment, an ALU is designed in Verilog. The ALU supports addition, substraction, AND, OR, XOR, NOT, logical right shift, logical left shift.
The module _alu.v_ is compiled with iverilog along with the testbench tb_alu.v to test the features. 
The simulation waveform is dumped by TB in VCD file, which can be opened with GTKWave. The simulation outputs are then verified.
![Assignment 3](https://github.com/iammituraj/vsd_hdp_chipcron/blob/main/week_1/support_files/alu_v_sim.png)

