FUN_00759e30:
00759E30  55                        PUSH EBP
00759E31  8B EC                     MOV EBP,ESP
00759E33  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759E36  68 84 00 00 00            PUSH 0x84
00759E3B  6A 00                     PUSH 0x0
00759E3D  50                        PUSH EAX
00759E3E  8B 08                     MOV ECX,dword ptr [EAX]
00759E40  FF 11                     CALL dword ptr [ECX]
00759E42  C7 80 80 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x80],0x0
00759E4C  5D                        POP EBP
00759E4D  C2 04 00                  RET 0x4
