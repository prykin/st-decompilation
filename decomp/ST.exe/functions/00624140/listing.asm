FUN_00624140:
00624140  55                        PUSH EBP
00624141  8B EC                     MOV EBP,ESP
00624143  83 EC 08                  SUB ESP,0x8
00624146  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00624149  53                        PUSH EBX
0062414A  56                        PUSH ESI
0062414B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062414E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00624151  57                        PUSH EDI
00624152  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00624155  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00624158  85 F6                     TEST ESI,ESI
0062415A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00624161  89 08                     MOV dword ptr [EAX],ECX
00624163  0F 8C EA 02 00 00         JL 0x00624453
00624169  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0062416C  85 DB                     TEST EBX,EBX
0062416E  0F 8C DF 02 00 00         JL 0x00624453
00624174  85 FF                     TEST EDI,EDI
00624176  0F 8C DB 02 00 00         JL 0x00624457
0062417C  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
00624183  3B F2                     CMP ESI,EDX
00624185  0F 8D C8 02 00 00         JGE 0x00624453
0062418B  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00624192  3B D9                     CMP EBX,ECX
00624194  0F 8D B9 02 00 00         JGE 0x00624453
0062419A  83 FF 05                  CMP EDI,0x5
0062419D  0F 8D B0 02 00 00         JGE 0x00624453
006241A3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006241A9  57                        PUSH EDI
006241AA  53                        PUSH EBX
006241AB  56                        PUSH ESI
006241AC  E8 8A 0B DE FF            CALL 0x00404d3b
006241B1  85 C0                     TEST EAX,EAX
006241B3  0F 85 C3 02 00 00         JNZ 0x0062447c
006241B9  66 85 F6                  TEST SI,SI
006241BC  0F 8C 81 01 00 00         JL 0x00624343
006241C2  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
006241C8  66 3B F0                  CMP SI,AX
006241CB  0F 8D 72 01 00 00         JGE 0x00624343
006241D1  66 85 DB                  TEST BX,BX
006241D4  0F 8C 69 01 00 00         JL 0x00624343
006241DA  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
006241E1  0F 8D 5C 01 00 00         JGE 0x00624343
006241E7  66 85 FF                  TEST DI,DI
006241EA  0F 8C 53 01 00 00         JL 0x00624343
006241F0  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
006241F7  0F 8D 46 01 00 00         JGE 0x00624343
006241FD  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00624204  0F BF CF                  MOVSX ECX,DI
00624207  0F AF D1                  IMUL EDX,ECX
0062420A  0F BF C0                  MOVSX EAX,AX
0062420D  0F BF CB                  MOVSX ECX,BX
00624210  0F AF C1                  IMUL EAX,ECX
00624213  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00624219  03 D0                     ADD EDX,EAX
0062421B  0F BF C6                  MOVSX EAX,SI
0062421E  03 D0                     ADD EDX,EAX
00624220  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
00624224  0F 84 19 01 00 00         JZ 0x00624343
0062422A  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0062422D  85 C0                     TEST EAX,EAX
0062422F  0F 8E E1 00 00 00         JLE 0x00624316
00624235  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00624238  66 8B 46 34               MOV AX,word ptr [ESI + 0x34]
0062423C  66 85 C0                  TEST AX,AX
0062423F  0F BF C8                  MOVSX ECX,AX
00624242  B8 79 19 8C 02            MOV EAX,0x28c1979
00624247  7C 10                     JL 0x00624259
00624249  F7 E9                     IMUL ECX
0062424B  D1 FA                     SAR EDX,0x1
0062424D  8B C2                     MOV EAX,EDX
0062424F  C1 E8 1F                  SHR EAX,0x1f
00624252  03 D0                     ADD EDX,EAX
00624254  0F BF C2                  MOVSX EAX,DX
00624257  EB 0F                     JMP 0x00624268
LAB_00624259:
00624259  F7 E9                     IMUL ECX
0062425B  D1 FA                     SAR EDX,0x1
0062425D  8B CA                     MOV ECX,EDX
0062425F  C1 E9 1F                  SHR ECX,0x1f
00624262  03 D1                     ADD EDX,ECX
00624264  0F BF C2                  MOVSX EAX,DX
00624267  48                        DEC EAX
LAB_00624268:
00624268  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0062426C  3B C2                     CMP EAX,EDX
0062426E  75 76                     JNZ 0x006242e6
00624270  66 8B 46 36               MOV AX,word ptr [ESI + 0x36]
00624274  66 85 C0                  TEST AX,AX
00624277  0F BF C8                  MOVSX ECX,AX
0062427A  B8 79 19 8C 02            MOV EAX,0x28c1979
0062427F  7C 10                     JL 0x00624291
00624281  F7 E9                     IMUL ECX
00624283  D1 FA                     SAR EDX,0x1
00624285  8B C2                     MOV EAX,EDX
00624287  C1 E8 1F                  SHR EAX,0x1f
0062428A  03 D0                     ADD EDX,EAX
0062428C  0F BF C2                  MOVSX EAX,DX
0062428F  EB 0F                     JMP 0x006242a0
LAB_00624291:
00624291  F7 E9                     IMUL ECX
00624293  D1 FA                     SAR EDX,0x1
00624295  8B CA                     MOV ECX,EDX
00624297  C1 E9 1F                  SHR ECX,0x1f
0062429A  03 D1                     ADD EDX,ECX
0062429C  0F BF C2                  MOVSX EAX,DX
0062429F  48                        DEC EAX
LAB_006242a0:
006242A0  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
006242A4  3B C2                     CMP EAX,EDX
006242A6  75 3E                     JNZ 0x006242e6
006242A8  66 8B 46 38               MOV AX,word ptr [ESI + 0x38]
006242AC  66 85 C0                  TEST AX,AX
006242AF  0F BF C8                  MOVSX ECX,AX
006242B2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006242B7  7C 11                     JL 0x006242ca
006242B9  F7 E9                     IMUL ECX
006242BB  C1 FA 06                  SAR EDX,0x6
006242BE  8B C2                     MOV EAX,EDX
006242C0  C1 E8 1F                  SHR EAX,0x1f
006242C3  03 D0                     ADD EDX,EAX
006242C5  0F BF C2                  MOVSX EAX,DX
006242C8  EB 10                     JMP 0x006242da
LAB_006242ca:
006242CA  F7 E9                     IMUL ECX
006242CC  C1 FA 06                  SAR EDX,0x6
006242CF  8B CA                     MOV ECX,EDX
006242D1  C1 E9 1F                  SHR ECX,0x1f
006242D4  03 D1                     ADD EDX,ECX
006242D6  0F BF C2                  MOVSX EAX,DX
006242D9  48                        DEC EAX
LAB_006242da:
006242DA  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
006242DE  3B C2                     CMP EAX,EDX
006242E0  0F 84 96 01 00 00         JZ 0x0062447c
LAB_006242e6:
006242E6  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
006242E9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006242EC  8D BC C7 97 00 00 00      LEA EDI,[EDI + EAX*0x8 + 0x97]
006242F3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006242F6  3B C7                     CMP EAX,EDI
006242F8  0F 8C 7E 01 00 00         JL 0x0062447c
006242FE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00624301  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
00624308  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062430B  89 39                     MOV dword ptr [ECX],EDI
0062430D  5F                        POP EDI
0062430E  5E                        POP ESI
0062430F  5B                        POP EBX
00624310  8B E5                     MOV ESP,EBP
00624312  5D                        POP EBP
00624313  C2 20 00                  RET 0x20
LAB_00624316:
00624316  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00624319  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0062431C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0062431F  8D 7C D7 32               LEA EDI,[EDI + EDX*0x8 + 0x32]
00624323  3B C7                     CMP EAX,EDI
00624325  0F 8F 51 01 00 00         JG 0x0062447c
0062432B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062432E  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
00624335  89 38                     MOV dword ptr [EAX],EDI
00624337  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062433A  5F                        POP EDI
0062433B  5E                        POP ESI
0062433C  5B                        POP EBX
0062433D  8B E5                     MOV ESP,EBP
0062433F  5D                        POP EBP
00624340  C2 20 00                  RET 0x20
LAB_00624343:
00624343  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00624346  8D 55 10                  LEA EDX,[EBP + 0x10]
00624349  52                        PUSH EDX
0062434A  B8 79 19 8C 02            MOV EAX,0x28c1979
0062434F  8B 89 11 02 00 00         MOV ECX,dword ptr [ECX + 0x211]
00624355  57                        PUSH EDI
00624356  8B B1 80 03 00 00         MOV ESI,dword ptr [ECX + 0x380]
0062435C  8B D6                     MOV EDX,ESI
0062435E  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
00624362  0F AF 55 18               IMUL EDX,dword ptr [EBP + 0x18]
00624366  F7 EA                     IMUL EDX
00624368  D1 FA                     SAR EDX,0x1
0062436A  8B C2                     MOV EAX,EDX
0062436C  C1 E8 1F                  SHR EAX,0x1f
0062436F  03 D0                     ADD EDX,EAX
00624371  B8 79 19 8C 02            MOV EAX,0x28c1979
00624376  52                        PUSH EDX
00624377  F7 EE                     IMUL ESI
00624379  D1 FA                     SAR EDX,0x1
0062437B  8B C2                     MOV EAX,EDX
0062437D  C1 E8 1F                  SHR EAX,0x1f
00624380  03 D0                     ADD EDX,EAX
00624382  52                        PUSH EDX
00624383  E8 88 EF 0B 00            CALL 0x006e3310
00624388  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0062438E  E8 F5 9E 10 00            CALL 0x0072e288
00624393  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00624396  0F BF D8                  MOVSX EBX,AX
00624399  8D 47 01                  LEA EAX,[EDI + 0x1]
0062439C  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
0062439F  3B C8                     CMP ECX,EAX
006243A1  7F 03                     JG 0x006243a6
006243A3  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
LAB_006243a6:
006243A6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006243A9  8D 34 B6                  LEA ESI,[ESI + ESI*0x4]
006243AC  C1 E6 03                  SHL ESI,0x3
006243AF  85 D2                     TEST EDX,EDX
006243B1  7D 5A                     JGE 0x0062440d
006243B3  39 5D 1C                  CMP dword ptr [EBP + 0x1c],EBX
006243B6  0F 8F C0 00 00 00         JG 0x0062447c
006243BC  3B C8                     CMP ECX,EAX
006243BE  7F 1E                     JG 0x006243de
006243C0  83 F8 05                  CMP EAX,0x5
006243C3  7D 19                     JGE 0x006243de
006243C5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006243C8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006243CB  47                        INC EDI
006243CC  57                        PUSH EDI
006243CD  51                        PUSH ECX
006243CE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006243D4  52                        PUSH EDX
006243D5  E8 61 09 DE FF            CALL 0x00404d3b
006243DA  85 C0                     TEST EAX,EAX
006243DC  74 1C                     JZ 0x006243fa
LAB_006243de:
006243DE  3B DE                     CMP EBX,ESI
006243E0  7F 18                     JG 0x006243fa
LAB_006243e2:
006243E2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006243E5  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006243EC  5F                        POP EDI
006243ED  5E                        POP ESI
006243EE  89 18                     MOV dword ptr [EAX],EBX
006243F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006243F3  5B                        POP EBX
006243F4  8B E5                     MOV ESP,EBP
006243F6  5D                        POP EBP
006243F7  C2 20 00                  RET 0x20
LAB_006243fa:
006243FA  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
00624401  5F                        POP EDI
00624402  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624405  5E                        POP ESI
00624406  5B                        POP EBX
00624407  8B E5                     MOV ESP,EBP
00624409  5D                        POP EBP
0062440A  C2 20 00                  RET 0x20
LAB_0062440d:
0062440D  39 5D 1C                  CMP dword ptr [EBP + 0x1c],EBX
00624410  7D 6A                     JGE 0x0062447c
00624412  83 F8 05                  CMP EAX,0x5
00624415  7D CB                     JGE 0x006243e2
00624417  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062441A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062441D  8D 4F FF                  LEA ECX,[EDI + -0x1]
00624420  51                        PUSH ECX
00624421  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00624427  52                        PUSH EDX
00624428  50                        PUSH EAX
00624429  E8 0D 09 DE FF            CALL 0x00404d3b
0062442E  85 C0                     TEST EAX,EAX
00624430  74 B0                     JZ 0x006243e2
00624432  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00624435  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
00624438  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0062443F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624442  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
00624445  C1 E1 03                  SHL ECX,0x3
00624448  5F                        POP EDI
00624449  5E                        POP ESI
0062444A  89 0A                     MOV dword ptr [EDX],ECX
0062444C  5B                        POP EBX
0062444D  8B E5                     MOV ESP,EBP
0062444F  5D                        POP EBP
00624450  C2 20 00                  RET 0x20
LAB_00624453:
00624453  85 FF                     TEST EDI,EDI
00624455  7D 19                     JGE 0x00624470
LAB_00624457:
00624457  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0062445E  5F                        POP EDI
0062445F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00624465  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00624468  5E                        POP ESI
00624469  5B                        POP EBX
0062446A  8B E5                     MOV ESP,EBP
0062446C  5D                        POP EBP
0062446D  C2 20 00                  RET 0x20
LAB_00624470:
00624470  83 FF 05                  CMP EDI,0x5
00624473  7D 07                     JGE 0x0062447c
00624475  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_0062447c:
0062447C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062447F  5F                        POP EDI
00624480  5E                        POP ESI
00624481  5B                        POP EBX
00624482  8B E5                     MOV ESP,EBP
00624484  5D                        POP EBP
00624485  C2 20 00                  RET 0x20
