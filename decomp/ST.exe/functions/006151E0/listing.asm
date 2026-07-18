FUN_006151e0:
006151E0  55                        PUSH EBP
006151E1  8B EC                     MOV EBP,ESP
006151E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006151E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006151E9  53                        PUSH EBX
006151EA  56                        PUSH ESI
006151EB  8B F1                     MOV ESI,ECX
006151ED  57                        PUSH EDI
006151EE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006151F1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006151F4  50                        PUSH EAX
006151F5  51                        PUSH ECX
006151F6  52                        PUSH EDX
006151F7  57                        PUSH EDI
006151F8  8B CE                     MOV ECX,ESI
006151FA  E8 01 D7 DE FF            CALL 0x00402900
006151FF  8B D8                     MOV EBX,EAX
00615201  85 DB                     TEST EBX,EBX
00615203  0F 8E 11 01 00 00         JLE 0x0061531a
00615209  8B 86 D5 02 00 00         MOV EAX,dword ptr [ESI + 0x2d5]
0061520F  8D 48 FD                  LEA ECX,[EAX + -0x3]
00615212  3B F9                     CMP EDI,ECX
00615214  75 05                     JNZ 0x0061521b
00615216  83 FB 02                  CMP EBX,0x2
00615219  74 14                     JZ 0x0061522f
LAB_0061521b:
0061521B  83 C0 FE                  ADD EAX,-0x2
0061521E  3B F8                     CMP EDI,EAX
00615220  0F 85 FD 00 00 00         JNZ 0x00615323
00615226  83 FB 01                  CMP EBX,0x1
00615229  0F 8C F4 00 00 00         JL 0x00615323
LAB_0061522f:
0061522F  0F BF 96 CF 02 00 00      MOVSX EDX,word ptr [ESI + 0x2cf]
00615236  0F BF 86 CD 02 00 00      MOVSX EAX,word ptr [ESI + 0x2cd]
0061523D  0F BF 8E CB 02 00 00      MOVSX ECX,word ptr [ESI + 0x2cb]
00615244  6A 00                     PUSH 0x0
00615246  6A 00                     PUSH 0x0
00615248  6A 00                     PUSH 0x0
0061524A  52                        PUSH EDX
0061524B  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
00615252  50                        PUSH EAX
00615253  51                        PUSH ECX
00615254  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
0061525B  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
00615262  52                        PUSH EDX
00615263  50                        PUSH EAX
00615264  51                        PUSH ECX
00615265  57                        PUSH EDI
00615266  8B CE                     MOV ECX,ESI
00615268  E8 B3 F2 DE FF            CALL 0x00404520
0061526D  8B C8                     MOV ECX,EAX
0061526F  85 C9                     TEST ECX,ECX
00615271  0F 84 A3 00 00 00         JZ 0x0061531a
00615277  0F BF 86 CB 02 00 00      MOVSX EAX,word ptr [ESI + 0x2cb]
0061527E  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
00615285  2B C2                     SUB EAX,EDX
00615287  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061528A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061528D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615290  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615293  C1 E0 04                  SHL EAX,0x4
00615296  99                        CDQ
00615297  F7 F9                     IDIV ECX
00615299  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
006152A0  89 86 7C 02 00 00         MOV dword ptr [ESI + 0x27c],EAX
006152A6  0F BF 86 CD 02 00 00      MOVSX EAX,word ptr [ESI + 0x2cd]
006152AD  2B C2                     SUB EAX,EDX
006152AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152B5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152B8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152BB  C1 E0 04                  SHL EAX,0x4
006152BE  99                        CDQ
006152BF  F7 F9                     IDIV ECX
006152C1  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
006152C8  89 86 80 02 00 00         MOV dword ptr [ESI + 0x280],EAX
006152CE  0F BF 86 CF 02 00 00      MOVSX EAX,word ptr [ESI + 0x2cf]
006152D5  2B C2                     SUB EAX,EDX
006152D7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152DA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152DD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152E0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006152E3  C1 E0 04                  SHL EAX,0x4
006152E6  99                        CDQ
006152E7  F7 F9                     IDIV ECX
006152E9  8B 96 DD 02 00 00         MOV EDX,dword ptr [ESI + 0x2dd]
006152EF  89 86 84 02 00 00         MOV dword ptr [ESI + 0x284],EAX
006152F5  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
006152FC  2B C7                     SUB EAX,EDI
006152FE  C1 E0 02                  SHL EAX,0x2
00615301  89 4C 02 08               MOV dword ptr [EDX + EAX*0x1 + 0x8],ECX
00615305  8B 8E DD 02 00 00         MOV ECX,dword ptr [ESI + 0x2dd]
0061530B  C7 44 01 18 08 00 00 00   MOV dword ptr [ECX + EAX*0x1 + 0x18],0x8
00615313  C6 86 EA 02 00 00 01      MOV byte ptr [ESI + 0x2ea],0x1
LAB_0061531a:
0061531A  5F                        POP EDI
0061531B  8B C3                     MOV EAX,EBX
0061531D  5E                        POP ESI
0061531E  5B                        POP EBX
0061531F  5D                        POP EBP
00615320  C2 10 00                  RET 0x10
LAB_00615323:
00615323  5F                        POP EDI
00615324  5E                        POP ESI
00615325  33 C0                     XOR EAX,EAX
00615327  5B                        POP EBX
00615328  5D                        POP EBP
00615329  C2 10 00                  RET 0x10
