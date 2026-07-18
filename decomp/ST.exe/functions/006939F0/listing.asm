FUN_006939f0:
006939F0  55                        PUSH EBP
006939F1  8B EC                     MOV EBP,ESP
006939F3  83 EC 50                  SUB ESP,0x50
006939F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006939FB  53                        PUSH EBX
006939FC  56                        PUSH ESI
006939FD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00693A00  33 F6                     XOR ESI,ESI
00693A02  57                        PUSH EDI
00693A03  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00693A06  8D 4D B0                  LEA ECX,[EBP + -0x50]
00693A09  56                        PUSH ESI
00693A0A  52                        PUSH EDX
00693A0B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00693A0E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00693A15  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00693A18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00693A1E  E8 CD 9D 09 00            CALL 0x0072d7f0
00693A23  83 C4 08                  ADD ESP,0x8
00693A26  3B C6                     CMP EAX,ESI
00693A28  75 30                     JNZ 0x00693a5a
00693A2A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00693A2D  B9 66 06 00 00            MOV ECX,0x666
00693A32  33 C0                     XOR EAX,EAX
00693A34  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00693A37  F3 AB                     STOSD.REP ES:EDI
00693A39  AA                        STOSB ES:EDI
00693A3A  8B 0D 70 D7 79 00         MOV ECX,dword ptr [0x0079d770]
00693A40  8D 45 FC                  LEA EAX,[EBP + -0x4]
00693A43  6A 01                     PUSH 0x1
00693A45  50                        PUSH EAX
00693A46  51                        PUSH ECX
00693A47  56                        PUSH ESI
00693A48  8B CB                     MOV ECX,EBX
00693A4A  E8 91 E2 05 00            CALL 0x006f1ce0
00693A4F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00693A52  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00693A58  EB 19                     JMP 0x00693a73
LAB_00693a5a:
00693A5A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00693A5D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00693A60  8D 4D FC                  LEA ECX,[EBP + -0x4]
00693A63  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00693A68  51                        PUSH ECX
00693A69  8B CB                     MOV ECX,EBX
00693A6B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00693A6E  E8 6D E6 05 00            CALL 0x006f20e0
LAB_00693a73:
00693A73  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00693A76  85 F6                     TEST ESI,ESI
00693A78  74 16                     JZ 0x00693a90
00693A7A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00693A7D  B9 66 06 00 00            MOV ECX,0x666
00693A82  F3 A5                     MOVSD.REP ES:EDI,ESI
00693A84  8D 55 FC                  LEA EDX,[EBP + -0x4]
00693A87  8B CB                     MOV ECX,EBX
00693A89  52                        PUSH EDX
00693A8A  A4                        MOVSB ES:EDI,ESI
00693A8B  E8 50 E6 05 00            CALL 0x006f20e0
LAB_00693a90:
00693A90  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00693A93  5F                        POP EDI
00693A94  5E                        POP ESI
00693A95  5B                        POP EBX
00693A96  8B E5                     MOV ESP,EBP
00693A98  5D                        POP EBP
00693A99  C2 04 00                  RET 0x4
