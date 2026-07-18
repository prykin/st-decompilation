FUN_00647be0:
00647BE0  55                        PUSH EBP
00647BE1  8B EC                     MOV EBP,ESP
00647BE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00647BE6  8B 89 E2 04 00 00         MOV ECX,dword ptr [ECX + 0x4e2]
00647BEC  50                        PUSH EAX
00647BED  51                        PUSH ECX
00647BEE  E8 AD DE 06 00            CALL 0x006b5aa0
00647BF3  5D                        POP EBP
00647BF4  C2 04 00                  RET 0x4
