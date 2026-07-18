FUN_004969f0:
004969F0  55                        PUSH EBP
004969F1  8B EC                     MOV EBP,ESP
004969F3  83 EC 18                  SUB ESP,0x18
004969F6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004969F9  85 C0                     TEST EAX,EAX
004969FB  7C 39                     JL 0x00496a36
004969FD  8B 15 70 B2 7F 00         MOV EDX,dword ptr [0x007fb270]
00496A03  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
00496A06  73 0F                     JNC 0x00496a17
00496A08  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00496A0B  56                        PUSH ESI
00496A0C  0F AF C8                  IMUL ECX,EAX
00496A0F  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00496A12  03 CE                     ADD ECX,ESI
00496A14  5E                        POP ESI
00496A15  EB 02                     JMP 0x00496a19
LAB_00496a17:
00496A17  33 C9                     XOR ECX,ECX
LAB_00496a19:
00496A19  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00496A1C  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
00496A1F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00496A22  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00496A25  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00496A28  89 11                     MOV dword ptr [ECX],EDX
00496A2A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00496A2D  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00496A30  8B E5                     MOV ESP,EBP
00496A32  5D                        POP EBP
00496A33  C2 1C 00                  RET 0x1c
LAB_00496a36:
00496A36  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00496A39  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00496A3C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00496A3F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00496A42  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00496A45  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00496A48  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00496A4B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00496A4E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00496A51  8B 0D 70 B2 7F 00         MOV ECX,dword ptr [0x007fb270]
00496A57  8D 45 E8                  LEA EAX,[EBP + -0x18]
00496A5A  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00496A5D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00496A60  50                        PUSH EAX
00496A61  51                        PUSH ECX
00496A62  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00496A65  E8 56 77 21 00            CALL 0x006ae1c0
00496A6A  8B E5                     MOV ESP,EBP
00496A6C  5D                        POP EBP
00496A6D  C2 1C 00                  RET 0x1c
