FUN_004dd700:
004DD700  55                        PUSH EBP
004DD701  8B EC                     MOV EBP,ESP
004DD703  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DD709  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004DD70C  3B C2                     CMP EAX,EDX
004DD70E  75 13                     JNZ 0x004dd723
004DD710  C7 81 D4 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d4],0x0
004DD71A  B8 01 00 00 00            MOV EAX,0x1
004DD71F  5D                        POP EBP
004DD720  C2 04 00                  RET 0x4
LAB_004dd723:
004DD723  33 C0                     XOR EAX,EAX
004DD725  5D                        POP EBP
004DD726  C2 04 00                  RET 0x4
