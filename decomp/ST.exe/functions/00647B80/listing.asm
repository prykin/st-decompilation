FUN_00647b80:
00647B80  55                        PUSH EBP
00647B81  8B EC                     MOV EBP,ESP
00647B83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647B86  D9 40 01                  FLD float ptr [EAX + 0x1]
00647B89  5D                        POP EBP
00647B8A  C2 04 00                  RET 0x4
