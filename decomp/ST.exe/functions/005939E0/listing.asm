FUN_005939e0:
005939E0  55                        PUSH EBP
005939E1  8B EC                     MOV EBP,ESP
005939E3  83 EC 48                  SUB ESP,0x48
005939E6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005939E9  53                        PUSH EBX
005939EA  56                        PUSH ESI
005939EB  57                        PUSH EDI
005939EC  85 C0                     TEST EAX,EAX
005939EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005939F1  0F 84 F6 00 00 00         JZ 0x00593aed
005939F7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005939FC  8D 55 BC                  LEA EDX,[EBP + -0x44]
005939FF  8D 4D B8                  LEA ECX,[EBP + -0x48]
00593A02  6A 00                     PUSH 0x0
00593A04  52                        PUSH EDX
00593A05  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00593A08  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00593A0E  E8 DD 9D 19 00            CALL 0x0072d7f0
00593A13  8B F0                     MOV ESI,EAX
00593A15  83 C4 08                  ADD ESP,0x8
00593A18  85 F6                     TEST ESI,ESI
00593A1A  0F 85 94 00 00 00         JNZ 0x00593ab4
00593A20  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00593A23  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00593A26  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00593A29  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
00593A2C  85 C9                     TEST ECX,ECX
00593A2E  74 25                     JZ 0x00593a55
00593A30  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
00593A33  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
00593A36  52                        PUSH EDX
00593A37  51                        PUSH ECX
00593A38  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00593A3B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00593A3E  51                        PUSH ECX
00593A3F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00593A42  52                        PUSH EDX
00593A43  6A 00                     PUSH 0x0
00593A45  6A 00                     PUSH 0x0
00593A47  6A 00                     PUSH 0x0
00593A49  50                        PUSH EAX
00593A4A  8D 47 03                  LEA EAX,[EDI + 0x3]
00593A4D  50                        PUSH EAX
00593A4E  53                        PUSH EBX
00593A4F  51                        PUSH ECX
00593A50  E8 AB 15 13 00            CALL 0x006c5000
LAB_00593a55:
00593A55  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
00593A58  85 C9                     TEST ECX,ECX
00593A5A  74 33                     JZ 0x00593a8f
00593A5C  8B 56 50                  MOV EDX,dword ptr [ESI + 0x50]
00593A5F  8B 46 74                  MOV EAX,dword ptr [ESI + 0x74]
00593A62  52                        PUSH EDX
00593A63  51                        PUSH ECX
00593A64  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00593A67  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00593A6A  51                        PUSH ECX
00593A6B  52                        PUSH EDX
00593A6C  6A 00                     PUSH 0x0
00593A6E  6A 00                     PUSH 0x0
00593A70  6A 00                     PUSH 0x0
00593A72  50                        PUSH EAX
00593A73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00593A76  57                        PUSH EDI
00593A77  53                        PUSH EBX
00593A78  50                        PUSH EAX
00593A79  E8 82 15 13 00            CALL 0x006c5000
00593A7E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00593A81  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00593A86  5F                        POP EDI
00593A87  5E                        POP ESI
00593A88  5B                        POP EBX
00593A89  8B E5                     MOV ESP,EBP
00593A8B  5D                        POP EBP
00593A8C  C2 20 00                  RET 0x20
LAB_00593a8f:
00593A8F  8B 4E 74                  MOV ECX,dword ptr [ESI + 0x74]
00593A92  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00593A95  6A 00                     PUSH 0x0
00593A97  51                        PUSH ECX
00593A98  83 C3 03                  ADD EBX,0x3
00593A9B  57                        PUSH EDI
00593A9C  53                        PUSH EBX
00593A9D  52                        PUSH EDX
00593A9E  E8 9D 0B 12 00            CALL 0x006b4640
00593AA3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00593AA6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00593AAB  5F                        POP EDI
00593AAC  5E                        POP ESI
00593AAD  5B                        POP EBX
00593AAE  8B E5                     MOV ESP,EBP
00593AB0  5D                        POP EBP
00593AB1  C2 20 00                  RET 0x20
LAB_00593ab4:
00593AB4  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00593AB7  68 10 BF 7C 00            PUSH 0x7cbf10
00593ABC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00593AC1  56                        PUSH ESI
00593AC2  6A 00                     PUSH 0x0
00593AC4  6A 12                     PUSH 0x12
00593AC6  68 EC BE 7C 00            PUSH 0x7cbeec
00593ACB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00593AD1  E8 FA 99 11 00            CALL 0x006ad4d0
00593AD6  83 C4 18                  ADD ESP,0x18
00593AD9  85 C0                     TEST EAX,EAX
00593ADB  74 01                     JZ 0x00593ade
00593ADD  CC                        INT3
LAB_00593ade:
00593ADE  6A 12                     PUSH 0x12
00593AE0  68 EC BE 7C 00            PUSH 0x7cbeec
00593AE5  6A 00                     PUSH 0x0
00593AE7  56                        PUSH ESI
00593AE8  E8 53 23 11 00            CALL 0x006a5e40
LAB_00593aed:
00593AED  5F                        POP EDI
00593AEE  5E                        POP ESI
00593AEF  5B                        POP EBX
00593AF0  8B E5                     MOV ESP,EBP
00593AF2  5D                        POP EBP
00593AF3  C2 20 00                  RET 0x20
