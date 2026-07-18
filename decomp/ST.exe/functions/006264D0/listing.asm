FUN_006264d0:
006264D0  55                        PUSH EBP
006264D1  8B EC                     MOV EBP,ESP
006264D3  81 EC B8 00 00 00         SUB ESP,0xb8
006264D9  53                        PUSH EBX
006264DA  56                        PUSH ESI
006264DB  8B D1                     MOV EDX,ECX
006264DD  57                        PUSH EDI
006264DE  B9 16 00 00 00            MOV ECX,0x16
006264E3  33 C0                     XOR EAX,EAX
006264E5  8D BD 48 FF FF FF         LEA EDI,[EBP + 0xffffff48]
006264EB  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006264EE  F3 AB                     STOSD.REP ES:EDI
006264F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006264F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006264F6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006264F9  D1 E0                     SHL EAX,0x1
006264FB  66 8B 98 6C 04 7D 00      MOV BX,word ptr [EAX + 0x7d046c]
00626502  66 8B B8 6E 04 7D 00      MOV DI,word ptr [EAX + 0x7d046e]
00626509  66 8B B0 70 04 7D 00      MOV SI,word ptr [EAX + 0x7d0470]
00626510  66 03 9A C2 02 00 00      ADD BX,word ptr [EDX + 0x2c2]
00626517  66 03 BA C6 02 00 00      ADD DI,word ptr [EDX + 0x2c6]
0062651E  66 03 B2 CA 02 00 00      ADD SI,word ptr [EDX + 0x2ca]
00626525  85 C9                     TEST ECX,ECX
00626527  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0062652A  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0062652D  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
00626530  0F 84 B5 04 00 00         JZ 0x006269eb
00626536  8D 45 CC                  LEA EAX,[EBP + -0x34]
00626539  8D 55 E0                  LEA EDX,[EBP + -0x20]
0062653C  50                        PUSH EAX
0062653D  8D 45 DC                  LEA EAX,[EBP + -0x24]
00626540  52                        PUSH EDX
00626541  50                        PUSH EAX
00626542  E8 9C CC DD FF            CALL 0x004031e3
00626547  0F BF 4D CC               MOVSX ECX,word ptr [EBP + -0x34]
0062654B  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
0062654F  51                        PUSH ECX
00626550  52                        PUSH EDX
00626551  0F BF 4D DC               MOVSX ECX,word ptr [EBP + -0x24]
00626555  0F BF F6                  MOVSX ESI,SI
00626558  0F BF FF                  MOVSX EDI,DI
0062655B  0F BF C3                  MOVSX EAX,BX
0062655E  51                        PUSH ECX
0062655F  56                        PUSH ESI
00626560  57                        PUSH EDI
00626561  50                        PUSH EAX
00626562  E8 A6 69 08 00            CALL 0x006acf0d
00626567  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0062656D  83 C4 18                  ADD ESP,0x18
00626570  8B D8                     MOV EBX,EAX
00626572  68 9B 00 00 00            PUSH 0x9b
00626577  E8 32 C0 DD FF            CALL 0x004025ae
0062657C  8A C8                     MOV CL,AL
0062657E  8B C3                     MOV EAX,EBX
00626580  99                        CDQ
00626581  81 E1 FF 00 00 00         AND ECX,0xff
00626587  F7 F9                     IDIV ECX
00626589  BA 01 00 00 00            MOV EDX,0x1
0062658E  8B C8                     MOV ECX,EAX
00626590  3B CA                     CMP ECX,EDX
00626592  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00626595  7D 05                     JGE 0x0062659c
00626597  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062659A  8B CA                     MOV ECX,EDX
LAB_0062659c:
0062659C  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
006265A0  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006265A3  3B CA                     CMP ECX,EDX
006265A5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006265A8  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006265AB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006265AE  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006265B1  0F 8C 49 03 00 00         JL 0x00626900
LAB_006265b7:
006265B7  0F BF 45 DC               MOVSX EAX,word ptr [EBP + -0x24]
006265BB  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
006265BF  2B C1                     SUB EAX,ECX
006265C1  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006265C4  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006265C8  99                        CDQ
006265C9  F7 FF                     IDIV EDI
006265CB  8B F0                     MOV ESI,EAX
006265CD  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
006265D1  03 F1                     ADD ESI,ECX
006265D3  0F BF 4D B0               MOVSX ECX,word ptr [EBP + -0x50]
006265D7  2B C1                     SUB EAX,ECX
006265D9  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
006265DC  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006265E0  99                        CDQ
006265E1  F7 FF                     IDIV EDI
006265E3  03 C1                     ADD EAX,ECX
006265E5  0F BF 4D C4               MOVSX ECX,word ptr [EBP + -0x3c]
006265E9  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006265EC  0F BF 45 CC               MOVSX EAX,word ptr [EBP + -0x34]
006265F0  2B C1                     SUB EAX,ECX
006265F2  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006265F6  99                        CDQ
006265F7  F7 FF                     IDIV EDI
006265F9  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006265FC  03 C1                     ADD EAX,ECX
006265FE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00626601  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00626604  50                        PUSH EAX
00626605  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00626608  52                        PUSH EDX
00626609  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0062660C  56                        PUSH ESI
0062660D  50                        PUSH EAX
0062660E  51                        PUSH ECX
0062660F  52                        PUSH EDX
00626610  E8 F8 68 08 00            CALL 0x006acf0d
00626615  8B C8                     MOV ECX,EAX
00626617  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062661C  F7 E9                     IMUL ECX
0062661E  C1 FA 04                  SAR EDX,0x4
00626621  8B C2                     MOV EAX,EDX
00626623  83 C4 18                  ADD ESP,0x18
00626626  C1 E8 1F                  SHR EAX,0x1f
00626629  03 D0                     ADD EDX,EAX
0062662B  8B FA                     MOV EDI,EDX
0062662D  83 FF 01                  CMP EDI,0x1
00626630  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00626633  7D 08                     JGE 0x0062663d
00626635  BF 01 00 00 00            MOV EDI,0x1
0062663A  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0062663d:
0062663D  83 FF 01                  CMP EDI,0x1
00626640  C7 45 BC 01 00 00 00      MOV dword ptr [EBP + -0x44],0x1
00626647  0F 8C 8D 02 00 00         JL 0x006268da
0062664D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00626650  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00626653  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00626656  2B C2                     SUB EAX,EDX
00626658  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0062665B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0062665E  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00626661  2B C1                     SUB EAX,ECX
00626663  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00626666  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00626669  2B 75 E8                  SUB ESI,dword ptr [EBP + -0x18]
0062666C  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
0062666F  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
LAB_00626672:
00626672  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00626675  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00626678  99                        CDQ
00626679  F7 FF                     IDIV EDI
0062667B  03 C8                     ADD ECX,EAX
0062667D  B8 79 19 8C 02            MOV EAX,0x28c1979
00626682  85 C9                     TEST ECX,ECX
00626684  7C 10                     JL 0x00626696
00626686  F7 E9                     IMUL ECX
00626688  D1 FA                     SAR EDX,0x1
0062668A  8B C2                     MOV EAX,EDX
0062668C  C1 E8 1F                  SHR EAX,0x1f
0062668F  03 D0                     ADD EDX,EAX
00626691  0F BF CA                  MOVSX ECX,DX
00626694  EB 0F                     JMP 0x006266a5
LAB_00626696:
00626696  F7 E9                     IMUL ECX
00626698  D1 FA                     SAR EDX,0x1
0062669A  8B CA                     MOV ECX,EDX
0062669C  C1 E9 1F                  SHR ECX,0x1f
0062669F  03 D1                     ADD EDX,ECX
006266A1  0F BF CA                  MOVSX ECX,DX
006266A4  49                        DEC ECX
LAB_006266a5:
006266A5  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006266A8  99                        CDQ
006266A9  F7 FF                     IDIV EDI
006266AB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006266AE  03 D0                     ADD EDX,EAX
006266B0  B8 79 19 8C 02            MOV EAX,0x28c1979
006266B5  85 D2                     TEST EDX,EDX
006266B7  7C 10                     JL 0x006266c9
006266B9  F7 EA                     IMUL EDX
006266BB  D1 FA                     SAR EDX,0x1
006266BD  8B C2                     MOV EAX,EDX
006266BF  C1 E8 1F                  SHR EAX,0x1f
006266C2  03 D0                     ADD EDX,EAX
006266C4  0F BF F2                  MOVSX ESI,DX
006266C7  EB 0F                     JMP 0x006266d8
LAB_006266c9:
006266C9  F7 EA                     IMUL EDX
006266CB  D1 FA                     SAR EDX,0x1
006266CD  8B C2                     MOV EAX,EDX
006266CF  C1 E8 1F                  SHR EAX,0x1f
006266D2  03 D0                     ADD EDX,EAX
006266D4  0F BF F2                  MOVSX ESI,DX
006266D7  4E                        DEC ESI
LAB_006266d8:
006266D8  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006266DB  99                        CDQ
006266DC  F7 FF                     IDIV EDI
006266DE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006266E1  03 D0                     ADD EDX,EAX
006266E3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006266E8  85 D2                     TEST EDX,EDX
006266EA  7C 11                     JL 0x006266fd
006266EC  F7 EA                     IMUL EDX
006266EE  C1 FA 06                  SAR EDX,0x6
006266F1  8B C2                     MOV EAX,EDX
006266F3  C1 E8 1F                  SHR EAX,0x1f
006266F6  03 D0                     ADD EDX,EAX
006266F8  0F BF C2                  MOVSX EAX,DX
006266FB  EB 10                     JMP 0x0062670d
LAB_006266fd:
006266FD  F7 EA                     IMUL EDX
006266FF  C1 FA 06                  SAR EDX,0x6
00626702  8B C2                     MOV EAX,EDX
00626704  C1 E8 1F                  SHR EAX,0x1f
00626707  03 D0                     ADD EDX,EAX
00626709  0F BF C2                  MOVSX EAX,DX
0062670C  48                        DEC EAX
LAB_0062670d:
0062670D  66 85 C9                  TEST CX,CX
00626710  0F 8C AB 02 00 00         JL 0x006269c1
00626716  66 8B 15 40 B2 7F 00      MOV DX,word ptr [0x007fb240]
0062671D  66 3B CA                  CMP CX,DX
00626720  0F 8D 9B 02 00 00         JGE 0x006269c1
00626726  66 85 F6                  TEST SI,SI
00626729  0F 8C 92 02 00 00         JL 0x006269c1
0062672F  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
00626736  0F 8D 85 02 00 00         JGE 0x006269c1
0062673C  66 85 C0                  TEST AX,AX
0062673F  0F 8C 7C 02 00 00         JL 0x006269c1
00626745  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0062674C  0F 8D 6F 02 00 00         JGE 0x006269c1
00626752  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00626759  0F BF D8                  MOVSX EBX,AX
0062675C  0F AF FB                  IMUL EDI,EBX
0062675F  0F BF D2                  MOVSX EDX,DX
00626762  0F BF DE                  MOVSX EBX,SI
00626765  0F AF D3                  IMUL EDX,EBX
00626768  03 FA                     ADD EDI,EDX
0062676A  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0062676D  0F BF D1                  MOVSX EDX,CX
00626770  03 FA                     ADD EDI,EDX
00626772  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00626778  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
0062677B  85 FF                     TEST EDI,EDI
0062677D  0F 84 3B 02 00 00         JZ 0x006269be
00626783  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00626786  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00626789  3B C1                     CMP EAX,ECX
0062678B  0F 84 13 01 00 00         JZ 0x006268a4
00626791  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00626794  8B CE                     MOV ECX,ESI
00626796  8B 16                     MOV EDX,dword ptr [ESI]
00626798  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0062679E  85 C0                     TEST EAX,EAX
006267A0  0F 84 45 02 00 00         JZ 0x006269eb
006267A6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
006267A9  83 F8 08                  CMP EAX,0x8
006267AC  0F 83 E0 00 00 00         JNC 0x00626892
006267B2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006267B8  85 C9                     TEST ECX,ECX
006267BA  74 11                     JZ 0x006267cd
006267BC  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006267BF  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
006267C7  0F 83 C5 00 00 00         JNC 0x00626892
LAB_006267cd:
006267CD  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
006267D3  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
006267D6  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
006267D9  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
006267DC  84 D2                     TEST DL,DL
006267DE  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
006267E1  74 2D                     JZ 0x00626810
006267E3  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006267E6  33 D2                     XOR EDX,EDX
006267E8  25 FF 00 00 00            AND EAX,0xff
006267ED  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006267F0  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006267F3  25 FF 00 00 00            AND EAX,0xff
006267F8  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006267FF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00626802  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00626809  0F 95 C2                  SETNZ DL
0062680C  8B C2                     MOV EAX,EDX
0062680E  EB 7A                     JMP 0x0062688a
LAB_00626810:
00626810  3A C1                     CMP AL,CL
00626812  74 6B                     JZ 0x0062687f
00626814  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00626817  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0062681A  25 FF 00 00 00            AND EAX,0xff
0062681F  81 E1 FF 00 00 00         AND ECX,0xff
00626825  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0062682C  84 D2                     TEST DL,DL
0062682E  75 10                     JNZ 0x00626840
00626830  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00626837  75 07                     JNZ 0x00626840
00626839  B8 FE FF FF FF            MOV EAX,0xfffffffe
0062683E  EB 41                     JMP 0x00626881
LAB_00626840:
00626840  80 FA 01                  CMP DL,0x1
00626843  75 0F                     JNZ 0x00626854
00626845  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0062684D  75 05                     JNZ 0x00626854
0062684F  83 C8 FF                  OR EAX,0xffffffff
00626852  EB 2D                     JMP 0x00626881
LAB_00626854:
00626854  84 D2                     TEST DL,DL
00626856  75 11                     JNZ 0x00626869
00626858  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00626860  75 07                     JNZ 0x00626869
00626862  B8 01 00 00 00            MOV EAX,0x1
00626867  EB 18                     JMP 0x00626881
LAB_00626869:
00626869  80 FA 01                  CMP DL,0x1
0062686C  75 11                     JNZ 0x0062687f
0062686E  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00626876  75 07                     JNZ 0x0062687f
00626878  B8 02 00 00 00            MOV EAX,0x2
0062687D  EB 02                     JMP 0x00626881
LAB_0062687f:
0062687F  33 C0                     XOR EAX,EAX
LAB_00626881:
00626881  33 C9                     XOR ECX,ECX
00626883  85 C0                     TEST EAX,EAX
00626885  0F 9C C1                  SETL CL
00626888  8B C1                     MOV EAX,ECX
LAB_0062688a:
0062688A  85 C0                     TEST EAX,EAX
0062688C  0F 84 59 01 00 00         JZ 0x006269eb
LAB_00626892:
00626892  8B 17                     MOV EDX,dword ptr [EDI]
00626894  8B CF                     MOV ECX,EDI
00626896  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0062689C  85 C0                     TEST EAX,EAX
0062689E  0F 84 47 01 00 00         JZ 0x006269eb
LAB_006268a4:
006268A4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006268a7:
006268A7  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006268AA  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006268AD  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006268B0  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006268B3  03 F2                     ADD ESI,EDX
006268B5  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006268B8  03 D1                     ADD EDX,ECX
006268BA  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006268BD  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
006268C0  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006268C3  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006268C6  40                        INC EAX
006268C7  03 F2                     ADD ESI,EDX
006268C9  3B C7                     CMP EAX,EDI
006268CB  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006268CE  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
006268D1  0F 8E 9B FD FF FF         JLE 0x00626672
006268D7  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
LAB_006268da:
006268DA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006268DD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006268E0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006268E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006268E6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006268E9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006268EC  40                        INC EAX
006268ED  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006268F0  3B C1                     CMP EAX,ECX
006268F2  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006268F5  0F 8E BC FC FF FF         JLE 0x006265b7
006268FB  BA 01 00 00 00            MOV EDX,0x1
LAB_00626900:
00626900  66 8B 4D C4               MOV CX,word ptr [EBP + -0x3c]
00626904  66 8B 45 E4               MOV AX,word ptr [EBP + -0x1c]
00626908  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
0062690E  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
00626914  8B 93 62 02 00 00         MOV EDX,dword ptr [EBX + 0x262]
0062691A  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0062691D  8B 3B                     MOV EDI,dword ptr [EBX]
0062691F  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
00626925  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00626928  66 89 8D 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],CX
0062692F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00626932  66 89 85 62 FF FF FF      MOV word ptr [EBP + 0xffffff62],AX
00626939  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0062693C  66 89 95 6C FF FF FF      MOV word ptr [EBP + 0xffffff6c],DX
00626943  52                        PUSH EDX
00626944  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00626947  51                        PUSH ECX
00626948  66 89 85 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],AX
0062694F  50                        PUSH EAX
00626950  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00626953  52                        PUSH EDX
00626954  66 89 8D 6A FF FF FF      MOV word ptr [EBP + 0xffffff6a],CX
0062695B  56                        PUSH ESI
0062695C  50                        PUSH EAX
0062695D  8B CB                     MOV ECX,EBX
0062695F  C7 85 48 FF FF FF 28 00 00 00  MOV dword ptr [EBP + 0xffffff48],0x28
00626969  66 89 B5 64 FF FF FF      MOV word ptr [EBP + 0xffffff64],SI
00626970  C7 85 70 FF FF FF 9B 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x9b
0062697A  FF 57 10                  CALL dword ptr [EDI + 0x10]
0062697D  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00626980  8D 95 48 FF FF FF         LEA EDX,[EBP + 0xffffff48]
00626986  6A 00                     PUSH 0x0
00626988  52                        PUSH EDX
00626989  6A 00                     PUSH 0x0
0062698B  89 8D 75 FF FF FF         MOV dword ptr [EBP + 0xffffff75],ECX
00626991  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00626997  6A 00                     PUSH 0x0
00626999  6A 28                     PUSH 0x28
0062699B  66 89 85 6E FF FF FF      MOV word ptr [EBP + 0xffffff6e],AX
006269A2  66 C7 85 79 FF FF FF FF FF  MOV word ptr [EBP + 0xffffff79],0xffff
006269AB  E8 12 B2 DD FF            CALL 0x00401bc2
006269B0  5F                        POP EDI
006269B1  5E                        POP ESI
006269B2  B8 01 00 00 00            MOV EAX,0x1
006269B7  5B                        POP EBX
006269B8  8B E5                     MOV ESP,EBP
006269BA  5D                        POP EBP
006269BB  C2 08 00                  RET 0x8
LAB_006269be:
006269BE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006269c1:
006269C1  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
006269C8  0F AF D0                  IMUL EDX,EAX
006269CB  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
006269D2  0F AF C6                  IMUL EAX,ESI
006269D5  03 CA                     ADD ECX,EDX
006269D7  03 C1                     ADD EAX,ECX
006269D9  8B 0D 80 B2 7F 00         MOV ECX,dword ptr [0x007fb280]
006269DF  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
006269E4  7C 05                     JL 0x006269eb
006269E6  E9 BC FE FF FF            JMP 0x006268a7
LAB_006269eb:
006269EB  5F                        POP EDI
006269EC  5E                        POP ESI
006269ED  33 C0                     XOR EAX,EAX
006269EF  5B                        POP EBX
006269F0  8B E5                     MOV ESP,EBP
006269F2  5D                        POP EBP
006269F3  C2 08 00                  RET 0x8
