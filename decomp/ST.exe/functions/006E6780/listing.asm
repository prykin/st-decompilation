FUN_006e6780:
006E6780  55                        PUSH EBP
006E6781  8B EC                     MOV EBP,ESP
006E6783  8D 81 4E 04 00 00         LEA EAX,[ECX + 0x44e]
006E6789  56                        PUSH ESI
006E678A  8B 30                     MOV ESI,dword ptr [EAX]
006E678C  85 F6                     TEST ESI,ESI
006E678E  74 24                     JZ 0x006e67b4
006E6790  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_006e6793:
006E6793  39 4E 04                  CMP dword ptr [ESI + 0x4],ECX
006E6796  74 0B                     JZ 0x006e67a3
006E6798  8B 36                     MOV ESI,dword ptr [ESI]
006E679A  85 F6                     TEST ESI,ESI
006E679C  75 F5                     JNZ 0x006e6793
006E679E  5E                        POP ESI
006E679F  5D                        POP EBP
006E67A0  C2 04 00                  RET 0x4
LAB_006e67a3:
006E67A3  85 F6                     TEST ESI,ESI
006E67A5  74 0D                     JZ 0x006e67b4
006E67A7  56                        PUSH ESI
006E67A8  50                        PUSH EAX
006E67A9  E8 12 31 FD FF            CALL 0x006b98c0
006E67AE  56                        PUSH ESI
006E67AF  E8 DC F6 FB FF            CALL 0x006a5e90
LAB_006e67b4:
006E67B4  5E                        POP ESI
006E67B5  5D                        POP EBP
006E67B6  C2 04 00                  RET 0x4
