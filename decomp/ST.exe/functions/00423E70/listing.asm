FUN_00423e70:
00423E70  55                        PUSH EBP
00423E71  8B EC                     MOV EBP,ESP
00423E73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00423E76  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
00423E79  6A 01                     PUSH 0x1
00423E7B  50                        PUSH EAX
00423E7C  51                        PUSH ECX
00423E7D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00423E83  E8 32 EA FD FF            CALL 0x004028ba
00423E88  5D                        POP EBP
00423E89  C2 04 00                  RET 0x4
