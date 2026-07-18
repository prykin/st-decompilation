FUN_00637e60:
00637E60  55                        PUSH EBP
00637E61  8B EC                     MOV EBP,ESP
00637E63  51                        PUSH ECX
00637E64  A1 74 67 80 00            MOV EAX,[0x00806774]
00637E69  56                        PUSH ESI
00637E6A  6A 00                     PUSH 0x0
00637E6C  6A 00                     PUSH 0x0
00637E6E  6A 01                     PUSH 0x1
00637E70  6A 00                     PUSH 0x0
00637E72  6A FF                     PUSH -0x1
00637E74  68 68 1C 7D 00            PUSH 0x7d1c68
00637E79  6A 1D                     PUSH 0x1d
00637E7B  50                        PUSH EAX
00637E7C  E8 6F 1C 0D 00            CALL 0x00709af0
00637E81  8B F0                     MOV ESI,EAX
00637E83  83 C4 20                  ADD ESP,0x20
00637E86  85 F6                     TEST ESI,ESI
00637E88  74 7C                     JZ 0x00637f06
00637E8A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637E90  85 C9                     TEST ECX,ECX
00637E92  74 72                     JZ 0x00637f06
00637E94  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
00637E97  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00637E9A  6A 00                     PUSH 0x0
00637E9C  6A 45                     PUSH 0x45
00637E9E  6A 5A                     PUSH 0x5a
00637EA0  52                        PUSH EDX
00637EA1  50                        PUSH EAX
00637EA2  6A 00                     PUSH 0x0
00637EA4  8D 55 FC                  LEA EDX,[EBP + -0x4]
00637EA7  6A 01                     PUSH 0x1
00637EA9  52                        PUSH EDX
00637EAA  E8 B1 07 0B 00            CALL 0x006e8660
00637EAF  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00637EB2  8B 0E                     MOV ECX,dword ptr [ESI]
00637EB4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637EB7  6A 01                     PUSH 0x1
00637EB9  50                        PUSH EAX
00637EBA  51                        PUSH ECX
00637EBB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637EC1  6A 00                     PUSH 0x0
00637EC3  52                        PUSH EDX
00637EC4  E8 17 1A 0B 00            CALL 0x006e98e0
00637EC9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637ECC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637ED2  6A 00                     PUSH 0x0
00637ED4  6A 00                     PUSH 0x0
00637ED6  50                        PUSH EAX
00637ED7  E8 94 23 0B 00            CALL 0x006ea270
00637EDC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637EDF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00637EE2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637EE5  51                        PUSH ECX
00637EE6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637EEC  52                        PUSH EDX
00637EED  6A 01                     PUSH 0x1
00637EEF  50                        PUSH EAX
00637EF0  E8 5B 21 0B 00            CALL 0x006ea050
00637EF5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637EF8  6A 00                     PUSH 0x0
00637EFA  51                        PUSH ECX
00637EFB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637F01  E8 9A 2B 0B 00            CALL 0x006eaaa0
LAB_00637f06:
00637F06  5E                        POP ESI
00637F07  8B E5                     MOV ESP,EBP
00637F09  5D                        POP EBP
00637F0A  C3                        RET
