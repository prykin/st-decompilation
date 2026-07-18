FUN_006b27b0:
006B27B0  55                        PUSH EBP
006B27B1  8B EC                     MOV EBP,ESP
006B27B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B27B6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B27B9  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B27BF  73 2F                     JNC 0x006b27f0
006B27C1  8B 89 B0 01 00 00         MOV ECX,dword ptr [ECX + 0x1b0]
006B27C7  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006B27CA  8B 10                     MOV EDX,dword ptr [EAX]
006B27CC  81 E2 00 C0 00 00         AND EDX,0xc000
006B27D2  81 FA 00 80 00 00         CMP EDX,0x8000
006B27D8  75 16                     JNZ 0x006b27f0
006B27DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B27DD  8B 88 B8 00 00 00         MOV ECX,dword ptr [EAX + 0xb8]
006B27E3  89 0A                     MOV dword ptr [EDX],ECX
006B27E5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B27E8  8B 80 BC 00 00 00         MOV EAX,dword ptr [EAX + 0xbc]
006B27EE  89 01                     MOV dword ptr [ECX],EAX
LAB_006b27f0:
006B27F0  5D                        POP EBP
006B27F1  C2 10 00                  RET 0x10
