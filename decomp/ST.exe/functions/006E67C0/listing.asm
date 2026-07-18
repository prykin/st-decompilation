FUN_006e67c0:
006E67C0  55                        PUSH EBP
006E67C1  8B EC                     MOV EBP,ESP
006E67C3  53                        PUSH EBX
006E67C4  56                        PUSH ESI
006E67C5  8B B1 52 04 00 00         MOV ESI,dword ptr [ECX + 0x452]
006E67CB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006E67CE  57                        PUSH EDI
006E67CF  8D B9 52 04 00 00         LEA EDI,[ECX + 0x452]
006E67D5  85 F6                     TEST ESI,ESI
006E67D7  74 11                     JZ 0x006e67ea
LAB_006e67d9:
006E67D9  39 5E 04                  CMP dword ptr [ESI + 0x4],EBX
006E67DC  74 08                     JZ 0x006e67e6
006E67DE  8B 36                     MOV ESI,dword ptr [ESI]
006E67E0  85 F6                     TEST ESI,ESI
006E67E2  75 F5                     JNZ 0x006e67d9
006E67E4  EB 04                     JMP 0x006e67ea
LAB_006e67e6:
006E67E6  85 F6                     TEST ESI,ESI
006E67E8  75 14                     JNZ 0x006e67fe
LAB_006e67ea:
006E67EA  6A 1C                     PUSH 0x1c
006E67EC  E8 1F 44 FC FF            CALL 0x006aac10
006E67F1  8B F0                     MOV ESI,EAX
006E67F3  85 F6                     TEST ESI,ESI
006E67F5  74 28                     JZ 0x006e681f
006E67F7  56                        PUSH ESI
006E67F8  57                        PUSH EDI
006E67F9  E8 12 31 FD FF            CALL 0x006b9910
LAB_006e67fe:
006E67FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6801  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E6804  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E6807  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006E680A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E680D  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006E6810  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E6813  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
006E6816  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
006E6819  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
006E681C  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
LAB_006e681f:
006E681F  5F                        POP EDI
006E6820  5E                        POP ESI
006E6821  5B                        POP EBX
006E6822  5D                        POP EBP
006E6823  C2 18 00                  RET 0x18
