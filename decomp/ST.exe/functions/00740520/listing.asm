FUN_00740520:
00740520  55                        PUSH EBP
00740521  8B EC                     MOV EBP,ESP
00740523  83 EC 10                  SUB ESP,0x10
00740526  6A 00                     PUSH 0x0
00740528  6A 00                     PUSH 0x0
0074052A  6A 00                     PUSH 0x0
0074052C  6A 01                     PUSH 0x1
0074052E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740531  50                        PUSH EAX
00740532  8D 4D F0                  LEA ECX,[EBP + -0x10]
00740535  51                        PUSH ECX
00740536  8D 55 F4                  LEA EDX,[EBP + -0xc]
00740539  52                        PUSH EDX
0074053A  E8 91 2F 00 00            CALL 0x007434d0
0074053F  83 C4 1C                  ADD ESP,0x1c
00740542  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740545  50                        PUSH EAX
00740546  8D 4D F4                  LEA ECX,[EBP + -0xc]
00740549  51                        PUSH ECX
0074054A  E8 D1 FE FF FF            CALL 0x00740420
0074054F  83 C4 08                  ADD ESP,0x8
00740552  8B E5                     MOV ESP,EBP
00740554  5D                        POP EBP
00740555  C3                        RET
