FUN_0067fdf0:
0067FDF0  55                        PUSH EBP
0067FDF1  8B EC                     MOV EBP,ESP
0067FDF3  83 EC 44                  SUB ESP,0x44
0067FDF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067FDFB  56                        PUSH ESI
0067FDFC  57                        PUSH EDI
0067FDFD  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067FE00  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067FE03  6A 00                     PUSH 0x0
0067FE05  52                        PUSH EDX
0067FE06  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067FE09  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067FE0F  E8 DC D9 0A 00            CALL 0x0072d7f0
0067FE14  83 C4 08                  ADD ESP,0x8
0067FE17  85 C0                     TEST EAX,EAX
0067FE19  0F 85 84 00 00 00         JNZ 0x0067fea3
0067FE1F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0067FE22  56                        PUSH ESI
0067FE23  E8 7D 58 D8 FF            CALL 0x004056a5
0067FE28  8B F8                     MOV EDI,EAX
0067FE2A  83 C4 04                  ADD ESP,0x4
0067FE2D  85 FF                     TEST EDI,EDI
0067FE2F  7D 1F                     JGE 0x0067fe50
0067FE31  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067FE34  56                        PUSH ESI
0067FE35  50                        PUSH EAX
0067FE36  E8 3B 4B D8 FF            CALL 0x00404976
0067FE3B  8B F8                     MOV EDI,EAX
0067FE3D  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0067FE40  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067FE45  83 C4 08                  ADD ESP,0x8
0067FE48  8B C7                     MOV EAX,EDI
0067FE4A  5F                        POP EDI
0067FE4B  5E                        POP ESI
0067FE4C  8B E5                     MOV ESP,EBP
0067FE4E  5D                        POP EBP
0067FE4F  C3                        RET
LAB_0067fe50:
0067FE50  A1 38 8A 84 00            MOV EAX,[0x00848a38]
0067FE55  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0067FE58  73 0D                     JNC 0x0067fe67
0067FE5A  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0067FE5D  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067FE60  0F AF F7                  IMUL ESI,EDI
0067FE63  03 F1                     ADD ESI,ECX
0067FE65  EB 02                     JMP 0x0067fe69
LAB_0067fe67:
0067FE67  33 F6                     XOR ESI,ESI
LAB_0067fe69:
0067FE69  85 F6                     TEST ESI,ESI
0067FE6B  75 18                     JNZ 0x0067fe85
0067FE6D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0067FE73  68 1A 02 00 00            PUSH 0x21a
0067FE78  68 D8 55 7D 00            PUSH 0x7d55d8
0067FE7D  51                        PUSH ECX
0067FE7E  6A FE                     PUSH -0x2
0067FE80  E8 BB 5F 02 00            CALL 0x006a5e40
LAB_0067fe85:
0067FE85  56                        PUSH ESI
0067FE86  E8 B2 1A D8 FF            CALL 0x0040193d
0067FE8B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067FE8E  83 C4 04                  ADD ESP,0x4
0067FE91  89 16                     MOV dword ptr [ESI],EDX
0067FE93  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0067FE96  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067FE9B  8B C7                     MOV EAX,EDI
0067FE9D  5F                        POP EDI
0067FE9E  5E                        POP ESI
0067FE9F  8B E5                     MOV ESP,EBP
0067FEA1  5D                        POP EBP
0067FEA2  C3                        RET
LAB_0067fea3:
0067FEA3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067FEA6  85 C0                     TEST EAX,EAX
0067FEA8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067FEAE  7C 03                     JL 0x0067feb3
0067FEB0  83 C8 FF                  OR EAX,0xffffffff
LAB_0067feb3:
0067FEB3  5F                        POP EDI
0067FEB4  5E                        POP ESI
0067FEB5  8B E5                     MOV ESP,EBP
0067FEB7  5D                        POP EBP
0067FEB8  C3                        RET
