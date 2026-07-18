FUN_00637350:
00637350  55                        PUSH EBP
00637351  8B EC                     MOV EBP,ESP
00637353  83 EC 54                  SUB ESP,0x54
00637356  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00637359  53                        PUSH EBX
0063735A  56                        PUSH ESI
0063735B  57                        PUSH EDI
0063735C  85 C9                     TEST ECX,ECX
0063735E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00637365  B8 79 19 8C 02            MOV EAX,0x28c1979
0063736A  7C 10                     JL 0x0063737c
0063736C  F7 E9                     IMUL ECX
0063736E  D1 FA                     SAR EDX,0x1
00637370  8B C2                     MOV EAX,EDX
00637372  C1 E8 1F                  SHR EAX,0x1f
00637375  03 D0                     ADD EDX,EAX
00637377  0F BF F2                  MOVSX ESI,DX
0063737A  EB 0F                     JMP 0x0063738b
LAB_0063737c:
0063737C  F7 E9                     IMUL ECX
0063737E  D1 FA                     SAR EDX,0x1
00637380  8B CA                     MOV ECX,EDX
00637382  C1 E9 1F                  SHR ECX,0x1f
00637385  03 D1                     ADD EDX,ECX
00637387  0F BF F2                  MOVSX ESI,DX
0063738A  4E                        DEC ESI
LAB_0063738b:
0063738B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0063738E  B8 79 19 8C 02            MOV EAX,0x28c1979
00637393  85 C9                     TEST ECX,ECX
00637395  7C 10                     JL 0x006373a7
00637397  F7 E9                     IMUL ECX
00637399  D1 FA                     SAR EDX,0x1
0063739B  8B C2                     MOV EAX,EDX
0063739D  C1 E8 1F                  SHR EAX,0x1f
006373A0  03 D0                     ADD EDX,EAX
006373A2  0F BF CA                  MOVSX ECX,DX
006373A5  EB 0F                     JMP 0x006373b6
LAB_006373a7:
006373A7  F7 E9                     IMUL ECX
006373A9  D1 FA                     SAR EDX,0x1
006373AB  8B CA                     MOV ECX,EDX
006373AD  C1 E9 1F                  SHR ECX,0x1f
006373B0  03 D1                     ADD EDX,ECX
006373B2  0F BF CA                  MOVSX ECX,DX
006373B5  49                        DEC ECX
LAB_006373b6:
006373B6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006373B9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006373BE  85 D2                     TEST EDX,EDX
006373C0  7C 11                     JL 0x006373d3
006373C2  F7 EA                     IMUL EDX
006373C4  C1 FA 06                  SAR EDX,0x6
006373C7  8B C2                     MOV EAX,EDX
006373C9  C1 E8 1F                  SHR EAX,0x1f
006373CC  03 D0                     ADD EDX,EAX
006373CE  0F BF D2                  MOVSX EDX,DX
006373D1  EB 10                     JMP 0x006373e3
LAB_006373d3:
006373D3  F7 EA                     IMUL EDX
006373D5  C1 FA 06                  SAR EDX,0x6
006373D8  8B C2                     MOV EAX,EDX
006373DA  C1 E8 1F                  SHR EAX,0x1f
006373DD  03 D0                     ADD EDX,EAX
006373DF  0F BF D2                  MOVSX EDX,DX
006373E2  4A                        DEC EDX
LAB_006373e3:
006373E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006373E6  8B D9                     MOV EBX,ECX
006373E8  2B D8                     SUB EBX,EAX
006373EA  79 02                     JNS 0x006373ee
006373EC  33 DB                     XOR EBX,EBX
LAB_006373ee:
006373EE  8B FE                     MOV EDI,ESI
006373F0  2B F8                     SUB EDI,EAX
006373F2  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006373F5  79 07                     JNS 0x006373fe
006373F7  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006373fe:
006373FE  8D 7C 01 01               LEA EDI,[ECX + EAX*0x1 + 0x1]
00637402  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00637409  3B F9                     CMP EDI,ECX
0063740B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0063740E  7E 03                     JLE 0x00637413
00637410  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00637413:
00637413  8D 4C 06 01               LEA ECX,[ESI + EAX*0x1 + 0x1]
00637417  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0063741E  0F BF C6                  MOVSX EAX,SI
00637421  3B C8                     CMP ECX,EAX
00637423  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00637426  7E 03                     JLE 0x0063742b
00637428  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0063742b:
0063742B  8D 42 FF                  LEA EAX,[EDX + -0x1]
0063742E  85 C0                     TEST EAX,EAX
00637430  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00637433  7D 07                     JGE 0x0063743c
00637435  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0063743c:
0063743C  83 C2 02                  ADD EDX,0x2
0063743F  83 FA 05                  CMP EDX,0x5
00637442  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00637445  7E 07                     JLE 0x0063744e
00637447  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
LAB_0063744e:
0063744E  66 8B 55 20               MOV DX,word ptr [EBP + 0x20]
00637452  B9 07 00 00 00            MOV ECX,0x7
00637457  33 C0                     XOR EAX,EAX
00637459  8D 7D CC                  LEA EDI,[EBP + -0x34]
0063745C  F3 AB                     STOSD.REP ES:EDI
0063745E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00637461  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
00637465  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00637468  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0063746B  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
0063746F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00637472  66 89 55 D8               MOV word ptr [EBP + -0x28],DX
00637476  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00637479  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0063747C  8B CB                     MOV ECX,EBX
0063747E  3B D8                     CMP EBX,EAX
00637480  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00637483  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
00637486  0F 8D 33 02 00 00         JGE 0x006376bf
0063748C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0063748F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00637492:
00637492  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00637495  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
00637498  8B F8                     MOV EDI,EAX
0063749A  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
0063749D  0F 8D 0D 02 00 00         JGE 0x006376b0
LAB_006374a3:
006374A3  3B DA                     CMP EBX,EDX
006374A5  0F 8D F6 01 00 00         JGE 0x006376a1
LAB_006374ab:
006374AB  66 85 FF                  TEST DI,DI
006374AE  0F 8C D7 01 00 00         JL 0x0063768b
006374B4  66 3B FE                  CMP DI,SI
006374B7  0F 8D CE 01 00 00         JGE 0x0063768b
006374BD  66 85 C9                  TEST CX,CX
006374C0  0F 8C C5 01 00 00         JL 0x0063768b
006374C6  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
006374CD  0F 8D B8 01 00 00         JGE 0x0063768b
006374D3  66 85 DB                  TEST BX,BX
006374D6  0F 8C AF 01 00 00         JL 0x0063768b
006374DC  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
006374E3  0F 8D A2 01 00 00         JGE 0x0063768b
006374E9  0F BF C1                  MOVSX EAX,CX
006374EC  0F BF D6                  MOVSX EDX,SI
006374EF  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
006374F6  0F AF C2                  IMUL EAX,EDX
006374F9  0F BF D3                  MOVSX EDX,BX
006374FC  0F AF D6                  IMUL EDX,ESI
006374FF  03 C2                     ADD EAX,EDX
00637501  0F BF D7                  MOVSX EDX,DI
00637504  03 C2                     ADD EAX,EDX
00637506  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0063750C  8B 34 C2                  MOV ESI,dword ptr [EDX + EAX*0x8]
0063750F  85 F6                     TEST ESI,ESI
00637511  0F 84 74 01 00 00         JZ 0x0063768b
00637517  8B 06                     MOV EAX,dword ptr [ESI]
00637519  8B CE                     MOV ECX,ESI
0063751B  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00637521  85 C0                     TEST EAX,EAX
00637523  0F 84 5F 01 00 00         JZ 0x00637688
00637529  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0063752C  83 F8 08                  CMP EAX,0x8
0063752F  0F 83 53 01 00 00         JNC 0x00637688
00637535  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063753B  85 C9                     TEST ECX,ECX
0063753D  74 11                     JZ 0x00637550
0063753F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00637542  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0063754A  0F 83 38 01 00 00         JNC 0x00637688
LAB_00637550:
00637550  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00637556  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
00637559  84 C9                     TEST CL,CL
0063755B  88 45 24                  MOV byte ptr [EBP + 0x24],AL
0063755E  74 2E                     JZ 0x0063758e
00637560  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00637563  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00637566  25 FF 00 00 00            AND EAX,0xff
0063756B  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0063756E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00637571  25 FF 00 00 00            AND EAX,0xff
00637576  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00637579  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00637580  33 C0                     XOR EAX,EAX
00637582  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00637589  0F 95 C0                  SETNZ AL
0063758C  EB 7A                     JMP 0x00637608
LAB_0063758e:
0063758E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00637591  3A C1                     CMP AL,CL
00637593  74 68                     JZ 0x006375fd
00637595  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00637598  81 E1 FF 00 00 00         AND ECX,0xff
0063759E  25 FF 00 00 00            AND EAX,0xff
006375A3  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
006375AA  84 D2                     TEST DL,DL
006375AC  75 10                     JNZ 0x006375be
006375AE  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
006375B5  75 07                     JNZ 0x006375be
006375B7  B8 FE FF FF FF            MOV EAX,0xfffffffe
006375BC  EB 41                     JMP 0x006375ff
LAB_006375be:
006375BE  80 FA 01                  CMP DL,0x1
006375C1  75 0F                     JNZ 0x006375d2
006375C3  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
006375CB  75 05                     JNZ 0x006375d2
006375CD  83 C8 FF                  OR EAX,0xffffffff
006375D0  EB 2D                     JMP 0x006375ff
LAB_006375d2:
006375D2  84 D2                     TEST DL,DL
006375D4  75 11                     JNZ 0x006375e7
006375D6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
006375DE  75 07                     JNZ 0x006375e7
006375E0  B8 01 00 00 00            MOV EAX,0x1
006375E5  EB 18                     JMP 0x006375ff
LAB_006375e7:
006375E7  80 FA 01                  CMP DL,0x1
006375EA  75 11                     JNZ 0x006375fd
006375EC  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
006375F4  75 07                     JNZ 0x006375fd
006375F6  B8 02 00 00 00            MOV EAX,0x2
006375FB  EB 02                     JMP 0x006375ff
LAB_006375fd:
006375FD  33 C0                     XOR EAX,EAX
LAB_006375ff:
006375FF  33 C9                     XOR ECX,ECX
00637601  85 C0                     TEST EAX,EAX
00637603  0F 9C C1                  SETL CL
00637606  8B C1                     MOV EAX,ECX
LAB_00637608:
00637608  85 C0                     TEST EAX,EAX
0063760A  74 7C                     JZ 0x00637688
0063760C  8B 16                     MOV EDX,dword ptr [ESI]
0063760E  8B CE                     MOV ECX,ESI
00637610  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00637616  85 C0                     TEST EAX,EAX
00637618  74 6E                     JZ 0x00637688
0063761A  8D 45 22                  LEA EAX,[EBP + 0x22]
0063761D  8D 4D 12                  LEA ECX,[EBP + 0x12]
00637620  50                        PUSH EAX
00637621  8D 55 16                  LEA EDX,[EBP + 0x16]
00637624  51                        PUSH ECX
00637625  52                        PUSH EDX
00637626  8B CE                     MOV ECX,ESI
00637628  E8 B6 BB DC FF            CALL 0x004031e3
0063762D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00637630  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00637633  0F BF 55 12               MOVSX EDX,word ptr [EBP + 0x12]
00637637  50                        PUSH EAX
00637638  51                        PUSH ECX
00637639  0F BF 45 16               MOVSX EAX,word ptr [EBP + 0x16]
0063763D  52                        PUSH EDX
0063763E  50                        PUSH EAX
0063763F  E8 94 58 07 00            CALL 0x006aced8
00637644  83 C4 10                  ADD ESP,0x10
00637647  3D 8A 02 00 00            CMP EAX,0x28a
0063764C  7F 3A                     JG 0x00637688
0063764E  B9 08 00 00 00            MOV ECX,0x8
00637653  33 C0                     XOR EAX,EAX
00637655  8D 7D AC                  LEA EDI,[EBP + -0x54]
00637658  8D 55 CC                  LEA EDX,[EBP + -0x34]
0063765B  F3 AB                     STOSD.REP ES:EDI
0063765D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00637660  C7 45 B8 04 00 00 00      MOV dword ptr [EBP + -0x48],0x4
00637667  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0063766A  8D 4D AC                  LEA ECX,[EBP + -0x54]
0063766D  C7 45 BC 10 01 00 00      MOV dword ptr [EBP + -0x44],0x110
00637674  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00637677  8B 06                     MOV EAX,dword ptr [ESI]
00637679  51                        PUSH ECX
0063767A  8B CE                     MOV ECX,ESI
0063767C  FF 10                     CALL dword ptr [EAX]
0063767E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00637681  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00637684  40                        INC EAX
00637685  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00637688:
00637688  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
LAB_0063768b:
0063768B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0063768E  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00637695  43                        INC EBX
00637696  3B DA                     CMP EBX,EDX
00637698  0F 8C 0D FE FF FF         JL 0x006374ab
0063769E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_006376a1:
006376A1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006376A4  47                        INC EDI
006376A5  3B F8                     CMP EDI,EAX
006376A7  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006376AA  0F 8C F3 FD FF FF         JL 0x006374a3
LAB_006376b0:
006376B0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006376B3  41                        INC ECX
006376B4  3B C8                     CMP ECX,EAX
006376B6  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006376B9  0F 8C D3 FD FF FF         JL 0x00637492
LAB_006376bf:
006376BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006376C2  5F                        POP EDI
006376C3  5E                        POP ESI
006376C4  5B                        POP EBX
006376C5  8B E5                     MOV ESP,EBP
006376C7  5D                        POP EBP
006376C8  C3                        RET
