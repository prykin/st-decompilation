FUN_00615430:
00615430  55                        PUSH EBP
00615431  8B EC                     MOV EBP,ESP
00615433  83 EC 30                  SUB ESP,0x30
00615436  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00615439  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0061543C  53                        PUSH EBX
0061543D  56                        PUSH ESI
0061543E  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
00615441  8B D9                     MOV EBX,ECX
00615443  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00615446  57                        PUSH EDI
00615447  56                        PUSH ESI
00615448  50                        PUSH EAX
00615449  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0061544C  51                        PUSH ECX
0061544D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00615450  52                        PUSH EDX
00615451  50                        PUSH EAX
00615452  51                        PUSH ECX
00615453  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0061545A  E8 AE 7A 09 00            CALL 0x006acf0d
0061545F  8B F8                     MOV EDI,EAX
00615461  83 C4 18                  ADD ESP,0x18
00615464  85 FF                     TEST EDI,EDI
00615466  75 0C                     JNZ 0x00615474
00615468  5F                        POP EDI
00615469  5E                        POP ESI
0061546A  83 C8 FF                  OR EAX,0xffffffff
0061546D  5B                        POP EBX
0061546E  8B E5                     MOV ESP,EBP
00615470  5D                        POP EBP
00615471  C2 28 00                  RET 0x28
LAB_00615474:
00615474  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00615477  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061547A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0061547D  2B CA                     SUB ECX,EDX
0061547F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00615482  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00615485  2B D0                     SUB EDX,EAX
00615487  8B C6                     MOV EAX,ESI
00615489  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0061548C  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
00615490  2B C6                     SUB EAX,ESI
00615492  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
00615495  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
00615499  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061549C  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006154A0  03 C2                     ADD EAX,EDX
006154A2  03 C1                     ADD EAX,ECX
006154A4  99                        CDQ
006154A5  F7 FF                     IDIV EDI
006154A7  8B C8                     MOV ECX,EAX
006154A9  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006154AC  0F AF C8                  IMUL ECX,EAX
006154AF  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006154B4  F7 E9                     IMUL ECX
006154B6  C1 FA 0C                  SAR EDX,0xc
006154B9  8B C2                     MOV EAX,EDX
006154BB  B9 10 27 00 00            MOV ECX,0x2710
006154C0  C1 E8 1F                  SHR EAX,0x1f
006154C3  03 D0                     ADD EDX,EAX
006154C5  2B CA                     SUB ECX,EDX
006154C7  51                        PUSH ECX
006154C8  E8 67 2E 0B 00            CALL 0x006c8334
006154CD  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006154D0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006154D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006154D6  8D 34 C5 00 00 00 00      LEA ESI,[EAX*0x8 + 0x0]
006154DD  2B F0                     SUB ESI,EAX
006154DF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006154E2  0F AF C1                  IMUL EAX,ECX
006154E5  99                        CDQ
006154E6  F7 FF                     IDIV EDI
006154E8  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
006154EE  C1 E6 02                  SHL ESI,0x2
006154F1  89 44 32 0C               MOV dword ptr [EDX + ESI*0x1 + 0xc],EAX
006154F5  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006154F8  0F AF C1                  IMUL EAX,ECX
006154FB  99                        CDQ
006154FC  F7 FF                     IDIV EDI
006154FE  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
00615504  89 44 32 10               MOV dword ptr [EDX + ESI*0x1 + 0x10],EAX
00615508  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061550B  0F AF C1                  IMUL EAX,ECX
0061550E  99                        CDQ
0061550F  F7 FF                     IDIV EDI
00615511  8B 8B DD 02 00 00         MOV ECX,dword ptr [EBX + 0x2dd]
00615517  89 44 31 14               MOV dword ptr [ECX + ESI*0x1 + 0x14],EAX
0061551B  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
00615521  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00615524  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
00615527  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0061552A  51                        PUSH ECX
0061552B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0061552E  52                        PUSH EDX
0061552F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00615532  51                        PUSH ECX
00615533  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00615536  52                        PUSH EDX
00615537  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0061553A  51                        PUSH ECX
0061553B  52                        PUSH EDX
0061553C  E8 CC 79 09 00            CALL 0x006acf0d
00615541  8B C8                     MOV ECX,EAX
00615543  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
00615549  83 C4 1C                  ADD ESP,0x1c
0061554C  8D 54 30 0C               LEA EDX,[EAX + ESI*0x1 + 0xc]
00615550  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00615553  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
00615556  2B 02                     SUB EAX,dword ptr [EDX]
00615558  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061555B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061555E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615561  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615564  C1 E0 04                  SHL EAX,0x4
00615567  99                        CDQ
00615568  F7 F9                     IDIV ECX
0061556A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0061556D  89 02                     MOV dword ptr [EDX],EAX
0061556F  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
00615575  8D 54 30 10               LEA EDX,[EAX + ESI*0x1 + 0x10]
00615579  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0061557C  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0061557F  2B 02                     SUB EAX,dword ptr [EDX]
00615581  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615584  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00615587  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061558A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061558D  C1 E0 04                  SHL EAX,0x4
00615590  99                        CDQ
00615591  F7 F9                     IDIV ECX
00615593  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00615596  89 02                     MOV dword ptr [EDX],EAX
00615598  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
0061559E  8D 54 30 14               LEA EDX,[EAX + ESI*0x1 + 0x14]
006155A2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006155A5  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006155A8  2B 02                     SUB EAX,dword ptr [EDX]
006155AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006155AD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006155B0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006155B3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006155B6  C1 E0 04                  SHL EAX,0x4
006155B9  99                        CDQ
006155BA  F7 F9                     IDIV ECX
006155BC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006155BF  89 01                     MOV dword ptr [ECX],EAX
006155C1  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
006155C7  C7 44 32 18 08 00 00 00   MOV dword ptr [EDX + ESI*0x1 + 0x18],0x8
006155CF  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
006155D5  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
006155D9  89 7C 30 08               MOV dword ptr [EAX + ESI*0x1 + 0x8],EDI
006155DD  8B 8B DD 02 00 00         MOV ECX,dword ptr [EBX + 0x2dd]
006155E3  66 89 14 31               MOV word ptr [ECX + ESI*0x1],DX
006155E7  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
006155ED  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
006155F1  66 89 4C 30 02            MOV word ptr [EAX + ESI*0x1 + 0x2],CX
006155F6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006155F9  8B 93 DD 02 00 00         MOV EDX,dword ptr [EBX + 0x2dd]
006155FF  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
00615603  0F AF CF                  IMUL ECX,EDI
00615606  66 89 44 32 04            MOV word ptr [EDX + ESI*0x1 + 0x4],AX
0061560B  33 C0                     XOR EAX,EAX
0061560D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00615610  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00615613  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00615616  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00615619  B8 85 1D D9 6F            MOV EAX,0x6fd91d85
0061561E  D1 E2                     SHL EDX,0x1
00615620  F7 EA                     IMUL EDX
00615622  C1 FA 12                  SAR EDX,0x12
00615625  8B C2                     MOV EAX,EDX
00615627  C1 E8 1F                  SHR EAX,0x1f
0061562A  03 D0                     ADD EDX,EAX
0061562C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061562F  0F AF C7                  IMUL EAX,EDI
00615632  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00615635  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00615638  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061563B  B8 85 1D D9 6F            MOV EAX,0x6fd91d85
00615640  D1 E2                     SHL EDX,0x1
00615642  F7 EA                     IMUL EDX
00615644  C1 FA 12                  SAR EDX,0x12
00615647  8B C2                     MOV EAX,EDX
00615649  C1 E8 1F                  SHR EAX,0x1f
0061564C  03 D0                     ADD EDX,EAX
0061564E  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
00615655  2B C1                     SUB EAX,ECX
00615657  8B F2                     MOV ESI,EDX
00615659  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0061565C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0061565F  B8 85 1D D9 6F            MOV EAX,0x6fd91d85
00615664  D1 E1                     SHL ECX,0x1
00615666  F7 E9                     IMUL ECX
00615668  C1 FA 12                  SAR EDX,0x12
0061566B  8B CA                     MOV ECX,EDX
0061566D  8B C6                     MOV EAX,ESI
0061566F  C1 E9 1F                  SHR ECX,0x1f
00615672  33 F6                     XOR ESI,ESI
00615674  03 D1                     ADD EDX,ECX
00615676  3B C6                     CMP EAX,ESI
00615678  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0061567B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0061567E  7D 03                     JGE 0x00615683
00615680  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_00615683:
00615683  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00615686  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
00615689  B8 E1 83 0F 3E            MOV EAX,0x3e0f83e1
0061568E  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00615691  F7 EF                     IMUL EDI
00615693  C1 FA 03                  SAR EDX,0x3
00615696  8B C2                     MOV EAX,EDX
00615698  C1 E8 1F                  SHR EAX,0x1f
0061569B  03 D0                     ADD EDX,EAX
0061569D  8B FA                     MOV EDI,EDX
0061569F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006156A2  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
006156A9  50                        PUSH EAX
006156AA  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006156AD  E8 BE 55 09 00            CALL 0x006aac70
006156B2  57                        PUSH EDI
006156B3  50                        PUSH EAX
006156B4  8D 4D E0                  LEA ECX,[EBP + -0x20]
006156B7  6A 04                     PUSH 0x4
006156B9  8D 55 D0                  LEA EDX,[EBP + -0x30]
006156BC  51                        PUSH ECX
006156BD  52                        PUSH EDX
006156BE  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006156C1  E8 76 04 DF FF            CALL 0x00405b3c
006156C6  85 C0                     TEST EAX,EAX
006156C8  0F 85 95 00 00 00         JNZ 0x00615763
006156CE  8B 83 E5 02 00 00         MOV EAX,dword ptr [EBX + 0x2e5]
006156D4  8D B3 E5 02 00 00         LEA ESI,[EBX + 0x2e5]
006156DA  85 C0                     TEST EAX,EAX
006156DC  74 67                     JZ 0x00615745
006156DE  39 BB E1 02 00 00         CMP dword ptr [EBX + 0x2e1],EDI
006156E4  7C 3B                     JL 0x00615721
006156E6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006156E9  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006156EC  8B F8                     MOV EDI,EAX
006156EE  8B C1                     MOV EAX,ECX
006156F0  C1 E9 02                  SHR ECX,0x2
006156F3  F3 A5                     MOVSD.REP ES:EDI,ESI
006156F5  8B C8                     MOV ECX,EAX
006156F7  8D 55 2C                  LEA EDX,[EBP + 0x2c]
006156FA  83 E1 03                  AND ECX,0x3
006156FD  52                        PUSH EDX
006156FE  F3 A4                     MOVSB.REP ES:EDI,ESI
00615700  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00615703  89 8B E1 02 00 00         MOV dword ptr [EBX + 0x2e1],ECX
00615709  E8 52 59 09 00            CALL 0x006ab060
0061570E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00615715  5F                        POP EDI
00615716  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00615719  5E                        POP ESI
0061571A  5B                        POP EBX
0061571B  8B E5                     MOV ESP,EBP
0061571D  5D                        POP EBP
0061571E  C2 28 00                  RET 0x28
LAB_00615721:
00615721  56                        PUSH ESI
00615722  E8 39 59 09 00            CALL 0x006ab060
00615727  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0061572A  89 BB E1 02 00 00         MOV dword ptr [EBX + 0x2e1],EDI
00615730  89 06                     MOV dword ptr [ESI],EAX
00615732  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00615739  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061573C  5F                        POP EDI
0061573D  5E                        POP ESI
0061573E  5B                        POP EBX
0061573F  8B E5                     MOV ESP,EBP
00615741  5D                        POP EBP
00615742  C2 28 00                  RET 0x28
LAB_00615745:
00615745  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00615748  89 BB E1 02 00 00         MOV dword ptr [EBX + 0x2e1],EDI
0061574E  89 0E                     MOV dword ptr [ESI],ECX
00615750  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00615757  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061575A  5F                        POP EDI
0061575B  5E                        POP ESI
0061575C  5B                        POP EBX
0061575D  8B E5                     MOV ESP,EBP
0061575F  5D                        POP EBP
00615760  C2 28 00                  RET 0x28
LAB_00615763:
00615763  39 75 2C                  CMP dword ptr [EBP + 0x2c],ESI
00615766  74 09                     JZ 0x00615771
00615768  8D 55 2C                  LEA EDX,[EBP + 0x2c]
0061576B  52                        PUSH EDX
0061576C  E8 EF 58 09 00            CALL 0x006ab060
LAB_00615771:
00615771  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00615774  5F                        POP EDI
00615775  5E                        POP ESI
00615776  5B                        POP EBX
00615777  8B E5                     MOV ESP,EBP
00615779  5D                        POP EBP
0061577A  C2 28 00                  RET 0x28
