FUN_00567510:
00567510  55                        PUSH EBP
00567511  8B EC                     MOV EBP,ESP
00567513  81 EC AC 00 00 00         SUB ESP,0xac
00567519  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056751F  53                        PUSH EBX
00567520  56                        PUSH ESI
00567521  57                        PUSH EDI
00567522  85 C0                     TEST EAX,EAX
00567524  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00567527  0F 84 54 05 00 00         JZ 0x00567a81
0056752D  A0 63 73 80 00            MOV AL,[0x00807363]
00567532  84 C0                     TEST AL,AL
00567534  0F 84 0D 02 00 00         JZ 0x00567747
0056753A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056753D  8B 91 D9 10 00 00         MOV EDX,dword ptr [ECX + 0x10d9]
00567543  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00567546  3B D0                     CMP EDX,EAX
00567548  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0056754B  75 21                     JNZ 0x0056756e
0056754D  39 B1 DD 10 00 00         CMP dword ptr [ECX + 0x10dd],ESI
00567553  75 19                     JNZ 0x0056756e
00567555  39 91 E5 10 00 00         CMP dword ptr [ECX + 0x10e5],EDX
0056755B  75 11                     JNZ 0x0056756e
0056755D  8B B9 E1 10 00 00         MOV EDI,dword ptr [ECX + 0x10e1]
00567563  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00567566  3B FB                     CMP EDI,EBX
00567568  0F 84 13 05 00 00         JZ 0x00567a81
LAB_0056756e:
0056756E  89 91 E5 10 00 00         MOV dword ptr [ECX + 0x10e5],EDX
00567574  89 81 D9 10 00 00         MOV dword ptr [ECX + 0x10d9],EAX
0056757A  89 B1 DD 10 00 00         MOV dword ptr [ECX + 0x10dd],ESI
00567580  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00567585  8D 55 9C                  LEA EDX,[EBP + -0x64]
00567588  8D 4D 98                  LEA ECX,[EBP + -0x68]
0056758B  6A 00                     PUSH 0x0
0056758D  52                        PUSH EDX
0056758E  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00567591  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00567597  E8 54 62 1C 00            CALL 0x0072d7f0
0056759C  83 C4 08                  ADD ESP,0x8
0056759F  85 C0                     TEST EAX,EAX
005675A1  0F 85 8F 01 00 00         JNZ 0x00567736
005675A7  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
005675AA  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005675AD  8B 87 E5 10 00 00         MOV EAX,dword ptr [EDI + 0x10e5]
005675B3  83 F8 03                  CMP EAX,0x3
005675B6  0F 87 A6 00 00 00         JA 0x00567662
switchD_005675bc::switchD:
005675BC  FF 24 85 8C 7A 56 00      JMP dword ptr [EAX*0x4 + 0x567a8c]
switchD_005675bc::caseD_0:
005675C3  68 00 00 80 3F            PUSH 0x3f800000
005675C8  6A 00                     PUSH 0x0
005675CA  8D 44 B6 05               LEA EAX,[ESI + ESI*0x4 + 0x5]
005675CE  6A 00                     PUSH 0x0
005675D0  6A 00                     PUSH 0x0
005675D2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005675D5  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005675D8  68 81 04 35 BF            PUSH 0xbf350481
005675DD  68 81 04 35 BF            PUSH 0xbf350481
005675E2  EB 61                     JMP 0x00567645
switchD_005675bc::caseD_1:
005675E4  68 00 00 80 3F            PUSH 0x3f800000
005675E9  6A 00                     PUSH 0x0
005675EB  8D 4C B6 05               LEA ECX,[ESI + ESI*0x4 + 0x5]
005675EF  6A 00                     PUSH 0x0
005675F1  6A 00                     PUSH 0x0
005675F3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005675F6  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005675F9  68 81 04 35 BF            PUSH 0xbf350481
005675FE  68 81 04 35 3F            PUSH 0x3f350481
00567603  EB 40                     JMP 0x00567645
switchD_005675bc::caseD_3:
00567605  68 00 00 80 3F            PUSH 0x3f800000
0056760A  6A 00                     PUSH 0x0
0056760C  8D 54 B6 05               LEA EDX,[ESI + ESI*0x4 + 0x5]
00567610  6A 00                     PUSH 0x0
00567612  6A 00                     PUSH 0x0
00567614  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00567617  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0056761A  68 81 04 35 3F            PUSH 0x3f350481
0056761F  68 81 04 35 BF            PUSH 0xbf350481
00567624  EB 1F                     JMP 0x00567645
switchD_005675bc::caseD_2:
00567626  68 00 00 80 3F            PUSH 0x3f800000
0056762B  6A 00                     PUSH 0x0
0056762D  8D 44 B6 05               LEA EAX,[ESI + ESI*0x4 + 0x5]
00567631  6A 00                     PUSH 0x0
00567633  6A 00                     PUSH 0x0
00567635  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00567638  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0056763B  68 81 04 35 3F            PUSH 0x3f350481
00567640  68 81 04 35 3F            PUSH 0x3f350481
LAB_00567645:
00567645  51                        PUSH ECX
00567646  D9 1C 24                  FSTP float ptr [ESP]
00567649  DB 87 DD 10 00 00         FILD dword ptr [EDI + 0x10dd]
0056764F  51                        PUSH ECX
00567650  D9 1C 24                  FSTP float ptr [ESP]
00567653  DB 87 D9 10 00 00         FILD dword ptr [EDI + 0x10d9]
00567659  51                        PUSH ECX
0056765A  D9 1C 24                  FSTP float ptr [ESP]
0056765D  E8 FE AA 15 00            CALL 0x006c2160
switchD_005675bc::default:
00567662  39 B7 E1 10 00 00         CMP dword ptr [EDI + 0x10e1],ESI
00567668  0F 84 B6 00 00 00         JZ 0x00567724
0056766E  89 B7 E1 10 00 00         MOV dword ptr [EDI + 0x10e1],ESI
00567674  BE 02 00 00 00            MOV ESI,0x2
00567679  8D 9F 23 0E 00 00         LEA EBX,[EDI + 0xe23]
LAB_0056767f:
0056767F  8D 4D EC                  LEA ECX,[EBP + -0x14]
00567682  6A 00                     PUSH 0x0
00567684  51                        PUSH ECX
00567685  56                        PUSH ESI
00567686  E8 75 A8 15 00            CALL 0x006c1f00
0056768B  83 7D EC 01               CMP dword ptr [EBP + -0x14],0x1
0056768F  0F 85 82 00 00 00         JNZ 0x00567717
00567695  83 FE 04                  CMP ESI,0x4
00567698  7C 05                     JL 0x0056769f
0056769A  83 FE 0A                  CMP ESI,0xa
0056769D  7E 0A                     JLE 0x005676a9
LAB_0056769f:
0056769F  83 FE 12                  CMP ESI,0x12
005676A2  7C 37                     JL 0x005676db
005676A4  83 FE 14                  CMP ESI,0x14
005676A7  7F 32                     JG 0x005676db
LAB_005676a9:
005676A9  8B 87 E1 10 00 00         MOV EAX,dword ptr [EDI + 0x10e1]
005676AF  51                        PUSH ECX
005676B0  C1 E0 04                  SHL EAX,0x4
005676B3  DB 80 88 97 7C 00         FILD dword ptr [EAX + 0x7c9788]
005676B9  D9 1C 24                  FSTP float ptr [ESP]
005676BC  DB 80 90 97 7C 00         FILD dword ptr [EAX + 0x7c9790]
005676C2  51                        PUSH ECX
005676C3  D9 1C 24                  FSTP float ptr [ESP]
005676C6  DB 43 04                  FILD dword ptr [EBX + 0x4]
005676C9  6A 00                     PUSH 0x0
005676CB  51                        PUSH ECX
005676CC  D9 1C 24                  FSTP float ptr [ESP]
005676CF  DB 03                     FILD dword ptr [EBX]
005676D1  51                        PUSH ECX
005676D2  D9 1C 24                  FSTP float ptr [ESP]
005676D5  56                        PUSH ESI
005676D6  E8 45 AB 15 00            CALL 0x006c2220
LAB_005676db:
005676DB  83 FE 0B                  CMP ESI,0xb
005676DE  7C 37                     JL 0x00567717
005676E0  83 FE 11                  CMP ESI,0x11
005676E3  7F 32                     JG 0x00567717
005676E5  8B 87 E1 10 00 00         MOV EAX,dword ptr [EDI + 0x10e1]
005676EB  51                        PUSH ECX
005676EC  C1 E0 04                  SHL EAX,0x4
005676EF  DB 80 8C 97 7C 00         FILD dword ptr [EAX + 0x7c978c]
005676F5  D9 1C 24                  FSTP float ptr [ESP]
005676F8  DB 80 90 97 7C 00         FILD dword ptr [EAX + 0x7c9790]
005676FE  51                        PUSH ECX
005676FF  D9 1C 24                  FSTP float ptr [ESP]
00567702  DB 43 04                  FILD dword ptr [EBX + 0x4]
00567705  6A 00                     PUSH 0x0
00567707  51                        PUSH ECX
00567708  D9 1C 24                  FSTP float ptr [ESP]
0056770B  DB 03                     FILD dword ptr [EBX]
0056770D  51                        PUSH ECX
0056770E  D9 1C 24                  FSTP float ptr [ESP]
00567711  56                        PUSH ESI
00567712  E8 09 AB 15 00            CALL 0x006c2220
LAB_00567717:
00567717  46                        INC ESI
00567718  83 C3 0C                  ADD EBX,0xc
0056771B  83 FE 20                  CMP ESI,0x20
0056771E  0F 8C 5B FF FF FF         JL 0x0056767f
LAB_00567724:
00567724  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00567727  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056772D  5F                        POP EDI
0056772E  5E                        POP ESI
0056772F  5B                        POP EBX
00567730  8B E5                     MOV ESP,EBP
00567732  5D                        POP EBP
00567733  C2 10 00                  RET 0x10
LAB_00567736:
00567736  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00567739  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056773E  5F                        POP EDI
0056773F  5E                        POP ESI
00567740  5B                        POP EBX
00567741  8B E5                     MOV ESP,EBP
00567743  5D                        POP EBP
00567744  C2 10 00                  RET 0x10
LAB_00567747:
00567747  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056774A  8B 81 D9 10 00 00         MOV EAX,dword ptr [ECX + 0x10d9]
00567750  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00567753  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00567756  3B C6                     CMP EAX,ESI
00567758  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0056775B  75 1C                     JNZ 0x00567779
0056775D  39 91 DD 10 00 00         CMP dword ptr [ECX + 0x10dd],EDX
00567763  75 14                     JNZ 0x00567779
00567765  39 81 E5 10 00 00         CMP dword ptr [ECX + 0x10e5],EAX
0056776B  75 0C                     JNZ 0x00567779
0056776D  39 B9 E1 10 00 00         CMP dword ptr [ECX + 0x10e1],EDI
00567773  0F 84 08 03 00 00         JZ 0x00567a81
LAB_00567779:
00567779  85 C0                     TEST EAX,EAX
0056777B  89 B1 D9 10 00 00         MOV dword ptr [ECX + 0x10d9],ESI
00567781  89 91 DD 10 00 00         MOV dword ptr [ECX + 0x10dd],EDX
00567787  89 81 E5 10 00 00         MOV dword ptr [ECX + 0x10e5],EAX
0056778D  89 B9 E1 10 00 00         MOV dword ptr [ECX + 0x10e1],EDI
00567793  74 0A                     JZ 0x0056779f
00567795  83 F8 02                  CMP EAX,0x2
00567798  74 05                     JZ 0x0056779f
0056779A  83 C8 FF                  OR EAX,0xffffffff
0056779D  EB 05                     JMP 0x005677a4
LAB_0056779f:
0056779F  B8 01 00 00 00            MOV EAX,0x1
LAB_005677a4:
005677A4  89 81 E9 10 00 00         MOV dword ptr [ECX + 0x10e9],EAX
005677AA  0F AF C6                  IMUL EAX,ESI
005677AD  2B D0                     SUB EDX,EAX
005677AF  8D 85 58 FF FF FF         LEA EAX,[EBP + 0xffffff58]
005677B5  89 91 ED 10 00 00         MOV dword ptr [ECX + 0x10ed],EDX
005677BB  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005677C1  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
005677C7  6A 00                     PUSH 0x0
005677C9  50                        PUSH EAX
005677CA  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
005677D0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005677D6  E8 15 60 1C 00            CALL 0x0072d7f0
005677DB  83 C4 08                  ADD ESP,0x8
005677DE  85 C0                     TEST EAX,EAX
005677E0  0F 85 8F 02 00 00         JNZ 0x00567a75
005677E6  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005677E9  BF 02 00 00 00            MOV EDI,0x2
005677EE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005677F1  8D 8E 23 0E 00 00         LEA ECX,[ESI + 0xe23]
005677F7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005677fa:
005677FA  8D 55 EC                  LEA EDX,[EBP + -0x14]
005677FD  6A 00                     PUSH 0x0
005677FF  52                        PUSH EDX
00567800  57                        PUSH EDI
00567801  E8 FA A6 15 00            CALL 0x006c1f00
00567806  83 7D EC 01               CMP dword ptr [EBP + -0x14],0x1
0056780A  0F 85 3A 02 00 00         JNZ 0x00567a4a
00567810  83 FF 04                  CMP EDI,0x4
00567813  7C 05                     JL 0x0056781a
00567815  83 FF 0A                  CMP EDI,0xa
00567818  7E 1C                     JLE 0x00567836
LAB_0056781a:
0056781A  83 FF 12                  CMP EDI,0x12
0056781D  7C 05                     JL 0x00567824
0056781F  83 FF 14                  CMP EDI,0x14
00567822  7E 12                     JLE 0x00567836
LAB_00567824:
00567824  83 FF 0B                  CMP EDI,0xb
00567827  0F 8C 1D 02 00 00         JL 0x00567a4a
0056782D  83 FF 11                  CMP EDI,0x11
00567830  0F 8F 14 02 00 00         JG 0x00567a4a
LAB_00567836:
00567836  8B 8E E1 10 00 00         MOV ECX,dword ptr [ESI + 0x10e1]
0056783C  A1 0E 73 80 00            MOV EAX,[0x0080730e]
00567841  C1 E1 04                  SHL ECX,0x4
00567844  05 A0 0F 00 00            ADD EAX,0xfa0
00567849  8B 91 94 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9794]
0056784F  0F AF D0                  IMUL EDX,EAX
00567852  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00567857  F7 EA                     IMUL EDX
00567859  C1 FA 05                  SAR EDX,0x5
0056785C  8B C2                     MOV EAX,EDX
0056785E  C1 E8 1F                  SHR EAX,0x1f
00567861  8D 94 02 60 F0 FF FF      LEA EDX,[EDX + EAX*0x1 + 0xfffff060]
00567868  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0056786B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0056786E  8B D0                     MOV EDX,EAX
00567870  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
00567873  8B 86 D9 10 00 00         MOV EAX,dword ptr [ESI + 0x10d9]
00567879  8B 12                     MOV EDX,dword ptr [EDX]
0056787B  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0056787E  2B C2                     SUB EAX,EDX
00567880  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00567883  99                        CDQ
00567884  8B F8                     MOV EDI,EAX
00567886  8B 86 DD 10 00 00         MOV EAX,dword ptr [ESI + 0x10dd]
0056788C  33 FA                     XOR EDI,EDX
0056788E  2B C3                     SUB EAX,EBX
00567890  2B FA                     SUB EDI,EDX
00567892  99                        CDQ
00567893  33 C2                     XOR EAX,EDX
00567895  2B C2                     SUB EAX,EDX
00567897  8D 57 01                  LEA EDX,[EDI + 0x1]
0056789A  3B F8                     CMP EDI,EAX
0056789C  7F 03                     JG 0x005678a1
0056789E  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_005678a1:
005678A1  89 96 F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EDX
005678A7  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
005678AD  3B D3                     CMP EDX,EBX
005678AF  7E 02                     JLE 0x005678b3
005678B1  8B D3                     MOV EDX,EBX
LAB_005678b3:
005678B3  3B 91 90 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c9790]
005678B9  7F 08                     JG 0x005678c3
005678BB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005678BE  E9 B5 00 00 00            JMP 0x00567978
LAB_005678c3:
005678C3  3B F8                     CMP EDI,EAX
005678C5  8D 57 01                  LEA EDX,[EDI + 0x1]
005678C8  7F 03                     JG 0x005678cd
005678CA  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_005678cd:
005678CD  89 96 F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EDX
005678D3  8B 99 88 97 7C 00         MOV EBX,dword ptr [ECX + 0x7c9788]
005678D9  3B D3                     CMP EDX,EBX
005678DB  7E 02                     JLE 0x005678df
005678DD  8B D3                     MOV EDX,EBX
LAB_005678df:
005678DF  3B 91 8C 97 7C 00         CMP EDX,dword ptr [ECX + 0x7c978c]
005678E5  7F 79                     JG 0x00567960
005678E7  3B F8                     CMP EDI,EAX
005678E9  7E 05                     JLE 0x005678f0
005678EB  8D 47 01                  LEA EAX,[EDI + 0x1]
005678EE  EB 01                     JMP 0x005678f1
LAB_005678f0:
005678F0  40                        INC EAX
LAB_005678f1:
005678F1  89 86 F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EAX
005678F7  8B 91 88 97 7C 00         MOV EDX,dword ptr [ECX + 0x7c9788]
005678FD  3B C2                     CMP EAX,EDX
005678FF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00567902  7F 03                     JG 0x00567907
00567904  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00567907:
00567907  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0056790A  BA A0 0F 00 00            MOV EDX,0xfa0
0056790F  2B D3                     SUB EDX,EBX
00567911  B8 56 55 55 55            MOV EAX,0x55555556
00567916  D1 E2                     SHL EDX,0x1
00567918  F7 EA                     IMUL EDX
0056791A  8B C2                     MOV EAX,EDX
0056791C  8B B9 8C 97 7C 00         MOV EDI,dword ptr [ECX + 0x7c978c]
00567922  C1 E8 1F                  SHR EAX,0x1f
00567925  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00567928  8B C2                     MOV EAX,EDX
0056792A  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0056792D  03 C2                     ADD EAX,EDX
0056792F  8B D7                     MOV EDX,EDI
00567931  03 C3                     ADD EAX,EBX
00567933  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00567936  2B D3                     SUB EDX,EBX
00567938  0F AF C2                  IMUL EAX,EDX
0056793B  2B B9 90 97 7C 00         SUB EDI,dword ptr [ECX + 0x7c9790]
00567941  99                        CDQ
00567942  F7 FF                     IDIV EDI
00567944  8B F8                     MOV EDI,EAX
00567946  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00567949  8D 8C 00 C0 E0 FF FF      LEA ECX,[EAX + EAX*0x1 + 0xffffe0c0]
00567950  B8 56 55 55 55            MOV EAX,0x55555556
00567955  F7 E9                     IMUL ECX
00567957  8B C2                     MOV EAX,EDX
00567959  C1 E8 1F                  SHR EAX,0x1f
0056795C  03 D7                     ADD EDX,EDI
0056795E  EB 16                     JMP 0x00567976
LAB_00567960:
00567960  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00567963  B8 56 55 55 55            MOV EAX,0x55555556
00567968  8D 8C 09 C0 E0 FF FF      LEA ECX,[ECX + ECX*0x1 + 0xffffe0c0]
0056796F  F7 E9                     IMUL ECX
00567971  8B C2                     MOV EAX,EDX
00567973  C1 EA 1F                  SHR EDX,0x1f
LAB_00567976:
00567976  03 C2                     ADD EAX,EDX
LAB_00567978:
00567978  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056797B  50                        PUSH EAX
0056797C  57                        PUSH EDI
0056797D  E8 5E A3 15 00            CALL 0x006c1ce0
00567982  8B 86 E9 10 00 00         MOV EAX,dword ptr [ESI + 0x10e9]
00567988  8B 8E ED 10 00 00         MOV ECX,dword ptr [ESI + 0x10ed]
0056798E  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
00567992  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00567995  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
00567998  8B C3                     MOV EAX,EBX
0056799A  2B C2                     SUB EAX,EDX
0056799C  99                        CDQ
0056799D  33 C2                     XOR EAX,EDX
0056799F  2B C2                     SUB EAX,EDX
005679A1  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005679A8  2B C8                     SUB ECX,EAX
005679AA  B8 67 66 66 66            MOV EAX,0x66666667
005679AF  F7 E9                     IMUL ECX
005679B1  8B 8E E1 10 00 00         MOV ECX,dword ptr [ESI + 0x10e1]
005679B7  C1 FA 02                  SAR EDX,0x2
005679BA  8B C2                     MOV EAX,EDX
005679BC  C1 E8 1F                  SHR EAX,0x1f
005679BF  03 D0                     ADD EDX,EAX
005679C1  C1 E1 04                  SHL ECX,0x4
005679C4  89 96 F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EDX
005679CA  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
005679D0  3B D0                     CMP EDX,EAX
005679D2  7F 02                     JG 0x005679d6
005679D4  8B C2                     MOV EAX,EDX
LAB_005679d6:
005679D6  3B 81 90 97 7C 00         CMP EAX,dword ptr [ECX + 0x7c9790]
005679DC  7D 28                     JGE 0x00567a06
005679DE  89 96 F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EDX
005679E4  8B 81 88 97 7C 00         MOV EAX,dword ptr [ECX + 0x7c9788]
005679EA  3B D0                     CMP EDX,EAX
005679EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005679EF  7F 03                     JG 0x005679f4
005679F1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_005679f4:
005679F4  B8 E8 03 00 00            MOV EAX,0x3e8
005679F9  99                        CDQ
005679FA  F7 B9 90 97 7C 00         IDIV dword ptr [ECX + 0x7c9790]
00567A00  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
00567A04  EB 05                     JMP 0x00567a0b
LAB_00567a06:
00567A06  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_00567a0b:
00567A0B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00567A0E  89 9E F1 10 00 00         MOV dword ptr [ESI + 0x10f1],EBX
00567A14  3B DA                     CMP EBX,EDX
00567A16  75 04                     JNZ 0x00567a1c
00567A18  33 C9                     XOR ECX,ECX
00567A1A  EB 24                     JMP 0x00567a40
LAB_00567a1c:
00567A1C  8B 8E E5 10 00 00         MOV ECX,dword ptr [ESI + 0x10e5]
00567A22  85 C9                     TEST ECX,ECX
00567A24  74 0E                     JZ 0x00567a34
00567A26  83 F9 03                  CMP ECX,0x3
00567A29  74 09                     JZ 0x00567a34
00567A2B  33 C9                     XOR ECX,ECX
00567A2D  3B D3                     CMP EDX,EBX
00567A2F  0F 9E C1                  SETLE CL
00567A32  EB 07                     JMP 0x00567a3b
LAB_00567a34:
00567A34  33 C9                     XOR ECX,ECX
00567A36  3B D3                     CMP EDX,EBX
00567A38  0F 9D C1                  SETGE CL
LAB_00567a3b:
00567A3B  49                        DEC ECX
00567A3C  83 E1 02                  AND ECX,0x2
00567A3F  49                        DEC ECX
LAB_00567a40:
00567A40  0F AF C8                  IMUL ECX,EAX
00567A43  51                        PUSH ECX
00567A44  57                        PUSH EDI
00567A45  E8 36 A3 15 00            CALL 0x006c1d80
LAB_00567a4a:
00567A4A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00567A4D  47                        INC EDI
00567A4E  83 C1 0C                  ADD ECX,0xc
00567A51  83 FF 20                  CMP EDI,0x20
00567A54  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00567A57  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00567A5A  0F 8C 9A FD FF FF         JL 0x005677fa
00567A60  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00567A66  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00567A6C  5F                        POP EDI
00567A6D  5E                        POP ESI
00567A6E  5B                        POP EBX
00567A6F  8B E5                     MOV ESP,EBP
00567A71  5D                        POP EBP
00567A72  C2 10 00                  RET 0x10
LAB_00567a75:
00567A75  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00567A7B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00567a81:
00567A81  5F                        POP EDI
00567A82  5E                        POP ESI
00567A83  5B                        POP EBX
00567A84  8B E5                     MOV ESP,EBP
00567A86  5D                        POP EBP
00567A87  C2 10 00                  RET 0x10
