FUN_0063bf70:
0063BF70  68 B0 03 00 00            PUSH 0x3b0
0063BF75  E8 56 45 07 00            CALL 0x006b04d0
0063BF7A  85 C0                     TEST EAX,EAX
0063BF7C  74 07                     JZ 0x0063bf85
0063BF7E  8B C8                     MOV ECX,EAX
0063BF80  E9 9E 96 DC FF            JMP 0x00405623
LAB_0063bf85:
0063BF85  33 C0                     XOR EAX,EAX
0063BF87  C3                        RET
