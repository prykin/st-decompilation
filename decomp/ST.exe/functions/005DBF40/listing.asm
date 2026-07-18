StartSystemTy::OutBmpProc:
005DBF40  55                        PUSH EBP
005DBF41  8B EC                     MOV EBP,ESP
005DBF43  83 EC 44                  SUB ESP,0x44
005DBF46  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005DBF49  56                        PUSH ESI
005DBF4A  85 C0                     TEST EAX,EAX
005DBF4C  0F 84 A8 00 00 00         JZ 0x005dbffa
005DBF52  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DBF57  8D 55 C0                  LEA EDX,[EBP + -0x40]
005DBF5A  8D 4D BC                  LEA ECX,[EBP + -0x44]
005DBF5D  6A 00                     PUSH 0x0
005DBF5F  52                        PUSH EDX
005DBF60  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005DBF63  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DBF69  E8 82 18 15 00            CALL 0x0072d7f0
005DBF6E  8B F0                     MOV ESI,EAX
005DBF70  83 C4 08                  ADD ESP,0x8
005DBF73  85 F6                     TEST ESI,ESI
005DBF75  75 44                     JNZ 0x005dbfbb
005DBF77  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005DBF7C  68 FF 00 00 01            PUSH 0x10000ff
005DBF81  05 44 01 00 00            ADD EAX,0x144
005DBF86  68 00 00 00 01            PUSH 0x1000000
005DBF8B  50                        PUSH EAX
005DBF8C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005DBF8F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005DBF92  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DBF95  51                        PUSH ECX
005DBF96  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005DBF99  52                        PUSH EDX
005DBF9A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DBF9D  56                        PUSH ESI
005DBF9E  56                        PUSH ESI
005DBF9F  56                        PUSH ESI
005DBFA0  50                        PUSH EAX
005DBFA1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005DBFA4  50                        PUSH EAX
005DBFA5  51                        PUSH ECX
005DBFA6  52                        PUSH EDX
005DBFA7  E8 34 89 0D 00            CALL 0x006b48e0
005DBFAC  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005DBFAF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DBFB4  5E                        POP ESI
005DBFB5  8B E5                     MOV ESP,EBP
005DBFB7  5D                        POP EBP
005DBFB8  C2 20 00                  RET 0x20
LAB_005dbfbb:
005DBFBB  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005DBFBE  68 10 D1 7C 00            PUSH 0x7cd110
005DBFC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DBFC8  56                        PUSH ESI
005DBFC9  6A 00                     PUSH 0x0
005DBFCB  68 C2 01 00 00            PUSH 0x1c2
005DBFD0  68 18 D7 7C 00            PUSH 0x7cd718
005DBFD5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DBFDB  E8 F0 14 0D 00            CALL 0x006ad4d0
005DBFE0  83 C4 18                  ADD ESP,0x18
005DBFE3  85 C0                     TEST EAX,EAX
005DBFE5  74 01                     JZ 0x005dbfe8
005DBFE7  CC                        INT3
LAB_005dbfe8:
005DBFE8  68 C2 01 00 00            PUSH 0x1c2
005DBFED  68 18 D7 7C 00            PUSH 0x7cd718
005DBFF2  6A 00                     PUSH 0x0
005DBFF4  56                        PUSH ESI
005DBFF5  E8 46 9E 0C 00            CALL 0x006a5e40
LAB_005dbffa:
005DBFFA  5E                        POP ESI
005DBFFB  8B E5                     MOV ESP,EBP
005DBFFD  5D                        POP EBP
005DBFFE  C2 20 00                  RET 0x20
