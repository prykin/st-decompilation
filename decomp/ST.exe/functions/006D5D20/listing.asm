FUN_006d5d20:
006D5D20  55                        PUSH EBP
006D5D21  8B EC                     MOV EBP,ESP
006D5D23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5D26  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D5D29  52                        PUSH EDX
006D5D2A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D5D2D  8B 40 F8                  MOV EAX,dword ptr [EAX + -0x8]
006D5D30  52                        PUSH EDX
006D5D31  50                        PUSH EAX
006D5D32  8B 08                     MOV ECX,dword ptr [EAX]
006D5D34  FF 11                     CALL dword ptr [ECX]
006D5D36  5D                        POP EBP
006D5D37  C2 0C 00                  RET 0xc
