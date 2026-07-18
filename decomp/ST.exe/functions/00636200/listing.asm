FUN_00636200:
00636200  6A 34                     PUSH 0x34
00636202  E8 29 83 0F 00            CALL 0x0072e530
00636207  83 C4 04                  ADD ESP,0x4
0063620A  85 C0                     TEST EAX,EAX
0063620C  74 07                     JZ 0x00636215
0063620E  8B C8                     MOV ECX,EAX
00636210  E9 94 E6 DC FF            JMP 0x004048a9
LAB_00636215:
00636215  33 C0                     XOR EAX,EAX
00636217  C3                        RET
