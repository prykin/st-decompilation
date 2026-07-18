FUN_0055dcd0:
0055DCD0  55                        PUSH EBP
0055DCD1  8B EC                     MOV EBP,ESP
0055DCD3  81 EC 48 04 00 00         SUB ESP,0x448
0055DCD9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055DCDE  56                        PUSH ESI
0055DCDF  8D 55 BC                  LEA EDX,[EBP + -0x44]
0055DCE2  8D 4D B8                  LEA ECX,[EBP + -0x48]
0055DCE5  6A 00                     PUSH 0x0
0055DCE7  52                        PUSH EDX
0055DCE8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0055DCEF  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0055DCF2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055DCF8  E8 F3 FA 1C 00            CALL 0x0072d7f0
0055DCFD  8B F0                     MOV ESI,EAX
0055DCFF  83 C4 08                  ADD ESP,0x8
0055DD02  85 F6                     TEST ESI,ESI
0055DD04  75 6A                     JNZ 0x0055dd70
0055DD06  50                        PUSH EAX
0055DD07  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055DD0A  50                        PUSH EAX
0055DD0B  E8 30 FA 15 00            CALL 0x006bd740
0055DD10  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055DD13  6A 01                     PUSH 0x1
0055DD15  56                        PUSH ESI
0055DD16  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0055DD19  51                        PUSH ECX
0055DD1A  6A 01                     PUSH 0x1
0055DD1C  8B CE                     MOV ECX,ESI
0055DD1E  E8 BD 3F 19 00            CALL 0x006f1ce0
0055DD23  8D 95 B8 FB FF FF         LEA EDX,[EBP + 0xfffffbb8]
0055DD29  6A 00                     PUSH 0x0
0055DD2B  52                        PUSH EDX
0055DD2C  50                        PUSH EAX
0055DD2D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055DD30  E8 2B E6 15 00            CALL 0x006bc360
0055DD35  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0055DD38  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055DD3B  50                        PUSH EAX
0055DD3C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055DD3F  51                        PUSH ECX
0055DD40  68 00 01 00 00            PUSH 0x100
0055DD45  8D 95 B8 FB FF FF         LEA EDX,[EBP + 0xfffffbb8]
0055DD4B  6A 00                     PUSH 0x0
0055DD4D  52                        PUSH EDX
0055DD4E  50                        PUSH EAX
0055DD4F  E8 2C B3 1B 00            CALL 0x00719080
0055DD54  83 C4 18                  ADD ESP,0x18
0055DD57  8D 4D FC                  LEA ECX,[EBP + -0x4]
0055DD5A  51                        PUSH ECX
0055DD5B  8B CE                     MOV ECX,ESI
0055DD5D  E8 7E 43 19 00            CALL 0x006f20e0
0055DD62  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0055DD65  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055DD6B  5E                        POP ESI
0055DD6C  8B E5                     MOV ESP,EBP
0055DD6E  5D                        POP EBP
0055DD6F  C3                        RET
LAB_0055dd70:
0055DD70  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0055DD73  68 04 96 7C 00            PUSH 0x7c9604
0055DD78  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055DD7D  56                        PUSH ESI
0055DD7E  6A 00                     PUSH 0x0
0055DD80  6A 4B                     PUSH 0x4b
0055DD82  68 D8 95 7C 00            PUSH 0x7c95d8
0055DD87  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055DD8C  E8 3F F7 14 00            CALL 0x006ad4d0
0055DD91  83 C4 18                  ADD ESP,0x18
0055DD94  85 C0                     TEST EAX,EAX
0055DD96  74 01                     JZ 0x0055dd99
0055DD98  CC                        INT3
LAB_0055dd99:
0055DD99  6A 4D                     PUSH 0x4d
0055DD9B  68 D8 95 7C 00            PUSH 0x7c95d8
0055DDA0  6A 00                     PUSH 0x0
0055DDA2  56                        PUSH ESI
0055DDA3  E8 98 80 14 00            CALL 0x006a5e40
0055DDA8  5E                        POP ESI
0055DDA9  8B E5                     MOV ESP,EBP
0055DDAB  5D                        POP EBP
0055DDAC  C3                        RET
