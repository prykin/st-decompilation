FUN_004e18e0:
004E18E0  55                        PUSH EBP
004E18E1  8B EC                     MOV EBP,ESP
004E18E3  8B 81 D8 04 00 00         MOV EAX,dword ptr [ECX + 0x4d8]
004E18E9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E18EC  3B C2                     CMP EAX,EDX
004E18EE  75 1D                     JNZ 0x004e190d
004E18F0  83 B9 D0 04 00 00 01      CMP dword ptr [ECX + 0x4d0],0x1
004E18F7  75 14                     JNZ 0x004e190d
004E18F9  8B 81 E4 04 00 00         MOV EAX,dword ptr [ECX + 0x4e4]
004E18FF  85 C0                     TEST EAX,EAX
004E1901  74 0A                     JZ 0x004e190d
004E1903  C7 81 E4 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4e4],0x0
LAB_004e190d:
004E190D  33 C0                     XOR EAX,EAX
004E190F  5D                        POP EBP
004E1910  C2 04 00                  RET 0x4
