CPanelTy::SetControlBoat:
00502360  55                        PUSH EBP
00502361  8B EC                     MOV EBP,ESP
00502363  81 EC AC 0B 00 00         SUB ESP,0xbac
00502369  53                        PUSH EBX
0050236A  56                        PUSH ESI
0050236B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0050236E  57                        PUSH EDI
0050236F  B9 16 00 00 00            MOV ECX,0x16
00502374  33 C0                     XOR EAX,EAX
00502376  8D BD FC FE FF FF         LEA EDI,[EBP + 0xfffffefc]
0050237C  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
00502382  F3 AB                     STOSD.REP ES:EDI
00502384  B9 70 00 00 00            MOV ECX,0x70
00502389  8D BD 3C FD FF FF         LEA EDI,[EBP + 0xfffffd3c]
0050238F  F3 AB                     STOSD.REP ES:EDI
00502391  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00502396  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
0050239C  6A 00                     PUSH 0x0
0050239E  52                        PUSH EDX
0050239F  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
005023A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005023AB  E8 40 B4 22 00            CALL 0x0072d7f0
005023B0  8B F0                     MOV ESI,EAX
005023B2  83 C4 08                  ADD ESP,0x8
005023B5  85 F6                     TEST ESI,ESI
005023B7  0F 85 34 04 00 00         JNZ 0x005027f1
005023BD  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005023C3  E8 34 1D F0 FF            CALL 0x004040fc
005023C8  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
005023CB  8B 86 FE 02 00 00         MOV EAX,dword ptr [ESI + 0x2fe]
005023D1  85 C0                     TEST EAX,EAX
005023D3  74 09                     JZ 0x005023de
005023D5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005023D8  50                        PUSH EAX
005023D9  E8 D2 32 1E 00            CALL 0x006e56b0
LAB_005023de:
005023DE  C7 86 FE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2fe],0x0
005023E8  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
005023EE  BB 04 00 00 00            MOV EBX,0x4
LAB_005023f3:
005023F3  8B 07                     MOV EAX,dword ptr [EDI]
005023F5  85 C0                     TEST EAX,EAX
005023F7  74 0F                     JZ 0x00502408
005023F9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005023FC  50                        PUSH EAX
005023FD  E8 AE 32 1E 00            CALL 0x006e56b0
00502402  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_00502408:
00502408  83 C7 04                  ADD EDI,0x4
0050240B  4B                        DEC EBX
0050240C  75 E5                     JNZ 0x005023f3
0050240E  8B 86 70 09 00 00         MOV EAX,dword ptr [ESI + 0x970]
00502414  85 C0                     TEST EAX,EAX
00502416  74 09                     JZ 0x00502421
00502418  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050241B  50                        PUSH EAX
0050241C  E8 8F 32 1E 00            CALL 0x006e56b0
LAB_00502421:
00502421  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00502427  33 C9                     XOR ECX,ECX
00502429  84 C0                     TEST AL,AL
0050242B  89 8E 70 09 00 00         MOV dword ptr [ESI + 0x970],ECX
00502431  0F 84 C9 01 00 00         JZ 0x00502600
00502437  3C 04                     CMP AL,0x4
00502439  0F 84 C1 01 00 00         JZ 0x00502600
0050243F  3C 03                     CMP AL,0x3
00502441  0F 84 B9 01 00 00         JZ 0x00502600
00502447  B9 14 00 00 00            MOV ECX,0x14
0050244C  33 C0                     XOR EAX,EAX
0050244E  8D 7D 98                  LEA EDI,[EBP + -0x68]
00502451  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00502454  F3 AB                     STOSD.REP ES:EDI
00502456  8D 8E 80 07 00 00         LEA ECX,[ESI + 0x780]
0050245C  8D 86 A2 0B 00 00         LEA EAX,[ESI + 0xba2]
00502462  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00502465  B9 5D F4 FF FF            MOV ECX,0xfffff45d
0050246A  2B CE                     SUB ECX,ESI
0050246C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050246F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00502472:
00502472  80 38 00                  CMP byte ptr [EAX],0x0
00502475  0F 84 D1 00 00 00         JZ 0x0050254c
0050247B  03 C1                     ADD EAX,ECX
0050247D  BF 02 00 00 00            MOV EDI,0x2
00502482  83 F8 04                  CMP EAX,0x4
00502485  BB 05 00 00 00            MOV EBX,0x5
0050248A  77 26                     JA 0x005024b2
switchD_0050248c::switchD:
0050248C  FF 24 85 3C 28 50 00      JMP dword ptr [EAX*0x4 + 0x50283c]
switchD_0050248c::caseD_0:
00502493  BF 3F 00 00 00            MOV EDI,0x3f
00502498  EB 18                     JMP 0x005024b2
switchD_0050248c::caseD_1:
0050249A  BF 7C 00 00 00            MOV EDI,0x7c
0050249F  EB 11                     JMP 0x005024b2
switchD_0050248c::caseD_3:
005024A1  BF 7C 00 00 00            MOV EDI,0x7c
005024A6  EB 05                     JMP 0x005024ad
switchD_0050248c::caseD_4:
005024A8  BF 3F 00 00 00            MOV EDI,0x3f
switchD_0050248c::caseD_2:
005024AD  BB 29 00 00 00            MOV EBX,0x29
switchD_0050248c::default:
005024B2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005024B5  8B CE                     MOV ECX,ESI
005024B7  52                        PUSH EDX
005024B8  6A 01                     PUSH 0x1
005024BA  E8 7F 0C F0 FF            CALL 0x0040313e
005024BF  8A 86 A0 0B 00 00         MOV AL,byte ptr [ESI + 0xba0]
005024C5  84 C0                     TEST AL,AL
005024C7  74 0D                     JZ 0x005024d6
005024C9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005024CC  33 C0                     XOR EAX,EAX
005024CE  8A 41 06                  MOV AL,byte ptr [ECX + 0x6]
005024D1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005024D4  EB 07                     JMP 0x005024dd
LAB_005024d6:
005024D6  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_005024dd:
005024DD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005024E0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005024E3  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
005024E9  6A 00                     PUSH 0x0
005024EB  52                        PUSH EDX
005024EC  8A 11                     MOV DL,byte ptr [ECX]
005024EE  6A 00                     PUSH 0x0
005024F0  6A 01                     PUSH 0x1
005024F2  6A 00                     PUSH 0x0
005024F4  50                        PUSH EAX
005024F5  52                        PUSH EDX
005024F6  E8 98 2F F0 FF            CALL 0x00405493
005024FB  83 C4 08                  ADD ESP,0x8
005024FE  50                        PUSH EAX
005024FF  E8 78 32 F0 FF            CALL 0x0040577c
00502504  83 C4 08                  ADD ESP,0x8
00502507  50                        PUSH EAX
00502508  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0050250B  6A 01                     PUSH 0x1
0050250D  53                        PUSH EBX
0050250E  57                        PUSH EDI
0050250F  50                        PUSH EAX
00502510  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00502513  6A 03                     PUSH 0x3
00502515  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00502518  C1 E1 05                  SHL ECX,0x5
0050251B  2B C8                     SUB ECX,EAX
0050251D  8D 94 8D 54 F4 FF FF      LEA EDX,[EBP + ECX*0x4 + 0xfffff454]
00502524  8B CE                     MOV ECX,ESI
00502526  52                        PUSH EDX
00502527  E8 8E 1C F0 FF            CALL 0x004041ba
0050252C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0050252F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00502532  C1 E1 05                  SHL ECX,0x5
00502535  2B C8                     SUB ECX,EAX
00502537  40                        INC EAX
00502538  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0050253B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0050253E  C7 84 8D 64 F5 FF FF 01 00 00 00  MOV dword ptr [EBP + ECX*0x4 + 0xfffff564],0x1
00502549  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_0050254c:
0050254C  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
0050254F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00502552  FE C2                     INC DL
00502554  83 C7 27                  ADD EDI,0x27
00502557  40                        INC EAX
00502558  80 FA 06                  CMP DL,0x6
0050255B  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
0050255E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00502561  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00502564  0F 82 08 FF FF FF         JC 0x00502472
0050256A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0050256D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00502570  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00502573  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00502576  8D 45 98                  LEA EAX,[EBP + -0x68]
00502579  6A 00                     PUSH 0x0
0050257B  8D 95 54 F4 FF FF         LEA EDX,[EBP + 0xfffff454]
00502581  BF 02 00 00 00            MOV EDI,0x2
00502586  50                        PUSH EAX
00502587  8D 86 FE 02 00 00         LEA EAX,[ESI + 0x2fe]
0050258D  C7 45 98 01 00 00 00      MOV dword ptr [EBP + -0x68],0x1
00502594  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00502597  C7 45 9C FF FF FF FF      MOV dword ptr [EBP + -0x64],0xffffffff
0050259E  89 7D AC                  MOV dword ptr [EBP + -0x54],EDI
005025A1  C7 45 B0 FF B1 00 00      MOV dword ptr [EBP + -0x50],0xb1ff
005025A8  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
005025AB  C7 45 D0 00 B2 00 00      MOV dword ptr [EBP + -0x30],0xb200
005025B2  8B 11                     MOV EDX,dword ptr [ECX]
005025B4  6A 00                     PUSH 0x0
005025B6  50                        PUSH EAX
005025B7  6A 09                     PUSH 0x9
005025B9  FF 52 08                  CALL dword ptr [EDX + 0x8]
005025BC  6A 01                     PUSH 0x1
005025BE  8B CE                     MOV ECX,ESI
005025C0  E8 DC 25 F0 FF            CALL 0x00404ba1
005025C5  8B 86 C0 09 00 00         MOV EAX,dword ptr [ESI + 0x9c0]
005025CB  85 C0                     TEST EAX,EAX
005025CD  74 53                     JZ 0x00502622
005025CF  8A 8E A0 0B 00 00         MOV CL,byte ptr [ESI + 0xba0]
005025D5  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
005025DC  84 C9                     TEST CL,CL
005025DE  74 13                     JZ 0x005025f3
005025E0  33 C9                     XOR ECX,ECX
005025E2  8A 8E AE 0B 00 00         MOV CL,byte ptr [ESI + 0xbae]
005025E8  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
005025EB  8D 4E 18                  LEA ECX,[ESI + 0x18]
005025EE  51                        PUSH ECX
005025EF  50                        PUSH EAX
005025F0  57                        PUSH EDI
005025F1  EB 28                     JMP 0x0050261b
LAB_005025f3:
005025F3  33 C9                     XOR ECX,ECX
005025F5  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
005025F8  8D 4E 18                  LEA ECX,[ESI + 0x18]
005025FB  51                        PUSH ECX
005025FC  50                        PUSH EAX
005025FD  57                        PUSH EDI
005025FE  EB 1B                     JMP 0x0050261b
LAB_00502600:
00502600  8B 86 C0 09 00 00         MOV EAX,dword ptr [ESI + 0x9c0]
00502606  3B C1                     CMP EAX,ECX
00502608  74 18                     JZ 0x00502622
0050260A  8D 56 18                  LEA EDX,[ESI + 0x18]
0050260D  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00502614  52                        PUSH EDX
00502615  50                        PUSH EAX
00502616  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
00502619  6A 02                     PUSH 0x2
LAB_0050261b:
0050261B  8B CE                     MOV ECX,ESI
0050261D  E8 5E 3A 1E 00            CALL 0x006e6080
LAB_00502622:
00502622  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00502628  3C 01                     CMP AL,0x1
0050262A  74 04                     JZ 0x00502630
0050262C  3C 03                     CMP AL,0x3
0050262E  75 7C                     JNZ 0x005026ac
LAB_00502630:
00502630  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00502636  83 F8 09                  CMP EAX,0x9
00502639  74 71                     JZ 0x005026ac
0050263B  83 F8 15                  CMP EAX,0x15
0050263E  74 6C                     JZ 0x005026ac
00502640  3D BD 00 00 00            CMP EAX,0xbd
00502645  74 65                     JZ 0x005026ac
00502647  3D A7 00 00 00            CMP EAX,0xa7
0050264C  74 5E                     JZ 0x005026ac
0050264E  3D A6 00 00 00            CMP EAX,0xa6
00502653  74 57                     JZ 0x005026ac
00502655  3D AF 00 00 00            CMP EAX,0xaf
0050265A  74 50                     JZ 0x005026ac
0050265C  6A 00                     PUSH 0x0
0050265E  6A 00                     PUSH 0x0
00502660  6A 00                     PUSH 0x0
00502662  6A 00                     PUSH 0x0
00502664  68 04 3B 00 00            PUSH 0x3b04
00502669  6A 00                     PUSH 0x0
0050266B  6A 02                     PUSH 0x2
0050266D  68 18 B1 00 00            PUSH 0xb118
00502672  68 17 B1 00 00            PUSH 0xb117
00502677  6A 00                     PUSH 0x0
00502679  68 A4 23 7C 00            PUSH 0x7c23a4
0050267E  E8 F9 30 F0 FF            CALL 0x0040577c
00502683  8A 9E A0 0B 00 00         MOV BL,byte ptr [ESI + 0xba0]
00502689  83 C4 08                  ADD ESP,0x8
0050268C  8B CE                     MOV ECX,ESI
0050268E  50                        PUSH EAX
0050268F  33 C0                     XOR EAX,EAX
00502691  84 DB                     TEST BL,BL
00502693  6A 01                     PUSH 0x1
00502695  6A 64                     PUSH 0x64
00502697  0F 95 C0                  SETNZ AL
0050269A  6A 4A                     PUSH 0x4a
0050269C  50                        PUSH EAX
0050269D  6A 00                     PUSH 0x0
0050269F  6A 03                     PUSH 0x3
005026A1  E8 43 F1 EF FF            CALL 0x004017e9
005026A6  89 86 70 09 00 00         MOV dword ptr [ESI + 0x970],EAX
LAB_005026ac:
005026AC  80 BE 9E 0B 00 00 02      CMP byte ptr [ESI + 0xb9e],0x2
005026B3  75 50                     JNZ 0x00502705
005026B5  6A 00                     PUSH 0x0
005026B7  6A 00                     PUSH 0x0
005026B9  6A 00                     PUSH 0x0
005026BB  6A 00                     PUSH 0x0
005026BD  68 05 3B 00 00            PUSH 0x3b05
005026C2  6A 00                     PUSH 0x0
005026C4  6A 02                     PUSH 0x2
005026C6  68 1A B1 00 00            PUSH 0xb11a
005026CB  68 19 B1 00 00            PUSH 0xb119
005026D0  6A 00                     PUSH 0x0
005026D2  68 94 23 7C 00            PUSH 0x7c2394
005026D7  E8 A0 30 F0 FF            CALL 0x0040577c
005026DC  8A 9E A0 0B 00 00         MOV BL,byte ptr [ESI + 0xba0]
005026E2  83 C4 08                  ADD ESP,0x8
005026E5  33 C9                     XOR ECX,ECX
005026E7  50                        PUSH EAX
005026E8  6A 01                     PUSH 0x1
005026EA  84 DB                     TEST BL,BL
005026EC  6A 64                     PUSH 0x64
005026EE  6A 4A                     PUSH 0x4a
005026F0  0F 95 C1                  SETNZ CL
005026F3  51                        PUSH ECX
005026F4  6A 00                     PUSH 0x0
005026F6  6A 03                     PUSH 0x3
005026F8  8B CE                     MOV ECX,ESI
005026FA  E8 EA F0 EF FF            CALL 0x004017e9
005026FF  89 86 70 09 00 00         MOV dword ptr [ESI + 0x970],EAX
LAB_00502705:
00502705  8A 8E 9E 0B 00 00         MOV CL,byte ptr [ESI + 0xb9e]
0050270B  80 F9 01                  CMP CL,0x1
0050270E  75 10                     JNZ 0x00502720
00502710  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00502716  83 F8 09                  CMP EAX,0x9
00502719  74 05                     JZ 0x00502720
0050271B  83 F8 15                  CMP EAX,0x15
0050271E  75 21                     JNZ 0x00502741
LAB_00502720:
00502720  80 F9 02                  CMP CL,0x2
00502723  0F 85 B5 00 00 00         JNZ 0x005027de
00502729  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
0050272F  83 F8 09                  CMP EAX,0x9
00502732  0F 84 A6 00 00 00         JZ 0x005027de
00502738  83 F8 15                  CMP EAX,0x15
0050273B  0F 84 9D 00 00 00         JZ 0x005027de
LAB_00502741:
00502741  8D 86 60 09 00 00         LEA EAX,[ESI + 0x960]
00502747  32 DB                     XOR BL,BL
00502749  BF 30 B2 00 00            MOV EDI,0xb230
0050274E  C7 45 FC 0F 00 00 00      MOV dword ptr [EBP + -0x4],0xf
00502755  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00502758:
00502758  8A 86 A0 0B 00 00         MOV AL,byte ptr [ESI + 0xba0]
0050275E  84 C0                     TEST AL,AL
00502760  74 0E                     JZ 0x00502770
00502762  33 D2                     XOR EDX,EDX
00502764  8A 94 3E 9F 59 FF FF      MOV DL,byte ptr [ESI + EDI*0x1 + 0xffff599f]
0050276B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0050276E  EB 07                     JMP 0x00502777
LAB_00502770:
00502770  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00502777:
00502777  8A C3                     MOV AL,BL
00502779  6A 00                     PUSH 0x0
0050277B  F6 D8                     NEG AL
0050277D  1B C0                     SBB EAX,EAX
0050277F  6A 00                     PUSH 0x0
00502781  6A 00                     PUSH 0x0
00502783  05 36 4E 00 00            ADD EAX,0x4e36
00502788  6A 00                     PUSH 0x0
0050278A  50                        PUSH EAX
0050278B  6A 00                     PUSH 0x0
0050278D  6A 02                     PUSH 0x2
0050278F  8D 4F F0                  LEA ECX,[EDI + -0x10]
00502792  57                        PUSH EDI
00502793  51                        PUSH ECX
00502794  6A 00                     PUSH 0x0
00502796  68 50 23 7C 00            PUSH 0x7c2350
0050279B  E8 DC 2F F0 FF            CALL 0x0040577c
005027A0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005027A3  83 C4 08                  ADD ESP,0x8
005027A6  8B CE                     MOV ECX,ESI
005027A8  50                        PUSH EAX
005027A9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005027AC  6A 01                     PUSH 0x1
005027AE  68 80 00 00 00            PUSH 0x80
005027B3  52                        PUSH EDX
005027B4  50                        PUSH EAX
005027B5  6A 00                     PUSH 0x0
005027B7  6A 03                     PUSH 0x3
005027B9  E8 2B F0 EF FF            CALL 0x004017e9
005027BE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005027C1  FE C3                     INC BL
005027C3  89 01                     MOV dword ptr [ECX],EAX
005027C5  83 C1 04                  ADD ECX,0x4
005027C8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005027CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005027CE  47                        INC EDI
005027CF  83 C1 35                  ADD ECX,0x35
005027D2  80 FB 03                  CMP BL,0x3
005027D5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005027D8  0F 82 7A FF FF FF         JC 0x00502758
LAB_005027de:
005027DE  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
005027E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005027EA  5F                        POP EDI
005027EB  5E                        POP ESI
005027EC  5B                        POP EBX
005027ED  8B E5                     MOV ESP,EBP
005027EF  5D                        POP EBP
005027F0  C3                        RET
LAB_005027f1:
005027F1  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
005027F7  68 E0 25 7C 00            PUSH 0x7c25e0
005027FC  68 CC 4C 7A 00            PUSH 0x7a4ccc
00502801  56                        PUSH ESI
00502802  6A 00                     PUSH 0x0
00502804  68 A0 01 00 00            PUSH 0x1a0
00502809  68 24 25 7C 00            PUSH 0x7c2524
0050280E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00502814  E8 B7 AC 1A 00            CALL 0x006ad4d0
00502819  83 C4 18                  ADD ESP,0x18
0050281C  85 C0                     TEST EAX,EAX
0050281E  74 01                     JZ 0x00502821
00502820  CC                        INT3
LAB_00502821:
00502821  68 A0 01 00 00            PUSH 0x1a0
00502826  68 24 25 7C 00            PUSH 0x7c2524
0050282B  6A 00                     PUSH 0x0
0050282D  56                        PUSH ESI
0050282E  E8 0D 36 1A 00            CALL 0x006a5e40
00502833  5F                        POP EDI
00502834  5E                        POP ESI
00502835  5B                        POP EBX
00502836  8B E5                     MOV ESP,EBP
00502838  5D                        POP EBP
00502839  C3                        RET
