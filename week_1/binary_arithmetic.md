### Q1) Calculate 10-19
**Method-1: Sign-magnitude arithmetic**
+10 = 0001010
+19 = 0010011, therefore -19 = 1010011
0001010
1010011
...............
**1**011101 = 
sign bit = 1, therefore result is -ve
Take magnitude = 011101 & add -ve sign = **-29** --> **Answer, but wrong**

**Method-2: 1s complement arithmetic**
+10 = 0001010
+19 = 0010011, therefore -19 = 1101100 in 1s complement
0001010
1101100
...............
1110110
carry = 0, so ignore it
sign bit = 1, therefore result is -ve
Take 1s complement of 1110110 = 0001001 & add -ve sign = **-9** -> **Answer**
 
**Method-3: 2s complement arithmetic**
+10 = 0001010
+19 = 0010011, therefore -19 = (1101100 + 1) = 1101101 in 2s complement
0001010
1101101
...............
1110111
sign bit = 1, therefore result is -ve
Take 2s complement of 1110111 = (0001000 + 1) = 0001001 & add -ve sign = **-9** -> **Answer**

### Q2) Calculate 20+30
**Method-1: Sign-magnitude arithmetic**
+20 = 0010100
+30 = 0011110
0010100
0011110
...............
**0**110010 
sign bit = 0, therefore result is +ve
Take magnitude = 110010 = **+50** -> **Answer**
*1s and 2s complement arithmetic are not required as both are positive numbers.*

### Q3) Calculate 36-12
**Method-1: Sign-magnitude arithmetic**
+36 = 00100100
+12 = 00001100, therefore -12 = 10001100
00100100
10001100
.................
**1**0110000
sign bit = 1, therefore result is -ve
Take magnitude = 0110000 & add -ve sign = **-48** --> **Answer, but wrong**

**Method-2: 1s complement arithmetic**
+36 = 00100100
+12 = 00001100, therefore -12 = 11110011 in 1s complement
&nbsp;&nbsp;00100100
&nbsp;&nbsp;11110011
...................
**1**00010111
carry = 1, 
sign bit = 0, therefore result is +ve
Add carry to 00010111 = 00011000 = **+24** -> **Answer**
 
**Method-3: 2s complement arithmetic**
+36 = 00100100
+12 = 00001100, therefore -12 = (11110011 + 1) = 11110100 in 2s complement
&nbsp;&nbsp;00100100
&nbsp;&nbsp;11110100
...................
**1**00011000
Ignore carry
sign bit = 0, therefore result is +ve
00011000 = **+24** -> **Answer**