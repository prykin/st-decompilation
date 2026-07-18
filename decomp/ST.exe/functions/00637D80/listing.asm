FUN_00637d80:
00637D80  55                        PUSH EBP
00637D81  8B EC                     MOV EBP,ESP
00637D83  51                        PUSH ECX
00637D84  A1 74 67 80 00            MOV EAX,[0x00806774]
00637D89  56                        PUSH ESI
00637D8A  6A 00                     PUSH 0x0
00637D8C  6A 00                     PUSH 0x0
00637D8E  6A 01                     PUSH 0x1
00637D90  6A 00                     PUSH 0x0
00637D92  6A FF                     PUSH -0x1
00637D94  68 60 1C 7D 00            PUSH 0x7d1c60
00637D99  6A 1D                     PUSH 0x1d
00637D9B  50                        PUSH EAX
00637D9C  E8 4F 1D 0D 00            CALL 0x00709af0
00637DA1  8B F0                     MOV ESI,EAX
00637DA3  83 C4 20                  ADD ESP,0x20
00637DA6  85 F6                     TEST ESI,ESI
00637DA8  74 7C                     JZ 0x00637e26
00637DAA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637DB0  85 C9                     TEST ECX,ECX
00637DB2  74 72                     JZ 0x00637e26
00637DB4  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
00637DB7  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00637DBA  6A 00                     PUSH 0x0
00637DBC  6A 45                     PUSH 0x45
00637DBE  6A 5A                     PUSH 0x5a
00637DC0  52                        PUSH EDX
00637DC1  50                        PUSH EAX
00637DC2  6A 00                     PUSH 0x0
00637DC4  8D 55 FC                  LEA EDX,[EBP + -0x4]
00637DC7  6A 01                     PUSH 0x1
00637DC9  52                        PUSH EDX
00637DCA  E8 91 08 0B 00            CALL 0x006e8660
00637DCF  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00637DD2  8B 0E                     MOV ECX,dword ptr [ESI]
00637DD4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00637DD7  6A 01                     PUSH 0x1
00637DD9  50                        PUSH EAX
00637DDA  51                        PUSH ECX
00637DDB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637DE1  6A 00                     PUSH 0x0
00637DE3  52                        PUSH EDX
00637DE4  E8 F7 1A 0B 00            CALL 0x006e98e0
00637DE9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637DEC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637DF2  6A 00                     PUSH 0x0
00637DF4  6A 00                     PUSH 0x0
00637DF6  50                        PUSH EAX
00637DF7  E8 74 24 0B 00            CALL 0x006ea270
00637DFC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637DFF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00637E02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637E05  51                        PUSH ECX
00637E06  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637E0C  52                        PUSH EDX
00637E0D  6A 02                     PUSH 0x2
00637E0F  50                        PUSH EAX
00637E10  E8 3B 22 0B 00            CALL 0x006ea050
00637E15  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637E18  6A 00                     PUSH 0x0
00637E1A  51                        PUSH ECX
00637E1B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637E21  E8 7A 2C 0B 00            CALL 0x006eaaa0
LAB_00637e26:
00637E26  5E                        POP ESI
00637E27  8B E5                     MOV ESP,EBP
00637E29  5D                        POP EBP
00637E2A  C3                        RET
