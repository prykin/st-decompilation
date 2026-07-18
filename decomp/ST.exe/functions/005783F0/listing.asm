FUN_005783f0:
005783F0  55                        PUSH EBP
005783F1  8B EC                     MOV EBP,ESP
005783F3  83 EC 20                  SUB ESP,0x20
005783F6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005783F9  8D 55 E0                  LEA EDX,[EBP + -0x20]
005783FC  52                        PUSH EDX
005783FD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00578404  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0057840B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057840E  E8 8D DC 16 00            CALL 0x006e60a0
00578413  8B E5                     MOV ESP,EBP
00578415  5D                        POP EBP
00578416  C3                        RET
