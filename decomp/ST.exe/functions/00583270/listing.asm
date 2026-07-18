FUN_00583270:
00583270  55                        PUSH EBP
00583271  8B EC                     MOV EBP,ESP
00583273  81 EC 9C 00 00 00         SUB ESP,0x9c
00583279  8B 81 35 02 00 00         MOV EAX,dword ptr [ECX + 0x235]
0058327F  53                        PUSH EBX
00583280  56                        PUSH ESI
00583281  83 F8 04                  CMP EAX,0x4
00583284  57                        PUSH EDI
00583285  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00583288  75 14                     JNZ 0x0058329e
0058328A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058328D  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
00583291  74 0B                     JZ 0x0058329e
00583293  33 C0                     XOR EAX,EAX
00583295  5F                        POP EDI
00583296  5E                        POP ESI
00583297  5B                        POP EBX
00583298  8B E5                     MOV ESP,EBP
0058329A  5D                        POP EBP
0058329B  C2 04 00                  RET 0x4
LAB_0058329e:
0058329E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005832A4  33 FF                     XOR EDI,EDI
005832A6  8D 85 68 FF FF FF         LEA EAX,[EBP + 0xffffff68]
005832AC  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
005832B2  57                        PUSH EDI
005832B3  50                        PUSH EAX
005832B4  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
005832BA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005832C0  E8 2B A5 1A 00            CALL 0x0072d7f0
005832C5  8B F0                     MOV ESI,EAX
005832C7  83 C4 08                  ADD ESP,0x8
005832CA  3B F7                     CMP ESI,EDI
005832CC  0F 85 81 08 00 00         JNZ 0x00583b53
005832D2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005832D5  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
005832D8  56                        PUSH ESI
005832D9  8B CB                     MOV ECX,EBX
005832DB  E8 27 1C E8 FF            CALL 0x00404f07
005832E0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005832E3  3D 10 01 00 00            CMP EAX,0x110
005832E8  0F 87 82 07 00 00         JA 0x00583a70
005832EE  0F 84 F1 06 00 00         JZ 0x005839e5
005832F4  83 F8 03                  CMP EAX,0x3
005832F7  0F 87 64 05 00 00         JA 0x00583861
005832FD  0F 84 10 05 00 00         JZ 0x00583813
00583303  2B C7                     SUB EAX,EDI
00583305  0F 84 EB 04 00 00         JZ 0x005837f6
0058330B  83 E8 02                  SUB EAX,0x2
0058330E  0F 85 29 08 00 00         JNZ 0x00583b3d
00583314  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00583317  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0058331A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0058331D  83 F9 01                  CMP ECX,0x1
00583320  0F 86 42 01 00 00         JBE 0x00583468
00583326  83 F9 02                  CMP ECX,0x2
00583329  0F 85 6C 04 00 00         JNZ 0x0058379b
0058332F  8D BB 56 02 00 00         LEA EDI,[EBX + 0x256]
00583335  B9 0F 00 00 00            MOV ECX,0xf
0058333A  8B F0                     MOV ESI,EAX
0058333C  F3 A5                     MOVSD.REP ES:EDI,ESI
0058333E  66 A5                     MOVSW ES:EDI,ESI
00583340  8B 48 67                  MOV ECX,dword ptr [EAX + 0x67]
00583343  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00583346  8D 4C 01 6F               LEA ECX,[ECX + EAX*0x1 + 0x6f]
0058334A  51                        PUSH ECX
0058334B  8B CB                     MOV ECX,EBX
0058334D  E8 CD 21 E8 FF            CALL 0x0040551f
00583352  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
00583355  6A 44                     PUSH 0x44
00583357  8B 56 4A                  MOV EDX,dword ptr [ESI + 0x4a]
0058335A  89 93 47 02 00 00         MOV dword ptr [EBX + 0x247],EDX
00583360  8B 46 4E                  MOV EAX,dword ptr [ESI + 0x4e]
00583363  89 83 4B 02 00 00         MOV dword ptr [EBX + 0x24b],EAX
00583369  8B 4E 42                  MOV ECX,dword ptr [ESI + 0x42]
0058336C  89 8B 35 02 00 00         MOV dword ptr [EBX + 0x235],ECX
00583372  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
00583375  89 93 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDX
0058337B  8B 46 52                  MOV EAX,dword ptr [ESI + 0x52]
0058337E  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
00583384  66 8B 4E 56               MOV CX,word ptr [ESI + 0x56]
00583388  66 89 8B 45 02 00 00      MOV word ptr [EBX + 0x245],CX
0058338F  8B 56 3E                  MOV EDX,dword ptr [ESI + 0x3e]
00583392  89 93 39 02 00 00         MOV dword ptr [EBX + 0x239],EDX
00583398  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
0058339B  89 83 31 02 00 00         MOV dword ptr [EBX + 0x231],EAX
005833A1  8A 4E 60                  MOV CL,byte ptr [ESI + 0x60]
005833A4  88 8B 4F 02 00 00         MOV byte ptr [EBX + 0x24f],CL
005833AA  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
005833AD  88 93 50 02 00 00         MOV byte ptr [EBX + 0x250],DL
005833B3  8A 46 62                  MOV AL,byte ptr [ESI + 0x62]
005833B6  88 83 51 02 00 00         MOV byte ptr [EBX + 0x251],AL
005833BC  8B 4E 63                  MOV ECX,dword ptr [ESI + 0x63]
005833BF  89 8B 52 02 00 00         MOV dword ptr [EBX + 0x252],ECX
005833C5  E8 A6 78 12 00            CALL 0x006aac70
005833CA  33 D2                     XOR EDX,EDX
005833CC  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005833CF  3B C2                     CMP EAX,EDX
005833D1  0F 84 C4 03 00 00         JZ 0x0058379b
005833D7  33 C9                     XOR ECX,ECX
005833D9  EB 03                     JMP 0x005833de
LAB_005833db:
005833DB  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
LAB_005833de:
005833DE  83 F9 08                  CMP ECX,0x8
005833E1  74 1D                     JZ 0x00583400
005833E3  83 F9 0A                  CMP ECX,0xa
005833E6  74 18                     JZ 0x00583400
005833E8  83 F9 09                  CMP ECX,0x9
005833EB  75 0B                     JNZ 0x005833f8
005833ED  8B 3D 64 67 80 00         MOV EDI,dword ptr [0x00806764]
005833F3  89 78 24                  MOV dword ptr [EAX + 0x24],EDI
005833F6  EB 11                     JMP 0x00583409
LAB_005833f8:
005833F8  8B 3D 6C 67 80 00         MOV EDI,dword ptr [0x0080676c]
005833FE  EB 06                     JMP 0x00583406
LAB_00583400:
00583400  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
LAB_00583406:
00583406  89 3C 88                  MOV dword ptr [EAX + ECX*0x4],EDI
LAB_00583409:
00583409  41                        INC ECX
0058340A  83 F9 11                  CMP ECX,0x11
0058340D  7C CC                     JL 0x005833db
0058340F  A1 CC 73 80 00            MOV EAX,[0x008073cc]
00583414  83 C6 6B                  ADD ESI,0x6b
00583417  8D 4D D0                  LEA ECX,[EBP + -0x30]
0058341A  56                        PUSH ESI
0058341B  51                        PUSH ECX
0058341C  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00583422  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00583425  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00583428  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0058342B  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0058342E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00583431  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00583434  E8 6C 18 E8 FF            CALL 0x00404ca5
00583439  8D 55 D0                  LEA EDX,[EBP + -0x30]
0058343C  52                        PUSH EDX
0058343D  E8 1E 7C 12 00            CALL 0x006ab060
00583442  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00583445  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
00583449  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
0058344D  50                        PUSH EAX
0058344E  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
00583452  53                        PUSH EBX
00583453  6A 01                     PUSH 0x1
00583455  51                        PUSH ECX
00583456  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058345C  52                        PUSH EDX
0058345D  50                        PUSH EAX
0058345E  E8 C2 DE E7 FF            CALL 0x00401325
00583463  E9 33 03 00 00            JMP 0x0058379b
LAB_00583468:
00583468  C7 83 35 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x235],0x4
00583472  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
00583478  C7 83 41 02 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x241],0xff
00583482  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
00583488  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
0058348B  B9 0F 00 00 00            MOV ECX,0xf
00583490  8D BB 56 02 00 00         LEA EDI,[EBX + 0x256]
00583496  B8 79 19 8C 02            MOV EAX,0x28c1979
0058349B  F3 A5                     MOVSD.REP ES:EDI,ESI
0058349D  66 A5                     MOVSW ES:EDI,ESI
0058349F  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
005834A5  33 FF                     XOR EDI,EDI
005834A7  3B CF                     CMP ECX,EDI
005834A9  7C 10                     JL 0x005834bb
005834AB  F7 E9                     IMUL ECX
005834AD  D1 FA                     SAR EDX,0x1
005834AF  8B CA                     MOV ECX,EDX
005834B1  C1 E9 1F                  SHR ECX,0x1f
005834B4  03 D1                     ADD EDX,ECX
005834B6  0F BF C2                  MOVSX EAX,DX
005834B9  EB 0F                     JMP 0x005834ca
LAB_005834bb:
005834BB  F7 E9                     IMUL ECX
005834BD  D1 FA                     SAR EDX,0x1
005834BF  8B C2                     MOV EAX,EDX
005834C1  C1 E8 1F                  SHR EAX,0x1f
005834C4  03 D0                     ADD EDX,EAX
005834C6  0F BF C2                  MOVSX EAX,DX
005834C9  48                        DEC EAX
LAB_005834ca:
005834CA  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
005834D0  66 89 43 47               MOV word ptr [EBX + 0x47],AX
005834D4  3B CF                     CMP ECX,EDI
005834D6  B8 79 19 8C 02            MOV EAX,0x28c1979
005834DB  7C 10                     JL 0x005834ed
005834DD  F7 E9                     IMUL ECX
005834DF  D1 FA                     SAR EDX,0x1
005834E1  8B CA                     MOV ECX,EDX
005834E3  C1 E9 1F                  SHR ECX,0x1f
005834E6  03 D1                     ADD EDX,ECX
005834E8  0F BF C2                  MOVSX EAX,DX
005834EB  EB 0F                     JMP 0x005834fc
LAB_005834ed:
005834ED  F7 E9                     IMUL ECX
005834EF  D1 FA                     SAR EDX,0x1
005834F1  8B C2                     MOV EAX,EDX
005834F3  C1 E8 1F                  SHR EAX,0x1f
005834F6  03 D0                     ADD EDX,EAX
005834F8  0F BF C2                  MOVSX EAX,DX
005834FB  48                        DEC EAX
LAB_005834fc:
005834FC  8B 8B 72 02 00 00         MOV ECX,dword ptr [EBX + 0x272]
00583502  66 89 43 49               MOV word ptr [EBX + 0x49],AX
00583506  3B CF                     CMP ECX,EDI
00583508  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058350D  7C 11                     JL 0x00583520
0058350F  F7 E9                     IMUL ECX
00583511  C1 FA 06                  SAR EDX,0x6
00583514  8B CA                     MOV ECX,EDX
00583516  C1 E9 1F                  SHR ECX,0x1f
00583519  03 D1                     ADD EDX,ECX
0058351B  0F BF C2                  MOVSX EAX,DX
0058351E  EB 10                     JMP 0x00583530
LAB_00583520:
00583520  F7 E9                     IMUL ECX
00583522  C1 FA 06                  SAR EDX,0x6
00583525  8B C2                     MOV EAX,EDX
00583527  C1 E8 1F                  SHR EAX,0x1f
0058352A  03 D0                     ADD EDX,EAX
0058352C  0F BF C2                  MOVSX EAX,DX
0058352F  48                        DEC EAX
LAB_00583530:
00583530  6A 01                     PUSH 0x1
00583532  8B CB                     MOV ECX,EBX
00583534  66 89 43 4B               MOV word ptr [EBX + 0x4b],AX
00583538  C7 83 39 02 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x239],0xffffffff
00583542  C7 83 4B 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x24b],0x1
0058354C  89 BB 47 02 00 00         MOV dword ptr [EBX + 0x247],EDI
00583552  E8 06 F6 E7 FF            CALL 0x00402b5d
00583557  66 8B 4B 4B               MOV CX,word ptr [EBX + 0x4b]
0058355B  66 8B 53 49               MOV DX,word ptr [EBX + 0x49]
0058355F  66 8B 43 47               MOV AX,word ptr [EBX + 0x47]
00583563  6A 01                     PUSH 0x1
00583565  51                        PUSH ECX
00583566  52                        PUSH EDX
00583567  50                        PUSH EAX
00583568  8B CB                     MOV ECX,EBX
0058356A  E8 F0 F3 E7 FF            CALL 0x0040295f
0058356F  85 C0                     TEST EAX,EAX
00583571  74 2F                     JZ 0x005835a2
00583573  68 98 B8 7C 00            PUSH 0x7cb898
00583578  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058357D  57                        PUSH EDI
0058357E  57                        PUSH EDI
0058357F  68 E5 01 00 00            PUSH 0x1e5
00583584  68 B0 B7 7C 00            PUSH 0x7cb7b0
00583589  E8 42 9F 12 00            CALL 0x006ad4d0
0058358E  83 C4 18                  ADD ESP,0x18
00583591  85 C0                     TEST EAX,EAX
00583593  74 01                     JZ 0x00583596
00583595  CC                        INT3
LAB_00583596:
00583596  8B CB                     MOV ECX,EBX
00583598  E8 2A E1 E7 FF            CALL 0x004016c7
0058359D  E9 F9 01 00 00            JMP 0x0058379b
LAB_005835a2:
005835A2  6A 08                     PUSH 0x8
005835A4  8B CB                     MOV ECX,EBX
005835A6  E8 FF E4 E7 FF            CALL 0x00401aaa
005835AB  85 C0                     TEST EAX,EAX
005835AD  74 2F                     JZ 0x005835de
005835AF  68 68 B8 7C 00            PUSH 0x7cb868
005835B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005835B9  57                        PUSH EDI
005835BA  57                        PUSH EDI
005835BB  68 EC 01 00 00            PUSH 0x1ec
005835C0  68 B0 B7 7C 00            PUSH 0x7cb7b0
005835C5  E8 06 9F 12 00            CALL 0x006ad4d0
005835CA  83 C4 18                  ADD ESP,0x18
005835CD  85 C0                     TEST EAX,EAX
005835CF  74 01                     JZ 0x005835d2
005835D1  CC                        INT3
LAB_005835d2:
005835D2  8B CB                     MOV ECX,EBX
005835D4  E8 EE E0 E7 FF            CALL 0x004016c7
005835D9  E9 BD 01 00 00            JMP 0x0058379b
LAB_005835de:
005835DE  57                        PUSH EDI
005835DF  8B CB                     MOV ECX,EBX
005835E1  E8 DB 27 E8 FF            CALL 0x00405dc1
005835E6  85 C0                     TEST EAX,EAX
005835E8  74 2F                     JZ 0x00583619
005835EA  68 44 B8 7C 00            PUSH 0x7cb844
005835EF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005835F4  57                        PUSH EDI
005835F5  57                        PUSH EDI
005835F6  68 F3 01 00 00            PUSH 0x1f3
005835FB  68 B0 B7 7C 00            PUSH 0x7cb7b0
00583600  E8 CB 9E 12 00            CALL 0x006ad4d0
00583605  83 C4 18                  ADD ESP,0x18
00583608  85 C0                     TEST EAX,EAX
0058360A  74 01                     JZ 0x0058360d
0058360C  CC                        INT3
LAB_0058360d:
0058360D  8B CB                     MOV ECX,EBX
0058360F  E8 B3 E0 E7 FF            CALL 0x004016c7
00583614  E9 82 01 00 00            JMP 0x0058379b
LAB_00583619:
00583619  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
0058361F  6A 1D                     PUSH 0x1d
00583621  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00583627  68 E0 B3 7C 00            PUSH 0x7cb3e0
0058362C  51                        PUSH ECX
0058362D  6A 0E                     PUSH 0xe
0058362F  8B CE                     MOV ECX,ESI
00583631  E8 4D 0B E8 FF            CALL 0x00404183
00583636  85 C0                     TEST EAX,EAX
00583638  74 18                     JZ 0x00583652
0058363A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00583640  68 F9 01 00 00            PUSH 0x1f9
00583645  68 B0 B7 7C 00            PUSH 0x7cb7b0
0058364A  52                        PUSH EDX
0058364B  6A FF                     PUSH -0x1
0058364D  E8 EE 27 12 00            CALL 0x006a5e40
LAB_00583652:
00583652  8B 93 5A 02 00 00         MOV EDX,dword ptr [EBX + 0x25a]
00583658  83 FA 08                  CMP EDX,0x8
0058365B  7C 2B                     JL 0x00583688
0058365D  68 18 B8 7C 00            PUSH 0x7cb818
00583662  68 CC 4C 7A 00            PUSH 0x7a4ccc
00583667  57                        PUSH EDI
00583668  57                        PUSH EDI
00583669  68 FE 01 00 00            PUSH 0x1fe
0058366E  68 B0 B7 7C 00            PUSH 0x7cb7b0
00583673  E8 58 9E 12 00            CALL 0x006ad4d0
00583678  83 C4 18                  ADD ESP,0x18
0058367B  85 C0                     TEST EAX,EAX
0058367D  74 01                     JZ 0x00583680
0058367F  CC                        INT3
LAB_00583680:
00583680  89 BB 5A 02 00 00         MOV dword ptr [EBX + 0x25a],EDI
00583686  33 D2                     XOR EDX,EDX
LAB_00583688:
00583688  BF EC B3 7C 00            MOV EDI,0x7cb3ec
0058368D  83 C9 FF                  OR ECX,0xffffffff
00583690  33 C0                     XOR EAX,EAX
00583692  80 C2 30                  ADD DL,0x30
00583695  F2 AE                     SCASB.REPNE ES:EDI
00583697  A1 6C 67 80 00            MOV EAX,[0x0080676c]
0058369C  6A 1D                     PUSH 0x1d
0058369E  F7 D1                     NOT ECX
005836A0  68 EC B3 7C 00            PUSH 0x7cb3ec
005836A5  50                        PUSH EAX
005836A6  88 91 EA B3 7C 00         MOV byte ptr [ECX + 0x7cb3ea],DL
005836AC  6A 0C                     PUSH 0xc
005836AE  8B CE                     MOV ECX,ESI
005836B0  E8 CE 0A E8 FF            CALL 0x00404183
005836B5  85 C0                     TEST EAX,EAX
005836B7  74 18                     JZ 0x005836d1
005836B9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005836BF  68 04 02 00 00            PUSH 0x204
005836C4  68 B0 B7 7C 00            PUSH 0x7cb7b0
005836C9  51                        PUSH ECX
005836CA  6A FF                     PUSH -0x1
005836CC  E8 6F 27 12 00            CALL 0x006a5e40
LAB_005836d1:
005836D1  6A 0C                     PUSH 0xc
005836D3  8B CE                     MOV ECX,ESI
005836D5  E8 CC 23 E8 FF            CALL 0x00405aa6
005836DA  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005836E0  8B CE                     MOV ECX,ESI
005836E2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005836E8  50                        PUSH EAX
005836E9  6A 0C                     PUSH 0xc
005836EB  E8 50 1B E8 FF            CALL 0x00405240
005836F0  6A 0E                     PUSH 0xe
005836F2  8B CE                     MOV ECX,ESI
005836F4  E8 AD 23 E8 FF            CALL 0x00405aa6
005836F9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005836FF  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00583705  8B CE                     MOV ECX,ESI
00583707  52                        PUSH EDX
00583708  6A 0E                     PUSH 0xe
0058370A  E8 31 1B E8 FF            CALL 0x00405240
0058370F  66 8B 83 72 02 00 00      MOV AX,word ptr [EBX + 0x272]
00583716  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0058371D  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
00583724  50                        PUSH EAX
00583725  51                        PUSH ECX
00583726  52                        PUSH EDX
00583727  8B CB                     MOV ECX,EBX
00583729  E8 D9 F9 E7 FF            CALL 0x00403107
0058372E  DB 83 72 02 00 00         FILD dword ptr [EBX + 0x272]
00583734  51                        PUSH ECX
00583735  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0058373B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00583741  D9 1C 24                  FSTP float ptr [ESP]
00583744  DB 83 6E 02 00 00         FILD dword ptr [EBX + 0x26e]
0058374A  51                        PUSH ECX
0058374B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00583751  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00583757  D9 1C 24                  FSTP float ptr [ESP]
0058375A  DB 83 6A 02 00 00         FILD dword ptr [EBX + 0x26a]
00583760  51                        PUSH ECX
00583761  8B CE                     MOV ECX,ESI
00583763  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00583769  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0058376F  D9 1C 24                  FSTP float ptr [ESP]
00583772  E8 62 0E E8 FF            CALL 0x004045d9
00583777  8B 83 6E 02 00 00         MOV EAX,dword ptr [EBX + 0x26e]
0058377D  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
00583783  68 97 04 00 00            PUSH 0x497
00583788  50                        PUSH EAX
00583789  51                        PUSH ECX
0058378A  8B CB                     MOV ECX,EBX
0058378C  C7 83 35 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x235],0x0
00583796  E8 65 1E E8 FF            CALL 0x00405600
LAB_0058379b:
0058379B  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
005837A1  83 F8 04                  CMP EAX,0x4
005837A4  0F 84 93 03 00 00         JZ 0x00583b3d
005837AA  83 F8 02                  CMP EAX,0x2
005837AD  0F 84 8A 03 00 00         JZ 0x00583b3d
005837B3  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
005837B6  B9 08 00 00 00            MOV ECX,0x8
005837BB  33 C0                     XOR EAX,EAX
005837BD  8D 7D A8                  LEA EDI,[EBP + -0x58]
005837C0  F3 AB                     STOSD.REP ES:EDI
005837C2  8B 8B 86 02 00 00         MOV ECX,dword ptr [EBX + 0x286]
005837C8  8D 45 A8                  LEA EAX,[EBP + -0x58]
005837CB  50                        PUSH EAX
005837CC  51                        PUSH ECX
005837CD  6A 04                     PUSH 0x4
005837CF  8B CB                     MOV ECX,EBX
005837D1  C7 45 B8 25 01 00 00      MOV dword ptr [EBP + -0x48],0x125
005837D8  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
005837DB  E8 A0 28 16 00            CALL 0x006e6080
005837E0  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
005837E6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005837EB  33 C0                     XOR EAX,EAX
005837ED  5F                        POP EDI
005837EE  5E                        POP ESI
005837EF  5B                        POP EBX
005837F0  8B E5                     MOV ESP,EBP
005837F2  5D                        POP EBP
005837F3  C2 04 00                  RET 0x4
LAB_005837f6:
005837F6  8B CB                     MOV ECX,EBX
005837F8  E8 46 21 E8 FF            CALL 0x00405943
005837FD  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583803  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583808  33 C0                     XOR EAX,EAX
0058380A  5F                        POP EDI
0058380B  5E                        POP ESI
0058380C  5B                        POP EBX
0058380D  8B E5                     MOV ESP,EBP
0058380F  5D                        POP EBP
00583810  C2 04 00                  RET 0x4
LAB_00583813:
00583813  8B CB                     MOV ECX,EBX
00583815  E8 38 21 E8 FF            CALL 0x00405952
0058381A  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
0058381D  8A 83 8E 00 00 00         MOV AL,byte ptr [EBX + 0x8e]
00583823  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
00583827  52                        PUSH EDX
00583828  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
0058382C  53                        PUSH EBX
0058382D  50                        PUSH EAX
0058382E  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
00583832  51                        PUSH ECX
00583833  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00583839  52                        PUSH EDX
0058383A  50                        PUSH EAX
0058383B  E8 81 16 E8 FF            CALL 0x00404ec1
00583840  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00583846  E8 8A E9 E7 FF            CALL 0x004021d5
0058384B  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583851  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583856  33 C0                     XOR EAX,EAX
00583858  5F                        POP EDI
00583859  5E                        POP ESI
0058385A  5B                        POP EBX
0058385B  8B E5                     MOV ESP,EBP
0058385D  5D                        POP EBP
0058385E  C2 04 00                  RET 0x4
LAB_00583861:
00583861  3D 0F 01 00 00            CMP EAX,0x10f
00583866  0F 85 D1 02 00 00         JNZ 0x00583b3d
0058386C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0058386F  51                        PUSH ECX
00583870  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00583876  E8 59 E0 E7 FF            CALL 0x004018d4
0058387B  8D 55 F4                  LEA EDX,[EBP + -0xc]
0058387E  8B CB                     MOV ECX,EBX
00583880  52                        PUSH EDX
00583881  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00583884  E8 11 D9 E7 FF            CALL 0x0040119a
00583889  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058388C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058388F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00583892  8D 54 08 6F               LEA EDX,[EAX + ECX*0x1 + 0x6f]
00583896  52                        PUSH EDX
00583897  E8 D4 73 12 00            CALL 0x006aac70
0058389C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0058389F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005838A2  3B CF                     CMP ECX,EDI
005838A4  0F 84 93 02 00 00         JZ 0x00583b3d
005838AA  39 7D EC                  CMP dword ptr [EBP + -0x14],EDI
005838AD  0F 84 8A 02 00 00         JZ 0x00583b3d
005838B3  3B C7                     CMP EAX,EDI
005838B5  0F 84 82 02 00 00         JZ 0x00583b3d
005838BB  8D B3 56 02 00 00         LEA ESI,[EBX + 0x256]
005838C1  B9 0F 00 00 00            MOV ECX,0xf
005838C6  8B F8                     MOV EDI,EAX
005838C8  F3 A5                     MOVSD.REP ES:EDI,ESI
005838CA  66 A5                     MOVSW ES:EDI,ESI
005838CC  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
005838D3  8B 8B 35 02 00 00         MOV ECX,dword ptr [EBX + 0x235]
005838D9  89 48 42                  MOV dword ptr [EAX + 0x42],ECX
005838DC  8B 93 3D 02 00 00         MOV EDX,dword ptr [EBX + 0x23d]
005838E2  89 50 46                  MOV dword ptr [EAX + 0x46],EDX
005838E5  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
005838EB  89 48 52                  MOV dword ptr [EAX + 0x52],ECX
005838EE  66 8B 93 45 02 00 00      MOV DX,word ptr [EBX + 0x245]
005838F5  66 89 50 56               MOV word ptr [EAX + 0x56],DX
005838F9  8B 8B 47 02 00 00         MOV ECX,dword ptr [EBX + 0x247]
005838FF  89 48 4A                  MOV dword ptr [EAX + 0x4a],ECX
00583902  8B 93 4B 02 00 00         MOV EDX,dword ptr [EBX + 0x24b]
00583908  89 50 4E                  MOV dword ptr [EAX + 0x4e],EDX
0058390B  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
00583911  89 48 3E                  MOV dword ptr [EAX + 0x3e],ECX
00583914  8B 93 31 02 00 00         MOV EDX,dword ptr [EBX + 0x231]
0058391A  89 50 58                  MOV dword ptr [EAX + 0x58],EDX
0058391D  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
00583924  8A 8B 4F 02 00 00         MOV CL,byte ptr [EBX + 0x24f]
0058392A  88 48 60                  MOV byte ptr [EAX + 0x60],CL
0058392D  8A 93 50 02 00 00         MOV DL,byte ptr [EBX + 0x250]
00583933  88 50 61                  MOV byte ptr [EAX + 0x61],DL
00583936  8A 8B 51 02 00 00         MOV CL,byte ptr [EBX + 0x251]
0058393C  88 48 62                  MOV byte ptr [EAX + 0x62],CL
0058393F  8B 93 52 02 00 00         MOV EDX,dword ptr [EBX + 0x252]
00583945  89 50 63                  MOV dword ptr [EAX + 0x63],EDX
00583948  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058394B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058394E  89 41 67                  MOV dword ptr [ECX + 0x67],EAX
00583951  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00583954  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00583957  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0058395A  8B C1                     MOV EAX,ECX
0058395C  8D 7A 6B                  LEA EDI,[EDX + 0x6b]
0058395F  C1 E9 02                  SHR ECX,0x2
00583962  F3 A5                     MOVSD.REP ES:EDI,ESI
00583964  8B C8                     MOV ECX,EAX
00583966  83 E1 03                  AND ECX,0x3
00583969  F3 A4                     MOVSB.REP ES:EDI,ESI
0058396B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058396E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00583971  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00583974  89 4C 02 6B               MOV dword ptr [EDX + EAX*0x1 + 0x6b],ECX
00583978  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058397B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058397E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00583981  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00583984  8D 7C 02 6F               LEA EDI,[EDX + EAX*0x1 + 0x6f]
00583988  8B D1                     MOV EDX,ECX
0058398A  C1 E9 02                  SHR ECX,0x2
0058398D  F3 A5                     MOVSD.REP ES:EDI,ESI
0058398F  8B CA                     MOV ECX,EDX
00583991  83 E1 03                  AND ECX,0x3
00583994  F3 A4                     MOVSB.REP ES:EDI,ESI
00583996  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00583999  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058399C  8D 54 08 6F               LEA EDX,[EAX + ECX*0x1 + 0x6f]
005839A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005839A3  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005839A6  52                        PUSH EDX
005839A7  50                        PUSH EAX
005839A8  51                        PUSH ECX
005839A9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005839AF  E8 45 EC E7 FF            CALL 0x004025f9
005839B4  8D 55 F0                  LEA EDX,[EBP + -0x10]
005839B7  52                        PUSH EDX
005839B8  E8 A3 76 12 00            CALL 0x006ab060
005839BD  8D 45 EC                  LEA EAX,[EBP + -0x14]
005839C0  50                        PUSH EAX
005839C1  E8 9A 76 12 00            CALL 0x006ab060
005839C6  8D 4D F8                  LEA ECX,[EBP + -0x8]
005839C9  51                        PUSH ECX
005839CA  E8 91 76 12 00            CALL 0x006ab060
005839CF  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
005839D5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005839DA  33 C0                     XOR EAX,EAX
005839DC  5F                        POP EDI
005839DD  5E                        POP ESI
005839DE  5B                        POP EBX
005839DF  8B E5                     MOV ESP,EBP
005839E1  5D                        POP EBP
005839E2  C2 04 00                  RET 0x4
LAB_005839e5:
005839E5  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
005839EB  83 F8 02                  CMP EAX,0x2
005839EE  0F 84 49 01 00 00         JZ 0x00583b3d
005839F4  83 F8 04                  CMP EAX,0x4
005839F7  0F 84 40 01 00 00         JZ 0x00583b3d
005839FD  8B CB                     MOV ECX,EBX
005839FF  E8 73 0E E8 FF            CALL 0x00404877
00583A04  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00583A0A  6A 0E                     PUSH 0xe
00583A0C  8B CE                     MOV ECX,ESI
00583A0E  C7 83 41 02 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x241],0xff
00583A18  66 89 BB 45 02 00 00      MOV word ptr [EBX + 0x245],DI
00583A1F  89 BB 52 02 00 00         MOV dword ptr [EBX + 0x252],EDI
00583A25  C7 83 35 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x235],0x2
00583A2F  E8 30 08 E8 FF            CALL 0x00404264
00583A34  6A 0C                     PUSH 0xc
00583A36  8B CE                     MOV ECX,ESI
00583A38  E8 27 08 E8 FF            CALL 0x00404264
00583A3D  8B CE                     MOV ECX,ESI
00583A3F  E8 4C F0 E7 FF            CALL 0x00402a90
00583A44  8B CB                     MOV ECX,EBX
00583A46  E8 8E F2 E7 FF            CALL 0x00402cd9
00583A4B  85 C0                     TEST EAX,EAX
00583A4D  0F 84 EA 00 00 00         JZ 0x00583b3d
00583A53  8B CB                     MOV ECX,EBX
00583A55  E8 6D DC E7 FF            CALL 0x004016c7
00583A5A  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583A60  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583A65  33 C0                     XOR EAX,EAX
00583A67  5F                        POP EDI
00583A68  5E                        POP ESI
00583A69  5B                        POP EBX
00583A6A  8B E5                     MOV ESP,EBP
00583A6C  5D                        POP EBP
00583A6D  C2 04 00                  RET 0x4
LAB_00583a70:
00583A70  2D 12 01 00 00            SUB EAX,0x112
00583A75  0F 84 B7 00 00 00         JZ 0x00583b32
00583A7B  48                        DEC EAX
00583A7C  0F 84 8C 00 00 00         JZ 0x00583b0e
00583A82  83 E8 15                  SUB EAX,0x15
00583A85  0F 85 B2 00 00 00         JNZ 0x00583b3d
00583A8B  8B 83 35 02 00 00         MOV EAX,dword ptr [EBX + 0x235]
00583A91  83 F8 02                  CMP EAX,0x2
00583A94  0F 84 A3 00 00 00         JZ 0x00583b3d
00583A9A  83 F8 04                  CMP EAX,0x4
00583A9D  0F 84 9A 00 00 00         JZ 0x00583b3d
00583AA3  8B CB                     MOV ECX,EBX
00583AA5  E8 CD 0D E8 FF            CALL 0x00404877
00583AAA  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00583AB0  6A 0E                     PUSH 0xe
00583AB2  8B CE                     MOV ECX,ESI
00583AB4  C7 83 41 02 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x241],0xff
00583ABE  66 89 BB 45 02 00 00      MOV word ptr [EBX + 0x245],DI
00583AC5  89 BB 52 02 00 00         MOV dword ptr [EBX + 0x252],EDI
00583ACB  C7 83 35 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x235],0x4
00583AD5  E8 8A 07 E8 FF            CALL 0x00404264
00583ADA  6A 0C                     PUSH 0xc
00583ADC  8B CE                     MOV ECX,ESI
00583ADE  E8 81 07 E8 FF            CALL 0x00404264
00583AE3  8B CE                     MOV ECX,ESI
00583AE5  E8 A6 EF E7 FF            CALL 0x00402a90
00583AEA  8B CE                     MOV ECX,ESI
00583AEC  E8 1E 02 E8 FF            CALL 0x00403d0f
00583AF1  8B CB                     MOV ECX,EBX
00583AF3  E8 CF DB E7 FF            CALL 0x004016c7
00583AF8  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583AFE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583B03  33 C0                     XOR EAX,EAX
00583B05  5F                        POP EDI
00583B06  5E                        POP ESI
00583B07  5B                        POP EBX
00583B08  8B E5                     MOV ESP,EBP
00583B0A  5D                        POP EBP
00583B0B  C2 04 00                  RET 0x4
LAB_00583b0e:
00583B0E  8B 93 D5 01 00 00         MOV EDX,dword ptr [EBX + 0x1d5]
00583B14  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00583B1A  FF 12                     CALL dword ptr [EDX]
00583B1C  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583B22  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583B27  33 C0                     XOR EAX,EAX
00583B29  5F                        POP EDI
00583B2A  5E                        POP ESI
00583B2B  5B                        POP EBX
00583B2C  8B E5                     MOV ESP,EBP
00583B2E  5D                        POP EBP
00583B2F  C2 04 00                  RET 0x4
LAB_00583b32:
00583B32  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00583B38  E8 53 EF E7 FF            CALL 0x00402a90
LAB_00583b3d:
00583B3D  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00583B43  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00583B48  33 C0                     XOR EAX,EAX
00583B4A  5F                        POP EDI
00583B4B  5E                        POP ESI
00583B4C  5B                        POP EBX
00583B4D  8B E5                     MOV ESP,EBP
00583B4F  5D                        POP EBP
00583B50  C2 04 00                  RET 0x4
LAB_00583b53:
00583B53  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00583B59  68 FC B7 7C 00            PUSH 0x7cb7fc
00583B5E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00583B63  56                        PUSH ESI
00583B64  57                        PUSH EDI
00583B65  68 AF 02 00 00            PUSH 0x2af
00583B6A  68 B0 B7 7C 00            PUSH 0x7cb7b0
00583B6F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00583B75  E8 56 99 12 00            CALL 0x006ad4d0
00583B7A  83 C4 18                  ADD ESP,0x18
00583B7D  85 C0                     TEST EAX,EAX
00583B7F  74 01                     JZ 0x00583b82
00583B81  CC                        INT3
LAB_00583b82:
00583B82  68 B0 02 00 00            PUSH 0x2b0
00583B87  68 B0 B7 7C 00            PUSH 0x7cb7b0
00583B8C  57                        PUSH EDI
00583B8D  56                        PUSH ESI
00583B8E  E8 AD 22 12 00            CALL 0x006a5e40
00583B93  5F                        POP EDI
00583B94  5E                        POP ESI
00583B95  B8 FF FF 00 00            MOV EAX,0xffff
00583B9A  5B                        POP EBX
00583B9B  8B E5                     MOV ESP,EBP
00583B9D  5D                        POP EBP
00583B9E  C2 04 00                  RET 0x4
