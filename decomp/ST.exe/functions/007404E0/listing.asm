FUN_007404e0:
007404E0  55                        PUSH EBP
007404E1  8B EC                     MOV EBP,ESP
007404E3  83 EC 10                  SUB ESP,0x10
007404E6  6A 00                     PUSH 0x0
007404E8  6A 00                     PUSH 0x0
007404EA  6A 00                     PUSH 0x0
007404EC  6A 00                     PUSH 0x0
007404EE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007404F1  50                        PUSH EAX
007404F2  8D 4D F0                  LEA ECX,[EBP + -0x10]
007404F5  51                        PUSH ECX
007404F6  8D 55 F4                  LEA EDX,[EBP + -0xc]
007404F9  52                        PUSH EDX
007404FA  E8 D1 2F 00 00            CALL 0x007434d0
007404FF  83 C4 1C                  ADD ESP,0x1c
00740502  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740505  50                        PUSH EAX
00740506  8D 4D F4                  LEA ECX,[EBP + -0xc]
00740509  51                        PUSH ECX
0074050A  E8 D1 FE FF FF            CALL 0x007403e0
0074050F  83 C4 08                  ADD ESP,0x8
00740512  8B E5                     MOV ESP,EBP
00740514  5D                        POP EBP
00740515  C3                        RET
