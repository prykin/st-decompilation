FUN_0074de91:
0074DE91  56                        PUSH ESI
0074DE92  57                        PUSH EDI
0074DE93  8B F9                     MOV EDI,ECX
0074DE95  8B 37                     MOV ESI,dword ptr [EDI]
LAB_0074de97:
0074DE97  85 F6                     TEST ESI,ESI
0074DE99  74 0E                     JZ 0x0074dea9
0074DE9B  8B C6                     MOV EAX,ESI
0074DE9D  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
0074DEA0  50                        PUSH EAX
0074DEA1  E8 0A 04 FE FF            CALL 0x0072e2b0
0074DEA6  59                        POP ECX
0074DEA7  EB EE                     JMP 0x0074de97
LAB_0074dea9:
0074DEA9  83 67 08 00               AND dword ptr [EDI + 0x8],0x0
0074DEAD  83 67 04 00               AND dword ptr [EDI + 0x4],0x0
0074DEB1  83 27 00                  AND dword ptr [EDI],0x0
0074DEB4  5F                        POP EDI
0074DEB5  5E                        POP ESI
0074DEB6  C3                        RET
