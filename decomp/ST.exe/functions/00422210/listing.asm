STAllPlayersC::RestoreGObjData:
00422210  55                        PUSH EBP
00422211  8B EC                     MOV EBP,ESP
00422213  83 EC 50                  SUB ESP,0x50
00422216  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00422219  53                        PUSH EBX
0042221A  56                        PUSH ESI
0042221B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0042221E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00422224  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00422227  57                        PUSH EDI
00422228  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0042222B  8D 55 B0                  LEA EDX,[EBP + -0x50]
0042222E  6A 00                     PUSH 0x0
00422230  50                        PUSH EAX
00422231  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00422234  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042223A  E8 B1 B5 30 00            CALL 0x0072d7f0
0042223F  8B F0                     MOV ESI,EAX
00422241  83 C4 08                  ADD ESP,0x8
00422244  85 F6                     TEST ESI,ESI
00422246  0F 85 0E 09 00 00         JNZ 0x00422b5a
0042224C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0042224F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00422252  8B 0B                     MOV ECX,dword ptr [EBX]
00422254  8D 73 08                  LEA ESI,[EBX + 0x8]
00422257  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
0042225A  66 8B 53 04               MOV DX,word ptr [EBX + 0x4]
0042225E  66 89 50 30               MOV word ptr [EAX + 0x30],DX
00422262  66 8B 4B 06               MOV CX,word ptr [EBX + 0x6]
00422266  66 89 48 32               MOV word ptr [EAX + 0x32],CX
0042226A  8D 78 34                  LEA EDI,[EAX + 0x34]
0042226D  B9 17 00 00 00            MOV ECX,0x17
00422272  F3 A5                     MOVSD.REP ES:EDI,ESI
00422274  66 A5                     MOVSW ES:EDI,ESI
00422276  A4                        MOVSB ES:EDI,ESI
00422277  8D 73 67                  LEA ESI,[EBX + 0x67]
0042227A  8D B8 93 00 00 00         LEA EDI,[EAX + 0x93]
00422280  B9 1B 00 00 00            MOV ECX,0x1b
00422285  F3 A5                     MOVSD.REP ES:EDI,ESI
00422287  66 A5                     MOVSW ES:EDI,ESI
00422289  8B 93 D5 00 00 00         MOV EDX,dword ptr [EBX + 0xd5]
0042228F  89 90 CD 01 00 00         MOV dword ptr [EAX + 0x1cd],EDX
00422295  8B 8B D9 00 00 00         MOV ECX,dword ptr [EBX + 0xd9]
0042229B  89 88 01 01 00 00         MOV dword ptr [EAX + 0x101],ECX
004222A1  8B 93 DD 00 00 00         MOV EDX,dword ptr [EBX + 0xdd]
004222A7  89 90 05 01 00 00         MOV dword ptr [EAX + 0x105],EDX
004222AD  8B 8B E1 00 00 00         MOV ECX,dword ptr [EBX + 0xe1]
004222B3  89 88 09 01 00 00         MOV dword ptr [EAX + 0x109],ECX
004222B9  8B 93 E5 00 00 00         MOV EDX,dword ptr [EBX + 0xe5]
004222BF  89 90 0D 01 00 00         MOV dword ptr [EAX + 0x10d],EDX
004222C5  8B 8B E9 00 00 00         MOV ECX,dword ptr [EBX + 0xe9]
004222CB  89 88 11 01 00 00         MOV dword ptr [EAX + 0x111],ECX
004222D1  8B 93 ED 00 00 00         MOV EDX,dword ptr [EBX + 0xed]
004222D7  89 90 15 01 00 00         MOV dword ptr [EAX + 0x115],EDX
004222DD  8B 8B F1 00 00 00         MOV ECX,dword ptr [EBX + 0xf1]
004222E3  89 88 19 01 00 00         MOV dword ptr [EAX + 0x119],ECX
004222E9  8B 93 F5 00 00 00         MOV EDX,dword ptr [EBX + 0xf5]
004222EF  89 90 D1 01 00 00         MOV dword ptr [EAX + 0x1d1],EDX
004222F5  8B 8B F9 00 00 00         MOV ECX,dword ptr [EBX + 0xf9]
004222FB  89 88 15 02 00 00         MOV dword ptr [EAX + 0x215],ECX
00422301  8B 93 FD 00 00 00         MOV EDX,dword ptr [EBX + 0xfd]
00422307  89 90 19 02 00 00         MOV dword ptr [EAX + 0x219],EDX
0042230D  8B 8B 01 01 00 00         MOV ECX,dword ptr [EBX + 0x101]
00422313  89 88 1D 02 00 00         MOV dword ptr [EAX + 0x21d],ECX
00422319  8B 93 05 01 00 00         MOV EDX,dword ptr [EBX + 0x105]
0042231F  89 90 21 02 00 00         MOV dword ptr [EAX + 0x221],EDX
00422325  8B 8B 09 01 00 00         MOV ECX,dword ptr [EBX + 0x109]
0042232B  89 88 25 02 00 00         MOV dword ptr [EAX + 0x225],ECX
00422331  8B 93 0D 01 00 00         MOV EDX,dword ptr [EBX + 0x10d]
00422337  89 90 29 02 00 00         MOV dword ptr [EAX + 0x229],EDX
0042233D  8B 8B 75 02 00 00         MOV ECX,dword ptr [EBX + 0x275]
00422343  85 C9                     TEST ECX,ECX
00422345  7E 35                     JLE 0x0042237c
00422347  51                        PUSH ECX
00422348  E8 23 89 28 00            CALL 0x006aac70
0042234D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422350  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422353  8B F8                     MOV EDI,EAX
00422355  89 81 97 00 00 00         MOV dword ptr [ECX + 0x97],EAX
0042235B  8B B3 71 02 00 00         MOV ESI,dword ptr [EBX + 0x271]
00422361  8B 8B 75 02 00 00         MOV ECX,dword ptr [EBX + 0x275]
00422367  03 F2                     ADD ESI,EDX
00422369  8B D1                     MOV EDX,ECX
0042236B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042236E  C1 E9 02                  SHR ECX,0x2
00422371  F3 A5                     MOVSD.REP ES:EDI,ESI
00422373  8B CA                     MOV ECX,EDX
00422375  83 E1 03                  AND ECX,0x3
00422378  F3 A4                     MOVSB.REP ES:EDI,ESI
0042237A  EB 0A                     JMP 0x00422386
LAB_0042237c:
0042237C  C7 80 97 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x97],0x0
LAB_00422386:
00422386  8B 8B 7D 02 00 00         MOV ECX,dword ptr [EBX + 0x27d]
0042238C  85 C9                     TEST ECX,ECX
0042238E  7E 35                     JLE 0x004223c5
00422390  51                        PUSH ECX
00422391  E8 DA 88 28 00            CALL 0x006aac70
00422396  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422399  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042239C  8B F8                     MOV EDI,EAX
0042239E  89 81 9F 00 00 00         MOV dword ptr [ECX + 0x9f],EAX
004223A4  8B B3 79 02 00 00         MOV ESI,dword ptr [EBX + 0x279]
004223AA  8B 8B 7D 02 00 00         MOV ECX,dword ptr [EBX + 0x27d]
004223B0  03 F2                     ADD ESI,EDX
004223B2  8B D1                     MOV EDX,ECX
004223B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004223B7  C1 E9 02                  SHR ECX,0x2
004223BA  F3 A5                     MOVSD.REP ES:EDI,ESI
004223BC  8B CA                     MOV ECX,EDX
004223BE  83 E1 03                  AND ECX,0x3
004223C1  F3 A4                     MOVSB.REP ES:EDI,ESI
004223C3  EB 0A                     JMP 0x004223cf
LAB_004223c5:
004223C5  C7 80 9F 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0x9f],0x0
LAB_004223cf:
004223CF  83 BB 11 01 00 00 FF      CMP dword ptr [EBX + 0x111],-0x1
004223D6  74 3B                     JZ 0x00422413
004223D8  8B 83 15 01 00 00         MOV EAX,dword ptr [EBX + 0x115]
004223DE  50                        PUSH EAX
004223DF  E8 8C 88 28 00            CALL 0x006aac70
004223E4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004223E7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004223EA  8B F8                     MOV EDI,EAX
004223EC  89 81 1D 01 00 00         MOV dword ptr [ECX + 0x11d],EAX
004223F2  8B B3 11 01 00 00         MOV ESI,dword ptr [EBX + 0x111]
004223F8  8B 8B 15 01 00 00         MOV ECX,dword ptr [EBX + 0x115]
004223FE  03 F2                     ADD ESI,EDX
00422400  8B D1                     MOV EDX,ECX
00422402  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00422405  C1 E9 02                  SHR ECX,0x2
00422408  F3 A5                     MOVSD.REP ES:EDI,ESI
0042240A  8B CA                     MOV ECX,EDX
0042240C  83 E1 03                  AND ECX,0x3
0042240F  F3 A4                     MOVSB.REP ES:EDI,ESI
00422411  EB 0A                     JMP 0x0042241d
LAB_00422413:
00422413  C7 80 1D 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x11d],0x0
LAB_0042241d:
0042241D  83 BB 19 01 00 00 FF      CMP dword ptr [EBX + 0x119],-0x1
00422424  74 3B                     JZ 0x00422461
00422426  8B 83 1D 01 00 00         MOV EAX,dword ptr [EBX + 0x11d]
0042242C  50                        PUSH EAX
0042242D  E8 3E 88 28 00            CALL 0x006aac70
00422432  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422435  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422438  8B F8                     MOV EDI,EAX
0042243A  89 81 21 01 00 00         MOV dword ptr [ECX + 0x121],EAX
00422440  8B B3 19 01 00 00         MOV ESI,dword ptr [EBX + 0x119]
00422446  8B 8B 1D 01 00 00         MOV ECX,dword ptr [EBX + 0x11d]
0042244C  03 F2                     ADD ESI,EDX
0042244E  8B D1                     MOV EDX,ECX
00422450  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00422453  C1 E9 02                  SHR ECX,0x2
00422456  F3 A5                     MOVSD.REP ES:EDI,ESI
00422458  8B CA                     MOV ECX,EDX
0042245A  83 E1 03                  AND ECX,0x3
0042245D  F3 A4                     MOVSB.REP ES:EDI,ESI
0042245F  EB 0A                     JMP 0x0042246b
LAB_00422461:
00422461  C7 80 21 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x121],0x0
LAB_0042246b:
0042246B  83 BB 21 01 00 00 FF      CMP dword ptr [EBX + 0x121],-0x1
00422472  74 3B                     JZ 0x004224af
00422474  8B 83 25 01 00 00         MOV EAX,dword ptr [EBX + 0x125]
0042247A  50                        PUSH EAX
0042247B  E8 F0 87 28 00            CALL 0x006aac70
00422480  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422483  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422486  8B F8                     MOV EDI,EAX
00422488  89 81 25 01 00 00         MOV dword ptr [ECX + 0x125],EAX
0042248E  8B B3 21 01 00 00         MOV ESI,dword ptr [EBX + 0x121]
00422494  8B 8B 25 01 00 00         MOV ECX,dword ptr [EBX + 0x125]
0042249A  03 F2                     ADD ESI,EDX
0042249C  8B D1                     MOV EDX,ECX
0042249E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004224A1  C1 E9 02                  SHR ECX,0x2
004224A4  F3 A5                     MOVSD.REP ES:EDI,ESI
004224A6  8B CA                     MOV ECX,EDX
004224A8  83 E1 03                  AND ECX,0x3
004224AB  F3 A4                     MOVSB.REP ES:EDI,ESI
004224AD  EB 0A                     JMP 0x004224b9
LAB_004224af:
004224AF  C7 80 25 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x125],0x0
LAB_004224b9:
004224B9  83 BB 29 01 00 00 FF      CMP dword ptr [EBX + 0x129],-0x1
004224C0  74 3B                     JZ 0x004224fd
004224C2  8B 83 2D 01 00 00         MOV EAX,dword ptr [EBX + 0x12d]
004224C8  50                        PUSH EAX
004224C9  E8 A2 87 28 00            CALL 0x006aac70
004224CE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004224D1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004224D4  8B F8                     MOV EDI,EAX
004224D6  89 81 29 01 00 00         MOV dword ptr [ECX + 0x129],EAX
004224DC  8B 93 29 01 00 00         MOV EDX,dword ptr [EBX + 0x129]
004224E2  8B 8B 2D 01 00 00         MOV ECX,dword ptr [EBX + 0x12d]
004224E8  03 F2                     ADD ESI,EDX
004224EA  8B D1                     MOV EDX,ECX
004224EC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004224EF  C1 E9 02                  SHR ECX,0x2
004224F2  F3 A5                     MOVSD.REP ES:EDI,ESI
004224F4  8B CA                     MOV ECX,EDX
004224F6  83 E1 03                  AND ECX,0x3
004224F9  F3 A4                     MOVSB.REP ES:EDI,ESI
004224FB  EB 0A                     JMP 0x00422507
LAB_004224fd:
004224FD  C7 80 29 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x129],0x0
LAB_00422507:
00422507  8D B0 35 01 00 00         LEA ESI,[EAX + 0x135]
0042250D  8D BB 41 01 00 00         LEA EDI,[EBX + 0x141]
00422513  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_0042251a:
0042251A  8B 47 F0                  MOV EAX,dword ptr [EDI + -0x10]
0042251D  83 F8 FF                  CMP EAX,-0x1
00422520  74 12                     JZ 0x00422534
00422522  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00422525  03 C1                     ADD EAX,ECX
00422527  50                        PUSH EAX
00422528  6A 00                     PUSH 0x0
0042252A  E8 31 DB 28 00            CALL 0x006b0060
0042252F  89 46 F8                  MOV dword ptr [ESI + -0x8],EAX
00422532  EB 07                     JMP 0x0042253b
LAB_00422534:
00422534  C7 46 F8 00 00 00 00      MOV dword ptr [ESI + -0x8],0x0
LAB_0042253b:
0042253B  8B 07                     MOV EAX,dword ptr [EDI]
0042253D  83 F8 FF                  CMP EAX,-0x1
00422540  74 11                     JZ 0x00422553
00422542  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422545  03 C2                     ADD EAX,EDX
00422547  50                        PUSH EAX
00422548  6A 00                     PUSH 0x0
0042254A  E8 11 DB 28 00            CALL 0x006b0060
0042254F  89 06                     MOV dword ptr [ESI],EAX
00422551  EB 06                     JMP 0x00422559
LAB_00422553:
00422553  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00422559:
00422559  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042255C  83 C7 08                  ADD EDI,0x8
0042255F  83 C6 04                  ADD ESI,0x4
00422562  48                        DEC EAX
00422563  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00422566  75 B2                     JNZ 0x0042251a
00422568  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042256B  8D BB 71 01 00 00         LEA EDI,[EBX + 0x171]
00422571  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
00422578  8D B0 4D 01 00 00         LEA ESI,[EAX + 0x14d]
LAB_0042257e:
0042257E  8B 47 E0                  MOV EAX,dword ptr [EDI + -0x20]
00422581  83 F8 FF                  CMP EAX,-0x1
00422584  74 12                     JZ 0x00422598
00422586  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00422589  03 C1                     ADD EAX,ECX
0042258B  50                        PUSH EAX
0042258C  6A 00                     PUSH 0x0
0042258E  E8 CD DA 28 00            CALL 0x006b0060
00422593  89 46 F0                  MOV dword ptr [ESI + -0x10],EAX
00422596  EB 07                     JMP 0x0042259f
LAB_00422598:
00422598  C7 46 F0 00 00 00 00      MOV dword ptr [ESI + -0x10],0x0
LAB_0042259f:
0042259F  8B 07                     MOV EAX,dword ptr [EDI]
004225A1  83 F8 FF                  CMP EAX,-0x1
004225A4  74 11                     JZ 0x004225b7
004225A6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004225A9  03 C2                     ADD EAX,EDX
004225AB  50                        PUSH EAX
004225AC  6A 00                     PUSH 0x0
004225AE  E8 AD DA 28 00            CALL 0x006b0060
004225B3  89 06                     MOV dword ptr [ESI],EAX
004225B5  EB 06                     JMP 0x004225bd
LAB_004225b7:
004225B7  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004225bd:
004225BD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004225C0  83 C7 08                  ADD EDI,0x8
004225C3  83 C6 04                  ADD ESI,0x4
004225C6  48                        DEC EAX
004225C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004225CA  75 B2                     JNZ 0x0042257e
004225CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004225CF  8D BB B9 01 00 00         LEA EDI,[EBX + 0x1b9]
004225D5  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
004225DC  8D B0 71 01 00 00         LEA ESI,[EAX + 0x171]
LAB_004225e2:
004225E2  8B 47 D8                  MOV EAX,dword ptr [EDI + -0x28]
004225E5  83 F8 FF                  CMP EAX,-0x1
004225E8  74 12                     JZ 0x004225fc
004225EA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004225ED  03 C1                     ADD EAX,ECX
004225EF  50                        PUSH EAX
004225F0  6A 00                     PUSH 0x0
004225F2  E8 69 DA 28 00            CALL 0x006b0060
004225F7  89 46 EC                  MOV dword ptr [ESI + -0x14],EAX
004225FA  EB 07                     JMP 0x00422603
LAB_004225fc:
004225FC  C7 46 EC 00 00 00 00      MOV dword ptr [ESI + -0x14],0x0
LAB_00422603:
00422603  8B 07                     MOV EAX,dword ptr [EDI]
00422605  83 F8 FF                  CMP EAX,-0x1
00422608  74 11                     JZ 0x0042261b
0042260A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042260D  03 C2                     ADD EAX,EDX
0042260F  50                        PUSH EAX
00422610  6A 00                     PUSH 0x0
00422612  E8 49 DA 28 00            CALL 0x006b0060
00422617  89 06                     MOV dword ptr [ESI],EAX
00422619  EB 06                     JMP 0x00422621
LAB_0042261b:
0042261B  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00422621:
00422621  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00422624  83 C7 08                  ADD EDI,0x8
00422627  83 C6 04                  ADD ESI,0x4
0042262A  48                        DEC EAX
0042262B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042262E  75 B2                     JNZ 0x004225e2
00422630  83 BB E1 01 00 00 FF      CMP dword ptr [EBX + 0x1e1],-0x1
00422637  74 3D                     JZ 0x00422676
00422639  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
0042263F  50                        PUSH EAX
00422640  E8 2B 86 28 00            CALL 0x006aac70
00422645  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422648  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0042264B  8B F8                     MOV EDI,EAX
0042264D  89 81 85 01 00 00         MOV dword ptr [ECX + 0x185],EAX
00422653  8B 93 E1 01 00 00         MOV EDX,dword ptr [EBX + 0x1e1]
00422659  8B 8B E5 01 00 00         MOV ECX,dword ptr [EBX + 0x1e5]
0042265F  03 F2                     ADD ESI,EDX
00422661  8B D1                     MOV EDX,ECX
00422663  C1 E9 02                  SHR ECX,0x2
00422666  F3 A5                     MOVSD.REP ES:EDI,ESI
00422668  8B CA                     MOV ECX,EDX
0042266A  83 E1 03                  AND ECX,0x3
0042266D  F3 A4                     MOVSB.REP ES:EDI,ESI
0042266F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422672  33 FF                     XOR EDI,EDI
00422674  EB 0B                     JMP 0x00422681
LAB_00422676:
00422676  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422679  33 FF                     XOR EDI,EDI
0042267B  89 BE 85 01 00 00         MOV dword ptr [ESI + 0x185],EDI
LAB_00422681:
00422681  83 BB E9 01 00 00 FF      CMP dword ptr [EBX + 0x1e9],-0x1
00422688  74 3D                     JZ 0x004226c7
0042268A  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00422690  50                        PUSH EAX
00422691  E8 DA 85 28 00            CALL 0x006aac70
00422696  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422699  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042269C  8B F8                     MOV EDI,EAX
0042269E  89 81 89 01 00 00         MOV dword ptr [ECX + 0x189],EAX
004226A4  8B B3 E9 01 00 00         MOV ESI,dword ptr [EBX + 0x1e9]
004226AA  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
004226B0  03 F2                     ADD ESI,EDX
004226B2  8B D1                     MOV EDX,ECX
004226B4  C1 E9 02                  SHR ECX,0x2
004226B7  F3 A5                     MOVSD.REP ES:EDI,ESI
004226B9  8B CA                     MOV ECX,EDX
004226BB  83 E1 03                  AND ECX,0x3
004226BE  F3 A4                     MOVSB.REP ES:EDI,ESI
004226C0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004226C3  33 FF                     XOR EDI,EDI
004226C5  EB 06                     JMP 0x004226cd
LAB_004226c7:
004226C7  89 BE 89 01 00 00         MOV dword ptr [ESI + 0x189],EDI
LAB_004226cd:
004226CD  83 BB F1 01 00 00 FF      CMP dword ptr [EBX + 0x1f1],-0x1
004226D4  74 3D                     JZ 0x00422713
004226D6  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
004226DC  50                        PUSH EAX
004226DD  E8 8E 85 28 00            CALL 0x006aac70
004226E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004226E5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004226E8  8B F8                     MOV EDI,EAX
004226EA  89 81 8D 01 00 00         MOV dword ptr [ECX + 0x18d],EAX
004226F0  8B B3 F1 01 00 00         MOV ESI,dword ptr [EBX + 0x1f1]
004226F6  8B 8B F5 01 00 00         MOV ECX,dword ptr [EBX + 0x1f5]
004226FC  03 F2                     ADD ESI,EDX
004226FE  8B D1                     MOV EDX,ECX
00422700  C1 E9 02                  SHR ECX,0x2
00422703  F3 A5                     MOVSD.REP ES:EDI,ESI
00422705  8B CA                     MOV ECX,EDX
00422707  83 E1 03                  AND ECX,0x3
0042270A  F3 A4                     MOVSB.REP ES:EDI,ESI
0042270C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0042270F  33 FF                     XOR EDI,EDI
00422711  EB 06                     JMP 0x00422719
LAB_00422713:
00422713  89 BE 8D 01 00 00         MOV dword ptr [ESI + 0x18d],EDI
LAB_00422719:
00422719  83 BB F9 01 00 00 FF      CMP dword ptr [EBX + 0x1f9],-0x1
00422720  74 3D                     JZ 0x0042275f
00422722  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
00422728  50                        PUSH EAX
00422729  E8 42 85 28 00            CALL 0x006aac70
0042272E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422731  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422734  8B F8                     MOV EDI,EAX
00422736  89 81 91 01 00 00         MOV dword ptr [ECX + 0x191],EAX
0042273C  8B B3 F9 01 00 00         MOV ESI,dword ptr [EBX + 0x1f9]
00422742  8B 8B FD 01 00 00         MOV ECX,dword ptr [EBX + 0x1fd]
00422748  03 F2                     ADD ESI,EDX
0042274A  8B D1                     MOV EDX,ECX
0042274C  C1 E9 02                  SHR ECX,0x2
0042274F  F3 A5                     MOVSD.REP ES:EDI,ESI
00422751  8B CA                     MOV ECX,EDX
00422753  83 E1 03                  AND ECX,0x3
00422756  F3 A4                     MOVSB.REP ES:EDI,ESI
00422758  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0042275B  33 FF                     XOR EDI,EDI
0042275D  EB 06                     JMP 0x00422765
LAB_0042275f:
0042275F  89 BE 91 01 00 00         MOV dword ptr [ESI + 0x191],EDI
LAB_00422765:
00422765  83 BB 01 02 00 00 FF      CMP dword ptr [EBX + 0x201],-0x1
0042276C  74 3D                     JZ 0x004227ab
0042276E  8B 83 05 02 00 00         MOV EAX,dword ptr [EBX + 0x205]
00422774  50                        PUSH EAX
00422775  E8 F6 84 28 00            CALL 0x006aac70
0042277A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042277D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00422780  8B F8                     MOV EDI,EAX
00422782  89 81 95 01 00 00         MOV dword ptr [ECX + 0x195],EAX
00422788  8B 93 01 02 00 00         MOV EDX,dword ptr [EBX + 0x201]
0042278E  8B 8B 05 02 00 00         MOV ECX,dword ptr [EBX + 0x205]
00422794  03 F2                     ADD ESI,EDX
00422796  8B D1                     MOV EDX,ECX
00422798  C1 E9 02                  SHR ECX,0x2
0042279B  F3 A5                     MOVSD.REP ES:EDI,ESI
0042279D  8B CA                     MOV ECX,EDX
0042279F  83 E1 03                  AND ECX,0x3
004227A2  F3 A4                     MOVSB.REP ES:EDI,ESI
004227A4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004227A7  33 FF                     XOR EDI,EDI
004227A9  EB 06                     JMP 0x004227b1
LAB_004227ab:
004227AB  89 BE 95 01 00 00         MOV dword ptr [ESI + 0x195],EDI
LAB_004227b1:
004227B1  83 BB 09 02 00 00 FF      CMP dword ptr [EBX + 0x209],-0x1
004227B8  74 3D                     JZ 0x004227f7
004227BA  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
004227C0  50                        PUSH EAX
004227C1  E8 AA 84 28 00            CALL 0x006aac70
004227C6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004227C9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004227CC  8B F8                     MOV EDI,EAX
004227CE  89 81 99 01 00 00         MOV dword ptr [ECX + 0x199],EAX
004227D4  8B B3 09 02 00 00         MOV ESI,dword ptr [EBX + 0x209]
004227DA  8B 8B 0D 02 00 00         MOV ECX,dword ptr [EBX + 0x20d]
004227E0  03 F2                     ADD ESI,EDX
004227E2  8B D1                     MOV EDX,ECX
004227E4  C1 E9 02                  SHR ECX,0x2
004227E7  F3 A5                     MOVSD.REP ES:EDI,ESI
004227E9  8B CA                     MOV ECX,EDX
004227EB  83 E1 03                  AND ECX,0x3
004227EE  F3 A4                     MOVSB.REP ES:EDI,ESI
004227F0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004227F3  33 FF                     XOR EDI,EDI
004227F5  EB 06                     JMP 0x004227fd
LAB_004227f7:
004227F7  89 BE 99 01 00 00         MOV dword ptr [ESI + 0x199],EDI
LAB_004227fd:
004227FD  8B 83 11 02 00 00         MOV EAX,dword ptr [EBX + 0x211]
00422803  83 F8 FF                  CMP EAX,-0x1
00422806  74 14                     JZ 0x0042281c
00422808  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042280B  03 C1                     ADD EAX,ECX
0042280D  50                        PUSH EAX
0042280E  57                        PUSH EDI
0042280F  E8 4C D8 28 00            CALL 0x006b0060
00422814  89 86 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EAX
0042281A  EB 06                     JMP 0x00422822
LAB_0042281c:
0042281C  89 BE 9D 01 00 00         MOV dword ptr [ESI + 0x19d],EDI
LAB_00422822:
00422822  8B 83 19 02 00 00         MOV EAX,dword ptr [EBX + 0x219]
00422828  83 F8 FF                  CMP EAX,-0x1
0042282B  74 14                     JZ 0x00422841
0042282D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422830  03 C2                     ADD EAX,EDX
00422832  50                        PUSH EAX
00422833  57                        PUSH EDI
00422834  E8 27 D8 28 00            CALL 0x006b0060
00422839  89 86 A1 01 00 00         MOV dword ptr [ESI + 0x1a1],EAX
0042283F  EB 06                     JMP 0x00422847
LAB_00422841:
00422841  89 BE A1 01 00 00         MOV dword ptr [ESI + 0x1a1],EDI
LAB_00422847:
00422847  83 BB 21 02 00 00 FF      CMP dword ptr [EBX + 0x221],-0x1
0042284E  74 3D                     JZ 0x0042288d
00422850  8B 83 25 02 00 00         MOV EAX,dword ptr [EBX + 0x225]
00422856  50                        PUSH EAX
00422857  E8 14 84 28 00            CALL 0x006aac70
0042285C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042285F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00422862  8B F8                     MOV EDI,EAX
00422864  89 81 A5 01 00 00         MOV dword ptr [ECX + 0x1a5],EAX
0042286A  8B 93 21 02 00 00         MOV EDX,dword ptr [EBX + 0x221]
00422870  8B 8B 25 02 00 00         MOV ECX,dword ptr [EBX + 0x225]
00422876  03 F2                     ADD ESI,EDX
00422878  8B D1                     MOV EDX,ECX
0042287A  C1 E9 02                  SHR ECX,0x2
0042287D  F3 A5                     MOVSD.REP ES:EDI,ESI
0042287F  8B CA                     MOV ECX,EDX
00422881  83 E1 03                  AND ECX,0x3
00422884  F3 A4                     MOVSB.REP ES:EDI,ESI
00422886  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422889  33 FF                     XOR EDI,EDI
0042288B  EB 06                     JMP 0x00422893
LAB_0042288d:
0042288D  89 BE A5 01 00 00         MOV dword ptr [ESI + 0x1a5],EDI
LAB_00422893:
00422893  83 BB 29 02 00 00 FF      CMP dword ptr [EBX + 0x229],-0x1
0042289A  74 3D                     JZ 0x004228d9
0042289C  8B 83 2D 02 00 00         MOV EAX,dword ptr [EBX + 0x22d]
004228A2  50                        PUSH EAX
004228A3  E8 C8 83 28 00            CALL 0x006aac70
004228A8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004228AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004228AE  8B F8                     MOV EDI,EAX
004228B0  89 81 A9 01 00 00         MOV dword ptr [ECX + 0x1a9],EAX
004228B6  8B B3 29 02 00 00         MOV ESI,dword ptr [EBX + 0x229]
004228BC  8B 8B 2D 02 00 00         MOV ECX,dword ptr [EBX + 0x22d]
004228C2  03 F2                     ADD ESI,EDX
004228C4  8B D1                     MOV EDX,ECX
004228C6  C1 E9 02                  SHR ECX,0x2
004228C9  F3 A5                     MOVSD.REP ES:EDI,ESI
004228CB  8B CA                     MOV ECX,EDX
004228CD  83 E1 03                  AND ECX,0x3
004228D0  F3 A4                     MOVSB.REP ES:EDI,ESI
004228D2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004228D5  33 FF                     XOR EDI,EDI
004228D7  EB 06                     JMP 0x004228df
LAB_004228d9:
004228D9  89 BE A9 01 00 00         MOV dword ptr [ESI + 0x1a9],EDI
LAB_004228df:
004228DF  83 BB 31 02 00 00 FF      CMP dword ptr [EBX + 0x231],-0x1
004228E6  74 3D                     JZ 0x00422925
004228E8  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
004228EE  50                        PUSH EAX
004228EF  E8 7C 83 28 00            CALL 0x006aac70
004228F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004228F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004228FA  8B F8                     MOV EDI,EAX
004228FC  89 81 AD 01 00 00         MOV dword ptr [ECX + 0x1ad],EAX
00422902  8B B3 31 02 00 00         MOV ESI,dword ptr [EBX + 0x231]
00422908  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
0042290E  03 F2                     ADD ESI,EDX
00422910  8B D1                     MOV EDX,ECX
00422912  C1 E9 02                  SHR ECX,0x2
00422915  F3 A5                     MOVSD.REP ES:EDI,ESI
00422917  8B CA                     MOV ECX,EDX
00422919  83 E1 03                  AND ECX,0x3
0042291C  F3 A4                     MOVSB.REP ES:EDI,ESI
0042291E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422921  33 FF                     XOR EDI,EDI
00422923  EB 06                     JMP 0x0042292b
LAB_00422925:
00422925  89 BE AD 01 00 00         MOV dword ptr [ESI + 0x1ad],EDI
LAB_0042292b:
0042292B  83 BB 39 02 00 00 FF      CMP dword ptr [EBX + 0x239],-0x1
00422932  74 3D                     JZ 0x00422971
00422934  8B 83 3D 02 00 00         MOV EAX,dword ptr [EBX + 0x23d]
0042293A  50                        PUSH EAX
0042293B  E8 30 83 28 00            CALL 0x006aac70
00422940  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422943  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422946  8B F8                     MOV EDI,EAX
00422948  89 81 B1 01 00 00         MOV dword ptr [ECX + 0x1b1],EAX
0042294E  8B B3 39 02 00 00         MOV ESI,dword ptr [EBX + 0x239]
00422954  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
0042295A  03 F2                     ADD ESI,EDX
0042295C  8B D1                     MOV EDX,ECX
0042295E  C1 E9 02                  SHR ECX,0x2
00422961  F3 A5                     MOVSD.REP ES:EDI,ESI
00422963  8B CA                     MOV ECX,EDX
00422965  83 E1 03                  AND ECX,0x3
00422968  F3 A4                     MOVSB.REP ES:EDI,ESI
0042296A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0042296D  33 FF                     XOR EDI,EDI
0042296F  EB 06                     JMP 0x00422977
LAB_00422971:
00422971  89 BE B1 01 00 00         MOV dword ptr [ESI + 0x1b1],EDI
LAB_00422977:
00422977  83 BB 41 02 00 00 FF      CMP dword ptr [EBX + 0x241],-0x1
0042297E  74 3D                     JZ 0x004229bd
00422980  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
00422986  50                        PUSH EAX
00422987  E8 E4 82 28 00            CALL 0x006aac70
0042298C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042298F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00422992  8B F8                     MOV EDI,EAX
00422994  89 81 B5 01 00 00         MOV dword ptr [ECX + 0x1b5],EAX
0042299A  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
004229A0  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
004229A6  03 F2                     ADD ESI,EDX
004229A8  8B D1                     MOV EDX,ECX
004229AA  C1 E9 02                  SHR ECX,0x2
004229AD  F3 A5                     MOVSD.REP ES:EDI,ESI
004229AF  8B CA                     MOV ECX,EDX
004229B1  83 E1 03                  AND ECX,0x3
004229B4  F3 A4                     MOVSB.REP ES:EDI,ESI
004229B6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004229B9  33 FF                     XOR EDI,EDI
004229BB  EB 06                     JMP 0x004229c3
LAB_004229bd:
004229BD  89 BE B5 01 00 00         MOV dword ptr [ESI + 0x1b5],EDI
LAB_004229c3:
004229C3  83 BB 49 02 00 00 FF      CMP dword ptr [EBX + 0x249],-0x1
004229CA  74 3D                     JZ 0x00422a09
004229CC  8B 83 4D 02 00 00         MOV EAX,dword ptr [EBX + 0x24d]
004229D2  50                        PUSH EAX
004229D3  E8 98 82 28 00            CALL 0x006aac70
004229D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004229DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004229DE  8B F8                     MOV EDI,EAX
004229E0  89 81 B9 01 00 00         MOV dword ptr [ECX + 0x1b9],EAX
004229E6  8B B3 49 02 00 00         MOV ESI,dword ptr [EBX + 0x249]
004229EC  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
004229F2  03 F2                     ADD ESI,EDX
004229F4  8B D1                     MOV EDX,ECX
004229F6  C1 E9 02                  SHR ECX,0x2
004229F9  F3 A5                     MOVSD.REP ES:EDI,ESI
004229FB  8B CA                     MOV ECX,EDX
004229FD  83 E1 03                  AND ECX,0x3
00422A00  F3 A4                     MOVSB.REP ES:EDI,ESI
00422A02  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422A05  33 FF                     XOR EDI,EDI
00422A07  EB 06                     JMP 0x00422a0f
LAB_00422a09:
00422A09  89 BE B9 01 00 00         MOV dword ptr [ESI + 0x1b9],EDI
LAB_00422a0f:
00422A0F  83 BB 51 02 00 00 FF      CMP dword ptr [EBX + 0x251],-0x1
00422A16  74 3D                     JZ 0x00422a55
00422A18  8B 83 55 02 00 00         MOV EAX,dword ptr [EBX + 0x255]
00422A1E  50                        PUSH EAX
00422A1F  E8 4C 82 28 00            CALL 0x006aac70
00422A24  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422A27  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422A2A  8B F8                     MOV EDI,EAX
00422A2C  89 81 BD 01 00 00         MOV dword ptr [ECX + 0x1bd],EAX
00422A32  8B B3 51 02 00 00         MOV ESI,dword ptr [EBX + 0x251]
00422A38  8B 8B 55 02 00 00         MOV ECX,dword ptr [EBX + 0x255]
00422A3E  03 F2                     ADD ESI,EDX
00422A40  8B D1                     MOV EDX,ECX
00422A42  C1 E9 02                  SHR ECX,0x2
00422A45  F3 A5                     MOVSD.REP ES:EDI,ESI
00422A47  8B CA                     MOV ECX,EDX
00422A49  83 E1 03                  AND ECX,0x3
00422A4C  F3 A4                     MOVSB.REP ES:EDI,ESI
00422A4E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422A51  33 FF                     XOR EDI,EDI
00422A53  EB 06                     JMP 0x00422a5b
LAB_00422a55:
00422A55  89 BE BD 01 00 00         MOV dword ptr [ESI + 0x1bd],EDI
LAB_00422a5b:
00422A5B  83 BB 59 02 00 00 FF      CMP dword ptr [EBX + 0x259],-0x1
00422A62  74 3D                     JZ 0x00422aa1
00422A64  8B 83 5D 02 00 00         MOV EAX,dword ptr [EBX + 0x25d]
00422A6A  50                        PUSH EAX
00422A6B  E8 00 82 28 00            CALL 0x006aac70
00422A70  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422A73  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422A76  8B F8                     MOV EDI,EAX
00422A78  89 81 C1 01 00 00         MOV dword ptr [ECX + 0x1c1],EAX
00422A7E  8B B3 59 02 00 00         MOV ESI,dword ptr [EBX + 0x259]
00422A84  8B 8B 5D 02 00 00         MOV ECX,dword ptr [EBX + 0x25d]
00422A8A  03 F2                     ADD ESI,EDX
00422A8C  8B D1                     MOV EDX,ECX
00422A8E  C1 E9 02                  SHR ECX,0x2
00422A91  F3 A5                     MOVSD.REP ES:EDI,ESI
00422A93  8B CA                     MOV ECX,EDX
00422A95  83 E1 03                  AND ECX,0x3
00422A98  F3 A4                     MOVSB.REP ES:EDI,ESI
00422A9A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422A9D  33 FF                     XOR EDI,EDI
00422A9F  EB 06                     JMP 0x00422aa7
LAB_00422aa1:
00422AA1  89 BE C1 01 00 00         MOV dword ptr [ESI + 0x1c1],EDI
LAB_00422aa7:
00422AA7  83 BB 61 02 00 00 FF      CMP dword ptr [EBX + 0x261],-0x1
00422AAE  74 3D                     JZ 0x00422aed
00422AB0  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
00422AB6  50                        PUSH EAX
00422AB7  E8 B4 81 28 00            CALL 0x006aac70
00422ABC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422ABF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00422AC2  8B F8                     MOV EDI,EAX
00422AC4  89 81 C5 01 00 00         MOV dword ptr [ECX + 0x1c5],EAX
00422ACA  8B 93 61 02 00 00         MOV EDX,dword ptr [EBX + 0x261]
00422AD0  8B 8B 65 02 00 00         MOV ECX,dword ptr [EBX + 0x265]
00422AD6  03 F2                     ADD ESI,EDX
00422AD8  8B D1                     MOV EDX,ECX
00422ADA  C1 E9 02                  SHR ECX,0x2
00422ADD  F3 A5                     MOVSD.REP ES:EDI,ESI
00422ADF  8B CA                     MOV ECX,EDX
00422AE1  83 E1 03                  AND ECX,0x3
00422AE4  F3 A4                     MOVSB.REP ES:EDI,ESI
00422AE6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00422AE9  33 FF                     XOR EDI,EDI
00422AEB  EB 06                     JMP 0x00422af3
LAB_00422aed:
00422AED  89 BE C5 01 00 00         MOV dword ptr [ESI + 0x1c5],EDI
LAB_00422af3:
00422AF3  83 BB 69 02 00 00 FF      CMP dword ptr [EBX + 0x269],-0x1
00422AFA  74 47                     JZ 0x00422b43
00422AFC  8B 83 6D 02 00 00         MOV EAX,dword ptr [EBX + 0x26d]
00422B02  50                        PUSH EAX
00422B03  E8 68 81 28 00            CALL 0x006aac70
00422B08  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00422B0B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00422B0E  8B F8                     MOV EDI,EAX
00422B10  89 81 C9 01 00 00         MOV dword ptr [ECX + 0x1c9],EAX
00422B16  8B B3 69 02 00 00         MOV ESI,dword ptr [EBX + 0x269]
00422B1C  8B 8B 6D 02 00 00         MOV ECX,dword ptr [EBX + 0x26d]
00422B22  03 F2                     ADD ESI,EDX
00422B24  8B D1                     MOV EDX,ECX
00422B26  C1 E9 02                  SHR ECX,0x2
00422B29  F3 A5                     MOVSD.REP ES:EDI,ESI
00422B2B  8B CA                     MOV ECX,EDX
00422B2D  83 E1 03                  AND ECX,0x3
00422B30  F3 A4                     MOVSB.REP ES:EDI,ESI
00422B32  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00422B35  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00422B3A  5F                        POP EDI
00422B3B  5E                        POP ESI
00422B3C  5B                        POP EBX
00422B3D  8B E5                     MOV ESP,EBP
00422B3F  5D                        POP EBP
00422B40  C2 04 00                  RET 0x4
LAB_00422b43:
00422B43  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00422B46  89 BE C9 01 00 00         MOV dword ptr [ESI + 0x1c9],EDI
00422B4C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00422B51  5F                        POP EDI
00422B52  5E                        POP ESI
00422B53  5B                        POP EBX
00422B54  8B E5                     MOV ESP,EBP
00422B56  5D                        POP EBP
00422B57  C2 04 00                  RET 0x4
LAB_00422b5a:
00422B5A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00422B5D  68 7C 50 7A 00            PUSH 0x7a507c
00422B62  68 CC 4C 7A 00            PUSH 0x7a4ccc
00422B67  56                        PUSH ESI
00422B68  6A 00                     PUSH 0x0
00422B6A  68 0B 0F 00 00            PUSH 0xf0b
00422B6F  68 0C 4E 7A 00            PUSH 0x7a4e0c
00422B74  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00422B7A  E8 51 A9 28 00            CALL 0x006ad4d0
00422B7F  83 C4 18                  ADD ESP,0x18
00422B82  85 C0                     TEST EAX,EAX
00422B84  74 01                     JZ 0x00422b87
00422B86  CC                        INT3
LAB_00422b87:
00422B87  68 0C 0F 00 00            PUSH 0xf0c
00422B8C  68 0C 4E 7A 00            PUSH 0x7a4e0c
00422B91  6A 00                     PUSH 0x0
00422B93  56                        PUSH ESI
00422B94  E8 A7 32 28 00            CALL 0x006a5e40
00422B99  5F                        POP EDI
00422B9A  5E                        POP ESI
00422B9B  5B                        POP EBX
00422B9C  8B E5                     MOV ESP,EBP
00422B9E  5D                        POP EBP
00422B9F  C2 04 00                  RET 0x4
