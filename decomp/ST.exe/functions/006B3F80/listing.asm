FUN_006b3f80:
006B3F80  55                        PUSH EBP
006B3F81  8B EC                     MOV EBP,ESP
006B3F83  83 EC 10                  SUB ESP,0x10
006B3F86  56                        PUSH ESI
006B3F87  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B3F8A  8B 86 10 02 00 00         MOV EAX,dword ptr [ESI + 0x210]
006B3F90  85 C0                     TEST EAX,EAX
006B3F92  0F 84 89 00 00 00         JZ 0x006b4021
006B3F98  8B 8E EC 01 00 00         MOV ECX,dword ptr [ESI + 0x1ec]
006B3F9E  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006B3FA4  8B D1                     MOV EDX,ECX
006B3FA6  53                        PUSH EBX
006B3FA7  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006B3FAB  57                        PUSH EDI
006B3FAC  8B BC C6 1C 01 00 00      MOV EDI,dword ptr [ESI + EAX*0x8 + 0x11c]
006B3FB3  03 FA                     ADD EDI,EDX
006B3FB5  8B 96 F0 01 00 00         MOV EDX,dword ptr [ESI + 0x1f0]
006B3FBB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006B3FBE  8B 9C C6 20 01 00 00      MOV EBX,dword ptr [ESI + EAX*0x8 + 0x120]
006B3FC5  8B FA                     MOV EDI,EDX
006B3FC7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006B3FCA  0F AF 7D 10               IMUL EDI,dword ptr [EBP + 0x10]
006B3FCE  C1 E0 04                  SHL EAX,0x4
006B3FD1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006B3FD4  8D 4D F0                  LEA ECX,[EBP + -0x10]
006B3FD7  8D 44 30 14               LEA EAX,[EAX + ESI*0x1 + 0x14]
006B3FDB  8D 55 F0                  LEA EDX,[EBP + -0x10]
006B3FDE  50                        PUSH EAX
006B3FDF  03 DF                     ADD EBX,EDI
006B3FE1  51                        PUSH ECX
006B3FE2  52                        PUSH EDX
006B3FE3  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B3FE6  E8 C5 BE 01 00            CALL 0x006cfeb0
006B3FEB  83 C4 0C                  ADD ESP,0xc
006B3FEE  85 C0                     TEST EAX,EAX
006B3FF0  5F                        POP EDI
006B3FF1  5B                        POP EBX
006B3FF2  74 2D                     JZ 0x006b4021
006B3FF4  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006B3FFA  8B 8E 10 02 00 00         MOV ECX,dword ptr [ESI + 0x210]
006B4000  83 C0 07                  ADD EAX,0x7
006B4003  99                        CDQ
006B4004  83 E2 07                  AND EDX,0x7
006B4007  03 C2                     ADD EAX,EDX
006B4009  C1 F8 03                  SAR EAX,0x3
006B400C  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006B4010  03 C1                     ADD EAX,ECX
006B4012  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006B4015  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B4018  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B401B  80 F2 07                  XOR DL,0x7
006B401E  0F AB 11                  BTS [ECX],EDX
LAB_006b4021:
006B4021  5E                        POP ESI
006B4022  8B E5                     MOV ESP,EBP
006B4024  5D                        POP EBP
006B4025  C2 0C 00                  RET 0xc
