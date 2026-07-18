FUN_00617880:
00617880  55                        PUSH EBP
00617881  8B EC                     MOV EBP,ESP
00617883  83 EC 20                  SUB ESP,0x20
00617886  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00617889  8D 55 E0                  LEA EDX,[EBP + -0x20]
0061788C  52                        PUSH EDX
0061788D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00617894  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0061789B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061789E  E8 FD E7 0C 00            CALL 0x006e60a0
006178A3  8B E5                     MOV ESP,EBP
006178A5  5D                        POP EBP
006178A6  C3                        RET
