FUN_005862e0:
005862E0  55                        PUSH EBP
005862E1  8B EC                     MOV EBP,ESP
005862E3  83 EC 20                  SUB ESP,0x20
005862E6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005862E9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005862EC  52                        PUSH EDX
005862ED  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005862F4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005862FB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005862FE  E8 9D FD 15 00            CALL 0x006e60a0
00586303  8B E5                     MOV ESP,EBP
00586305  5D                        POP EBP
00586306  C3                        RET
