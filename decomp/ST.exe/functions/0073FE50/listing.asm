__IncMan:
0073FE50  55                        PUSH EBP
0073FE51  8B EC                     MOV EBP,ESP
0073FE53  83 EC 10                  SUB ESP,0x10
0073FE56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FE59  99                        CDQ
0073FE5A  83 E2 1F                  AND EDX,0x1f
0073FE5D  03 C2                     ADD EAX,EDX
0073FE5F  C1 F8 05                  SAR EAX,0x5
0073FE62  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073FE65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073FE68  25 1F 00 00 80            AND EAX,0x8000001f
0073FE6D  79 05                     JNS 0x0073fe74
0073FE6F  48                        DEC EAX
0073FE70  83 C8 E0                  OR EAX,0xffffffe0
0073FE73  40                        INC EAX
LAB_0073fe74:
0073FE74  B9 1F 00 00 00            MOV ECX,0x1f
0073FE79  2B C8                     SUB ECX,EAX
0073FE7B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073FE7E  BA 01 00 00 00            MOV EDX,0x1
0073FE83  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FE86  D3 E2                     SHL EDX,CL
0073FE88  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0073FE8B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FE8E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FE91  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0073FE94  52                        PUSH EDX
0073FE95  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073FE98  50                        PUSH EAX
0073FE99  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073FE9C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FE9F  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
0073FEA2  50                        PUSH EAX
0073FEA3  E8 28 4A 00 00            CALL 0x007448d0
0073FEA8  83 C4 0C                  ADD ESP,0xc
0073FEAB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073FEAE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073FEB1  83 E9 01                  SUB ECX,0x1
0073FEB4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0073FEB7  EB 09                     JMP 0x0073fec2
LAB_0073feb9:
0073FEB9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073FEBC  83 EA 01                  SUB EDX,0x1
0073FEBF  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0073fec2:
0073FEC2  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0073FEC6  7C 29                     JL 0x0073fef1
0073FEC8  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0073FECC  74 23                     JZ 0x0073fef1
0073FECE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FED1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FED4  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0073FED7  52                        PUSH EDX
0073FED8  6A 01                     PUSH 0x1
0073FEDA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073FEDD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FEE0  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0073FEE3  52                        PUSH EDX
0073FEE4  E8 E7 49 00 00            CALL 0x007448d0
0073FEE9  83 C4 0C                  ADD ESP,0xc
0073FEEC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073FEEF  EB C8                     JMP 0x0073feb9
LAB_0073fef1:
0073FEF1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073FEF4  8B E5                     MOV ESP,EBP
0073FEF6  5D                        POP EBP
0073FEF7  C3                        RET
