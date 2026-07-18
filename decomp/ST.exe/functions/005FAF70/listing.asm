FUN_005faf70:
005FAF70  55                        PUSH EBP
005FAF71  8B EC                     MOV EBP,ESP
005FAF73  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005FAF76  8B 01                     MOV EAX,dword ptr [ECX]
005FAF78  52                        PUSH EDX
005FAF79  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005FAF7C  52                        PUSH EDX
005FAF7D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005FAF80  52                        PUSH EDX
005FAF81  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FAF84  52                        PUSH EDX
005FAF85  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FAF88  52                        PUSH EDX
005FAF89  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FAF8C  52                        PUSH EDX
005FAF8D  FF 50 10                  CALL dword ptr [EAX + 0x10]
005FAF90  0F BF C0                  MOVSX EAX,AX
005FAF93  5D                        POP EBP
005FAF94  C2 18 00                  RET 0x18
