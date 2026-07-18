FUN_00449e60:
00449E60  55                        PUSH EBP
00449E61  8B EC                     MOV EBP,ESP
00449E63  83 EC 4C                  SUB ESP,0x4c
00449E66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00449E6B  53                        PUSH EBX
00449E6C  56                        PUSH ESI
00449E6D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00449E70  57                        PUSH EDI
00449E71  8D 55 B8                  LEA EDX,[EBP + -0x48]
00449E74  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00449E77  6A 00                     PUSH 0x0
00449E79  52                        PUSH EDX
00449E7A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00449E81  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00449E84  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00449E8A  E8 61 39 2E 00            CALL 0x0072d7f0
00449E8F  8B F0                     MOV ESI,EAX
00449E91  83 C4 08                  ADD ESP,0x8
00449E94  85 F6                     TEST ESI,ESI
00449E96  0F 85 84 00 00 00         JNZ 0x00449f20
00449E9C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00449E9F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00449EA2  6A 02                     PUSH 0x2
00449EA4  56                        PUSH ESI
00449EA5  6A FF                     PUSH -0x1
00449EA7  8B CB                     MOV ECX,EBX
00449EA9  E8 0C 8A FB FF            CALL 0x004028ba
00449EAE  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00449EB1  3B C7                     CMP EAX,EDI
00449EB3  74 1A                     JZ 0x00449ecf
00449EB5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00449EBA  68 EA 2E 00 00            PUSH 0x2eea
00449EBF  68 04 60 7A 00            PUSH 0x7a6004
00449EC4  50                        PUSH EAX
00449EC5  68 07 00 FE AF            PUSH 0xaffe0007
00449ECA  E8 71 BF 25 00            CALL 0x006a5e40
LAB_00449ecf:
00449ECF  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00449ED2  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00449ED5  A0 4D 87 80 00            MOV AL,[0x0080874d]
00449EDA  56                        PUSH ESI
00449EDB  51                        PUSH ECX
00449EDC  52                        PUSH EDX
00449EDD  50                        PUSH EAX
00449EDE  8B CB                     MOV ECX,EBX
00449EE0  E8 BE 82 FB FF            CALL 0x004021a3
00449EE5  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00449EE8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00449EEB  56                        PUSH ESI
00449EEC  51                        PUSH ECX
00449EED  52                        PUSH EDX
00449EEE  8B CB                     MOV ECX,EBX
00449EF0  E8 4E 97 FB FF            CALL 0x00403643
00449EF5  8B 0D 54 A1 7F 00         MOV ECX,dword ptr [0x007fa154]
00449EFB  8D 45 FC                  LEA EAX,[EBP + -0x4]
00449EFE  81 E6 FF FF 00 00         AND ESI,0xffff
00449F04  50                        PUSH EAX
00449F05  56                        PUSH ESI
00449F06  51                        PUSH ECX
00449F07  E8 34 42 26 00            CALL 0x006ae140
00449F0C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00449F0F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00449f15:
00449F15  33 C0                     XOR EAX,EAX
00449F17  5F                        POP EDI
00449F18  5E                        POP ESI
00449F19  5B                        POP EBX
00449F1A  8B E5                     MOV ESP,EBP
00449F1C  5D                        POP EBP
00449F1D  C2 0C 00                  RET 0xc
LAB_00449f20:
00449F20  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00449F23  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00449F29  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00449F2E  74 E5                     JZ 0x00449f15
00449F30  68 30 87 7A 00            PUSH 0x7a8730
00449F35  68 CC 4C 7A 00            PUSH 0x7a4ccc
00449F3A  56                        PUSH ESI
00449F3B  6A 00                     PUSH 0x0
00449F3D  68 F5 2E 00 00            PUSH 0x2ef5
00449F42  68 04 60 7A 00            PUSH 0x7a6004
00449F47  E8 84 35 26 00            CALL 0x006ad4d0
00449F4C  83 C4 18                  ADD ESP,0x18
00449F4F  85 C0                     TEST EAX,EAX
00449F51  74 01                     JZ 0x00449f54
00449F53  CC                        INT3
LAB_00449f54:
00449F54  68 F6 2E 00 00            PUSH 0x2ef6
00449F59  68 04 60 7A 00            PUSH 0x7a6004
00449F5E  6A 00                     PUSH 0x0
00449F60  56                        PUSH ESI
00449F61  E8 DA BE 25 00            CALL 0x006a5e40
00449F66  5F                        POP EDI
00449F67  5E                        POP ESI
00449F68  83 C8 FF                  OR EAX,0xffffffff
00449F6B  5B                        POP EBX
00449F6C  8B E5                     MOV ESP,EBP
00449F6E  5D                        POP EBP
00449F6F  C2 0C 00                  RET 0xc
