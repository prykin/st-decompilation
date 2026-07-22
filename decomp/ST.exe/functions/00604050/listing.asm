CreateSTExplosion:
00604050  68 BF 02 00 00            PUSH 0x2bf
00604055  E8 76 C4 0A 00            CALL 0x006b04d0
0060405A  85 C0                     TEST EAX,EAX
0060405C  74 07                     JZ 0x00604065
0060405E  8B C8                     MOV ECX,EAX
00604060  E9 66 13 E0 FF            JMP 0x004053cb
LAB_00604065:
00604065  33 C0                     XOR EAX,EAX
00604067  C3                        RET
