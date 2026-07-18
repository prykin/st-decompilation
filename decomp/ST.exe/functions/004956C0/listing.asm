FUN_004956c0:
004956C0  55                        PUSH EBP
004956C1  8B EC                     MOV EBP,ESP
004956C3  83 B9 F7 06 00 00 17      CMP dword ptr [ECX + 0x6f7],0x17
004956CA  75 09                     JNZ 0x004956d5
004956CC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004956CF  89 81 E2 07 00 00         MOV dword ptr [ECX + 0x7e2],EAX
LAB_004956d5:
004956D5  5D                        POP EBP
004956D6  C2 04 00                  RET 0x4
