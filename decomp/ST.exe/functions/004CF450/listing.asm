FUN_004cf450:
004CF450  55                        PUSH EBP
004CF451  8B EC                     MOV EBP,ESP
004CF453  8B 81 61 03 00 00         MOV EAX,dword ptr [ECX + 0x361]
004CF459  56                        PUSH ESI
004CF45A  57                        PUSH EDI
004CF45B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004CF45E  83 F8 01                  CMP EAX,0x1
004CF461  75 06                     JNZ 0x004cf469
004CF463  89 B9 71 03 00 00         MOV dword ptr [ECX + 0x371],EDI
LAB_004cf469:
004CF469  8B 81 D4 03 00 00         MOV EAX,dword ptr [ECX + 0x3d4]
004CF46F  85 C0                     TEST EAX,EAX
004CF471  74 38                     JZ 0x004cf4ab
004CF473  8B 91 07 06 00 00         MOV EDX,dword ptr [ECX + 0x607]
004CF479  85 D2                     TEST EDX,EDX
004CF47B  74 2E                     JZ 0x004cf4ab
004CF47D  33 F6                     XOR ESI,ESI
004CF47F  85 C0                     TEST EAX,EAX
004CF481  7E 28                     JLE 0x004cf4ab
004CF483  33 D2                     XOR EDX,EDX
LAB_004cf485:
004CF485  8B 81 07 06 00 00         MOV EAX,dword ptr [ECX + 0x607]
004CF48B  03 C2                     ADD EAX,EDX
004CF48D  83 38 01                  CMP dword ptr [EAX],0x1
004CF490  75 03                     JNZ 0x004cf495
004CF492  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
LAB_004cf495:
004CF495  8B 81 D4 03 00 00         MOV EAX,dword ptr [ECX + 0x3d4]
004CF49B  46                        INC ESI
004CF49C  83 C2 27                  ADD EDX,0x27
004CF49F  3B F0                     CMP ESI,EAX
004CF4A1  7C E2                     JL 0x004cf485
004CF4A3  5F                        POP EDI
004CF4A4  33 C0                     XOR EAX,EAX
004CF4A6  5E                        POP ESI
004CF4A7  5D                        POP EBP
004CF4A8  C2 04 00                  RET 0x4
LAB_004cf4ab:
004CF4AB  5F                        POP EDI
004CF4AC  33 C0                     XOR EAX,EAX
004CF4AE  5E                        POP ESI
004CF4AF  5D                        POP EBP
004CF4B0  C2 04 00                  RET 0x4
