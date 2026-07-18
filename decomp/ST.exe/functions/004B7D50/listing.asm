FUN_004b7d50:
004B7D50  55                        PUSH EBP
004B7D51  8B EC                     MOV EBP,ESP
004B7D53  8B 91 D4 04 00 00         MOV EDX,dword ptr [ECX + 0x4d4]
004B7D59  56                        PUSH ESI
004B7D5A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B7D5D  57                        PUSH EDI
004B7D5E  33 C0                     XOR EAX,EAX
004B7D60  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
004B7D63  3B D7                     CMP EDX,EDI
004B7D65  5F                        POP EDI
004B7D66  5E                        POP ESI
004B7D67  75 0B                     JNZ 0x004b7d74
004B7D69  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004B7D6F  B8 01 00 00 00            MOV EAX,0x1
LAB_004b7d74:
004B7D74  5D                        POP EBP
004B7D75  C2 04 00                  RET 0x4
