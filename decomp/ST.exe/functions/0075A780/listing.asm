FUN_0075a780:
0075A780  55                        PUSH EBP
0075A781  8B EC                     MOV EBP,ESP
0075A783  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075A786  50                        PUSH EAX
0075A787  C7 80 8C 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x8c],0x0
0075A791  E8 0A 00 00 00            CALL 0x0075a7a0
0075A796  5D                        POP EBP
0075A797  C2 04 00                  RET 0x4
