FUN_0044a150:
0044A150  55                        PUSH EBP
0044A151  8B EC                     MOV EBP,ESP
0044A153  83 EC 4C                  SUB ESP,0x4c
0044A156  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044A15B  53                        PUSH EBX
0044A15C  56                        PUSH ESI
0044A15D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0044A160  57                        PUSH EDI
0044A161  8D 55 B8                  LEA EDX,[EBP + -0x48]
0044A164  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0044A167  6A 00                     PUSH 0x0
0044A169  52                        PUSH EDX
0044A16A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0044A171  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0044A174  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A17A  E8 71 36 2E 00            CALL 0x0072d7f0
0044A17F  8B F0                     MOV ESI,EAX
0044A181  83 C4 08                  ADD ESP,0x8
0044A184  85 F6                     TEST ESI,ESI
0044A186  0F 85 87 00 00 00         JNZ 0x0044a213
0044A18C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0044A18F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044A192  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0044A195  6A 03                     PUSH 0x3
0044A197  56                        PUSH ESI
0044A198  50                        PUSH EAX
0044A199  8B CB                     MOV ECX,EBX
0044A19B  E8 1A 87 FB FF            CALL 0x004028ba
0044A1A0  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0044A1A3  3B C7                     CMP EAX,EDI
0044A1A5  74 1B                     JZ 0x0044a1c2
0044A1A7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0044A1AD  68 1D 2F 00 00            PUSH 0x2f1d
0044A1B2  68 04 60 7A 00            PUSH 0x7a6004
0044A1B7  51                        PUSH ECX
0044A1B8  68 07 00 FE AF            PUSH 0xaffe0007
0044A1BD  E8 7E BC 25 00            CALL 0x006a5e40
LAB_0044a1c2:
0044A1C2  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0044A1C5  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0044A1C8  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0044A1CE  56                        PUSH ESI
0044A1CF  52                        PUSH EDX
0044A1D0  50                        PUSH EAX
0044A1D1  51                        PUSH ECX
0044A1D2  8B CB                     MOV ECX,EBX
0044A1D4  E8 CA 7F FB FF            CALL 0x004021a3
0044A1D9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044A1DC  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0044A1DF  56                        PUSH ESI
0044A1E0  52                        PUSH EDX
0044A1E1  50                        PUSH EAX
0044A1E2  8B CB                     MOV ECX,EBX
0044A1E4  E8 5A 94 FB FF            CALL 0x00403643
0044A1E9  8B 15 58 A1 7F 00         MOV EDX,dword ptr [0x007fa158]
0044A1EF  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044A1F2  81 E6 FF FF 00 00         AND ESI,0xffff
0044A1F8  51                        PUSH ECX
0044A1F9  56                        PUSH ESI
0044A1FA  52                        PUSH EDX
0044A1FB  E8 40 3F 26 00            CALL 0x006ae140
0044A200  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0044A203  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0044a208:
0044A208  33 C0                     XOR EAX,EAX
0044A20A  5F                        POP EDI
0044A20B  5E                        POP ESI
0044A20C  5B                        POP EBX
0044A20D  8B E5                     MOV ESP,EBP
0044A20F  5D                        POP EBP
0044A210  C2 0C 00                  RET 0xc
LAB_0044a213:
0044A213  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0044A216  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044A21C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A222  74 E4                     JZ 0x0044a208
0044A224  68 7C 87 7A 00            PUSH 0x7a877c
0044A229  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A22E  56                        PUSH ESI
0044A22F  6A 00                     PUSH 0x0
0044A231  68 26 2F 00 00            PUSH 0x2f26
0044A236  68 04 60 7A 00            PUSH 0x7a6004
0044A23B  E8 90 32 26 00            CALL 0x006ad4d0
0044A240  83 C4 18                  ADD ESP,0x18
0044A243  85 C0                     TEST EAX,EAX
0044A245  74 01                     JZ 0x0044a248
0044A247  CC                        INT3
LAB_0044a248:
0044A248  68 27 2F 00 00            PUSH 0x2f27
0044A24D  68 04 60 7A 00            PUSH 0x7a6004
0044A252  6A 00                     PUSH 0x0
0044A254  56                        PUSH ESI
0044A255  E8 E6 BB 25 00            CALL 0x006a5e40
0044A25A  5F                        POP EDI
0044A25B  5E                        POP ESI
0044A25C  83 C8 FF                  OR EAX,0xffffffff
0044A25F  5B                        POP EBX
0044A260  8B E5                     MOV ESP,EBP
0044A262  5D                        POP EBP
0044A263  C2 0C 00                  RET 0xc
