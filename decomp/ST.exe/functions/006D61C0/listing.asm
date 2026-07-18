FUN_006d61c0:
006D61C0  55                        PUSH EBP
006D61C1  8B EC                     MOV EBP,ESP
006D61C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D61C6  51                        PUSH ECX
006D61C7  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
006D61CA  FF 40 68                  INC dword ptr [EAX + 0x68]
006D61CD  E8 65 29 07 00            CALL 0x00748b37
006D61D2  5D                        POP EBP
006D61D3  C2 04 00                  RET 0x4
