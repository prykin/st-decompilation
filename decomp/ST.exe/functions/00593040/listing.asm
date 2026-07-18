FUN_00593040:
00593040  55                        PUSH EBP
00593041  8B EC                     MOV EBP,ESP
00593043  83 EC 50                  SUB ESP,0x50
00593046  53                        PUSH EBX
00593047  56                        PUSH ESI
00593048  8B F1                     MOV ESI,ECX
0059304A  57                        PUSH EDI
0059304B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0059304E  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00593051  E8 5A 21 15 00            CALL 0x006e51b0
00593056  33 FF                     XOR EDI,EDI
00593058  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
0059305B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00593060  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00593063  8D 4D B0                  LEA ECX,[EBP + -0x50]
00593066  57                        PUSH EDI
00593067  52                        PUSH EDX
00593068  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0059306B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00593071  E8 7A A7 19 00            CALL 0x0072d7f0
00593076  8B F0                     MOV ESI,EAX
00593078  83 C4 08                  ADD ESP,0x8
0059307B  3B F7                     CMP ESI,EDI
0059307D  0F 85 5D 05 00 00         JNZ 0x005935e0
00593083  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00593086  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00593089  56                        PUSH ESI
0059308A  8B CB                     MOV ECX,EBX
0059308C  E8 D2 F4 E6 FF            CALL 0x00402563
00593091  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00593094  3D 40 69 00 00            CMP EAX,0x6940
00593099  0F 87 F8 00 00 00         JA 0x00593197
0059309F  0F 84 E6 00 00 00         JZ 0x0059318b
005930A5  83 F8 05                  CMP EAX,0x5
005930A8  77 49                     JA 0x005930f3
005930AA  74 3B                     JZ 0x005930e7
005930AC  2B C7                     SUB EAX,EDI
005930AE  74 2B                     JZ 0x005930db
005930B0  83 E8 02                  SUB EAX,0x2
005930B3  74 13                     JZ 0x005930c8
005930B5  48                        DEC EAX
005930B6  0F 85 01 03 00 00         JNZ 0x005933bd
005930BC  8B CB                     MOV ECX,EBX
005930BE  E8 67 14 E7 FF            CALL 0x0040452a
005930C3  E9 F5 02 00 00            JMP 0x005933bd
LAB_005930c8:
005930C8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005930CB  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005930CE  51                        PUSH ECX
005930CF  8B CB                     MOV ECX,EBX
005930D1  E8 03 E3 E6 FF            CALL 0x004013d9
005930D6  E9 E2 02 00 00            JMP 0x005933bd
LAB_005930db:
005930DB  8B CB                     MOV ECX,EBX
005930DD  E8 57 14 E7 FF            CALL 0x00404539
005930E2  E9 D6 02 00 00            JMP 0x005933bd
LAB_005930e7:
005930E7  8B CB                     MOV ECX,EBX
005930E9  E8 71 E9 E6 FF            CALL 0x00401a5f
005930EE  E9 CA 02 00 00            JMP 0x005933bd
LAB_005930f3:
005930F3  2D FF 68 00 00            SUB EAX,0x68ff
005930F8  74 15                     JZ 0x0059310f
005930FA  83 E8 40                  SUB EAX,0x40
005930FD  0F 85 BA 02 00 00         JNZ 0x005933bd
00593103  8B CB                     MOV ECX,EBX
00593105  E8 D7 1B E7 FF            CALL 0x00404ce1
0059310A  E9 AE 02 00 00            JMP 0x005933bd
LAB_0059310f:
0059310F  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00593112  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00593118  8A 02                     MOV AL,byte ptr [EDX]
0059311A  A2 4E 87 80 00            MOV [0x0080874e],AL
0059311F  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
00593122  3B C7                     CMP EAX,EDI
00593124  75 53                     JNZ 0x00593179
00593126  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
0059312C  A1 30 67 80 00            MOV EAX,[0x00806730]
00593131  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00593137  52                        PUSH EDX
00593138  50                        PUSH EAX
00593139  57                        PUSH EDI
0059313A  57                        PUSH EDI
0059313B  51                        PUSH ECX
0059313C  E8 3F 2E 12 00            CALL 0x006b5f80
00593141  33 D2                     XOR EDX,EDX
00593143  57                        PUSH EDI
00593144  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0059314A  57                        PUSH EDI
0059314B  52                        PUSH EDX
0059314C  6A 01                     PUSH 0x1
0059314E  68 10 BE 7C 00            PUSH 0x7cbe10
00593153  E8 A8 FA 15 00            CALL 0x006f2c00
00593158  83 C4 0C                  ADD ESP,0xc
0059315B  50                        PUSH EAX
0059315C  A1 80 67 80 00            MOV EAX,[0x00806780]
00593161  50                        PUSH EAX
00593162  E8 89 78 17 00            CALL 0x0070a9f0
00593167  50                        PUSH EAX
00593168  6A 01                     PUSH 0x1
0059316A  6A 37                     PUSH 0x37
0059316C  68 A5 00 00 00            PUSH 0xa5
00593171  E8 C2 05 E7 FF            CALL 0x00403738
00593176  83 C4 20                  ADD ESP,0x20
LAB_00593179:
00593179  6A FF                     PUSH -0x1
0059317B  6A 01                     PUSH 0x1
0059317D  6A 04                     PUSH 0x4
0059317F  8B CB                     MOV ECX,EBX
00593181  E8 6B 1A E7 FF            CALL 0x00404bf1
00593186  E9 32 02 00 00            JMP 0x005933bd
LAB_0059318b:
0059318B  8B CB                     MOV ECX,EBX
0059318D  E8 2E 28 E7 FF            CALL 0x004059c0
00593192  E9 26 02 00 00            JMP 0x005933bd
LAB_00593197:
00593197  05 BE 96 FF FF            ADD EAX,0xffff96be
0059319C  83 F8 3D                  CMP EAX,0x3d
0059319F  0F 87 18 02 00 00         JA 0x005933bd
005931A5  33 C9                     XOR ECX,ECX
005931A7  8A 88 48 36 59 00         MOV CL,byte ptr [EAX + 0x593648]
switchD_005931ad::switchD:
005931AD  FF 24 8D 2C 36 59 00      JMP dword ptr [ECX*0x4 + 0x59362c]
switchD_005931ad::caseD_697f:
005931B4  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
005931B7  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005931BA  8B 07                     MOV EAX,dword ptr [EDI]
005931BC  83 F8 01                  CMP EAX,0x1
005931BF  75 07                     JNZ 0x005931c8
005931C1  B8 02 00 00 00            MOV EAX,0x2
005931C6  EB 0D                     JMP 0x005931d5
LAB_005931c8:
005931C8  33 D2                     XOR EDX,EDX
005931CA  83 F8 02                  CMP EAX,0x2
005931CD  0F 95 C2                  SETNZ DL
005931D0  83 C2 03                  ADD EDX,0x3
005931D3  8B C2                     MOV EAX,EDX
LAB_005931d5:
005931D5  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
005931D8  83 F9 03                  CMP ECX,0x3
005931DB  77 47                     JA 0x00593224
switchD_005931dd::switchD:
005931DD  FF 24 8D 88 36 59 00      JMP dword ptr [ECX*0x4 + 0x593688]
switchD_005931dd::caseD_0:
005931E4  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005931EB  2B C8                     SUB ECX,EAX
005931ED  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005931F0  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
005931F3  8D 14 4B                  LEA EDX,[EBX + ECX*0x2]
005931F6  03 CA                     ADD ECX,EDX
005931F8  8B 91 EF 00 00 00         MOV EDX,dword ptr [ECX + 0xef]
005931FE  4A                        DEC EDX
005931FF  EB 1D                     JMP 0x0059321e
switchD_005931dd::caseD_1:
00593201  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00593208  2B C8                     SUB ECX,EAX
0059320A  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0059320D  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
00593210  8D 14 4B                  LEA EDX,[EBX + ECX*0x2]
00593213  03 CA                     ADD ECX,EDX
00593215  8B 91 EF 00 00 00         MOV EDX,dword ptr [ECX + 0xef]
0059321B  83 EA 02                  SUB EDX,0x2
LAB_0059321e:
0059321E  89 91 EB 00 00 00         MOV dword ptr [ECX + 0xeb],EDX
switchD_005931dd::default:
00593224  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
0059322B  2B C8                     SUB ECX,EAX
0059322D  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00593230  8D 34 C8                  LEA ESI,[EAX + ECX*0x8]
00593233  8D 14 73                  LEA EDX,[EBX + ESI*0x2]
00593236  03 F2                     ADD ESI,EDX
00593238  8B 86 E7 00 00 00         MOV EAX,dword ptr [ESI + 0xe7]
0059323E  83 F8 FF                  CMP EAX,-0x1
00593241  74 22                     JZ 0x00593265
00593243  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
00593249  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
0059324F  51                        PUSH ECX
00593250  8B 8E EB 00 00 00         MOV ECX,dword ptr [ESI + 0xeb]
00593256  52                        PUSH EDX
00593257  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
0059325D  51                        PUSH ECX
0059325E  50                        PUSH EAX
0059325F  52                        PUSH EDX
00593260  E8 CB 04 12 00            CALL 0x006b3730
LAB_00593265:
00593265  8A 86 E2 00 00 00         MOV AL,byte ptr [ESI + 0xe2]
0059326B  84 C0                     TEST AL,AL
0059326D  0F 84 8A 00 00 00         JZ 0x005932fd
00593273  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00593276  83 F8 03                  CMP EAX,0x3
00593279  77 55                     JA 0x005932d0
switchD_0059327b::switchD:
0059327B  FF 24 85 98 36 59 00      JMP dword ptr [EAX*0x4 + 0x593698]
switchD_0059327b::caseD_0:
00593282  8B 86 FF 00 00 00         MOV EAX,dword ptr [ESI + 0xff]
00593288  8B 8E AB 00 00 00         MOV ECX,dword ptr [ESI + 0xab]
0059328E  03 C1                     ADD EAX,ECX
00593290  89 86 21 02 00 00         MOV dword ptr [ESI + 0x221],EAX
00593296  8B 8E 03 01 00 00         MOV ECX,dword ptr [ESI + 0x103]
0059329C  03 8E AF 00 00 00         ADD ECX,dword ptr [ESI + 0xaf]
005932A2  89 8E 25 02 00 00         MOV dword ptr [ESI + 0x225],ECX
005932A8  EB 26                     JMP 0x005932d0
switchD_0059327b::caseD_1:
005932AA  8B 96 FF 00 00 00         MOV EDX,dword ptr [ESI + 0xff]
005932B0  8B BE B3 00 00 00         MOV EDI,dword ptr [ESI + 0xb3]
005932B6  03 D7                     ADD EDX,EDI
005932B8  89 96 21 02 00 00         MOV dword ptr [ESI + 0x221],EDX
005932BE  8B 86 03 01 00 00         MOV EAX,dword ptr [ESI + 0x103]
005932C4  03 86 B7 00 00 00         ADD EAX,dword ptr [ESI + 0xb7]
005932CA  89 86 25 02 00 00         MOV dword ptr [ESI + 0x225],EAX
switchD_0059327b::default:
005932D0  8B 86 09 02 00 00         MOV EAX,dword ptr [ESI + 0x209]
005932D6  83 F8 FF                  CMP EAX,-0x1
005932D9  74 22                     JZ 0x005932fd
005932DB  8B 8E 25 02 00 00         MOV ECX,dword ptr [ESI + 0x225]
005932E1  8B 96 21 02 00 00         MOV EDX,dword ptr [ESI + 0x221]
005932E7  51                        PUSH ECX
005932E8  8B 8E 0D 02 00 00         MOV ECX,dword ptr [ESI + 0x20d]
005932EE  52                        PUSH EDX
005932EF  8B 96 4D 02 00 00         MOV EDX,dword ptr [ESI + 0x24d]
005932F5  51                        PUSH ECX
005932F6  50                        PUSH EAX
005932F7  52                        PUSH EDX
005932F8  E8 33 04 12 00            CALL 0x006b3730
LAB_005932fd:
005932FD  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00593303  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00593306  8B BE 90 01 00 00         MOV EDI,dword ptr [ESI + 0x190]
0059330C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0059330F  8B 02                     MOV EAX,dword ptr [EDX]
00593311  83 E8 02                  SUB EAX,0x2
00593314  74 13                     JZ 0x00593329
00593316  48                        DEC EAX
00593317  74 07                     JZ 0x00593320
00593319  B8 02 00 00 00            MOV EAX,0x2
0059331E  EB 0B                     JMP 0x0059332b
LAB_00593320:
00593320  33 C0                     XOR EAX,EAX
00593322  B9 FD FF FF FF            MOV ECX,0xfffffffd
00593327  EB 07                     JMP 0x00593330
LAB_00593329:
00593329  33 C0                     XOR EAX,EAX
LAB_0059332b:
0059332B  B9 FE FF FF FF            MOV ECX,0xfffffffe
LAB_00593330:
00593330  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00593333  83 FA 03                  CMP EDX,0x3
00593336  77 46                     JA 0x0059337e
switchD_00593338::switchD:
00593338  FF 24 95 A8 36 59 00      JMP dword ptr [EDX*0x4 + 0x5936a8]
switchD_00593338::caseD_2:
0059333F  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
00593345  49                        DEC ECX
00593346  EB 30                     JMP 0x00593378
switchD_00593338::caseD_0:
00593348  8B 96 80 01 00 00         MOV EDX,dword ptr [ESI + 0x180]
0059334E  83 EA 03                  SUB EDX,0x3
00593351  89 96 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EDX
00593357  EB 25                     JMP 0x0059337e
switchD_00593338::caseD_1:
00593359  03 C7                     ADD EAX,EDI
0059335B  89 86 90 01 00 00         MOV dword ptr [ESI + 0x190],EAX
00593361  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00593367  03 C1                     ADD EAX,ECX
00593369  89 86 94 01 00 00         MOV dword ptr [ESI + 0x194],EAX
switchD_00593338::caseD_3:
0059336F  8B 8E 80 01 00 00         MOV ECX,dword ptr [ESI + 0x180]
00593375  83 E9 02                  SUB ECX,0x2
LAB_00593378:
00593378  89 8E 7C 01 00 00         MOV dword ptr [ESI + 0x17c],ECX
switchD_00593338::default:
0059337E  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
00593384  83 F8 FF                  CMP EAX,-0x1
00593387  74 22                     JZ 0x005933ab
00593389  8B 96 94 01 00 00         MOV EDX,dword ptr [ESI + 0x194]
0059338F  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
00593395  52                        PUSH EDX
00593396  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
0059339C  51                        PUSH ECX
0059339D  52                        PUSH EDX
0059339E  50                        PUSH EAX
0059339F  8B 86 BC 01 00 00         MOV EAX,dword ptr [ESI + 0x1bc]
005933A5  50                        PUSH EAX
005933A6  E8 85 03 12 00            CALL 0x006b3730
LAB_005933ab:
005933AB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005933AE  89 BE 90 01 00 00         MOV dword ptr [ESI + 0x190],EDI
005933B4  89 8E 94 01 00 00         MOV dword ptr [ESI + 0x194],ECX
LAB_005933ba:
005933BA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
switchD_005931ad::caseD_6944:
005933BD  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005933C0  56                        PUSH ESI
005933C1  8B CB                     MOV ECX,EBX
005933C3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005933C8  E8 B3 DE E6 FF            CALL 0x00401280
005933CD  5F                        POP EDI
005933CE  5E                        POP ESI
005933CF  5B                        POP EBX
005933D0  8B E5                     MOV ESP,EBP
005933D2  5D                        POP EBP
005933D3  C2 04 00                  RET 0x4
switchD_005931ad::caseD_694a:
005933D6  8B 15 D1 7D 80 00         MOV EDX,dword ptr [0x00807dd1]
005933DC  A0 4E 87 80 00            MOV AL,[0x0080874e]
005933E1  81 E2 00 00 FF FF         AND EDX,0xffff0000
005933E7  81 FA 00 00 DD D0         CMP EDX,0xd0dd0000
005933ED  75 26                     JNZ 0x00593415
005933EF  3C 03                     CMP AL,0x3
005933F1  75 22                     JNZ 0x00593415
005933F3  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005933F9  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005933FF  3B CF                     CMP ECX,EDI
00593401  74 12                     JZ 0x00593415
00593403  57                        PUSH EDI
00593404  57                        PUSH EDI
00593405  57                        PUSH EDI
00593406  57                        PUSH EDI
00593407  57                        PUSH EDI
00593408  57                        PUSH EDI
00593409  68 30 25 00 00            PUSH 0x2530
0059340E  E8 95 0B E7 FF            CALL 0x00403fa8
00593413  EB A8                     JMP 0x005933bd
LAB_00593415:
00593415  8B 8B FC 1F 00 00         MOV ECX,dword ptr [EBX + 0x1ffc]
0059341B  8B 35 F0 BF 79 00         MOV ESI,dword ptr [0x0079bff0]
00593421  3B CF                     CMP ECX,EDI
00593423  75 06                     JNZ 0x0059342b
00593425  8B 35 EC BF 79 00         MOV ESI,dword ptr [0x0079bfec]
LAB_0059342b:
0059342B  33 D2                     XOR EDX,EDX
0059342D  8A D0                     MOV DL,AL
0059342F  A1 E8 BF 79 00            MOV EAX,[0x0079bfe8]
00593434  52                        PUSH EDX
00593435  56                        PUSH ESI
00593436  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
0059343C  50                        PUSH EAX
0059343D  68 80 76 80 00            PUSH 0x807680
00593442  68 DC BE 7C 00            PUSH 0x7cbedc
00593447  68 16 ED 80 00            PUSH 0x80ed16
0059344C  FF D6                     CALL ESI
0059344E  8B 83 FC 1F 00 00         MOV EAX,dword ptr [EBX + 0x1ffc]
00593454  83 C4 18                  ADD ESP,0x18
00593457  3B C7                     CMP EAX,EDI
00593459  A1 F0 BF 79 00            MOV EAX,[0x0079bff0]
0059345E  75 05                     JNZ 0x00593465
00593460  A1 EC BF 79 00            MOV EAX,[0x0079bfec]
LAB_00593465:
00593465  8B 15 E8 BF 79 00         MOV EDX,dword ptr [0x0079bfe8]
0059346B  33 C9                     XOR ECX,ECX
0059346D  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00593473  51                        PUSH ECX
00593474  50                        PUSH EAX
00593475  52                        PUSH EDX
00593476  68 D0 BE 7C 00            PUSH 0x7cbed0
0059347B  68 1E EF 80 00            PUSH 0x80ef1e
00593480  FF D6                     CALL ESI
00593482  BF 16 ED 80 00            MOV EDI,0x80ed16
00593487  83 C9 FF                  OR ECX,0xffffffff
0059348A  33 C0                     XOR EAX,EAX
0059348C  83 C4 14                  ADD ESP,0x14
0059348F  F2 AE                     SCASB.REPNE ES:EDI
00593491  F7 D1                     NOT ECX
00593493  2B F9                     SUB EDI,ECX
00593495  6A 01                     PUSH 0x1
00593497  8B C1                     MOV EAX,ECX
00593499  8B F7                     MOV ESI,EDI
0059349B  BF 1A EE 80 00            MOV EDI,0x80ee1a
005934A0  C1 E9 02                  SHR ECX,0x2
005934A3  F3 A5                     MOVSD.REP ES:EDI,ESI
005934A5  8B C8                     MOV ECX,EAX
005934A7  83 E1 03                  AND ECX,0x3
005934AA  F3 A4                     MOVSB.REP ES:EDI,ESI
005934AC  B9 20 76 80 00            MOV ECX,0x807620
005934B1  C6 05 A0 87 80 00 08      MOV byte ptr [0x008087a0],0x8
005934B8  E8 8F 16 E7 FF            CALL 0x00404b4c
005934BD  85 C0                     TEST EAX,EAX
005934BF  0F 84 F5 FE FF FF         JZ 0x005933ba
005934C5  B9 FC 09 00 00            MOV ECX,0x9fc
005934CA  33 C0                     XOR EAX,EAX
005934CC  BF 22 C5 80 00            MOV EDI,0x80c522
005934D1  50                        PUSH EAX
005934D2  F3 AB                     STOSD.REP ES:EDI
005934D4  8B 8B FC 1F 00 00         MOV ECX,dword ptr [EBX + 0x1ffc]
005934DA  50                        PUSH EAX
005934DB  F7 D9                     NEG ECX
005934DD  1B C9                     SBB ECX,ECX
005934DF  83 E1 08                  AND ECX,0x8
005934E2  81 C1 48 69 00 00         ADD ECX,0x6948
005934E8  51                        PUSH ECX
005934E9  8B CB                     MOV ECX,EBX
005934EB  E8 D0 01 E7 FF            CALL 0x004036c0
005934F0  8B 13                     MOV EDX,dword ptr [EBX]
005934F2  8B CB                     MOV ECX,EBX
005934F4  FF 52 08                  CALL dword ptr [EDX + 0x8]
005934F7  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005934FD  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
00593503  85 C9                     TEST ECX,ECX
00593505  0F 84 AF FE FF FF         JZ 0x005933ba
0059350B  6A 01                     PUSH 0x1
0059350D  6A 00                     PUSH 0x0
0059350F  6A 01                     PUSH 0x1
00593511  E8 8F EA E6 FF            CALL 0x00401fa5
00593516  E9 9F FE FF FF            JMP 0x005933ba
switchD_005931ad::caseD_6943:
0059351B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0059351E  57                        PUSH EDI
0059351F  51                        PUSH ECX
00593520  68 42 69 00 00            PUSH 0x6942
00593525  8B CB                     MOV ECX,EBX
00593527  E8 94 01 E7 FF            CALL 0x004036c0
0059352C  8B 13                     MOV EDX,dword ptr [EBX]
0059352E  8B CB                     MOV ECX,EBX
00593530  FF 52 08                  CALL dword ptr [EDX + 0x8]
00593533  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
00593539  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
0059353F  3B CF                     CMP ECX,EDI
00593541  0F 84 76 FE FF FF         JZ 0x005933bd
00593547  6A 01                     PUSH 0x1
00593549  57                        PUSH EDI
0059354A  6A 01                     PUSH 0x1
0059354C  E8 54 EA E6 FF            CALL 0x00401fa5
00593551  E9 67 FE FF FF            JMP 0x005933bd
switchD_005931ad::caseD_6942:
00593556  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
0059355D  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
00593560  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
00593567  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0059356A  89 4B 51                  MOV dword ptr [EBX + 0x51],ECX
0059356D  8B CB                     MOV ECX,EBX
0059356F  E8 44 18 E7 FF            CALL 0x00404db8
00593574  E9 44 FE FF FF            JMP 0x005933bd
switchD_005931ad::caseD_6948:
00593579  33 D2                     XOR EDX,EDX
0059357B  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00593581  52                        PUSH EDX
00593582  68 84 77 80 00            PUSH 0x807784
00593587  68 BC BE 7C 00            PUSH 0x7cbebc
0059358C  68 2A F2 80 00            PUSH 0x80f22a
00593591  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00593597  B8 01 00 00 00            MOV EAX,0x1
0059359C  83 C4 10                  ADD ESP,0x10
0059359F  8B CB                     MOV ECX,EBX
005935A1  89 43 49                  MOV dword ptr [EBX + 0x49],EAX
005935A4  C7 43 4D 01 71 00 00      MOV dword ptr [EBX + 0x4d],0x7101
005935AB  C7 43 51 03 00 00 00      MOV dword ptr [EBX + 0x51],0x3
005935B2  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
005935B5  E8 FE 17 E7 FF            CALL 0x00404db8
005935BA  E9 FE FD FF FF            JMP 0x005933bd
switchD_005931ad::caseD_6950:
005935BF  B8 01 00 00 00            MOV EAX,0x1
005935C4  8B CB                     MOV ECX,EBX
005935C6  89 43 49                  MOV dword ptr [EBX + 0x49],EAX
005935C9  C7 43 4D 04 61 00 00      MOV dword ptr [EBX + 0x4d],0x6104
005935D0  89 7B 51                  MOV dword ptr [EBX + 0x51],EDI
005935D3  89 43 55                  MOV dword ptr [EBX + 0x55],EAX
005935D6  E8 DD 17 E7 FF            CALL 0x00404db8
005935DB  E9 DD FD FF FF            JMP 0x005933bd
LAB_005935e0:
005935E0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005935E3  68 A0 BE 7C 00            PUSH 0x7cbea0
005935E8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005935ED  56                        PUSH ESI
005935EE  57                        PUSH EDI
005935EF  68 4F 02 00 00            PUSH 0x24f
005935F4  68 D4 BC 7C 00            PUSH 0x7cbcd4
005935F9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005935FF  E8 CC 9E 11 00            CALL 0x006ad4d0
00593604  83 C4 18                  ADD ESP,0x18
00593607  85 C0                     TEST EAX,EAX
00593609  74 01                     JZ 0x0059360c
0059360B  CC                        INT3
LAB_0059360c:
0059360C  68 4F 02 00 00            PUSH 0x24f
00593611  68 D4 BC 7C 00            PUSH 0x7cbcd4
00593616  57                        PUSH EDI
00593617  56                        PUSH ESI
00593618  E8 23 28 11 00            CALL 0x006a5e40
0059361D  5F                        POP EDI
0059361E  5E                        POP ESI
0059361F  B8 FF FF 00 00            MOV EAX,0xffff
00593624  5B                        POP EBX
00593625  8B E5                     MOV ESP,EBP
00593627  5D                        POP EBP
00593628  C2 04 00                  RET 0x4
