CPanelTy::PaintInfoBoat:
004FE960  55                        PUSH EBP
004FE961  8B EC                     MOV EBP,ESP
004FE963  83 EC 4C                  SUB ESP,0x4c
004FE966  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FE96B  53                        PUSH EBX
004FE96C  56                        PUSH ESI
004FE96D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004FE970  57                        PUSH EDI
004FE971  8D 55 B8                  LEA EDX,[EBP + -0x48]
004FE974  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004FE977  6A 00                     PUSH 0x0
004FE979  52                        PUSH EDX
004FE97A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004FE97D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE983  E8 68 EE 22 00            CALL 0x0072d7f0
004FE988  8B F0                     MOV ESI,EAX
004FE98A  83 C4 08                  ADD ESP,0x8
004FE98D  85 F6                     TEST ESI,ESI
004FE98F  0F 85 3C 03 00 00         JNZ 0x004fecd1
004FE995  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004FE998  8B 86 54 09 00 00         MOV EAX,dword ptr [ESI + 0x954]
004FE99E  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
004FE9A4  50                        PUSH EAX
004FE9A5  6A 01                     PUSH 0x1
004FE9A7  6A 00                     PUSH 0x0
004FE9A9  6A 00                     PUSH 0x0
004FE9AB  51                        PUSH ECX
004FE9AC  E8 78 48 F0 FF            CALL 0x00403229
004FE9B1  8B 96 58 09 00 00         MOV EDX,dword ptr [ESI + 0x958]
004FE9B7  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
004FE9BD  52                        PUSH EDX
004FE9BE  6A 01                     PUSH 0x1
004FE9C0  6A 00                     PUSH 0x0
004FE9C2  6A 00                     PUSH 0x0
004FE9C4  50                        PUSH EAX
004FE9C5  E8 5F 48 F0 FF            CALL 0x00403229
004FE9CA  8B 86 E2 02 00 00         MOV EAX,dword ptr [ESI + 0x2e2]
004FE9D0  83 C4 28                  ADD ESP,0x28
004FE9D3  85 C0                     TEST EAX,EAX
004FE9D5  74 09                     JZ 0x004fe9e0
004FE9D7  6A 00                     PUSH 0x0
004FE9D9  8B CE                     MOV ECX,ESI
004FE9DB  E8 EF 42 F0 FF            CALL 0x00402ccf
LAB_004fe9e0:
004FE9E0  8A 86 63 0B 00 00         MOV AL,byte ptr [ESI + 0xb63]
004FE9E6  B3 03                     MOV BL,0x3
004FE9E8  84 C0                     TEST AL,AL
004FE9EA  A0 4E 87 80 00            MOV AL,[0x0080874e]
004FE9EF  75 40                     JNZ 0x004fea31
004FE9F1  3A C3                     CMP AL,BL
004FE9F3  75 1E                     JNZ 0x004fea13
004FE9F5  8B 8E 78 09 00 00         MOV ECX,dword ptr [ESI + 0x978]
004FE9FB  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
004FEA01  51                        PUSH ECX
004FEA02  6A 06                     PUSH 0x6
004FEA04  6A 00                     PUSH 0x0
004FEA06  6A 00                     PUSH 0x0
004FEA08  52                        PUSH EDX
004FEA09  E8 1B 48 F0 FF            CALL 0x00403229
004FEA0E  83 C4 14                  ADD ESP,0x14
004FEA11  EB 64                     JMP 0x004fea77
LAB_004fea13:
004FEA13  8B 86 9E 02 00 00         MOV EAX,dword ptr [ESI + 0x29e]
004FEA19  6A 01                     PUSH 0x1
004FEA1B  50                        PUSH EAX
004FEA1C  E8 7F C9 20 00            CALL 0x0070b3a0
004FEA21  8B 8E 88 01 00 00         MOV ECX,dword ptr [ESI + 0x188]
004FEA27  50                        PUSH EAX
004FEA28  6A 01                     PUSH 0x1
004FEA2A  6A 00                     PUSH 0x0
004FEA2C  6A 00                     PUSH 0x0
004FEA2E  51                        PUSH ECX
004FEA2F  EB 3E                     JMP 0x004fea6f
LAB_004fea31:
004FEA31  3A C3                     CMP AL,BL
004FEA33  75 1E                     JNZ 0x004fea53
004FEA35  8B 96 80 09 00 00         MOV EDX,dword ptr [ESI + 0x980]
004FEA3B  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
004FEA41  52                        PUSH EDX
004FEA42  6A 06                     PUSH 0x6
004FEA44  6A 00                     PUSH 0x0
004FEA46  6A 00                     PUSH 0x0
004FEA48  50                        PUSH EAX
004FEA49  E8 DB 47 F0 FF            CALL 0x00403229
004FEA4E  83 C4 14                  ADD ESP,0x14
004FEA51  EB 24                     JMP 0x004fea77
LAB_004fea53:
004FEA53  8B 8E 9E 02 00 00         MOV ECX,dword ptr [ESI + 0x29e]
004FEA59  6A 00                     PUSH 0x0
004FEA5B  51                        PUSH ECX
004FEA5C  E8 3F C9 20 00            CALL 0x0070b3a0
004FEA61  8B 96 88 01 00 00         MOV EDX,dword ptr [ESI + 0x188]
004FEA67  50                        PUSH EAX
004FEA68  6A 01                     PUSH 0x1
004FEA6A  6A 00                     PUSH 0x0
004FEA6C  6A 00                     PUSH 0x0
004FEA6E  52                        PUSH EDX
LAB_004fea6f:
004FEA6F  E8 B5 47 F0 FF            CALL 0x00403229
004FEA74  83 C4 1C                  ADD ESP,0x1c
LAB_004fea77:
004FEA77  6A 01                     PUSH 0x1
004FEA79  8B CE                     MOV ECX,ESI
004FEA7B  E8 F7 4E F0 FF            CALL 0x00403977
004FEA80  80 BE 63 0B 00 00 02      CMP byte ptr [ESI + 0xb63],0x2
004FEA87  75 70                     JNZ 0x004feaf9
004FEA89  8B 86 95 0B 00 00         MOV EAX,dword ptr [ESI + 0xb95]
004FEA8F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
004FEA95  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004FEA98  51                        PUSH ECX
004FEA99  52                        PUSH EDX
004FEA9A  68 B9 36 00 00            PUSH 0x36b9
004FEA9F  E8 9C 16 1B 00            CALL 0x006b0140
004FEAA4  50                        PUSH EAX
004FEAA5  68 5C 24 7C 00            PUSH 0x7c245c
004FEAAA  68 3A F3 80 00            PUSH 0x80f33a
004FEAAF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004FEAB5  8B 86 58 09 00 00         MOV EAX,dword ptr [ESI + 0x958]
004FEABB  8B 96 84 01 00 00         MOV EDX,dword ptr [ESI + 0x184]
004FEAC1  83 C4 10                  ADD ESP,0x10
004FEAC4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004FEAC7  83 E9 04                  SUB ECX,0x4
004FEACA  6A 2D                     PUSH 0x2d
004FEACC  51                        PUSH ECX
004FEACD  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FEAD3  6A 0F                     PUSH 0xf
004FEAD5  6A 02                     PUSH 0x2
004FEAD7  6A 00                     PUSH 0x0
004FEAD9  52                        PUSH EDX
004FEADA  E8 B1 1F 21 00            CALL 0x00710a90
004FEADF  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FEAE5  6A FF                     PUSH -0x1
004FEAE7  6A FF                     PUSH -0x1
004FEAE9  6A 00                     PUSH 0x0
004FEAEB  6A FF                     PUSH -0x1
004FEAED  6A FE                     PUSH -0x2
004FEAEF  68 3A F3 80 00            PUSH 0x80f33a
004FEAF4  E8 77 30 21 00            CALL 0x00711b70
LAB_004feaf9:
004FEAF9  8A 86 63 0B 00 00         MOV AL,byte ptr [ESI + 0xb63]
004FEAFF  3C 01                     CMP AL,0x1
004FEB01  74 0C                     JZ 0x004feb0f
004FEB03  3C 04                     CMP AL,0x4
004FEB05  74 08                     JZ 0x004feb0f
004FEB07  3A C3                     CMP AL,BL
004FEB09  0F 85 40 01 00 00         JNZ 0x004fec4f
LAB_004feb0f:
004FEB0F  6A 01                     PUSH 0x1
004FEB11  8B CE                     MOV ECX,ESI
004FEB13  E8 AF 5D F0 FF            CALL 0x004048c7
004FEB18  6A 01                     PUSH 0x1
004FEB1A  8B CE                     MOV ECX,ESI
004FEB1C  E8 A3 2E F0 FF            CALL 0x004019c4
004FEB21  8B 86 66 0B 00 00         MOV EAX,dword ptr [ESI + 0xb66]
004FEB27  83 F8 07                  CMP EAX,0x7
004FEB2A  74 18                     JZ 0x004feb44
004FEB2C  83 F8 13                  CMP EAX,0x13
004FEB2F  74 13                     JZ 0x004feb44
004FEB31  83 F8 1B                  CMP EAX,0x1b
004FEB34  74 0E                     JZ 0x004feb44
004FEB36  6A 01                     PUSH 0x1
004FEB38  8B CE                     MOV ECX,ESI
004FEB3A  E8 55 3B F0 FF            CALL 0x00402694
004FEB3F  E9 F2 00 00 00            JMP 0x004fec36
LAB_004feb44:
004FEB44  8B 86 81 0B 00 00         MOV EAX,dword ptr [ESI + 0xb81]
004FEB4A  85 C0                     TEST EAX,EAX
004FEB4C  0F 84 E4 00 00 00         JZ 0x004fec36
004FEB52  8A 8E 85 0B 00 00         MOV CL,byte ptr [ESI + 0xb85]
004FEB58  51                        PUSH ECX
004FEB59  50                        PUSH EAX
004FEB5A  E8 96 6B F0 FF            CALL 0x004056f5
004FEB5F  8B 96 BE 02 00 00         MOV EDX,dword ptr [ESI + 0x2be]
004FEB65  50                        PUSH EAX
004FEB66  52                        PUSH EDX
004FEB67  E8 34 C8 20 00            CALL 0x0070b3a0
004FEB6C  50                        PUSH EAX
004FEB6D  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
004FEB73  6A 01                     PUSH 0x1
004FEB75  6A 31                     PUSH 0x31
004FEB77  6A 0B                     PUSH 0xb
004FEB79  50                        PUSH EAX
004FEB7A  E8 AA 46 F0 FF            CALL 0x00403229
004FEB7F  8B 8E 84 01 00 00         MOV ECX,dword ptr [ESI + 0x184]
004FEB85  83 C4 24                  ADD ESP,0x24
004FEB88  6A 00                     PUSH 0x0
004FEB8A  6A 21                     PUSH 0x21
004FEB8C  6A 07                     PUSH 0x7
004FEB8E  6A 31                     PUSH 0x31
004FEB90  6A 3B                     PUSH 0x3b
004FEB92  6A 00                     PUSH 0x0
004FEB94  51                        PUSH ECX
004FEB95  E8 D6 55 1B 00            CALL 0x006b4170
004FEB9A  8A 8E 86 0B 00 00         MOV CL,byte ptr [ESI + 0xb86]
004FEBA0  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
004FEBA3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FEBA6  25 FF 00 00 00            AND EAX,0xff
004FEBAB  8B D0                     MOV EDX,EAX
004FEBAD  C1 E2 05                  SHL EDX,0x5
004FEBB0  03 D0                     ADD EDX,EAX
004FEBB2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004FEBB7  F7 E2                     MUL EDX
004FEBB9  C1 EA 05                  SHR EDX,0x5
004FEBBC  84 C9                     TEST CL,CL
004FEBBE  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
004FEBC1  76 08                     JBE 0x004febcb
004FEBC3  84 D2                     TEST DL,DL
004FEBC5  75 04                     JNZ 0x004febcb
004FEBC7  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
LAB_004febcb:
004FEBCB  80 F9 46                  CMP CL,0x46
004FEBCE  72 04                     JC 0x004febd4
004FEBD0  33 D2                     XOR EDX,EDX
004FEBD2  EB 0B                     JMP 0x004febdf
LAB_004febd4:
004FEBD4  80 F9 14                  CMP CL,0x14
004FEBD7  1B D2                     SBB EDX,EDX
004FEBD9  83 E2 05                  AND EDX,0x5
004FEBDC  83 C2 05                  ADD EDX,0x5
LAB_004febdf:
004FEBDF  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
004FEBE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FEBE8  25 FF 00 00 00            AND EAX,0xff
004FEBED  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
004FEBF0  50                        PUSH EAX
004FEBF1  2B F8                     SUB EDI,EAX
004FEBF3  6A 05                     PUSH 0x5
004FEBF5  57                        PUSH EDI
004FEBF6  52                        PUSH EDX
004FEBF7  8B 96 84 01 00 00         MOV EDX,dword ptr [ESI + 0x184]
004FEBFD  6A 00                     PUSH 0x0
004FEBFF  51                        PUSH ECX
004FEC00  B9 52 00 00 00            MOV ECX,0x52
004FEC05  2B C8                     SUB ECX,EAX
004FEC07  51                        PUSH ECX
004FEC08  6A 3C                     PUSH 0x3c
004FEC0A  6A 00                     PUSH 0x0
004FEC0C  52                        PUSH EDX
004FEC0D  E8 DE 69 1B 00            CALL 0x006b55f0
004FEC12  8B 86 CA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ca]
004FEC18  6A 01                     PUSH 0x1
004FEC1A  50                        PUSH EAX
004FEC1B  E8 80 C7 20 00            CALL 0x0070b3a0
004FEC20  8B 8E 84 01 00 00         MOV ECX,dword ptr [ESI + 0x184]
004FEC26  50                        PUSH EAX
004FEC27  6A 06                     PUSH 0x6
004FEC29  6A 30                     PUSH 0x30
004FEC2B  6A 0A                     PUSH 0xa
004FEC2D  51                        PUSH ECX
004FEC2E  E8 F6 45 F0 FF            CALL 0x00403229
004FEC33  83 C4 1C                  ADD ESP,0x1c
LAB_004fec36:
004FEC36  38 1D 4E 87 80 00         CMP byte ptr [0x0080874e],BL
004FEC3C  75 11                     JNZ 0x004fec4f
004FEC3E  38 9E 6A 0B 00 00         CMP byte ptr [ESI + 0xb6a],BL
004FEC44  75 09                     JNZ 0x004fec4f
004FEC46  6A 01                     PUSH 0x1
004FEC48  8B CE                     MOV ECX,ESI
004FEC4A  E8 18 3A F0 FF            CALL 0x00402667
LAB_004fec4f:
004FEC4F  8B 86 48 01 00 00         MOV EAX,dword ptr [ESI + 0x148]
004FEC55  85 C0                     TEST EAX,EAX
004FEC57  7C 1A                     JL 0x004fec73
004FEC59  8B 96 94 00 00 00         MOV EDX,dword ptr [ESI + 0x94]
004FEC5F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004FEC62  52                        PUSH EDX
004FEC63  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
004FEC69  51                        PUSH ECX
004FEC6A  6A FF                     PUSH -0x1
004FEC6C  50                        PUSH EAX
004FEC6D  52                        PUSH EDX
004FEC6E  E8 CD 49 1B 00            CALL 0x006b3640
LAB_004fec73:
004FEC73  8B 86 4C 01 00 00         MOV EAX,dword ptr [ESI + 0x14c]
004FEC79  85 C0                     TEST EAX,EAX
004FEC7B  7C 19                     JL 0x004fec96
004FEC7D  8B 8E 98 00 00 00         MOV ECX,dword ptr [ESI + 0x98]
004FEC83  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
004FEC86  51                        PUSH ECX
004FEC87  52                        PUSH EDX
004FEC88  6A FF                     PUSH -0x1
004FEC8A  50                        PUSH EAX
004FEC8B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FEC90  50                        PUSH EAX
004FEC91  E8 AA 49 1B 00            CALL 0x006b3640
LAB_004fec96:
004FEC96  38 1D 4E 87 80 00         CMP byte ptr [0x0080874e],BL
004FEC9C  74 23                     JZ 0x004fecc1
004FEC9E  8B 86 50 01 00 00         MOV EAX,dword ptr [ESI + 0x150]
004FECA4  85 C0                     TEST EAX,EAX
004FECA6  7C 19                     JL 0x004fecc1
004FECA8  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
004FECAE  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
004FECB1  51                        PUSH ECX
004FECB2  52                        PUSH EDX
004FECB3  6A FF                     PUSH -0x1
004FECB5  50                        PUSH EAX
004FECB6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004FECBB  50                        PUSH EAX
004FECBC  E8 7F 49 1B 00            CALL 0x006b3640
LAB_004fecc1:
004FECC1  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004FECC4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FECCA  5F                        POP EDI
004FECCB  5E                        POP ESI
004FECCC  5B                        POP EBX
004FECCD  8B E5                     MOV ESP,EBP
004FECCF  5D                        POP EBP
004FECD0  C3                        RET
LAB_004fecd1:
004FECD1  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004FECD4  68 40 24 7C 00            PUSH 0x7c2440
004FECD9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FECDE  56                        PUSH ESI
004FECDF  6A 00                     PUSH 0x0
004FECE1  68 8A 00 00 00            PUSH 0x8a
004FECE6  68 CC 23 7C 00            PUSH 0x7c23cc
004FECEB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FECF1  E8 DA E7 1A 00            CALL 0x006ad4d0
004FECF6  83 C4 18                  ADD ESP,0x18
004FECF9  85 C0                     TEST EAX,EAX
004FECFB  74 01                     JZ 0x004fecfe
004FECFD  CC                        INT3
LAB_004fecfe:
004FECFE  68 8A 00 00 00            PUSH 0x8a
004FED03  68 CC 23 7C 00            PUSH 0x7c23cc
004FED08  6A 00                     PUSH 0x0
004FED0A  56                        PUSH ESI
004FED0B  E8 30 71 1A 00            CALL 0x006a5e40
004FED10  5F                        POP EDI
004FED11  5E                        POP ESI
004FED12  5B                        POP EBX
004FED13  8B E5                     MOV ESP,EBP
004FED15  5D                        POP EBP
004FED16  C3                        RET
