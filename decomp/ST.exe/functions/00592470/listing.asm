CampaignTy::CloseButtons:
00592470  55                        PUSH EBP
00592471  8B EC                     MOV EBP,ESP
00592473  83 EC 48                  SUB ESP,0x48
00592476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059247B  53                        PUSH EBX
0059247C  56                        PUSH ESI
0059247D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00592480  57                        PUSH EDI
00592481  8D 55 BC                  LEA EDX,[EBP + -0x44]
00592484  8D 4D B8                  LEA ECX,[EBP + -0x48]
00592487  6A 00                     PUSH 0x0
00592489  52                        PUSH EDX
0059248A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059248D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00592493  E8 58 B3 19 00            CALL 0x0072d7f0
00592498  8B F0                     MOV ESI,EAX
0059249A  83 C4 08                  ADD ESP,0x8
0059249D  85 F6                     TEST ESI,ESI
0059249F  75 6F                     JNZ 0x00592510
005924A1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005924A4  8B CE                     MOV ECX,ESI
005924A6  E8 AE 0F E7 FF            CALL 0x00403459
005924AB  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005924B1  33 DB                     XOR EBX,EBX
005924B3  84 C0                     TEST AL,AL
005924B5  76 38                     JBE 0x005924ef
005924B7  BF 96 00 00 00            MOV EDI,0x96
005924BC  81 C6 23 01 00 00         ADD ESI,0x123
LAB_005924c2:
005924C2  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005924C8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005924CB  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
005924CE  89 3E                     MOV dword ptr [ESI],EDI
005924D0  33 C0                     XOR EAX,EAX
005924D2  C6 46 98 01               MOV byte ptr [ESI + -0x68],0x1
005924D6  8A 81 9A 00 00 00         MOV AL,byte ptr [ECX + 0x9a]
005924DC  43                        INC EBX
005924DD  81 C7 96 00 00 00         ADD EDI,0x96
005924E3  81 C6 FB 01 00 00         ADD ESI,0x1fb
005924E9  3B D8                     CMP EBX,EAX
005924EB  7C D5                     JL 0x005924c2
005924ED  8B F1                     MOV ESI,ECX
LAB_005924ef:
005924EF  6A FF                     PUSH -0x1
005924F1  6A 01                     PUSH 0x1
005924F3  6A 02                     PUSH 0x2
005924F5  8B CE                     MOV ECX,ESI
005924F7  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005924FB  E8 F1 26 E7 FF            CALL 0x00404bf1
00592500  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00592503  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00592509  5F                        POP EDI
0059250A  5E                        POP ESI
0059250B  5B                        POP EBX
0059250C  8B E5                     MOV ESP,EBP
0059250E  5D                        POP EBP
0059250F  C3                        RET
LAB_00592510:
00592510  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00592513  68 5C BE 7C 00            PUSH 0x7cbe5c
00592518  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059251D  56                        PUSH ESI
0059251E  6A 00                     PUSH 0x0
00592520  68 3C 01 00 00            PUSH 0x13c
00592525  68 D4 BC 7C 00            PUSH 0x7cbcd4
0059252A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059252F  E8 9C AF 11 00            CALL 0x006ad4d0
00592534  83 C4 18                  ADD ESP,0x18
00592537  85 C0                     TEST EAX,EAX
00592539  74 01                     JZ 0x0059253c
0059253B  CC                        INT3
LAB_0059253c:
0059253C  68 3C 01 00 00            PUSH 0x13c
00592541  68 D4 BC 7C 00            PUSH 0x7cbcd4
00592546  6A 00                     PUSH 0x0
00592548  56                        PUSH ESI
00592549  E8 F2 38 11 00            CALL 0x006a5e40
0059254E  5F                        POP EDI
0059254F  5E                        POP ESI
00592550  5B                        POP EBX
00592551  8B E5                     MOV ESP,EBP
00592553  5D                        POP EBP
00592554  C3                        RET
