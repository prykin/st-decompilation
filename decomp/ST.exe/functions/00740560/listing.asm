FUN_00740560:
00740560  55                        PUSH EBP
00740561  8B EC                     MOV EBP,ESP
00740563  83 EC 10                  SUB ESP,0x10
00740566  6A 00                     PUSH 0x0
00740568  6A 00                     PUSH 0x0
0074056A  6A 00                     PUSH 0x0
0074056C  6A 00                     PUSH 0x0
0074056E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740571  50                        PUSH EAX
00740572  8D 4D F0                  LEA ECX,[EBP + -0x10]
00740575  51                        PUSH ECX
00740576  8D 55 F4                  LEA EDX,[EBP + -0xc]
00740579  52                        PUSH EDX
0074057A  E8 51 2F 00 00            CALL 0x007434d0
0074057F  83 C4 1C                  ADD ESP,0x1c
00740582  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740585  50                        PUSH EAX
00740586  8D 4D F4                  LEA ECX,[EBP + -0xc]
00740589  51                        PUSH ECX
0074058A  E8 71 FE FF FF            CALL 0x00740400
0074058F  83 C4 08                  ADD ESP,0x8
00740592  8B E5                     MOV ESP,EBP
00740594  5D                        POP EBP
00740595  C3                        RET
