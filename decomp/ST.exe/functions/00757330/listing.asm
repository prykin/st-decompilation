FUN_00757330:
00757330  55                        PUSH EBP
00757331  8B EC                     MOV EBP,ESP
00757333  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00757336  85 C9                     TEST ECX,ECX
00757338  7E 08                     JLE 0x00757342
0075733A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075733D  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00757340  01 08                     ADD dword ptr [EAX],ECX
LAB_00757342:
00757342  5D                        POP EBP
00757343  C2 08 00                  RET 0x8
