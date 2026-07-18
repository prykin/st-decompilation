FUN_0074e2c1:
0074E2C1  56                        PUSH ESI
0074E2C2  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
LAB_0074e2c5:
0074E2C5  85 F6                     TEST ESI,ESI
0074E2C7  74 0E                     JZ 0x0074e2d7
0074E2C9  8B C6                     MOV EAX,ESI
0074E2CB  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
0074E2CE  50                        PUSH EAX
0074E2CF  E8 DC FF FD FF            CALL 0x0072e2b0
0074E2D4  59                        POP ECX
0074E2D5  EB EE                     JMP 0x0074e2c5
LAB_0074e2d7:
0074E2D7  5E                        POP ESI
0074E2D8  C3                        RET
