FUN_004cf3e0:
004CF3E0  55                        PUSH EBP
004CF3E1  8B EC                     MOV EBP,ESP
004CF3E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004CF3E6  8B 91 D4 04 00 00         MOV EDX,dword ptr [ECX + 0x4d4]
004CF3EC  3B C2                     CMP EAX,EDX
004CF3EE  75 0A                     JNZ 0x004cf3fa
004CF3F0  C7 81 D8 04 00 00 01 00 00 00  MOV dword ptr [ECX + 0x4d8],0x1
LAB_004cf3fa:
004CF3FA  33 C0                     XOR EAX,EAX
004CF3FC  5D                        POP EBP
004CF3FD  C2 04 00                  RET 0x4
