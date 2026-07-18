FUN_006b00c0:
006B00C0  55                        PUSH EBP
006B00C1  8B EC                     MOV EBP,ESP
006B00C3  53                        PUSH EBX
006B00C4  56                        PUSH ESI
006B00C5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B00C8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B00CB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B00CE  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B00D1  50                        PUSH EAX
006B00D2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B00D5  51                        PUSH ECX
006B00D6  52                        PUSH EDX
006B00D7  50                        PUSH EAX
006B00D8  E8 B3 E1 FF FF            CALL 0x006ae290
006B00DD  8B D8                     MOV EBX,EAX
006B00DF  85 DB                     TEST EBX,EBX
006B00E1  75 06                     JNZ 0x006b00e9
006B00E3  5E                        POP ESI
006B00E4  5B                        POP EBX
006B00E5  5D                        POP EBP
006B00E6  C2 0C 00                  RET 0xc
LAB_006b00e9:
006B00E9  8B 0E                     MOV ECX,dword ptr [ESI]
006B00EB  8B 13                     MOV EDX,dword ptr [EBX]
006B00ED  80 CD 01                  OR CH,0x1
006B00F0  57                        PUSH EDI
006B00F1  0B D1                     OR EDX,ECX
006B00F3  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006B00F6  89 13                     MOV dword ptr [EBX],EDX
006B00F8  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006B00FB  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
006B00FE  0F AF 4B 0C               IMUL ECX,dword ptr [EBX + 0xc]
006B0102  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B0105  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
006B0108  8B C1                     MOV EAX,ECX
006B010A  83 C6 1C                  ADD ESI,0x1c
006B010D  C1 E9 02                  SHR ECX,0x2
006B0110  89 53 18                  MOV dword ptr [EBX + 0x18],EDX
006B0113  F3 A5                     MOVSD.REP ES:EDI,ESI
006B0115  8B C8                     MOV ECX,EAX
006B0117  83 E1 03                  AND ECX,0x3
006B011A  F3 A4                     MOVSB.REP ES:EDI,ESI
006B011C  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006B011F  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
006B0122  2B C8                     SUB ECX,EAX
006B0124  5F                        POP EDI
006B0125  74 08                     JZ 0x006b012f
006B0127  51                        PUSH ECX
006B0128  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
006B012B  50                        PUSH EAX
006B012C  51                        PUSH ECX
006B012D  FF D2                     CALL EDX
LAB_006b012f:
006B012F  8B C3                     MOV EAX,EBX
006B0131  5E                        POP ESI
006B0132  5B                        POP EBX
006B0133  5D                        POP EBP
006B0134  C2 0C 00                  RET 0xc
