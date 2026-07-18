FUN_00640320:
00640320  55                        PUSH EBP
00640321  8B EC                     MOV EBP,ESP
00640323  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00640326  56                        PUSH ESI
00640327  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0064032A  B8 79 19 8C 02            MOV EAX,0x28c1979
0064032F  8B 91 80 03 00 00         MOV EDX,dword ptr [ECX + 0x380]
00640335  57                        PUSH EDI
00640336  0F AF 56 0C               IMUL EDX,dword ptr [ESI + 0xc]
0064033A  F7 EA                     IMUL EDX
0064033C  D1 FA                     SAR EDX,0x1
0064033E  8B C2                     MOV EAX,EDX
00640340  8B 7E 10                  MOV EDI,dword ptr [ESI + 0x10]
00640343  C1 E8 1F                  SHR EAX,0x1f
00640346  03 D0                     ADD EDX,EAX
00640348  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064034B  50                        PUSH EAX
0064034C  8B C2                     MOV EAX,EDX
0064034E  2B C7                     SUB EAX,EDI
00640350  50                        PUSH EAX
00640351  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00640354  52                        PUSH EDX
00640355  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00640358  68 EB 51 47 42            PUSH 0x424751eb
0064035D  52                        PUSH EDX
0064035E  50                        PUSH EAX
0064035F  E8 67 14 DC FF            CALL 0x004017cb
00640364  5F                        POP EDI
00640365  5E                        POP ESI
00640366  5D                        POP EBP
00640367  C2 10 00                  RET 0x10
