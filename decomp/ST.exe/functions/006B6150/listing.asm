FUN_006b6150:
006B6150  55                        PUSH EBP
006B6151  8B EC                     MOV EBP,ESP
006B6153  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6156  A3 C4 4E 85 00            MOV [0x00854ec4],EAX
006B615B  5D                        POP EBP
006B615C  C2 04 00                  RET 0x4
