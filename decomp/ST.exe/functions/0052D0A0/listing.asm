PopUpTy::OutProc:
0052D0A0  55                        PUSH EBP
0052D0A1  8B EC                     MOV EBP,ESP
0052D0A3  83 EC 50                  SUB ESP,0x50
0052D0A6  A1 42 73 80 00            MOV EAX,[0x00807342]
0052D0AB  53                        PUSH EBX
0052D0AC  56                        PUSH ESI
0052D0AD  57                        PUSH EDI
0052D0AE  85 C0                     TEST EAX,EAX
0052D0B0  0F 84 EF 00 00 00         JZ 0x0052d1a5
0052D0B6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0052D0B9  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0052D0BF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0052D0C2  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0052D0C5  8D 55 B0                  LEA EDX,[EBP + -0x50]
0052D0C8  6A 00                     PUSH 0x0
0052D0CA  50                        PUSH EAX
0052D0CB  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0052D0CE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052D0D4  E8 17 07 20 00            CALL 0x0072d7f0
0052D0D9  8B F0                     MOV ESI,EAX
0052D0DB  83 C4 08                  ADD ESP,0x8
0052D0DE  85 F6                     TEST ESI,ESI
0052D0E0  0F 85 86 00 00 00         JNZ 0x0052d16c
0052D0E6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0052D0E9  85 C9                     TEST ECX,ECX
0052D0EB  74 6D                     JZ 0x0052d15a
0052D0ED  8B B1 90 00 00 00         MOV ESI,dword ptr [ECX + 0x90]
0052D0F3  85 F6                     TEST ESI,ESI
0052D0F5  74 63                     JZ 0x0052d15a
0052D0F7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052D0FA  80 CB FF                  OR BL,0xff
0052D0FD  32 C0                     XOR AL,AL
0052D0FF  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
0052D102  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_0052d105:
0052D105  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0052D108  81 E7 FF 00 00 00         AND EDI,0xff
0052D10E  39 54 B9 18               CMP dword ptr [ECX + EDI*0x4 + 0x18],EDX
0052D112  74 0B                     JZ 0x0052d11f
0052D114  FE C0                     INC AL
0052D116  3C 0F                     CMP AL,0xf
0052D118  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052D11B  72 E8                     JC 0x0052d105
0052D11D  EB 05                     JMP 0x0052d124
LAB_0052d11f:
0052D11F  8A D8                     MOV BL,AL
0052D121  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
LAB_0052d124:
0052D124  80 FB FF                  CMP BL,0xff
0052D127  74 31                     JZ 0x0052d15a
0052D129  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052D12C  68 89 00 00 01            PUSH 0x1000089
0052D131  25 FF 00 00 00            AND EAX,0xff
0052D136  6A 13                     PUSH 0x13
0052D138  8B 4C 81 54               MOV ECX,dword ptr [ECX + EAX*0x4 + 0x54]
0052D13C  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0052D13F  51                        PUSH ECX
0052D140  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0052D143  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0052D146  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0052D149  50                        PUSH EAX
0052D14A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052D14D  6A 00                     PUSH 0x0
0052D14F  6A 00                     PUSH 0x0
0052D151  56                        PUSH ESI
0052D152  51                        PUSH ECX
0052D153  52                        PUSH EDX
0052D154  50                        PUSH EAX
0052D155  E8 26 75 18 00            CALL 0x006b4680
LAB_0052d15a:
0052D15A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0052D15D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D163  5F                        POP EDI
0052D164  5E                        POP ESI
0052D165  5B                        POP EBX
0052D166  8B E5                     MOV ESP,EBP
0052D168  5D                        POP EBP
0052D169  C2 20 00                  RET 0x20
LAB_0052d16c:
0052D16C  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0052D16F  68 A8 6F 7C 00            PUSH 0x7c6fa8
0052D174  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052D179  56                        PUSH ESI
0052D17A  6A 00                     PUSH 0x0
0052D17C  6A 22                     PUSH 0x22
0052D17E  68 84 6F 7C 00            PUSH 0x7c6f84
0052D183  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052D189  E8 42 03 18 00            CALL 0x006ad4d0
0052D18E  83 C4 18                  ADD ESP,0x18
0052D191  85 C0                     TEST EAX,EAX
0052D193  74 01                     JZ 0x0052d196
0052D195  CC                        INT3
LAB_0052d196:
0052D196  6A 22                     PUSH 0x22
0052D198  68 84 6F 7C 00            PUSH 0x7c6f84
0052D19D  6A 00                     PUSH 0x0
0052D19F  56                        PUSH ESI
0052D1A0  E8 9B 8C 17 00            CALL 0x006a5e40
LAB_0052d1a5:
0052D1A5  5F                        POP EDI
0052D1A6  5E                        POP ESI
0052D1A7  5B                        POP EBX
0052D1A8  8B E5                     MOV ESP,EBP
0052D1AA  5D                        POP EBP
0052D1AB  C2 20 00                  RET 0x20
