FUN_004be180:
004BE180  55                        PUSH EBP
004BE181  8B EC                     MOV EBP,ESP
004BE183  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004BE186  89 81 DB 05 00 00         MOV dword ptr [ECX + 0x5db],EAX
004BE18C  5D                        POP EBP
004BE18D  C2 04 00                  RET 0x4
