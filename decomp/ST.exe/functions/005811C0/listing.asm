FUN_005811c0:
005811C0  55                        PUSH EBP
005811C1  8B EC                     MOV EBP,ESP
005811C3  83 EC 20                  SUB ESP,0x20
005811C6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005811C9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005811CC  52                        PUSH EDX
005811CD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005811D4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005811DB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005811DE  E8 BD 4E 16 00            CALL 0x006e60a0
005811E3  8B E5                     MOV ESP,EBP
005811E5  5D                        POP EBP
005811E6  C3                        RET
