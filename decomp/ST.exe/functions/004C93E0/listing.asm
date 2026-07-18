FUN_004c93e0:
004C93E0  55                        PUSH EBP
004C93E1  8B EC                     MOV EBP,ESP
004C93E3  8B 91 D4 03 00 00         MOV EDX,dword ptr [ECX + 0x3d4]
004C93E9  33 C0                     XOR EAX,EAX
004C93EB  85 D2                     TEST EDX,EDX
004C93ED  74 24                     JZ 0x004c9413
004C93EF  8B 89 07 06 00 00         MOV ECX,dword ptr [ECX + 0x607]
004C93F5  85 C9                     TEST ECX,ECX
004C93F7  74 1A                     JZ 0x004c9413
004C93F9  85 D2                     TEST EDX,EDX
004C93FB  7E 16                     JLE 0x004c9413
004C93FD  56                        PUSH ESI
004C93FE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004c9401:
004C9401  85 F6                     TEST ESI,ESI
004C9403  74 04                     JZ 0x004c9409
004C9405  39 31                     CMP dword ptr [ECX],ESI
004C9407  75 03                     JNZ 0x004c940c
LAB_004c9409:
004C9409  03 41 08                  ADD EAX,dword ptr [ECX + 0x8]
LAB_004c940c:
004C940C  83 C1 27                  ADD ECX,0x27
004C940F  4A                        DEC EDX
004C9410  75 EF                     JNZ 0x004c9401
004C9412  5E                        POP ESI
LAB_004c9413:
004C9413  5D                        POP EBP
004C9414  C2 04 00                  RET 0x4
