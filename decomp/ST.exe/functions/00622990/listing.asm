FUN_00622990:
00622990  55                        PUSH EBP
00622991  8B EC                     MOV EBP,ESP
00622993  83 EC 18                  SUB ESP,0x18
00622996  53                        PUSH EBX
00622997  56                        PUSH ESI
00622998  57                        PUSH EDI
00622999  8B D9                     MOV EBX,ECX
0062299B  68 09 01 00 00            PUSH 0x109
006229A0  E8 CB 82 08 00            CALL 0x006aac70
006229A5  B9 42 00 00 00            MOV ECX,0x42
006229AA  8D B3 5E 02 00 00         LEA ESI,[EBX + 0x25e]
006229B0  8B F8                     MOV EDI,EAX
006229B2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006229B5  F3 A5                     MOVSD.REP ES:EDI,ESI
006229B7  A4                        MOVSB ES:EDI,ESI
006229B8  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
006229BF  8D 45 FC                  LEA EAX,[EBP + -0x4]
006229C2  50                        PUSH EAX
006229C3  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
006229C9  E8 06 EF DD FF            CALL 0x004018d4
006229CE  8D 4D F8                  LEA ECX,[EBP + -0x8]
006229D1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006229D4  51                        PUSH ECX
006229D5  8B CB                     MOV ECX,EBX
006229D7  E8 BE E7 DD FF            CALL 0x0040119a
006229DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006229DF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006229E2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006229E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006229E8  8D 84 10 11 01 00 00      LEA EAX,[EAX + EDX*0x1 + 0x111]
006229EF  50                        PUSH EAX
006229F0  51                        PUSH ECX
006229F1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006229F4  E8 57 A5 08 00            CALL 0x006acf50
006229F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006229FC  8D 98 09 01 00 00         LEA EBX,[EAX + 0x109]
00622A02  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00622A05  89 13                     MOV dword ptr [EBX],EDX
00622A07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00622A0A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00622A0D  83 C3 04                  ADD EBX,0x4
00622A10  8B C1                     MOV EAX,ECX
00622A12  8B FB                     MOV EDI,EBX
00622A14  C1 E9 02                  SHR ECX,0x2
00622A17  F3 A5                     MOVSD.REP ES:EDI,ESI
00622A19  8B C8                     MOV ECX,EAX
00622A1B  83 E1 03                  AND ECX,0x3
00622A1E  F3 A4                     MOVSB.REP ES:EDI,ESI
00622A20  8D 4D F0                  LEA ECX,[EBP + -0x10]
00622A23  51                        PUSH ECX
00622A24  E8 37 86 08 00            CALL 0x006ab060
00622A29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00622A2C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00622A2F  03 D8                     ADD EBX,EAX
00622A31  89 13                     MOV dword ptr [EBX],EDX
00622A33  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00622A36  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00622A39  8B C1                     MOV EAX,ECX
00622A3B  8D 7B 04                  LEA EDI,[EBX + 0x4]
00622A3E  C1 E9 02                  SHR ECX,0x2
00622A41  F3 A5                     MOVSD.REP ES:EDI,ESI
00622A43  8B C8                     MOV ECX,EAX
00622A45  83 E1 03                  AND ECX,0x3
00622A48  F3 A4                     MOVSB.REP ES:EDI,ESI
00622A4A  8D 4D EC                  LEA ECX,[EBP + -0x14]
00622A4D  51                        PUSH ECX
00622A4E  E8 0D 86 08 00            CALL 0x006ab060
00622A53  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00622A56  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00622A59  5F                        POP EDI
00622A5A  5E                        POP ESI
00622A5B  89 02                     MOV dword ptr [EDX],EAX
00622A5D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00622A60  5B                        POP EBX
00622A61  8B E5                     MOV ESP,EBP
00622A63  5D                        POP EBP
00622A64  C2 04 00                  RET 0x4
