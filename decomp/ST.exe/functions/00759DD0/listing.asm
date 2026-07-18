FUN_00759dd0:
00759DD0  55                        PUSH EBP
00759DD1  8B EC                     MOV EBP,ESP
00759DD3  56                        PUSH ESI
00759DD4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00759DD7  6A 01                     PUSH 0x1
00759DD9  56                        PUSH ESI
00759DDA  8B 06                     MOV EAX,dword ptr [ESI]
00759DDC  FF 50 24                  CALL dword ptr [EAX + 0x24]
00759DDF  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00759DE2  F7 D9                     NEG ECX
00759DE4  1B C9                     SBB ECX,ECX
00759DE6  83 E1 64                  AND ECX,0x64
00759DE9  83 C1 64                  ADD ECX,0x64
00759DEC  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
00759DEF  5E                        POP ESI
00759DF0  5D                        POP EBP
00759DF1  C2 04 00                  RET 0x4
