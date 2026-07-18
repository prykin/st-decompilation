FUN_00632e30:
00632E30  55                        PUSH EBP
00632E31  8B EC                     MOV EBP,ESP
00632E33  83 EC 14                  SUB ESP,0x14
00632E36  53                        PUSH EBX
00632E37  56                        PUSH ESI
00632E38  8B F1                     MOV ESI,ECX
00632E3A  57                        PUSH EDI
00632E3B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00632E42  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00632E49  8B 46 11                  MOV EAX,dword ptr [ESI + 0x11]
00632E4C  83 F8 04                  CMP EAX,0x4
00632E4F  0F 87 69 06 00 00         JA 0x006334be
switchD_00632e55::switchD:
00632E55  FF 24 85 78 35 63 00      JMP dword ptr [EAX*0x4 + 0x633578]
switchD_00632e55::caseD_0:
00632E5C  DB 46 19                  FILD dword ptr [ESI + 0x19]
00632E5F  A1 54 1A 7D 00            MOV EAX,[0x007d1a54]
00632E64  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
00632E67  8B 0D 58 1A 7D 00         MOV ECX,dword ptr [0x007d1a58]
00632E6D  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
00632E73  89 4E 61                  MOV dword ptr [ESI + 0x61],ECX
00632E76  8B 15 64 1A 7D 00         MOV EDX,dword ptr [0x007d1a64]
00632E7C  89 56 75                  MOV dword ptr [ESI + 0x75],EDX
00632E7F  A1 68 1A 7D 00            MOV EAX,[0x007d1a68]
00632E84  89 46 79                  MOV dword ptr [ESI + 0x79],EAX
00632E87  8B 0D 5C 1A 7D 00         MOV ECX,dword ptr [0x007d1a5c]
00632E8D  89 4E 65                  MOV dword ptr [ESI + 0x65],ECX
00632E90  8B 15 60 1A 7D 00         MOV EDX,dword ptr [0x007d1a60]
00632E96  89 56 6D                  MOV dword ptr [ESI + 0x6d],EDX
00632E99  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00632E9C  D9 05 6C 1A 7D 00         FLD float ptr [0x007d1a6c]
00632EA2  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632EA8  D9 5E 7D                  FSTP float ptr [ESI + 0x7d]
00632EAB  D9 05 70 1A 7D 00         FLD float ptr [0x007d1a70]
00632EB1  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632EB7  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
00632EBD  A1 74 1A 7D 00            MOV EAX,[0x007d1a74]
00632EC2  89 86 85 00 00 00         MOV dword ptr [ESI + 0x85],EAX
00632EC8  8B 0D 78 1A 7D 00         MOV ECX,dword ptr [0x007d1a78]
00632ECE  89 8E 89 00 00 00         MOV dword ptr [ESI + 0x89],ECX
00632ED4  E9 A5 00 00 00            JMP 0x00632f7e
switchD_00632e55::caseD_1:
00632ED9  DB 46 19                  FILD dword ptr [ESI + 0x19]
00632EDC  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
00632EE2  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00632EE5  D9 05 A4 1A 7D 00         FLD float ptr [0x007d1aa4]
00632EEB  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632EF1  C7 46 61 00 00 00 00      MOV dword ptr [ESI + 0x61],0x0
00632EF8  D9 5E 5D                  FSTP float ptr [ESI + 0x5d]
00632EFB  D9 05 B4 1A 7D 00         FLD float ptr [0x007d1ab4]
00632F01  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F07  D9 5E 75                  FSTP float ptr [ESI + 0x75]
00632F0A  D9 05 B8 1A 7D 00         FLD float ptr [0x007d1ab8]
00632F10  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F16  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00632F19  D9 05 AC 1A 7D 00         FLD float ptr [0x007d1aac]
00632F1F  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F25  D9 5E 65                  FSTP float ptr [ESI + 0x65]
00632F28  D9 05 B0 1A 7D 00         FLD float ptr [0x007d1ab0]
00632F2E  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F34  D9 5E 6D                  FSTP float ptr [ESI + 0x6d]
00632F37  D9 05 B4 1A 7D 00         FLD float ptr [0x007d1ab4]
00632F3D  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F43  D9 5E 69                  FSTP float ptr [ESI + 0x69]
00632F46  D9 05 BC 1A 7D 00         FLD float ptr [0x007d1abc]
00632F4C  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F52  D9 5E 7D                  FSTP float ptr [ESI + 0x7d]
00632F55  D9 05 C0 1A 7D 00         FLD float ptr [0x007d1ac0]
00632F5B  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632F61  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
00632F67  8B 15 C4 1A 7D 00         MOV EDX,dword ptr [0x007d1ac4]
00632F6D  89 96 85 00 00 00         MOV dword ptr [ESI + 0x85],EDX
00632F73  A1 C8 1A 7D 00            MOV EAX,[0x007d1ac8]
00632F78  89 86 89 00 00 00         MOV dword ptr [ESI + 0x89],EAX
LAB_00632f7e:
00632F7E  B8 DB 0F C9 40            MOV EAX,0x40c90fdb
00632F83  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00632F8A  89 86 8D 00 00 00         MOV dword ptr [ESI + 0x8d],EAX
00632F90  89 86 91 00 00 00         MOV dword ptr [ESI + 0x91],EAX
00632F96  E9 23 05 00 00            JMP 0x006334be
switchD_00632e55::caseD_2:
00632F9B  DB 46 19                  FILD dword ptr [ESI + 0x19]
00632F9E  8B 0D F4 1A 7D 00         MOV ECX,dword ptr [0x007d1af4]
00632FA4  89 4E 5D                  MOV dword ptr [ESI + 0x5d],ECX
00632FA7  8B 15 F8 1A 7D 00         MOV EDX,dword ptr [0x007d1af8]
00632FAD  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
00632FB3  89 56 61                  MOV dword ptr [ESI + 0x61],EDX
00632FB6  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00632FB9  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
00632FBF  D9 05 04 1B 7D 00         FLD float ptr [0x007d1b04]
00632FC5  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632FCB  D9 5E 75                  FSTP float ptr [ESI + 0x75]
00632FCE  D9 05 08 1B 7D 00         FLD float ptr [0x007d1b08]
00632FD4  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632FDA  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00632FDD  D9 05 FC 1A 7D 00         FLD float ptr [0x007d1afc]
00632FE3  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632FE9  D9 5E 65                  FSTP float ptr [ESI + 0x65]
00632FEC  D9 05 00 1B 7D 00         FLD float ptr [0x007d1b00]
00632FF2  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00632FF8  D9 5E 6D                  FSTP float ptr [ESI + 0x6d]
00632FFB  D9 05 0C 1B 7D 00         FLD float ptr [0x007d1b0c]
00633001  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633007  D9 5E 7D                  FSTP float ptr [ESI + 0x7d]
0063300A  D9 05 10 1B 7D 00         FLD float ptr [0x007d1b10]
00633010  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633016  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
0063301C  A1 14 1B 7D 00            MOV EAX,[0x007d1b14]
00633021  89 86 85 00 00 00         MOV dword ptr [ESI + 0x85],EAX
00633027  8B 06                     MOV EAX,dword ptr [ESI]
00633029  8B 0D 18 1B 7D 00         MOV ECX,dword ptr [0x007d1b18]
0063302F  85 C0                     TEST EAX,EAX
00633031  89 8E 89 00 00 00         MOV dword ptr [ESI + 0x89],ECX
00633037  74 44                     JZ 0x0063307d
00633039  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0063303C  33 FF                     XOR EDI,EDI
0063303E  85 DB                     TEST EBX,EBX
00633040  7E 3B                     JLE 0x0063307d
LAB_00633042:
00633042  8B 06                     MOV EAX,dword ptr [ESI]
00633044  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00633047  73 0D                     JNC 0x00633056
00633049  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0063304C  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0063304F  0F AF CF                  IMUL ECX,EDI
00633052  03 CA                     ADD ECX,EDX
00633054  EB 02                     JMP 0x00633058
LAB_00633056:
00633056  33 C9                     XOR ECX,ECX
LAB_00633058:
00633058  85 FF                     TEST EDI,EDI
0063305A  7E 12                     JLE 0x0063306e
0063305C  8B C7                     MOV EAX,EDI
0063305E  99                        CDQ
0063305F  F7 7E 19                  IDIV dword ptr [ESI + 0x19]
00633062  85 D2                     TEST EDX,EDX
00633064  75 08                     JNZ 0x0063306e
00633066  DD D8                     FSTP ST0
00633068  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_0063306e:
0063306E  85 C9                     TEST ECX,ECX
00633070  74 06                     JZ 0x00633078
00633072  D9 51 21                  FST float ptr [ECX + 0x21]
00633075  D8 45 FC                  FADD float ptr [EBP + -0x4]
LAB_00633078:
00633078  47                        INC EDI
00633079  3B FB                     CMP EDI,EBX
0063307B  7C C5                     JL 0x00633042
LAB_0063307d:
0063307D  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633080  33 DB                     XOR EBX,EBX
00633082  85 C0                     TEST EAX,EAX
00633084  DD D8                     FSTP ST0
00633086  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00633089  0F 8E 2F 04 00 00         JLE 0x006334be
0063308F  8D 4E 21                  LEA ECX,[ESI + 0x21]
00633092  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00633095  EB 03                     JMP 0x0063309a
LAB_00633097:
00633097  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0063309a:
0063309A  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0063309D  D8 4E 7D                  FMUL float ptr [ESI + 0x7d]
006330A0  D8 AE 91 00 00 00         FSUBR float ptr [ESI + 0x91]
006330A6  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
006330AC  D9 01                     FLD float ptr [ECX]
006330AE  DF E0                     FNSTSW AX
006330B0  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006330B6  F6 C4 01                  TEST AH,0x1
006330B9  DF E0                     FNSTSW AX
006330BB  75 3E                     JNZ 0x006330fb
006330BD  F6 C4 41                  TEST AH,0x41
006330C0  74 75                     JZ 0x00633137
006330C2  8B 4E 19                  MOV ECX,dword ptr [ESI + 0x19]
006330C5  8B C1                     MOV EAX,ECX
006330C7  0F AF C3                  IMUL EAX,EBX
006330CA  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
006330CD  8B 0E                     MOV ECX,dword ptr [ESI]
006330CF  85 C9                     TEST ECX,ECX
006330D1  74 64                     JZ 0x00633137
006330D3  3B C7                     CMP EAX,EDI
006330D5  8B D0                     MOV EDX,EAX
006330D7  7D 5E                     JGE 0x00633137
LAB_006330d9:
006330D9  8B 0E                     MOV ECX,dword ptr [ESI]
006330DB  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
006330DE  73 14                     JNC 0x006330f4
006330E0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006330E3  0F AF C2                  IMUL EAX,EDX
006330E6  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006330E9  85 C0                     TEST EAX,EAX
006330EB  74 07                     JZ 0x006330f4
006330ED  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
LAB_006330f4:
006330F4  42                        INC EDX
006330F5  3B D7                     CMP EDX,EDI
006330F7  7C E0                     JL 0x006330d9
006330F9  EB 3C                     JMP 0x00633137
LAB_006330fb:
006330FB  F6 C4 41                  TEST AH,0x41
006330FE  75 37                     JNZ 0x00633137
00633100  8B 4E 19                  MOV ECX,dword ptr [ESI + 0x19]
00633103  8B C1                     MOV EAX,ECX
00633105  0F AF C3                  IMUL EAX,EBX
00633108  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
0063310B  8B 0E                     MOV ECX,dword ptr [ESI]
0063310D  85 C9                     TEST ECX,ECX
0063310F  74 26                     JZ 0x00633137
00633111  3B C7                     CMP EAX,EDI
00633113  8B D0                     MOV EDX,EAX
00633115  7D 20                     JGE 0x00633137
LAB_00633117:
00633117  8B 0E                     MOV ECX,dword ptr [ESI]
00633119  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0063311C  73 14                     JNC 0x00633132
0063311E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633121  0F AF C2                  IMUL EAX,EDX
00633124  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633127  85 C0                     TEST EAX,EAX
00633129  74 07                     JZ 0x00633132
0063312B  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
LAB_00633132:
00633132  42                        INC EDX
00633133  3B D7                     CMP EDX,EDI
00633135  7C E0                     JL 0x00633117
LAB_00633137:
00633137  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063313A  43                        INC EBX
0063313B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0063313E  D9 18                     FSTP float ptr [EAX]
00633140  83 C0 04                  ADD EAX,0x4
00633143  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00633146  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633149  3B D8                     CMP EBX,EAX
0063314B  0F 8C 46 FF FF FF         JL 0x00633097
00633151  E9 68 03 00 00            JMP 0x006334be
switchD_00632e55::caseD_3:
00633156  8B 56 19                  MOV EDX,dword ptr [ESI + 0x19]
00633159  C1 E2 03                  SHL EDX,0x3
0063315C  52                        PUSH EDX
0063315D  E8 0E 7B 07 00            CALL 0x006aac70
00633162  D9 46 6D                  FLD float ptr [ESI + 0x6d]
00633165  D8 66 69                  FSUB float ptr [ESI + 0x69]
00633168  8B D0                     MOV EDX,EAX
0063316A  33 DB                     XOR EBX,EBX
0063316C  89 56 39                  MOV dword ptr [ESI + 0x39],EDX
0063316F  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
00633172  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
00633178  89 5E 35                  MOV dword ptr [ESI + 0x35],EBX
0063317B  DF E0                     FNSTSW AX
0063317D  F6 C4 40                  TEST AH,0x40
00633180  75 6E                     JNZ 0x006331f0
00633182  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
00633185  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00633188  8D 48 FF                  LEA ECX,[EAX + -0x1]
0063318B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0063318E  33 C9                     XOR ECX,ECX
00633190  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00633193  3B C3                     CMP EAX,EBX
00633195  D8 F9                     FDIVR ST0,ST1
00633197  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0063319A  DD D8                     FSTP ST0
0063319C  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0063319F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006331A2  D8 BE 89 00 00 00         FDIVR float ptr [ESI + 0x89]
006331A8  D9 5D EC                  FSTP float ptr [EBP + -0x14]
006331AB  7E 45                     JLE 0x006331f2
LAB_006331ad:
006331AD  DB 45 F4                  FILD dword ptr [EBP + -0xc]
006331B0  D9 C0                     FLD ST0
006331B2  D8 4D F0                  FMUL float ptr [EBP + -0x10]
006331B5  D8 46 69                  FADD float ptr [ESI + 0x69]
006331B8  D9 1C 8A                  FSTP float ptr [EDX + ECX*0x4]
006331BB  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
006331BE  8B D1                     MOV EDX,ECX
006331C0  D8 4D EC                  FMUL float ptr [EBP + -0x14]
006331C3  03 D0                     ADD EDX,EAX
006331C5  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
006331C8  D9 1C 90                  FSTP float ptr [EAX + EDX*0x4]
006331CB  8B 56 39                  MOV EDX,dword ptr [ESI + 0x39]
006331CE  D9 04 8A                  FLD float ptr [EDX + ECX*0x4]
006331D1  D8 5E 45                  FCOMP float ptr [ESI + 0x45]
006331D4  DF E0                     FNSTSW AX
006331D6  F6 C4 41                  TEST AH,0x41
006331D9  74 05                     JZ 0x006331e0
006331DB  FF 46 31                  INC dword ptr [ESI + 0x31]
006331DE  EB 03                     JMP 0x006331e3
LAB_006331e0:
006331E0  FF 46 35                  INC dword ptr [ESI + 0x35]
LAB_006331e3:
006331E3  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
006331E6  41                        INC ECX
006331E7  3B C8                     CMP ECX,EAX
006331E9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006331EC  7C BF                     JL 0x006331ad
006331EE  EB 02                     JMP 0x006331f2
LAB_006331f0:
006331F0  DD D8                     FSTP ST0
LAB_006331f2:
006331F2  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
006331F8  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
006331FE  C7 46 71 DB 0F 49 40      MOV dword ptr [ESI + 0x71],0x40490fdb
00633205  DF E0                     FNSTSW AX
00633207  F6 C4 40                  TEST AH,0x40
0063320A  75 2F                     JNZ 0x0063323b
0063320C  D9 05 A4 D1 79 00         FLD float ptr [0x0079d1a4]
00633212  D8 B6 81 00 00 00         FDIV float ptr [ESI + 0x81]
00633218  E8 6B B0 0F 00            CALL 0x0072e288
0063321D  83 F8 01                  CMP EAX,0x1
00633220  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00633223  7D 07                     JGE 0x0063322c
00633225  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_0063322c:
0063322C  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0063322F  D8 3D A4 D1 79 00         FDIVR float ptr [0x0079d1a4]
00633235  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
LAB_0063323b:
0063323B  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063323E  89 5E 79                  MOV dword ptr [ESI + 0x79],EBX
00633241  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00633244  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00633247  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0063324A  8D 14 85 00 00 00 00      LEA EDX,[EAX*0x4 + 0x0]
00633251  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00633254  8B 06                     MOV EAX,dword ptr [ESI]
00633256  D8 3D A4 D1 79 00         FDIVR float ptr [0x0079d1a4]
0063325C  3B C3                     CMP EAX,EBX
0063325E  89 96 99 00 00 00         MOV dword ptr [ESI + 0x99],EDX
00633264  D9 5E 7D                  FSTP float ptr [ESI + 0x7d]
00633267  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0063326A  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
00633270  D9 5E 75                  FSTP float ptr [ESI + 0x75]
00633273  74 4E                     JZ 0x006332c3
00633275  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00633278  33 C9                     XOR ECX,ECX
0063327A  3B FB                     CMP EDI,EBX
0063327C  7E 45                     JLE 0x006332c3
0063327E  8D 5F FF                  LEA EBX,[EDI + -0x1]
LAB_00633281:
00633281  8B 16                     MOV EDX,dword ptr [ESI]
00633283  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
00633286  73 0B                     JNC 0x00633293
00633288  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0063328B  0F AF C1                  IMUL EAX,ECX
0063328E  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00633291  EB 02                     JMP 0x00633295
LAB_00633293:
00633293  33 C0                     XOR EAX,EAX
LAB_00633295:
00633295  C6 40 0C 00               MOV byte ptr [EAX + 0xc],0x0
00633299  C7 40 21 00 00 00 00      MOV dword ptr [EAX + 0x21],0x0
006332A0  8B 56 1D                  MOV EDX,dword ptr [ESI + 0x1d]
006332A3  D1 E2                     SHL EDX,0x1
006332A5  3B CA                     CMP ECX,EDX
006332A7  7D 05                     JGE 0x006332ae
006332A9  8B 56 25                  MOV EDX,dword ptr [ESI + 0x25]
006332AC  EB 03                     JMP 0x006332b1
LAB_006332ae:
006332AE  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
LAB_006332b1:
006332B1  3B CB                     CMP ECX,EBX
006332B3  89 10                     MOV dword ptr [EAX],EDX
006332B5  75 05                     JNZ 0x006332bc
006332B7  8B 56 25                  MOV EDX,dword ptr [ESI + 0x25]
006332BA  89 10                     MOV dword ptr [EAX],EDX
LAB_006332bc:
006332BC  41                        INC ECX
006332BD  3B CF                     CMP ECX,EDI
006332BF  7C C0                     JL 0x00633281
006332C1  33 DB                     XOR EBX,EBX
LAB_006332c3:
006332C3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006332C8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006332CE  89 5E 2D                  MOV dword ptr [ESI + 0x2d],EBX
006332D1  89 4E 05                  MOV dword ptr [ESI + 0x5],ECX
006332D4  E9 E5 01 00 00            JMP 0x006334be
switchD_00632e55::caseD_4:
006332D9  DB 46 19                  FILD dword ptr [ESI + 0x19]
006332DC  8B 15 7C 1B 7D 00         MOV EDX,dword ptr [0x007d1b7c]
006332E2  89 56 5D                  MOV dword ptr [ESI + 0x5d],EDX
006332E5  A1 80 1B 7D 00            MOV EAX,[0x007d1b80]
006332EA  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
006332F0  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
006332F3  8B 06                     MOV EAX,dword ptr [ESI]
006332F5  85 C0                     TEST EAX,EAX
006332F7  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006332FA  D9 05 8C 1B 7D 00         FLD float ptr [0x007d1b8c]
00633300  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633306  D9 5E 75                  FSTP float ptr [ESI + 0x75]
00633309  D9 05 90 1B 7D 00         FLD float ptr [0x007d1b90]
0063330F  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633315  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00633318  D9 05 84 1B 7D 00         FLD float ptr [0x007d1b84]
0063331E  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633324  D9 5E 65                  FSTP float ptr [ESI + 0x65]
00633327  D9 05 88 1B 7D 00         FLD float ptr [0x007d1b88]
0063332D  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633333  D9 5E 6D                  FSTP float ptr [ESI + 0x6d]
00633336  D9 05 94 1B 7D 00         FLD float ptr [0x007d1b94]
0063333C  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633342  D9 5E 7D                  FSTP float ptr [ESI + 0x7d]
00633345  D9 05 98 1B 7D 00         FLD float ptr [0x007d1b98]
0063334B  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00633351  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
00633357  8B 0D 9C 1B 7D 00         MOV ECX,dword ptr [0x007d1b9c]
0063335D  89 8E 85 00 00 00         MOV dword ptr [ESI + 0x85],ECX
00633363  8B 15 A0 1B 7D 00         MOV EDX,dword ptr [0x007d1ba0]
00633369  89 96 89 00 00 00         MOV dword ptr [ESI + 0x89],EDX
0063336F  0F 84 49 01 00 00         JZ 0x006334be
00633375  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00633378  85 C0                     TEST EAX,EAX
0063337A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0063337D  0F 84 3B 01 00 00         JZ 0x006334be
00633383  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633386  33 DB                     XOR EBX,EBX
00633388  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063338B  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0063338E  85 C0                     TEST EAX,EAX
00633390  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00633397  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
0063339D  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006333A0  0F 8E 80 00 00 00         JLE 0x00633426
LAB_006333a6:
006333A6  8B 0E                     MOV ECX,dword ptr [ESI]
006333A8  3B 59 0C                  CMP EBX,dword ptr [ECX + 0xc]
006333AB  73 22                     JNC 0x006333cf
006333AD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006333B0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006333B3  0F AF C3                  IMUL EAX,EBX
006333B6  03 C2                     ADD EAX,EDX
006333B8  85 C0                     TEST EAX,EAX
006333BA  74 13                     JZ 0x006333cf
006333BC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006333BF  89 48 21                  MOV dword ptr [EAX + 0x21],ECX
006333C2  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
006333C5  89 50 25                  MOV dword ptr [EAX + 0x25],EDX
006333C8  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
LAB_006333cf:
006333CF  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006333D2  8D 0C 18                  LEA ECX,[EAX + EBX*0x1]
006333D5  8B 06                     MOV EAX,dword ptr [ESI]
006333D7  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
006333DA  73 39                     JNC 0x00633415
006333DC  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006333DF  0F AF F9                  IMUL EDI,ECX
006333E2  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
006333E5  85 FF                     TEST EDI,EDI
006333E7  74 2C                     JZ 0x00633415
006333E9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006333EC  89 4F 21                  MOV dword ptr [EDI + 0x21],ECX
006333EF  8B 56 6D                  MOV EDX,dword ptr [ESI + 0x6d]
006333F2  89 57 25                  MOV dword ptr [EDI + 0x25],EDX
006333F5  8B 46 6D                  MOV EAX,dword ptr [ESI + 0x6d]
006333F8  89 46 71                  MOV dword ptr [ESI + 0x71],EAX
006333FB  E8 C0 B2 0F 00            CALL 0x0072e6c0
00633400  99                        CDQ
00633401  B9 07 00 00 00            MOV ECX,0x7
00633406  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
0063340D  F7 F9                     IDIV ECX
0063340F  89 4F 1D                  MOV dword ptr [EDI + 0x1d],ECX
00633412  89 57 19                  MOV dword ptr [EDI + 0x19],EDX
LAB_00633415:
00633415  D9 45 F4                  FLD float ptr [EBP + -0xc]
00633418  D8 45 FC                  FADD float ptr [EBP + -0x4]
0063341B  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063341E  43                        INC EBX
0063341F  3B D8                     CMP EBX,EAX
00633421  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00633424  7C 80                     JL 0x006333a6
LAB_00633426:
00633426  8B 5E 1D                  MOV EBX,dword ptr [ESI + 0x1d]
00633429  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063342C  D1 E3                     SHL EBX,0x1
0063342E  3B D8                     CMP EBX,EAX
00633430  0F 8D 88 00 00 00         JGE 0x006334be
LAB_00633436:
00633436  8B 06                     MOV EAX,dword ptr [ESI]
00633438  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063343B  73 0D                     JNC 0x0063344a
0063343D  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00633440  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00633443  0F AF FB                  IMUL EDI,EBX
00633446  03 F9                     ADD EDI,ECX
00633448  EB 02                     JMP 0x0063344c
LAB_0063344a:
0063344A  33 FF                     XOR EDI,EDI
LAB_0063344c:
0063344C  E8 6F B2 0F 00            CALL 0x0072e6c0
00633451  99                        CDQ
00633452  B9 68 01 00 00            MOV ECX,0x168
00633457  F7 F9                     IDIV ECX
00633459  85 FF                     TEST EDI,EDI
0063345B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0063345E  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00633461  D8 0D A8 D1 79 00         FMUL float ptr [0x0079d1a8]
00633467  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0063346A  74 46                     JZ 0x006334b2
0063346C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063346F  89 57 21                  MOV dword ptr [EDI + 0x21],EDX
00633472  E8 49 B2 0F 00            CALL 0x0072e6c0
00633477  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0063347A  99                        CDQ
0063347B  41                        INC ECX
0063347C  F7 F9                     IDIV ECX
0063347E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00633481  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00633484  D9 46 79                  FLD float ptr [ESI + 0x79]
00633487  D8 66 6D                  FSUB float ptr [ESI + 0x6d]
0063348A  DE C9                     FMULP
0063348C  DA 75 F0                  FIDIV dword ptr [EBP + -0x10]
0063348F  D8 46 6D                  FADD float ptr [ESI + 0x6d]
00633492  C7 47 19 00 00 00 00      MOV dword ptr [EDI + 0x19],0x0
00633499  D9 5F 25                  FSTP float ptr [EDI + 0x25]
0063349C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006334A2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
006334A8  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
006334AF  89 47 35                  MOV dword ptr [EDI + 0x35],EAX
LAB_006334b2:
006334B2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006334B5  43                        INC EBX
006334B6  3B D8                     CMP EBX,EAX
006334B8  0F 8C 78 FF FF FF         JL 0x00633436
switchD_00632e55::default:
006334BE  8B 46 11                  MOV EAX,dword ptr [ESI + 0x11]
006334C1  85 C0                     TEST EAX,EAX
006334C3  74 09                     JZ 0x006334ce
006334C5  83 F8 01                  CMP EAX,0x1
006334C8  0F 85 9D 00 00 00         JNZ 0x0063356b
LAB_006334ce:
006334CE  8B 0E                     MOV ECX,dword ptr [ESI]
006334D0  85 C9                     TEST ECX,ECX
006334D2  0F 84 93 00 00 00         JZ 0x0063356b
006334D8  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
006334DB  83 F8 01                  CMP EAX,0x1
006334DE  75 55                     JNZ 0x00633535
006334E0  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006334E3  33 FF                     XOR EDI,EDI
006334E5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006334E8  2B D8                     SUB EBX,EAX
006334EA  DB 45 F4                  FILD dword ptr [EBP + -0xc]
006334ED  85 C0                     TEST EAX,EAX
006334EF  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
006334F5  D9 55 F0                  FST float ptr [EBP + -0x10]
006334F8  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
006334FE  7E 33                     JLE 0x00633533
00633500  8B D3                     MOV EDX,EBX
LAB_00633502:
00633502  8B 0E                     MOV ECX,dword ptr [ESI]
00633504  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633507  73 21                     JNC 0x0063352a
00633509  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063350C  0F AF C2                  IMUL EAX,EDX
0063350F  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633512  85 C0                     TEST EAX,EAX
00633514  74 14                     JZ 0x0063352a
00633516  D9 50 21                  FST float ptr [EAX + 0x21]
00633519  D8 45 F0                  FADD float ptr [EBP + -0x10]
0063351C  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
00633523  C7 40 19 03 00 00 00      MOV dword ptr [EAX + 0x19],0x3
LAB_0063352a:
0063352A  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063352D  47                        INC EDI
0063352E  42                        INC EDX
0063352F  3B F8                     CMP EDI,EAX
00633531  7C CF                     JL 0x00633502
LAB_00633533:
00633533  DD D8                     FSTP ST0
LAB_00633535:
00633535  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0063353B  33 D2                     XOR EDX,EDX
0063353D  85 DB                     TEST EBX,EBX
0063353F  7E 28                     JLE 0x00633569
LAB_00633541:
00633541  8B 0E                     MOV ECX,dword ptr [ESI]
00633543  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633546  73 1C                     JNC 0x00633564
00633548  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063354B  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0063354E  0F AF C2                  IMUL EAX,EDX
00633551  03 C7                     ADD EAX,EDI
00633553  85 C0                     TEST EAX,EAX
00633555  74 0D                     JZ 0x00633564
00633557  D9 50 21                  FST float ptr [EAX + 0x21]
0063355A  D8 45 FC                  FADD float ptr [EBP + -0x4]
0063355D  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
LAB_00633564:
00633564  42                        INC EDX
00633565  3B D3                     CMP EDX,EBX
00633567  7C D8                     JL 0x00633541
LAB_00633569:
00633569  DD D8                     FSTP ST0
LAB_0063356b:
0063356B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063356E  5F                        POP EDI
0063356F  5E                        POP ESI
00633570  5B                        POP EBX
00633571  8B E5                     MOV ESP,EBP
00633573  5D                        POP EBP
00633574  C3                        RET
