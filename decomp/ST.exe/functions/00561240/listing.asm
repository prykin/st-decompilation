FUN_00561240:
00561240  55                        PUSH EBP
00561241  8B EC                     MOV EBP,ESP
00561243  83 EC 3C                  SUB ESP,0x3c
00561246  53                        PUSH EBX
00561247  56                        PUSH ESI
00561248  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056124B  57                        PUSH EDI
0056124C  8B C6                     MOV EAX,ESI
0056124E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00561255  99                        CDQ
00561256  2B C2                     SUB EAX,EDX
00561258  8B F8                     MOV EDI,EAX
0056125A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0056125D  99                        CDQ
0056125E  2B C2                     SUB EAX,EDX
00561260  8B D8                     MOV EBX,EAX
00561262  B8 00 00 30 75            MOV EAX,0x75300000
00561267  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0056126A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0056126D  B8 00 00 D0 8A            MOV EAX,0x8ad00000
00561272  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00561275  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00561278  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0056127B  50                        PUSH EAX
0056127C  D1 FF                     SAR EDI,0x1
0056127E  D1 FB                     SAR EBX,0x1
00561280  E8 BB A3 17 00            CALL 0x006db640
00561285  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00561288  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0056128B  51                        PUSH ECX
0056128C  E8 3F A4 17 00            CALL 0x006db6d0
00561291  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00561294  2B F7                     SUB ESI,EDI
00561296  4E                        DEC ESI
00561297  0F AF CB                  IMUL ECX,EBX
0056129A  8B D6                     MOV EDX,ESI
0056129C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0056129F  0F AF D0                  IMUL EDX,EAX
005612A2  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
005612A5  3D 00 00 30 75            CMP EAX,0x75300000
005612AA  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005612AD  7D 03                     JGE 0x005612b2
005612AF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_005612b2:
005612B2  3D 00 00 D0 8A            CMP EAX,0x8ad00000
005612B7  7E 03                     JLE 0x005612bc
005612B9  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_005612bc:
005612BC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005612BF  0F AF 75 F4               IMUL ESI,dword ptr [EBP + -0xc]
005612C3  0F AF C3                  IMUL EAX,EBX
005612C6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005612C9  2B C6                     SUB EAX,ESI
005612CB  3D 00 00 30 75            CMP EAX,0x75300000
005612D0  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005612D3  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005612D6  7D 0A                     JGE 0x005612e2
005612D8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005612DB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005612e2:
005612E2  3D 00 00 D0 8A            CMP EAX,0x8ad00000
005612E7  7E 03                     JLE 0x005612ec
005612E9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005612ec:
005612EC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005612EF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005612F2  0F AF F7                  IMUL ESI,EDI
005612F5  2B CE                     SUB ECX,ESI
005612F7  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005612FA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005612FD  0F AF CF                  IMUL ECX,EDI
00561300  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00561303  03 C1                     ADD EAX,ECX
00561305  3B F8                     CMP EDI,EAX
00561307  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0056130A  7E 0A                     JLE 0x00561316
0056130C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0056130F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00561316:
00561316  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00561319  7D 03                     JGE 0x0056131e
0056131B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0056131e:
0056131E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561321  2B C3                     SUB EAX,EBX
00561323  8D 78 FF                  LEA EDI,[EAX + -0x1]
00561326  8B C7                     MOV EAX,EDI
00561328  0F AF 7D 10               IMUL EDI,dword ptr [EBP + 0x10]
0056132C  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
00561330  03 F0                     ADD ESI,EAX
00561332  2B CF                     SUB ECX,EDI
00561334  F7 DE                     NEG ESI
00561336  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00561339  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056133C  3B F1                     CMP ESI,ECX
0056133E  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00561341  7E 0A                     JLE 0x0056134d
00561343  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00561346  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_0056134d:
0056134D  39 4D FC                  CMP dword ptr [EBP + -0x4],ECX
00561350  7D 03                     JGE 0x00561355
00561352  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00561355:
00561355  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00561358  2B D0                     SUB EDX,EAX
0056135A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056135D  03 F9                     ADD EDI,ECX
0056135F  F7 DF                     NEG EDI
00561361  3B C7                     CMP EAX,EDI
00561363  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00561366  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00561369  7E 0A                     JLE 0x00561375
0056136B  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0056136E  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
LAB_00561375:
00561375  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
00561378  7D 03                     JGE 0x0056137d
0056137A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0056137d:
0056137D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00561380  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00561383  8D BA 00 80 00 00         LEA EDI,[EDX + 0x8000]
00561389  8D B0 00 80 00 00         LEA ESI,[EAX + 0x8000]
0056138F  C1 FF 10                  SAR EDI,0x10
00561392  C1 FE 10                  SAR ESI,0x10
00561395  2B F7                     SUB ESI,EDI
00561397  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0056139A  46                        INC ESI
0056139B  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0056139E  8D 0C F5 1C 00 00 00      LEA ECX,[ESI*0x8 + 0x1c]
005613A5  51                        PUSH ECX
005613A6  E8 65 98 14 00            CALL 0x006aac10
005613AB  8B C8                     MOV ECX,EAX
005613AD  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
005613B4  89 71 10                  MOV dword ptr [ECX + 0x10],ESI
005613B7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005613BA  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
005613BD  8B 54 F5 C8               MOV EDX,dword ptr [EBP + ESI*0x8 + -0x38]
005613C1  8B 44 F5 C4               MOV EAX,dword ptr [EBP + ESI*0x8 + -0x3c]
005613C5  81 C2 00 80 00 00         ADD EDX,0x8000
005613CB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005613CE  C1 FA 10                  SAR EDX,0x10
005613D1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005613D4  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005613D7  8B FA                     MOV EDI,EDX
LAB_005613d9:
005613D9  46                        INC ESI
005613DA  83 FE 04                  CMP ESI,0x4
005613DD  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
005613E0  7C 0A                     JL 0x005613ec
005613E2  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
005613E9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005613ec:
005613EC  8B 5C F5 C8               MOV EBX,dword ptr [EBP + ESI*0x8 + -0x38]
005613F0  8B 44 F5 C4               MOV EAX,dword ptr [EBP + ESI*0x8 + -0x3c]
005613F4  81 C3 00 80 00 00         ADD EBX,0x8000
005613FA  C1 FB 10                  SAR EBX,0x10
005613FD  3B FB                     CMP EDI,EBX
005613FF  7D 59                     JGE 0x0056145a
00561401  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00561404  8B F3                     MOV ESI,EBX
00561406  2B C2                     SUB EAX,EDX
00561408  2B F7                     SUB ESI,EDI
0056140A  99                        CDQ
0056140B  F7 FE                     IDIV ESI
0056140D  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00561410  8B D0                     MOV EDX,EAX
00561412  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
00561419  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0056141C  0F AF F2                  IMUL ESI,EDX
0056141F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00561422  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00561425  81 C7 00 80 00 00         ADD EDI,0x8000
0056142B  03 D6                     ADD EDX,ESI
0056142D  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_00561430:
00561430  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00561433  8B D0                     MOV EDX,EAX
00561435  C1 E6 03                  SHL ESI,0x3
00561438  2B D6                     SUB EDX,ESI
0056143A  8B F7                     MOV ESI,EDI
0056143C  C1 FE 10                  SAR ESI,0x10
0056143F  89 74 0A 18               MOV dword ptr [EDX + ECX*0x1 + 0x18],ESI
00561443  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561446  03 FA                     ADD EDI,EDX
00561448  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0056144B  83 C0 08                  ADD EAX,0x8
0056144E  4A                        DEC EDX
0056144F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00561452  75 DC                     JNZ 0x00561430
00561454  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00561457  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0056145a:
0056145A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0056145D  8B FB                     MOV EDI,EBX
0056145F  2B 7D F4                  SUB EDI,dword ptr [EBP + -0xc]
00561462  05 00 80 00 00            ADD EAX,0x8000
00561467  C1 F8 10                  SAR EAX,0x10
0056146A  89 44 F9 18               MOV dword ptr [ECX + EDI*0x8 + 0x18],EAX
0056146E  8B 44 F5 C4               MOV EAX,dword ptr [EBP + ESI*0x8 + -0x3c]
00561472  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00561475  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00561478  48                        DEC EAX
00561479  8B FB                     MOV EDI,EBX
0056147B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0056147E  0F 85 55 FF FF FF         JNZ 0x005613d9
00561484  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00561487  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056148A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0056148D  8B FA                     MOV EDI,EDX
0056148F  C7 45 F0 02 00 00 00      MOV dword ptr [EBP + -0x10],0x2
LAB_00561496:
00561496  4E                        DEC ESI
00561497  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0056149A  79 0A                     JNS 0x005614a6
0056149C  C7 45 08 03 00 00 00      MOV dword ptr [EBP + 0x8],0x3
005614A3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005614a6:
005614A6  8B 5C F5 C8               MOV EBX,dword ptr [EBP + ESI*0x8 + -0x38]
005614AA  8B 44 F5 C4               MOV EAX,dword ptr [EBP + ESI*0x8 + -0x3c]
005614AE  81 C3 00 80 00 00         ADD EBX,0x8000
005614B4  C1 FB 10                  SAR EBX,0x10
005614B7  3B FB                     CMP EDI,EBX
005614B9  7D 56                     JGE 0x00561511
005614BB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005614BE  8B F3                     MOV ESI,EBX
005614C0  2B C2                     SUB EAX,EDX
005614C2  2B F7                     SUB ESI,EDI
005614C4  99                        CDQ
005614C5  F7 FE                     IDIV ESI
005614C7  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005614CA  8B D0                     MOV EDX,EAX
005614CC  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
005614D3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005614D6  0F AF F2                  IMUL ESI,EDX
005614D9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005614DC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005614DF  81 C7 00 80 00 00         ADD EDI,0x8000
005614E5  03 D6                     ADD EDX,ESI
005614E7  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_005614ea:
005614EA  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005614ED  8B D0                     MOV EDX,EAX
005614EF  C1 E6 03                  SHL ESI,0x3
005614F2  2B D6                     SUB EDX,ESI
005614F4  8B F7                     MOV ESI,EDI
005614F6  C1 FE 10                  SAR ESI,0x10
005614F9  89 74 0A 14               MOV dword ptr [EDX + ECX*0x1 + 0x14],ESI
005614FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561500  03 FA                     ADD EDI,EDX
00561502  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00561505  83 C0 08                  ADD EAX,0x8
00561508  4A                        DEC EDX
00561509  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0056150C  75 DC                     JNZ 0x005614ea
0056150E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00561511:
00561511  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00561514  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00561517  8B C3                     MOV EAX,EBX
00561519  81 C2 00 80 00 00         ADD EDX,0x8000
0056151F  2B C7                     SUB EAX,EDI
00561521  8B FB                     MOV EDI,EBX
00561523  C1 FA 10                  SAR EDX,0x10
00561526  89 54 C1 14               MOV dword ptr [ECX + EAX*0x8 + 0x14],EDX
0056152A  8B 44 F5 C4               MOV EAX,dword ptr [EBP + ESI*0x8 + -0x3c]
0056152E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00561531  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00561534  48                        DEC EAX
00561535  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00561538  0F 85 58 FF FF FF         JNZ 0x00561496
0056153E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561541  33 D2                     XOR EDX,EDX
00561543  85 C0                     TEST EAX,EAX
00561545  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0056154B  BB 30 75 00 00            MOV EBX,0x7530
00561550  BF D0 8A FF FF            MOV EDI,0xffff8ad0
00561555  7E 25                     JLE 0x0056157c
LAB_00561557:
00561557  8B 74 D1 14               MOV ESI,dword ptr [ECX + EDX*0x8 + 0x14]
0056155B  3B DE                     CMP EBX,ESI
0056155D  7E 02                     JLE 0x00561561
0056155F  8B DE                     MOV EBX,ESI
LAB_00561561:
00561561  8B 44 D1 18               MOV EAX,dword ptr [ECX + EDX*0x8 + 0x18]
00561565  3B F8                     CMP EDI,EAX
00561567  7D 02                     JGE 0x0056156b
00561569  8B F8                     MOV EDI,EAX
LAB_0056156b:
0056156B  2B C6                     SUB EAX,ESI
0056156D  8B 31                     MOV ESI,dword ptr [ECX]
0056156F  40                        INC EAX
00561570  03 F0                     ADD ESI,EAX
00561572  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561575  42                        INC EDX
00561576  89 31                     MOV dword ptr [ECX],ESI
00561578  3B D0                     CMP EDX,EAX
0056157A  7C DB                     JL 0x00561557
LAB_0056157c:
0056157C  2B FB                     SUB EDI,EBX
0056157E  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
00561581  47                        INC EDI
00561582  8B C1                     MOV EAX,ECX
00561584  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
00561587  5F                        POP EDI
00561588  5E                        POP ESI
00561589  5B                        POP EBX
0056158A  8B E5                     MOV ESP,EBP
0056158C  5D                        POP EBP
0056158D  C2 0C 00                  RET 0xc
