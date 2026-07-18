FUN_006457e0:
006457E0  55                        PUSH EBP
006457E1  8B EC                     MOV EBP,ESP
006457E3  83 EC 20                  SUB ESP,0x20
006457E6  8B C1                     MOV EAX,ECX
006457E8  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
006457EF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006457F5  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006457FC  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006457FF  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00645802  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00645805  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00645808  8D 55 E0                  LEA EDX,[EBP + -0x20]
0064580B  52                        PUSH EDX
0064580C  E8 FF FF 09 00            CALL 0x006e5810
00645811  8B E5                     MOV ESP,EBP
00645813  5D                        POP EBP
00645814  C3                        RET
