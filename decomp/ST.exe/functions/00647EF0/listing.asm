FUN_00647ef0:
00647EF0  55                        PUSH EBP
00647EF1  8B EC                     MOV EBP,ESP
00647EF3  83 EC 54                  SUB ESP,0x54
00647EF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00647EFB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00647EFE  56                        PUSH ESI
00647EFF  8D 55 B0                  LEA EDX,[EBP + -0x50]
00647F02  8D 4D AC                  LEA ECX,[EBP + -0x54]
00647F05  6A 00                     PUSH 0x0
00647F07  52                        PUSH EDX
00647F08  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00647F0F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00647F16  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00647F19  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00647F1F  E8 CC 58 0E 00            CALL 0x0072d7f0
00647F24  8B F0                     MOV ESI,EAX
00647F26  83 C4 08                  ADD ESP,0x8
00647F29  85 F6                     TEST ESI,ESI
00647F2B  75 5B                     JNZ 0x00647f88
00647F2D  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00647F30  8D 45 F4                  LEA EAX,[EBP + -0xc]
00647F33  50                        PUSH EAX
00647F34  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
00647F37  E8 D5 9D DB FF            CALL 0x00401d11
00647F3C  85 F6                     TEST ESI,ESI
00647F3E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00647F41  74 08                     JZ 0x00647f4b
00647F43  8D 8E D3 05 00 00         LEA ECX,[ESI + 0x5d3]
00647F49  EB 02                     JMP 0x00647f4d
LAB_00647f4b:
00647F4B  33 C9                     XOR ECX,ECX
LAB_00647f4d:
00647F4D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00647F50  52                        PUSH EDX
00647F51  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00647F54  52                        PUSH EDX
00647F55  50                        PUSH EAX
00647F56  51                        PUSH ECX
00647F57  E8 C8 DA DB FF            CALL 0x00405a24
00647F5C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00647F5F  C6 00 01                  MOV byte ptr [EAX],0x1
00647F62  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00647F65  83 C4 10                  ADD ESP,0x10
00647F68  85 C0                     TEST EAX,EAX
00647F6A  74 09                     JZ 0x00647f75
00647F6C  8D 45 FC                  LEA EAX,[EBP + -0x4]
00647F6F  50                        PUSH EAX
00647F70  E8 EB 30 06 00            CALL 0x006ab060
LAB_00647f75:
00647F75  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00647F78  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00647F7B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00647F81  5E                        POP ESI
00647F82  8B E5                     MOV ESP,EBP
00647F84  5D                        POP EBP
00647F85  C2 04 00                  RET 0x4
LAB_00647f88:
00647F88  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00647F8B  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00647F8E  85 C0                     TEST EAX,EAX
00647F90  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00647F96  74 09                     JZ 0x00647fa1
00647F98  8D 45 FC                  LEA EAX,[EBP + -0x4]
00647F9B  50                        PUSH EAX
00647F9C  E8 BF 30 06 00            CALL 0x006ab060
LAB_00647fa1:
00647FA1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00647FA4  85 C0                     TEST EAX,EAX
00647FA6  74 09                     JZ 0x00647fb1
00647FA8  8D 4D F8                  LEA ECX,[EBP + -0x8]
00647FAB  51                        PUSH ECX
00647FAC  E8 AF 30 06 00            CALL 0x006ab060
LAB_00647fb1:
00647FB1  68 8C 27 7D 00            PUSH 0x7d278c
00647FB6  68 CC 4C 7A 00            PUSH 0x7a4ccc
00647FBB  56                        PUSH ESI
00647FBC  6A 00                     PUSH 0x0
00647FBE  6A 4C                     PUSH 0x4c
00647FC0  68 50 27 7D 00            PUSH 0x7d2750
00647FC5  E8 06 55 06 00            CALL 0x006ad4d0
00647FCA  83 C4 18                  ADD ESP,0x18
00647FCD  85 C0                     TEST EAX,EAX
00647FCF  74 01                     JZ 0x00647fd2
00647FD1  CC                        INT3
LAB_00647fd2:
00647FD2  6A 4D                     PUSH 0x4d
00647FD4  68 50 27 7D 00            PUSH 0x7d2750
00647FD9  6A 00                     PUSH 0x0
00647FDB  56                        PUSH ESI
00647FDC  E8 5F DE 05 00            CALL 0x006a5e40
00647FE1  33 C0                     XOR EAX,EAX
00647FE3  5E                        POP ESI
00647FE4  8B E5                     MOV ESP,EBP
00647FE6  5D                        POP EBP
00647FE7  C2 04 00                  RET 0x4
