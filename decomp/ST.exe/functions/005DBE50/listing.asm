StartSystemTy::OutBmpProc:
005DBE50  55                        PUSH EBP
005DBE51  8B EC                     MOV EBP,ESP
005DBE53  83 EC 44                  SUB ESP,0x44
005DBE56  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005DBE59  56                        PUSH ESI
005DBE5A  85 C0                     TEST EAX,EAX
005DBE5C  0F 84 98 00 00 00         JZ 0x005dbefa
005DBE62  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DBE67  8D 55 C0                  LEA EDX,[EBP + -0x40]
005DBE6A  8D 4D BC                  LEA ECX,[EBP + -0x44]
005DBE6D  6A 00                     PUSH 0x0
005DBE6F  52                        PUSH EDX
005DBE70  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005DBE73  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DBE79  E8 72 19 15 00            CALL 0x0072d7f0
005DBE7E  8B F0                     MOV ESI,EAX
005DBE80  83 C4 08                  ADD ESP,0x8
005DBE83  85 F6                     TEST ESI,ESI
005DBE85  75 34                     JNZ 0x005dbebb
005DBE87  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005DBE8A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005DBE8D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005DBE90  68 FF 00 00 01            PUSH 0x10000ff
005DBE95  50                        PUSH EAX
005DBE96  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005DBE99  51                        PUSH ECX
005DBE9A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005DBE9D  56                        PUSH ESI
005DBE9E  56                        PUSH ESI
005DBE9F  56                        PUSH ESI
005DBEA0  52                        PUSH EDX
005DBEA1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DBEA4  50                        PUSH EAX
005DBEA5  51                        PUSH ECX
005DBEA6  52                        PUSH EDX
005DBEA7  E8 D4 87 0D 00            CALL 0x006b4680
005DBEAC  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005DBEAF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DBEB4  5E                        POP ESI
005DBEB5  8B E5                     MOV ESP,EBP
005DBEB7  5D                        POP EBP
005DBEB8  C2 20 00                  RET 0x20
LAB_005dbebb:
005DBEBB  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005DBEBE  68 10 D1 7C 00            PUSH 0x7cd110
005DBEC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DBEC8  56                        PUSH ESI
005DBEC9  6A 00                     PUSH 0x0
005DBECB  68 B7 01 00 00            PUSH 0x1b7
005DBED0  68 18 D7 7C 00            PUSH 0x7cd718
005DBED5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DBEDB  E8 F0 15 0D 00            CALL 0x006ad4d0
005DBEE0  83 C4 18                  ADD ESP,0x18
005DBEE3  85 C0                     TEST EAX,EAX
005DBEE5  74 01                     JZ 0x005dbee8
005DBEE7  CC                        INT3
LAB_005dbee8:
005DBEE8  68 B7 01 00 00            PUSH 0x1b7
005DBEED  68 18 D7 7C 00            PUSH 0x7cd718
005DBEF2  6A 00                     PUSH 0x0
005DBEF4  56                        PUSH ESI
005DBEF5  E8 46 9F 0C 00            CALL 0x006a5e40
LAB_005dbefa:
005DBEFA  5E                        POP ESI
005DBEFB  8B E5                     MOV ESP,EBP
005DBEFD  5D                        POP EBP
005DBEFE  C2 20 00                  RET 0x20
