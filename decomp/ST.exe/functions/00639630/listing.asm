FUN_00639630:
00639630  55                        PUSH EBP
00639631  8B EC                     MOV EBP,ESP
00639633  83 EC 20                  SUB ESP,0x20
00639636  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00639639  8D 55 E0                  LEA EDX,[EBP + -0x20]
0063963C  52                        PUSH EDX
0063963D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00639644  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0063964B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063964E  E8 4D CA 0A 00            CALL 0x006e60a0
00639653  8B E5                     MOV ESP,EBP
00639655  5D                        POP EBP
00639656  C3                        RET
