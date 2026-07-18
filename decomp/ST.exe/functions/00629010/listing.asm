FUN_00629010:
00629010  68 08 01 00 00            PUSH 0x108
00629015  E8 16 55 10 00            CALL 0x0072e530
0062901A  83 C4 04                  ADD ESP,0x4
0062901D  85 C0                     TEST EAX,EAX
0062901F  74 07                     JZ 0x00629028
00629021  8B C8                     MOV ECX,EAX
00629023  E9 FD 91 DD FF            JMP 0x00402225
LAB_00629028:
00629028  33 C0                     XOR EAX,EAX
0062902A  C3                        RET
