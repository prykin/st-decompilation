FUN_00622670:
00622670  55                        PUSH EBP
00622671  8B EC                     MOV EBP,ESP
00622673  83 EC 20                  SUB ESP,0x20
00622676  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00622679  8D 55 E0                  LEA EDX,[EBP + -0x20]
0062267C  52                        PUSH EDX
0062267D  C7 81 AE 02 00 00 05 00 00 00  MOV dword ptr [ECX + 0x2ae],0x5
00622687  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0062268E  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
00622695  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00622698  E8 03 3A 0C 00            CALL 0x006e60a0
0062269D  8B E5                     MOV ESP,EBP
0062269F  5D                        POP EBP
006226A0  C3                        RET
