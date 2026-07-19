CPanelTy::PaintCtrlObj:
005061C0  55                        PUSH EBP
005061C1  8B EC                     MOV EBP,ESP
005061C3  83 EC 60                  SUB ESP,0x60
005061C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005061CB  53                        PUSH EBX
005061CC  56                        PUSH ESI
005061CD  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005061D0  57                        PUSH EDI
005061D1  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005061D4  8D 4D A0                  LEA ECX,[EBP + -0x60]
005061D7  6A 00                     PUSH 0x0
005061D9  52                        PUSH EDX
005061DA  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005061DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005061E3  E8 08 76 22 00            CALL 0x0072d7f0
005061E8  8B F0                     MOV ESI,EAX
005061EA  83 C4 08                  ADD ESP,0x8
005061ED  85 F6                     TEST ESI,ESI
005061EF  0F 85 D6 15 00 00         JNZ 0x005077cb
005061F5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005061F8  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005061FB  85 C0                     TEST EAX,EAX
005061FD  0F 84 40 01 00 00         JZ 0x00506343
00506203  33 C0                     XOR EAX,EAX
00506205  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
0050620B  83 F8 04                  CMP EAX,0x4
0050620E  0F 87 2F 01 00 00         JA 0x00506343
switchD_00506214::switchD:
00506214  FF 24 85 14 78 50 00      JMP dword ptr [EAX*0x4 + 0x507814]
switchD_00506214::caseD_0:
0050621B  8B 83 D9 09 00 00         MOV EAX,dword ptr [EBX + 0x9d9]
00506221  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506227  50                        PUSH EAX
00506228  6A 01                     PUSH 0x1
0050622A  6A 00                     PUSH 0x0
0050622C  6A 00                     PUSH 0x0
0050622E  51                        PUSH ECX
0050622F  E9 07 01 00 00            JMP 0x0050633b
switchD_00506214::caseD_1:
00506234  80 BB FB 0B 00 00 02      CMP byte ptr [EBX + 0xbfb],0x2
0050623B  75 19                     JNZ 0x00506256
0050623D  8B 93 DD 09 00 00         MOV EDX,dword ptr [EBX + 0x9dd]
00506243  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506249  52                        PUSH EDX
0050624A  6A 01                     PUSH 0x1
0050624C  6A 00                     PUSH 0x0
0050624E  6A 00                     PUSH 0x0
00506250  50                        PUSH EAX
00506251  E9 E5 00 00 00            JMP 0x0050633b
LAB_00506256:
00506256  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050625C  83 C0 CE                  ADD EAX,-0x32
0050625F  83 F8 3D                  CMP EAX,0x3d
00506262  0F 87 83 00 00 00         JA 0x005062eb
00506268  33 C9                     XOR ECX,ECX
0050626A  8A 88 3C 78 50 00         MOV CL,byte ptr [EAX + 0x50783c]
switchD_00506270::switchD:
00506270  FF 24 8D 28 78 50 00      JMP dword ptr [ECX*0x4 + 0x507828]
switchD_00506270::caseD_34:
00506277  8B 93 DD 09 00 00         MOV EDX,dword ptr [EBX + 0x9dd]
0050627D  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506283  52                        PUSH EDX
00506284  6A 01                     PUSH 0x1
00506286  6A 00                     PUSH 0x0
00506288  6A 00                     PUSH 0x0
0050628A  50                        PUSH EAX
0050628B  EB 56                     JMP 0x005062e3
switchD_00506270::caseD_33:
0050628D  8B 8B E1 09 00 00         MOV ECX,dword ptr [EBX + 0x9e1]
00506293  EB 40                     JMP 0x005062d5
switchD_00506270::caseD_36:
00506295  33 C0                     XOR EAX,EAX
00506297  8A 83 F9 0B 00 00         MOV AL,byte ptr [EBX + 0xbf9]
0050629D  48                        DEC EAX
0050629E  74 19                     JZ 0x005062b9
005062A0  48                        DEC EAX
005062A1  75 48                     JNZ 0x005062eb
005062A3  8B 83 E1 09 00 00         MOV EAX,dword ptr [EBX + 0x9e1]
005062A9  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
005062AF  50                        PUSH EAX
005062B0  6A 01                     PUSH 0x1
005062B2  6A 00                     PUSH 0x0
005062B4  6A 00                     PUSH 0x0
005062B6  51                        PUSH ECX
005062B7  EB 2A                     JMP 0x005062e3
LAB_005062b9:
005062B9  8B 93 E5 09 00 00         MOV EDX,dword ptr [EBX + 0x9e5]
005062BF  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005062C5  52                        PUSH EDX
005062C6  6A 01                     PUSH 0x1
005062C8  6A 00                     PUSH 0x0
005062CA  6A 00                     PUSH 0x0
005062CC  50                        PUSH EAX
005062CD  EB 14                     JMP 0x005062e3
switchD_00506270::caseD_32:
005062CF  8B 8B E5 09 00 00         MOV ECX,dword ptr [EBX + 0x9e5]
LAB_005062d5:
005062D5  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005062DB  51                        PUSH ECX
005062DC  6A 01                     PUSH 0x1
005062DE  6A 00                     PUSH 0x0
005062E0  6A 00                     PUSH 0x0
005062E2  52                        PUSH EDX
LAB_005062e3:
005062E3  E8 41 CF EF FF            CALL 0x00403229
005062E8  83 C4 14                  ADD ESP,0x14
switchD_00506270::caseD_53:
005062EB  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
005062F1  83 C0 CA                  ADD EAX,-0x36
005062F4  83 F8 1B                  CMP EAX,0x1b
005062F7  77 4A                     JA 0x00506343
005062F9  33 C9                     XOR ECX,ECX
005062FB  8A 88 88 78 50 00         MOV CL,byte ptr [EAX + 0x507888]
switchD_00506301::switchD:
00506301  FF 24 8D 7C 78 50 00      JMP dword ptr [ECX*0x4 + 0x50787c]
switchD_00506301::caseD_3e:
00506308  8B 93 E9 09 00 00         MOV EDX,dword ptr [EBX + 0x9e9]
0050630E  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506314  52                        PUSH EDX
00506315  6A 01                     PUSH 0x1
00506317  6A 35                     PUSH 0x35
00506319  6A 0C                     PUSH 0xc
0050631B  50                        PUSH EAX
0050631C  EB 1D                     JMP 0x0050633b
switchD_00506301::caseD_36:
0050631E  80 BB F9 0B 00 00 01      CMP byte ptr [EBX + 0xbf9],0x1
00506325  75 1C                     JNZ 0x00506343
00506327  8B 8B E9 09 00 00         MOV ECX,dword ptr [EBX + 0x9e9]
0050632D  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506333  51                        PUSH ECX
00506334  6A 01                     PUSH 0x1
00506336  6A 35                     PUSH 0x35
00506338  6A 0C                     PUSH 0xc
0050633A  52                        PUSH EDX
LAB_0050633b:
0050633B  E8 E9 CE EF FF            CALL 0x00403229
00506340  83 C4 14                  ADD ESP,0x14
switchD_00506214::caseD_2:
00506343  33 C0                     XOR EAX,EAX
00506345  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
0050634B  48                        DEC EAX
0050634C  0F 84 40 03 00 00         JZ 0x00506692
00506352  83 E8 03                  SUB EAX,0x3
00506355  0F 85 3B 14 00 00         JNZ 0x00507796
0050635B  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
00506361  05 23 FF FF FF            ADD EAX,0xffffff23
00506366  83 F8 21                  CMP EAX,0x21
00506369  0F 87 27 14 00 00         JA 0x00507796
0050636F  33 C9                     XOR ECX,ECX
00506371  8A 88 B0 78 50 00         MOV CL,byte ptr [EAX + 0x5078b0]
switchD_00506377::switchD:
00506377  FF 24 8D A4 78 50 00      JMP dword ptr [ECX*0x4 + 0x5078a4]
switchD_00506377::caseD_dd:
0050637E  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00506384  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
0050638A  51                        PUSH ECX
0050638B  6A 01                     PUSH 0x1
0050638D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00506390  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506393  2B C2                     SUB EAX,EDX
00506395  6A 50                     PUSH 0x50
00506397  99                        CDQ
00506398  2B C2                     SUB EAX,EDX
0050639A  8B F0                     MOV ESI,EAX
0050639C  D1 FE                     SAR ESI,0x1
0050639E  56                        PUSH ESI
0050639F  57                        PUSH EDI
005063A0  E8 84 CE EF FF            CALL 0x00403229
005063A5  8B 83 D2 02 00 00         MOV EAX,dword ptr [EBX + 0x2d2]
005063AB  33 D2                     XOR EDX,EDX
005063AD  8A 93 11 0C 00 00         MOV DL,byte ptr [EBX + 0xc11]
005063B3  52                        PUSH EDX
005063B4  50                        PUSH EAX
005063B5  E8 E6 4F 20 00            CALL 0x0070b3a0
005063BA  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005063C0  50                        PUSH EAX
005063C1  6A 01                     PUSH 0x1
005063C3  8D 4E 03                  LEA ECX,[ESI + 0x3]
005063C6  6A 53                     PUSH 0x53
005063C8  51                        PUSH ECX
005063C9  52                        PUSH EDX
005063CA  E8 5A CE EF FF            CALL 0x00403229
005063CF  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
005063D5  83 C4 30                  ADD ESP,0x30
005063D8  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005063DE  6A 00                     PUSH 0x0
005063E0  6A 0C                     PUSH 0xc
005063E2  6A 67                     PUSH 0x67
005063E4  6A 07                     PUSH 0x7
005063E6  6A 49                     PUSH 0x49
005063E8  6A 00                     PUSH 0x0
005063EA  50                        PUSH EAX
005063EB  E8 B0 A7 20 00            CALL 0x00710ba0
005063F0  8B F8                     MOV EDI,EAX
005063F2  85 FF                     TEST EDI,EDI
005063F4  74 75                     JZ 0x0050646b
005063F6  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
005063FC  3D FE 00 00 00            CMP EAX,0xfe
00506401  75 0E                     JNZ 0x00506411
00506403  8A 8B 11 0C 00 00         MOV CL,byte ptr [EBX + 0xc11]
00506409  51                        PUSH ECX
0050640A  E8 BB F0 EF FF            CALL 0x004054ca
0050640F  EB 06                     JMP 0x00506417
LAB_00506411:
00506411  50                        PUSH EAX
00506412  E8 A8 B5 EF FF            CALL 0x004019bf
LAB_00506417:
00506417  83 C4 04                  ADD ESP,0x4
0050641A  8B D0                     MOV EDX,EAX
0050641C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050641F  52                        PUSH EDX
00506420  E8 A0 DC EF FF            CALL 0x004040c5
00506425  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00506428  83 C4 04                  ADD ESP,0x4
0050642B  50                        PUSH EAX
0050642C  A1 18 76 80 00            MOV EAX,[0x00807618]
00506431  6A FF                     PUSH -0x1
00506433  6A FF                     PUSH -0x1
00506435  50                        PUSH EAX
00506436  51                        PUSH ECX
00506437  E8 04 9D 1A 00            CALL 0x006b0140
0050643C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506442  50                        PUSH EAX
00506443  E8 78 B5 20 00            CALL 0x007119c0
00506448  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050644E  57                        PUSH EDI
0050644F  6A 01                     PUSH 0x1
00506451  8D 56 49                  LEA EDX,[ESI + 0x49]
00506454  6A 57                     PUSH 0x57
00506456  52                        PUSH EDX
00506457  50                        PUSH EAX
00506458  E8 CC CD EF FF            CALL 0x00403229
0050645D  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506463  83 C4 14                  ADD ESP,0x14
00506466  E8 95 AA 20 00            CALL 0x00710f00
LAB_0050646b:
0050646B  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00506471  6A 00                     PUSH 0x0
00506473  6A 14                     PUSH 0x14
00506475  6A 3C                     PUSH 0x3c
00506477  6A 14                     PUSH 0x14
00506479  6A 64                     PUSH 0x64
0050647B  6A 00                     PUSH 0x0
0050647D  51                        PUSH ECX
0050647E  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
00506484  E8 17 A7 20 00            CALL 0x00710ba0
00506489  85 C0                     TEST EAX,EAX
0050648B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0050648E  0F 84 02 13 00 00         JZ 0x00507796
00506494  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050649A  33 FF                     XOR EDI,EDI
0050649C  52                        PUSH EDX
0050649D  68 44 27 7C 00            PUSH 0x7c2744
005064A2  68 3A F3 80 00            PUSH 0x80f33a
005064A7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005064AD  33 C0                     XOR EAX,EAX
005064AF  83 C4 0C                  ADD ESP,0xc
005064B2  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
005064B8  83 F8 04                  CMP EAX,0x4
005064BB  77 25                     JA 0x005064e2
switchD_005064bd::switchD:
005064BD  FF 24 85 D4 78 50 00      JMP dword ptr [EAX*0x4 + 0x5078d4]
switchD_005064bd::caseD_0:
005064C4  33 FF                     XOR EDI,EDI
005064C6  EB 1A                     JMP 0x005064e2
switchD_005064bd::caseD_1:
005064C8  BF 02 00 00 00            MOV EDI,0x2
005064CD  EB 13                     JMP 0x005064e2
switchD_005064bd::caseD_2:
005064CF  BF 01 00 00 00            MOV EDI,0x1
005064D4  EB 0C                     JMP 0x005064e2
switchD_005064bd::caseD_3:
005064D6  BF 07 00 00 00            MOV EDI,0x7
005064DB  EB 05                     JMP 0x005064e2
switchD_005064bd::caseD_4:
005064DD  BF 03 00 00 00            MOV EDI,0x3
switchD_005064bd::default:
005064E2  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
005064E8  57                        PUSH EDI
005064E9  6A FF                     PUSH -0x1
005064EB  6A FF                     PUSH -0x1
005064ED  68 3A F3 80 00            PUSH 0x80f33a
005064F2  E8 C9 B4 20 00            CALL 0x007119c0
005064F7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005064FA  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506500  50                        PUSH EAX
00506501  6A 01                     PUSH 0x1
00506503  83 C6 64                  ADD ESI,0x64
00506506  6A 64                     PUSH 0x64
00506508  56                        PUSH ESI
00506509  51                        PUSH ECX
0050650A  E8 1A CD EF FF            CALL 0x00403229
0050650F  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
00506515  83 C4 14                  ADD ESP,0x14
00506518  E8 E3 A9 20 00            CALL 0x00710f00
0050651D  E9 74 12 00 00            JMP 0x00507796
switchD_00506377::caseD_fd:
00506522  8B 8B 11 0A 00 00         MOV ECX,dword ptr [EBX + 0xa11]
00506528  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
0050652E  51                        PUSH ECX
0050652F  6A 01                     PUSH 0x1
00506531  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00506534  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506537  2B C2                     SUB EAX,EDX
00506539  6A 3F                     PUSH 0x3f
0050653B  99                        CDQ
0050653C  2B C2                     SUB EAX,EDX
0050653E  8B F0                     MOV ESI,EAX
00506540  D1 FE                     SAR ESI,0x1
00506542  56                        PUSH ESI
00506543  57                        PUSH EDI
00506544  E8 E0 CC EF FF            CALL 0x00403229
00506549  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050654F  83 C4 14                  ADD ESP,0x14
00506552  84 C0                     TEST AL,AL
00506554  76 2F                     JBE 0x00506585
00506556  3C 15                     CMP AL,0x15
00506558  77 2B                     JA 0x00506585
0050655A  8B 93 CE 02 00 00         MOV EDX,dword ptr [EBX + 0x2ce]
00506560  25 FF 00 00 00            AND EAX,0xff
00506565  48                        DEC EAX
00506566  50                        PUSH EAX
00506567  52                        PUSH EDX
00506568  E8 33 4E 20 00            CALL 0x0070b3a0
0050656D  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506573  50                        PUSH EAX
00506574  6A 01                     PUSH 0x1
00506576  8D 46 06                  LEA EAX,[ESI + 0x6]
00506579  6A 44                     PUSH 0x44
0050657B  50                        PUSH EAX
0050657C  51                        PUSH ECX
0050657D  E8 A7 CC EF FF            CALL 0x00403229
00506582  83 C4 1C                  ADD ESP,0x1c
LAB_00506585:
00506585  8B 93 CA 02 00 00         MOV EDX,dword ptr [EBX + 0x2ca]
0050658B  6A 0A                     PUSH 0xa
0050658D  52                        PUSH EDX
0050658E  E8 0D 4E 20 00            CALL 0x0070b3a0
00506593  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506599  50                        PUSH EAX
0050659A  6A 06                     PUSH 0x6
0050659C  8D 46 04                  LEA EAX,[ESI + 0x4]
0050659F  6A 42                     PUSH 0x42
005065A1  50                        PUSH EAX
005065A2  51                        PUSH ECX
005065A3  E8 81 CC EF FF            CALL 0x00403229
005065A8  8B 93 11 0A 00 00         MOV EDX,dword ptr [EBX + 0xa11]
005065AE  83 C4 1C                  ADD ESP,0x1c
005065B1  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005065B7  6A 00                     PUSH 0x0
005065B9  6A 19                     PUSH 0x19
005065BB  6A 7B                     PUSH 0x7b
005065BD  6A 04                     PUSH 0x4
005065BF  6A 38                     PUSH 0x38
005065C1  6A 00                     PUSH 0x0
005065C3  52                        PUSH EDX
005065C4  E8 D7 A5 20 00            CALL 0x00710ba0
005065C9  8B F8                     MOV EDI,EAX
005065CB  85 FF                     TEST EDI,EDI
005065CD  74 54                     JZ 0x00506623
005065CF  A1 18 76 80 00            MOV EAX,[0x00807618]
005065D4  8A 8B 11 0C 00 00         MOV CL,byte ptr [EBX + 0xc11]
005065DA  6A FF                     PUSH -0x1
005065DC  6A FF                     PUSH -0x1
005065DE  6A 00                     PUSH 0x0
005065E0  6A FF                     PUSH -0x1
005065E2  6A FE                     PUSH -0x2
005065E4  50                        PUSH EAX
005065E5  51                        PUSH ECX
005065E6  E8 21 C1 EF FF            CALL 0x0040270c
005065EB  83 C4 04                  ADD ESP,0x4
005065EE  50                        PUSH EAX
005065EF  E8 4C 9B 1A 00            CALL 0x006b0140
005065F4  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005065FA  50                        PUSH EAX
005065FB  E8 70 B5 20 00            CALL 0x00711b70
00506600  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506606  57                        PUSH EDI
00506607  6A 01                     PUSH 0x1
00506609  8D 56 38                  LEA EDX,[ESI + 0x38]
0050660C  6A 43                     PUSH 0x43
0050660E  52                        PUSH EDX
0050660F  50                        PUSH EAX
00506610  E8 14 CC EF FF            CALL 0x00403229
00506615  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050661B  83 C4 14                  ADD ESP,0x14
0050661E  E8 DD A8 20 00            CALL 0x00710f00
LAB_00506623:
00506623  8B 8B 11 0A 00 00         MOV ECX,dword ptr [EBX + 0xa11]
00506629  6A 00                     PUSH 0x0
0050662B  6A 22                     PUSH 0x22
0050662D  68 B2 00 00 00            PUSH 0xb2
00506632  6A 1E                     PUSH 0x1e
00506634  6A 02                     PUSH 0x2
00506636  6A 00                     PUSH 0x0
00506638  51                        PUSH ECX
00506639  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050663F  E8 5C A5 20 00            CALL 0x00710ba0
00506644  8B F8                     MOV EDI,EAX
00506646  85 FF                     TEST EDI,EDI
00506648  0F 84 48 11 00 00         JZ 0x00507796
0050664E  8B 93 16 0C 00 00         MOV EDX,dword ptr [EBX + 0xc16]
00506654  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050665A  6A FF                     PUSH -0x1
0050665C  6A FF                     PUSH -0x1
0050665E  6A 01                     PUSH 0x1
00506660  6A FF                     PUSH -0x1
00506662  6A FE                     PUSH -0x2
00506664  52                        PUSH EDX
00506665  E8 06 B5 20 00            CALL 0x00711b70
0050666A  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506670  57                        PUSH EDI
00506671  6A 01                     PUSH 0x1
00506673  83 C6 02                  ADD ESI,0x2
00506676  6A 5D                     PUSH 0x5d
00506678  56                        PUSH ESI
00506679  50                        PUSH EAX
0050667A  E8 AA CB EF FF            CALL 0x00403229
0050667F  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506685  83 C4 14                  ADD ESP,0x14
00506688  E8 73 A8 20 00            CALL 0x00710f00
0050668D  E9 04 11 00 00            JMP 0x00507796
LAB_00506692:
00506692  80 BB FB 0B 00 00 02      CMP byte ptr [EBX + 0xbfb],0x2
00506699  0F 85 BF 01 00 00         JNZ 0x0050685e
0050669F  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
005066A5  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
005066AB  51                        PUSH ECX
005066AC  6A 01                     PUSH 0x1
005066AE  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005066B1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005066B4  2B C2                     SUB EAX,EDX
005066B6  6A 50                     PUSH 0x50
005066B8  99                        CDQ
005066B9  2B C2                     SUB EAX,EDX
005066BB  8B F0                     MOV ESI,EAX
005066BD  D1 FE                     SAR ESI,0x1
005066BF  56                        PUSH ESI
005066C0  57                        PUSH EDI
005066C1  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005066C4  E8 60 CB EF FF            CALL 0x00403229
005066C9  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
005066CF  83 C4 14                  ADD ESP,0x14
005066D2  85 C0                     TEST EAX,EAX
005066D4  0F 84 B5 10 00 00         JZ 0x0050778f
005066DA  8A 8B 1A 0C 00 00         MOV CL,byte ptr [EBX + 0xc1a]
005066E0  51                        PUSH ECX
005066E1  50                        PUSH EAX
005066E2  E8 0E F0 EF FF            CALL 0x004056f5
005066E7  8B 93 C2 02 00 00         MOV EDX,dword ptr [EBX + 0x2c2]
005066ED  50                        PUSH EAX
005066EE  52                        PUSH EDX
005066EF  E8 AC 4C 20 00            CALL 0x0070b3a0
005066F4  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
005066FA  50                        PUSH EAX
005066FB  6A 01                     PUSH 0x1
005066FD  8D 46 06                  LEA EAX,[ESI + 0x6]
00506700  6A 5D                     PUSH 0x5d
00506702  50                        PUSH EAX
00506703  51                        PUSH ECX
00506704  E8 20 CB EF FF            CALL 0x00403229
00506709  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050670F  83 C4 24                  ADD ESP,0x24
00506712  83 C6 36                  ADD ESI,0x36
00506715  6A 00                     PUSH 0x0
00506717  6A 21                     PUSH 0x21
00506719  6A 07                     PUSH 0x7
0050671B  6A 5D                     PUSH 0x5d
0050671D  56                        PUSH ESI
0050671E  6A 00                     PUSH 0x0
00506720  52                        PUSH EDX
00506721  E8 4A DA 1A 00            CALL 0x006b4170
00506726  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
0050672C  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
0050672F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00506732  25 FF 00 00 00            AND EAX,0xff
00506737  8B D0                     MOV EDX,EAX
00506739  C1 E2 05                  SHL EDX,0x5
0050673C  03 D0                     ADD EDX,EAX
0050673E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00506743  F7 E2                     MUL EDX
00506745  C1 EA 05                  SHR EDX,0x5
00506748  84 C9                     TEST CL,CL
0050674A  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0050674D  76 08                     JBE 0x00506757
0050674F  84 D2                     TEST DL,DL
00506751  75 04                     JNZ 0x00506757
00506753  C6 45 F4 01               MOV byte ptr [EBP + -0xc],0x1
LAB_00506757:
00506757  80 F9 46                  CMP CL,0x46
0050675A  72 04                     JC 0x00506760
0050675C  33 D2                     XOR EDX,EDX
0050675E  EB 0B                     JMP 0x0050676b
LAB_00506760:
00506760  80 F9 14                  CMP CL,0x14
00506763  1B D2                     SBB EDX,EDX
00506765  83 E2 05                  AND EDX,0x5
00506768  83 C2 05                  ADD EDX,0x5
LAB_0050676b:
0050676B  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00506771  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00506774  25 FF 00 00 00            AND EAX,0xff
00506779  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0050677C  50                        PUSH EAX
0050677D  2B F0                     SUB ESI,EAX
0050677F  6A 05                     PUSH 0x5
00506781  56                        PUSH ESI
00506782  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00506785  52                        PUSH EDX
00506786  6A 00                     PUSH 0x0
00506788  51                        PUSH ECX
00506789  B9 7E 00 00 00            MOV ECX,0x7e
0050678E  2B C8                     SUB ECX,EAX
00506790  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506796  8D 56 37                  LEA EDX,[ESI + 0x37]
00506799  51                        PUSH ECX
0050679A  52                        PUSH EDX
0050679B  6A 00                     PUSH 0x0
0050679D  50                        PUSH EAX
0050679E  E8 4D EE 1A 00            CALL 0x006b55f0
005067A3  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
005067A9  6A 01                     PUSH 0x1
005067AB  51                        PUSH ECX
005067AC  E8 EF 4B 20 00            CALL 0x0070b3a0
005067B1  50                        PUSH EAX
005067B2  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005067B8  6A 06                     PUSH 0x6
005067BA  8D 56 05                  LEA EDX,[ESI + 0x5]
005067BD  6A 5C                     PUSH 0x5c
005067BF  52                        PUSH EDX
005067C0  50                        PUSH EAX
005067C1  E8 63 CA EF FF            CALL 0x00403229
005067C6  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
005067CC  83 C4 1C                  ADD ESP,0x1c
005067CF  83 C6 02                  ADD ESI,0x2
005067D2  6A 0A                     PUSH 0xa
005067D4  68 B2 00 00 00            PUSH 0xb2
005067D9  6A 52                     PUSH 0x52
005067DB  56                        PUSH ESI
005067DC  6A 00                     PUSH 0x0
005067DE  51                        PUSH ECX
005067DF  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005067E5  E8 A6 A2 20 00            CALL 0x00710a90
005067EA  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005067F0  8A 83 1A 0C 00 00         MOV AL,byte ptr [EBX + 0xc1a]
005067F6  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
005067FC  52                        PUSH EDX
005067FD  6A 00                     PUSH 0x0
005067FF  50                        PUSH EAX
00506800  51                        PUSH ECX
00506801  E8 7E CE EF FF            CALL 0x00403684
00506806  83 C4 0C                  ADD ESP,0xc
00506809  50                        PUSH EAX
0050680A  E8 31 99 1A 00            CALL 0x006b0140
0050680F  8B F8                     MOV EDI,EAX
00506811  83 C9 FF                  OR ECX,0xffffffff
00506814  33 C0                     XOR EAX,EAX
00506816  6A 0A                     PUSH 0xa
00506818  F2 AE                     SCASB.REPNE ES:EDI
0050681A  F7 D1                     NOT ECX
0050681C  2B F9                     SUB EDI,ECX
0050681E  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
00506824  8B D1                     MOV EDX,ECX
00506826  8B F7                     MOV ESI,EDI
00506828  8B F8                     MOV EDI,EAX
0050682A  50                        PUSH EAX
0050682B  C1 E9 02                  SHR ECX,0x2
0050682E  F3 A5                     MOVSD.REP ES:EDI,ESI
00506830  8B CA                     MOV ECX,EDX
00506832  83 E1 03                  AND ECX,0x3
00506835  F3 A4                     MOVSB.REP ES:EDI,ESI
00506837  E8 24 7D 22 00            CALL 0x0072e560
0050683C  83 C4 08                  ADD ESP,0x8
0050683F  85 C0                     TEST EAX,EAX
00506841  0F 84 ED 07 00 00         JZ 0x00507034
LAB_00506847:
00506847  6A 0A                     PUSH 0xa
00506849  50                        PUSH EAX
0050684A  C6 00 20                  MOV byte ptr [EAX],0x20
0050684D  E8 0E 7D 22 00            CALL 0x0072e560
00506852  83 C4 08                  ADD ESP,0x8
00506855  85 C0                     TEST EAX,EAX
00506857  75 EE                     JNZ 0x00506847
00506859  E9 D6 07 00 00            JMP 0x00507034
LAB_0050685e:
0050685E  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
00506864  83 C0 CE                  ADD EAX,-0x32
00506867  83 F8 3D                  CMP EAX,0x3d
0050686A  0F 87 1F 0F 00 00         JA 0x0050778f
00506870  33 C9                     XOR ECX,ECX
00506872  8A 88 14 79 50 00         MOV CL,byte ptr [EAX + 0x507914]
switchD_00506878::switchD:
00506878  FF 24 8D E8 78 50 00      JMP dword ptr [ECX*0x4 + 0x5078e8]
switchD_00506878::caseD_36:
0050687F  8B 8B F5 09 00 00         MOV ECX,dword ptr [EBX + 0x9f5]
00506885  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
0050688B  51                        PUSH ECX
0050688C  6A 01                     PUSH 0x1
0050688E  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00506891  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506894  2B C2                     SUB EAX,EDX
00506896  6A 67                     PUSH 0x67
00506898  99                        CDQ
00506899  2B C2                     SUB EAX,EDX
0050689B  8B F0                     MOV ESI,EAX
0050689D  D1 FE                     SAR ESI,0x1
0050689F  56                        PUSH ESI
005068A0  57                        PUSH EDI
005068A1  E8 83 C9 EF FF            CALL 0x00403229
005068A6  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005068AC  83 C4 14                  ADD ESP,0x14
005068AF  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005068B5  8D 56 02                  LEA EDX,[ESI + 0x2]
005068B8  6A 0C                     PUSH 0xc
005068BA  68 A7 00 00 00            PUSH 0xa7
005068BF  6A 69                     PUSH 0x69
005068C1  52                        PUSH EDX
005068C2  6A 00                     PUSH 0x0
005068C4  50                        PUSH EAX
005068C5  E8 C6 A1 20 00            CALL 0x00710a90
005068CA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005068D0  8B 93 F5 0B 00 00         MOV EDX,dword ptr [EBX + 0xbf5]
005068D6  6A FF                     PUSH -0x1
005068D8  6A FF                     PUSH -0x1
005068DA  6A 00                     PUSH 0x0
005068DC  6A FF                     PUSH -0x1
005068DE  6A FE                     PUSH -0x2
005068E0  51                        PUSH ECX
005068E1  52                        PUSH EDX
005068E2  E8 19 F2 EF FF            CALL 0x00405b00
005068E7  83 C4 04                  ADD ESP,0x4
005068EA  50                        PUSH EAX
005068EB  E8 50 98 1A 00            CALL 0x006b0140
005068F0  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005068F6  50                        PUSH EAX
005068F7  E8 74 B2 20 00            CALL 0x00711b70
005068FC  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
00506902  3C FF                     CMP AL,0xff
00506904  0F 84 85 0E 00 00         JZ 0x0050778f
0050690A  3C 28                     CMP AL,0x28
0050690C  76 07                     JBE 0x00506915
0050690E  C6 83 29 0C 00 00 28      MOV byte ptr [EBX + 0xc29],0x28
LAB_00506915:
00506915  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
0050691B  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
0050691F  84 C0                     TEST AL,AL
00506921  76 62                     JBE 0x00506985
00506923  BF 4D 00 00 00            MOV EDI,0x4d
LAB_00506928:
00506928  39 BB F5 0B 00 00         CMP dword ptr [EBX + 0xbf5],EDI
0050692E  75 0F                     JNZ 0x0050693f
00506930  8A 83 28 0C 00 00         MOV AL,byte ptr [EBX + 0xc28]
00506936  84 C0                     TEST AL,AL
00506938  B8 04 00 00 00            MOV EAX,0x4
0050693D  75 05                     JNZ 0x00506944
LAB_0050693f:
0050693F  B8 03 00 00 00            MOV EAX,0x3
LAB_00506944:
00506944  50                        PUSH EAX
00506945  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050694B  50                        PUSH EAX
0050694C  E8 4F 4A 20 00            CALL 0x0070b3a0
00506951  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00506954  50                        PUSH EAX
00506955  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050695B  81 E1 FF 00 00 00         AND ECX,0xff
00506961  6A 01                     PUSH 0x1
00506963  6A 75                     PUSH 0x75
00506965  8D 54 8E 06               LEA EDX,[ESI + ECX*0x4 + 0x6]
00506969  52                        PUSH EDX
0050696A  50                        PUSH EAX
0050696B  E8 B9 C8 EF FF            CALL 0x00403229
00506970  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00506973  8A 8B 29 0C 00 00         MOV CL,byte ptr [EBX + 0xc29]
00506979  83 C4 1C                  ADD ESP,0x1c
0050697C  FE C0                     INC AL
0050697E  3A C1                     CMP AL,CL
00506980  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00506983  72 A3                     JC 0x00506928
LAB_00506985:
00506985  80 7D FC 28               CMP byte ptr [EBP + -0x4],0x28
00506989  0F 83 00 0E 00 00         JNC 0x0050778f
0050698F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00506992  BF 28 00 00 00            MOV EDI,0x28
00506997  25 FF 00 00 00            AND EAX,0xff
0050699C  2B F8                     SUB EDI,EAX
0050699E  8D 74 86 06               LEA ESI,[ESI + EAX*0x4 + 0x6]
LAB_005069a2:
005069A2  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
005069A8  6A 00                     PUSH 0x0
005069AA  51                        PUSH ECX
005069AB  E8 F0 49 20 00            CALL 0x0070b3a0
005069B0  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005069B6  50                        PUSH EAX
005069B7  6A 01                     PUSH 0x1
005069B9  6A 75                     PUSH 0x75
005069BB  56                        PUSH ESI
005069BC  52                        PUSH EDX
005069BD  E8 67 C8 EF FF            CALL 0x00403229
005069C2  83 C4 1C                  ADD ESP,0x1c
005069C5  83 C6 04                  ADD ESI,0x4
005069C8  4F                        DEC EDI
005069C9  75 D7                     JNZ 0x005069a2
005069CB  E9 BF 0D 00 00            JMP 0x0050778f
switchD_00506878::caseD_33:
005069D0  8B 8B F9 09 00 00         MOV ECX,dword ptr [EBX + 0x9f9]
005069D6  8B B3 94 01 00 00         MOV ESI,dword ptr [EBX + 0x194]
005069DC  51                        PUSH ECX
005069DD  6A 01                     PUSH 0x1
005069DF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005069E2  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005069E5  2B C2                     SUB EAX,EDX
005069E7  6A 36                     PUSH 0x36
005069E9  99                        CDQ
005069EA  2B C2                     SUB EAX,EDX
005069EC  8B F8                     MOV EDI,EAX
005069EE  D1 FF                     SAR EDI,0x1
005069F0  57                        PUSH EDI
005069F1  56                        PUSH ESI
005069F2  E8 32 C8 EF FF            CALL 0x00403229
005069F7  8B 8B FD 09 00 00         MOV ECX,dword ptr [EBX + 0x9fd]
005069FD  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506A03  51                        PUSH ECX
00506A04  8D 47 05                  LEA EAX,[EDI + 0x5]
00506A07  6A 01                     PUSH 0x1
00506A09  6A 39                     PUSH 0x39
00506A0B  50                        PUSH EAX
00506A0C  52                        PUSH EDX
00506A0D  E8 17 C8 EF FF            CALL 0x00403229
00506A12  8D 83 1C 0C 00 00         LEA EAX,[EBX + 0xc1c]
00506A18  8D 8B 12 0C 00 00         LEA ECX,[EBX + 0xc12]
00506A1E  83 C4 28                  ADD ESP,0x28
00506A21  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00506A28  BE 3A 00 00 00            MOV ESI,0x3a
00506A2D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00506A30  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00506a33:
00506A33  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00506A36  8B 02                     MOV EAX,dword ptr [EDX]
00506A38  85 C0                     TEST EAX,EAX
00506A3A  0F 84 4E 01 00 00         JZ 0x00506b8e
00506A40  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00506A43  8A 94 19 1A 0C 00 00      MOV DL,byte ptr [ECX + EBX*0x1 + 0xc1a]
00506A4A  52                        PUSH EDX
00506A4B  50                        PUSH EAX
00506A4C  E8 A4 EC EF FF            CALL 0x004056f5
00506A51  50                        PUSH EAX
00506A52  8B 83 BA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ba]
00506A58  50                        PUSH EAX
00506A59  E8 42 49 20 00            CALL 0x0070b3a0
00506A5E  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506A64  50                        PUSH EAX
00506A65  6A 01                     PUSH 0x1
00506A67  8D 4F 06                  LEA ECX,[EDI + 0x6]
00506A6A  56                        PUSH ESI
00506A6B  51                        PUSH ECX
00506A6C  52                        PUSH EDX
00506A6D  E8 B7 C7 EF FF            CALL 0x00403229
00506A72  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506A78  83 C4 24                  ADD ESP,0x24
00506A7B  8D 47 36                  LEA EAX,[EDI + 0x36]
00506A7E  6A 00                     PUSH 0x0
00506A80  6A 21                     PUSH 0x21
00506A82  6A 07                     PUSH 0x7
00506A84  56                        PUSH ESI
00506A85  50                        PUSH EAX
00506A86  6A 00                     PUSH 0x0
00506A88  51                        PUSH ECX
00506A89  E8 E2 D6 1A 00            CALL 0x006b4170
00506A8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00506A91  8A 8C 1A 24 0C 00 00      MOV CL,byte ptr [EDX + EBX*0x1 + 0xc24]
00506A98  88 4D F0                  MOV byte ptr [EBP + -0x10],CL
00506A9B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00506A9E  25 FF 00 00 00            AND EAX,0xff
00506AA3  8B D0                     MOV EDX,EAX
00506AA5  C1 E2 05                  SHL EDX,0x5
00506AA8  03 D0                     ADD EDX,EAX
00506AAA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00506AAF  F7 E2                     MUL EDX
00506AB1  8A C1                     MOV AL,CL
00506AB3  C1 EA 05                  SHR EDX,0x5
00506AB6  84 C0                     TEST AL,AL
00506AB8  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00506ABB  76 08                     JBE 0x00506ac5
00506ABD  84 D2                     TEST DL,DL
00506ABF  75 04                     JNZ 0x00506ac5
00506AC1  C6 45 EC 01               MOV byte ptr [EBP + -0x14],0x1
LAB_00506ac5:
00506AC5  80 F9 46                  CMP CL,0x46
00506AC8  72 09                     JC 0x00506ad3
00506ACA  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00506AD1  EB 0E                     JMP 0x00506ae1
LAB_00506ad3:
00506AD3  80 F9 14                  CMP CL,0x14
00506AD6  1B C0                     SBB EAX,EAX
00506AD8  83 E0 05                  AND EAX,0x5
00506ADB  83 C0 05                  ADD EAX,0x5
00506ADE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00506ae1:
00506AE1  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00506AE7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00506AEA  25 FF 00 00 00            AND EAX,0xff
00506AEF  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00506AF2  50                        PUSH EAX
00506AF3  2B D0                     SUB EDX,EAX
00506AF5  6A 05                     PUSH 0x5
00506AF7  52                        PUSH EDX
00506AF8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00506AFB  52                        PUSH EDX
00506AFC  6A 00                     PUSH 0x0
00506AFE  51                        PUSH ECX
00506AFF  8B CE                     MOV ECX,ESI
00506B01  2B C8                     SUB ECX,EAX
00506B03  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506B09  83 C1 21                  ADD ECX,0x21
00506B0C  8D 57 37                  LEA EDX,[EDI + 0x37]
00506B0F  51                        PUSH ECX
00506B10  52                        PUSH EDX
00506B11  6A 00                     PUSH 0x0
00506B13  50                        PUSH EAX
00506B14  E8 D7 EA 1A 00            CALL 0x006b55f0
00506B19  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
00506B1F  6A 01                     PUSH 0x1
00506B21  51                        PUSH ECX
00506B22  E8 79 48 20 00            CALL 0x0070b3a0
00506B27  50                        PUSH EAX
00506B28  8D 56 FF                  LEA EDX,[ESI + -0x1]
00506B2B  6A 06                     PUSH 0x6
00506B2D  8D 47 05                  LEA EAX,[EDI + 0x5]
00506B30  52                        PUSH EDX
00506B31  50                        PUSH EAX
00506B32  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506B38  50                        PUSH EAX
00506B39  E8 EB C6 EF FF            CALL 0x00403229
00506B3E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00506B41  B1 64                     MOV CL,0x64
00506B43  83 C4 1C                  ADD ESP,0x1c
00506B46  8D 47 41                  LEA EAX,[EDI + 0x41]
00506B49  2A 8C 1A 24 0C 00 00      SUB CL,byte ptr [EDX + EBX*0x1 + 0xc24]
00506B50  68 B1 36 00 00            PUSH 0x36b1
00506B55  51                        PUSH ECX
00506B56  56                        PUSH ESI
00506B57  50                        PUSH EAX
00506B58  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506B5E  50                        PUSH EAX
00506B5F  8B CB                     MOV ECX,EBX
00506B61  E8 17 E1 EF FF            CALL 0x00404c7d
00506B66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00506B69  6A 02                     PUSH 0x2
00506B6B  6A 04                     PUSH 0x4
00506B6D  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
00506B71  66 8B 10                  MOV DX,word ptr [EAX]
00506B74  51                        PUSH ECX
00506B75  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506B7B  8D 46 0B                  LEA EAX,[ESI + 0xb]
00506B7E  52                        PUSH EDX
00506B7F  50                        PUSH EAX
00506B80  8D 47 41                  LEA EAX,[EDI + 0x41]
00506B83  50                        PUSH EAX
00506B84  51                        PUSH ECX
00506B85  8B CB                     MOV ECX,EBX
00506B87  E8 01 EF EF FF            CALL 0x00405a8d
00506B8C  EB 4A                     JMP 0x00506bd8
LAB_00506b8e:
00506B8E  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506B94  6A 2F                     PUSH 0x2f
00506B96  8D 56 FE                  LEA EDX,[ESI + -0x2]
00506B99  68 B2 00 00 00            PUSH 0xb2
00506B9E  8D 47 02                  LEA EAX,[EDI + 0x2]
00506BA1  52                        PUSH EDX
00506BA2  50                        PUSH EAX
00506BA3  6A 00                     PUSH 0x0
00506BA5  51                        PUSH ECX
00506BA6  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506BAC  E8 DF 9E 20 00            CALL 0x00710a90
00506BB1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00506BB7  6A FF                     PUSH -0x1
00506BB9  6A FF                     PUSH -0x1
00506BBB  6A 00                     PUSH 0x0
00506BBD  6A FF                     PUSH -0x1
00506BBF  6A FE                     PUSH -0x2
00506BC1  52                        PUSH EDX
00506BC2  68 13 27 00 00            PUSH 0x2713
00506BC7  E8 74 95 1A 00            CALL 0x006b0140
00506BCC  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506BD2  50                        PUSH EAX
00506BD3  E8 98 AF 20 00            CALL 0x00711b70
LAB_00506bd8:
00506BD8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00506BDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00506BDE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00506BE1  83 C6 23                  ADD ESI,0x23
00506BE4  41                        INC ECX
00506BE5  83 C0 02                  ADD EAX,0x2
00506BE8  83 C2 04                  ADD EDX,0x4
00506BEB  81 FE 80 00 00 00         CMP ESI,0x80
00506BF1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00506BF4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00506BF7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00506BFA  0F 8C 33 FE FF FF         JL 0x00506a33
00506C00  E9 8A 0B 00 00            JMP 0x0050778f
switchD_00506878::caseD_44:
00506C05  8B 8B 01 0A 00 00         MOV ECX,dword ptr [EBX + 0xa01]
00506C0B  8B B3 94 01 00 00         MOV ESI,dword ptr [EBX + 0x194]
00506C11  51                        PUSH ECX
00506C12  6A 01                     PUSH 0x1
00506C14  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00506C17  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506C1A  2B C2                     SUB EAX,EDX
00506C1C  6A 37                     PUSH 0x37
00506C1E  99                        CDQ
00506C1F  2B C2                     SUB EAX,EDX
00506C21  D1 F8                     SAR EAX,0x1
00506C23  50                        PUSH EAX
00506C24  56                        PUSH ESI
00506C25  E8 FF C5 EF FF            CALL 0x00403229
00506C2A  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00506C30  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
00506C36  51                        PUSH ECX
00506C37  6A 01                     PUSH 0x1
00506C39  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00506C3C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506C3F  2B C2                     SUB EAX,EDX
00506C41  6A 50                     PUSH 0x50
00506C43  99                        CDQ
00506C44  2B C2                     SUB EAX,EDX
00506C46  8B F0                     MOV ESI,EAX
00506C48  D1 FE                     SAR ESI,0x1
00506C4A  56                        PUSH ESI
00506C4B  57                        PUSH EDI
00506C4C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00506C4F  E8 D5 C5 EF FF            CALL 0x00403229
00506C54  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00506C5A  33 C0                     XOR EAX,EAX
00506C5C  66 8B 83 34 0C 00 00      MOV AX,word ptr [EBX + 0xc34]
00506C63  83 C4 28                  ADD ESP,0x28
00506C66  50                        PUSH EAX
00506C67  51                        PUSH ECX
00506C68  68 25 27 00 00            PUSH 0x2725
00506C6D  E8 CE 94 1A 00            CALL 0x006b0140
00506C72  50                        PUSH EAX
00506C73  68 6C 28 7C 00            PUSH 0x7c286c
00506C78  68 3A F3 80 00            PUSH 0x80f33a
00506C7D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00506C83  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506C89  83 C4 10                  ADD ESP,0x10
00506C8C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506C92  6A 15                     PUSH 0x15
00506C94  6A 6D                     PUSH 0x6d
00506C96  6A 39                     PUSH 0x39
00506C98  6A 56                     PUSH 0x56
00506C9A  6A 00                     PUSH 0x0
00506C9C  52                        PUSH EDX
00506C9D  E8 EE 9D 20 00            CALL 0x00710a90
00506CA2  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506CA8  6A FF                     PUSH -0x1
00506CAA  6A FF                     PUSH -0x1
00506CAC  6A 00                     PUSH 0x0
00506CAE  6A FF                     PUSH -0x1
00506CB0  6A FE                     PUSH -0x2
00506CB2  68 3A F3 80 00            PUSH 0x80f33a
00506CB7  E8 B4 AE 20 00            CALL 0x00711b70
00506CBC  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
00506CC2  85 C0                     TEST EAX,EAX
00506CC4  0F 84 D3 03 00 00         JZ 0x0050709d
00506CCA  8B 83 09 0A 00 00         MOV EAX,dword ptr [EBX + 0xa09]
00506CD0  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506CD6  50                        PUSH EAX
00506CD7  6A 01                     PUSH 0x1
00506CD9  8D 4E 06                  LEA ECX,[ESI + 0x6]
00506CDC  6A 5D                     PUSH 0x5d
00506CDE  51                        PUSH ECX
00506CDF  52                        PUSH EDX
00506CE0  E8 44 C5 EF FF            CALL 0x00403229
00506CE5  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506CEB  83 C4 14                  ADD ESP,0x14
00506CEE  83 C6 36                  ADD ESI,0x36
00506CF1  6A 00                     PUSH 0x0
00506CF3  6A 21                     PUSH 0x21
00506CF5  6A 07                     PUSH 0x7
00506CF7  6A 5D                     PUSH 0x5d
00506CF9  56                        PUSH ESI
00506CFA  6A 00                     PUSH 0x0
00506CFC  50                        PUSH EAX
00506CFD  E8 6E D4 1A 00            CALL 0x006b4170
00506D02  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
00506D08  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00506D0B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00506D0E  25 FF 00 00 00            AND EAX,0xff
00506D13  8B D0                     MOV EDX,EAX
00506D15  C1 E2 05                  SHL EDX,0x5
00506D18  03 D0                     ADD EDX,EAX
00506D1A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00506D1F  F7 E2                     MUL EDX
00506D21  C1 EA 05                  SHR EDX,0x5
00506D24  84 C9                     TEST CL,CL
00506D26  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
00506D29  76 08                     JBE 0x00506d33
00506D2B  84 D2                     TEST DL,DL
00506D2D  75 04                     JNZ 0x00506d33
00506D2F  C6 45 E8 01               MOV byte ptr [EBP + -0x18],0x1
LAB_00506d33:
00506D33  80 F9 46                  CMP CL,0x46
00506D36  72 04                     JC 0x00506d3c
00506D38  33 D2                     XOR EDX,EDX
00506D3A  EB 0B                     JMP 0x00506d47
LAB_00506d3c:
00506D3C  80 F9 14                  CMP CL,0x14
00506D3F  1B D2                     SBB EDX,EDX
00506D41  83 E2 05                  AND EDX,0x5
00506D44  83 C2 05                  ADD EDX,0x5
LAB_00506d47:
00506D47  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00506D4D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00506D50  25 FF 00 00 00            AND EAX,0xff
00506D55  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00506D58  50                        PUSH EAX
00506D59  2B F0                     SUB ESI,EAX
00506D5B  6A 05                     PUSH 0x5
00506D5D  56                        PUSH ESI
00506D5E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00506D61  52                        PUSH EDX
00506D62  6A 00                     PUSH 0x0
00506D64  51                        PUSH ECX
00506D65  B9 7E 00 00 00            MOV ECX,0x7e
00506D6A  2B C8                     SUB ECX,EAX
00506D6C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506D72  8D 56 37                  LEA EDX,[ESI + 0x37]
00506D75  51                        PUSH ECX
00506D76  52                        PUSH EDX
00506D77  6A 00                     PUSH 0x0
00506D79  50                        PUSH EAX
00506D7A  E8 71 E8 1A 00            CALL 0x006b55f0
00506D7F  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
00506D85  6A 01                     PUSH 0x1
00506D87  51                        PUSH ECX
00506D88  E8 13 46 20 00            CALL 0x0070b3a0
00506D8D  50                        PUSH EAX
00506D8E  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506D94  6A 06                     PUSH 0x6
00506D96  8D 56 05                  LEA EDX,[ESI + 0x5]
00506D99  6A 5C                     PUSH 0x5c
00506D9B  52                        PUSH EDX
00506D9C  50                        PUSH EAX
00506D9D  E8 87 C4 EF FF            CALL 0x00403229
00506DA2  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506DA8  83 C4 1C                  ADD ESP,0x1c
00506DAB  83 C6 02                  ADD ESI,0x2
00506DAE  6A 0A                     PUSH 0xa
00506DB0  68 B2 00 00 00            PUSH 0xb2
00506DB5  6A 52                     PUSH 0x52
00506DB7  56                        PUSH ESI
00506DB8  6A 00                     PUSH 0x0
00506DBA  51                        PUSH ECX
00506DBB  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506DC1  E8 CA 9C 20 00            CALL 0x00710a90
00506DC6  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00506DCC  52                        PUSH EDX
00506DCD  68 2C 2B 00 00            PUSH 0x2b2c
00506DD2  E8 69 93 1A 00            CALL 0x006b0140
00506DD7  8B F8                     MOV EDI,EAX
00506DD9  83 C9 FF                  OR ECX,0xffffffff
00506DDC  33 C0                     XOR EAX,EAX
00506DDE  6A 0A                     PUSH 0xa
00506DE0  F2 AE                     SCASB.REPNE ES:EDI
00506DE2  F7 D1                     NOT ECX
00506DE4  2B F9                     SUB EDI,ECX
00506DE6  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
00506DEC  8B D1                     MOV EDX,ECX
00506DEE  8B F7                     MOV ESI,EDI
00506DF0  8B F8                     MOV EDI,EAX
00506DF2  50                        PUSH EAX
00506DF3  C1 E9 02                  SHR ECX,0x2
00506DF6  F3 A5                     MOVSD.REP ES:EDI,ESI
00506DF8  8B CA                     MOV ECX,EDX
00506DFA  83 E1 03                  AND ECX,0x3
00506DFD  F3 A4                     MOVSB.REP ES:EDI,ESI
00506DFF  E8 5C 77 22 00            CALL 0x0072e560
00506E04  83 C4 08                  ADD ESP,0x8
00506E07  85 C0                     TEST EAX,EAX
00506E09  0F 84 25 02 00 00         JZ 0x00507034
LAB_00506e0f:
00506E0F  6A 0A                     PUSH 0xa
00506E11  50                        PUSH EAX
00506E12  C6 00 20                  MOV byte ptr [EAX],0x20
00506E15  E8 46 77 22 00            CALL 0x0072e560
00506E1A  83 C4 08                  ADD ESP,0x8
00506E1D  85 C0                     TEST EAX,EAX
00506E1F  75 EE                     JNZ 0x00506e0f
00506E21  E9 0E 02 00 00            JMP 0x00507034
switchD_00506878::caseD_32:
00506E26  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00506E2C  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
00506E32  51                        PUSH ECX
00506E33  6A 01                     PUSH 0x1
00506E35  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00506E38  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00506E3B  2B C2                     SUB EAX,EDX
00506E3D  6A 50                     PUSH 0x50
00506E3F  99                        CDQ
00506E40  2B C2                     SUB EAX,EDX
00506E42  8B F0                     MOV ESI,EAX
00506E44  D1 FE                     SAR ESI,0x1
00506E46  56                        PUSH ESI
00506E47  57                        PUSH EDI
00506E48  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00506E4B  E8 D9 C3 EF FF            CALL 0x00403229
00506E50  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
00506E56  83 C4 14                  ADD ESP,0x14
00506E59  85 C0                     TEST EAX,EAX
00506E5B  0F 84 3C 02 00 00         JZ 0x0050709d
00506E61  8A 93 1A 0C 00 00         MOV DL,byte ptr [EBX + 0xc1a]
00506E67  8D 7E 06                  LEA EDI,[ESI + 0x6]
00506E6A  52                        PUSH EDX
00506E6B  50                        PUSH EAX
00506E6C  E8 84 E8 EF FF            CALL 0x004056f5
00506E71  50                        PUSH EAX
00506E72  8B 83 BA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ba]
00506E78  50                        PUSH EAX
00506E79  E8 22 45 20 00            CALL 0x0070b3a0
00506E7E  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506E84  50                        PUSH EAX
00506E85  6A 01                     PUSH 0x1
00506E87  6A 5D                     PUSH 0x5d
00506E89  57                        PUSH EDI
00506E8A  51                        PUSH ECX
00506E8B  E8 99 C3 EF FF            CALL 0x00403229
00506E90  8A 83 26 0C 00 00         MOV AL,byte ptr [EBX + 0xc26]
00506E96  83 C4 24                  ADD ESP,0x24
00506E99  84 C0                     TEST AL,AL
00506E9B  74 4E                     JZ 0x00506eeb
00506E9D  25 FF 00 00 00            AND EAX,0xff
00506EA2  8D 8B E1 01 00 00         LEA ECX,[EBX + 0x1e1]
00506EA8  50                        PUSH EAX
00506EA9  68 90 18 7C 00            PUSH 0x7c1890
00506EAE  51                        PUSH ECX
00506EAF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00506EB5  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00506EBB  83 C4 0C                  ADD ESP,0xc
00506EBE  8B 8B C8 01 00 00         MOV ECX,dword ptr [EBX + 0x1c8]
00506EC4  6A 21                     PUSH 0x21
00506EC6  6A 30                     PUSH 0x30
00506EC8  6A 5D                     PUSH 0x5d
00506ECA  57                        PUSH EDI
00506ECB  6A 00                     PUSH 0x0
00506ECD  52                        PUSH EDX
00506ECE  E8 BD 9B 20 00            CALL 0x00710a90
00506ED3  8B 8B C8 01 00 00         MOV ECX,dword ptr [EBX + 0x1c8]
00506ED9  6A 00                     PUSH 0x0
00506EDB  6A FF                     PUSH -0x1
00506EDD  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
00506EE3  6A FE                     PUSH -0x2
00506EE5  50                        PUSH EAX
00506EE6  E8 D5 AA 20 00            CALL 0x007119c0
LAB_00506eeb:
00506EEB  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506EF1  6A 00                     PUSH 0x0
00506EF3  6A 21                     PUSH 0x21
00506EF5  6A 07                     PUSH 0x7
00506EF7  83 C6 36                  ADD ESI,0x36
00506EFA  6A 5D                     PUSH 0x5d
00506EFC  56                        PUSH ESI
00506EFD  6A 00                     PUSH 0x0
00506EFF  50                        PUSH EAX
00506F00  E8 6B D2 1A 00            CALL 0x006b4170
00506F05  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
00506F0B  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00506F0E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00506F11  25 FF 00 00 00            AND EAX,0xff
00506F16  8B D0                     MOV EDX,EAX
00506F18  C1 E2 05                  SHL EDX,0x5
00506F1B  03 D0                     ADD EDX,EAX
00506F1D  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00506F22  F7 E2                     MUL EDX
00506F24  C1 EA 05                  SHR EDX,0x5
00506F27  84 C9                     TEST CL,CL
00506F29  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
00506F2C  76 08                     JBE 0x00506f36
00506F2E  84 D2                     TEST DL,DL
00506F30  75 04                     JNZ 0x00506f36
00506F32  C6 45 E8 01               MOV byte ptr [EBP + -0x18],0x1
LAB_00506f36:
00506F36  80 F9 46                  CMP CL,0x46
00506F39  72 04                     JC 0x00506f3f
00506F3B  33 D2                     XOR EDX,EDX
00506F3D  EB 0B                     JMP 0x00506f4a
LAB_00506f3f:
00506F3F  80 F9 14                  CMP CL,0x14
00506F42  1B D2                     SBB EDX,EDX
00506F44  83 E2 05                  AND EDX,0x5
00506F47  83 C2 05                  ADD EDX,0x5
LAB_00506f4a:
00506F4A  8B 8B 8A 02 00 00         MOV ECX,dword ptr [EBX + 0x28a]
00506F50  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00506F53  25 FF 00 00 00            AND EAX,0xff
00506F58  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00506F5B  50                        PUSH EAX
00506F5C  2B F0                     SUB ESI,EAX
00506F5E  6A 05                     PUSH 0x5
00506F60  56                        PUSH ESI
00506F61  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00506F64  52                        PUSH EDX
00506F65  6A 00                     PUSH 0x0
00506F67  51                        PUSH ECX
00506F68  B9 7E 00 00 00            MOV ECX,0x7e
00506F6D  2B C8                     SUB ECX,EAX
00506F6F  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506F75  8D 56 37                  LEA EDX,[ESI + 0x37]
00506F78  51                        PUSH ECX
00506F79  52                        PUSH EDX
00506F7A  6A 00                     PUSH 0x0
00506F7C  50                        PUSH EAX
00506F7D  E8 6E E6 1A 00            CALL 0x006b55f0
00506F82  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
00506F88  6A 01                     PUSH 0x1
00506F8A  51                        PUSH ECX
00506F8B  E8 10 44 20 00            CALL 0x0070b3a0
00506F90  50                        PUSH EAX
00506F91  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00506F97  6A 06                     PUSH 0x6
00506F99  8D 56 05                  LEA EDX,[ESI + 0x5]
00506F9C  6A 5C                     PUSH 0x5c
00506F9E  52                        PUSH EDX
00506F9F  50                        PUSH EAX
00506FA0  E8 84 C2 EF FF            CALL 0x00403229
00506FA5  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00506FAB  83 C4 1C                  ADD ESP,0x1c
00506FAE  83 C6 02                  ADD ESI,0x2
00506FB1  6A 0A                     PUSH 0xa
00506FB3  68 B2 00 00 00            PUSH 0xb2
00506FB8  6A 52                     PUSH 0x52
00506FBA  56                        PUSH ESI
00506FBB  6A 00                     PUSH 0x0
00506FBD  51                        PUSH ECX
00506FBE  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00506FC4  E8 C7 9A 20 00            CALL 0x00710a90
00506FC9  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00506FCF  8A 83 1A 0C 00 00         MOV AL,byte ptr [EBX + 0xc1a]
00506FD5  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
00506FDB  52                        PUSH EDX
00506FDC  6A 00                     PUSH 0x0
00506FDE  50                        PUSH EAX
00506FDF  51                        PUSH ECX
00506FE0  E8 9F C6 EF FF            CALL 0x00403684
00506FE5  83 C4 0C                  ADD ESP,0xc
00506FE8  50                        PUSH EAX
00506FE9  E8 52 91 1A 00            CALL 0x006b0140
00506FEE  8B F8                     MOV EDI,EAX
00506FF0  83 C9 FF                  OR ECX,0xffffffff
00506FF3  33 C0                     XOR EAX,EAX
00506FF5  6A 0A                     PUSH 0xa
00506FF7  F2 AE                     SCASB.REPNE ES:EDI
00506FF9  F7 D1                     NOT ECX
00506FFB  2B F9                     SUB EDI,ECX
00506FFD  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
00507003  8B D1                     MOV EDX,ECX
00507005  8B F7                     MOV ESI,EDI
00507007  8B F8                     MOV EDI,EAX
00507009  50                        PUSH EAX
0050700A  C1 E9 02                  SHR ECX,0x2
0050700D  F3 A5                     MOVSD.REP ES:EDI,ESI
0050700F  8B CA                     MOV ECX,EDX
00507011  83 E1 03                  AND ECX,0x3
00507014  F3 A4                     MOVSB.REP ES:EDI,ESI
00507016  E8 45 75 22 00            CALL 0x0072e560
0050701B  83 C4 08                  ADD ESP,0x8
0050701E  85 C0                     TEST EAX,EAX
00507020  74 12                     JZ 0x00507034
LAB_00507022:
00507022  6A 0A                     PUSH 0xa
00507024  50                        PUSH EAX
00507025  C6 00 20                  MOV byte ptr [EAX],0x20
00507028  E8 33 75 22 00            CALL 0x0072e560
0050702D  83 C4 08                  ADD ESP,0x8
00507030  85 C0                     TEST EAX,EAX
00507032  75 EE                     JNZ 0x00507022
CPanelTy::PaintCtrlObj::cf_common_exit_00507034:
00507034  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050703A  6A FF                     PUSH -0x1
0050703C  6A FF                     PUSH -0x1
0050703E  6A 00                     PUSH 0x0
00507040  6A FF                     PUSH -0x1
00507042  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
00507048  6A FE                     PUSH -0x2
0050704A  50                        PUSH EAX
0050704B  E8 20 AB 20 00            CALL 0x00711b70
00507050  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00507053  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
00507059  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050705F  68 14 27 00 00            PUSH 0x2714
00507064  8D 70 41                  LEA ESI,[EAX + 0x41]
00507067  51                        PUSH ECX
00507068  6A 5D                     PUSH 0x5d
0050706A  56                        PUSH ESI
0050706B  52                        PUSH EDX
0050706C  8B CB                     MOV ECX,EBX
0050706E  E8 0A DC EF FF            CALL 0x00404c7d
00507073  66 8B 83 20 0C 00 00      MOV AX,word ptr [EBX + 0xc20]
0050707A  66 8B 8B 1C 0C 00 00      MOV CX,word ptr [EBX + 0xc1c]
00507081  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00507087  6A 02                     PUSH 0x2
00507089  6A 04                     PUSH 0x4
0050708B  50                        PUSH EAX
0050708C  51                        PUSH ECX
0050708D  6A 68                     PUSH 0x68
0050708F  56                        PUSH ESI
00507090  52                        PUSH EDX
00507091  8B CB                     MOV ECX,EBX
00507093  E8 F5 E9 EF FF            CALL 0x00405a8d
00507098  E9 F2 06 00 00            JMP 0x0050778f
LAB_0050709d:
0050709D  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005070A3  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005070A9  6A 2F                     PUSH 0x2f
005070AB  68 B2 00 00 00            PUSH 0xb2
005070B0  83 C6 02                  ADD ESI,0x2
005070B3  6A 52                     PUSH 0x52
005070B5  56                        PUSH ESI
005070B6  6A 00                     PUSH 0x0
005070B8  50                        PUSH EAX
005070B9  E8 D2 99 20 00            CALL 0x00710a90
LAB_005070be:
005070BE  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005070C4  6A FF                     PUSH -0x1
005070C6  6A FF                     PUSH -0x1
005070C8  6A 00                     PUSH 0x0
005070CA  6A FF                     PUSH -0x1
005070CC  6A FE                     PUSH -0x2
005070CE  51                        PUSH ECX
005070CF  68 13 27 00 00            PUSH 0x2713
005070D4  E9 A5 06 00 00            JMP 0x0050777e
switchD_00506878::caseD_38:
005070D9  8B 93 ED 09 00 00         MOV EDX,dword ptr [EBX + 0x9ed]
005070DF  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005070E5  8B CB                     MOV ECX,EBX
005070E7  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005070EA  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005070ED  2B C7                     SUB EAX,EDI
005070EF  99                        CDQ
005070F0  2B C2                     SUB EAX,EDX
005070F2  D1 F8                     SAR EAX,0x1
005070F4  50                        PUSH EAX
005070F5  E8 55 CD EF FF            CALL 0x00403e4f
005070FA  E9 90 06 00 00            JMP 0x0050778f
switchD_00506878::caseD_35:
005070FF  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00507105  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
0050710B  51                        PUSH ECX
0050710C  6A 01                     PUSH 0x1
0050710E  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00507111  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00507114  2B C2                     SUB EAX,EDX
00507116  6A 50                     PUSH 0x50
00507118  99                        CDQ
00507119  2B C2                     SUB EAX,EDX
0050711B  8B F0                     MOV ESI,EAX
0050711D  D1 FE                     SAR ESI,0x1
0050711F  56                        PUSH ESI
00507120  57                        PUSH EDI
00507121  E8 03 C1 EF FF            CALL 0x00403229
00507126  8A 83 31 0C 00 00         MOV AL,byte ptr [EBX + 0xc31]
0050712C  83 C4 14                  ADD ESP,0x14
0050712F  84 C0                     TEST AL,AL
00507131  74 15                     JZ 0x00507148
00507133  56                        PUSH ESI
00507134  8B CB                     MOV ECX,EBX
00507136  E8 82 E6 EF FF            CALL 0x004057bd
0050713B  56                        PUSH ESI
0050713C  8B CB                     MOV ECX,EBX
0050713E  E8 1F E7 EF FF            CALL 0x00405862
00507143  E9 47 06 00 00            JMP 0x0050778f
LAB_00507148:
00507148  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050714E  6A 2F                     PUSH 0x2f
00507150  68 B2 00 00 00            PUSH 0xb2
00507155  83 C6 02                  ADD ESI,0x2
00507158  6A 52                     PUSH 0x52
0050715A  56                        PUSH ESI
0050715B  6A 00                     PUSH 0x0
0050715D  51                        PUSH ECX
0050715E  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00507164  E8 27 99 20 00            CALL 0x00710a90
00507169  66 83 BB 2F 0C 00 00 00   CMP word ptr [EBX + 0xc2f],0x0
00507171  0F 84 47 FF FF FF         JZ 0x005070be
00507177  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050717D  52                        PUSH EDX
0050717E  68 3C 27 00 00            PUSH 0x273c
00507183  E8 B8 8F 1A 00            CALL 0x006b0140
00507188  50                        PUSH EAX
00507189  33 C0                     XOR EAX,EAX
0050718B  66 8B 83 2F 0C 00 00      MOV AX,word ptr [EBX + 0xc2f]
00507192  50                        PUSH EAX
00507193  68 64 28 7C 00            PUSH 0x7c2864
00507198  68 3A F3 80 00            PUSH 0x80f33a
0050719D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005071A3  83 C4 10                  ADD ESP,0x10
005071A6  6A FF                     PUSH -0x1
005071A8  6A FF                     PUSH -0x1
005071AA  6A 00                     PUSH 0x0
005071AC  6A FF                     PUSH -0x1
005071AE  6A FE                     PUSH -0x2
005071B0  68 3A F3 80 00            PUSH 0x80f33a
005071B5  E9 CA 05 00 00            JMP 0x00507784
switchD_00506878::caseD_3a:
005071BA  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
005071C0  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
005071C6  51                        PUSH ECX
005071C7  6A 01                     PUSH 0x1
005071C9  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005071CC  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005071CF  2B C2                     SUB EAX,EDX
005071D1  6A 50                     PUSH 0x50
005071D3  99                        CDQ
005071D4  2B C2                     SUB EAX,EDX
005071D6  8B F0                     MOV ESI,EAX
005071D8  D1 FE                     SAR ESI,0x1
005071DA  56                        PUSH ESI
005071DB  57                        PUSH EDI
005071DC  E8 48 C0 EF FF            CALL 0x00403229
005071E1  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005071E7  83 C4 14                  ADD ESP,0x14
005071EA  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005071F0  8D 7E 02                  LEA EDI,[ESI + 0x2]
005071F3  6A 0C                     PUSH 0xc
005071F5  6A 69                     PUSH 0x69
005071F7  6A 52                     PUSH 0x52
005071F9  57                        PUSH EDI
005071FA  6A 00                     PUSH 0x0
005071FC  52                        PUSH EDX
005071FD  E8 8E 98 20 00            CALL 0x00710a90
00507202  A1 18 76 80 00            MOV EAX,[0x00807618]
00507207  6A FF                     PUSH -0x1
00507209  6A FF                     PUSH -0x1
0050720B  6A 01                     PUSH 0x1
0050720D  6A FF                     PUSH -0x1
0050720F  6A FD                     PUSH -0x3
00507211  50                        PUSH EAX
00507212  68 B7 36 00 00            PUSH 0x36b7
00507217  E8 24 8F 1A 00            CALL 0x006b0140
0050721C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00507222  50                        PUSH EAX
00507223  E8 48 A9 20 00            CALL 0x00711b70
00507228  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050722E  6A 0C                     PUSH 0xc
00507230  6A 69                     PUSH 0x69
00507232  6A 5D                     PUSH 0x5d
00507234  57                        PUSH EDI
00507235  6A 00                     PUSH 0x0
00507237  51                        PUSH ECX
00507238  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050723E  E8 4D 98 20 00            CALL 0x00710a90
00507243  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00507249  6A FF                     PUSH -0x1
0050724B  6A FF                     PUSH -0x1
0050724D  6A 01                     PUSH 0x1
0050724F  6A FF                     PUSH -0x1
00507251  6A FD                     PUSH -0x3
00507253  52                        PUSH EDX
00507254  68 B8 36 00 00            PUSH 0x36b8
00507259  E8 E2 8E 1A 00            CALL 0x006b0140
0050725E  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00507264  50                        PUSH EAX
00507265  E8 06 A9 20 00            CALL 0x00711b70
0050726A  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00507270  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00507276  6A 0C                     PUSH 0xc
00507278  68 B2 00 00 00            PUSH 0xb2
0050727D  6A 69                     PUSH 0x69
0050727F  57                        PUSH EDI
00507280  6A 00                     PUSH 0x0
00507282  50                        PUSH EAX
00507283  E8 08 98 20 00            CALL 0x00710a90
00507288  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050728E  6A FF                     PUSH -0x1
00507290  6A FF                     PUSH -0x1
00507292  6A 01                     PUSH 0x1
00507294  6A FF                     PUSH -0x1
00507296  6A FE                     PUSH -0x2
00507298  51                        PUSH ECX
00507299  68 B6 36 00 00            PUSH 0x36b6
0050729E  E8 9D 8E 1A 00            CALL 0x006b0140
005072A3  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005072A9  50                        PUSH EAX
005072AA  E8 C1 A8 20 00            CALL 0x00711b70
005072AF  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005072B3  8A 83 3A 0C 00 00         MOV AL,byte ptr [EBX + 0xc3a]
005072B9  84 C0                     TEST AL,AL
005072BB  76 41                     JBE 0x005072fe
LAB_005072bd:
005072BD  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
005072C3  6A 03                     PUSH 0x3
005072C5  52                        PUSH EDX
005072C6  E8 D5 40 20 00            CALL 0x0070b3a0
005072CB  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
005072D1  50                        PUSH EAX
005072D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005072D5  6A 01                     PUSH 0x1
005072D7  25 FF 00 00 00            AND EAX,0xff
005072DC  6A 54                     PUSH 0x54
005072DE  8D 4C 86 70               LEA ECX,[ESI + EAX*0x4 + 0x70]
005072E2  51                        PUSH ECX
005072E3  52                        PUSH EDX
005072E4  E8 40 BF EF FF            CALL 0x00403229
005072E9  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005072EC  8A 8B 3A 0C 00 00         MOV CL,byte ptr [EBX + 0xc3a]
005072F2  83 C4 1C                  ADD ESP,0x1c
005072F5  FE C0                     INC AL
005072F7  3A C1                     CMP AL,CL
005072F9  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005072FC  72 BF                     JC 0x005072bd
LAB_005072fe:
005072FE  80 7D FC 0F               CMP byte ptr [EBP + -0x4],0xf
00507302  73 45                     JNC 0x00507349
00507304  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00507307  B9 0F 00 00 00            MOV ECX,0xf
0050730C  25 FF 00 00 00            AND EAX,0xff
00507311  2B C8                     SUB ECX,EAX
00507313  8D 7C 86 70               LEA EDI,[ESI + EAX*0x4 + 0x70]
00507317  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0050731a:
0050731A  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
00507320  6A 00                     PUSH 0x0
00507322  50                        PUSH EAX
00507323  E8 78 40 20 00            CALL 0x0070b3a0
00507328  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050732E  50                        PUSH EAX
0050732F  6A 01                     PUSH 0x1
00507331  6A 54                     PUSH 0x54
00507333  57                        PUSH EDI
00507334  51                        PUSH ECX
00507335  E8 EF BE EF FF            CALL 0x00403229
0050733A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0050733D  83 C4 1C                  ADD ESP,0x1c
00507340  83 C7 04                  ADD EDI,0x4
00507343  48                        DEC EAX
00507344  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00507347  75 D1                     JNZ 0x0050731a
LAB_00507349:
00507349  8A 83 3B 0C 00 00         MOV AL,byte ptr [EBX + 0xc3b]
0050734F  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00507353  84 C0                     TEST AL,AL
00507355  76 41                     JBE 0x00507398
LAB_00507357:
00507357  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050735D  6A 03                     PUSH 0x3
0050735F  52                        PUSH EDX
00507360  E8 3B 40 20 00            CALL 0x0070b3a0
00507365  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050736B  50                        PUSH EAX
0050736C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050736F  6A 01                     PUSH 0x1
00507371  25 FF 00 00 00            AND EAX,0xff
00507376  6A 5F                     PUSH 0x5f
00507378  8D 4C 86 70               LEA ECX,[ESI + EAX*0x4 + 0x70]
0050737C  51                        PUSH ECX
0050737D  52                        PUSH EDX
0050737E  E8 A6 BE EF FF            CALL 0x00403229
00507383  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00507386  8A 8B 3B 0C 00 00         MOV CL,byte ptr [EBX + 0xc3b]
0050738C  83 C4 1C                  ADD ESP,0x1c
0050738F  FE C0                     INC AL
00507391  3A C1                     CMP AL,CL
00507393  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00507396  72 BF                     JC 0x00507357
LAB_00507398:
00507398  80 7D FC 0F               CMP byte ptr [EBP + -0x4],0xf
0050739C  73 45                     JNC 0x005073e3
0050739E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005073A1  B9 0F 00 00 00            MOV ECX,0xf
005073A6  25 FF 00 00 00            AND EAX,0xff
005073AB  2B C8                     SUB ECX,EAX
005073AD  8D 7C 86 70               LEA EDI,[ESI + EAX*0x4 + 0x70]
005073B1  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_005073b4:
005073B4  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
005073BA  6A 00                     PUSH 0x0
005073BC  50                        PUSH EAX
005073BD  E8 DE 3F 20 00            CALL 0x0070b3a0
005073C2  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
005073C8  50                        PUSH EAX
005073C9  6A 01                     PUSH 0x1
005073CB  6A 5F                     PUSH 0x5f
005073CD  57                        PUSH EDI
005073CE  51                        PUSH ECX
005073CF  E8 55 BE EF FF            CALL 0x00403229
005073D4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005073D7  83 C4 1C                  ADD ESP,0x1c
005073DA  83 C7 04                  ADD EDI,0x4
005073DD  48                        DEC EAX
005073DE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005073E1  75 D1                     JNZ 0x005073b4
LAB_005073e3:
005073E3  33 C0                     XOR EAX,EAX
005073E5  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005073E9  66 8B 83 34 0C 00 00      MOV AX,word ptr [EBX + 0xc34]
005073F0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005073F3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005073F8  C1 E2 03                  SHL EDX,0x3
005073FB  F7 E2                     MUL EDX
005073FD  C1 EA 07                  SHR EDX,0x7
00507400  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00507403  74 41                     JZ 0x00507446
00507405  33 FF                     XOR EDI,EDI
LAB_00507407:
00507407  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050740D  6A 02                     PUSH 0x2
0050740F  50                        PUSH EAX
00507410  E8 8B 3F 20 00            CALL 0x0070b3a0
00507415  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050741B  50                        PUSH EAX
0050741C  6A 01                     PUSH 0x1
0050741E  8D 4C BE 0B               LEA ECX,[ESI + EDI*0x4 + 0xb]
00507422  6A 76                     PUSH 0x76
00507424  51                        PUSH ECX
00507425  52                        PUSH EDX
00507426  E8 FE BD EF FF            CALL 0x00403229
0050742B  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
0050742E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00507431  83 C4 1C                  ADD ESP,0x1c
00507434  FE C2                     INC DL
00507436  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00507439  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0050743C  81 E7 FF 00 00 00         AND EDI,0xff
00507442  3B F8                     CMP EDI,EAX
00507444  72 C1                     JC 0x00507407
LAB_00507446:
00507446  80 7D FC 28               CMP byte ptr [EBP + -0x4],0x28
0050744A  0F 83 3F 03 00 00         JNC 0x0050778f
00507450  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00507453  BF 28 00 00 00            MOV EDI,0x28
00507458  25 FF 00 00 00            AND EAX,0xff
0050745D  2B F8                     SUB EDI,EAX
0050745F  8D 74 86 0B               LEA ESI,[ESI + EAX*0x4 + 0xb]
LAB_00507463:
00507463  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
00507469  6A 00                     PUSH 0x0
0050746B  50                        PUSH EAX
0050746C  E8 2F 3F 20 00            CALL 0x0070b3a0
00507471  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00507477  50                        PUSH EAX
00507478  6A 01                     PUSH 0x1
0050747A  6A 76                     PUSH 0x76
0050747C  56                        PUSH ESI
0050747D  51                        PUSH ECX
0050747E  E8 A6 BD EF FF            CALL 0x00403229
00507483  83 C4 1C                  ADD ESP,0x1c
00507486  83 C6 04                  ADD ESI,0x4
00507489  4F                        DEC EDI
0050748A  75 D7                     JNZ 0x00507463
0050748C  E9 FE 02 00 00            JMP 0x0050778f
switchD_00506878::caseD_34:
00507491  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00507497  8B 93 F9 09 00 00         MOV EDX,dword ptr [EBX + 0x9f9]
0050749D  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005074A0  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005074A3  2B C7                     SUB EAX,EDI
005074A5  99                        CDQ
005074A6  2B C2                     SUB EAX,EDX
005074A8  8B F0                     MOV ESI,EAX
005074AA  8B 83 05 0A 00 00         MOV EAX,dword ptr [EBX + 0xa05]
005074B0  50                        PUSH EAX
005074B1  6A 01                     PUSH 0x1
005074B3  6A 1F                     PUSH 0x1f
005074B5  6A 60                     PUSH 0x60
005074B7  51                        PUSH ECX
005074B8  D1 FE                     SAR ESI,0x1
005074BA  E8 6A BD EF FF            CALL 0x00403229
005074BF  83 C4 14                  ADD ESP,0x14
005074C2  8B CB                     MOV ECX,EBX
005074C4  56                        PUSH ESI
005074C5  E8 5C C0 EF FF            CALL 0x00403526
005074CA  E9 C0 02 00 00            JMP 0x0050778f
switchD_00506878::caseD_50:
005074CF  8B 8B F9 09 00 00         MOV ECX,dword ptr [EBX + 0x9f9]
005074D5  8B B3 94 01 00 00         MOV ESI,dword ptr [EBX + 0x194]
005074DB  51                        PUSH ECX
005074DC  6A 01                     PUSH 0x1
005074DE  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005074E1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005074E4  2B C2                     SUB EAX,EDX
005074E6  6A 36                     PUSH 0x36
005074E8  99                        CDQ
005074E9  2B C2                     SUB EAX,EDX
005074EB  D1 F8                     SAR EAX,0x1
005074ED  50                        PUSH EAX
005074EE  56                        PUSH ESI
005074EF  E8 35 BD EF FF            CALL 0x00403229
005074F4  83 C4 14                  ADD ESP,0x14
005074F7  E9 93 02 00 00            JMP 0x0050778f
switchD_00506878::caseD_3c:
005074FC  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
00507502  8B BB 94 01 00 00         MOV EDI,dword ptr [EBX + 0x194]
00507508  51                        PUSH ECX
00507509  6A 01                     PUSH 0x1
0050750B  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0050750E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00507511  2B C2                     SUB EAX,EDX
00507513  6A 50                     PUSH 0x50
00507515  99                        CDQ
00507516  2B C2                     SUB EAX,EDX
00507518  8B F0                     MOV ESI,EAX
0050751A  D1 FE                     SAR ESI,0x1
0050751C  56                        PUSH ESI
0050751D  57                        PUSH EDI
0050751E  E8 06 BD EF FF            CALL 0x00403229
00507523  33 C0                     XOR EAX,EAX
00507525  83 C4 14                  ADD ESP,0x14
00507528  8A 83 3C 0C 00 00         MOV AL,byte ptr [EBX + 0xc3c]
0050752E  83 F8 03                  CMP EAX,0x3
00507531  0F 87 58 02 00 00         JA 0x0050778f
switchD_00507537::switchD:
00507537  FF 24 85 54 79 50 00      JMP dword ptr [EAX*0x4 + 0x507954]
switchD_00507537::caseD_0:
0050753E  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
00507544  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00507547  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0050754A  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00507550  51                        PUSH ECX
00507551  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
00507557  52                        PUSH EDX
00507558  6A 50                     PUSH 0x50
0050755A  56                        PUSH ESI
0050755B  6A 00                     PUSH 0x0
0050755D  50                        PUSH EAX
0050755E  E8 2D 95 20 00            CALL 0x00710a90
00507563  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00507569  6A FF                     PUSH -0x1
0050756B  6A FF                     PUSH -0x1
0050756D  6A 01                     PUSH 0x1
0050756F  6A FF                     PUSH -0x1
00507571  6A FE                     PUSH -0x2
00507573  51                        PUSH ECX
00507574  68 BB 36 00 00            PUSH 0x36bb
00507579  E9 00 02 00 00            JMP 0x0050777e
switchD_00507537::caseD_1:
0050757E  8B 93 0D 0A 00 00         MOV EDX,dword ptr [EBX + 0xa0d]
00507584  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050758A  52                        PUSH EDX
0050758B  6A 01                     PUSH 0x1
0050758D  8D 46 05                  LEA EAX,[ESI + 0x5]
00507590  6A 65                     PUSH 0x65
00507592  50                        PUSH EAX
00507593  51                        PUSH ECX
00507594  E8 90 BC EF FF            CALL 0x00403229
00507599  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050759F  83 C4 14                  ADD ESP,0x14
005075A2  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005075A8  8D 56 02                  LEA EDX,[ESI + 0x2]
005075AB  6A 0A                     PUSH 0xa
005075AD  68 B2 00 00 00            PUSH 0xb2
005075B2  6A 52                     PUSH 0x52
005075B4  52                        PUSH EDX
005075B5  6A 00                     PUSH 0x0
005075B7  50                        PUSH EAX
005075B8  E8 D3 94 20 00            CALL 0x00710a90
005075BD  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005075C3  6A FF                     PUSH -0x1
005075C5  6A FF                     PUSH -0x1
005075C7  6A 00                     PUSH 0x0
005075C9  6A FF                     PUSH -0x1
005075CB  6A FE                     PUSH -0x2
005075CD  51                        PUSH ECX
005075CE  68 BD 36 00 00            PUSH 0x36bd
005075D3  E8 68 8B 1A 00            CALL 0x006b0140
005075D8  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005075DE  50                        PUSH EAX
005075DF  E8 8C A5 20 00            CALL 0x00711b70
005075E4  8A 93 3D 0C 00 00         MOV DL,byte ptr [EBX + 0xc3d]
005075EA  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
005075F0  68 14 27 00 00            PUSH 0x2714
005075F5  52                        PUSH EDX
005075F6  8D 46 39                  LEA EAX,[ESI + 0x39]
005075F9  6A 65                     PUSH 0x65
005075FB  50                        PUSH EAX
005075FC  51                        PUSH ECX
005075FD  8B CB                     MOV ECX,EBX
005075FF  E8 79 D6 EF FF            CALL 0x00404c7d
00507604  8B 83 3D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc3d]
0050760A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0050760D  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00507612  C1 E2 03                  SHL EDX,0x3
00507615  F7 E2                     MUL EDX
00507617  B8 00 00 00 00            MOV EAX,0x0
0050761C  C1 EA 05                  SHR EDX,0x5
0050761F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00507622  74 3B                     JZ 0x0050765f
00507624  8D 7E 0B                  LEA EDI,[ESI + 0xb]
00507627  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0050762A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0050762d:
0050762D  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
00507633  6A 03                     PUSH 0x3
00507635  50                        PUSH EAX
00507636  E8 65 3D 20 00            CALL 0x0070b3a0
0050763B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
00507641  50                        PUSH EAX
00507642  6A 01                     PUSH 0x1
00507644  6A 5C                     PUSH 0x5c
00507646  57                        PUSH EDI
00507647  51                        PUSH ECX
00507648  E8 DC BB EF FF            CALL 0x00403229
0050764D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00507650  83 C4 1C                  ADD ESP,0x1c
00507653  83 C7 04                  ADD EDI,0x4
00507656  48                        DEC EAX
00507657  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0050765A  75 D1                     JNZ 0x0050762d
0050765C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_0050765f:
0050765F  83 F8 28                  CMP EAX,0x28
00507662  0F 83 27 01 00 00         JNC 0x0050778f
00507668  BF 28 00 00 00            MOV EDI,0x28
0050766D  8D 74 86 0B               LEA ESI,[ESI + EAX*0x4 + 0xb]
00507671  2B F8                     SUB EDI,EAX
LAB_00507673:
00507673  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
00507679  6A 00                     PUSH 0x0
0050767B  52                        PUSH EDX
0050767C  E8 1F 3D 20 00            CALL 0x0070b3a0
00507681  50                        PUSH EAX
00507682  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00507688  6A 01                     PUSH 0x1
0050768A  6A 5C                     PUSH 0x5c
0050768C  56                        PUSH ESI
0050768D  50                        PUSH EAX
0050768E  E8 96 BB EF FF            CALL 0x00403229
00507693  83 C4 1C                  ADD ESP,0x1c
00507696  83 C6 04                  ADD ESI,0x4
00507699  4F                        DEC EDI
0050769A  75 D7                     JNZ 0x00507673
0050769C  E9 EE 00 00 00            JMP 0x0050778f
switchD_00507537::caseD_2:
005076A1  8B 8B ED 09 00 00         MOV ECX,dword ptr [EBX + 0x9ed]
005076A7  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
005076AD  6A 21                     PUSH 0x21
005076AF  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005076B2  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005076B8  52                        PUSH EDX
005076B9  6A 54                     PUSH 0x54
005076BB  56                        PUSH ESI
005076BC  6A 00                     PUSH 0x0
005076BE  50                        PUSH EAX
005076BF  E8 CC 93 20 00            CALL 0x00710a90
005076C4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005076CA  6A FF                     PUSH -0x1
005076CC  6A FF                     PUSH -0x1
005076CE  6A 01                     PUSH 0x1
005076D0  6A FF                     PUSH -0x1
005076D2  6A FE                     PUSH -0x2
005076D4  51                        PUSH ECX
005076D5  68 BC 36 00 00            PUSH 0x36bc
005076DA  E8 61 8A 1A 00            CALL 0x006b0140
005076DF  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
005076E5  50                        PUSH EAX
005076E6  E8 85 A4 20 00            CALL 0x00711b70
005076EB  8B 93 3D 0C 00 00         MOV EDX,dword ptr [EBX + 0xc3d]
005076F1  8D BB E1 01 00 00         LEA EDI,[EBX + 0x1e1]
005076F7  52                        PUSH EDX
005076F8  68 E4 1A 7C 00            PUSH 0x7c1ae4
005076FD  57                        PUSH EDI
005076FE  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00507704  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
0050770A  83 C4 0C                  ADD ESP,0xc
0050770D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00507710  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00507713  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00507719  83 E9 21                  SUB ECX,0x21
0050771C  51                        PUSH ECX
0050771D  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
00507723  52                        PUSH EDX
00507724  6A 71                     PUSH 0x71
00507726  56                        PUSH ESI
00507727  6A 00                     PUSH 0x0
00507729  50                        PUSH EAX
0050772A  E8 61 93 20 00            CALL 0x00710a90
0050772F  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
00507735  6A 00                     PUSH 0x0
00507737  6A FF                     PUSH -0x1
00507739  6A FF                     PUSH -0x1
0050773B  57                        PUSH EDI
0050773C  E8 7F A2 20 00            CALL 0x007119c0
00507741  EB 4C                     JMP 0x0050778f
switchD_00507537::caseD_3:
00507743  8B 83 ED 09 00 00         MOV EAX,dword ptr [EBX + 0x9ed]
00507749  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0050774C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0050774F  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
00507755  51                        PUSH ECX
00507756  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050775C  52                        PUSH EDX
0050775D  6A 50                     PUSH 0x50
0050775F  56                        PUSH ESI
00507760  6A 00                     PUSH 0x0
00507762  50                        PUSH EAX
00507763  E8 28 93 20 00            CALL 0x00710a90
00507768  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050776E  6A FF                     PUSH -0x1
00507770  6A FF                     PUSH -0x1
00507772  6A 01                     PUSH 0x1
00507774  6A FF                     PUSH -0x1
00507776  6A FE                     PUSH -0x2
00507778  51                        PUSH ECX
00507779  68 BE 36 00 00            PUSH 0x36be
LAB_0050777e:
0050777E  E8 BD 89 1A 00            CALL 0x006b0140
00507783  50                        PUSH EAX
LAB_00507784:
00507784  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050778A  E8 E1 A3 20 00            CALL 0x00711b70
switchD_00506878::caseD_3b:
0050778F  8B CB                     MOV ECX,EBX
00507791  E8 1F A2 EF FF            CALL 0x004019b5
switchD_00506377::caseD_df:
00507796  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050779C  85 C0                     TEST EAX,EAX
0050779E  7C 1A                     JL 0x005077ba
005077A0  8B 93 A8 00 00 00         MOV EDX,dword ptr [EBX + 0xa8]
005077A6  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
005077A9  52                        PUSH EDX
005077AA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005077B0  51                        PUSH ECX
005077B1  6A FF                     PUSH -0x1
005077B3  50                        PUSH EAX
005077B4  52                        PUSH EDX
005077B5  E8 86 BE 1A 00            CALL 0x006b3640
LAB_005077ba:
005077BA  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
005077BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005077C2  5F                        POP EDI
005077C3  5E                        POP ESI
005077C4  5B                        POP EBX
005077C5  8B E5                     MOV ESP,EBP
005077C7  5D                        POP EBP
005077C8  C2 04 00                  RET 0x4
LAB_005077cb:
005077CB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
005077CE  68 48 28 7C 00            PUSH 0x7c2848
005077D3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005077D8  56                        PUSH ESI
005077D9  6A 00                     PUSH 0x0
005077DB  68 48 03 00 00            PUSH 0x348
005077E0  68 00 27 7C 00            PUSH 0x7c2700
005077E5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005077EB  E8 E0 5C 1A 00            CALL 0x006ad4d0
005077F0  83 C4 18                  ADD ESP,0x18
005077F3  85 C0                     TEST EAX,EAX
005077F5  74 01                     JZ 0x005077f8
005077F7  CC                        INT3
LAB_005077f8:
005077F8  68 48 03 00 00            PUSH 0x348
005077FD  68 00 27 7C 00            PUSH 0x7c2700
00507802  6A 00                     PUSH 0x0
00507804  56                        PUSH ESI
00507805  E8 36 E6 19 00            CALL 0x006a5e40
0050780A  5F                        POP EDI
0050780B  5E                        POP ESI
0050780C  5B                        POP EBX
0050780D  8B E5                     MOV ESP,EBP
0050780F  5D                        POP EBP
00507810  C2 04 00                  RET 0x4
