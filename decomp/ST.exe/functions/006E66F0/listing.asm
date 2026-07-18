FUN_006e66f0:
006E66F0  55                        PUSH EBP
006E66F1  8B EC                     MOV EBP,ESP
006E66F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E66F6  8B 91 1C 04 00 00         MOV EDX,dword ptr [ECX + 0x41c]
006E66FC  3B C2                     CMP EAX,EDX
006E66FE  7D 0A                     JGE 0x006e670a
006E6700  8B 89 20 04 00 00         MOV ECX,dword ptr [ECX + 0x420]
006E6706  C6 04 81 00               MOV byte ptr [ECX + EAX*0x4],0x0
LAB_006e670a:
006E670A  5D                        POP EBP
006E670B  C2 04 00                  RET 0x4
