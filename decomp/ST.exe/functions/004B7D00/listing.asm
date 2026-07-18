FUN_004b7d00:
004B7D00  55                        PUSH EBP
004B7D01  8B EC                     MOV EBP,ESP
004B7D03  8B 91 45 02 00 00         MOV EDX,dword ptr [ECX + 0x245]
004B7D09  33 C0                     XOR EAX,EAX
004B7D0B  85 D2                     TEST EDX,EDX
004B7D0D  75 25                     JNZ 0x004b7d34
004B7D0F  8B 91 D0 04 00 00         MOV EDX,dword ptr [ECX + 0x4d0]
004B7D15  85 D2                     TEST EDX,EDX
004B7D17  75 1B                     JNZ 0x004b7d34
004B7D19  8B 91 D4 04 00 00         MOV EDX,dword ptr [ECX + 0x4d4]
004B7D1F  85 D2                     TEST EDX,EDX
004B7D21  75 11                     JNZ 0x004b7d34
004B7D23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B7D26  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004B7D29  B8 01 00 00 00            MOV EAX,0x1
004B7D2E  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
LAB_004b7d34:
004B7D34  5D                        POP EBP
004B7D35  C2 04 00                  RET 0x4
