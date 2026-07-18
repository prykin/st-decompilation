FUN_00631fd0:
00631FD0  68 B1 00 00 00            PUSH 0xb1
00631FD5  E8 56 C5 0F 00            CALL 0x0072e530
00631FDA  83 C4 04                  ADD ESP,0x4
00631FDD  85 C0                     TEST EAX,EAX
00631FDF  74 07                     JZ 0x00631fe8
00631FE1  8B C8                     MOV ECX,EAX
00631FE3  E9 5F F4 DC FF            JMP 0x00401447
LAB_00631fe8:
00631FE8  33 C0                     XOR EAX,EAX
00631FEA  C3                        RET
