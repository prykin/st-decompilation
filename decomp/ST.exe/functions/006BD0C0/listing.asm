FUN_006bd0c0:
006BD0C0  55                        PUSH EBP
006BD0C1  8B EC                     MOV EBP,ESP
006BD0C3  83 EC 10                  SUB ESP,0x10
006BD0C6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BD0C9  53                        PUSH EBX
006BD0CA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006BD0CD  56                        PUSH ESI
006BD0CE  8B 81 E4 01 00 00         MOV EAX,dword ptr [ECX + 0x1e4]
006BD0D4  57                        PUSH EDI
006BD0D5  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BD0D8  2B 9C C1 1C 01 00 00      SUB EBX,dword ptr [ECX + EAX*0x8 + 0x11c]
006BD0DF  79 04                     JNS 0x006bd0e5
006BD0E1  03 FB                     ADD EDI,EBX
006BD0E3  33 DB                     XOR EBX,EBX
LAB_006bd0e5:
006BD0E5  8B 84 C1 20 01 00 00      MOV EAX,dword ptr [ECX + EAX*0x8 + 0x120]
006BD0EC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BD0EF  2B D0                     SUB EDX,EAX
006BD0F1  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006BD0F4  79 0F                     JNS 0x006bd105
006BD0F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BD0F9  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006BD100  03 C3                     ADD EAX,EBX
006BD102  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006bd105:
006BD105  85 FF                     TEST EDI,EDI
006BD107  0F 8E FF 00 00 00         JLE 0x006bd20c
006BD10D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BD110  85 C0                     TEST EAX,EAX
006BD112  0F 8E F4 00 00 00         JLE 0x006bd20c
006BD118  8B B1 EC 01 00 00         MOV ESI,dword ptr [ECX + 0x1ec]
006BD11E  8B C3                     MOV EAX,EBX
006BD120  99                        CDQ
006BD121  F7 FE                     IDIV ESI
006BD123  03 D6                     ADD EDX,ESI
006BD125  8D 44 3A FF               LEA EAX,[EDX + EDI*0x1 + -0x1]
006BD129  8B B9 F0 01 00 00         MOV EDI,dword ptr [ECX + 0x1f0]
006BD12F  99                        CDQ
006BD130  F7 FE                     IDIV ESI
006BD132  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006BD135  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BD138  99                        CDQ
006BD139  F7 FF                     IDIV EDI
006BD13B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BD13E  03 D7                     ADD EDX,EDI
006BD140  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
006BD144  99                        CDQ
006BD145  F7 FF                     IDIV EDI
006BD147  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BD14A  8B C3                     MOV EAX,EBX
006BD14C  99                        CDQ
006BD14D  F7 FE                     IDIV ESI
006BD14F  8B 99 20 02 00 00         MOV EBX,dword ptr [ECX + 0x220]
006BD155  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006BD158  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BD15B  99                        CDQ
006BD15C  F7 FF                     IDIV EDI
006BD15E  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006BD165  8B F8                     MOV EDI,EAX
006BD167  8B 81 F4 01 00 00         MOV EAX,dword ptr [ECX + 0x1f4]
006BD16D  83 C0 07                  ADD EAX,0x7
006BD170  99                        CDQ
006BD171  83 E2 07                  AND EDX,0x7
006BD174  03 C2                     ADD EAX,EDX
006BD176  8B F0                     MOV ESI,EAX
006BD178  C1 FE 03                  SAR ESI,0x3
006BD17B  8B C6                     MOV EAX,ESI
006BD17D  0F AF C7                  IMUL EAX,EDI
006BD180  8B B9 10 02 00 00         MOV EDI,dword ptr [ECX + 0x210]
006BD186  03 D8                     ADD EBX,EAX
006BD188  03 F8                     ADD EDI,EAX
006BD18A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BD18D  85 C0                     TEST EAX,EAX
006BD18F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BD192  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BD195  7E 75                     JLE 0x006bd20c
LAB_006bd197:
006BD197  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006BD19A  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
006BD1A1  85 C0                     TEST EAX,EAX
006BD1A3  7E 4F                     JLE 0x006bd1f4
006BD1A5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BD1A8  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006bd1ab:
006BD1AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BD1AE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006BD1B1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006BD1B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BD1B7  80 F2 07                  XOR DL,0x7
006BD1BA  33 C0                     XOR EAX,EAX
006BD1BC  0F A3 11                  BT [ECX],EDX
006BD1BF  D0 D0                     RCL AL,0x1
006BD1C1  85 C0                     TEST EAX,EAX
006BD1C3  75 52                     JNZ 0x006bd217
006BD1C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BD1C8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006BD1CB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006BD1CE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006BD1D1  80 F2 07                  XOR DL,0x7
006BD1D4  33 C0                     XOR EAX,EAX
006BD1D6  0F A3 11                  BT [ECX],EDX
006BD1D9  D0 D0                     RCL AL,0x1
006BD1DB  85 C0                     TEST EAX,EAX
006BD1DD  75 38                     JNZ 0x006bd217
006BD1DF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BD1E2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BD1E5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BD1E8  40                        INC EAX
006BD1E9  42                        INC EDX
006BD1EA  3B C1                     CMP EAX,ECX
006BD1EC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006BD1EF  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006BD1F2  7C B7                     JL 0x006bd1ab
LAB_006bd1f4:
006BD1F4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BD1F7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BD1FA  03 FE                     ADD EDI,ESI
006BD1FC  03 DE                     ADD EBX,ESI
006BD1FE  40                        INC EAX
006BD1FF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BD202  3B C1                     CMP EAX,ECX
006BD204  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BD207  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006BD20A  7C 8B                     JL 0x006bd197
LAB_006bd20c:
006BD20C  5F                        POP EDI
006BD20D  5E                        POP ESI
006BD20E  33 C0                     XOR EAX,EAX
006BD210  5B                        POP EBX
006BD211  8B E5                     MOV ESP,EBP
006BD213  5D                        POP EBP
006BD214  C2 14 00                  RET 0x14
LAB_006bd217:
006BD217  5F                        POP EDI
006BD218  5E                        POP ESI
006BD219  B8 01 00 00 00            MOV EAX,0x1
006BD21E  5B                        POP EBX
006BD21F  8B E5                     MOV ESP,EBP
006BD221  5D                        POP EBP
006BD222  C2 14 00                  RET 0x14
