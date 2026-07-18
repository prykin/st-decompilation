FUN_005f66b0:
005F66B0  55                        PUSH EBP
005F66B1  8B EC                     MOV EBP,ESP
005F66B3  83 EC 20                  SUB ESP,0x20
005F66B6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005F66B9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F66BC  52                        PUSH EDX
005F66BD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005F66C4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005F66CB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F66CE  E8 CD F9 0E 00            CALL 0x006e60a0
005F66D3  8B E5                     MOV ESP,EBP
005F66D5  5D                        POP EBP
005F66D6  C3                        RET
