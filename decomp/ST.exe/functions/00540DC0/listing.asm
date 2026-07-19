SetAccelerator:
00540DC0  55                        PUSH EBP
00540DC1  8B EC                     MOV EBP,ESP
00540DC3  81 EC FC 00 00 00         SUB ESP,0xfc
00540DC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00540DCE  56                        PUSH ESI
00540DCF  57                        PUSH EDI
00540DD0  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
00540DD6  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
00540DDC  6A 00                     PUSH 0x0
00540DDE  52                        PUSH EDX
00540DDF  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00540DE5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540DEB  E8 00 CA 1E 00            CALL 0x0072d7f0
00540DF0  8B F0                     MOV ESI,EAX
00540DF2  83 C4 08                  ADD ESP,0x8
00540DF5  85 F6                     TEST ESI,ESI
00540DF7  0F 85 60 01 00 00         JNZ 0x00540f5d
00540DFD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00540E00  B9 13 00 00 00            MOV ECX,0x13
00540E05  8D 7D B4                  LEA EDI,[EBP + -0x4c]
00540E08  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00540E0B  F3 AB                     STOSD.REP ES:EDI
00540E0D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00540E10  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00540E13  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00540E16  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00540E19  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00540E1C  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00540E1F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00540E22  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00540E25  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00540E28  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00540E2B  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00540E2E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00540E31  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00540E34  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00540E37  0C 08                     OR AL,0x8
00540E39  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00540E3C  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
00540E3F  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00540E42  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00540E45  B9 08 00 00 00            MOV ECX,0x8
00540E4A  33 C0                     XOR EAX,EAX
00540E4C  8D 7D 94                  LEA EDI,[EBP + -0x6c]
00540E4F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00540E52  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
00540E55  F3 AB                     STOSD.REP ES:EDI
00540E57  8B C6                     MOV EAX,ESI
00540E59  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00540E5C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00540E5F  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00540E62  F7 D8                     NEG EAX
00540E64  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
00540E67  8D 55 94                  LEA EDX,[EBP + -0x6c]
00540E6A  1B C0                     SBB EAX,EAX
00540E6C  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00540E6F  83 C0 11                  ADD EAX,0x11
00540E72  52                        PUSH EDX
00540E73  B9 20 76 80 00            MOV ECX,0x807620
00540E78  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
00540E7F  C7 45 A0 03 00 00 00      MOV dword ptr [EBP + -0x60],0x3
00540E86  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00540E89  E8 22 2F 1A 00            CALL 0x006e3db0
00540E8E  A1 F0 26 80 00            MOV EAX,[0x008026f0]
00540E93  85 F6                     TEST ESI,ESI
00540E95  74 31                     JZ 0x00540ec8
00540E97  85 C0                     TEST EAX,EAX
00540E99  75 11                     JNZ 0x00540eac
00540E9B  6A 0A                     PUSH 0xa
00540E9D  6A 4C                     PUSH 0x4c
00540E9F  6A 0A                     PUSH 0xa
00540EA1  50                        PUSH EAX
00540EA2  E8 E9 D3 16 00            CALL 0x006ae290
00540EA7  A3 F0 26 80 00            MOV [0x008026f0],EAX
LAB_00540eac:
00540EAC  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00540EAF  51                        PUSH ECX
00540EB0  50                        PUSH EAX
00540EB1  E8 0A D3 16 00            CALL 0x006ae1c0
00540EB6  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
00540EBC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540EC2  5F                        POP EDI
00540EC3  5E                        POP ESI
00540EC4  8B E5                     MOV ESP,EBP
00540EC6  5D                        POP EBP
00540EC7  C3                        RET
LAB_00540ec8:
00540EC8  85 C0                     TEST EAX,EAX
00540ECA  74 7F                     JZ 0x00540f4b
00540ECC  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
00540ED3  8B 0D F0 26 80 00         MOV ECX,dword ptr [0x008026f0]
00540ED9  8D 95 04 FF FF FF         LEA EDX,[EBP + 0xffffff04]
00540EDF  E8 AC 02 17 00            CALL 0x006b1190
00540EE4  85 C0                     TEST EAX,EAX
00540EE6  7C 63                     JL 0x00540f4b
LAB_00540ee8:
00540EE8  B9 13 00 00 00            MOV ECX,0x13
00540EED  8D 7D B4                  LEA EDI,[EBP + -0x4c]
00540EF0  8D B5 04 FF FF FF         LEA ESI,[EBP + 0xffffff04]
00540EF6  33 D2                     XOR EDX,EDX
00540EF8  F3 A7                     CMPSD.REPE ES:EDI,ESI
00540EFA  74 27                     JZ 0x00540f23
00540EFC  8B 0D F0 26 80 00         MOV ECX,dword ptr [0x008026f0]
00540F02  8D 95 04 FF FF FF         LEA EDX,[EBP + 0xffffff04]
00540F08  E8 83 02 17 00            CALL 0x006b1190
00540F0D  85 C0                     TEST EAX,EAX
00540F0F  7D D7                     JGE 0x00540ee8
00540F11  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
00540F17  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540F1D  5F                        POP EDI
00540F1E  5E                        POP ESI
00540F1F  8B E5                     MOV ESP,EBP
00540F21  5D                        POP EBP
00540F22  C3                        RET
LAB_00540f23:
00540F23  50                        PUSH EAX
00540F24  A1 F0 26 80 00            MOV EAX,[0x008026f0]
00540F29  50                        PUSH EAX
00540F2A  E8 41 FD 16 00            CALL 0x006b0c70
00540F2F  A1 F0 26 80 00            MOV EAX,[0x008026f0]
00540F34  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00540F37  85 C9                     TEST ECX,ECX
00540F39  75 10                     JNZ 0x00540f4b
00540F3B  50                        PUSH EAX
00540F3C  E8 CF D1 16 00            CALL 0x006ae110
00540F41  C7 05 F0 26 80 00 00 00 00 00  MOV dword ptr [0x008026f0],0x0
LAB_00540f4b:
00540F4B  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
00540F51  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540F57  5F                        POP EDI
00540F58  5E                        POP ESI
00540F59  8B E5                     MOV ESP,EBP
00540F5B  5D                        POP EBP
00540F5C  C3                        RET
LAB_00540f5d:
00540F5D  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00540F63  68 BC 7B 7C 00            PUSH 0x7c7bbc
00540F68  68 CC 4C 7A 00            PUSH 0x7a4ccc
00540F6D  56                        PUSH ESI
00540F6E  6A 00                     PUSH 0x0
00540F70  68 E7 00 00 00            PUSH 0xe7
00540F75  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540F7A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00540F80  E8 4B C5 16 00            CALL 0x006ad4d0
00540F85  83 C4 18                  ADD ESP,0x18
00540F88  85 C0                     TEST EAX,EAX
00540F8A  74 01                     JZ 0x00540f8d
00540F8C  CC                        INT3
LAB_00540f8d:
00540F8D  68 E7 00 00 00            PUSH 0xe7
00540F92  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540F97  6A 00                     PUSH 0x0
00540F99  56                        PUSH ESI
00540F9A  E8 A1 4E 16 00            CALL 0x006a5e40
00540F9F  5F                        POP EDI
00540FA0  5E                        POP ESI
00540FA1  8B E5                     MOV ESP,EBP
00540FA3  5D                        POP EBP
00540FA4  C3                        RET
