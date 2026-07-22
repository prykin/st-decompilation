0072D964  55                        PUSH EBP
0072D965  8B EC                     MOV EBP,ESP
0072D967  83 EC 08                  SUB ESP,0x8
0072D96A  53                        PUSH EBX
0072D96B  56                        PUSH ESI
0072D96C  57                        PUSH EDI
0072D96D  55                        PUSH EBP
0072D96E  FC                        CLD
0072D96F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072D972  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072D975  F7 40 04 06 00 00 00      TEST dword ptr [EAX + 0x4],0x6
0072D97C  0F 85 82 00 00 00         JNZ 0x0072da04
0072D982  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072D985  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072D988  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072D98B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0072D98E  89 43 FC                  MOV dword ptr [EBX + -0x4],EAX
0072D991  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
0072D994  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
0072D997  83 FE FF                  CMP ESI,-0x1
0072D99A  74 61                     JZ 0x0072d9fd
0072D99C  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
0072D99F  83 7C 8F 04 00            CMP dword ptr [EDI + ECX*0x4 + 0x4],0x0
0072D9A4  74 45                     JZ 0x0072d9eb
0072D9A6  56                        PUSH ESI
0072D9A7  55                        PUSH EBP
0072D9A8  8D 6B 10                  LEA EBP,[EBX + 0x10]
0072D9AB  FF 54 8F 04               CALL dword ptr [EDI + ECX*0x4 + 0x4]
0072D9AF  5D                        POP EBP
0072D9B0  5E                        POP ESI
0072D9B1  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072D9B4  0B C0                     OR EAX,EAX
0072D9B6  74 33                     JZ 0x0072d9eb
0072D9B8  78 3C                     JS 0x0072d9f6
0072D9BA  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
0072D9BD  53                        PUSH EBX
0072D9BE  E8 A9 FE FF FF            CALL 0x0072d86c
0072D9C3  83 C4 04                  ADD ESP,0x4
0072D9C6  8D 6B 10                  LEA EBP,[EBX + 0x10]
0072D9C9  56                        PUSH ESI
0072D9CA  53                        PUSH EBX
0072D9CB  E8 DE FE FF FF            CALL 0x0072d8ae
0072D9D0  83 C4 08                  ADD ESP,0x8
0072D9D3  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
0072D9D6  6A 01                     PUSH 0x1
0072D9D8  8B 44 8F 08               MOV EAX,dword ptr [EDI + ECX*0x4 + 0x8]
0072D9DC  E8 61 FF FF FF            CALL 0x0072d942
0072D9E1  8B 04 8F                  MOV EAX,dword ptr [EDI + ECX*0x4]
0072D9E4  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
0072D9E7  FF 54 8F 08               CALL dword ptr [EDI + ECX*0x4 + 0x8]
0072D9EB  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
0072D9EE  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
0072D9F1  8B 34 8F                  MOV ESI,dword ptr [EDI + ECX*0x4]
0072D9F4  EB A1                     JMP 0x0072d997
0072D9F6  B8 00 00 00 00            MOV EAX,0x0
0072D9FB  EB 1C                     JMP 0x0072da19
0072D9FD  B8 01 00 00 00            MOV EAX,0x1
0072DA02  EB 15                     JMP 0x0072da19
0072DA04  55                        PUSH EBP
0072DA05  8D 6B 10                  LEA EBP,[EBX + 0x10]
0072DA08  6A FF                     PUSH -0x1
0072DA0A  53                        PUSH EBX
0072DA0B  E8 9E FE FF FF            CALL 0x0072d8ae
0072DA10  83 C4 08                  ADD ESP,0x8
0072DA13  5D                        POP EBP
0072DA14  B8 01 00 00 00            MOV EAX,0x1
0072DA19  5D                        POP EBP
0072DA1A  5F                        POP EDI
0072DA1B  5E                        POP ESI
0072DA1C  5B                        POP EBX
0072DA1D  8B E5                     MOV ESP,EBP
0072DA1F  5D                        POP EBP
0072DA20  C3                        RET
