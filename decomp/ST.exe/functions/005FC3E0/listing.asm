STContainerC::sub_005FC3E0:
005FC3E0  55                        PUSH EBP
005FC3E1  8B EC                     MOV EBP,ESP
005FC3E3  83 EC 20                  SUB ESP,0x20
005FC3E6  56                        PUSH ESI
005FC3E7  8B F1                     MOV ESI,ECX
005FC3E9  8D 4D E0                  LEA ECX,[EBP + -0x20]
005FC3EC  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005FC3F3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005FC3F6  51                        PUSH ECX
005FC3F7  8B CE                     MOV ECX,ESI
005FC3F9  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005FC400  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005FC403  E8 98 9C 0E 00            CALL 0x006e60a0
005FC408  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
005FC412  5E                        POP ESI
005FC413  8B E5                     MOV ESP,EBP
005FC415  5D                        POP EBP
005FC416  C3                        RET
