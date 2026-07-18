FUN_005e5d50:
005E5D50  55                        PUSH EBP
005E5D51  8B EC                     MOV EBP,ESP
005E5D53  83 EC 48                  SUB ESP,0x48
005E5D56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E5D5B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E5D5E  56                        PUSH ESI
005E5D5F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E5D62  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E5D65  6A 00                     PUSH 0x0
005E5D67  52                        PUSH EDX
005E5D68  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E5D6B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5D71  E8 7A 7A 14 00            CALL 0x0072d7f0
005E5D76  8B F0                     MOV ESI,EAX
005E5D78  83 C4 08                  ADD ESP,0x8
005E5D7B  85 F6                     TEST ESI,ESI
005E5D7D  75 3C                     JNZ 0x005e5dbb
005E5D7F  A1 34 67 80 00            MOV EAX,[0x00806734]
005E5D84  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005E5D8A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E5D90  50                        PUSH EAX
005E5D91  51                        PUSH ECX
005E5D92  56                        PUSH ESI
005E5D93  56                        PUSH ESI
005E5D94  52                        PUSH EDX
005E5D95  E8 E6 01 0D 00            CALL 0x006b5f80
005E5D9A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E5D9D  8B 48 5D                  MOV ECX,dword ptr [EAX + 0x5d]
005E5DA0  51                        PUSH ECX
005E5DA1  6A 01                     PUSH 0x1
005E5DA3  56                        PUSH ESI
005E5DA4  56                        PUSH ESI
005E5DA5  E8 8E D9 E1 FF            CALL 0x00403738
005E5DAA  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E5DAD  83 C4 10                  ADD ESP,0x10
005E5DB0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E5DB6  5E                        POP ESI
005E5DB7  8B E5                     MOV ESP,EBP
005E5DB9  5D                        POP EBP
005E5DBA  C3                        RET
LAB_005e5dbb:
005E5DBB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E5DBE  68 14 DD 7C 00            PUSH 0x7cdd14
005E5DC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E5DC8  56                        PUSH ESI
005E5DC9  6A 00                     PUSH 0x0
005E5DCB  6A 57                     PUSH 0x57
005E5DCD  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5DD2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E5DD7  E8 F4 76 0C 00            CALL 0x006ad4d0
005E5DDC  83 C4 18                  ADD ESP,0x18
005E5DDF  85 C0                     TEST EAX,EAX
005E5DE1  74 01                     JZ 0x005e5de4
005E5DE3  CC                        INT3
LAB_005e5de4:
005E5DE4  6A 57                     PUSH 0x57
005E5DE6  68 BC DC 7C 00            PUSH 0x7cdcbc
005E5DEB  6A 00                     PUSH 0x0
005E5DED  56                        PUSH ESI
005E5DEE  E8 4D 00 0C 00            CALL 0x006a5e40
005E5DF3  5E                        POP ESI
005E5DF4  8B E5                     MOV ESP,EBP
005E5DF6  5D                        POP EBP
005E5DF7  C3                        RET
