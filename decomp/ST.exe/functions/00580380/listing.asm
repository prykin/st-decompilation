FUN_00580380:
00580380  55                        PUSH EBP
00580381  8B EC                     MOV EBP,ESP
00580383  83 EC 20                  SUB ESP,0x20
00580386  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00580389  8D 55 E0                  LEA EDX,[EBP + -0x20]
0058038C  52                        PUSH EDX
0058038D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00580394  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0058039B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058039E  E8 FD 5C 16 00            CALL 0x006e60a0
005803A3  8B E5                     MOV ESP,EBP
005803A5  5D                        POP EBP
005803A6  C3                        RET
