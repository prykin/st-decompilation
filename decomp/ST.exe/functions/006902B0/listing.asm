FUN_006902b0:
006902B0  55                        PUSH EBP
006902B1  8B EC                     MOV EBP,ESP
006902B3  56                        PUSH ESI
006902B4  57                        PUSH EDI
006902B5  8B F9                     MOV EDI,ECX
006902B7  33 F6                     XOR ESI,ESI
006902B9  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
006902BF  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006902C2  85 C0                     TEST EAX,EAX
006902C4  7E 3F                     JLE 0x00690305
006902C6  53                        PUSH EBX
006902C7  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006902CA  3B F0                     CMP ESI,EAX
LAB_006902cc:
006902CC  73 28                     JNC 0x006902f6
006902CE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006902D1  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006902D4  0F AF C6                  IMUL EAX,ESI
006902D7  03 C2                     ADD EAX,EDX
006902D9  85 C0                     TEST EAX,EAX
006902DB  74 19                     JZ 0x006902f6
006902DD  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006902E0  85 C0                     TEST EAX,EAX
006902E2  74 12                     JZ 0x006902f6
006902E4  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
006902E8  66 39 48 7B               CMP word ptr [EAX + 0x7b],CX
006902EC  75 08                     JNZ 0x006902f6
006902EE  53                        PUSH EBX
006902EF  8B C8                     MOV ECX,EAX
006902F1  E8 5F 12 D7 FF            CALL 0x00401555
LAB_006902f6:
006902F6  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
006902FC  46                        INC ESI
006902FD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690300  3B F0                     CMP ESI,EAX
00690302  7C C8                     JL 0x006902cc
00690304  5B                        POP EBX
LAB_00690305:
00690305  5F                        POP EDI
00690306  5E                        POP ESI
00690307  5D                        POP EBP
00690308  C2 08 00                  RET 0x8
