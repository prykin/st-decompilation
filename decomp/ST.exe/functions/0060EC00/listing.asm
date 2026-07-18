FUN_0060ec00:
0060EC00  55                        PUSH EBP
0060EC01  8B EC                     MOV EBP,ESP
0060EC03  83 EC 20                  SUB ESP,0x20
0060EC06  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0060EC09  8D 55 E0                  LEA EDX,[EBP + -0x20]
0060EC0C  52                        PUSH EDX
0060EC0D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0060EC14  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0060EC1B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060EC1E  E8 7D 74 0D 00            CALL 0x006e60a0
0060EC23  8B E5                     MOV ESP,EBP
0060EC25  5D                        POP EBP
0060EC26  C3                        RET
