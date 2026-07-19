mfSSprGetNumFas:
00725E80  55                        PUSH EBP
00725E81  8B EC                     MOV EBP,ESP
00725E83  83 EC 50                  SUB ESP,0x50
00725E86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00725E8B  56                        PUSH ESI
00725E8C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00725E8F  8D 4D B0                  LEA ECX,[EBP + -0x50]
00725E92  6A 00                     PUSH 0x0
00725E94  52                        PUSH EDX
00725E95  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00725E98  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725E9E  E8 4D 79 00 00            CALL 0x0072d7f0
00725EA3  8B F0                     MOV ESI,EAX
00725EA5  83 C4 08                  ADD ESP,0x8
00725EA8  85 F6                     TEST ESI,ESI
00725EAA  75 40                     JNZ 0x00725eec
00725EAC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00725EAF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00725EB2  8D 4D F4                  LEA ECX,[EBP + -0xc]
00725EB5  50                        PUSH EAX
00725EB6  51                        PUSH ECX
00725EB7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00725EBA  52                        PUSH EDX
00725EBB  6A 07                     PUSH 0x7
00725EBD  E8 4E C4 FC FF            CALL 0x006f2310
00725EC2  85 C0                     TEST EAX,EAX
00725EC4  75 14                     JNZ 0x00725eda
00725EC6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00725ECB  6A 65                     PUSH 0x65
00725ECD  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725ED2  50                        PUSH EAX
00725ED3  6A FC                     PUSH -0x4
00725ED5  E8 66 FF F7 FF            CALL 0x006a5e40
LAB_00725eda:
00725EDA  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00725EDD  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00725EE1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725EE7  5E                        POP ESI
00725EE8  8B E5                     MOV ESP,EBP
00725EEA  5D                        POP EBP
00725EEB  C3                        RET
LAB_00725eec:
00725EEC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00725EEF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00725EF2  85 C0                     TEST EAX,EAX
00725EF4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00725EFA  75 0C                     JNZ 0x00725f08
00725EFC  83 FE FC                  CMP ESI,-0x4
00725EFF  75 07                     JNZ 0x00725f08
00725F01  8B C6                     MOV EAX,ESI
00725F03  5E                        POP ESI
00725F04  8B E5                     MOV ESP,EBP
00725F06  5D                        POP EBP
00725F07  C3                        RET
LAB_00725f08:
00725F08  68 A0 0C 7F 00            PUSH 0x7f0ca0
00725F0D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00725F12  56                        PUSH ESI
00725F13  6A 00                     PUSH 0x0
00725F15  6A 69                     PUSH 0x69
00725F17  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725F1C  E8 AF 75 F8 FF            CALL 0x006ad4d0
00725F21  83 C4 18                  ADD ESP,0x18
00725F24  85 C0                     TEST EAX,EAX
00725F26  74 01                     JZ 0x00725f29
00725F28  CC                        INT3
LAB_00725f29:
00725F29  6A 6B                     PUSH 0x6b
00725F2B  68 8C 0C 7F 00            PUSH 0x7f0c8c
00725F30  6A 00                     PUSH 0x0
00725F32  56                        PUSH ESI
00725F33  E8 08 FF F7 FF            CALL 0x006a5e40
00725F38  85 F6                     TEST ESI,ESI
00725F3A  7D 07                     JGE 0x00725f43
00725F3C  8B C6                     MOV EAX,ESI
00725F3E  5E                        POP ESI
00725F3F  8B E5                     MOV ESP,EBP
00725F41  5D                        POP EBP
00725F42  C3                        RET
LAB_00725f43:
00725F43  83 C8 FF                  OR EAX,0xffffffff
00725F46  5E                        POP ESI
00725F47  8B E5                     MOV ESP,EBP
00725F49  5D                        POP EBP
00725F4A  C3                        RET
