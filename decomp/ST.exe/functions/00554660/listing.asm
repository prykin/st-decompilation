FUN_00554660:
00554660  55                        PUSH EBP
00554661  8B EC                     MOV EBP,ESP
00554663  81 EC 48 04 00 00         SUB ESP,0x448
00554669  56                        PUSH ESI
0055466A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055466D  57                        PUSH EDI
0055466E  B9 00 01 00 00            MOV ECX,0x100
00554673  33 C0                     XOR EAX,EAX
00554675  8D BD B8 FB FF FF         LEA EDI,[EBP + 0xfffffbb8]
0055467B  F3 AB                     STOSD.REP ES:EDI
0055467D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00554682  8D 55 BC                  LEA EDX,[EBP + -0x44]
00554685  8D 4D B8                  LEA ECX,[EBP + -0x48]
00554688  6A 00                     PUSH 0x0
0055468A  52                        PUSH EDX
0055468B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0055468E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00554694  E8 57 91 1D 00            CALL 0x0072d7f0
00554699  8B F0                     MOV ESI,EAX
0055469B  83 C4 08                  ADD ESP,0x8
0055469E  85 F6                     TEST ESI,ESI
005546A0  0F 85 90 00 00 00         JNZ 0x00554736
005546A6  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005546AC  50                        PUSH EAX
005546AD  68 00 01 00 00            PUSH 0x100
005546B2  50                        PUSH EAX
005546B3  8D 85 B8 FB FF FF         LEA EAX,[EBP + 0xfffffbb8]
005546B9  50                        PUSH EAX
005546BA  51                        PUSH ECX
005546BB  E8 60 C3 15 00            CALL 0x006b0a20
005546C0  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
005546C6  A1 30 67 80 00            MOV EAX,[0x00806730]
005546CB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005546D1  52                        PUSH EDX
005546D2  50                        PUSH EAX
005546D3  56                        PUSH ESI
005546D4  56                        PUSH ESI
005546D5  51                        PUSH ECX
005546D6  E8 A5 18 16 00            CALL 0x006b5f80
005546DB  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005546E0  56                        PUSH ESI
005546E1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005546E4  8B 16                     MOV EDX,dword ptr [ESI]
005546E6  52                        PUSH EDX
005546E7  6A 00                     PUSH 0x0
005546E9  6A 00                     PUSH 0x0
005546EB  50                        PUSH EAX
005546EC  E8 4F FF 15 00            CALL 0x006b4640
005546F1  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005546F7  6A 00                     PUSH 0x0
005546F9  6A 00                     PUSH 0x0
005546FB  51                        PUSH ECX
005546FC  E8 6F 6C 16 00            CALL 0x006bb370
00554701  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00554704  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00554707  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055470A  52                        PUSH EDX
0055470B  8B 16                     MOV EDX,dword ptr [ESI]
0055470D  50                        PUSH EAX
0055470E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00554713  51                        PUSH ECX
00554714  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0055471A  52                        PUSH EDX
0055471B  50                        PUSH EAX
0055471C  51                        PUSH ECX
0055471D  E8 68 FD EA FF            CALL 0x0040448a
00554722  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00554725  83 C4 18                  ADD ESP,0x18
00554728  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055472E  5F                        POP EDI
0055472F  5E                        POP ESI
00554730  8B E5                     MOV ESP,EBP
00554732  5D                        POP EBP
00554733  C2 0C 00                  RET 0xc
LAB_00554736:
00554736  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00554739  68 48 8F 7C 00            PUSH 0x7c8f48
0055473E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00554743  56                        PUSH ESI
00554744  6A 00                     PUSH 0x0
00554746  6A 7B                     PUSH 0x7b
00554748  68 0C 8F 7C 00            PUSH 0x7c8f0c
0055474D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00554752  E8 79 8D 15 00            CALL 0x006ad4d0
00554757  83 C4 18                  ADD ESP,0x18
0055475A  85 C0                     TEST EAX,EAX
0055475C  74 01                     JZ 0x0055475f
0055475E  CC                        INT3
LAB_0055475f:
0055475F  6A 7C                     PUSH 0x7c
00554761  68 0C 8F 7C 00            PUSH 0x7c8f0c
00554766  6A 00                     PUSH 0x0
00554768  56                        PUSH ESI
00554769  E8 D2 16 15 00            CALL 0x006a5e40
0055476E  5F                        POP EDI
0055476F  5E                        POP ESI
00554770  8B E5                     MOV ESP,EBP
00554772  5D                        POP EBP
00554773  C2 0C 00                  RET 0xc
