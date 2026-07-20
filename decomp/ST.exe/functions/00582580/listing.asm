STJellyGunC::sub_00582580:
00582580  55                        PUSH EBP
00582581  8B EC                     MOV EBP,ESP
00582583  83 EC 20                  SUB ESP,0x20
00582586  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00582589  8D 55 E0                  LEA EDX,[EBP + -0x20]
0058258C  52                        PUSH EDX
0058258D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00582594  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0058259B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058259E  E8 FD 3A 16 00            CALL 0x006e60a0
005825A3  8B E5                     MOV ESP,EBP
005825A5  5D                        POP EBP
005825A6  C3                        RET
