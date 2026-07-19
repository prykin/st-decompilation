TraksClassTy::TraksExec:
00555E80  55                        PUSH EBP
00555E81  8B EC                     MOV EBP,ESP
00555E83  83 EC 48                  SUB ESP,0x48
00555E86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00555E8B  53                        PUSH EBX
00555E8C  56                        PUSH ESI
00555E8D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00555E90  57                        PUSH EDI
00555E91  8D 55 BC                  LEA EDX,[EBP + -0x44]
00555E94  8D 4D B8                  LEA ECX,[EBP + -0x48]
00555E97  6A 00                     PUSH 0x0
00555E99  52                        PUSH EDX
00555E9A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00555E9D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00555EA3  E8 48 79 1D 00            CALL 0x0072d7f0
00555EA8  8B F0                     MOV ESI,EAX
00555EAA  83 C4 08                  ADD ESP,0x8
00555EAD  85 F6                     TEST ESI,ESI
00555EAF  0F 85 91 00 00 00         JNZ 0x00555f46
00555EB5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00555EB8  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00555EBB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00555EBE  85 C9                     TEST ECX,ECX
00555EC0  76 05                     JBE 0x00555ec7
00555EC2  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
00555EC5  EB 02                     JMP 0x00555ec9
LAB_00555ec7:
00555EC7  33 DB                     XOR EBX,EBX
LAB_00555ec9:
00555EC9  33 FF                     XOR EDI,EDI
00555ECB  85 C9                     TEST ECX,ECX
00555ECD  7E 67                     JLE 0x00555f36
LAB_00555ecf:
00555ECF  8B 43 32                  MOV EAX,dword ptr [EBX + 0x32]
00555ED2  85 C0                     TEST EAX,EAX
00555ED4  7C 54                     JL 0x00555f2a
00555ED6  66 83 7B 38 00            CMP word ptr [EBX + 0x38],0x0
00555EDB  74 45                     JZ 0x00555f22
00555EDD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00555EE3  50                        PUSH EAX
00555EE4  E8 B7 2C 19 00            CALL 0x006e8ba0
00555EE9  83 CA FF                  OR EDX,0xffffffff
00555EEC  89 53 32                  MOV dword ptr [EBX + 0x32],EDX
00555EEF  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00555EF2  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00555EF5  73 0B                     JNC 0x00555f02
00555EF7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00555EFA  0F AF C7                  IMUL EAX,EDI
00555EFD  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00555F00  EB 02                     JMP 0x00555f04
LAB_00555f02:
00555F02  33 C0                     XOR EAX,EAX
LAB_00555f04:
00555F04  89 50 32                  MOV dword ptr [EAX + 0x32],EDX
00555F07  8B 86 28 08 00 00         MOV EAX,dword ptr [ESI + 0x828]
00555F0D  3D FF 03 00 00            CMP EAX,0x3ff
00555F12  7D 16                     JGE 0x00555f2a
00555F14  40                        INC EAX
00555F15  89 86 28 08 00 00         MOV dword ptr [ESI + 0x828],EAX
00555F1B  66 89 7C 46 28            MOV word ptr [ESI + EAX*0x2 + 0x28],DI
00555F20  EB 08                     JMP 0x00555f2a
LAB_00555f22:
00555F22  53                        PUSH EBX
00555F23  8B CE                     MOV ECX,ESI
00555F25  E8 FD B1 EA FF            CALL 0x00401127
LAB_00555f2a:
00555F2A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00555F2D  83 C3 3C                  ADD EBX,0x3c
00555F30  47                        INC EDI
00555F31  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00555F34  7C 99                     JL 0x00555ecf
LAB_00555f36:
00555F36  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00555F39  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00555F3F  5F                        POP EDI
00555F40  5E                        POP ESI
00555F41  5B                        POP EBX
00555F42  8B E5                     MOV ESP,EBP
00555F44  5D                        POP EBP
00555F45  C3                        RET
LAB_00555f46:
00555F46  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00555F49  68 84 91 7C 00            PUSH 0x7c9184
00555F4E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00555F53  56                        PUSH ESI
00555F54  6A 00                     PUSH 0x0
00555F56  68 C8 00 00 00            PUSH 0xc8
00555F5B  68 04 91 7C 00            PUSH 0x7c9104
00555F60  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00555F66  E8 65 75 15 00            CALL 0x006ad4d0
00555F6B  83 C4 18                  ADD ESP,0x18
00555F6E  85 C0                     TEST EAX,EAX
00555F70  74 01                     JZ 0x00555f73
00555F72  CC                        INT3
LAB_00555f73:
00555F73  68 C9 00 00 00            PUSH 0xc9
00555F78  68 04 91 7C 00            PUSH 0x7c9104
00555F7D  6A 00                     PUSH 0x0
00555F7F  56                        PUSH ESI
00555F80  E8 BB FE 14 00            CALL 0x006a5e40
00555F85  5F                        POP EDI
00555F86  5E                        POP ESI
00555F87  5B                        POP EBX
00555F88  8B E5                     MOV ESP,EBP
00555F8A  5D                        POP EBP
00555F8B  C3                        RET
