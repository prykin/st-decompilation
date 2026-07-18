FUN_006b23e0:
006B23E0  55                        PUSH EBP
006B23E1  8B EC                     MOV EBP,ESP
006B23E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B23E6  8B 01                     MOV EAX,dword ptr [ECX]
006B23E8  8B D0                     MOV EDX,EAX
006B23EA  83 E2 21                  AND EDX,0x21
006B23ED  80 FA 21                  CMP DL,0x21
006B23F0  75 11                     JNZ 0x006b2403
006B23F2  0C 06                     OR AL,0x6
006B23F4  89 01                     MOV dword ptr [ECX],EAX
006B23F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B23F9  C7 80 B4 01 00 00 01 00 00 00  MOV dword ptr [EAX + 0x1b4],0x1
LAB_006b2403:
006B2403  5D                        POP EBP
006B2404  C2 08 00                  RET 0x8
