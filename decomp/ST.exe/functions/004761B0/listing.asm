FUN_004761b0:
004761B0  55                        PUSH EBP
004761B1  8B EC                     MOV EBP,ESP
004761B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004761B6  53                        PUSH EBX
004761B7  56                        PUSH ESI
004761B8  57                        PUSH EDI
004761B9  85 C0                     TEST EAX,EAX
004761BB  8B F1                     MOV ESI,ECX
004761BD  0F 84 85 04 00 00         JZ 0x00476648
004761C3  83 F8 01                  CMP EAX,0x1
004761C6  0F 84 7C 04 00 00         JZ 0x00476648
004761CC  8B 86 E8 05 00 00         MOV EAX,dword ptr [ESI + 0x5e8]
004761D2  85 C0                     TEST EAX,EAX
004761D4  0F 85 C4 03 00 00         JNZ 0x0047659e
004761DA  6A 02                     PUSH 0x2
004761DC  E8 FD CF F8 FF            CALL 0x004031de
004761E1  40                        INC EAX
004761E2  83 F8 04                  CMP EAX,0x4
004761E5  0F 87 A7 03 00 00         JA 0x00476592
switchD_004761eb::switchD:
004761EB  FF 24 85 24 68 47 00      JMP dword ptr [EAX*0x4 + 0x476824]
switchD_004761eb::caseD_0:
004761F2  68 E0 B0 7A 00            PUSH 0x7ab0e0
004761F7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004761FC  6A 00                     PUSH 0x0
004761FE  6A 00                     PUSH 0x0
00476200  68 1D 31 00 00            PUSH 0x311d
00476205  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047620A  E8 C1 72 23 00            CALL 0x006ad4d0
0047620F  83 C4 18                  ADD ESP,0x18
00476212  85 C0                     TEST EAX,EAX
00476214  74 01                     JZ 0x00476217
00476216  CC                        INT3
LAB_00476217:
00476217  5F                        POP EDI
00476218  5E                        POP ESI
00476219  B8 FF FF 00 00            MOV EAX,0xffff
0047621E  5B                        POP EBX
0047621F  5D                        POP EBP
00476220  C2 04 00                  RET 0x4
switchD_004761eb::caseD_1:
00476223  C7 86 E8 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5e8],0x1
0047622D  5F                        POP EDI
0047622E  5E                        POP ESI
0047622F  B8 02 00 00 00            MOV EAX,0x2
00476234  5B                        POP EBX
00476235  5D                        POP EBP
00476236  C2 04 00                  RET 0x4
switchD_004761eb::caseD_4:
00476239  66 8B 86 E2 05 00 00      MOV AX,word ptr [ESI + 0x5e2]
00476240  66 8B 8E E4 05 00 00      MOV CX,word ptr [ESI + 0x5e4]
00476247  66 8B 96 E6 05 00 00      MOV DX,word ptr [ESI + 0x5e6]
0047624E  66 89 86 DC 05 00 00      MOV word ptr [ESI + 0x5dc],AX
00476255  66 89 8E DE 05 00 00      MOV word ptr [ESI + 0x5de],CX
0047625C  66 89 96 E0 05 00 00      MOV word ptr [ESI + 0x5e0],DX
00476263  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047626A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0047626D  66 85 C0                  TEST AX,AX
00476270  7C 58                     JL 0x004762ca
00476272  66 3B C7                  CMP AX,DI
00476275  7D 53                     JGE 0x004762ca
00476277  66 85 C9                  TEST CX,CX
0047627A  7C 4E                     JL 0x004762ca
0047627C  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00476283  7D 45                     JGE 0x004762ca
00476285  66 85 D2                  TEST DX,DX
00476288  7C 40                     JL 0x004762ca
0047628A  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00476291  7D 37                     JGE 0x004762ca
00476293  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047629A  0F BF D2                  MOVSX EDX,DX
0047629D  0F AF DA                  IMUL EBX,EDX
004762A0  0F BF D7                  MOVSX EDX,DI
004762A3  0F BF F9                  MOVSX EDI,CX
004762A6  0F AF D7                  IMUL EDX,EDI
004762A9  03 DA                     ADD EBX,EDX
004762AB  0F BF D0                  MOVSX EDX,AX
004762AE  03 DA                     ADD EBX,EDX
004762B0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004762B6  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
004762BA  0F 85 06 01 00 00         JNZ 0x004763c6
004762C0  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004762C7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004762ca:
004762CA  66 85 C0                  TEST AX,AX
004762CD  0F 8C F6 00 00 00         JL 0x004763c9
004762D3  66 3B C7                  CMP AX,DI
004762D6  0F 8D ED 00 00 00         JGE 0x004763c9
004762DC  66 85 C9                  TEST CX,CX
004762DF  0F 8C E4 00 00 00         JL 0x004763c9
004762E5  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004762EC  0F 8D D7 00 00 00         JGE 0x004763c9
004762F2  66 85 D2                  TEST DX,DX
004762F5  0F 8C CE 00 00 00         JL 0x004763c9
004762FB  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00476302  0F 8D C1 00 00 00         JGE 0x004763c9
00476308  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0047630F  0F BF D9                  MOVSX EBX,CX
00476312  0F AF FB                  IMUL EDI,EBX
00476315  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
0047631C  0F BF D2                  MOVSX EDX,DX
0047631F  0F AF DA                  IMUL EBX,EDX
00476322  0F BF D0                  MOVSX EDX,AX
00476325  03 FB                     ADD EDI,EBX
00476327  03 FA                     ADD EDI,EDX
00476329  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0047632F  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
00476333  85 D2                     TEST EDX,EDX
00476335  0F 85 8B 00 00 00         JNZ 0x004763c6
0047633B  66 85 C0                  TEST AX,AX
0047633E  0F 8C 26 02 00 00         JL 0x0047656a
00476344  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047634B  66 3B C7                  CMP AX,DI
0047634E  0F 8D 16 02 00 00         JGE 0x0047656a
00476354  66 85 C9                  TEST CX,CX
00476357  0F 8C 0D 02 00 00         JL 0x0047656a
0047635D  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00476364  0F 8D 00 02 00 00         JGE 0x0047656a
0047636A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0047636D  66 85 D2                  TEST DX,DX
00476370  0F 8C F4 01 00 00         JL 0x0047656a
00476376  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0047637D  0F 8D E7 01 00 00         JGE 0x0047656a
00476383  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047638A  0F BF D2                  MOVSX EDX,DX
0047638D  0F AF DA                  IMUL EBX,EDX
00476390  0F BF D7                  MOVSX EDX,DI
00476393  0F BF F9                  MOVSX EDI,CX
00476396  0F AF D7                  IMUL EDX,EDI
00476399  03 DA                     ADD EBX,EDX
0047639B  0F BF D0                  MOVSX EDX,AX
0047639E  03 DA                     ADD EBX,EDX
004763A0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004763A6  8B 54 DA 04               MOV EDX,dword ptr [EDX + EBX*0x8 + 0x4]
004763AA  85 D2                     TEST EDX,EDX
004763AC  0F 84 B8 01 00 00         JZ 0x0047656a
004763B2  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
004763B5  83 FA 5A                  CMP EDX,0x5a
004763B8  74 0C                     JZ 0x004763c6
004763BA  81 FA AE 01 00 00         CMP EDX,0x1ae
004763C0  0F 85 A4 01 00 00         JNZ 0x0047656a
LAB_004763c6:
004763C6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004763c9:
004763C9  8D BE E6 05 00 00         LEA EDI,[ESI + 0x5e6]
004763CF  57                        PUSH EDI
004763D0  8D BE E4 05 00 00         LEA EDI,[ESI + 0x5e4]
004763D6  57                        PUSH EDI
004763D7  8D BE E2 05 00 00         LEA EDI,[ESI + 0x5e2]
004763DD  57                        PUSH EDI
004763DE  66 8B 7E 4B               MOV DI,word ptr [ESI + 0x4b]
004763E2  6A 01                     PUSH 0x1
004763E4  57                        PUSH EDI
004763E5  66 8B 7E 49               MOV DI,word ptr [ESI + 0x49]
004763E9  57                        PUSH EDI
004763EA  66 8B 7E 47               MOV DI,word ptr [ESI + 0x47]
004763EE  57                        PUSH EDI
004763EF  52                        PUSH EDX
004763F0  51                        PUSH ECX
004763F1  50                        PUSH EAX
004763F2  8B CE                     MOV ECX,ESI
004763F4  E8 0F E5 F8 FF            CALL 0x00404908
004763F9  85 C0                     TEST EAX,EAX
004763FB  0F 85 69 01 00 00         JNZ 0x0047656a
00476401  5F                        POP EDI
00476402  5E                        POP ESI
00476403  5B                        POP EBX
00476404  5D                        POP EBP
00476405  C2 04 00                  RET 0x4
switchD_004761eb::caseD_2:
00476408  66 8B 86 E2 05 00 00      MOV AX,word ptr [ESI + 0x5e2]
0047640F  66 8B 8E E4 05 00 00      MOV CX,word ptr [ESI + 0x5e4]
00476416  66 8B 96 E6 05 00 00      MOV DX,word ptr [ESI + 0x5e6]
0047641D  66 89 86 DC 05 00 00      MOV word ptr [ESI + 0x5dc],AX
00476424  66 85 C0                  TEST AX,AX
00476427  66 89 8E DE 05 00 00      MOV word ptr [ESI + 0x5de],CX
0047642E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00476431  66 89 96 E0 05 00 00      MOV word ptr [ESI + 0x5e0],DX
00476438  0F 8C EA 00 00 00         JL 0x00476528
0047643E  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00476445  0F 8D DD 00 00 00         JGE 0x00476528
0047644B  66 85 C9                  TEST CX,CX
0047644E  0F 8C D4 00 00 00         JL 0x00476528
00476454  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047645B  0F 8D C7 00 00 00         JGE 0x00476528
00476461  66 85 D2                  TEST DX,DX
00476464  0F 8C BE 00 00 00         JL 0x00476528
0047646A  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00476471  0F 8D B1 00 00 00         JGE 0x00476528
00476477  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
0047647E  0F BF D9                  MOVSX EBX,CX
00476481  0F AF FB                  IMUL EDI,EBX
00476484  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
0047648B  0F BF D2                  MOVSX EDX,DX
0047648E  0F AF DA                  IMUL EBX,EDX
00476491  0F BF D0                  MOVSX EDX,AX
00476494  03 FB                     ADD EDI,EBX
00476496  03 FA                     ADD EDI,EDX
00476498  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0047649E  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
004764A2  85 D2                     TEST EDX,EDX
004764A4  75 7F                     JNZ 0x00476525
004764A6  66 85 C0                  TEST AX,AX
004764A9  0F 8C B4 00 00 00         JL 0x00476563
004764AF  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004764B6  66 3B C7                  CMP AX,DI
004764B9  0F 8D A4 00 00 00         JGE 0x00476563
004764BF  66 85 C9                  TEST CX,CX
004764C2  0F 8C 9B 00 00 00         JL 0x00476563
004764C8  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004764CF  0F 8D 8E 00 00 00         JGE 0x00476563
004764D5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004764D8  66 85 D2                  TEST DX,DX
004764DB  0F 8C 82 00 00 00         JL 0x00476563
004764E1  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004764E8  7D 79                     JGE 0x00476563
004764EA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004764F1  0F BF D2                  MOVSX EDX,DX
004764F4  0F AF DA                  IMUL EBX,EDX
004764F7  0F BF D7                  MOVSX EDX,DI
004764FA  0F BF F9                  MOVSX EDI,CX
004764FD  0F AF D7                  IMUL EDX,EDI
00476500  03 DA                     ADD EBX,EDX
00476502  0F BF D0                  MOVSX EDX,AX
00476505  03 DA                     ADD EBX,EDX
00476507  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047650D  8B 54 DA 04               MOV EDX,dword ptr [EDX + EBX*0x8 + 0x4]
00476511  85 D2                     TEST EDX,EDX
00476513  74 4E                     JZ 0x00476563
00476515  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
00476518  83 FA 5A                  CMP EDX,0x5a
0047651B  74 08                     JZ 0x00476525
0047651D  81 FA AE 01 00 00         CMP EDX,0x1ae
00476523  75 3E                     JNZ 0x00476563
LAB_00476525:
00476525  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00476528:
00476528  8D BE E6 05 00 00         LEA EDI,[ESI + 0x5e6]
0047652E  57                        PUSH EDI
0047652F  8D BE E4 05 00 00         LEA EDI,[ESI + 0x5e4]
00476535  57                        PUSH EDI
00476536  8D BE E2 05 00 00         LEA EDI,[ESI + 0x5e2]
0047653C  57                        PUSH EDI
0047653D  66 8B 7E 4B               MOV DI,word ptr [ESI + 0x4b]
00476541  6A 01                     PUSH 0x1
00476543  57                        PUSH EDI
00476544  66 8B 7E 49               MOV DI,word ptr [ESI + 0x49]
00476548  57                        PUSH EDI
00476549  66 8B 7E 47               MOV DI,word ptr [ESI + 0x47]
0047654D  57                        PUSH EDI
0047654E  52                        PUSH EDX
0047654F  51                        PUSH ECX
00476550  50                        PUSH EAX
00476551  8B CE                     MOV ECX,ESI
00476553  E8 B0 E3 F8 FF            CALL 0x00404908
00476558  85 C0                     TEST EAX,EAX
0047655A  75 07                     JNZ 0x00476563
0047655C  5F                        POP EDI
0047655D  5E                        POP ESI
0047655E  5B                        POP EBX
0047655F  5D                        POP EBP
00476560  C2 04 00                  RET 0x4
LAB_00476563:
00476563  8B CE                     MOV ECX,ESI
00476565  E8 EB D2 F8 FF            CALL 0x00403855
LAB_0047656a:
0047656A  0F BF 86 E6 05 00 00      MOVSX EAX,word ptr [ESI + 0x5e6]
00476571  0F BF 8E E4 05 00 00      MOVSX ECX,word ptr [ESI + 0x5e4]
00476578  0F BF 96 E2 05 00 00      MOVSX EDX,word ptr [ESI + 0x5e2]
0047657F  50                        PUSH EAX
00476580  51                        PUSH ECX
00476581  52                        PUSH EDX
00476582  8B CE                     MOV ECX,ESI
00476584  E8 E2 E9 F8 FF            CALL 0x00404f6b
00476589  6A 00                     PUSH 0x0
0047658B  8B CE                     MOV ECX,ESI
0047658D  E8 4C CC F8 FF            CALL 0x004031de
switchD_004761eb::caseD_3:
00476592  5F                        POP EDI
00476593  5E                        POP ESI
00476594  B8 02 00 00 00            MOV EAX,0x2
00476599  5B                        POP EBX
0047659A  5D                        POP EBP
0047659B  C2 04 00                  RET 0x4
LAB_0047659e:
0047659E  83 F8 01                  CMP EAX,0x1
004765A1  0F 85 8C 00 00 00         JNZ 0x00476633
004765A7  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
004765AD  83 F8 05                  CMP EAX,0x5
004765B0  74 26                     JZ 0x004765d8
004765B2  83 F8 11                  CMP EAX,0x11
004765B5  74 0E                     JZ 0x004765c5
004765B7  83 F8 21                  CMP EAX,0x21
004765BA  75 2D                     JNZ 0x004765e9
004765BC  8B 06                     MOV EAX,dword ptr [ESI]
004765BE  68 CB 01 00 00            PUSH 0x1cb
004765C3  EB 1A                     JMP 0x004765df
LAB_004765c5:
004765C5  8B 16                     MOV EDX,dword ptr [ESI]
004765C7  68 4A 01 00 00            PUSH 0x14a
004765CC  6A 03                     PUSH 0x3
004765CE  8B CE                     MOV ECX,ESI
004765D0  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004765D6  EB 11                     JMP 0x004765e9
LAB_004765d8:
004765D8  8B 06                     MOV EAX,dword ptr [ESI]
004765DA  68 E6 00 00 00            PUSH 0xe6
LAB_004765df:
004765DF  6A 03                     PUSH 0x3
004765E1  8B CE                     MOV ECX,ESI
004765E3  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004765e9:
004765E9  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004765ED  8B 8E F3 06 00 00         MOV ECX,dword ptr [ESI + 0x6f3]
004765F3  6A 00                     PUSH 0x0
004765F5  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004765F9  6A FF                     PUSH -0x1
004765FB  6A 00                     PUSH 0x0
004765FD  83 EA 0A                  SUB EDX,0xa
00476600  51                        PUSH ECX
00476601  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
00476605  52                        PUSH EDX
00476606  33 D2                     XOR EDX,EDX
00476608  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0047660C  50                        PUSH EAX
0047660D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00476610  51                        PUSH ECX
00476611  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00476614  52                        PUSH EDX
00476615  8B 96 B6 07 00 00         MOV EDX,dword ptr [ESI + 0x7b6]
0047661B  50                        PUSH EAX
0047661C  51                        PUSH ECX
0047661D  52                        PUSH EDX
0047661E  E8 37 AA F8 FF            CALL 0x0040105a
00476623  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
00476629  83 C4 2C                  ADD ESP,0x2c
0047662C  48                        DEC EAX
0047662D  89 86 BE 07 00 00         MOV dword ptr [ESI + 0x7be],EAX
LAB_00476633:
00476633  8B 06                     MOV EAX,dword ptr [ESI]
00476635  8B CE                     MOV ECX,ESI
00476637  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047663D  F7 D8                     NEG EAX
0047663F  5F                        POP EDI
00476640  5E                        POP ESI
00476641  1B C0                     SBB EAX,EAX
00476643  5B                        POP EBX
00476644  5D                        POP EBP
00476645  C2 04 00                  RET 0x4
LAB_00476648:
00476648  B9 17 00 00 00            MOV ECX,0x17
0047664D  33 C0                     XOR EAX,EAX
0047664F  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00476655  F3 AB                     STOSD.REP ES:EDI
00476657  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
0047665D  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
00476663  85 C0                     TEST EAX,EAX
00476665  7F 09                     JG 0x00476670
00476667  5F                        POP EDI
00476668  5E                        POP ESI
00476669  33 C0                     XOR EAX,EAX
0047666B  5B                        POP EBX
0047666C  5D                        POP EBP
0047666D  C2 04 00                  RET 0x4
LAB_00476670:
00476670  66 8B 86 D8 03 00 00      MOV AX,word ptr [ESI + 0x3d8]
00476677  66 8B 8E DA 03 00 00      MOV CX,word ptr [ESI + 0x3da]
0047667E  66 8B 96 DC 03 00 00      MOV DX,word ptr [ESI + 0x3dc]
00476685  66 89 86 E2 05 00 00      MOV word ptr [ESI + 0x5e2],AX
0047668C  66 85 C0                  TEST AX,AX
0047668F  66 89 86 DC 05 00 00      MOV word ptr [ESI + 0x5dc],AX
00476696  66 89 8E E4 05 00 00      MOV word ptr [ESI + 0x5e4],CX
0047669D  66 89 8E DE 05 00 00      MOV word ptr [ESI + 0x5de],CX
004766A4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004766A7  66 89 96 E6 05 00 00      MOV word ptr [ESI + 0x5e6],DX
004766AE  66 89 96 E0 05 00 00      MOV word ptr [ESI + 0x5e0],DX
004766B5  0F 8C EA 00 00 00         JL 0x004767a5
004766BB  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004766C2  0F 8D DD 00 00 00         JGE 0x004767a5
004766C8  66 85 C9                  TEST CX,CX
004766CB  0F 8C D4 00 00 00         JL 0x004767a5
004766D1  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004766D8  0F 8D C7 00 00 00         JGE 0x004767a5
004766DE  66 85 D2                  TEST DX,DX
004766E1  0F 8C BE 00 00 00         JL 0x004767a5
004766E7  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004766EE  0F 8D B1 00 00 00         JGE 0x004767a5
004766F4  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004766FB  0F BF D9                  MOVSX EBX,CX
004766FE  0F AF FB                  IMUL EDI,EBX
00476701  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
00476708  0F BF D2                  MOVSX EDX,DX
0047670B  0F AF DA                  IMUL EBX,EDX
0047670E  0F BF D0                  MOVSX EDX,AX
00476711  03 FB                     ADD EDI,EBX
00476713  03 FA                     ADD EDI,EDX
00476715  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
0047671B  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
0047671F  85 D2                     TEST EDX,EDX
00476721  75 7F                     JNZ 0x004767a2
00476723  66 85 C0                  TEST AX,AX
00476726  0F 8C B4 00 00 00         JL 0x004767e0
0047672C  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00476733  66 3B C7                  CMP AX,DI
00476736  0F 8D A4 00 00 00         JGE 0x004767e0
0047673C  66 85 C9                  TEST CX,CX
0047673F  0F 8C 9B 00 00 00         JL 0x004767e0
00476745  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047674C  0F 8D 8E 00 00 00         JGE 0x004767e0
00476752  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00476755  66 85 D2                  TEST DX,DX
00476758  0F 8C 82 00 00 00         JL 0x004767e0
0047675E  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00476765  7D 79                     JGE 0x004767e0
00476767  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047676E  0F BF D2                  MOVSX EDX,DX
00476771  0F AF DA                  IMUL EBX,EDX
00476774  0F BF D7                  MOVSX EDX,DI
00476777  0F BF F9                  MOVSX EDI,CX
0047677A  0F AF D7                  IMUL EDX,EDI
0047677D  03 DA                     ADD EBX,EDX
0047677F  0F BF D0                  MOVSX EDX,AX
00476782  03 DA                     ADD EBX,EDX
00476784  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047678A  8B 54 DA 04               MOV EDX,dword ptr [EDX + EBX*0x8 + 0x4]
0047678E  85 D2                     TEST EDX,EDX
00476790  74 4E                     JZ 0x004767e0
00476792  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
00476795  83 FA 5A                  CMP EDX,0x5a
00476798  74 08                     JZ 0x004767a2
0047679A  81 FA AE 01 00 00         CMP EDX,0x1ae
004767A0  75 3E                     JNZ 0x004767e0
LAB_004767a2:
004767A2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_004767a5:
004767A5  8D BE E6 05 00 00         LEA EDI,[ESI + 0x5e6]
004767AB  57                        PUSH EDI
004767AC  8D BE E4 05 00 00         LEA EDI,[ESI + 0x5e4]
004767B2  57                        PUSH EDI
004767B3  8D BE E2 05 00 00         LEA EDI,[ESI + 0x5e2]
004767B9  57                        PUSH EDI
004767BA  66 8B 7E 4B               MOV DI,word ptr [ESI + 0x4b]
004767BE  6A 01                     PUSH 0x1
004767C0  57                        PUSH EDI
004767C1  66 8B 7E 49               MOV DI,word ptr [ESI + 0x49]
004767C5  57                        PUSH EDI
004767C6  66 8B 7E 47               MOV DI,word ptr [ESI + 0x47]
004767CA  57                        PUSH EDI
004767CB  52                        PUSH EDX
004767CC  51                        PUSH ECX
004767CD  50                        PUSH EAX
004767CE  8B CE                     MOV ECX,ESI
004767D0  E8 33 E1 F8 FF            CALL 0x00404908
004767D5  85 C0                     TEST EAX,EAX
004767D7  75 07                     JNZ 0x004767e0
004767D9  5F                        POP EDI
004767DA  5E                        POP ESI
004767DB  5B                        POP EBX
004767DC  5D                        POP EBP
004767DD  C2 04 00                  RET 0x4
LAB_004767e0:
004767E0  0F BF 86 E6 05 00 00      MOVSX EAX,word ptr [ESI + 0x5e6]
004767E7  0F BF 8E E4 05 00 00      MOVSX ECX,word ptr [ESI + 0x5e4]
004767EE  0F BF 96 E2 05 00 00      MOVSX EDX,word ptr [ESI + 0x5e2]
004767F5  50                        PUSH EAX
004767F6  51                        PUSH ECX
004767F7  52                        PUSH EDX
004767F8  8B CE                     MOV ECX,ESI
004767FA  C7 86 E8 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5e8],0x0
00476804  E8 62 E7 F8 FF            CALL 0x00404f6b
00476809  6A 00                     PUSH 0x0
0047680B  8B CE                     MOV ECX,ESI
0047680D  E8 CC C9 F8 FF            CALL 0x004031de
00476812  40                        INC EAX
00476813  5F                        POP EDI
00476814  F7 D8                     NEG EAX
00476816  1B C0                     SBB EAX,EAX
00476818  5E                        POP ESI
00476819  83 E0 03                  AND EAX,0x3
0047681C  5B                        POP EBX
0047681D  48                        DEC EAX
0047681E  5D                        POP EBP
0047681F  C2 04 00                  RET 0x4
