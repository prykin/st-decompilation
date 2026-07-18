FUN_0063cc10:
0063CC10  55                        PUSH EBP
0063CC11  8B EC                     MOV EBP,ESP
0063CC13  83 EC 20                  SUB ESP,0x20
0063CC16  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063CC19  8D 55 E0                  LEA EDX,[EBP + -0x20]
0063CC1C  52                        PUSH EDX
0063CC1D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0063CC24  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0063CC2B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063CC2E  E8 6D 94 0A 00            CALL 0x006e60a0
0063CC33  8B E5                     MOV ESP,EBP
0063CC35  5D                        POP EBP
0063CC36  C3                        RET
