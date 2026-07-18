FUN_005899e0:
005899E0  55                        PUSH EBP
005899E1  8B EC                     MOV EBP,ESP
005899E3  83 EC 20                  SUB ESP,0x20
005899E6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005899E9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005899EC  52                        PUSH EDX
005899ED  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005899F4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005899FB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005899FE  E8 9D C6 15 00            CALL 0x006e60a0
00589A03  8B E5                     MOV ESP,EBP
00589A05  5D                        POP EBP
00589A06  C3                        RET
