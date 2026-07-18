FUN_00697390:
00697390  55                        PUSH EBP
00697391  8B EC                     MOV EBP,ESP
00697393  83 EC 5C                  SUB ESP,0x5c
00697396  53                        PUSH EBX
00697397  56                        PUSH ESI
00697398  8B F1                     MOV ESI,ECX
0069739A  57                        PUSH EDI
0069739B  83 C8 FF                  OR EAX,0xffffffff
0069739E  8B 8E 2F 58 00 00         MOV ECX,dword ptr [ESI + 0x582f]
006973A4  8B BE 4F 58 00 00         MOV EDI,dword ptr [ESI + 0x584f]
006973AA  C1 E1 04                  SHL ECX,0x4
006973AD  8B D1                     MOV EDX,ECX
006973AF  C1 E9 02                  SHR ECX,0x2
006973B2  F3 AB                     STOSD.REP ES:EDI
006973B4  8B CA                     MOV ECX,EDX
006973B6  83 E1 03                  AND ECX,0x3
006973B9  F3 AA                     STOSB.REP ES:EDI
006973BB  8B 8E 2F 58 00 00         MOV ECX,dword ptr [ESI + 0x582f]
006973C1  8B BE 4B 58 00 00         MOV EDI,dword ptr [ESI + 0x584b]
006973C7  8B D1                     MOV EDX,ECX
006973C9  33 C0                     XOR EAX,EAX
006973CB  C1 E9 02                  SHR ECX,0x2
006973CE  F3 AB                     STOSD.REP ES:EDI
006973D0  8B CA                     MOV ECX,EDX
006973D2  83 E1 03                  AND ECX,0x3
006973D5  F3 AA                     STOSB.REP ES:EDI
006973D7  8B 86 33 58 00 00         MOV EAX,dword ptr [ESI + 0x5833]
006973DD  8B CE                     MOV ECX,ESI
006973DF  50                        PUSH EAX
006973E0  E8 66 E2 D6 FF            CALL 0x0040564b
006973E5  33 DB                     XOR EBX,EBX
LAB_006973e7:
006973E7  8B 86 2F 58 00 00         MOV EAX,dword ptr [ESI + 0x582f]
006973ED  33 FF                     XOR EDI,EDI
006973EF  85 C0                     TEST EAX,EAX
006973F1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006973F4  0F 8E 63 01 00 00         JLE 0x0069755d
LAB_006973fa:
006973FA  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006973FD  51                        PUSH ECX
006973FE  57                        PUSH EDI
006973FF  8B CE                     MOV ECX,ESI
00697401  E8 85 AC D6 FF            CALL 0x0040208b
00697406  8B 8E 33 58 00 00         MOV ECX,dword ptr [ESI + 0x5833]
0069740C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0069740F  8B C7                     MOV EAX,EDI
00697411  99                        CDQ
00697412  F7 F9                     IDIV ECX
00697414  8B C7                     MOV EAX,EDI
00697416  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00697419  99                        CDQ
0069741A  F7 F9                     IDIV ECX
0069741C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069741F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00697422  33 C0                     XOR EAX,EAX
00697424  3B C8                     CMP ECX,EAX
00697426  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00697429  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069742C  0F 8E D3 00 00 00         JLE 0x00697505
00697432  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00697435  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00697438:
00697438  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069743B  8B D3                     MOV EDX,EBX
0069743D  0F AF 96 2F 58 00 00      IMUL EDX,dword ptr [ESI + 0x582f]
00697444  8B 08                     MOV ECX,dword ptr [EAX]
00697446  8B 86 4F 58 00 00         MOV EAX,dword ptr [ESI + 0x584f]
0069744C  03 D1                     ADD EDX,ECX
0069744E  0F BF 04 50               MOVSX EAX,word ptr [EAX + EDX*0x2]
00697452  85 C0                     TEST EAX,EAX
00697454  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00697457  7C 56                     JL 0x006974af
00697459  8B BE 33 58 00 00         MOV EDI,dword ptr [ESI + 0x5833]
0069745F  8B C1                     MOV EAX,ECX
00697461  99                        CDQ
00697462  F7 FF                     IDIV EDI
00697464  8B C1                     MOV EAX,ECX
00697466  6A 00                     PUSH 0x0
00697468  53                        PUSH EBX
00697469  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0069746C  99                        CDQ
0069746D  F7 FF                     IDIV EDI
0069746F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00697472  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00697475  50                        PUSH EAX
00697476  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00697479  51                        PUSH ECX
0069747A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0069747D  52                        PUSH EDX
0069747E  50                        PUSH EAX
0069747F  51                        PUSH ECX
00697480  8B CE                     MOV ECX,ESI
00697482  E8 E6 DD D6 FF            CALL 0x0040526d
00697487  85 C0                     TEST EAX,EAX
00697489  74 24                     JZ 0x006974af
0069748B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069748E  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00697491  83 F8 01                  CMP EAX,0x1
00697494  89 54 85 C8               MOV dword ptr [EBP + EAX*0x4 + -0x38],EDX
00697498  75 0C                     JNZ 0x006974a6
0069749A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0069749D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006974A0  3B C1                     CMP EAX,ECX
006974A2  75 27                     JNZ 0x006974cb
006974A4  EB 09                     JMP 0x006974af
LAB_006974a6:
006974A6  40                        INC EAX
006974A7  83 F8 02                  CMP EAX,0x2
006974AA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006974AD  74 4C                     JZ 0x006974fb
LAB_006974af:
006974AF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006974B2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006974B5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006974B8  40                        INC EAX
006974B9  83 C2 04                  ADD EDX,0x4
006974BC  3B C1                     CMP EAX,ECX
006974BE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006974C1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006974C4  7D 35                     JGE 0x006974fb
006974C6  E9 6D FF FF FF            JMP 0x00697438
LAB_006974cb:
006974CB  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_006974d2:
006974D2  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006974D5  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006974D8  53                        PUSH EBX
006974D9  57                        PUSH EDI
006974DA  51                        PUSH ECX
006974DB  8B CE                     MOV ECX,ESI
006974DD  E8 74 CC D6 FF            CALL 0x00404156
006974E2  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
006974E6  75 63                     JNZ 0x0069754b
006974E8  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006974EB  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006974EE  3B C8                     CMP ECX,EAX
006974F0  74 59                     JZ 0x0069754b
006974F2  6A 01                     PUSH 0x1
006974F4  53                        PUSH EBX
006974F5  7D 4B                     JGE 0x00697542
006974F7  50                        PUSH EAX
006974F8  51                        PUSH ECX
006974F9  EB 49                     JMP 0x00697544
LAB_006974fb:
006974FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006974FE  85 C0                     TEST EAX,EAX
00697500  75 D0                     JNZ 0x006974d2
00697502  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_00697505:
00697505  8D 4D D8                  LEA ECX,[EBP + -0x28]
00697508  8D 55 D0                  LEA EDX,[EBP + -0x30]
0069750B  51                        PUSH ECX
0069750C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0069750F  8D 45 D4                  LEA EAX,[EBP + -0x2c]
00697512  52                        PUSH EDX
00697513  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00697516  50                        PUSH EAX
00697517  53                        PUSH EBX
00697518  51                        PUSH ECX
00697519  52                        PUSH EDX
0069751A  8B CE                     MOV ECX,ESI
0069751C  E8 C6 D1 D6 FF            CALL 0x004046e7
00697521  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00697524  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00697527  51                        PUSH ECX
00697528  50                        PUSH EAX
00697529  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0069752C  52                        PUSH EDX
0069752D  50                        PUSH EAX
0069752E  53                        PUSH EBX
0069752F  8B CE                     MOV ECX,ESI
00697531  E8 47 A5 D6 FF            CALL 0x00401a7d
00697536  53                        PUSH EBX
00697537  57                        PUSH EDI
00697538  50                        PUSH EAX
00697539  8B CE                     MOV ECX,ESI
0069753B  E8 16 CC D6 FF            CALL 0x00404156
00697540  EB 09                     JMP 0x0069754b
LAB_00697542:
00697542  51                        PUSH ECX
00697543  50                        PUSH EAX
LAB_00697544:
00697544  8B CE                     MOV ECX,ESI
00697546  E8 58 B1 D6 FF            CALL 0x004026a3
LAB_0069754b:
0069754B  8B 86 2F 58 00 00         MOV EAX,dword ptr [ESI + 0x582f]
00697551  47                        INC EDI
00697552  3B F8                     CMP EDI,EAX
00697554  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00697557  0F 8C 9D FE FF FF         JL 0x006973fa
LAB_0069755d:
0069755D  43                        INC EBX
0069755E  83 FB 06                  CMP EBX,0x6
00697561  0F 8C 80 FE FF FF         JL 0x006973e7
00697567  5F                        POP EDI
00697568  5E                        POP ESI
00697569  5B                        POP EBX
0069756A  8B E5                     MOV ESP,EBP
0069756C  5D                        POP EBP
0069756D  C3                        RET
