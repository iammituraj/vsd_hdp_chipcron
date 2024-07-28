### Q1) Calculate 10-19
**Method-1: Sign-magnitude arithmetic**
<br>+10 = 0001010
<br>+19 = 0010011, therefore -19 = 1010011
<br>0001010
<br>1010011
<br>...................
<br>**1**011101 = 
<br>sign bit = 1, therefore result is -ve
<br>Take magnitude = 011101 & add -ve sign = **-29** --> **Answer, but wrong**
<br>
<br>**Method-2: 1s complement arithmetic**
<br>+10 = 0001010
<br>+19 = 0010011, therefore -19 = 1101100 in 1s complement
<br>0001010
<br>1101100
<br>...................
<br>1110110
<br>carry = 0, so ignore it
<br>sign bit = 1, therefore result is -ve
<br>Take 1s complement of 1110110 = 0001001 & add -ve sign = **-9** -> **Answer**
<br> 
<br>**Method-3: 2s complement arithmetic**
<br>+10 = 0001010
<br>+19 = 0010011, therefore -19 = (1101100 + 1) = 1101101 in 2s complement
<br>0001010
<br>1101101
<br>...................
<br>1110111
<br>sign bit = 1, therefore result is -ve
<br>Take 2s complement of 1110111 = (0001000 + 1) = 0001001 & add -ve sign = **-9** -> **Answer**

### Q2) Calculate 20+30
**Method-1: Sign-magnitude arithmetic**
<br>+20 = 0010100
<br>+30 = 0011110
<br>0010100
<br>0011110
<br>...................
<br>**0**110010 
<br>sign bit = 0, therefore result is +ve
<br>Take magnitude = 110010 = **+50** -> **Answer**

*1s and 2s complement arithmetic are not required as both are positive numbers.*

### Q3) Calculate 36-12
**Method-1: Sign-magnitude arithmetic**
<br>+36 = 00100100
<br>+12 = 00001100, therefore -12 = 10001100
<br>00100100
<br>10001100
<br>.....................
<br>**1**0110000
<br>sign bit = 1, therefore result is -ve
<br>Take magnitude = 0110000 & add -ve sign = **-48** --> **Answer, but wrong**
<br>
<br>**Method-2: 1s complement arithmetic**
<br>+36 = 00100100
<br>+12 = 00001100, therefore -12 = 11110011 in 1s complement
<br>&nbsp;&nbsp;00100100
<br>&nbsp;&nbsp;11110011
<br>.......................
<br>**1**00010111
<br>carry = 1, 
<br>sign bit = 0, therefore result is +ve
<br>Add carry to 00010111 = 00011000 = **+24** -> **Answer**
<br> 
<br>**Method-3: 2s complement arithmetic**
<br>+36 = 00100100
<br>+12 = 00001100, therefore -12 = (11110011 + 1) = 11110100 in 2s complement
<br>&nbsp;&nbsp;00100100
<br>&nbsp;&nbsp;11110100
<br>.......................
<br>**1**00011000
<br>Ignore carry
<br>sign bit = 0, therefore result is +ve
<br>00011000 = **+24** -> **Answer**
