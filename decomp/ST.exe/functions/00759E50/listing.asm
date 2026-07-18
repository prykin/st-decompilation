FUN_00759e50:
00759E50  55                        PUSH EBP
00759E51  8B EC                     MOV EBP,ESP
00759E53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759E56  68 15 01 00 00            PUSH 0x115
00759E5B  6A 00                     PUSH 0x0
00759E5D  50                        PUSH EAX
00759E5E  8B 08                     MOV ECX,dword ptr [EAX]
00759E60  FF 11                     CALL dword ptr [ECX]
00759E62  C7 80 11 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x111],0x0
00759E6C  5D                        POP EBP
00759E6D  C2 04 00                  RET 0x4
