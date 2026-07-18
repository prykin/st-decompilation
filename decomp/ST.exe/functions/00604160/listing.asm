FUN_00604160:
00604160  55                        PUSH EBP
00604161  8B EC                     MOV EBP,ESP
00604163  83 EC 20                  SUB ESP,0x20
00604166  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00604169  8D 55 E0                  LEA EDX,[EBP + -0x20]
0060416C  52                        PUSH EDX
0060416D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00604174  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0060417B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060417E  E8 1D 1F 0E 00            CALL 0x006e60a0
00604183  8B E5                     MOV ESP,EBP
00604185  5D                        POP EBP
00604186  C3                        RET
