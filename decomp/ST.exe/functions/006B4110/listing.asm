FUN_006b4110:
006B4110  55                        PUSH EBP
006B4111  8B EC                     MOV EBP,ESP
006B4113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B4116  8B 80 DC 01 00 00         MOV EAX,dword ptr [EAX + 0x1dc]
006B411C  5D                        POP EBP
006B411D  C2 04 00                  RET 0x4
