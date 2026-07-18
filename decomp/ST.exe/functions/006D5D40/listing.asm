FUN_006d5d40:
006D5D40  55                        PUSH EBP
006D5D41  8B EC                     MOV EBP,ESP
006D5D43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5D46  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5D49  50                        PUSH EAX
006D5D4A  8B 08                     MOV ECX,dword ptr [EAX]
006D5D4C  FF 51 04                  CALL dword ptr [ECX + 0x4]
006D5D4F  5D                        POP EBP
006D5D50  C2 04 00                  RET 0x4
