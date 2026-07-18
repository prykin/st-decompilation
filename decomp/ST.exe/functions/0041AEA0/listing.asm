FUN_0041aea0:
0041AEA0  55                        PUSH EBP
0041AEA1  8B EC                     MOV EBP,ESP
0041AEA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041AEA6  C6 00 00                  MOV byte ptr [EAX],0x0
0041AEA9  5D                        POP EBP
0041AEAA  C2 04 00                  RET 0x4
