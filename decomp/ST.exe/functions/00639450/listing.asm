FUN_00639450:
00639450  68 D8 02 00 00            PUSH 0x2d8
00639455  E8 76 70 07 00            CALL 0x006b04d0
0063945A  85 C0                     TEST EAX,EAX
0063945C  74 07                     JZ 0x00639465
0063945E  8B C8                     MOV ECX,EAX
00639460  E9 32 8F DC FF            JMP 0x00402397
LAB_00639465:
00639465  33 C0                     XOR EAX,EAX
00639467  C3                        RET
