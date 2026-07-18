FUN_005fd6a0:
005FD6A0  55                        PUSH EBP
005FD6A1  8B EC                     MOV EBP,ESP
005FD6A3  83 EC 20                  SUB ESP,0x20
005FD6A6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005FD6A9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005FD6AC  52                        PUSH EDX
005FD6AD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005FD6B4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005FD6BB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FD6BE  E8 DD 89 0E 00            CALL 0x006e60a0
005FD6C3  8B E5                     MOV ESP,EBP
005FD6C5  5D                        POP EBP
005FD6C6  C3                        RET
