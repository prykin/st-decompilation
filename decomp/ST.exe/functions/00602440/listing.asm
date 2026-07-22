STDestC::sub_00602440:
00602440  55                        PUSH EBP
00602441  8B EC                     MOV EBP,ESP
00602443  83 EC 20                  SUB ESP,0x20
00602446  56                        PUSH ESI
00602447  8B F1                     MOV ESI,ECX
00602449  8D 4D E0                  LEA ECX,[EBP + -0x20]
0060244C  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00602453  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00602456  51                        PUSH ECX
00602457  8B CE                     MOV ECX,ESI
00602459  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
00602460  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00602463  E8 38 3C 0E 00            CALL 0x006e60a0
00602468  C7 86 6E 03 00 00 06 00 00 00  MOV dword ptr [ESI + 0x36e],0x6
00602472  5E                        POP ESI
00602473  8B E5                     MOV ESP,EBP
00602475  5D                        POP EBP
00602476  C3                        RET
