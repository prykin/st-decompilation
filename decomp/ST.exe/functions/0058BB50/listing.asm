FUN_0058bb50:
0058BB50  55                        PUSH EBP
0058BB51  8B EC                     MOV EBP,ESP
0058BB53  83 EC 20                  SUB ESP,0x20
0058BB56  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0058BB59  8D 55 E0                  LEA EDX,[EBP + -0x20]
0058BB5C  52                        PUSH EDX
0058BB5D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0058BB64  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0058BB6B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058BB6E  E8 2D A5 15 00            CALL 0x006e60a0
0058BB73  8B E5                     MOV ESP,EBP
0058BB75  5D                        POP EBP
0058BB76  C3                        RET
