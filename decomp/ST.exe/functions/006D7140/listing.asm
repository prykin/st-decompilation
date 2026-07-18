FUN_006d7140:
006D7140  55                        PUSH EBP
006D7141  8B EC                     MOV EBP,ESP
006D7143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D7146  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D7149  50                        PUSH EAX
006D714A  8B 08                     MOV ECX,dword ptr [EAX]
006D714C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D714F  5D                        POP EBP
006D7150  C2 04 00                  RET 0x4
