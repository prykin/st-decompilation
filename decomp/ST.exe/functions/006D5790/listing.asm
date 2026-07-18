FUN_006d5790:
006D5790  55                        PUSH EBP
006D5791  8B EC                     MOV EBP,ESP
006D5793  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5796  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D5799  52                        PUSH EDX
006D579A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D579D  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D57A0  52                        PUSH EDX
006D57A1  50                        PUSH EAX
006D57A2  8B 08                     MOV ECX,dword ptr [EAX]
006D57A4  FF 11                     CALL dword ptr [ECX]
006D57A6  5D                        POP EBP
006D57A7  C2 0C 00                  RET 0xc
