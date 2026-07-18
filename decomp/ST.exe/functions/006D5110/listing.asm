FUN_006d5110:
006D5110  55                        PUSH EBP
006D5111  8B EC                     MOV EBP,ESP
006D5113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5116  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D5119  52                        PUSH EDX
006D511A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D511D  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5120  52                        PUSH EDX
006D5121  50                        PUSH EAX
006D5122  8B 08                     MOV ECX,dword ptr [EAX]
006D5124  FF 11                     CALL dword ptr [ECX]
006D5126  5D                        POP EBP
006D5127  C2 0C 00                  RET 0xc
