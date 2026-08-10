STManRuinC::GetMessage:
00630430  55                        PUSH EBP
00630431  8B EC                     MOV EBP,ESP
00630433  83 EC 54                  SUB ESP,0x54
00630436  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0063043B  53                        PUSH EBX
0063043C  56                        PUSH ESI
0063043D  57                        PUSH EDI
0063043E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00630441  33 FF                     XOR EDI,EDI
00630443  8D 55 B0                  LEA EDX,[EBP + -0x50]
00630446  8D 4D AC                  LEA ECX,[EBP + -0x54]
00630449  57                        PUSH EDI
0063044A  52                        PUSH EDX
0063044B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0063044E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00630451  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00630457  E8 94 D3 0F 00            CALL 0x0072d7f0
0063045C  8B F0                     MOV ESI,EAX
0063045E  83 C4 08                  ADD ESP,0x8
00630461  3B F7                     CMP ESI,EDI
00630463  0F 85 BB 02 00 00         JNZ 0x00630724
00630469  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0063046C  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0063046F  83 F8 03                  CMP EAX,0x3
00630472  0F 87 60 02 00 00         JA 0x006306d8
00630478  0F 84 3E 02 00 00         JZ 0x006306bc
0063047E  2B C7                     SUB EAX,EDI
00630480  0F 84 05 01 00 00         JZ 0x0063058b
00630486  83 E8 02                  SUB EAX,0x2
00630489  0F 85 81 02 00 00         JNZ 0x00630710
0063048F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00630492  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00630495  0F AF 05 54 87 80 00      IMUL EAX,dword ptr [0x00808754]
0063049C  89 43 71                  MOV dword ptr [EBX + 0x71],EAX
0063049F  A1 54 67 80 00            MOV EAX,[0x00806754]
006304A4  3B C7                     CMP EAX,EDI
006304A6  74 17                     JZ 0x006304bf
006304A8  8B 0D 98 D1 79 00         MOV ECX,dword ptr [0x0079d198]
006304AE  57                        PUSH EDI
006304AF  57                        PUSH EDI
006304B0  51                        PUSH ECX
006304B1  50                        PUSH EAX
006304B2  E8 D9 28 0C 00            CALL 0x006f2d90
006304B7  83 C4 10                  ADD ESP,0x10
006304BA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006304BD  EB 03                     JMP 0x006304c2
LAB_006304bf:
006304BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006304c2:
006304C2  3B C7                     CMP EAX,EDI
006304C4  74 21                     JZ 0x006304e7
006304C6  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
006304CA  75 17                     JNZ 0x006304e3
006304CC  50                        PUSH EAX
006304CD  8B CB                     MOV ECX,EBX
006304CF  E8 A2 1C DD FF            CALL 0x00402176
006304D4  8B 53 65                  MOV EDX,dword ptr [EBX + 0x65]
006304D7  8B CB                     MOV ECX,EBX
006304D9  89 53 71                  MOV dword ptr [EBX + 0x71],EDX
006304DC  E8 DA 0E DD FF            CALL 0x004013bb
006304E1  EB 72                     JMP 0x00630555
LAB_006304e3:
006304E3  3B C7                     CMP EAX,EDI
006304E5  75 17                     JNZ 0x006304fe
LAB_006304e7:
006304E7  B9 01 00 00 00            MOV ECX,0x1
006304EC  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
006304EF  C7 43 20 FF 00 00 00      MOV dword ptr [EBX + 0x20],0xff
006304F6  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
006304F9  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
006304FC  EB 0D                     JMP 0x0063050b
LAB_006304fe:
006304FE  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00630501  B9 05 00 00 00            MOV ECX,0x5
00630506  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
00630509  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_0063050b:
0063050B  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0063050E  85 C9                     TEST ECX,ECX
00630510  75 46                     JNZ 0x00630558
00630512  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00630519  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00630520  0F AF C1                  IMUL EAX,ECX
00630523  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
00630526  56                        PUSH ESI
00630527  E8 44 A7 07 00            CALL 0x006aac70
0063052C  8B D0                     MOV EDX,EAX
0063052E  85 D2                     TEST EDX,EDX
00630530  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
00630533  74 19                     JZ 0x0063054e
00630535  8B CE                     MOV ECX,ESI
00630537  8B FA                     MOV EDI,EDX
00630539  8B D1                     MOV EDX,ECX
0063053B  33 C0                     XOR EAX,EAX
0063053D  C1 E9 02                  SHR ECX,0x2
00630540  F3 AB                     STOSD.REP ES:EDI
00630542  8B CA                     MOV ECX,EDX
00630544  83 E1 03                  AND ECX,0x3
00630547  F3 AA                     STOSB.REP ES:EDI
00630549  89 73 30                  MOV dword ptr [EBX + 0x30],ESI
0063054C  EB 07                     JMP 0x00630555
LAB_0063054e:
0063054E  8B CB                     MOV ECX,EBX
00630550  E8 CF 45 DD FF            CALL 0x00404b24
LAB_00630555:
00630555  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00630558:
00630558  85 C0                     TEST EAX,EAX
0063055A  0F 84 B0 01 00 00         JZ 0x00630710
00630560  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
00630566  85 C9                     TEST ECX,ECX
00630568  0F 84 A2 01 00 00         JZ 0x00630710
0063056E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00630571  50                        PUSH EAX
00630572  E8 69 1B 0C 00            CALL 0x006f20e0
00630577  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0063057A  33 C0                     XOR EAX,EAX
0063057C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00630582  5F                        POP EDI
00630583  5E                        POP ESI
00630584  5B                        POP EBX
00630585  8B E5                     MOV ESP,EBP
00630587  5D                        POP EBP
00630588  C2 04 00                  RET 0x4
LAB_0063058b:
0063058B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0063058E  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00630591  3B C7                     CMP EAX,EDI
00630593  0F 84 08 01 00 00         JZ 0x006306a1
00630599  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0063059C  3B C7                     CMP EAX,EDI
0063059E  0F 86 FD 00 00 00         JBE 0x006306a1
006305A4  8D 78 FF                  LEA EDI,[EAX + -0x1]
006305A7  85 FF                     TEST EDI,EDI
006305A9  0F 8C F2 00 00 00         JL 0x006306a1
LAB_006305af:
006305AF  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006305B2  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
006305B5  73 0D                     JNC 0x006305c4
006305B7  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006305BA  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006305BD  0F AF F7                  IMUL ESI,EDI
006305C0  03 F1                     ADD ESI,ECX
006305C2  EB 02                     JMP 0x006305c6
LAB_006305c4:
006305C4  33 F6                     XOR ESI,ESI
LAB_006305c6:
006305C6  85 F6                     TEST ESI,ESI
006305C8  0F 84 CC 00 00 00         JZ 0x0063069a
006305CE  83 7E 04 01               CMP dword ptr [ESI + 0x4],0x1
006305D2  75 45                     JNZ 0x00630619
006305D4  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006305D7  85 C0                     TEST EAX,EAX
006305D9  75 3E                     JNZ 0x00630619
006305DB  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006305DE  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006305E1  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006305E4  51                        PUSH ECX
006305E5  52                        PUSH EDX
006305E6  50                        PUSH EAX
006305E7  8B CB                     MOV ECX,EBX
006305E9  E8 B8 4A DD FF            CALL 0x004050a6
006305EE  85 C0                     TEST EAX,EAX
006305F0  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006305F3  74 24                     JZ 0x00630619
006305F5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006305F8  8B 16                     MOV EDX,dword ptr [ESI]
006305FA  6A 00                     PUSH 0x0
006305FC  6A 01                     PUSH 0x1
006305FE  6A 01                     PUSH 0x1
00630600  51                        PUSH ECX
00630601  52                        PUSH EDX
00630602  8B CB                     MOV ECX,EBX
00630604  E8 96 56 DD FF            CALL 0x00405c9f
00630609  85 C0                     TEST EAX,EAX
0063060B  75 05                     JNZ 0x00630612
0063060D  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00630610  EB 07                     JMP 0x00630619
LAB_00630612:
00630612  C7 46 04 02 00 00 00      MOV dword ptr [ESI + 0x4],0x2
LAB_00630619:
00630619  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0063061C  83 F8 02                  CMP EAX,0x2
0063061F  74 05                     JZ 0x00630626
00630621  83 F8 01                  CMP EAX,0x1
00630624  75 74                     JNZ 0x0063069a
LAB_00630626:
00630626  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00630629  85 C9                     TEST ECX,ECX
0063062B  75 05                     JNZ 0x00630632
0063062D  83 F8 02                  CMP EAX,0x2
00630630  75 23                     JNZ 0x00630655
LAB_00630632:
00630632  A1 24 67 80 00            MOV EAX,[0x00806724]
00630637  33 D2                     XOR EDX,EDX
00630639  8A 56 20                  MOV DL,byte ptr [ESI + 0x20]
0063063C  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
00630640  8B 44 90 30               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x30]
00630644  51                        PUSH ECX
00630645  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00630648  50                        PUSH EAX
00630649  51                        PUSH ECX
0063064A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00630650  E8 FB 8C 0B 00            CALL 0x006e9350
LAB_00630655:
00630655  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063065B  B9 06 00 00 00            MOV ECX,0x6
00630660  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00630666  33 D2                     XOR EDX,EDX
00630668  F7 F1                     DIV ECX
0063066A  85 D2                     TEST EDX,EDX
0063066C  75 03                     JNZ 0x00630671
0063066E  FE 46 20                  INC byte ptr [ESI + 0x20]
LAB_00630671:
00630671  66 0F B6 56 20            MOVZX DX,byte ptr [ESI + 0x20]
00630676  A1 24 67 80 00            MOV EAX,[0x00806724]
0063067B  66 3B 50 23               CMP DX,word ptr [EAX + 0x23]
0063067F  7C 19                     JL 0x0063069a
00630681  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00630684  51                        PUSH ECX
00630685  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063068B  E8 10 85 0B 00            CALL 0x006e8ba0
00630690  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00630693  57                        PUSH EDI
00630694  52                        PUSH EDX
00630695  E8 D6 05 08 00            CALL 0x006b0c70
LAB_0063069a:
0063069A  4F                        DEC EDI
0063069B  0F 89 0E FF FF FF         JNS 0x006305af
LAB_006306a1:
006306A1  8B CB                     MOV ECX,EBX
006306A3  E8 13 35 DD FF            CALL 0x00403bbb
006306A8  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006306AB  33 C0                     XOR EAX,EAX
006306AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006306B3  5F                        POP EDI
006306B4  5E                        POP ESI
006306B5  5B                        POP EBX
006306B6  8B E5                     MOV ESP,EBP
006306B8  5D                        POP EBP
006306B9  C2 04 00                  RET 0x4
LAB_006306bc:
006306BC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006306BF  E8 2F 0C DD FF            CALL 0x004012f3
006306C4  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006306C7  33 C0                     XOR EAX,EAX
006306C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006306CF  5F                        POP EDI
006306D0  5E                        POP ESI
006306D1  5B                        POP EBX
006306D2  8B E5                     MOV ESP,EBP
006306D4  5D                        POP EBP
006306D5  C2 04 00                  RET 0x4
LAB_006306d8:
006306D8  3D 0F 01 00 00            CMP EAX,0x10f
006306DD  75 31                     JNZ 0x00630710
006306DF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006306E2  8D 45 F4                  LEA EAX,[EBP + -0xc]
006306E5  50                        PUSH EAX
006306E6  E8 FF 4B DD FF            CALL 0x004052ea
006306EB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006306EE  8B 15 98 D1 79 00         MOV EDX,dword ptr [0x0079d198]
006306F4  6A 0C                     PUSH 0xc
006306F6  51                        PUSH ECX
006306F7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006306FD  50                        PUSH EAX
006306FE  52                        PUSH EDX
006306FF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00630702  E8 71 09 DD FF            CALL 0x00401078
00630707  8D 45 F0                  LEA EAX,[EBP + -0x10]
0063070A  50                        PUSH EAX
0063070B  E8 50 A9 07 00            CALL 0x006ab060
LAB_00630710:
00630710  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00630713  33 C0                     XOR EAX,EAX
00630715  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063071B  5F                        POP EDI
0063071C  5E                        POP ESI
0063071D  5B                        POP EBX
0063071E  8B E5                     MOV ESP,EBP
00630720  5D                        POP EBP
00630721  C2 04 00                  RET 0x4
LAB_00630724:
00630724  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00630727  68 1C 1A 7D 00            PUSH 0x7d1a1c
0063072C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00630731  56                        PUSH ESI
00630732  57                        PUSH EDI
00630733  68 94 00 00 00            PUSH 0x94
00630738  68 F8 19 7D 00            PUSH 0x7d19f8
0063073D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00630743  E8 88 CD 07 00            CALL 0x006ad4d0
00630748  83 C4 18                  ADD ESP,0x18
0063074B  85 C0                     TEST EAX,EAX
0063074D  74 01                     JZ 0x00630750
0063074F  CC                        INT3
LAB_00630750:
00630750  68 96 00 00 00            PUSH 0x96
00630755  68 F8 19 7D 00            PUSH 0x7d19f8
0063075A  57                        PUSH EDI
0063075B  56                        PUSH ESI
0063075C  E8 DF 56 07 00            CALL 0x006a5e40
00630761  5F                        POP EDI
00630762  5E                        POP ESI
00630763  B8 FF FF 00 00            MOV EAX,0xffff
00630768  5B                        POP EBX
00630769  8B E5                     MOV ESP,EBP
0063076B  5D                        POP EBP
0063076C  C2 04 00                  RET 0x4
