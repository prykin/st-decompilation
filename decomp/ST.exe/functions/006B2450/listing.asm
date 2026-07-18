FUN_006b2450:
006B2450  55                        PUSH EBP
006B2451  8B EC                     MOV EBP,ESP
006B2453  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2456  8B 01                     MOV EAX,dword ptr [ECX]
006B2458  83 78 20 10               CMP dword ptr [EAX + 0x20],0x10
006B245C  75 06                     JNZ 0x006b2464
006B245E  33 C0                     XOR EAX,EAX
006B2460  5D                        POP EBP
006B2461  C2 08 00                  RET 0x8
LAB_006b2464:
006B2464  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B2467  8B 81 D4 01 00 00         MOV EAX,dword ptr [ECX + 0x1d4]
006B246D  89 91 D4 01 00 00         MOV dword ptr [ECX + 0x1d4],EDX
006B2473  5D                        POP EBP
006B2474  C2 08 00                  RET 0x8
