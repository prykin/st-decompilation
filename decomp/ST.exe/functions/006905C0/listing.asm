FUN_006905c0:
006905C0  55                        PUSH EBP
006905C1  8B EC                     MOV EBP,ESP
006905C3  8B 91 C9 00 00 00         MOV EDX,dword ptr [ECX + 0xc9]
006905C9  53                        PUSH EBX
006905CA  56                        PUSH ESI
006905CB  33 C0                     XOR EAX,EAX
006905CD  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
006905D0  57                        PUSH EDI
006905D1  85 F6                     TEST ESI,ESI
006905D3  7E 21                     JLE 0x006905f6
006905D5  66 8B 7D 08               MOV DI,word ptr [EBP + 0x8]
006905D9  3B C6                     CMP EAX,ESI
LAB_006905db:
006905DB  73 14                     JNC 0x006905f1
006905DD  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006905E0  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
006905E3  0F AF C8                  IMUL ECX,EAX
006905E6  03 CB                     ADD ECX,EBX
006905E8  85 C9                     TEST ECX,ECX
006905EA  74 05                     JZ 0x006905f1
006905EC  66 3B 39                  CMP DI,word ptr [ECX]
006905EF  74 08                     JZ 0x006905f9
LAB_006905f1:
006905F1  40                        INC EAX
006905F2  3B C6                     CMP EAX,ESI
006905F4  7C E5                     JL 0x006905db
LAB_006905f6:
006905F6  83 C8 FF                  OR EAX,0xffffffff
LAB_006905f9:
006905F9  5F                        POP EDI
006905FA  5E                        POP ESI
006905FB  5B                        POP EBX
006905FC  5D                        POP EBP
006905FD  C2 04 00                  RET 0x4
