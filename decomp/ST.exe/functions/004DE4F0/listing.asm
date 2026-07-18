FUN_004de4f0:
004DE4F0  55                        PUSH EBP
004DE4F1  8B EC                     MOV EBP,ESP
004DE4F3  81 EC 88 01 00 00         SUB ESP,0x188
004DE4F9  53                        PUSH EBX
004DE4FA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004DE4FD  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004DE500  56                        PUSH ESI
004DE501  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
004DE504  33 C0                     XOR EAX,EAX
004DE506  57                        PUSH EDI
004DE507  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004DE50A  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
004DE50D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DE510  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004DE513  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
004DE516  C1 E2 04                  SHL EDX,0x4
004DE519  03 D3                     ADD EDX,EBX
004DE51B  D1 E2                     SHL EDX,0x1
004DE51D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004DE520  8B B2 29 4E 7F 00         MOV ESI,dword ptr [EDX + 0x7f4e29]
004DE526  3B F0                     CMP ESI,EAX
004DE528  0F 84 E3 01 00 00         JZ 0x004de711
004DE52E  B9 2D 00 00 00            MOV ECX,0x2d
004DE533  8D BD 78 FE FF FF         LEA EDI,[EBP + 0xfffffe78]
004DE539  F3 AB                     STOSD.REP ES:EDI
004DE53B  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
004DE53E  33 FF                     XOR EDI,EDI
004DE540  85 C0                     TEST EAX,EAX
004DE542  0F 86 F1 00 00 00         JBE 0x004de639
LAB_004de548:
004DE548  8D 45 FC                  LEA EAX,[EBP + -0x4]
004DE54B  8B D7                     MOV EDX,EDI
004DE54D  50                        PUSH EAX
004DE54E  8B CE                     MOV ECX,ESI
004DE550  E8 1B E7 1C 00            CALL 0x006acc70
004DE555  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DE558  33 F6                     XOR ESI,ESI
004DE55A  3B CE                     CMP ECX,ESI
004DE55C  0F 84 C4 00 00 00         JZ 0x004de626
004DE562  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004DE565  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004DE568  83 F8 14                  CMP EAX,0x14
004DE56B  75 27                     JNZ 0x004de594
004DE56D  8D 55 E0                  LEA EDX,[EBP + -0x20]
004DE570  8D 45 F8                  LEA EAX,[EBP + -0x8]
004DE573  52                        PUSH EDX
004DE574  50                        PUSH EAX
004DE575  8B 01                     MOV EAX,dword ptr [ECX]
004DE577  8D 55 08                  LEA EDX,[EBP + 0x8]
004DE57A  52                        PUSH EDX
004DE57B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DE57E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004DE581  50                        PUSH EAX
004DE582  E8 0E 54 F2 FF            CALL 0x00403995
004DE587  83 F8 01                  CMP EAX,0x1
004DE58A  74 76                     JZ 0x004de602
004DE58C  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
004DE58F  E9 92 00 00 00            JMP 0x004de626
LAB_004de594:
004DE594  3D E8 03 00 00            CMP EAX,0x3e8
004DE599  0F 85 87 00 00 00         JNZ 0x004de626
004DE59F  8B 11                     MOV EDX,dword ptr [ECX]
004DE5A1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DE5A4  39 34 85 B0 26 79 00      CMP dword ptr [EAX*0x4 + 0x7926b0],ESI
004DE5AB  74 55                     JZ 0x004de602
004DE5AD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DE5B0  8B 01                     MOV EAX,dword ptr [ECX]
004DE5B2  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DE5B5  83 3C C5 98 3C 79 00 01   CMP dword ptr [EAX*0x8 + 0x793c98],0x1
004DE5BD  75 43                     JNZ 0x004de602
004DE5BF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DE5C2  8B 11                     MOV EDX,dword ptr [ECX]
004DE5C4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DE5C7  83 E8 32                  SUB EAX,0x32
004DE5CA  56                        PUSH ESI
004DE5CB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004DE5CE  8B 0C C5 A0 2C 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x792ca0]
004DE5D5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004DE5D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DE5DB  8B 11                     MOV EDX,dword ptr [ECX]
004DE5DD  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DE5E0  83 E8 32                  SUB EAX,0x32
004DE5E3  50                        PUSH EAX
004DE5E4  53                        PUSH EBX
004DE5E5  E8 1F 5D F2 FF            CALL 0x00404309
004DE5EA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004DE5ED  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DE5F0  83 C4 0C                  ADD ESP,0xc
004DE5F3  8B 01                     MOV EAX,dword ptr [ECX]
004DE5F5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DE5F8  8B 0C C5 A8 3E 79 00      MOV ECX,dword ptr [EAX*0x8 + 0x793ea8]
004DE5FF  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_004de602:
004DE602  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DE605  3B C6                     CMP EAX,ESI
004DE607  74 1D                     JZ 0x004de626
004DE609  8D 8C 85 20 FC FF FF      LEA ECX,[EBP + EAX*0x4 + 0xfffffc20]
004DE610  B8 DC 05 00 00            MOV EAX,0x5dc
004DE615  99                        CDQ
004DE616  F7 7D F8                  IDIV dword ptr [EBP + -0x8]
004DE619  8B 11                     MOV EDX,dword ptr [ECX]
004DE61B  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
004DE622  03 D0                     ADD EDX,EAX
004DE624  89 11                     MOV dword ptr [ECX],EDX
LAB_004de626:
004DE626  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004DE629  47                        INC EDI
004DE62A  8B B2 29 4E 7F 00         MOV ESI,dword ptr [EDX + 0x7f4e29]
004DE630  3B 7E 0C                  CMP EDI,dword ptr [ESI + 0xc]
004DE633  0F 82 0F FF FF FF         JC 0x004de548
LAB_004de639:
004DE639  B9 2D 00 00 00            MOV ECX,0x2d
004DE63E  33 C0                     XOR EAX,EAX
004DE640  8D BD 2C FF FF FF         LEA EDI,[EBP + 0xffffff2c]
004DE646  F3 AB                     STOSD.REP ES:EDI
004DE648  8B 8A EE 57 7F 00         MOV ECX,dword ptr [EDX + 0x7f57ee]
004DE64E  85 C9                     TEST ECX,ECX
004DE650  0F 84 AC 00 00 00         JZ 0x004de702
004DE656  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DE659  33 FF                     XOR EDI,EDI
004DE65B  85 C0                     TEST EAX,EAX
004DE65D  76 52                     JBE 0x004de6b1
LAB_004de65f:
004DE65F  8D 45 E8                  LEA EAX,[EBP + -0x18]
004DE662  8B D7                     MOV EDX,EDI
004DE664  50                        PUSH EAX
004DE665  E8 06 E6 1C 00            CALL 0x006acc70
004DE66A  B9 96 00 00 00            MOV ECX,0x96
004DE66F  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_004de672:
004DE672  51                        PUSH ECX
004DE673  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004DE676  E8 93 57 F2 FF            CALL 0x00403e0e
004DE67B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DE67E  8B F0                     MOV ESI,EAX
004DE680  85 F6                     TEST ESI,ESI
004DE682  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004DE685  74 0F                     JZ 0x004de696
004DE687  B8 DC 05 00 00            MOV EAX,0x5dc
004DE68C  99                        CDQ
004DE68D  F7 FE                     IDIV ESI
004DE68F  01 84 8D D4 FC FF FF      ADD dword ptr [EBP + ECX*0x4 + 0xfffffcd4],EAX
LAB_004de696:
004DE696  41                        INC ECX
004DE697  81 F9 C3 00 00 00         CMP ECX,0xc3
004DE69D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004DE6A0  7C D0                     JL 0x004de672
004DE6A2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004DE6A5  47                        INC EDI
004DE6A6  8B 89 EE 57 7F 00         MOV ECX,dword ptr [ECX + 0x7f57ee]
004DE6AC  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DE6AF  72 AE                     JC 0x004de65f
LAB_004de6b1:
004DE6B1  33 F6                     XOR ESI,ESI
LAB_004de6b3:
004DE6B3  8B 8C 35 2C FF FF FF      MOV ECX,dword ptr [EBP + ESI*0x1 + 0xffffff2c]
004DE6BA  85 C9                     TEST ECX,ECX
004DE6BC  74 2D                     JZ 0x004de6eb
004DE6BE  8B 84 35 78 FE FF FF      MOV EAX,dword ptr [EBP + ESI*0x1 + 0xfffffe78]
004DE6C5  3B C8                     CMP ECX,EAX
004DE6C7  7D 22                     JGE 0x004de6eb
004DE6C9  99                        CDQ
004DE6CA  F7 F9                     IDIV ECX
004DE6CC  8B C8                     MOV ECX,EAX
004DE6CE  B8 89 88 88 88            MOV EAX,0x88888889
004DE6D3  F7 E9                     IMUL ECX
004DE6D5  03 D1                     ADD EDX,ECX
004DE6D7  C1 FA 04                  SAR EDX,0x4
004DE6DA  8B C2                     MOV EAX,EDX
004DE6DC  C1 E8 1F                  SHR EAX,0x1f
004DE6DF  03 D0                     ADD EDX,EAX
004DE6E1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DE6E4  3B D0                     CMP EDX,EAX
004DE6E6  7E 03                     JLE 0x004de6eb
004DE6E8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_004de6eb:
004DE6EB  83 C6 04                  ADD ESI,0x4
004DE6EE  81 FE B4 00 00 00         CMP ESI,0xb4
004DE6F4  7C BD                     JL 0x004de6b3
004DE6F6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DE6F9  5F                        POP EDI
004DE6FA  5E                        POP ESI
004DE6FB  5B                        POP EBX
004DE6FC  8B E5                     MOV ESP,EBP
004DE6FE  5D                        POP EBP
004DE6FF  C2 04 00                  RET 0x4
LAB_004de702:
004DE702  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004DE705  85 C0                     TEST EAX,EAX
004DE707  B8 01 00 00 00            MOV EAX,0x1
004DE70C  75 03                     JNZ 0x004de711
004DE70E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_004de711:
004DE711  5F                        POP EDI
004DE712  5E                        POP ESI
004DE713  5B                        POP EBX
004DE714  8B E5                     MOV ESP,EBP
004DE716  5D                        POP EBP
004DE717  C2 04 00                  RET 0x4
