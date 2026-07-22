STLightC::sub_0061D6D0:
0061D6D0  55                        PUSH EBP
0061D6D1  8B EC                     MOV EBP,ESP
0061D6D3  83 EC 20                  SUB ESP,0x20
0061D6D6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0061D6D9  8D 55 E0                  LEA EDX,[EBP + -0x20]
0061D6DC  52                        PUSH EDX
0061D6DD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0061D6E4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0061D6EB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061D6EE  E8 AD 89 0C 00            CALL 0x006e60a0
0061D6F3  8B E5                     MOV ESP,EBP
0061D6F5  5D                        POP EBP
0061D6F6  C3                        RET
