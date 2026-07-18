FUN_006d5150:
006D5150  55                        PUSH EBP
006D5151  8B EC                     MOV EBP,ESP
006D5153  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5156  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5159  50                        PUSH EAX
006D515A  8B 08                     MOV ECX,dword ptr [EAX]
006D515C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D515F  5D                        POP EBP
006D5160  C2 04 00                  RET 0x4
