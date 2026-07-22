CreateSTJumpMine:
00619140  68 51 01 00 00            PUSH 0x151
00619145  E8 86 73 09 00            CALL 0x006b04d0
0061914A  85 C0                     TEST EAX,EAX
0061914C  74 07                     JZ 0x00619155
0061914E  8B C8                     MOV ECX,EAX
00619150  E9 58 8B DE FF            JMP 0x00401cad
LAB_00619155:
00619155  33 C0                     XOR EAX,EAX
00619157  C3                        RET
