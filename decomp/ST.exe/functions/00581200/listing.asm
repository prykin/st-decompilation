FUN_00581200:
00581200  55                        PUSH EBP
00581201  8B EC                     MOV EBP,ESP
00581203  83 EC 50                  SUB ESP,0x50
00581206  8B 91 F5 01 00 00         MOV EDX,dword ptr [ECX + 0x1f5]
0058120C  53                        PUSH EBX
0058120D  56                        PUSH ESI
0058120E  8B B1 ED 01 00 00         MOV ESI,dword ptr [ECX + 0x1ed]
00581214  8B C2                     MOV EAX,EDX
00581216  8B 99 F9 01 00 00         MOV EBX,dword ptr [ECX + 0x1f9]
0058121C  2B C6                     SUB EAX,ESI
0058121E  57                        PUSH EDI
0058121F  D1 F8                     SAR EAX,0x1
00581221  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00581224  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0058122B  8D 78 03                  LEA EDI,[EAX + 0x3]
0058122E  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00581231  8B B9 F1 01 00 00         MOV EDI,dword ptr [ECX + 0x1f1]
00581237  8B CB                     MOV ECX,EBX
00581239  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0058123C  2B CF                     SUB ECX,EDI
0058123E  D1 F9                     SAR ECX,0x1
00581240  8D 79 03                  LEA EDI,[ECX + 0x3]
00581243  39 7D C4                  CMP dword ptr [EBP + -0x3c],EDI
00581246  7E 03                     JLE 0x0058124b
00581248  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
LAB_0058124b:
0058124B  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
0058124E  8D 7A 03                  LEA EDI,[EDX + 0x3]
00581251  8D 56 FD                  LEA EDX,[ESI + -0x3]
00581254  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00581257  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0058125E  3B FE                     CMP EDI,ESI
00581260  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00581263  7C 06                     JL 0x0058126b
00581265  8D 7E FF                  LEA EDI,[ESI + -0x1]
00581268  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
LAB_0058126b:
0058126B  85 D2                     TEST EDX,EDX
0058126D  7D 05                     JGE 0x00581274
0058126F  33 D2                     XOR EDX,EDX
00581271  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
LAB_00581274:
00581274  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00581277  83 C3 03                  ADD EBX,0x3
0058127A  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0058127D  83 C6 FD                  ADD ESI,-0x3
00581280  0F BF 1D 42 B2 7F 00      MOVSX EBX,word ptr [0x007fb242]
00581287  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0058128A  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0058128D  3B F3                     CMP ESI,EBX
0058128F  7C 04                     JL 0x00581295
00581291  4B                        DEC EBX
00581292  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
LAB_00581295:
00581295  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00581298  85 F6                     TEST ESI,ESI
0058129A  7D 07                     JGE 0x005812a3
0058129C  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_005812a3:
005812A3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005812A6  66 8B 9E ED 01 00 00      MOV BX,word ptr [ESI + 0x1ed]
005812AD  66 8B B6 F1 01 00 00      MOV SI,word ptr [ESI + 0x1f1]
005812B4  66 03 D8                  ADD BX,AX
005812B7  66 03 F1                  ADD SI,CX
005812BA  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
005812BD  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
005812C0  0F BF DB                  MOVSX EBX,BX
005812C3  0F BF C6                  MOVSX EAX,SI
005812C6  3B DF                     CMP EBX,EDI
005812C8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005812CB  0F 8F 97 01 00 00         JG 0x00581468
005812D1  3B 45 E0                  CMP EAX,dword ptr [EBP + -0x20]
005812D4  0F 8F 8E 01 00 00         JG 0x00581468
005812DA  3B DA                     CMP EBX,EDX
005812DC  0F 8C 86 01 00 00         JL 0x00581468
005812E2  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
005812E5  0F 8C 7D 01 00 00         JL 0x00581468
005812EB  33 FF                     XOR EDI,EDI
005812ED  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_005812f0:
005812F0  66 85 DB                  TEST BX,BX
005812F3  0F 8C 62 01 00 00         JL 0x0058145b
005812F9  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
00581300  0F 8D 55 01 00 00         JGE 0x0058145b
00581306  66 83 7D F4 00            CMP word ptr [EBP + -0xc],0x0
0058130B  0F 8C 4A 01 00 00         JL 0x0058145b
00581311  66 A1 42 B2 7F 00         MOV AX,[0x007fb242]
00581317  66 39 45 F4               CMP word ptr [EBP + -0xc],AX
0058131B  0F 8D 3A 01 00 00         JGE 0x0058145b
00581321  66 85 FF                  TEST DI,DI
00581324  0F 8C 31 01 00 00         JL 0x0058145b
0058132A  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00581331  0F 8D 24 01 00 00         JGE 0x0058145b
00581337  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0058133E  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00581345  0F BF CF                  MOVSX ECX,DI
00581348  0F AF CA                  IMUL ECX,EDX
0058134B  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0058134F  0F AF C2                  IMUL EAX,EDX
00581352  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00581358  03 C8                     ADD ECX,EAX
0058135A  0F BF C3                  MOVSX EAX,BX
0058135D  03 C8                     ADD ECX,EAX
0058135F  8B 34 CA                  MOV ESI,dword ptr [EDX + ECX*0x8]
00581362  85 F6                     TEST ESI,ESI
00581364  0F 84 F1 00 00 00         JZ 0x0058145b
0058136A  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0058136D  3D E8 03 00 00            CMP EAX,0x3e8
00581372  74 09                     JZ 0x0058137d
00581374  83 F8 14                  CMP EAX,0x14
00581377  0F 85 DE 00 00 00         JNZ 0x0058145b
LAB_0058137d:
0058137D  8B 06                     MOV EAX,dword ptr [ESI]
0058137F  8B CE                     MOV ECX,ESI
00581381  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00581387  85 C0                     TEST EAX,EAX
00581389  0F 84 CC 00 00 00         JZ 0x0058145b
0058138F  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00581392  83 F8 08                  CMP EAX,0x8
00581395  0F 83 C0 00 00 00         JNC 0x0058145b
0058139B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005813A1  85 C9                     TEST ECX,ECX
005813A3  74 11                     JZ 0x005813b6
005813A5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005813A8  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
005813B0  0F 83 A5 00 00 00         JNC 0x0058145b
LAB_005813b6:
005813B6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
005813B9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005813BC  88 4D D0                  MOV byte ptr [EBP + -0x30],CL
005813BF  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
005813C2  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
005813C5  88 55 CC                  MOV byte ptr [EBP + -0x34],DL
005813C8  8A 81 6F 14 00 00         MOV AL,byte ptr [ECX + 0x146f]
005813CE  84 C0                     TEST AL,AL
005813D0  74 40                     JZ 0x00581412
005813D2  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
005813D5  25 FF 00 00 00            AND EAX,0xff
005813DA  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005813DD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
005813E0  25 FF 00 00 00            AND EAX,0xff
005813E5  8D 3C D1                  LEA EDI,[ECX + EDX*0x8]
005813E8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005813EB  8A 94 3A CA 11 00 00      MOV DL,byte ptr [EDX + EDI*0x1 + 0x11ca]
005813F2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005813F5  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
005813F8  33 D2                     XOR EDX,EDX
005813FA  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
005813FD  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00581400  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00581403  3A 94 08 CA 11 00 00      CMP DL,byte ptr [EAX + ECX*0x1 + 0x11ca]
0058140A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0058140D  0F 95 C0                  SETNZ AL
00581410  EB 16                     JMP 0x00581428
LAB_00581412:
00581412  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00581415  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00581418  52                        PUSH EDX
00581419  50                        PUSH EAX
0058141A  E8 70 49 E8 FF            CALL 0x00405d8f
0058141F  33 C9                     XOR ECX,ECX
00581421  85 C0                     TEST EAX,EAX
00581423  0F 9C C1                  SETL CL
00581426  8B C1                     MOV EAX,ECX
LAB_00581428:
00581428  85 C0                     TEST EAX,EAX
0058142A  74 2C                     JZ 0x00581458
0058142C  8B 16                     MOV EDX,dword ptr [ESI]
0058142E  8B CE                     MOV ECX,ESI
00581430  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00581436  85 C0                     TEST EAX,EAX
00581438  74 1E                     JZ 0x00581458
0058143A  8B 8F 0B 02 00 00         MOV ECX,dword ptr [EDI + 0x20b]
00581440  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00581443  89 34 81                  MOV dword ptr [ECX + EAX*0x4],ESI
00581446  8B 8F FD 01 00 00         MOV ECX,dword ptr [EDI + 0x1fd]
0058144C  40                        INC EAX
0058144D  3B C1                     CMP EAX,ECX
0058144F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00581452  0F 8D 1D 03 00 00         JGE 0x00581775
LAB_00581458:
00581458  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0058145b:
0058145B  47                        INC EDI
0058145C  83 FF 05                  CMP EDI,0x5
0058145F  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00581462  0F 8C 88 FE FF FF         JL 0x005812f0
LAB_00581468:
00581468  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0058146f:
0058146F  0F BF 5D DC               MOVSX EBX,word ptr [EBP + -0x24]
00581473  0F BF 45 D8               MOVSX EAX,word ptr [EBP + -0x28]
00581477  8B 15 DC B2 7C 00         MOV EDX,dword ptr [0x007cb2dc]
0058147D  43                        INC EBX
0058147E  40                        INC EAX
0058147F  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
00581486  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00581489  A1 E8 B2 7C 00            MOV EAX,[0x007cb2e8]
0058148E  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00581495  C7 45 D0 03 00 00 00      MOV dword ptr [EBP + -0x30],0x3
0058149C  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0058149F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_005814a2:
005814A2  8B 7D B8                  MOV EDI,dword ptr [EBP + -0x48]
005814A5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005814A8  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
005814AB  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005814AE  03 DF                     ADD EBX,EDI
005814B0  03 F0                     ADD ESI,EAX
005814B2  8B C3                     MOV EAX,EBX
005814B4  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005814B7  2B C2                     SUB EAX,EDX
005814B9  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005814BC  66 85 C0                  TEST AX,AX
005814BF  0F BF C0                  MOVSX EAX,AX
005814C2  7D 02                     JGE 0x005814c6
005814C4  F7 D8                     NEG EAX
LAB_005814c6:
005814C6  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
005814C9  3B C2                     CMP EAX,EDX
005814CB  7F 15                     JG 0x005814e2
005814CD  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
005814D0  8B C6                     MOV EAX,ESI
005814D2  2B C1                     SUB EAX,ECX
005814D4  66 85 C0                  TEST AX,AX
005814D7  0F BF C0                  MOVSX EAX,AX
005814DA  7D 02                     JGE 0x005814de
005814DC  F7 D8                     NEG EAX
LAB_005814de:
005814DE  3B C2                     CMP EAX,EDX
005814E0  7E 63                     JLE 0x00581545
LAB_005814e2:
005814E2  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005814E5  33 C0                     XOR EAX,EAX
005814E7  41                        INC ECX
005814E8  83 F9 04                  CMP ECX,0x4
005814EB  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005814EE  7C 16                     JL 0x00581506
005814F0  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
005814F3  33 C9                     XOR ECX,ECX
005814F5  42                        INC EDX
005814F6  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005814F9  3B D7                     CMP EDX,EDI
005814FB  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
005814FE  0F 8F 61 02 00 00         JG 0x00581765
00581504  EB 12                     JMP 0x00581518
LAB_00581506:
00581506  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00581509  2B DF                     SUB EBX,EDI
0058150B  2B F2                     SUB ESI,EDX
0058150D  B8 01 00 00 00            MOV EAX,0x1
00581512  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00581515  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_00581518:
00581518  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0058151B  42                        INC EDX
0058151C  83 FA 04                  CMP EDX,0x4
0058151F  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00581522  7C 05                     JL 0x00581529
00581524  33 D2                     XOR EDX,EDX
00581526  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_00581529:
00581529  8B 0C 8D DC B2 7C 00      MOV ECX,dword ptr [ECX*0x4 + 0x7cb2dc]
00581530  8B 14 95 DC B2 7C 00      MOV EDX,dword ptr [EDX*0x4 + 0x7cb2dc]
00581537  85 C0                     TEST EAX,EAX
00581539  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0058153C  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0058153F  0F 85 5D FF FF FF         JNZ 0x005814a2
LAB_00581545:
00581545  3B 5D C8                  CMP EBX,dword ptr [EBP + -0x38]
00581548  0F 8F 54 FF FF FF         JG 0x005814a2
0058154E  3B 75 E0                  CMP ESI,dword ptr [EBP + -0x20]
00581551  0F 8F 4B FF FF FF         JG 0x005814a2
00581557  3B 5D C4                  CMP EBX,dword ptr [EBP + -0x3c]
0058155A  0F 8C 42 FF FF FF         JL 0x005814a2
00581560  3B 75 E4                  CMP ESI,dword ptr [EBP + -0x1c]
00581563  0F 8C 39 FF FF FF         JL 0x005814a2
00581569  66 85 DB                  TEST BX,BX
0058156C  0F 8C 30 FF FF FF         JL 0x005814a2
00581572  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00581579  66 3B D9                  CMP BX,CX
0058157C  0F 8D 20 FF FF FF         JGE 0x005814a2
00581582  66 85 F6                  TEST SI,SI
00581585  0F 8C 17 FF FF FF         JL 0x005814a2
0058158B  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00581592  0F 8D 0A FF FF FF         JGE 0x005814a2
00581598  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058159B  66 85 C0                  TEST AX,AX
0058159E  0F 8C FE FE FF FF         JL 0x005814a2
005815A4  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
005815AB  0F 8D F1 FE FF FF         JGE 0x005814a2
005815B1  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005815B8  0F BF C0                  MOVSX EAX,AX
005815BB  0F AF C2                  IMUL EAX,EDX
005815BE  0F BF C9                  MOVSX ECX,CX
005815C1  0F BF D6                  MOVSX EDX,SI
005815C4  0F AF CA                  IMUL ECX,EDX
005815C7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005815CD  03 C1                     ADD EAX,ECX
005815CF  0F BF CB                  MOVSX ECX,BX
005815D2  03 C1                     ADD EAX,ECX
005815D4  8B 3C C2                  MOV EDI,dword ptr [EDX + EAX*0x8]
005815D7  85 FF                     TEST EDI,EDI
005815D9  0F 84 C3 FE FF FF         JZ 0x005814a2
005815DF  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
005815E2  3D E8 03 00 00            CMP EAX,0x3e8
005815E7  74 09                     JZ 0x005815f2
005815E9  83 F8 14                  CMP EAX,0x14
005815EC  0F 85 B0 FE FF FF         JNZ 0x005814a2
LAB_005815f2:
005815F2  8B 07                     MOV EAX,dword ptr [EDI]
005815F4  8B CF                     MOV ECX,EDI
005815F6  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
005815FC  85 C0                     TEST EAX,EAX
005815FE  0F 84 9E FE FF FF         JZ 0x005814a2
00581604  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00581607  83 F8 08                  CMP EAX,0x8
0058160A  0F 83 92 FE FF FF         JNC 0x005814a2
00581610  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00581616  85 C9                     TEST ECX,ECX
00581618  74 11                     JZ 0x0058162b
0058161A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0058161D  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00581625  0F 83 77 FE FF FF         JNC 0x005814a2
LAB_0058162b:
0058162B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0058162E  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00581631  88 4D B4                  MOV byte ptr [EBP + -0x4c],CL
00581634  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
00581637  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0058163A  88 55 B0                  MOV byte ptr [EBP + -0x50],DL
0058163D  80 B8 6F 14 00 00 00      CMP byte ptr [EAX + 0x146f],0x0
00581644  74 42                     JZ 0x00581688
00581646  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00581649  81 E1 FF 00 00 00         AND ECX,0xff
0058164F  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00581652  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00581655  81 E1 FF 00 00 00         AND ECX,0xff
0058165B  8D 34 D0                  LEA ESI,[EAX + EDX*0x8]
0058165E  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00581661  8A 94 32 CA 11 00 00      MOV DL,byte ptr [EDX + ESI*0x1 + 0x11ca]
00581668  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
0058166B  33 D2                     XOR EDX,EDX
0058166D  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00581670  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00581673  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00581676  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
0058167D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00581680  0F 95 C0                  SETNZ AL
00581683  E9 A0 00 00 00            JMP 0x00581728
LAB_00581688:
00581688  3A CA                     CMP CL,DL
0058168A  0F 84 8D 00 00 00         JZ 0x0058171d
00581690  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00581693  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00581696  81 E1 FF 00 00 00         AND ECX,0xff
0058169C  81 E6 FF 00 00 00         AND ESI,0xff
005816A2  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
005816A5  8A 94 02 2F 14 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x142f]
005816AC  84 D2                     TEST DL,DL
005816AE  75 19                     JNZ 0x005816c9
005816B0  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005816B3  38 94 03 2F 14 00 00      CMP byte ptr [EBX + EAX*0x1 + 0x142f],DL
005816BA  75 0A                     JNZ 0x005816c6
005816BC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005816BF  B8 FE FF FF FF            MOV EAX,0xfffffffe
005816C4  EB 59                     JMP 0x0058171f
LAB_005816c6:
005816C6  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_005816c9:
005816C9  80 FA 01                  CMP DL,0x1
005816CC  75 18                     JNZ 0x005816e6
005816CE  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005816D1  80 BC 03 2F 14 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x0
005816D9  75 08                     JNZ 0x005816e3
005816DB  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005816DE  83 C8 FF                  OR EAX,0xffffffff
005816E1  EB 3C                     JMP 0x0058171f
LAB_005816e3:
005816E3  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_005816e6:
005816E6  84 D2                     TEST DL,DL
005816E8  75 1A                     JNZ 0x00581704
005816EA  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005816ED  80 BC 03 2F 14 00 00 01   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x1
005816F5  75 0A                     JNZ 0x00581701
005816F7  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005816FA  B8 01 00 00 00            MOV EAX,0x1
005816FF  EB 1E                     JMP 0x0058171f
LAB_00581701:
00581701  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00581704:
00581704  80 FA 01                  CMP DL,0x1
00581707  75 14                     JNZ 0x0058171d
00581709  8D 0C F1                  LEA ECX,[ECX + ESI*0x8]
0058170C  80 BC 01 2F 14 00 00 01   CMP byte ptr [ECX + EAX*0x1 + 0x142f],0x1
00581714  75 07                     JNZ 0x0058171d
00581716  B8 02 00 00 00            MOV EAX,0x2
0058171B  EB 02                     JMP 0x0058171f
LAB_0058171d:
0058171D  33 C0                     XOR EAX,EAX
LAB_0058171f:
0058171F  33 D2                     XOR EDX,EDX
00581721  85 C0                     TEST EAX,EAX
00581723  0F 9C C2                  SETL DL
00581726  8B C2                     MOV EAX,EDX
LAB_00581728:
00581728  85 C0                     TEST EAX,EAX
0058172A  0F 84 72 FD FF FF         JZ 0x005814a2
00581730  8B 07                     MOV EAX,dword ptr [EDI]
00581732  8B CF                     MOV ECX,EDI
00581734  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0058173A  85 C0                     TEST EAX,EAX
0058173C  0F 84 60 FD FF FF         JZ 0x005814a2
00581742  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00581745  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00581748  40                        INC EAX
00581749  8B 91 0B 02 00 00         MOV EDX,dword ptr [ECX + 0x20b]
0058174F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00581752  89 7C 82 FC               MOV dword ptr [EDX + EAX*0x4 + -0x4],EDI
00581756  8B 91 FD 01 00 00         MOV EDX,dword ptr [ECX + 0x1fd]
0058175C  3B C2                     CMP EAX,EDX
0058175E  7D 15                     JGE 0x00581775
00581760  E9 3D FD FF FF            JMP 0x005814a2
LAB_00581765:
00581765  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00581768  40                        INC EAX
00581769  83 F8 05                  CMP EAX,0x5
0058176C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058176F  0F 8C FA FC FF FF         JL 0x0058146f
LAB_00581775:
00581775  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00581778  8B 90 FD 01 00 00         MOV EDX,dword ptr [EAX + 0x1fd]
0058177E  4A                        DEC EDX
0058177F  78 52                     JS 0x005817d3
00581781  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
00581784  8B 75 C4                  MOV ESI,dword ptr [EBP + -0x3c]
00581787  BB FF 00 00 00            MOV EBX,0xff
LAB_0058178c:
0058178C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058178F  8B 81 07 02 00 00         MOV EAX,dword ptr [ECX + 0x207]
00581795  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
00581798  85 C0                     TEST EAX,EAX
0058179A  74 34                     JZ 0x005817d0
0058179C  8B 88 3D 02 00 00         MOV ECX,dword ptr [EAX + 0x23d]
005817A2  85 C9                     TEST ECX,ECX
005817A4  74 2A                     JZ 0x005817d0
005817A6  0F BF 48 47               MOVSX ECX,word ptr [EAX + 0x47]
005817AA  3B CE                     CMP ECX,ESI
005817AC  7C 12                     JL 0x005817c0
005817AE  3B CF                     CMP ECX,EDI
005817B0  7F 0E                     JG 0x005817c0
005817B2  0F BF 48 49               MOVSX ECX,word ptr [EAX + 0x49]
005817B6  3B 4D E4                  CMP ECX,dword ptr [EBP + -0x1c]
005817B9  7C 05                     JL 0x005817c0
005817BB  3B 4D E0                  CMP ECX,dword ptr [EBP + -0x20]
005817BE  7E 10                     JLE 0x005817d0
LAB_005817c0:
005817C0  89 98 41 02 00 00         MOV dword ptr [EAX + 0x241],EBX
005817C6  C7 80 3D 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x23d],0x0
LAB_005817d0:
005817D0  4A                        DEC EDX
005817D1  79 B9                     JNS 0x0058178c
LAB_005817d3:
005817D3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005817D6  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
005817DD  85 C0                     TEST EAX,EAX
005817DF  0F 8E 13 01 00 00         JLE 0x005818f8
005817E5  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_005817e8:
005817E8  8D 4D FC                  LEA ECX,[EBP + -0x4]
005817EB  8D 55 D8                  LEA EDX,[EBP + -0x28]
005817EE  51                        PUSH ECX
005817EF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005817F2  52                        PUSH EDX
005817F3  8D 45 DC                  LEA EAX,[EBP + -0x24]
005817F6  8B 91 0B 02 00 00         MOV EDX,dword ptr [ECX + 0x20b]
005817FC  50                        PUSH EAX
005817FD  C7 45 B0 FF FF FF FF      MOV dword ptr [EBP + -0x50],0xffffffff
00581804  BB FF FF 1F 00            MOV EBX,0x1fffff
00581809  8B 0C BA                  MOV ECX,dword ptr [EDX + EDI*0x4]
0058180C  E8 D2 19 E8 FF            CALL 0x004031e3
00581811  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00581814  8B B0 FD 01 00 00         MOV ESI,dword ptr [EAX + 0x1fd]
0058181A  4E                        DEC ESI
0058181B  0F 88 C8 00 00 00         JS 0x005818e9
00581821  8B 80 07 02 00 00         MOV EAX,dword ptr [EAX + 0x207]
00581827  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0058182A  8D 04 B0                  LEA EAX,[EAX + ESI*0x4]
0058182D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00581830:
00581830  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00581833  8B 09                     MOV ECX,dword ptr [ECX]
00581835  85 C9                     TEST ECX,ECX
00581837  74 4D                     JZ 0x00581886
00581839  8B 81 3D 02 00 00         MOV EAX,dword ptr [ECX + 0x23d]
0058183F  85 C0                     TEST EAX,EAX
00581841  75 43                     JNZ 0x00581886
00581843  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
00581847  66 2B 45 DC               SUB AX,word ptr [EBP + -0x24]
0058184B  66 85 C0                  TEST AX,AX
0058184E  0F BF F8                  MOVSX EDI,AX
00581851  7D 02                     JGE 0x00581855
00581853  F7 DF                     NEG EDI
LAB_00581855:
00581855  66 8B 41 43               MOV AX,word ptr [ECX + 0x43]
00581859  66 2B 45 D8               SUB AX,word ptr [EBP + -0x28]
0058185D  66 85 C0                  TEST AX,AX
00581860  0F BF D0                  MOVSX EDX,AX
00581863  7D 02                     JGE 0x00581867
00581865  F7 DA                     NEG EDX
LAB_00581867:
00581867  66 8B 41 45               MOV AX,word ptr [ECX + 0x45]
0058186B  66 2B 45 FC               SUB AX,word ptr [EBP + -0x4]
0058186F  66 85 C0                  TEST AX,AX
00581872  0F BF C0                  MOVSX EAX,AX
00581875  7D 02                     JGE 0x00581879
00581877  F7 D8                     NEG EAX
LAB_00581879:
00581879  03 C2                     ADD EAX,EDX
0058187B  03 C7                     ADD EAX,EDI
0058187D  3B C3                     CMP EAX,EBX
0058187F  7D 05                     JGE 0x00581886
00581881  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
00581884  8B D8                     MOV EBX,EAX
LAB_00581886:
00581886  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00581889  4E                        DEC ESI
0058188A  83 E9 04                  SUB ECX,0x4
0058188D  85 F6                     TEST ESI,ESI
0058188F  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
00581892  7D 9C                     JGE 0x00581830
00581894  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00581897  83 F8 FF                  CMP EAX,-0x1
0058189A  74 4A                     JZ 0x005818e6
0058189C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058189F  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
005818A2  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005818A5  8B 8A 0B 02 00 00         MOV ECX,dword ptr [EDX + 0x20b]
005818AB  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
005818AE  8B 0C B9                  MOV ECX,dword ptr [ECX + EDI*0x4]
005818B1  8B B0 35 02 00 00         MOV ESI,dword ptr [EAX + 0x235]
005818B7  83 FE 02                  CMP ESI,0x2
005818BA  66 8B 51 32               MOV DX,word ptr [ECX + 0x32]
005818BE  74 29                     JZ 0x005818e9
005818C0  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
005818C3  66 89 90 45 02 00 00      MOV word ptr [EAX + 0x245],DX
005818CA  89 88 41 02 00 00         MOV dword ptr [EAX + 0x241],ECX
005818D0  C7 80 3D 02 00 00 01 00 00 00  MOV dword ptr [EAX + 0x23d],0x1
005818DA  C7 80 52 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x252],0x0
005818E4  EB 03                     JMP 0x005818e9
LAB_005818e6:
005818E6  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
LAB_005818e9:
005818E9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005818EC  47                        INC EDI
005818ED  3B F8                     CMP EDI,EAX
005818EF  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
005818F2  0F 8C F0 FE FF FF         JL 0x005817e8
LAB_005818f8:
005818F8  5F                        POP EDI
005818F9  5E                        POP ESI
005818FA  5B                        POP EBX
005818FB  8B E5                     MOV ESP,EBP
005818FD  5D                        POP EBP
005818FE  C3                        RET
