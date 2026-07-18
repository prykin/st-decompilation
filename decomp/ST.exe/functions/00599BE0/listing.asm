FUN_00599be0:
00599BE0  55                        PUSH EBP
00599BE1  8B EC                     MOV EBP,ESP
00599BE3  83 EC 48                  SUB ESP,0x48
00599BE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00599BEB  53                        PUSH EBX
00599BEC  56                        PUSH ESI
00599BED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00599BF0  57                        PUSH EDI
00599BF1  8D 55 BC                  LEA EDX,[EBP + -0x44]
00599BF4  8D 4D B8                  LEA ECX,[EBP + -0x48]
00599BF7  6A 00                     PUSH 0x0
00599BF9  52                        PUSH EDX
00599BFA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00599BFD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00599C03  E8 E8 3B 19 00            CALL 0x0072d7f0
00599C08  8B F0                     MOV ESI,EAX
00599C0A  83 C4 08                  ADD ESP,0x8
00599C0D  85 F6                     TEST ESI,ESI
00599C0F  0F 85 A1 01 00 00         JNZ 0x00599db6
00599C15  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00599C18  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599C1E  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
00599C21  85 DB                     TEST EBX,EBX
00599C23  75 18                     JNZ 0x00599c3d
00599C25  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00599C29  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00599C2D  83 C3 1F                  ADD EBX,0x1f
00599C30  C1 EB 03                  SHR EBX,0x3
00599C33  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00599C39  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00599c3d:
00599C3D  50                        PUSH EAX
00599C3E  E8 5D B3 11 00            CALL 0x006b4fa0
00599C43  8B CB                     MOV ECX,EBX
00599C45  8B F8                     MOV EDI,EAX
00599C47  8B D1                     MOV EDX,ECX
00599C49  83 C8 FF                  OR EAX,0xffffffff
00599C4C  C1 E9 02                  SHR ECX,0x2
00599C4F  F3 AB                     STOSD.REP ES:EDI
00599C51  8B CA                     MOV ECX,EDX
00599C53  6A 14                     PUSH 0x14
00599C55  83 E1 03                  AND ECX,0x3
00599C58  68 86 01 00 00            PUSH 0x186
00599C5D  F3 AA                     STOSB.REP ES:EDI
00599C5F  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599C65  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599C6B  6A 48                     PUSH 0x48
00599C6D  6A 19                     PUSH 0x19
00599C6F  6A 00                     PUSH 0x0
00599C71  50                        PUSH EAX
00599C72  E8 19 6E 17 00            CALL 0x00710a90
00599C77  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599C7D  6A 02                     PUSH 0x2
00599C7F  6A FF                     PUSH -0x1
00599C81  6A 00                     PUSH 0x0
00599C83  51                        PUSH ECX
00599C84  68 4F 25 00 00            PUSH 0x254f
00599C89  E8 B2 64 11 00            CALL 0x006b0140
00599C8E  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599C94  50                        PUSH EAX
00599C95  E8 26 7D 17 00            CALL 0x007119c0
00599C9A  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
00599CA0  6A 0D                     PUSH 0xd
00599CA2  6A 0F                     PUSH 0xf
00599CA4  6A 1B                     PUSH 0x1b
00599CA6  68 88 01 00 00            PUSH 0x188
00599CAB  6A 5B                     PUSH 0x5b
00599CAD  6A 18                     PUSH 0x18
00599CAF  6A 00                     PUSH 0x0
00599CB1  52                        PUSH EDX
00599CB2  E8 29 C2 11 00            CALL 0x006b5ee0
00599CB7  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599CBD  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599CC3  6A 14                     PUSH 0x14
00599CC5  68 B4 00 00 00            PUSH 0xb4
00599CCA  6A 7F                     PUSH 0x7f
00599CCC  6A 19                     PUSH 0x19
00599CCE  6A 00                     PUSH 0x0
00599CD0  50                        PUSH EAX
00599CD1  E8 BA 6D 17 00            CALL 0x00710a90
00599CD6  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599CDC  6A 02                     PUSH 0x2
00599CDE  6A FF                     PUSH -0x1
00599CE0  6A 00                     PUSH 0x0
00599CE2  51                        PUSH ECX
00599CE3  68 50 25 00 00            PUSH 0x2550
00599CE8  E8 53 64 11 00            CALL 0x006b0140
00599CED  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599CF3  50                        PUSH EAX
00599CF4  E8 C7 7C 17 00            CALL 0x007119c0
00599CF9  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
00599CFF  6A 0D                     PUSH 0xd
00599D01  6A 0F                     PUSH 0xf
00599D03  6A 16                     PUSH 0x16
00599D05  68 B6 00 00 00            PUSH 0xb6
00599D0A  68 92 00 00 00            PUSH 0x92
00599D0F  6A 18                     PUSH 0x18
00599D11  6A 00                     PUSH 0x0
00599D13  52                        PUSH EDX
00599D14  E8 C7 C1 11 00            CALL 0x006b5ee0
00599D19  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
00599D1F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599D25  6A 14                     PUSH 0x14
00599D27  68 96 00 00 00            PUSH 0x96
00599D2C  68 93 00 00 00            PUSH 0x93
00599D31  68 04 01 00 00            PUSH 0x104
00599D36  6A 00                     PUSH 0x0
00599D38  50                        PUSH EAX
00599D39  E8 52 6D 17 00            CALL 0x00710a90
00599D3E  6A 02                     PUSH 0x2
00599D40  6A FF                     PUSH -0x1
00599D42  6A 00                     PUSH 0x0
00599D44  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00599D4A  51                        PUSH ECX
00599D4B  68 51 25 00 00            PUSH 0x2551
00599D50  E8 EB 63 11 00            CALL 0x006b0140
00599D55  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
00599D5B  50                        PUSH EAX
00599D5C  E8 5F 7C 17 00            CALL 0x007119c0
00599D61  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
00599D67  6A 0F                     PUSH 0xf
00599D69  6A 02                     PUSH 0x2
00599D6B  6A 14                     PUSH 0x14
00599D6D  6A 16                     PUSH 0x16
00599D6F  68 93 00 00 00            PUSH 0x93
00599D74  68 E6 00 00 00            PUSH 0xe6
00599D79  6A 00                     PUSH 0x0
00599D7B  52                        PUSH EDX
00599D7C  E8 EF D7 12 00            CALL 0x006c7570
00599D81  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
00599D87  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00599D8D  50                        PUSH EAX
00599D8E  51                        PUSH ECX
00599D8F  E8 9C 96 11 00            CALL 0x006b3430
00599D94  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
00599D9A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00599D9F  52                        PUSH EDX
00599DA0  50                        PUSH EAX
00599DA1  E8 2A 98 11 00            CALL 0x006b35d0
00599DA6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00599DA9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00599DAF  5F                        POP EDI
00599DB0  5E                        POP ESI
00599DB1  5B                        POP EBX
00599DB2  8B E5                     MOV ESP,EBP
00599DB4  5D                        POP EBP
00599DB5  C3                        RET
LAB_00599db6:
00599DB6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00599DB9  68 E4 C1 7C 00            PUSH 0x7cc1e4
00599DBE  68 CC 4C 7A 00            PUSH 0x7a4ccc
00599DC3  56                        PUSH ESI
00599DC4  6A 00                     PUSH 0x0
00599DC6  68 C0 03 00 00            PUSH 0x3c0
00599DCB  68 70 BF 7C 00            PUSH 0x7cbf70
00599DD0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00599DD6  E8 F5 36 11 00            CALL 0x006ad4d0
00599DDB  83 C4 18                  ADD ESP,0x18
00599DDE  85 C0                     TEST EAX,EAX
00599DE0  74 01                     JZ 0x00599de3
00599DE2  CC                        INT3
LAB_00599de3:
00599DE3  68 C0 03 00 00            PUSH 0x3c0
00599DE8  68 70 BF 7C 00            PUSH 0x7cbf70
00599DED  6A 00                     PUSH 0x0
00599DEF  56                        PUSH ESI
00599DF0  E8 4B C0 10 00            CALL 0x006a5e40
00599DF5  5F                        POP EDI
00599DF6  5E                        POP ESI
00599DF7  5B                        POP EBX
00599DF8  8B E5                     MOV ESP,EBP
00599DFA  5D                        POP EBP
00599DFB  C3                        RET
