FUN_0071b190:
0071B190  68 90 00 00 00            PUSH 0x90
0071B195  E8 96 33 01 00            CALL 0x0072e530
0071B19A  83 C4 04                  ADD ESP,0x4
0071B19D  85 C0                     TEST EAX,EAX
0071B19F  74 07                     JZ 0x0071b1a8
0071B1A1  8B C8                     MOV ECX,EAX
0071B1A3  E9 08 00 00 00            JMP 0x0071b1b0
LAB_0071b1a8:
0071B1A8  33 C0                     XOR EAX,EAX
0071B1AA  C3                        RET
