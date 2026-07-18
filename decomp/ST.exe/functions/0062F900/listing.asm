FUN_0062f900:
0062F900  55                        PUSH EBP
0062F901  8B EC                     MOV EBP,ESP
0062F903  83 EC 20                  SUB ESP,0x20
0062F906  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062F909  8D 55 E0                  LEA EDX,[EBP + -0x20]
0062F90C  52                        PUSH EDX
0062F90D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0062F914  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0062F91B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062F91E  E8 7D 67 0B 00            CALL 0x006e60a0
0062F923  8B E5                     MOV ESP,EBP
0062F925  5D                        POP EBP
0062F926  C3                        RET
