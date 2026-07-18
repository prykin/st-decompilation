FUN_004dd7c0:
004DD7C0  55                        PUSH EBP
004DD7C1  8B EC                     MOV EBP,ESP
004DD7C3  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DD7C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DD7CC  3B C2                     CMP EAX,EDX
004DD7CE  75 14                     JNZ 0x004dd7e4
004DD7D0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DD7D3  83 F8 01                  CMP EAX,0x1
004DD7D6  7C 0C                     JL 0x004dd7e4
004DD7D8  83 F8 29                  CMP EAX,0x29
004DD7DB  7D 07                     JGE 0x004dd7e4
004DD7DD  FF 84 81 DC 04 00 00      INC dword ptr [ECX + EAX*0x4 + 0x4dc]
LAB_004dd7e4:
004DD7E4  33 C0                     XOR EAX,EAX
004DD7E6  5D                        POP EBP
004DD7E7  C2 08 00                  RET 0x8
