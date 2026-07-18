FUN_006b1980:
006B1980  55                        PUSH EBP
006B1981  8B EC                     MOV EBP,ESP
006B1983  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1986  85 C9                     TEST ECX,ECX
006B1988  0F 8C B6 00 00 00         JL 0x006b1a44
006B198E  53                        PUSH EBX
006B198F  56                        PUSH ESI
006B1990  8B C1                     MOV EAX,ECX
006B1992  57                        PUSH EDI
006B1993  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B1996  C1 E0 04                  SHL EAX,0x4
006B1999  8D 34 38                  LEA ESI,[EAX + EDI*0x1]
006B199C  8B 44 38 14               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x14]
006B19A0  85 C0                     TEST EAX,EAX
006B19A2  75 21                     JNZ 0x006b19c5
006B19A4  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006B19A7  85 D2                     TEST EDX,EDX
006B19A9  75 1A                     JNZ 0x006b19c5
006B19AB  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006B19AE  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
006B19B1  3B D3                     CMP EDX,EBX
006B19B3  75 10                     JNZ 0x006b19c5
006B19B5  8B 5F 10                  MOV EBX,dword ptr [EDI + 0x10]
006B19B8  8D 51 02                  LEA EDX,[ECX + 0x2]
006B19BB  C1 E2 04                  SHL EDX,0x4
006B19BE  8B 14 3A                  MOV EDX,dword ptr [EDX + EDI*0x1]
006B19C1  3B D3                     CMP EDX,EBX
006B19C3  74 2B                     JZ 0x006b19f0
LAB_006b19c5:
006B19C5  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
006B19C8  2B D8                     SUB EBX,EAX
006B19CA  85 DB                     TEST EBX,EBX
006B19CC  7E 22                     JLE 0x006b19f0
006B19CE  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006B19D1  8D 41 02                  LEA EAX,[ECX + 0x2]
006B19D4  C1 E0 04                  SHL EAX,0x4
006B19D7  8B 04 38                  MOV EAX,dword ptr [EAX + EDI*0x1]
006B19DA  2B C2                     SUB EAX,EDX
006B19DC  85 C0                     TEST EAX,EAX
006B19DE  7E 10                     JLE 0x006b19f0
006B19E0  50                        PUSH EAX
006B19E1  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B19E4  53                        PUSH EBX
006B19E5  52                        PUSH EDX
006B19E6  50                        PUSH EAX
006B19E7  57                        PUSH EDI
006B19E8  E8 93 45 00 00            CALL 0x006b5f80
006B19ED  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006b19f0:
006B19F0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B19F3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B19F6  85 D2                     TEST EDX,EDX
006B19F8  7E 1A                     JLE 0x006b1a14
006B19FA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B19FD  85 C0                     TEST EAX,EAX
006B19FF  7E 13                     JLE 0x006b1a14
006B1A01  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B1A04  50                        PUSH EAX
006B1A05  52                        PUSH EDX
006B1A06  53                        PUSH EBX
006B1A07  51                        PUSH ECX
006B1A08  57                        PUSH EDI
006B1A09  E8 72 45 00 00            CALL 0x006b5f80
006B1A0E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B1A11  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006b1a14:
006B1A14  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B1A17  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
006B1A1A  03 C2                     ADD EAX,EDX
006B1A1C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B1A1F  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
006B1A22  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006B1A25  8D 41 02                  LEA EAX,[ECX + 0x2]
006B1A28  C1 E0 04                  SHL EAX,0x4
006B1A2B  03 DA                     ADD EBX,EDX
006B1A2D  89 1C 38                  MOV dword ptr [EAX + EDI*0x1],EBX
006B1A30  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B1A33  85 C0                     TEST EAX,EAX
006B1A35  7D 03                     JGE 0x006b1a3a
006B1A37  83 C8 FF                  OR EAX,0xffffffff
LAB_006b1a3a:
006B1A3A  89 84 8F C4 00 00 00      MOV dword ptr [EDI + ECX*0x4 + 0xc4],EAX
006B1A41  5F                        POP EDI
006B1A42  5E                        POP ESI
006B1A43  5B                        POP EBX
LAB_006b1a44:
006B1A44  5D                        POP EBP
006B1A45  C2 1C 00                  RET 0x1c
