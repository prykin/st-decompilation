CreateSTRubbish:
0062ECE0  68 FE 01 00 00            PUSH 0x1fe
0062ECE5  E8 E6 17 08 00            CALL 0x006b04d0
0062ECEA  85 C0                     TEST EAX,EAX
0062ECEC  74 07                     JZ 0x0062ecf5
0062ECEE  8B C8                     MOV ECX,EAX
0062ECF0  E9 EA 70 DD FF            JMP 0x00405ddf
LAB_0062ecf5:
0062ECF5  33 C0                     XOR EAX,EAX
0062ECF7  C3                        RET
