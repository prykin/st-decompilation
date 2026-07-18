FUN_006ad270:
006AD270  55                        PUSH EBP
006AD271  8B EC                     MOV EBP,ESP
006AD273  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AD276  A3 B8 4E 85 00            MOV [0x00854eb8],EAX
006AD27B  5D                        POP EBP
006AD27C  C2 04 00                  RET 0x4
