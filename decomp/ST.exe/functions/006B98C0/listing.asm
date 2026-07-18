FUN_006b98c0:
006B98C0  55                        PUSH EBP
006B98C1  8B EC                     MOV EBP,ESP
006B98C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B98C6  33 C0                     XOR EAX,EAX
006B98C8  56                        PUSH ESI
006B98C9  8B 11                     MOV EDX,dword ptr [ECX]
006B98CB  85 D2                     TEST EDX,EDX
006B98CD  74 35                     JZ 0x006b9904
006B98CF  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B98D2  3B D6                     CMP EDX,ESI
006B98D4  75 0E                     JNZ 0x006b98e4
006B98D6  8B 06                     MOV EAX,dword ptr [ESI]
006B98D8  5E                        POP ESI
006B98D9  89 01                     MOV dword ptr [ECX],EAX
006B98DB  B8 01 00 00 00            MOV EAX,0x1
006B98E0  5D                        POP EBP
006B98E1  C2 08 00                  RET 0x8
LAB_006b98e4:
006B98E4  8B 0A                     MOV ECX,dword ptr [EDX]
006B98E6  85 C9                     TEST ECX,ECX
006B98E8  74 1A                     JZ 0x006b9904
LAB_006b98ea:
006B98EA  3B CE                     CMP ECX,ESI
006B98EC  74 0D                     JZ 0x006b98fb
006B98EE  8B D1                     MOV EDX,ECX
006B98F0  8B 0A                     MOV ECX,dword ptr [EDX]
006B98F2  85 C9                     TEST ECX,ECX
006B98F4  75 F4                     JNZ 0x006b98ea
006B98F6  5E                        POP ESI
006B98F7  5D                        POP EBP
006B98F8  C2 08 00                  RET 0x8
LAB_006b98fb:
006B98FB  8B 0E                     MOV ECX,dword ptr [ESI]
006B98FD  B8 01 00 00 00            MOV EAX,0x1
006B9902  89 0A                     MOV dword ptr [EDX],ECX
LAB_006b9904:
006B9904  5E                        POP ESI
006B9905  5D                        POP EBP
006B9906  C2 08 00                  RET 0x8
