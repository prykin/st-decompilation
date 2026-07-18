FUN_00668f50:
00668F50  55                        PUSH EBP
00668F51  8B EC                     MOV EBP,ESP
00668F53  51                        PUSH ECX
00668F54  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668F57  53                        PUSH EBX
00668F58  56                        PUSH ESI
00668F59  33 F6                     XOR ESI,ESI
00668F5B  85 C0                     TEST EAX,EAX
00668F5D  57                        PUSH EDI
00668F5E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00668F61  0F 85 E0 00 00 00         JNZ 0x00669047
00668F67  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00668F6A  83 F8 09                  CMP EAX,0x9
00668F6D  75 3F                     JNZ 0x00668fae
00668F6F  8B 01                     MOV EAX,dword ptr [ECX]
00668F71  FF 50 18                  CALL dword ptr [EAX + 0x18]
00668F74  85 C0                     TEST EAX,EAX
00668F76  0F 8C 32 16 00 00         JL 0x0066a5ae
00668F7C  83 F8 08                  CMP EAX,0x8
00668F7F  0F 8D 29 16 00 00         JGE 0x0066a5ae
00668F85  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00668F88  80 BC C9 E9 87 80 00 FF   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0xff
00668F90  0F 84 18 16 00 00         JZ 0x0066a5ae
00668F96  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00668F99  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00668FA0  5F                        POP EDI
00668FA1  5E                        POP ESI
00668FA2  89 01                     MOV dword ptr [ECX],EAX
00668FA4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00668FA7  5B                        POP EBX
00668FA8  8B E5                     MOV ESP,EBP
00668FAA  5D                        POP EBP
00668FAB  C2 0C 00                  RET 0xc
LAB_00668fae:
00668FAE  85 C0                     TEST EAX,EAX
00668FB0  7C 2E                     JL 0x00668fe0
00668FB2  83 F8 08                  CMP EAX,0x8
00668FB5  7D 2C                     JGE 0x00668fe3
00668FB7  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00668FBA  80 BC C9 E9 87 80 00 FF   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0xff
00668FC2  0F 84 E6 15 00 00         JZ 0x0066a5ae
00668FC8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00668FCB  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00668FD2  5F                        POP EDI
00668FD3  5E                        POP ESI
00668FD4  89 02                     MOV dword ptr [EDX],EAX
00668FD6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00668FD9  5B                        POP EBX
00668FDA  8B E5                     MOV ESP,EBP
00668FDC  5D                        POP EBP
00668FDD  C2 0C 00                  RET 0xc
LAB_00668fe0:
00668FE0  83 F8 08                  CMP EAX,0x8
LAB_00668fe3:
00668FE3  75 29                     JNZ 0x0066900e
00668FE5  A0 4D 87 80 00            MOV AL,[0x0080874d]
00668FEA  3C FF                     CMP AL,0xff
00668FEC  0F 84 BC 15 00 00         JZ 0x0066a5ae
00668FF2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00668FF5  33 C9                     XOR ECX,ECX
00668FF7  8A C8                     MOV CL,AL
00668FF9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00669000  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669003  5F                        POP EDI
00669004  5E                        POP ESI
00669005  89 0A                     MOV dword ptr [EDX],ECX
00669007  5B                        POP EBX
00669008  8B E5                     MOV ESP,EBP
0066900A  5D                        POP EBP
0066900B  C2 0C 00                  RET 0xc
LAB_0066900e:
0066900E  3D FF 00 00 00            CMP EAX,0xff
00669013  0F 85 95 15 00 00         JNZ 0x0066a5ae
00669019  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0066901C  33 C9                     XOR ECX,ECX
0066901E  B8 E9 87 80 00            MOV EAX,0x8087e9
LAB_00669023:
00669023  80 38 FF                  CMP byte ptr [EAX],0xff
00669026  74 06                     JZ 0x0066902e
00669028  89 0A                     MOV dword ptr [EDX],ECX
0066902A  46                        INC ESI
0066902B  83 C2 04                  ADD EDX,0x4
LAB_0066902e:
0066902E  83 C0 51                  ADD EAX,0x51
00669031  41                        INC ECX
00669032  3D 71 8A 80 00            CMP EAX,0x808a71
00669037  7C EA                     JL 0x00669023
00669039  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0066903C  8B C6                     MOV EAX,ESI
0066903E  5F                        POP EDI
0066903F  5E                        POP ESI
00669040  5B                        POP EBX
00669041  8B E5                     MOV ESP,EBP
00669043  5D                        POP EBP
00669044  C2 0C 00                  RET 0xc
LAB_00669047:
00669047  83 F8 FF                  CMP EAX,-0x1
0066904A  0F 85 1A 02 00 00         JNZ 0x0066926a
00669050  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00669053  83 FF 09                  CMP EDI,0x9
00669056  0F 85 B6 00 00 00         JNZ 0x00669112
0066905C  8B 01                     MOV EAX,dword ptr [ECX]
0066905E  FF 50 18                  CALL dword ptr [EAX + 0x18]
00669061  8B F8                     MOV EDI,EAX
00669063  85 FF                     TEST EDI,EDI
00669065  0F 8C 43 15 00 00         JL 0x0066a5ae
0066906B  83 FF 08                  CMP EDI,0x8
0066906E  0F 8D 3A 15 00 00         JGE 0x0066a5ae
00669074  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
00669077  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066907F  0F 84 29 15 00 00         JZ 0x0066a5ae
00669085  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00669088  33 F6                     XOR ESI,ESI
0066908A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0066908D  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_00669092:
00669092  3B F7                     CMP ESI,EDI
00669094  74 64                     JZ 0x006690fa
00669096  80 3B FF                  CMP byte ptr [EBX],0xff
00669099  74 5F                     JZ 0x006690fa
0066909B  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
006690A0  84 C0                     TEST AL,AL
006690A2  74 2B                     JZ 0x006690cf
006690A4  8B C7                     MOV EAX,EDI
006690A6  25 FF 00 00 00            AND EAX,0xff
006690AB  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006690AE  8B C6                     MOV EAX,ESI
006690B0  25 FF 00 00 00            AND EAX,0xff
006690B5  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006690BC  33 C9                     XOR ECX,ECX
006690BE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006690C1  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006690C8  0F 95 C1                  SETNZ CL
006690CB  8B C1                     MOV EAX,ECX
006690CD  EB 15                     JMP 0x006690e4
LAB_006690cf:
006690CF  57                        PUSH EDI
006690D0  56                        PUSH ESI
006690D1  B9 20 76 80 00            MOV ECX,0x807620
006690D6  E8 B4 CC D9 FF            CALL 0x00405d8f
006690DB  33 D2                     XOR EDX,EDX
006690DD  85 C0                     TEST EAX,EAX
006690DF  0F 9C C2                  SETL DL
006690E2  8B C2                     MOV EAX,EDX
LAB_006690e4:
006690E4  85 C0                     TEST EAX,EAX
006690E6  74 12                     JZ 0x006690fa
006690E8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006690EB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006690EE  42                        INC EDX
006690EF  89 30                     MOV dword ptr [EAX],ESI
006690F1  83 C0 04                  ADD EAX,0x4
006690F4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006690F7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006690fa:
006690FA  83 C3 51                  ADD EBX,0x51
006690FD  46                        INC ESI
006690FE  81 FB 71 8A 80 00         CMP EBX,0x808a71
00669104  7C 8C                     JL 0x00669092
00669106  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669109  5F                        POP EDI
0066910A  5E                        POP ESI
0066910B  5B                        POP EBX
0066910C  8B E5                     MOV ESP,EBP
0066910E  5D                        POP EBP
0066910F  C2 0C 00                  RET 0xc
LAB_00669112:
00669112  85 FF                     TEST EDI,EDI
00669114  0F 8C A7 00 00 00         JL 0x006691c1
0066911A  83 FF 08                  CMP EDI,0x8
0066911D  0F 8D A1 00 00 00         JGE 0x006691c4
00669123  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
00669126  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066912E  0F 84 7A 14 00 00         JZ 0x0066a5ae
00669134  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669137  33 F6                     XOR ESI,ESI
00669139  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0066913C  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_00669141:
00669141  3B F7                     CMP ESI,EDI
00669143  74 64                     JZ 0x006691a9
00669145  80 3B FF                  CMP byte ptr [EBX],0xff
00669148  74 5F                     JZ 0x006691a9
0066914A  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066914F  84 C0                     TEST AL,AL
00669151  74 2B                     JZ 0x0066917e
00669153  8B C7                     MOV EAX,EDI
00669155  33 D2                     XOR EDX,EDX
00669157  25 FF 00 00 00            AND EAX,0xff
0066915C  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0066915F  8B C6                     MOV EAX,ESI
00669161  25 FF 00 00 00            AND EAX,0xff
00669166  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066916D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669170  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669177  0F 95 C2                  SETNZ DL
0066917A  8B C2                     MOV EAX,EDX
0066917C  EB 15                     JMP 0x00669193
LAB_0066917e:
0066917E  57                        PUSH EDI
0066917F  56                        PUSH ESI
00669180  B9 20 76 80 00            MOV ECX,0x807620
00669185  E8 05 CC D9 FF            CALL 0x00405d8f
0066918A  33 C9                     XOR ECX,ECX
0066918C  85 C0                     TEST EAX,EAX
0066918E  0F 9C C1                  SETL CL
00669191  8B C1                     MOV EAX,ECX
LAB_00669193:
00669193  85 C0                     TEST EAX,EAX
00669195  74 12                     JZ 0x006691a9
00669197  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066919A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066919D  42                        INC EDX
0066919E  89 30                     MOV dword ptr [EAX],ESI
006691A0  83 C0 04                  ADD EAX,0x4
006691A3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006691A6  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006691a9:
006691A9  83 C3 51                  ADD EBX,0x51
006691AC  46                        INC ESI
006691AD  81 FB 71 8A 80 00         CMP EBX,0x808a71
006691B3  7C 8C                     JL 0x00669141
006691B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006691B8  5F                        POP EDI
006691B9  5E                        POP ESI
006691BA  5B                        POP EBX
006691BB  8B E5                     MOV ESP,EBP
006691BD  5D                        POP EBP
006691BE  C2 0C 00                  RET 0xc
LAB_006691c1:
006691C1  83 FF 08                  CMP EDI,0x8
LAB_006691c4:
006691C4  0F 85 E4 13 00 00         JNZ 0x0066a5ae
006691CA  A0 4D 87 80 00            MOV AL,[0x0080874d]
006691CF  3C FF                     CMP AL,0xff
006691D1  0F 84 D7 13 00 00         JZ 0x0066a5ae
006691D7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006691DA  33 F6                     XOR ESI,ESI
006691DC  BB E9 87 80 00            MOV EBX,0x8087e9
006691E1  EB 05                     JMP 0x006691e8
LAB_006691e3:
006691E3  A0 4D 87 80 00            MOV AL,[0x0080874d]
LAB_006691e8:
006691E8  33 D2                     XOR EDX,EDX
006691EA  8A D0                     MOV DL,AL
006691EC  3B F2                     CMP ESI,EDX
006691EE  74 62                     JZ 0x00669252
006691F0  80 3B FF                  CMP byte ptr [EBX],0xff
006691F3  74 5D                     JZ 0x00669252
006691F5  88 45 10                  MOV byte ptr [EBP + 0x10],AL
006691F8  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
006691FD  84 C0                     TEST AL,AL
006691FF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669202  74 29                     JZ 0x0066922d
00669204  25 FF 00 00 00            AND EAX,0xff
00669209  33 D2                     XOR EDX,EDX
0066920B  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0066920E  8B C6                     MOV EAX,ESI
00669210  25 FF 00 00 00            AND EAX,0xff
00669215  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066921C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066921F  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669226  0F 95 C2                  SETNZ DL
00669229  8B C2                     MOV EAX,EDX
0066922B  EB 15                     JMP 0x00669242
LAB_0066922d:
0066922D  50                        PUSH EAX
0066922E  56                        PUSH ESI
0066922F  B9 20 76 80 00            MOV ECX,0x807620
00669234  E8 56 CB D9 FF            CALL 0x00405d8f
00669239  33 C9                     XOR ECX,ECX
0066923B  85 C0                     TEST EAX,EAX
0066923D  0F 9C C1                  SETL CL
00669240  8B C1                     MOV EAX,ECX
LAB_00669242:
00669242  85 C0                     TEST EAX,EAX
00669244  74 0C                     JZ 0x00669252
00669246  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00669249  89 37                     MOV dword ptr [EDI],ESI
0066924B  41                        INC ECX
0066924C  83 C7 04                  ADD EDI,0x4
0066924F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00669252:
00669252  83 C3 51                  ADD EBX,0x51
00669255  46                        INC ESI
00669256  81 FB 71 8A 80 00         CMP EBX,0x808a71
0066925C  7C 85                     JL 0x006691e3
0066925E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669261  5F                        POP EDI
00669262  5E                        POP ESI
00669263  5B                        POP EBX
00669264  8B E5                     MOV ESP,EBP
00669266  5D                        POP EBP
00669267  C2 0C 00                  RET 0xc
LAB_0066926a:
0066926A  83 F8 01                  CMP EAX,0x1
0066926D  0F 85 09 02 00 00         JNZ 0x0066947c
00669273  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00669276  83 FF 09                  CMP EDI,0x9
00669279  0F 85 B2 00 00 00         JNZ 0x00669331
0066927F  8B 11                     MOV EDX,dword ptr [ECX]
00669281  FF 52 18                  CALL dword ptr [EDX + 0x18]
00669284  8B F8                     MOV EDI,EAX
00669286  85 FF                     TEST EDI,EDI
00669288  0F 8C 20 13 00 00         JL 0x0066a5ae
0066928E  83 FF 08                  CMP EDI,0x8
00669291  0F 8D 17 13 00 00         JGE 0x0066a5ae
00669297  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
0066929A  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
006692A2  0F 84 06 13 00 00         JZ 0x0066a5ae
006692A8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006692AB  33 F6                     XOR ESI,ESI
006692AD  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006692B0  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_006692b5:
006692B5  80 3B FF                  CMP byte ptr [EBX],0xff
006692B8  74 5F                     JZ 0x00669319
006692BA  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
006692BF  84 C0                     TEST AL,AL
006692C1  74 2B                     JZ 0x006692ee
006692C3  8B C7                     MOV EAX,EDI
006692C5  33 D2                     XOR EDX,EDX
006692C7  25 FF 00 00 00            AND EAX,0xff
006692CC  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006692CF  8B C6                     MOV EAX,ESI
006692D1  25 FF 00 00 00            AND EAX,0xff
006692D6  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006692DD  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006692E0  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006692E7  0F 95 C2                  SETNZ DL
006692EA  8B C2                     MOV EAX,EDX
006692EC  EB 15                     JMP 0x00669303
LAB_006692ee:
006692EE  57                        PUSH EDI
006692EF  56                        PUSH ESI
006692F0  B9 20 76 80 00            MOV ECX,0x807620
006692F5  E8 95 CA D9 FF            CALL 0x00405d8f
006692FA  33 C9                     XOR ECX,ECX
006692FC  85 C0                     TEST EAX,EAX
006692FE  0F 9C C1                  SETL CL
00669301  8B C1                     MOV EAX,ECX
LAB_00669303:
00669303  85 C0                     TEST EAX,EAX
00669305  75 12                     JNZ 0x00669319
00669307  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066930A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066930D  42                        INC EDX
0066930E  89 30                     MOV dword ptr [EAX],ESI
00669310  83 C0 04                  ADD EAX,0x4
00669313  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00669316  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00669319:
00669319  83 C3 51                  ADD EBX,0x51
0066931C  46                        INC ESI
0066931D  81 FB 71 8A 80 00         CMP EBX,0x808a71
00669323  7C 90                     JL 0x006692b5
00669325  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669328  5F                        POP EDI
00669329  5E                        POP ESI
0066932A  5B                        POP EBX
0066932B  8B E5                     MOV ESP,EBP
0066932D  5D                        POP EBP
0066932E  C2 0C 00                  RET 0xc
LAB_00669331:
00669331  85 FF                     TEST EDI,EDI
00669333  0F 8C A3 00 00 00         JL 0x006693dc
00669339  83 FF 08                  CMP EDI,0x8
0066933C  0F 8D 9D 00 00 00         JGE 0x006693df
00669342  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
00669345  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066934D  0F 84 5B 12 00 00         JZ 0x0066a5ae
00669353  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00669356  33 F6                     XOR ESI,ESI
00669358  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0066935B  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_00669360:
00669360  80 3B FF                  CMP byte ptr [EBX],0xff
00669363  74 5F                     JZ 0x006693c4
00669365  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066936A  84 C0                     TEST AL,AL
0066936C  74 2B                     JZ 0x00669399
0066936E  8B C7                     MOV EAX,EDI
00669370  33 D2                     XOR EDX,EDX
00669372  25 FF 00 00 00            AND EAX,0xff
00669377  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0066937A  8B C6                     MOV EAX,ESI
0066937C  25 FF 00 00 00            AND EAX,0xff
00669381  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669388  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066938B  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669392  0F 95 C2                  SETNZ DL
00669395  8B C2                     MOV EAX,EDX
00669397  EB 15                     JMP 0x006693ae
LAB_00669399:
00669399  57                        PUSH EDI
0066939A  56                        PUSH ESI
0066939B  B9 20 76 80 00            MOV ECX,0x807620
006693A0  E8 EA C9 D9 FF            CALL 0x00405d8f
006693A5  33 C9                     XOR ECX,ECX
006693A7  85 C0                     TEST EAX,EAX
006693A9  0F 9C C1                  SETL CL
006693AC  8B C1                     MOV EAX,ECX
LAB_006693ae:
006693AE  85 C0                     TEST EAX,EAX
006693B0  75 12                     JNZ 0x006693c4
006693B2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006693B5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006693B8  42                        INC EDX
006693B9  89 30                     MOV dword ptr [EAX],ESI
006693BB  83 C0 04                  ADD EAX,0x4
006693BE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006693C1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006693c4:
006693C4  83 C3 51                  ADD EBX,0x51
006693C7  46                        INC ESI
006693C8  81 FB 71 8A 80 00         CMP EBX,0x808a71
006693CE  7C 90                     JL 0x00669360
006693D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006693D3  5F                        POP EDI
006693D4  5E                        POP ESI
006693D5  5B                        POP EBX
006693D6  8B E5                     MOV ESP,EBP
006693D8  5D                        POP EBP
006693D9  C2 0C 00                  RET 0xc
LAB_006693dc:
006693DC  83 FF 08                  CMP EDI,0x8
LAB_006693df:
006693DF  0F 85 C9 11 00 00         JNZ 0x0066a5ae
006693E5  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
006693EC  0F 84 BC 11 00 00         JZ 0x0066a5ae
006693F2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006693F5  33 F6                     XOR ESI,ESI
006693F7  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_006693fc:
006693FC  80 3B FF                  CMP byte ptr [EBX],0xff
006693FF  74 63                     JZ 0x00669464
00669401  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00669407  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066940C  88 55 10                  MOV byte ptr [EBP + 0x10],DL
0066940F  84 C0                     TEST AL,AL
00669411  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669414  74 29                     JZ 0x0066943f
00669416  25 FF 00 00 00            AND EAX,0xff
0066941B  33 D2                     XOR EDX,EDX
0066941D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00669420  8B C6                     MOV EAX,ESI
00669422  25 FF 00 00 00            AND EAX,0xff
00669427  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066942E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669431  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669438  0F 95 C2                  SETNZ DL
0066943B  8B C2                     MOV EAX,EDX
0066943D  EB 15                     JMP 0x00669454
LAB_0066943f:
0066943F  50                        PUSH EAX
00669440  56                        PUSH ESI
00669441  B9 20 76 80 00            MOV ECX,0x807620
00669446  E8 44 C9 D9 FF            CALL 0x00405d8f
0066944B  33 C9                     XOR ECX,ECX
0066944D  85 C0                     TEST EAX,EAX
0066944F  0F 9C C1                  SETL CL
00669452  8B C1                     MOV EAX,ECX
LAB_00669454:
00669454  85 C0                     TEST EAX,EAX
00669456  75 0C                     JNZ 0x00669464
00669458  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066945B  89 37                     MOV dword ptr [EDI],ESI
0066945D  41                        INC ECX
0066945E  83 C7 04                  ADD EDI,0x4
00669461  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00669464:
00669464  83 C3 51                  ADD EBX,0x51
00669467  46                        INC ESI
00669468  81 FB 71 8A 80 00         CMP EBX,0x808a71
0066946E  7C 8C                     JL 0x006693fc
00669470  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669473  5F                        POP EDI
00669474  5E                        POP ESI
00669475  5B                        POP EBX
00669476  8B E5                     MOV ESP,EBP
00669478  5D                        POP EBP
00669479  C2 0C 00                  RET 0xc
LAB_0066947c:
0066947C  83 F8 02                  CMP EAX,0x2
0066947F  0F 85 8A 02 00 00         JNZ 0x0066970f
00669485  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00669488  83 FA 09                  CMP EDX,0x9
0066948B  0F 85 B6 00 00 00         JNZ 0x00669547
00669491  8B 11                     MOV EDX,dword ptr [ECX]
00669493  FF 52 18                  CALL dword ptr [EDX + 0x18]
00669496  8B F8                     MOV EDI,EAX
00669498  85 FF                     TEST EDI,EDI
0066949A  0F 8C 0E 11 00 00         JL 0x0066a5ae
006694A0  83 FF 08                  CMP EDI,0x8
006694A3  0F 8D 05 11 00 00         JGE 0x0066a5ae
006694A9  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
006694AC  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
006694B4  0F 84 F4 10 00 00         JZ 0x0066a5ae
006694BA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006694BD  33 F6                     XOR ESI,ESI
006694BF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006694C2  BB E9 87 80 00            MOV EBX,0x8087e9
LAB_006694c7:
006694C7  3B F7                     CMP ESI,EDI
006694C9  74 64                     JZ 0x0066952f
006694CB  80 3B FF                  CMP byte ptr [EBX],0xff
006694CE  74 5F                     JZ 0x0066952f
006694D0  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
006694D5  84 C0                     TEST AL,AL
006694D7  74 2B                     JZ 0x00669504
006694D9  8B C7                     MOV EAX,EDI
006694DB  33 D2                     XOR EDX,EDX
006694DD  25 FF 00 00 00            AND EAX,0xff
006694E2  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006694E5  8B C6                     MOV EAX,ESI
006694E7  25 FF 00 00 00            AND EAX,0xff
006694EC  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006694F3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006694F6  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006694FD  0F 95 C2                  SETNZ DL
00669500  8B C2                     MOV EAX,EDX
00669502  EB 15                     JMP 0x00669519
LAB_00669504:
00669504  57                        PUSH EDI
00669505  56                        PUSH ESI
00669506  B9 20 76 80 00            MOV ECX,0x807620
0066950B  E8 7F C8 D9 FF            CALL 0x00405d8f
00669510  33 C9                     XOR ECX,ECX
00669512  85 C0                     TEST EAX,EAX
00669514  0F 9C C1                  SETL CL
00669517  8B C1                     MOV EAX,ECX
LAB_00669519:
00669519  85 C0                     TEST EAX,EAX
0066951B  75 12                     JNZ 0x0066952f
0066951D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669520  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00669523  42                        INC EDX
00669524  89 30                     MOV dword ptr [EAX],ESI
00669526  83 C0 04                  ADD EAX,0x4
00669529  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066952C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0066952f:
0066952F  83 C3 51                  ADD EBX,0x51
00669532  46                        INC ESI
00669533  81 FB 71 8A 80 00         CMP EBX,0x808a71
00669539  7C 8C                     JL 0x006694c7
0066953B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066953E  5F                        POP EDI
0066953F  5E                        POP ESI
00669540  5B                        POP EBX
00669541  8B E5                     MOV ESP,EBP
00669543  5D                        POP EBP
00669544  C2 0C 00                  RET 0xc
LAB_00669547:
00669547  85 D2                     TEST EDX,EDX
00669549  0F 8C 17 01 00 00         JL 0x00669666
0066954F  83 FA 08                  CMP EDX,0x8
00669552  0F 8D 11 01 00 00         JGE 0x00669669
00669558  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
0066955B  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
00669563  0F 84 45 10 00 00         JZ 0x0066a5ae
00669569  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0066956C  33 DB                     XOR EBX,EBX
0066956E  BE E9 87 80 00            MOV ESI,0x8087e9
LAB_00669573:
00669573  3B DA                     CMP EBX,EDX
00669575  0F 84 CF 00 00 00         JZ 0x0066964a
0066957B  80 3E FF                  CMP byte ptr [ESI],0xff
0066957E  0F 84 C6 00 00 00         JZ 0x0066964a
00669584  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669589  84 C0                     TEST AL,AL
0066958B  74 2E                     JZ 0x006695bb
0066958D  8B C2                     MOV EAX,EDX
0066958F  25 FF 00 00 00            AND EAX,0xff
00669594  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00669597  8B C3                     MOV EAX,EBX
00669599  25 FF 00 00 00            AND EAX,0xff
0066959E  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006695A5  33 C9                     XOR ECX,ECX
006695A7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006695AA  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006695B1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006695B4  0F 95 C1                  SETNZ CL
006695B7  8B C1                     MOV EAX,ECX
006695B9  EB 7F                     JMP 0x0066963a
LAB_006695bb:
006695BB  3A DA                     CMP BL,DL
006695BD  75 04                     JNZ 0x006695c3
006695BF  33 C0                     XOR EAX,EAX
006695C1  EB 6E                     JMP 0x00669631
LAB_006695c3:
006695C3  8B C3                     MOV EAX,EBX
006695C5  8B CA                     MOV ECX,EDX
006695C7  25 FF 00 00 00            AND EAX,0xff
006695CC  81 E1 FF 00 00 00         AND ECX,0xff
006695D2  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
006695D9  84 D2                     TEST DL,DL
006695DB  75 10                     JNZ 0x006695ed
006695DD  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
006695E4  75 07                     JNZ 0x006695ed
006695E6  B8 FE FF FF FF            MOV EAX,0xfffffffe
006695EB  EB 41                     JMP 0x0066962e
LAB_006695ed:
006695ED  80 FA 01                  CMP DL,0x1
006695F0  75 0F                     JNZ 0x00669601
006695F2  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
006695FA  75 05                     JNZ 0x00669601
006695FC  83 C8 FF                  OR EAX,0xffffffff
006695FF  EB 2D                     JMP 0x0066962e
LAB_00669601:
00669601  84 D2                     TEST DL,DL
00669603  75 11                     JNZ 0x00669616
00669605  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0066960D  75 07                     JNZ 0x00669616
0066960F  B8 01 00 00 00            MOV EAX,0x1
00669614  EB 18                     JMP 0x0066962e
LAB_00669616:
00669616  80 FA 01                  CMP DL,0x1
00669619  75 11                     JNZ 0x0066962c
0066961B  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00669623  75 07                     JNZ 0x0066962c
00669625  B8 02 00 00 00            MOV EAX,0x2
0066962A  EB 02                     JMP 0x0066962e
LAB_0066962c:
0066962C  33 C0                     XOR EAX,EAX
LAB_0066962e:
0066962E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00669631:
00669631  33 C9                     XOR ECX,ECX
00669633  85 C0                     TEST EAX,EAX
00669635  0F 9C C1                  SETL CL
00669638  8B C1                     MOV EAX,ECX
LAB_0066963a:
0066963A  85 C0                     TEST EAX,EAX
0066963C  75 0C                     JNZ 0x0066964a
0066963E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00669641  89 1F                     MOV dword ptr [EDI],EBX
00669643  41                        INC ECX
00669644  83 C7 04                  ADD EDI,0x4
00669647  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066964a:
0066964A  83 C6 51                  ADD ESI,0x51
0066964D  43                        INC EBX
0066964E  81 FE 71 8A 80 00         CMP ESI,0x808a71
00669654  0F 8C 19 FF FF FF         JL 0x00669573
0066965A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066965D  5F                        POP EDI
0066965E  5E                        POP ESI
0066965F  5B                        POP EBX
00669660  8B E5                     MOV ESP,EBP
00669662  5D                        POP EBP
00669663  C2 0C 00                  RET 0xc
LAB_00669666:
00669666  83 FA 08                  CMP EDX,0x8
LAB_00669669:
00669669  0F 85 3F 0F 00 00         JNZ 0x0066a5ae
0066966F  A0 4D 87 80 00            MOV AL,[0x0080874d]
00669674  3C FF                     CMP AL,0xff
00669676  0F 84 32 0F 00 00         JZ 0x0066a5ae
0066967C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0066967F  33 F6                     XOR ESI,ESI
00669681  BB E9 87 80 00            MOV EBX,0x8087e9
00669686  EB 05                     JMP 0x0066968d
LAB_00669688:
00669688  A0 4D 87 80 00            MOV AL,[0x0080874d]
LAB_0066968d:
0066968D  33 D2                     XOR EDX,EDX
0066968F  8A D0                     MOV DL,AL
00669691  3B F2                     CMP ESI,EDX
00669693  74 62                     JZ 0x006696f7
00669695  80 3B FF                  CMP byte ptr [EBX],0xff
00669698  74 5D                     JZ 0x006696f7
0066969A  88 45 10                  MOV byte ptr [EBP + 0x10],AL
0066969D  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
006696A2  84 C0                     TEST AL,AL
006696A4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006696A7  74 29                     JZ 0x006696d2
006696A9  25 FF 00 00 00            AND EAX,0xff
006696AE  33 D2                     XOR EDX,EDX
006696B0  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006696B3  8B C6                     MOV EAX,ESI
006696B5  25 FF 00 00 00            AND EAX,0xff
006696BA  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006696C1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006696C4  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006696CB  0F 95 C2                  SETNZ DL
006696CE  8B C2                     MOV EAX,EDX
006696D0  EB 15                     JMP 0x006696e7
LAB_006696d2:
006696D2  50                        PUSH EAX
006696D3  56                        PUSH ESI
006696D4  B9 20 76 80 00            MOV ECX,0x807620
006696D9  E8 B1 C6 D9 FF            CALL 0x00405d8f
006696DE  33 C9                     XOR ECX,ECX
006696E0  85 C0                     TEST EAX,EAX
006696E2  0F 9C C1                  SETL CL
006696E5  8B C1                     MOV EAX,ECX
LAB_006696e7:
006696E7  85 C0                     TEST EAX,EAX
006696E9  75 0C                     JNZ 0x006696f7
006696EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006696EE  89 37                     MOV dword ptr [EDI],ESI
006696F0  41                        INC ECX
006696F1  83 C7 04                  ADD EDI,0x4
006696F4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006696f7:
006696F7  83 C3 51                  ADD EBX,0x51
006696FA  46                        INC ESI
006696FB  81 FB 71 8A 80 00         CMP EBX,0x808a71
00669701  7C 85                     JL 0x00669688
00669703  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669706  5F                        POP EDI
00669707  5E                        POP ESI
00669708  5B                        POP EBX
00669709  8B E5                     MOV ESP,EBP
0066970B  5D                        POP EBP
0066970C  C2 0C 00                  RET 0xc
LAB_0066970f:
0066970F  83 F8 03                  CMP EAX,0x3
00669712  0F 85 C6 04 00 00         JNZ 0x00669bde
00669718  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0066971B  83 FA 09                  CMP EDX,0x9
0066971E  0F 85 DB 01 00 00         JNZ 0x006698ff
00669724  8B 11                     MOV EDX,dword ptr [ECX]
00669726  FF 52 18                  CALL dword ptr [EDX + 0x18]
00669729  85 C0                     TEST EAX,EAX
0066972B  0F 8C 7D 0E 00 00         JL 0x0066a5ae
00669731  83 F8 08                  CMP EAX,0x8
00669734  0F 8D 74 0E 00 00         JGE 0x0066a5ae
0066973A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0066973D  80 BC C9 E9 87 80 00 FF   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0xff
00669745  0F 84 63 0E 00 00         JZ 0x0066a5ae
0066974B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0066974E  33 C9                     XOR ECX,ECX
00669750  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00669753  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00669756  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_0066975b:
0066975B  80 3F FF                  CMP byte ptr [EDI],0xff
0066975E  0F 84 79 01 00 00         JZ 0x006698dd
00669764  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0066976A  84 D2                     TEST DL,DL
0066976C  74 2B                     JZ 0x00669799
0066976E  8B D1                     MOV EDX,ECX
00669770  33 DB                     XOR EBX,EBX
00669772  81 E2 FF 00 00 00         AND EDX,0xff
00669778  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
0066977B  8B D0                     MOV EDX,EAX
0066977D  81 E2 FF 00 00 00         AND EDX,0xff
00669783  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00669786  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0066978D  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669794  0F 95 C3                  SETNZ BL
00669797  EB 77                     JMP 0x00669810
LAB_00669799:
00669799  3A C8                     CMP CL,AL
0066979B  74 6A                     JZ 0x00669807
0066979D  8B D1                     MOV EDX,ECX
0066979F  8B F0                     MOV ESI,EAX
006697A1  81 E2 FF 00 00 00         AND EDX,0xff
006697A7  81 E6 FF 00 00 00         AND ESI,0xff
006697AD  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
006697B4  84 DB                     TEST BL,BL
006697B6  75 10                     JNZ 0x006697c8
006697B8  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
006697BF  75 07                     JNZ 0x006697c8
006697C1  BA FE FF FF FF            MOV EDX,0xfffffffe
006697C6  EB 41                     JMP 0x00669809
LAB_006697c8:
006697C8  80 FB 01                  CMP BL,0x1
006697CB  75 0F                     JNZ 0x006697dc
006697CD  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
006697D5  75 05                     JNZ 0x006697dc
006697D7  83 CA FF                  OR EDX,0xffffffff
006697DA  EB 2D                     JMP 0x00669809
LAB_006697dc:
006697DC  84 DB                     TEST BL,BL
006697DE  75 11                     JNZ 0x006697f1
006697E0  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
006697E8  75 07                     JNZ 0x006697f1
006697EA  BA 01 00 00 00            MOV EDX,0x1
006697EF  EB 18                     JMP 0x00669809
LAB_006697f1:
006697F1  80 FB 01                  CMP BL,0x1
006697F4  75 11                     JNZ 0x00669807
006697F6  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
006697FE  75 07                     JNZ 0x00669807
00669800  BA 02 00 00 00            MOV EDX,0x2
00669805  EB 02                     JMP 0x00669809
LAB_00669807:
00669807  33 D2                     XOR EDX,EDX
LAB_00669809:
00669809  33 DB                     XOR EBX,EBX
0066980B  85 D2                     TEST EDX,EDX
0066980D  0F 9C C3                  SETL BL
LAB_00669810:
00669810  8B D3                     MOV EDX,EBX
00669812  85 D2                     TEST EDX,EDX
00669814  0F 85 C3 00 00 00         JNZ 0x006698dd
0066981A  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
00669820  84 D2                     TEST DL,DL
00669822  74 29                     JZ 0x0066984d
00669824  81 E1 FF 00 00 00         AND ECX,0xff
0066982A  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0066982D  8B C8                     MOV ECX,EAX
0066982F  81 E1 FF 00 00 00         AND ECX,0xff
00669835  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0066983C  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066983F  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669846  0F 95 C3                  SETNZ BL
00669849  8B CB                     MOV ECX,EBX
0066984B  EB 77                     JMP 0x006698c4
LAB_0066984d:
0066984D  3A C1                     CMP AL,CL
0066984F  74 68                     JZ 0x006698b9
00669851  8B D0                     MOV EDX,EAX
00669853  81 E1 FF 00 00 00         AND ECX,0xff
00669859  81 E2 FF 00 00 00         AND EDX,0xff
0066985F  8A 9C D1 4F 8A 80 00      MOV BL,byte ptr [ECX + EDX*0x8 + 0x808a4f]
00669866  84 DB                     TEST BL,BL
00669868  75 10                     JNZ 0x0066987a
0066986A  38 9C CA 4F 8A 80 00      CMP byte ptr [EDX + ECX*0x8 + 0x808a4f],BL
00669871  75 07                     JNZ 0x0066987a
00669873  B9 FE FF FF FF            MOV ECX,0xfffffffe
00669878  EB 41                     JMP 0x006698bb
LAB_0066987a:
0066987A  80 FB 01                  CMP BL,0x1
0066987D  75 0F                     JNZ 0x0066988e
0066987F  80 BC CA 4F 8A 80 00 00   CMP byte ptr [EDX + ECX*0x8 + 0x808a4f],0x0
00669887  75 05                     JNZ 0x0066988e
00669889  83 C9 FF                  OR ECX,0xffffffff
0066988C  EB 2D                     JMP 0x006698bb
LAB_0066988e:
0066988E  84 DB                     TEST BL,BL
00669890  75 11                     JNZ 0x006698a3
00669892  80 BC CA 4F 8A 80 00 01   CMP byte ptr [EDX + ECX*0x8 + 0x808a4f],0x1
0066989A  75 07                     JNZ 0x006698a3
0066989C  B9 01 00 00 00            MOV ECX,0x1
006698A1  EB 18                     JMP 0x006698bb
LAB_006698a3:
006698A3  80 FB 01                  CMP BL,0x1
006698A6  75 11                     JNZ 0x006698b9
006698A8  80 BC CA 4F 8A 80 00 01   CMP byte ptr [EDX + ECX*0x8 + 0x808a4f],0x1
006698B0  75 07                     JNZ 0x006698b9
006698B2  B9 02 00 00 00            MOV ECX,0x2
006698B7  EB 02                     JMP 0x006698bb
LAB_006698b9:
006698B9  33 C9                     XOR ECX,ECX
LAB_006698bb:
006698BB  33 D2                     XOR EDX,EDX
006698BD  85 C9                     TEST ECX,ECX
006698BF  0F 9C C2                  SETL DL
006698C2  8B CA                     MOV ECX,EDX
LAB_006698c4:
006698C4  85 C9                     TEST ECX,ECX
006698C6  75 15                     JNZ 0x006698dd
006698C8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006698CB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006698CE  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006698D1  89 11                     MOV dword ptr [ECX],EDX
006698D3  46                        INC ESI
006698D4  83 C1 04                  ADD ECX,0x4
006698D7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006698DA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006698dd:
006698DD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006698E0  83 C7 51                  ADD EDI,0x51
006698E3  41                        INC ECX
006698E4  81 FF 71 8A 80 00         CMP EDI,0x808a71
006698EA  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006698ED  0F 8C 68 FE FF FF         JL 0x0066975b
006698F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006698F6  5F                        POP EDI
006698F7  5E                        POP ESI
006698F8  5B                        POP EBX
006698F9  8B E5                     MOV ESP,EBP
006698FB  5D                        POP EBP
006698FC  C2 0C 00                  RET 0xc
LAB_006698ff:
006698FF  85 D2                     TEST EDX,EDX
00669901  0F 8C 69 01 00 00         JL 0x00669a70
00669907  83 FA 08                  CMP EDX,0x8
0066990A  0F 8D 63 01 00 00         JGE 0x00669a73
00669910  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
00669913  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066991B  0F 84 8D 0C 00 00         JZ 0x0066a5ae
00669921  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669924  33 DB                     XOR EBX,EBX
00669926  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00669929  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0066992C  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_00669931:
00669931  80 3F FF                  CMP byte ptr [EDI],0xff
00669934  0F 84 14 01 00 00         JZ 0x00669a4e
0066993A  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066993F  84 C0                     TEST AL,AL
00669941  74 29                     JZ 0x0066996c
00669943  8B C3                     MOV EAX,EBX
00669945  25 FF 00 00 00            AND EAX,0xff
0066994A  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
0066994D  8B C2                     MOV EAX,EDX
0066994F  25 FF 00 00 00            AND EAX,0xff
00669954  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669957  8A 8C C0 EA 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066995E  33 C0                     XOR EAX,EAX
00669960  3A 8C F6 EA 87 80 00      CMP CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669967  0F 95 C0                  SETNZ AL
0066996A  EB 18                     JMP 0x00669984
LAB_0066996c:
0066996C  52                        PUSH EDX
0066996D  53                        PUSH EBX
0066996E  B9 20 76 80 00            MOV ECX,0x807620
00669973  E8 17 C4 D9 FF            CALL 0x00405d8f
00669978  33 D2                     XOR EDX,EDX
0066997A  85 C0                     TEST EAX,EAX
0066997C  0F 9C C2                  SETL DL
0066997F  8B C2                     MOV EAX,EDX
00669981  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00669984:
00669984  85 C0                     TEST EAX,EAX
00669986  0F 85 C2 00 00 00         JNZ 0x00669a4e
0066998C  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669991  84 C0                     TEST AL,AL
00669993  74 2A                     JZ 0x006699bf
00669995  81 E3 FF 00 00 00         AND EBX,0xff
0066999B  8B C2                     MOV EAX,EDX
0066999D  25 FF 00 00 00            AND EAX,0xff
006699A2  8D 0C DB                  LEA ECX,[EBX + EBX*0x8]
006699A5  33 DB                     XOR EBX,EBX
006699A7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006699AA  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006699B1  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006699B8  0F 95 C3                  SETNZ BL
006699BB  8B C3                     MOV EAX,EBX
006699BD  EB 76                     JMP 0x00669a35
LAB_006699bf:
006699BF  3A D3                     CMP DL,BL
006699C1  74 67                     JZ 0x00669a2a
006699C3  8B C2                     MOV EAX,EDX
006699C5  81 E3 FF 00 00 00         AND EBX,0xff
006699CB  25 FF 00 00 00            AND EAX,0xff
006699D0  8A 8C C3 4F 8A 80 00      MOV CL,byte ptr [EBX + EAX*0x8 + 0x808a4f]
006699D7  84 C9                     TEST CL,CL
006699D9  75 10                     JNZ 0x006699eb
006699DB  38 8C D8 4F 8A 80 00      CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],CL
006699E2  75 07                     JNZ 0x006699eb
006699E4  B8 FE FF FF FF            MOV EAX,0xfffffffe
006699E9  EB 41                     JMP 0x00669a2c
LAB_006699eb:
006699EB  80 F9 01                  CMP CL,0x1
006699EE  75 0F                     JNZ 0x006699ff
006699F0  80 BC D8 4F 8A 80 00 00   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x0
006699F8  75 05                     JNZ 0x006699ff
006699FA  83 C8 FF                  OR EAX,0xffffffff
006699FD  EB 2D                     JMP 0x00669a2c
LAB_006699ff:
006699FF  84 C9                     TEST CL,CL
00669A01  75 11                     JNZ 0x00669a14
00669A03  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
00669A0B  75 07                     JNZ 0x00669a14
00669A0D  B8 01 00 00 00            MOV EAX,0x1
00669A12  EB 18                     JMP 0x00669a2c
LAB_00669a14:
00669A14  80 F9 01                  CMP CL,0x1
00669A17  75 11                     JNZ 0x00669a2a
00669A19  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
00669A21  75 07                     JNZ 0x00669a2a
00669A23  B8 02 00 00 00            MOV EAX,0x2
00669A28  EB 02                     JMP 0x00669a2c
LAB_00669a2a:
00669A2A  33 C0                     XOR EAX,EAX
LAB_00669a2c:
00669A2C  33 C9                     XOR ECX,ECX
00669A2E  85 C0                     TEST EAX,EAX
00669A30  0F 9C C1                  SETL CL
00669A33  8B C1                     MOV EAX,ECX
LAB_00669a35:
00669A35  85 C0                     TEST EAX,EAX
00669A37  75 15                     JNZ 0x00669a4e
00669A39  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669A3C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00669A3F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00669A42  89 08                     MOV dword ptr [EAX],ECX
00669A44  46                        INC ESI
00669A45  83 C0 04                  ADD EAX,0x4
00669A48  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00669A4B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00669a4e:
00669A4E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00669A51  83 C7 51                  ADD EDI,0x51
00669A54  43                        INC EBX
00669A55  81 FF 71 8A 80 00         CMP EDI,0x808a71
00669A5B  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00669A5E  0F 8C CD FE FF FF         JL 0x00669931
00669A64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669A67  5F                        POP EDI
00669A68  5E                        POP ESI
00669A69  5B                        POP EBX
00669A6A  8B E5                     MOV ESP,EBP
00669A6C  5D                        POP EBP
00669A6D  C2 0C 00                  RET 0xc
LAB_00669a70:
00669A70  83 FA 08                  CMP EDX,0x8
LAB_00669a73:
00669A73  0F 85 35 0B 00 00         JNZ 0x0066a5ae
00669A79  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00669A7F  80 FB FF                  CMP BL,0xff
00669A82  0F 84 26 0B 00 00         JZ 0x0066a5ae
00669A88  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00669A8B  33 C9                     XOR ECX,ECX
00669A8D  B8 E9 87 80 00            MOV EAX,0x8087e9
00669A92  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00669A95  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00669a98:
00669A98  80 38 FF                  CMP byte ptr [EAX],0xff
00669A9B  0F 84 16 01 00 00         JZ 0x00669bb7
00669AA1  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669AA6  84 C0                     TEST AL,AL
00669AA8  74 26                     JZ 0x00669ad0
00669AAA  8B C1                     MOV EAX,ECX
00669AAC  25 FF 00 00 00            AND EAX,0xff
00669AB1  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
00669AB4  33 C0                     XOR EAX,EAX
00669AB6  8A C3                     MOV AL,BL
00669AB8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669ABB  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669AC2  33 C0                     XOR EAX,EAX
00669AC4  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669ACB  0F 95 C0                  SETNZ AL
00669ACE  EB 75                     JMP 0x00669b45
LAB_00669ad0:
00669AD0  3A CB                     CMP CL,BL
00669AD2  74 66                     JZ 0x00669b3a
00669AD4  8B F1                     MOV ESI,ECX
00669AD6  33 C0                     XOR EAX,EAX
00669AD8  81 E6 FF 00 00 00         AND ESI,0xff
00669ADE  8A C3                     MOV AL,BL
00669AE0  8A 94 F0 4F 8A 80 00      MOV DL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
00669AE7  84 D2                     TEST DL,DL
00669AE9  75 10                     JNZ 0x00669afb
00669AEB  38 94 C6 4F 8A 80 00      CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],DL
00669AF2  75 07                     JNZ 0x00669afb
00669AF4  B8 FE FF FF FF            MOV EAX,0xfffffffe
00669AF9  EB 41                     JMP 0x00669b3c
LAB_00669afb:
00669AFB  80 FA 01                  CMP DL,0x1
00669AFE  75 0F                     JNZ 0x00669b0f
00669B00  80 BC C6 4F 8A 80 00 00   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x0
00669B08  75 05                     JNZ 0x00669b0f
00669B0A  83 C8 FF                  OR EAX,0xffffffff
00669B0D  EB 2D                     JMP 0x00669b3c
LAB_00669b0f:
00669B0F  84 D2                     TEST DL,DL
00669B11  75 11                     JNZ 0x00669b24
00669B13  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
00669B1B  75 07                     JNZ 0x00669b24
00669B1D  B8 01 00 00 00            MOV EAX,0x1
00669B22  EB 18                     JMP 0x00669b3c
LAB_00669b24:
00669B24  80 FA 01                  CMP DL,0x1
00669B27  75 11                     JNZ 0x00669b3a
00669B29  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
00669B31  75 07                     JNZ 0x00669b3a
00669B33  B8 02 00 00 00            MOV EAX,0x2
00669B38  EB 02                     JMP 0x00669b3c
LAB_00669b3a:
00669B3A  33 C0                     XOR EAX,EAX
LAB_00669b3c:
00669B3C  33 D2                     XOR EDX,EDX
00669B3E  85 C0                     TEST EAX,EAX
00669B40  0F 9C C2                  SETL DL
00669B43  8B C2                     MOV EAX,EDX
LAB_00669b45:
00669B45  85 C0                     TEST EAX,EAX
00669B47  75 6E                     JNZ 0x00669bb7
00669B49  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669B4E  88 5D 10                  MOV byte ptr [EBP + 0x10],BL
00669B51  84 C0                     TEST AL,AL
00669B53  74 2B                     JZ 0x00669b80
00669B55  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669B58  81 E1 FF 00 00 00         AND ECX,0xff
00669B5E  25 FF 00 00 00            AND EAX,0xff
00669B63  33 D2                     XOR EDX,EDX
00669B65  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00669B68  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669B6B  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669B72  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669B79  0F 95 C2                  SETNZ DL
00669B7C  8B C2                     MOV EAX,EDX
00669B7E  EB 1E                     JMP 0x00669b9e
LAB_00669b80:
00669B80  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669B83  51                        PUSH ECX
00669B84  50                        PUSH EAX
00669B85  B9 20 76 80 00            MOV ECX,0x807620
00669B8A  E8 00 C2 D9 FF            CALL 0x00405d8f
00669B8F  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00669B95  33 C9                     XOR ECX,ECX
00669B97  85 C0                     TEST EAX,EAX
00669B99  0F 9C C1                  SETL CL
00669B9C  8B C1                     MOV EAX,ECX
LAB_00669b9e:
00669B9E  85 C0                     TEST EAX,EAX
00669BA0  75 15                     JNZ 0x00669bb7
00669BA2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00669BA5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00669BA8  41                        INC ECX
00669BA9  89 17                     MOV dword ptr [EDI],EDX
00669BAB  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
00669BB1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00669BB4  83 C7 04                  ADD EDI,0x4
LAB_00669bb7:
00669BB7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00669BBA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00669BBD  83 C0 51                  ADD EAX,0x51
00669BC0  41                        INC ECX
00669BC1  3D 71 8A 80 00            CMP EAX,0x808a71
00669BC6  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00669BC9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00669BCC  0F 8C C6 FE FF FF         JL 0x00669a98
00669BD2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669BD5  5F                        POP EDI
00669BD6  5E                        POP ESI
00669BD7  5B                        POP EBX
00669BD8  8B E5                     MOV ESP,EBP
00669BDA  5D                        POP EBP
00669BDB  C2 0C 00                  RET 0xc
LAB_00669bde:
00669BDE  83 F8 04                  CMP EAX,0x4
00669BE1  0F 85 E4 04 00 00         JNZ 0x0066a0cb
00669BE7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00669BEA  83 FB 09                  CMP EBX,0x9
00669BED  0F 85 79 01 00 00         JNZ 0x00669d6c
00669BF3  8B 01                     MOV EAX,dword ptr [ECX]
00669BF5  FF 50 18                  CALL dword ptr [EAX + 0x18]
00669BF8  8B D8                     MOV EBX,EAX
00669BFA  85 DB                     TEST EBX,EBX
00669BFC  0F 8C AC 09 00 00         JL 0x0066a5ae
00669C02  83 FB 08                  CMP EBX,0x8
00669C05  0F 8D A3 09 00 00         JGE 0x0066a5ae
00669C0B  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
00669C0E  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
00669C16  0F 84 92 09 00 00         JZ 0x0066a5ae
00669C1C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00669C1F  33 C9                     XOR ECX,ECX
00669C21  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00669C24  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00669C27  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_00669c2c:
00669C2C  3B CB                     CMP ECX,EBX
00669C2E  0F 84 19 01 00 00         JZ 0x00669d4d
00669C34  80 3F FF                  CMP byte ptr [EDI],0xff
00669C37  0F 84 10 01 00 00         JZ 0x00669d4d
00669C3D  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669C42  84 C0                     TEST AL,AL
00669C44  74 29                     JZ 0x00669c6f
00669C46  8B C1                     MOV EAX,ECX
00669C48  33 D2                     XOR EDX,EDX
00669C4A  25 FF 00 00 00            AND EAX,0xff
00669C4F  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
00669C52  8B C3                     MOV EAX,EBX
00669C54  25 FF 00 00 00            AND EAX,0xff
00669C59  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669C5C  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669C63  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669C6A  0F 95 C2                  SETNZ DL
00669C6D  EB 76                     JMP 0x00669ce5
LAB_00669c6f:
00669C6F  3A CB                     CMP CL,BL
00669C71  74 69                     JZ 0x00669cdc
00669C73  8B C1                     MOV EAX,ECX
00669C75  8B F3                     MOV ESI,EBX
00669C77  25 FF 00 00 00            AND EAX,0xff
00669C7C  81 E6 FF 00 00 00         AND ESI,0xff
00669C82  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
00669C89  84 D2                     TEST DL,DL
00669C8B  75 10                     JNZ 0x00669c9d
00669C8D  38 94 F0 4F 8A 80 00      CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],DL
00669C94  75 07                     JNZ 0x00669c9d
00669C96  B8 FE FF FF FF            MOV EAX,0xfffffffe
00669C9B  EB 41                     JMP 0x00669cde
LAB_00669c9d:
00669C9D  80 FA 01                  CMP DL,0x1
00669CA0  75 0F                     JNZ 0x00669cb1
00669CA2  80 BC F0 4F 8A 80 00 00   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x0
00669CAA  75 05                     JNZ 0x00669cb1
00669CAC  83 C8 FF                  OR EAX,0xffffffff
00669CAF  EB 2D                     JMP 0x00669cde
LAB_00669cb1:
00669CB1  84 D2                     TEST DL,DL
00669CB3  75 11                     JNZ 0x00669cc6
00669CB5  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
00669CBD  75 07                     JNZ 0x00669cc6
00669CBF  B8 01 00 00 00            MOV EAX,0x1
00669CC4  EB 18                     JMP 0x00669cde
LAB_00669cc6:
00669CC6  80 FA 01                  CMP DL,0x1
00669CC9  75 11                     JNZ 0x00669cdc
00669CCB  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
00669CD3  75 07                     JNZ 0x00669cdc
00669CD5  B8 02 00 00 00            MOV EAX,0x2
00669CDA  EB 02                     JMP 0x00669cde
LAB_00669cdc:
00669CDC  33 C0                     XOR EAX,EAX
LAB_00669cde:
00669CDE  33 D2                     XOR EDX,EDX
00669CE0  85 C0                     TEST EAX,EAX
00669CE2  0F 9C C2                  SETL DL
LAB_00669ce5:
00669CE5  8B C2                     MOV EAX,EDX
00669CE7  85 C0                     TEST EAX,EAX
00669CE9  75 5F                     JNZ 0x00669d4a
00669CEB  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669CF0  84 C0                     TEST AL,AL
00669CF2  74 28                     JZ 0x00669d1c
00669CF4  81 E1 FF 00 00 00         AND ECX,0xff
00669CFA  8B C3                     MOV EAX,EBX
00669CFC  25 FF 00 00 00            AND EAX,0xff
00669D01  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00669D04  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669D07  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669D0E  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669D15  0F 95 C2                  SETNZ DL
00669D18  8B C2                     MOV EAX,EDX
00669D1A  EB 15                     JMP 0x00669d31
LAB_00669d1c:
00669D1C  51                        PUSH ECX
00669D1D  53                        PUSH EBX
00669D1E  B9 20 76 80 00            MOV ECX,0x807620
00669D23  E8 67 C0 D9 FF            CALL 0x00405d8f
00669D28  33 C9                     XOR ECX,ECX
00669D2A  85 C0                     TEST EAX,EAX
00669D2C  0F 9C C1                  SETL CL
00669D2F  8B C1                     MOV EAX,ECX
LAB_00669d31:
00669D31  85 C0                     TEST EAX,EAX
00669D33  75 15                     JNZ 0x00669d4a
00669D35  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669D38  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00669D3B  89 10                     MOV dword ptr [EAX],EDX
00669D3D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00669D40  42                        INC EDX
00669D41  83 C0 04                  ADD EAX,0x4
00669D44  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00669D47  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00669d4a:
00669D4A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_00669d4d:
00669D4D  83 C7 51                  ADD EDI,0x51
00669D50  41                        INC ECX
00669D51  81 FF 71 8A 80 00         CMP EDI,0x808a71
00669D57  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00669D5A  0F 8C CC FE FF FF         JL 0x00669c2c
00669D60  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669D63  5F                        POP EDI
00669D64  5E                        POP ESI
00669D65  5B                        POP EBX
00669D66  8B E5                     MOV ESP,EBP
00669D68  5D                        POP EBP
00669D69  C2 0C 00                  RET 0xc
LAB_00669d6c:
00669D6C  85 DB                     TEST EBX,EBX
00669D6E  0F 8C D5 01 00 00         JL 0x00669f49
00669D74  83 FB 08                  CMP EBX,0x8
00669D77  0F 8D CF 01 00 00         JGE 0x00669f4c
00669D7D  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
00669D80  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
00669D88  0F 84 20 08 00 00         JZ 0x0066a5ae
00669D8E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00669D91  33 C0                     XOR EAX,EAX
00669D93  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00669D96  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00669D99  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_00669d9e:
00669D9E  3B C3                     CMP EAX,EBX
00669DA0  0F 84 84 01 00 00         JZ 0x00669f2a
00669DA6  80 3F FF                  CMP byte ptr [EDI],0xff
00669DA9  0F 84 7B 01 00 00         JZ 0x00669f2a
00669DAF  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00669DB5  84 C9                     TEST CL,CL
00669DB7  74 2B                     JZ 0x00669de4
00669DB9  8B C8                     MOV ECX,EAX
00669DBB  81 E1 FF 00 00 00         AND ECX,0xff
00669DC1  8D 34 C9                  LEA ESI,[ECX + ECX*0x8]
00669DC4  8B CB                     MOV ECX,EBX
00669DC6  81 E1 FF 00 00 00         AND ECX,0xff
00669DCC  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00669DCF  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669DD6  33 C9                     XOR ECX,ECX
00669DD8  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669DDF  0F 95 C1                  SETNZ CL
00669DE2  EB 79                     JMP 0x00669e5d
LAB_00669de4:
00669DE4  3A C3                     CMP AL,BL
00669DE6  74 6A                     JZ 0x00669e52
00669DE8  8B C8                     MOV ECX,EAX
00669DEA  8B F3                     MOV ESI,EBX
00669DEC  81 E1 FF 00 00 00         AND ECX,0xff
00669DF2  81 E6 FF 00 00 00         AND ESI,0xff
00669DF8  8A 94 CE 4F 8A 80 00      MOV DL,byte ptr [ESI + ECX*0x8 + 0x808a4f]
00669DFF  84 D2                     TEST DL,DL
00669E01  75 10                     JNZ 0x00669e13
00669E03  38 94 F1 4F 8A 80 00      CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],DL
00669E0A  75 07                     JNZ 0x00669e13
00669E0C  B9 FE FF FF FF            MOV ECX,0xfffffffe
00669E11  EB 41                     JMP 0x00669e54
LAB_00669e13:
00669E13  80 FA 01                  CMP DL,0x1
00669E16  75 0F                     JNZ 0x00669e27
00669E18  80 BC F1 4F 8A 80 00 00   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x0
00669E20  75 05                     JNZ 0x00669e27
00669E22  83 C9 FF                  OR ECX,0xffffffff
00669E25  EB 2D                     JMP 0x00669e54
LAB_00669e27:
00669E27  84 D2                     TEST DL,DL
00669E29  75 11                     JNZ 0x00669e3c
00669E2B  80 BC F1 4F 8A 80 00 01   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x1
00669E33  75 07                     JNZ 0x00669e3c
00669E35  B9 01 00 00 00            MOV ECX,0x1
00669E3A  EB 18                     JMP 0x00669e54
LAB_00669e3c:
00669E3C  80 FA 01                  CMP DL,0x1
00669E3F  75 11                     JNZ 0x00669e52
00669E41  80 BC F1 4F 8A 80 00 01   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x1
00669E49  75 07                     JNZ 0x00669e52
00669E4B  B9 02 00 00 00            MOV ECX,0x2
00669E50  EB 02                     JMP 0x00669e54
LAB_00669e52:
00669E52  33 C9                     XOR ECX,ECX
LAB_00669e54:
00669E54  33 D2                     XOR EDX,EDX
00669E56  85 C9                     TEST ECX,ECX
00669E58  0F 9C C2                  SETL DL
00669E5B  8B CA                     MOV ECX,EDX
LAB_00669e5d:
00669E5D  85 C9                     TEST ECX,ECX
00669E5F  0F 85 C2 00 00 00         JNZ 0x00669f27
00669E65  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00669E6B  84 C9                     TEST CL,CL
00669E6D  74 29                     JZ 0x00669e98
00669E6F  25 FF 00 00 00            AND EAX,0xff
00669E74  33 D2                     XOR EDX,EDX
00669E76  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00669E79  8B C3                     MOV EAX,EBX
00669E7B  25 FF 00 00 00            AND EAX,0xff
00669E80  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669E87  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00669E8A  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00669E91  0F 95 C2                  SETNZ DL
00669E94  8B C2                     MOV EAX,EDX
00669E96  EB 76                     JMP 0x00669f0e
LAB_00669e98:
00669E98  3A D8                     CMP BL,AL
00669E9A  74 67                     JZ 0x00669f03
00669E9C  8B CB                     MOV ECX,EBX
00669E9E  25 FF 00 00 00            AND EAX,0xff
00669EA3  81 E1 FF 00 00 00         AND ECX,0xff
00669EA9  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00669EB0  84 D2                     TEST DL,DL
00669EB2  75 10                     JNZ 0x00669ec4
00669EB4  38 94 C1 4F 8A 80 00      CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],DL
00669EBB  75 07                     JNZ 0x00669ec4
00669EBD  B8 FE FF FF FF            MOV EAX,0xfffffffe
00669EC2  EB 41                     JMP 0x00669f05
LAB_00669ec4:
00669EC4  80 FA 01                  CMP DL,0x1
00669EC7  75 0F                     JNZ 0x00669ed8
00669EC9  80 BC C1 4F 8A 80 00 00   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x0
00669ED1  75 05                     JNZ 0x00669ed8
00669ED3  83 C8 FF                  OR EAX,0xffffffff
00669ED6  EB 2D                     JMP 0x00669f05
LAB_00669ed8:
00669ED8  84 D2                     TEST DL,DL
00669EDA  75 11                     JNZ 0x00669eed
00669EDC  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00669EE4  75 07                     JNZ 0x00669eed
00669EE6  B8 01 00 00 00            MOV EAX,0x1
00669EEB  EB 18                     JMP 0x00669f05
LAB_00669eed:
00669EED  80 FA 01                  CMP DL,0x1
00669EF0  75 11                     JNZ 0x00669f03
00669EF2  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
00669EFA  75 07                     JNZ 0x00669f03
00669EFC  B8 02 00 00 00            MOV EAX,0x2
00669F01  EB 02                     JMP 0x00669f05
LAB_00669f03:
00669F03  33 C0                     XOR EAX,EAX
LAB_00669f05:
00669F05  33 C9                     XOR ECX,ECX
00669F07  85 C0                     TEST EAX,EAX
00669F09  0F 9C C1                  SETL CL
00669F0C  8B C1                     MOV EAX,ECX
LAB_00669f0e:
00669F0E  85 C0                     TEST EAX,EAX
00669F10  75 15                     JNZ 0x00669f27
00669F12  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669F15  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00669F18  89 10                     MOV dword ptr [EAX],EDX
00669F1A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00669F1D  42                        INC EDX
00669F1E  83 C0 04                  ADD EAX,0x4
00669F21  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00669F24  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00669f27:
00669F27  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_00669f2a:
00669F2A  83 C7 51                  ADD EDI,0x51
00669F2D  40                        INC EAX
00669F2E  81 FF 71 8A 80 00         CMP EDI,0x808a71
00669F34  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00669F37  0F 8C 61 FE FF FF         JL 0x00669d9e
00669F3D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00669F40  5F                        POP EDI
00669F41  5E                        POP ESI
00669F42  5B                        POP EBX
00669F43  8B E5                     MOV ESP,EBP
00669F45  5D                        POP EBP
00669F46  C2 0C 00                  RET 0xc
LAB_00669f49:
00669F49  83 FB 08                  CMP EBX,0x8
LAB_00669f4c:
00669F4C  0F 85 5C 06 00 00         JNZ 0x0066a5ae
00669F52  A0 4D 87 80 00            MOV AL,[0x0080874d]
00669F57  3C FF                     CMP AL,0xff
00669F59  0F 84 4F 06 00 00         JZ 0x0066a5ae
00669F5F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00669F62  33 D2                     XOR EDX,EDX
00669F64  BE E9 87 80 00            MOV ESI,0x8087e9
00669F69  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00669F6C  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00669F6F  EB 05                     JMP 0x00669f76
LAB_00669f71:
00669F71  A0 4D 87 80 00            MOV AL,[0x0080874d]
LAB_00669f76:
00669F76  33 C9                     XOR ECX,ECX
00669F78  8A C8                     MOV CL,AL
00669F7A  3B D1                     CMP EDX,ECX
00669F7C  0F 84 27 01 00 00         JZ 0x0066a0a9
00669F82  80 3E FF                  CMP byte ptr [ESI],0xff
00669F85  0F 84 1E 01 00 00         JZ 0x0066a0a9
00669F8B  88 45 10                  MOV byte ptr [EBP + 0x10],AL
00669F8E  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669F93  84 C0                     TEST AL,AL
00669F95  8A DA                     MOV BL,DL
00669F97  74 2F                     JZ 0x00669fc8
00669F99  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00669F9C  25 FF 00 00 00            AND EAX,0xff
00669FA1  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00669FA4  8B C3                     MOV EAX,EBX
00669FA6  25 FF 00 00 00            AND EAX,0xff
00669FAB  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
00669FAE  8A 84 C9 EA 87 80 00      MOV AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00669FB5  33 C9                     XOR ECX,ECX
00669FB7  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00669FBE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00669FC1  0F 95 C1                  SETNZ CL
00669FC4  8B C1                     MOV EAX,ECX
00669FC6  EB 1B                     JMP 0x00669fe3
LAB_00669fc8:
00669FC8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00669FCB  B9 20 76 80 00            MOV ECX,0x807620
00669FD0  52                        PUSH EDX
00669FD1  53                        PUSH EBX
00669FD2  E8 B8 BD D9 FF            CALL 0x00405d8f
00669FD7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00669FDA  33 C9                     XOR ECX,ECX
00669FDC  85 C0                     TEST EAX,EAX
00669FDE  0F 9C C1                  SETL CL
00669FE1  8B C1                     MOV EAX,ECX
LAB_00669fe3:
00669FE3  85 C0                     TEST EAX,EAX
00669FE5  0F 85 BE 00 00 00         JNZ 0x0066a0a9
00669FEB  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
00669FF0  84 C0                     TEST AL,AL
00669FF2  74 2B                     JZ 0x0066a01f
00669FF4  81 E3 FF 00 00 00         AND EBX,0xff
00669FFA  33 C9                     XOR ECX,ECX
00669FFC  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0066A002  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
0066A005  33 DB                     XOR EBX,EBX
0066A007  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066A00A  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A011  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066A018  0F 95 C3                  SETNZ BL
0066A01B  8B C3                     MOV EAX,EBX
0066A01D  EB 7A                     JMP 0x0066a099
LAB_0066a01f:
0066A01F  A0 4D 87 80 00            MOV AL,[0x0080874d]
0066A024  3A C3                     CMP AL,BL
0066A026  74 66                     JZ 0x0066a08e
0066A028  33 C9                     XOR ECX,ECX
0066A02A  81 E3 FF 00 00 00         AND EBX,0xff
0066A030  8A C8                     MOV CL,AL
0066A032  8B C1                     MOV EAX,ECX
0066A034  8A 8C C3 4F 8A 80 00      MOV CL,byte ptr [EBX + EAX*0x8 + 0x808a4f]
0066A03B  84 C9                     TEST CL,CL
0066A03D  75 10                     JNZ 0x0066a04f
0066A03F  38 8C D8 4F 8A 80 00      CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],CL
0066A046  75 07                     JNZ 0x0066a04f
0066A048  B8 FE FF FF FF            MOV EAX,0xfffffffe
0066A04D  EB 41                     JMP 0x0066a090
LAB_0066a04f:
0066A04F  80 F9 01                  CMP CL,0x1
0066A052  75 0F                     JNZ 0x0066a063
0066A054  80 BC D8 4F 8A 80 00 00   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x0
0066A05C  75 05                     JNZ 0x0066a063
0066A05E  83 C8 FF                  OR EAX,0xffffffff
0066A061  EB 2D                     JMP 0x0066a090
LAB_0066a063:
0066A063  84 C9                     TEST CL,CL
0066A065  75 11                     JNZ 0x0066a078
0066A067  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
0066A06F  75 07                     JNZ 0x0066a078
0066A071  B8 01 00 00 00            MOV EAX,0x1
0066A076  EB 18                     JMP 0x0066a090
LAB_0066a078:
0066A078  80 F9 01                  CMP CL,0x1
0066A07B  75 11                     JNZ 0x0066a08e
0066A07D  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
0066A085  75 07                     JNZ 0x0066a08e
0066A087  B8 02 00 00 00            MOV EAX,0x2
0066A08C  EB 02                     JMP 0x0066a090
LAB_0066a08e:
0066A08E  33 C0                     XOR EAX,EAX
LAB_0066a090:
0066A090  33 C9                     XOR ECX,ECX
0066A092  85 C0                     TEST EAX,EAX
0066A094  0F 9C C1                  SETL CL
0066A097  8B C1                     MOV EAX,ECX
LAB_0066a099:
0066A099  85 C0                     TEST EAX,EAX
0066A09B  75 0C                     JNZ 0x0066a0a9
0066A09D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066A0A0  89 17                     MOV dword ptr [EDI],EDX
0066A0A2  41                        INC ECX
0066A0A3  83 C7 04                  ADD EDI,0x4
0066A0A6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066a0a9:
0066A0A9  83 C6 51                  ADD ESI,0x51
0066A0AC  42                        INC EDX
0066A0AD  81 FE 71 8A 80 00         CMP ESI,0x808a71
0066A0B3  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0066A0B6  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0066A0B9  0F 8C B2 FE FF FF         JL 0x00669f71
0066A0BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066A0C2  5F                        POP EDI
0066A0C3  5E                        POP ESI
0066A0C4  5B                        POP EBX
0066A0C5  8B E5                     MOV ESP,EBP
0066A0C7  5D                        POP EBP
0066A0C8  C2 0C 00                  RET 0xc
LAB_0066a0cb:
0066A0CB  83 F8 FE                  CMP EAX,-0x2
0066A0CE  0F 85 DA 04 00 00         JNZ 0x0066a5ae
0066A0D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0066A0D7  83 FB 09                  CMP EBX,0x9
0066A0DA  0F 85 7B 01 00 00         JNZ 0x0066a25b
0066A0E0  8B 11                     MOV EDX,dword ptr [ECX]
0066A0E2  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066A0E5  8B D8                     MOV EBX,EAX
0066A0E7  85 DB                     TEST EBX,EBX
0066A0E9  0F 8C BF 04 00 00         JL 0x0066a5ae
0066A0EF  83 FB 08                  CMP EBX,0x8
0066A0F2  0F 8D B6 04 00 00         JGE 0x0066a5ae
0066A0F8  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
0066A0FB  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066A103  0F 84 A5 04 00 00         JZ 0x0066a5ae
0066A109  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066A10C  33 C9                     XOR ECX,ECX
0066A10E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0066A111  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0066A114  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_0066a119:
0066A119  3B CB                     CMP ECX,EBX
0066A11B  0F 84 1B 01 00 00         JZ 0x0066a23c
0066A121  80 3F FF                  CMP byte ptr [EDI],0xff
0066A124  0F 84 12 01 00 00         JZ 0x0066a23c
0066A12A  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066A12F  84 C0                     TEST AL,AL
0066A131  74 29                     JZ 0x0066a15c
0066A133  8B C1                     MOV EAX,ECX
0066A135  25 FF 00 00 00            AND EAX,0xff
0066A13A  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
0066A13D  8B C3                     MOV EAX,EBX
0066A13F  25 FF 00 00 00            AND EAX,0xff
0066A144  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066A147  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A14E  33 C0                     XOR EAX,EAX
0066A150  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0066A157  0F 95 C0                  SETNZ AL
0066A15A  EB 78                     JMP 0x0066a1d4
LAB_0066a15c:
0066A15C  3A CB                     CMP CL,BL
0066A15E  74 69                     JZ 0x0066a1c9
0066A160  8B C1                     MOV EAX,ECX
0066A162  8B F3                     MOV ESI,EBX
0066A164  25 FF 00 00 00            AND EAX,0xff
0066A169  81 E6 FF 00 00 00         AND ESI,0xff
0066A16F  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
0066A176  84 D2                     TEST DL,DL
0066A178  75 10                     JNZ 0x0066a18a
0066A17A  38 94 F0 4F 8A 80 00      CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],DL
0066A181  75 07                     JNZ 0x0066a18a
0066A183  B8 FE FF FF FF            MOV EAX,0xfffffffe
0066A188  EB 41                     JMP 0x0066a1cb
LAB_0066a18a:
0066A18A  80 FA 01                  CMP DL,0x1
0066A18D  75 0F                     JNZ 0x0066a19e
0066A18F  80 BC F0 4F 8A 80 00 00   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x0
0066A197  75 05                     JNZ 0x0066a19e
0066A199  83 C8 FF                  OR EAX,0xffffffff
0066A19C  EB 2D                     JMP 0x0066a1cb
LAB_0066a19e:
0066A19E  84 D2                     TEST DL,DL
0066A1A0  75 11                     JNZ 0x0066a1b3
0066A1A2  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0066A1AA  75 07                     JNZ 0x0066a1b3
0066A1AC  B8 01 00 00 00            MOV EAX,0x1
0066A1B1  EB 18                     JMP 0x0066a1cb
LAB_0066a1b3:
0066A1B3  80 FA 01                  CMP DL,0x1
0066A1B6  75 11                     JNZ 0x0066a1c9
0066A1B8  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0066A1C0  75 07                     JNZ 0x0066a1c9
0066A1C2  B8 02 00 00 00            MOV EAX,0x2
0066A1C7  EB 02                     JMP 0x0066a1cb
LAB_0066a1c9:
0066A1C9  33 C0                     XOR EAX,EAX
LAB_0066a1cb:
0066A1CB  33 D2                     XOR EDX,EDX
0066A1CD  85 C0                     TEST EAX,EAX
0066A1CF  0F 9C C2                  SETL DL
0066A1D2  8B C2                     MOV EAX,EDX
LAB_0066a1d4:
0066A1D4  85 C0                     TEST EAX,EAX
0066A1D6  75 4C                     JNZ 0x0066a224
0066A1D8  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066A1DD  84 C0                     TEST AL,AL
0066A1DF  74 2A                     JZ 0x0066a20b
0066A1E1  81 E1 FF 00 00 00         AND ECX,0xff
0066A1E7  8B C3                     MOV EAX,EBX
0066A1E9  25 FF 00 00 00            AND EAX,0xff
0066A1EE  33 D2                     XOR EDX,EDX
0066A1F0  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066A1F3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066A1F6  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066A1FD  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A204  0F 95 C2                  SETNZ DL
0066A207  8B C2                     MOV EAX,EDX
0066A209  EB 15                     JMP 0x0066a220
LAB_0066a20b:
0066A20B  51                        PUSH ECX
0066A20C  53                        PUSH EBX
0066A20D  B9 20 76 80 00            MOV ECX,0x807620
0066A212  E8 78 BB D9 FF            CALL 0x00405d8f
0066A217  33 C9                     XOR ECX,ECX
0066A219  85 C0                     TEST EAX,EAX
0066A21B  0F 9C C1                  SETL CL
0066A21E  8B C1                     MOV EAX,ECX
LAB_0066a220:
0066A220  85 C0                     TEST EAX,EAX
0066A222  74 15                     JZ 0x0066a239
LAB_0066a224:
0066A224  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066A227  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0066A22A  89 10                     MOV dword ptr [EAX],EDX
0066A22C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066A22F  42                        INC EDX
0066A230  83 C0 04                  ADD EAX,0x4
0066A233  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066A236  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0066a239:
0066A239  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_0066a23c:
0066A23C  83 C7 51                  ADD EDI,0x51
0066A23F  41                        INC ECX
0066A240  81 FF 71 8A 80 00         CMP EDI,0x808a71
0066A246  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0066A249  0F 8C CA FE FF FF         JL 0x0066a119
0066A24F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066A252  5F                        POP EDI
0066A253  5E                        POP ESI
0066A254  5B                        POP EBX
0066A255  8B E5                     MOV ESP,EBP
0066A257  5D                        POP EBP
0066A258  C2 0C 00                  RET 0xc
LAB_0066a25b:
0066A25B  85 DB                     TEST EBX,EBX
0066A25D  0F 8C D5 01 00 00         JL 0x0066a438
0066A263  83 FB 08                  CMP EBX,0x8
0066A266  0F 8D CF 01 00 00         JGE 0x0066a43b
0066A26C  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
0066A26F  80 BC C0 E9 87 80 00 FF   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0xff
0066A277  0F 84 31 03 00 00         JZ 0x0066a5ae
0066A27D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0066A280  33 C0                     XOR EAX,EAX
0066A282  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0066A285  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0066A288  BF E9 87 80 00            MOV EDI,0x8087e9
LAB_0066a28d:
0066A28D  3B C3                     CMP EAX,EBX
0066A28F  0F 84 84 01 00 00         JZ 0x0066a419
0066A295  80 3F FF                  CMP byte ptr [EDI],0xff
0066A298  0F 84 7B 01 00 00         JZ 0x0066a419
0066A29E  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0066A2A4  84 C9                     TEST CL,CL
0066A2A6  74 2B                     JZ 0x0066a2d3
0066A2A8  8B C8                     MOV ECX,EAX
0066A2AA  81 E1 FF 00 00 00         AND ECX,0xff
0066A2B0  8D 34 C9                  LEA ESI,[ECX + ECX*0x8]
0066A2B3  8B CB                     MOV ECX,EBX
0066A2B5  81 E1 FF 00 00 00         AND ECX,0xff
0066A2BB  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066A2BE  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066A2C5  33 C9                     XOR ECX,ECX
0066A2C7  3A 94 F6 EA 87 80 00      CMP DL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0066A2CE  0F 95 C1                  SETNZ CL
0066A2D1  EB 79                     JMP 0x0066a34c
LAB_0066a2d3:
0066A2D3  3A C3                     CMP AL,BL
0066A2D5  74 6A                     JZ 0x0066a341
0066A2D7  8B C8                     MOV ECX,EAX
0066A2D9  8B F3                     MOV ESI,EBX
0066A2DB  81 E1 FF 00 00 00         AND ECX,0xff
0066A2E1  81 E6 FF 00 00 00         AND ESI,0xff
0066A2E7  8A 94 CE 4F 8A 80 00      MOV DL,byte ptr [ESI + ECX*0x8 + 0x808a4f]
0066A2EE  84 D2                     TEST DL,DL
0066A2F0  75 10                     JNZ 0x0066a302
0066A2F2  38 94 F1 4F 8A 80 00      CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],DL
0066A2F9  75 07                     JNZ 0x0066a302
0066A2FB  B9 FE FF FF FF            MOV ECX,0xfffffffe
0066A300  EB 41                     JMP 0x0066a343
LAB_0066a302:
0066A302  80 FA 01                  CMP DL,0x1
0066A305  75 0F                     JNZ 0x0066a316
0066A307  80 BC F1 4F 8A 80 00 00   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x0
0066A30F  75 05                     JNZ 0x0066a316
0066A311  83 C9 FF                  OR ECX,0xffffffff
0066A314  EB 2D                     JMP 0x0066a343
LAB_0066a316:
0066A316  84 D2                     TEST DL,DL
0066A318  75 11                     JNZ 0x0066a32b
0066A31A  80 BC F1 4F 8A 80 00 01   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x1
0066A322  75 07                     JNZ 0x0066a32b
0066A324  B9 01 00 00 00            MOV ECX,0x1
0066A329  EB 18                     JMP 0x0066a343
LAB_0066a32b:
0066A32B  80 FA 01                  CMP DL,0x1
0066A32E  75 11                     JNZ 0x0066a341
0066A330  80 BC F1 4F 8A 80 00 01   CMP byte ptr [ECX + ESI*0x8 + 0x808a4f],0x1
0066A338  75 07                     JNZ 0x0066a341
0066A33A  B9 02 00 00 00            MOV ECX,0x2
0066A33F  EB 02                     JMP 0x0066a343
LAB_0066a341:
0066A341  33 C9                     XOR ECX,ECX
LAB_0066a343:
0066A343  33 D2                     XOR EDX,EDX
0066A345  85 C9                     TEST ECX,ECX
0066A347  0F 9C C2                  SETL DL
0066A34A  8B CA                     MOV ECX,EDX
LAB_0066a34c:
0066A34C  85 C9                     TEST ECX,ECX
0066A34E  0F 85 AD 00 00 00         JNZ 0x0066a401
0066A354  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0066A35A  84 C9                     TEST CL,CL
0066A35C  74 29                     JZ 0x0066a387
0066A35E  25 FF 00 00 00            AND EAX,0xff
0066A363  33 D2                     XOR EDX,EDX
0066A365  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0066A368  8B C3                     MOV EAX,EBX
0066A36A  25 FF 00 00 00            AND EAX,0xff
0066A36F  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066A376  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066A379  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A380  0F 95 C2                  SETNZ DL
0066A383  8B C2                     MOV EAX,EDX
0066A385  EB 76                     JMP 0x0066a3fd
LAB_0066a387:
0066A387  3A D8                     CMP BL,AL
0066A389  74 67                     JZ 0x0066a3f2
0066A38B  8B CB                     MOV ECX,EBX
0066A38D  25 FF 00 00 00            AND EAX,0xff
0066A392  81 E1 FF 00 00 00         AND ECX,0xff
0066A398  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0066A39F  84 D2                     TEST DL,DL
0066A3A1  75 10                     JNZ 0x0066a3b3
0066A3A3  38 94 C1 4F 8A 80 00      CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],DL
0066A3AA  75 07                     JNZ 0x0066a3b3
0066A3AC  B8 FE FF FF FF            MOV EAX,0xfffffffe
0066A3B1  EB 41                     JMP 0x0066a3f4
LAB_0066a3b3:
0066A3B3  80 FA 01                  CMP DL,0x1
0066A3B6  75 0F                     JNZ 0x0066a3c7
0066A3B8  80 BC C1 4F 8A 80 00 00   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x0
0066A3C0  75 05                     JNZ 0x0066a3c7
0066A3C2  83 C8 FF                  OR EAX,0xffffffff
0066A3C5  EB 2D                     JMP 0x0066a3f4
LAB_0066a3c7:
0066A3C7  84 D2                     TEST DL,DL
0066A3C9  75 11                     JNZ 0x0066a3dc
0066A3CB  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0066A3D3  75 07                     JNZ 0x0066a3dc
0066A3D5  B8 01 00 00 00            MOV EAX,0x1
0066A3DA  EB 18                     JMP 0x0066a3f4
LAB_0066a3dc:
0066A3DC  80 FA 01                  CMP DL,0x1
0066A3DF  75 11                     JNZ 0x0066a3f2
0066A3E1  80 BC C1 4F 8A 80 00 01   CMP byte ptr [ECX + EAX*0x8 + 0x808a4f],0x1
0066A3E9  75 07                     JNZ 0x0066a3f2
0066A3EB  B8 02 00 00 00            MOV EAX,0x2
0066A3F0  EB 02                     JMP 0x0066a3f4
LAB_0066a3f2:
0066A3F2  33 C0                     XOR EAX,EAX
LAB_0066a3f4:
0066A3F4  33 C9                     XOR ECX,ECX
0066A3F6  85 C0                     TEST EAX,EAX
0066A3F8  0F 9C C1                  SETL CL
0066A3FB  8B C1                     MOV EAX,ECX
LAB_0066a3fd:
0066A3FD  85 C0                     TEST EAX,EAX
0066A3FF  74 15                     JZ 0x0066a416
LAB_0066a401:
0066A401  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066A404  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0066A407  89 10                     MOV dword ptr [EAX],EDX
0066A409  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066A40C  42                        INC EDX
0066A40D  83 C0 04                  ADD EAX,0x4
0066A410  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066A413  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0066a416:
0066A416  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0066a419:
0066A419  83 C7 51                  ADD EDI,0x51
0066A41C  40                        INC EAX
0066A41D  81 FF 71 8A 80 00         CMP EDI,0x808a71
0066A423  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0066A426  0F 8C 61 FE FF FF         JL 0x0066a28d
0066A42C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066A42F  5F                        POP EDI
0066A430  5E                        POP ESI
0066A431  5B                        POP EBX
0066A432  8B E5                     MOV ESP,EBP
0066A434  5D                        POP EBP
0066A435  C2 0C 00                  RET 0xc
LAB_0066a438:
0066A438  83 FB 08                  CMP EBX,0x8
LAB_0066a43b:
0066A43B  0F 85 6D 01 00 00         JNZ 0x0066a5ae
0066A441  A0 4D 87 80 00            MOV AL,[0x0080874d]
0066A446  3C FF                     CMP AL,0xff
0066A448  0F 84 60 01 00 00         JZ 0x0066a5ae
0066A44E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0066A451  33 D2                     XOR EDX,EDX
0066A453  BE E9 87 80 00            MOV ESI,0x8087e9
0066A458  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0066A45B  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0066A45E  EB 05                     JMP 0x0066a465
LAB_0066a460:
0066A460  A0 4D 87 80 00            MOV AL,[0x0080874d]
LAB_0066a465:
0066A465  33 C9                     XOR ECX,ECX
0066A467  8A C8                     MOV CL,AL
0066A469  3B D1                     CMP EDX,ECX
0066A46B  0F 84 27 01 00 00         JZ 0x0066a598
0066A471  80 3E FF                  CMP byte ptr [ESI],0xff
0066A474  0F 84 1E 01 00 00         JZ 0x0066a598
0066A47A  88 45 10                  MOV byte ptr [EBP + 0x10],AL
0066A47D  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066A482  84 C0                     TEST AL,AL
0066A484  8A DA                     MOV BL,DL
0066A486  74 2F                     JZ 0x0066a4b7
0066A488  8B C3                     MOV EAX,EBX
0066A48A  33 C9                     XOR ECX,ECX
0066A48C  25 FF 00 00 00            AND EAX,0xff
0066A491  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
0066A494  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066A497  25 FF 00 00 00            AND EAX,0xff
0066A49C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0066A49F  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A4A6  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0066A4AD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0066A4B0  0F 95 C1                  SETNZ CL
0066A4B3  8B C1                     MOV EAX,ECX
0066A4B5  EB 1B                     JMP 0x0066a4d2
LAB_0066a4b7:
0066A4B7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0066A4BA  B9 20 76 80 00            MOV ECX,0x807620
0066A4BF  52                        PUSH EDX
0066A4C0  53                        PUSH EBX
0066A4C1  E8 C9 B8 D9 FF            CALL 0x00405d8f
0066A4C6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0066A4C9  33 C9                     XOR ECX,ECX
0066A4CB  85 C0                     TEST EAX,EAX
0066A4CD  0F 9C C1                  SETL CL
0066A4D0  8B C1                     MOV EAX,ECX
LAB_0066a4d2:
0066A4D2  85 C0                     TEST EAX,EAX
0066A4D4  0F 85 B2 00 00 00         JNZ 0x0066a58c
0066A4DA  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066A4DF  84 C0                     TEST AL,AL
0066A4E1  74 2B                     JZ 0x0066a50e
0066A4E3  81 E3 FF 00 00 00         AND EBX,0xff
0066A4E9  33 C9                     XOR ECX,ECX
0066A4EB  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0066A4F1  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
0066A4F4  33 DB                     XOR EBX,EBX
0066A4F6  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066A4F9  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0066A500  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066A507  0F 95 C3                  SETNZ BL
0066A50A  8B C3                     MOV EAX,EBX
0066A50C  EB 7A                     JMP 0x0066a588
LAB_0066a50e:
0066A50E  A0 4D 87 80 00            MOV AL,[0x0080874d]
0066A513  3A C3                     CMP AL,BL
0066A515  74 66                     JZ 0x0066a57d
0066A517  33 C9                     XOR ECX,ECX
0066A519  81 E3 FF 00 00 00         AND EBX,0xff
0066A51F  8A C8                     MOV CL,AL
0066A521  8B C1                     MOV EAX,ECX
0066A523  8A 8C C3 4F 8A 80 00      MOV CL,byte ptr [EBX + EAX*0x8 + 0x808a4f]
0066A52A  84 C9                     TEST CL,CL
0066A52C  75 10                     JNZ 0x0066a53e
0066A52E  38 8C D8 4F 8A 80 00      CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],CL
0066A535  75 07                     JNZ 0x0066a53e
0066A537  B8 FE FF FF FF            MOV EAX,0xfffffffe
0066A53C  EB 41                     JMP 0x0066a57f
LAB_0066a53e:
0066A53E  80 F9 01                  CMP CL,0x1
0066A541  75 0F                     JNZ 0x0066a552
0066A543  80 BC D8 4F 8A 80 00 00   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x0
0066A54B  75 05                     JNZ 0x0066a552
0066A54D  83 C8 FF                  OR EAX,0xffffffff
0066A550  EB 2D                     JMP 0x0066a57f
LAB_0066a552:
0066A552  84 C9                     TEST CL,CL
0066A554  75 11                     JNZ 0x0066a567
0066A556  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
0066A55E  75 07                     JNZ 0x0066a567
0066A560  B8 01 00 00 00            MOV EAX,0x1
0066A565  EB 18                     JMP 0x0066a57f
LAB_0066a567:
0066A567  80 F9 01                  CMP CL,0x1
0066A56A  75 11                     JNZ 0x0066a57d
0066A56C  80 BC D8 4F 8A 80 00 01   CMP byte ptr [EAX + EBX*0x8 + 0x808a4f],0x1
0066A574  75 07                     JNZ 0x0066a57d
0066A576  B8 02 00 00 00            MOV EAX,0x2
0066A57B  EB 02                     JMP 0x0066a57f
LAB_0066a57d:
0066A57D  33 C0                     XOR EAX,EAX
LAB_0066a57f:
0066A57F  33 C9                     XOR ECX,ECX
0066A581  85 C0                     TEST EAX,EAX
0066A583  0F 9C C1                  SETL CL
0066A586  8B C1                     MOV EAX,ECX
LAB_0066a588:
0066A588  85 C0                     TEST EAX,EAX
0066A58A  74 0C                     JZ 0x0066a598
LAB_0066a58c:
0066A58C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066A58F  89 17                     MOV dword ptr [EDI],EDX
0066A591  41                        INC ECX
0066A592  83 C7 04                  ADD EDI,0x4
0066A595  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066a598:
0066A598  83 C6 51                  ADD ESI,0x51
0066A59B  42                        INC EDX
0066A59C  81 FE 71 8A 80 00         CMP ESI,0x808a71
0066A5A2  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0066A5A5  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0066A5A8  0F 8C B2 FE FF FF         JL 0x0066a460
LAB_0066a5ae:
0066A5AE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066A5B1  5F                        POP EDI
0066A5B2  5E                        POP ESI
0066A5B3  5B                        POP EBX
0066A5B4  8B E5                     MOV ESP,EBP
0066A5B6  5D                        POP EBP
0066A5B7  C2 0C 00                  RET 0xc
