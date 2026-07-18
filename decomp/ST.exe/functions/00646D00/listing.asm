FUN_00646d00:
00646D00  55                        PUSH EBP
00646D01  8B EC                     MOV EBP,ESP
00646D03  83 EC 20                  SUB ESP,0x20
00646D06  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00646D09  8D 55 E0                  LEA EDX,[EBP + -0x20]
00646D0C  52                        PUSH EDX
00646D0D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00646D14  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
00646D1B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00646D1E  E8 7D F3 09 00            CALL 0x006e60a0
00646D23  8B E5                     MOV ESP,EBP
00646D25  5D                        POP EBP
00646D26  C3                        RET
