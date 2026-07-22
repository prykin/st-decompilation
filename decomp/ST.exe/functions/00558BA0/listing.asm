FUN_00558ba0:
00558BA0  68 98 02 00 00            PUSH 0x298
00558BA5  E8 26 79 15 00            CALL 0x006b04d0
00558BAA  85 C0                     TEST EAX,EAX
00558BAC  74 07                     JZ 0x00558bb5
00558BAE  8B C8                     MOV ECX,EAX
00558BB0  E9 02 D2 EA FF            JMP 0x00405db7
LAB_00558bb5:
00558BB5  33 C0                     XOR EAX,EAX
00558BB7  C3                        RET
