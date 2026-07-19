DelPlrEdit:
0067DB30  55                        PUSH EBP
0067DB31  8B EC                     MOV EBP,ESP
0067DB33  83 EC 44                  SUB ESP,0x44
0067DB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067DB3B  56                        PUSH ESI
0067DB3C  57                        PUSH EDI
0067DB3D  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067DB40  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067DB43  6A 00                     PUSH 0x0
0067DB45  52                        PUSH EDX
0067DB46  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067DB49  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DB4F  E8 9C FC 0A 00            CALL 0x0072d7f0
0067DB54  8B F0                     MOV ESI,EAX
0067DB56  83 C4 08                  ADD ESP,0x8
0067DB59  85 F6                     TEST ESI,ESI
0067DB5B  75 40                     JNZ 0x0067db9d
0067DB5D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067DB60  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0067DB63  85 F6                     TEST ESI,ESI
0067DB65  74 04                     JZ 0x0067db6b
0067DB67  85 FF                     TEST EDI,EDI
0067DB69  75 17                     JNZ 0x0067db82
LAB_0067db6b:
0067DB6B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067DB70  68 23 01 00 00            PUSH 0x123
0067DB75  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DB7A  50                        PUSH EAX
0067DB7B  6A CC                     PUSH -0x34
0067DB7D  E8 BE 82 02 00            CALL 0x006a5e40
LAB_0067db82:
0067DB82  57                        PUSH EDI
0067DB83  6A 0C                     PUSH 0xc
0067DB85  8B CE                     MOV ECX,ESI
0067DB87  E8 34 3C 07 00            CALL 0x006f17c0
0067DB8C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067DB8F  33 C0                     XOR EAX,EAX
0067DB91  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DB97  5F                        POP EDI
0067DB98  5E                        POP ESI
0067DB99  8B E5                     MOV ESP,EBP
0067DB9B  5D                        POP EBP
0067DB9C  C3                        RET
LAB_0067db9d:
0067DB9D  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067DBA0  68 F8 2F 7D 00            PUSH 0x7d2ff8
0067DBA5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067DBAA  56                        PUSH ESI
0067DBAB  6A 00                     PUSH 0x0
0067DBAD  68 26 01 00 00            PUSH 0x126
0067DBB2  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DBB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067DBBD  E8 0E F9 02 00            CALL 0x006ad4d0
0067DBC2  83 C4 18                  ADD ESP,0x18
0067DBC5  85 C0                     TEST EAX,EAX
0067DBC7  74 01                     JZ 0x0067dbca
0067DBC9  CC                        INT3
LAB_0067dbca:
0067DBCA  68 27 01 00 00            PUSH 0x127
0067DBCF  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067DBD4  6A 00                     PUSH 0x0
0067DBD6  56                        PUSH ESI
0067DBD7  E8 64 82 02 00            CALL 0x006a5e40
0067DBDC  8B C6                     MOV EAX,ESI
0067DBDE  5F                        POP EDI
0067DBDF  5E                        POP ESI
0067DBE0  8B E5                     MOV ESP,EBP
0067DBE2  5D                        POP EBP
0067DBE3  C3                        RET
