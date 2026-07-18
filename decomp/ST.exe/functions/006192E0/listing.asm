FUN_006192e0:
006192E0  55                        PUSH EBP
006192E1  8B EC                     MOV EBP,ESP
006192E3  83 EC 20                  SUB ESP,0x20
006192E6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006192E9  8D 55 E0                  LEA EDX,[EBP + -0x20]
006192EC  52                        PUSH EDX
006192ED  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006192F4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
006192FB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006192FE  E8 9D CD 0C 00            CALL 0x006e60a0
00619303  8B E5                     MOV ESP,EBP
00619305  5D                        POP EBP
00619306  C3                        RET
