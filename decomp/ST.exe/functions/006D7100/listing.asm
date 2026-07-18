FUN_006d7100:
006D7100  55                        PUSH EBP
006D7101  8B EC                     MOV EBP,ESP
006D7103  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D7106  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7109  52                        PUSH EDX
006D710A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D710D  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D7110  52                        PUSH EDX
006D7111  50                        PUSH EAX
006D7112  8B 08                     MOV ECX,dword ptr [EAX]
006D7114  FF 11                     CALL dword ptr [ECX]
006D7116  5D                        POP EBP
006D7117  C2 0C 00                  RET 0xc
