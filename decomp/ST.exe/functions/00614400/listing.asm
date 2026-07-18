FUN_00614400:
00614400  55                        PUSH EBP
00614401  8B EC                     MOV EBP,ESP
00614403  83 EC 0C                  SUB ESP,0xc
00614406  56                        PUSH ESI
00614407  8B F1                     MOV ESI,ECX
00614409  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061440C  8B 41 2D                  MOV EAX,dword ptr [ECX + 0x2d]
0061440F  89 86 FB 01 00 00         MOV dword ptr [ESI + 0x1fb],EAX
00614415  66 8B 51 31               MOV DX,word ptr [ECX + 0x31]
00614419  66 89 96 FF 01 00 00      MOV word ptr [ESI + 0x1ff],DX
00614420  66 8B 41 1A               MOV AX,word ptr [ECX + 0x1a]
00614424  66 89 86 E9 01 00 00      MOV word ptr [ESI + 0x1e9],AX
0061442B  66 8B 51 1C               MOV DX,word ptr [ECX + 0x1c]
0061442F  66 89 96 EB 01 00 00      MOV word ptr [ESI + 0x1eb],DX
00614436  66 8B 41 1E               MOV AX,word ptr [ECX + 0x1e]
0061443A  66 89 86 ED 01 00 00      MOV word ptr [ESI + 0x1ed],AX
00614441  66 8B 51 20               MOV DX,word ptr [ECX + 0x20]
00614445  66 89 96 EF 01 00 00      MOV word ptr [ESI + 0x1ef],DX
0061444C  66 8B 41 22               MOV AX,word ptr [ECX + 0x22]
00614450  66 89 86 F1 01 00 00      MOV word ptr [ESI + 0x1f1],AX
00614457  66 8B 51 24               MOV DX,word ptr [ECX + 0x24]
0061445B  66 89 96 F3 01 00 00      MOV word ptr [ESI + 0x1f3],DX
00614462  8B 41 43                  MOV EAX,dword ptr [ECX + 0x43]
00614465  89 86 07 02 00 00         MOV dword ptr [ESI + 0x207],EAX
0061446B  66 8B 86 E9 01 00 00      MOV AX,word ptr [ESI + 0x1e9]
00614472  66 85 C0                  TEST AX,AX
00614475  0F BF D0                  MOVSX EDX,AX
00614478  B8 79 19 8C 02            MOV EAX,0x28c1979
0061447D  7C 10                     JL 0x0061448f
0061447F  F7 EA                     IMUL EDX
00614481  D1 FA                     SAR EDX,0x1
00614483  8B C2                     MOV EAX,EDX
00614485  C1 E8 1F                  SHR EAX,0x1f
00614488  03 D0                     ADD EDX,EAX
0061448A  0F BF C2                  MOVSX EAX,DX
0061448D  EB 0F                     JMP 0x0061449e
LAB_0061448f:
0061448F  F7 EA                     IMUL EDX
00614491  D1 FA                     SAR EDX,0x1
00614493  8B C2                     MOV EAX,EDX
00614495  C1 E8 1F                  SHR EAX,0x1f
00614498  03 D0                     ADD EDX,EAX
0061449A  0F BF C2                  MOVSX EAX,DX
0061449D  48                        DEC EAX
LAB_0061449e:
0061449E  66 89 86 15 02 00 00      MOV word ptr [ESI + 0x215],AX
006144A5  66 8B 86 EB 01 00 00      MOV AX,word ptr [ESI + 0x1eb]
006144AC  66 85 C0                  TEST AX,AX
006144AF  0F BF D0                  MOVSX EDX,AX
006144B2  B8 79 19 8C 02            MOV EAX,0x28c1979
006144B7  7C 10                     JL 0x006144c9
006144B9  F7 EA                     IMUL EDX
006144BB  D1 FA                     SAR EDX,0x1
006144BD  8B C2                     MOV EAX,EDX
006144BF  C1 E8 1F                  SHR EAX,0x1f
006144C2  03 D0                     ADD EDX,EAX
006144C4  0F BF C2                  MOVSX EAX,DX
006144C7  EB 0F                     JMP 0x006144d8
LAB_006144c9:
006144C9  F7 EA                     IMUL EDX
006144CB  D1 FA                     SAR EDX,0x1
006144CD  8B C2                     MOV EAX,EDX
006144CF  C1 E8 1F                  SHR EAX,0x1f
006144D2  03 D0                     ADD EDX,EAX
006144D4  0F BF C2                  MOVSX EAX,DX
006144D7  48                        DEC EAX
LAB_006144d8:
006144D8  66 89 86 17 02 00 00      MOV word ptr [ESI + 0x217],AX
006144DF  66 8B 86 ED 01 00 00      MOV AX,word ptr [ESI + 0x1ed]
006144E6  66 85 C0                  TEST AX,AX
006144E9  0F BF D0                  MOVSX EDX,AX
006144EC  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006144F1  7C 11                     JL 0x00614504
006144F3  F7 EA                     IMUL EDX
006144F5  C1 FA 06                  SAR EDX,0x6
006144F8  8B C2                     MOV EAX,EDX
006144FA  C1 E8 1F                  SHR EAX,0x1f
006144FD  03 D0                     ADD EDX,EAX
006144FF  0F BF C2                  MOVSX EAX,DX
00614502  EB 10                     JMP 0x00614514
LAB_00614504:
00614504  F7 EA                     IMUL EDX
00614506  C1 FA 06                  SAR EDX,0x6
00614509  8B C2                     MOV EAX,EDX
0061450B  C1 E8 1F                  SHR EAX,0x1f
0061450E  03 D0                     ADD EDX,EAX
00614510  0F BF C2                  MOVSX EAX,DX
00614513  48                        DEC EAX
LAB_00614514:
00614514  66 89 86 19 02 00 00      MOV word ptr [ESI + 0x219],AX
0061451B  B8 89 88 88 88            MOV EAX,0x88888889
00614520  0F BF 49 26               MOVSX ECX,word ptr [ECX + 0x26]
00614524  F7 E9                     IMUL ECX
00614526  66 8B 86 EF 01 00 00      MOV AX,word ptr [ESI + 0x1ef]
0061452D  03 D1                     ADD EDX,ECX
0061452F  C1 FA 03                  SAR EDX,0x3
00614532  8B CA                     MOV ECX,EDX
00614534  53                        PUSH EBX
00614535  C1 E9 1F                  SHR ECX,0x1f
00614538  03 D1                     ADD EDX,ECX
0061453A  57                        PUSH EDI
0061453B  66 85 C0                  TEST AX,AX
0061453E  0F BF C8                  MOVSX ECX,AX
00614541  66 89 96 F5 01 00 00      MOV word ptr [ESI + 0x1f5],DX
00614548  B8 79 19 8C 02            MOV EAX,0x28c1979
0061454D  7C 10                     JL 0x0061455f
0061454F  F7 E9                     IMUL ECX
00614551  D1 FA                     SAR EDX,0x1
00614553  8B C2                     MOV EAX,EDX
00614555  C1 E8 1F                  SHR EAX,0x1f
00614558  03 D0                     ADD EDX,EAX
0061455A  0F BF FA                  MOVSX EDI,DX
0061455D  EB 0F                     JMP 0x0061456e
LAB_0061455f:
0061455F  F7 E9                     IMUL ECX
00614561  D1 FA                     SAR EDX,0x1
00614563  8B CA                     MOV ECX,EDX
00614565  C1 E9 1F                  SHR ECX,0x1f
00614568  03 D1                     ADD EDX,ECX
0061456A  0F BF FA                  MOVSX EDI,DX
0061456D  4F                        DEC EDI
LAB_0061456e:
0061456E  66 8B 9E F1 01 00 00      MOV BX,word ptr [ESI + 0x1f1]
00614575  66 89 BE C5 02 00 00      MOV word ptr [ESI + 0x2c5],DI
0061457C  66 85 DB                  TEST BX,BX
0061457F  0F BF CB                  MOVSX ECX,BX
00614582  B8 79 19 8C 02            MOV EAX,0x28c1979
00614587  7C 13                     JL 0x0061459c
00614589  F7 E9                     IMUL ECX
0061458B  D1 FA                     SAR EDX,0x1
0061458D  8B C2                     MOV EAX,EDX
0061458F  C1 E8 1F                  SHR EAX,0x1f
00614592  03 D0                     ADD EDX,EAX
00614594  0F BF CA                  MOVSX ECX,DX
00614597  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061459A  EB 12                     JMP 0x006145ae
LAB_0061459c:
0061459C  F7 E9                     IMUL ECX
0061459E  D1 FA                     SAR EDX,0x1
006145A0  8B C2                     MOV EAX,EDX
006145A2  C1 E8 1F                  SHR EAX,0x1f
006145A5  03 D0                     ADD EDX,EAX
006145A7  0F BF C2                  MOVSX EAX,DX
006145AA  48                        DEC EAX
006145AB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006145ae:
006145AE  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
006145B2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006145B7  66 89 8E C7 02 00 00      MOV word ptr [ESI + 0x2c7],CX
006145BE  66 8B 8E F3 01 00 00      MOV CX,word ptr [ESI + 0x1f3]
006145C5  66 85 C9                  TEST CX,CX
006145C8  0F BF D1                  MOVSX EDX,CX
006145CB  7C 11                     JL 0x006145de
006145CD  F7 EA                     IMUL EDX
006145CF  C1 FA 06                  SAR EDX,0x6
006145D2  8B C2                     MOV EAX,EDX
006145D4  C1 E8 1F                  SHR EAX,0x1f
006145D7  03 D0                     ADD EDX,EAX
006145D9  0F BF C2                  MOVSX EAX,DX
006145DC  EB 10                     JMP 0x006145ee
LAB_006145de:
006145DE  F7 EA                     IMUL EDX
006145E0  C1 FA 06                  SAR EDX,0x6
006145E3  8B C2                     MOV EAX,EDX
006145E5  C1 E8 1F                  SHR EAX,0x1f
006145E8  03 D0                     ADD EDX,EAX
006145EA  0F BF C2                  MOVSX EAX,DX
006145ED  48                        DEC EAX
LAB_006145ee:
006145EE  66 8B 96 EF 01 00 00      MOV DX,word ptr [ESI + 0x1ef]
006145F5  66 89 8E CF 02 00 00      MOV word ptr [ESI + 0x2cf],CX
006145FC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006145FF  66 89 86 C9 02 00 00      MOV word ptr [ESI + 0x2c9],AX
00614606  66 89 96 CB 02 00 00      MOV word ptr [ESI + 0x2cb],DX
0061460D  66 89 9E CD 02 00 00      MOV word ptr [ESI + 0x2cd],BX
00614614  8B 49 43                  MOV ECX,dword ptr [ECX + 0x43]
00614617  66 85 FF                  TEST DI,DI
0061461A  89 8E D1 02 00 00         MOV dword ptr [ESI + 0x2d1],ECX
00614620  0F 8C 8D 01 00 00         JL 0x006147b3
00614626  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
0061462D  0F 8D 80 01 00 00         JGE 0x006147b3
00614633  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00614636  66 85 D2                  TEST DX,DX
00614639  0F 8C 74 01 00 00         JL 0x006147b3
0061463F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00614646  0F 8D 67 01 00 00         JGE 0x006147b3
0061464C  66 85 C0                  TEST AX,AX
0061464F  0F 8C 5E 01 00 00         JL 0x006147b3
00614655  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0061465C  0F 8D 51 01 00 00         JGE 0x006147b3
00614662  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00614669  0F BF C0                  MOVSX EAX,AX
0061466C  0F AF D8                  IMUL EBX,EAX
0061466F  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00614676  0F BF D2                  MOVSX EDX,DX
00614679  0F AF C2                  IMUL EAX,EDX
0061467C  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00614682  03 D8                     ADD EBX,EAX
00614684  0F BF C7                  MOVSX EAX,DI
00614687  03 D8                     ADD EBX,EAX
00614689  8B 3C DA                  MOV EDI,dword ptr [EDX + EBX*0x8]
0061468C  85 FF                     TEST EDI,EDI
0061468E  0F 84 1F 01 00 00         JZ 0x006147b3
00614694  39 4F 18                  CMP dword ptr [EDI + 0x18],ECX
00614697  0F 85 16 01 00 00         JNZ 0x006147b3
0061469D  8B 07                     MOV EAX,dword ptr [EDI]
0061469F  8B CF                     MOV ECX,EDI
006146A1  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
006146A7  85 C0                     TEST EAX,EAX
006146A9  0F 84 04 01 00 00         JZ 0x006147b3
006146AF  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
006146B2  83 F8 08                  CMP EAX,0x8
006146B5  0F 83 F8 00 00 00         JNC 0x006147b3
006146BB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006146C1  85 C9                     TEST ECX,ECX
006146C3  74 11                     JZ 0x006146d6
006146C5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006146C8  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
006146D0  0F 83 DD 00 00 00         JNC 0x006147b3
LAB_006146d6:
006146D6  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
006146DC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
006146DF  8A 8E D9 01 00 00         MOV CL,byte ptr [ESI + 0x1d9]
006146E5  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
006146E8  84 D2                     TEST DL,DL
006146EA  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
006146ED  74 2D                     JZ 0x0061471c
006146EF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006146F2  33 D2                     XOR EDX,EDX
006146F4  25 FF 00 00 00            AND EAX,0xff
006146F9  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006146FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006146FF  25 FF 00 00 00            AND EAX,0xff
00614704  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0061470B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061470E  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00614715  0F 95 C2                  SETNZ DL
00614718  8B C2                     MOV EAX,EDX
0061471A  EB 7A                     JMP 0x00614796
LAB_0061471c:
0061471C  3A C1                     CMP AL,CL
0061471E  74 6B                     JZ 0x0061478b
00614720  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00614723  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00614726  25 FF 00 00 00            AND EAX,0xff
0061472B  81 E1 FF 00 00 00         AND ECX,0xff
00614731  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00614738  84 D2                     TEST DL,DL
0061473A  75 12                     JNZ 0x0061474e
0061473C  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00614743  84 DB                     TEST BL,BL
00614745  75 07                     JNZ 0x0061474e
00614747  B8 FE FF FF FF            MOV EAX,0xfffffffe
0061474C  EB 3F                     JMP 0x0061478d
LAB_0061474e:
0061474E  BB 01 00 00 00            MOV EBX,0x1
00614753  3A D3                     CMP DL,BL
00614755  75 0F                     JNZ 0x00614766
00614757  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0061475F  75 05                     JNZ 0x00614766
00614761  83 C8 FF                  OR EAX,0xffffffff
00614764  EB 27                     JMP 0x0061478d
LAB_00614766:
00614766  84 D2                     TEST DL,DL
00614768  75 0D                     JNZ 0x00614777
0061476A  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
00614771  75 04                     JNZ 0x00614777
00614773  8B C3                     MOV EAX,EBX
00614775  EB 16                     JMP 0x0061478d
LAB_00614777:
00614777  3A D3                     CMP DL,BL
00614779  75 10                     JNZ 0x0061478b
0061477B  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
00614782  75 07                     JNZ 0x0061478b
00614784  B8 02 00 00 00            MOV EAX,0x2
00614789  EB 02                     JMP 0x0061478d
LAB_0061478b:
0061478B  33 C0                     XOR EAX,EAX
LAB_0061478d:
0061478D  33 C9                     XOR ECX,ECX
0061478F  85 C0                     TEST EAX,EAX
00614791  0F 9C C1                  SETL CL
00614794  8B C1                     MOV EAX,ECX
LAB_00614796:
00614796  85 C0                     TEST EAX,EAX
00614798  74 19                     JZ 0x006147b3
0061479A  8B 17                     MOV EDX,dword ptr [EDI]
0061479C  8B CF                     MOV ECX,EDI
0061479E  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
006147A4  85 C0                     TEST EAX,EAX
006147A6  74 0B                     JZ 0x006147b3
006147A8  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
006147AB  89 86 D1 02 00 00         MOV dword ptr [ESI + 0x2d1],EAX
006147B1  EB 33                     JMP 0x006147e6
LAB_006147b3:
006147B3  8B 96 D1 02 00 00         MOV EDX,dword ptr [ESI + 0x2d1]
006147B9  8D 4D F4                  LEA ECX,[EBP + -0xc]
006147BC  51                        PUSH ECX
006147BD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006147C3  52                        PUSH EDX
006147C4  E8 07 1B 0D 00            CALL 0x006e62d0
006147C9  83 F8 FC                  CMP EAX,-0x4
006147CC  74 0E                     JZ 0x006147dc
006147CE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006147D1  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
006147D4  89 8E D1 02 00 00         MOV dword ptr [ESI + 0x2d1],ECX
006147DA  EB 0A                     JMP 0x006147e6
LAB_006147dc:
006147DC  C7 86 D1 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d1],0x0
LAB_006147e6:
006147E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006147E9  5F                        POP EDI
006147EA  5B                        POP EBX
006147EB  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006147EE  89 96 F7 01 00 00         MOV dword ptr [ESI + 0x1f7],EDX
006147F4  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006147F7  83 F9 01                  CMP ECX,0x1
006147FA  75 23                     JNZ 0x0061481f
006147FC  8B 40 33                  MOV EAX,dword ptr [EAX + 0x33]
006147FF  83 F8 02                  CMP EAX,0x2
00614802  7F 20                     JG 0x00614824
00614804  C7 86 1B 02 00 00 14 00 00 00  MOV dword ptr [ESI + 0x21b],0x14
0061480E  C7 86 0C 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x20c],0x6
00614818  5E                        POP ESI
00614819  8B E5                     MOV ESP,EBP
0061481B  5D                        POP EBP
0061481C  C2 04 00                  RET 0x4
LAB_0061481f:
0061481F  A1 70 66 7E 00            MOV EAX,[0x007e6670]
LAB_00614824:
00614824  89 86 1B 02 00 00         MOV dword ptr [ESI + 0x21b],EAX
0061482A  C7 86 0C 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x20c],0x6
00614834  5E                        POP ESI
00614835  8B E5                     MOV ESP,EBP
00614837  5D                        POP EBP
00614838  C2 04 00                  RET 0x4
