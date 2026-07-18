FUN_006308b0:
006308B0  55                        PUSH EBP
006308B1  8B EC                     MOV EBP,ESP
006308B3  83 EC 20                  SUB ESP,0x20
006308B6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006308B9  8D 55 E0                  LEA EDX,[EBP + -0x20]
006308BC  52                        PUSH EDX
006308BD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006308C4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
006308CB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006308CE  E8 CD 57 0B 00            CALL 0x006e60a0
006308D3  8B E5                     MOV ESP,EBP
006308D5  5D                        POP EBP
006308D6  C3                        RET
