STAllPlayersC::SetActivePanel:
0043AE40  55                        PUSH EBP
0043AE41  8B EC                     MOV EBP,ESP
0043AE43  83 EC 0C                  SUB ESP,0xc
0043AE46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043AE49  53                        PUSH EBX
0043AE4A  33 DB                     XOR EBX,EBX
0043AE4C  56                        PUSH ESI
0043AE4D  2B C3                     SUB EAX,EBX
0043AE4F  57                        PUSH EDI
0043AE50  8B F1                     MOV ESI,ECX
0043AE52  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0043AE55  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0043AE58  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0043AE5B  74 37                     JZ 0x0043ae94
0043AE5D  48                        DEC EAX
0043AE5E  0F 84 80 00 00 00         JZ 0x0043aee4
0043AE64  68 94 7B 7A 00            PUSH 0x7a7b94
0043AE69  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043AE6E  53                        PUSH EBX
0043AE6F  53                        PUSH EBX
0043AE70  68 2B 1B 00 00            PUSH 0x1b2b
0043AE75  68 04 60 7A 00            PUSH 0x7a6004
0043AE7A  E8 51 26 27 00            CALL 0x006ad4d0
0043AE7F  83 C4 18                  ADD ESP,0x18
0043AE82  85 C0                     TEST EAX,EAX
0043AE84  0F 84 CD 0C 00 00         JZ 0x0043bb57
0043AE8A  CC                        INT3
LAB_0043ae94:
0043AE94  33 C9                     XOR ECX,ECX
0043AE96  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043AE9C  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0043AE9F  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0043AEA2  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0043AEA5  C1 E0 04                  SHL EAX,0x4
0043AEA8  03 C1                     ADD EAX,ECX
0043AEAA  D1 E0                     SHL EAX,0x1
0043AEAC  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
0043AEB2  2B CB                     SUB ECX,EBX
0043AEB4  0F 84 63 0A 00 00         JZ 0x0043b91d
0043AEBA  49                        DEC ECX
0043AEBB  0F 84 CF 07 00 00         JZ 0x0043b690
0043AEC1  68 70 7B 7A 00            PUSH 0x7a7b70
0043AEC6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043AECB  53                        PUSH EBX
0043AECC  53                        PUSH EBX
0043AECD  68 6B 1A 00 00            PUSH 0x1a6b
0043AED2  68 04 60 7A 00            PUSH 0x7a6004
0043AED7  E8 F4 25 27 00            CALL 0x006ad4d0
0043AEDC  83 C4 18                  ADD ESP,0x18
0043AEDF  85 C0                     TEST EAX,EAX
0043AEE1  74 01                     JZ 0x0043aee4
0043AEE3  CC                        INT3
LAB_0043aee4:
0043AEE4  33 C9                     XOR ECX,ECX
0043AEE6  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043AEEC  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0043AEEF  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0043AEF2  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0043AEF5  C1 E0 04                  SHL EAX,0x4
0043AEF8  03 C1                     ADD EAX,ECX
0043AEFA  D1 E0                     SHL EAX,0x1
0043AEFC  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
0043AF02  2B CB                     SUB ECX,EBX
0043AF04  0F 84 A6 03 00 00         JZ 0x0043b2b0
0043AF0A  49                        DEC ECX
0043AF0B  74 30                     JZ 0x0043af3d
0043AF0D  68 70 7B 7A 00            PUSH 0x7a7b70
0043AF12  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043AF17  53                        PUSH EBX
0043AF18  53                        PUSH EBX
0043AF19  68 27 1B 00 00            PUSH 0x1b27
0043AF1E  68 04 60 7A 00            PUSH 0x7a6004
0043AF23  E8 A8 25 27 00            CALL 0x006ad4d0
0043AF28  83 C4 18                  ADD ESP,0x18
0043AF2B  85 C0                     TEST EAX,EAX
0043AF2D  0F 84 24 0C 00 00         JZ 0x0043bb57
0043AF33  CC                        INT3
LAB_0043af3d:
0043AF3D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043AF40  3B FB                     CMP EDI,EBX
0043AF42  0F 84 0F 0C 00 00         JZ 0x0043bb57
0043AF48  8B CF                     MOV ECX,EDI
0043AF4A  C1 E1 04                  SHL ECX,0x4
0043AF4D  8D 84 01 D3 4F 7F 00      LEA EAX,[ECX + EAX*0x1 + 0x7f4fd3]
0043AF54  8B 08                     MOV ECX,dword ptr [EAX]
0043AF56  81 F9 9A 01 00 00         CMP ECX,0x19a
0043AF5C  0F 8F 3C 01 00 00         JG 0x0043b09e
0043AF62  74 47                     JZ 0x0043afab
0043AF64  3B CB                     CMP ECX,EBX
0043AF66  0F 84 EB 0B 00 00         JZ 0x0043bb57
0043AF6C  83 F9 5A                  CMP ECX,0x5a
0043AF6F  74 23                     JZ 0x0043af94
0043AF71  81 F9 72 01 00 00         CMP ECX,0x172
0043AF77  0F 85 32 01 00 00         JNZ 0x0043b0af
0043AF7D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043AF80  BB 01 00 00 00            MOV EBX,0x1
0043AF85  3B CB                     CMP ECX,EBX
0043AF87  0F 85 07 03 00 00         JNZ 0x0043b294
0043AF8D  6A 02                     PUSH 0x2
0043AF8F  E9 3F 02 00 00            JMP 0x0043b1d3
LAB_0043af94:
0043AF94  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043AF97  BB 01 00 00 00            MOV EBX,0x1
0043AF9C  3B CB                     CMP ECX,EBX
0043AF9E  0F 85 E2 06 00 00         JNZ 0x0043b686
0043AFA4  6A 04                     PUSH 0x4
0043AFA6  E9 46 01 00 00            JMP 0x0043b0f1
LAB_0043afab:
0043AFAB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043AFAE  BB 01 00 00 00            MOV EBX,0x1
0043AFB3  3B CB                     CMP ECX,EBX
0043AFB5  0F 85 CB 00 00 00         JNZ 0x0043b086
0043AFBB  8D 55 08                  LEA EDX,[EBP + 0x8]
0043AFBE  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043AFC1  52                        PUSH EDX
0043AFC2  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043AFC5  51                        PUSH ECX
0043AFC6  52                        PUSH EDX
0043AFC7  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043AFCB  8D 4D F4                  LEA ECX,[EBP + -0xc]
0043AFCE  51                        PUSH ECX
0043AFCF  8B 48 0A                  MOV ECX,dword ptr [EAX + 0xa]
0043AFD2  52                        PUSH EDX
0043AFD3  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043AFD6  51                        PUSH ECX
0043AFD7  52                        PUSH EDX
0043AFD8  68 9A 01 00 00            PUSH 0x19a
0043AFDD  8B CE                     MOV ECX,ESI
0043AFDF  E8 0C 75 FC FF            CALL 0x004024f0
0043AFE4  85 C0                     TEST EAX,EAX
0043AFE6  0F 85 9A 00 00 00         JNZ 0x0043b086
0043AFEC  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043AFF1  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043AFF7  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043AFFD  50                        PUSH EAX
0043AFFE  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B003  51                        PUSH ECX
0043B004  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0043B007  52                        PUSH EDX
0043B008  50                        PUSH EAX
0043B009  51                        PUSH ECX
0043B00A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B010  E8 1B 02 2B 00            CALL 0x006eb230
0043B015  3B C3                     CMP EAX,EBX
0043B017  74 6D                     JZ 0x0043b086
0043B019  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B01C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B01F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B022  52                        PUSH EDX
0043B023  50                        PUSH EAX
0043B024  51                        PUSH ECX
0043B025  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B02B  E8 3E 88 FC FF            CALL 0x0040386e
0043B030  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B036  53                        PUSH EBX
0043B037  E8 0B A5 FC FF            CALL 0x00405547
0043B03C  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B042  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B047  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B04D  81 E2 FF 00 00 00         AND EDX,0xff
0043B053  52                        PUSH EDX
0043B054  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B05A  50                        PUSH EAX
0043B05B  51                        PUSH ECX
0043B05C  52                        PUSH EDX
0043B05D  B9 58 76 80 00            MOV ECX,0x807658
0043B062  E8 6D 86 FC FF            CALL 0x004036d4
0043B067  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B06D  E8 E6 7F FC FF            CALL 0x00403058
0043B072  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B07C  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043b086:
0043B086  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043B08B  57                        PUSH EDI
0043B08C  53                        PUSH EBX
0043B08D  50                        PUSH EAX
0043B08E  8B CE                     MOV ECX,ESI
0043B090  E8 EA 80 FC FF            CALL 0x0040317f
0043B095  5F                        POP EDI
0043B096  5E                        POP ESI
0043B097  5B                        POP EBX
0043B098  8B E5                     MOV ESP,EBP
0043B09A  5D                        POP EBP
0043B09B  C2 0C 00                  RET 0xc
LAB_0043b09e:
0043B09E  81 E9 A4 01 00 00         SUB ECX,0x1a4
0043B0A4  0F 84 17 01 00 00         JZ 0x0043b1c1
0043B0AA  83 E9 14                  SUB ECX,0x14
0043B0AD  74 30                     JZ 0x0043b0df
LAB_0043b0af:
0043B0AF  68 1C 7B 7A 00            PUSH 0x7a7b1c
0043B0B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043B0B9  53                        PUSH EBX
0043B0BA  53                        PUSH EBX
0043B0BB  68 C4 1A 00 00            PUSH 0x1ac4
0043B0C0  68 04 60 7A 00            PUSH 0x7a6004
0043B0C5  E8 06 24 27 00            CALL 0x006ad4d0
0043B0CA  83 C4 18                  ADD ESP,0x18
0043B0CD  85 C0                     TEST EAX,EAX
0043B0CF  0F 84 82 0A 00 00         JZ 0x0043bb57
0043B0D5  CC                        INT3
LAB_0043b0df:
0043B0DF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B0E2  BB 01 00 00 00            MOV EBX,0x1
0043B0E7  3B CB                     CMP ECX,EBX
0043B0E9  0F 85 97 05 00 00         JNZ 0x0043b686
0043B0EF  6A 06                     PUSH 0x6
LAB_0043b0f1:
0043B0F1  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043B0F5  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043B0F8  51                        PUSH ECX
0043B0F9  52                        PUSH EDX
0043B0FA  8B CE                     MOV ECX,ESI
0043B0FC  E8 B9 77 FC FF            CALL 0x004028ba
0043B101  8B F8                     MOV EDI,EAX
0043B103  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043B106  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043B109  50                        PUSH EAX
0043B10A  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043B10D  51                        PUSH ECX
0043B10E  52                        PUSH EDX
0043B10F  8B CF                     MOV ECX,EDI
0043B111  E8 AF 67 FC FF            CALL 0x004018c5
0043B116  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043B11B  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043B121  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043B127  50                        PUSH EAX
0043B128  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B12D  51                        PUSH ECX
0043B12E  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
0043B134  52                        PUSH EDX
0043B135  50                        PUSH EAX
0043B136  51                        PUSH ECX
0043B137  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B13D  E8 EE 00 2B 00            CALL 0x006eb230
0043B142  3B C3                     CMP EAX,EBX
0043B144  0F 84 3C 05 00 00         JZ 0x0043b686
0043B14A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B14D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B150  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B153  52                        PUSH EDX
0043B154  50                        PUSH EAX
0043B155  51                        PUSH ECX
0043B156  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B15C  E8 0D 87 FC FF            CALL 0x0040386e
0043B161  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B167  53                        PUSH EBX
0043B168  E8 DA A3 FC FF            CALL 0x00405547
0043B16D  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B173  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B178  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B17E  81 E2 FF 00 00 00         AND EDX,0xff
0043B184  52                        PUSH EDX
0043B185  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B18B  50                        PUSH EAX
0043B18C  51                        PUSH ECX
0043B18D  52                        PUSH EDX
0043B18E  B9 58 76 80 00            MOV ECX,0x807658
0043B193  E8 3C 85 FC FF            CALL 0x004036d4
0043B198  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B19E  E8 B5 7E FC FF            CALL 0x00403058
0043B1A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043B1A6  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B1B0  50                        PUSH EAX
0043B1B1  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
0043B1BB  53                        PUSH EBX
0043B1BC  E9 88 09 00 00            JMP 0x0043bb49
LAB_0043b1c1:
0043B1C1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B1C4  BB 01 00 00 00            MOV EBX,0x1
0043B1C9  3B CB                     CMP ECX,EBX
0043B1CB  0F 85 C3 00 00 00         JNZ 0x0043b294
0043B1D1  6A 05                     PUSH 0x5
LAB_0043b1d3:
0043B1D3  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B1D7  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
0043B1DA  52                        PUSH EDX
0043B1DB  50                        PUSH EAX
0043B1DC  8B CE                     MOV ECX,ESI
0043B1DE  E8 D7 76 FC FF            CALL 0x004028ba
0043B1E3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B1E6  8B F8                     MOV EDI,EAX
0043B1E8  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B1EB  51                        PUSH ECX
0043B1EC  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043B1EF  52                        PUSH EDX
0043B1F0  50                        PUSH EAX
0043B1F1  8B CF                     MOV ECX,EDI
0043B1F3  E8 CD 66 FC FF            CALL 0x004018c5
0043B1F8  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
0043B1FE  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
0043B204  A1 14 74 80 00            MOV EAX,[0x00807414]
0043B209  51                        PUSH ECX
0043B20A  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
0043B210  52                        PUSH EDX
0043B211  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
0043B217  50                        PUSH EAX
0043B218  51                        PUSH ECX
0043B219  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B21F  52                        PUSH EDX
0043B220  E8 0B 00 2B 00            CALL 0x006eb230
0043B225  3B C3                     CMP EAX,EBX
0043B227  74 6B                     JZ 0x0043b294
0043B229  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043B22C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043B22F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0043B232  50                        PUSH EAX
0043B233  51                        PUSH ECX
0043B234  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B23A  52                        PUSH EDX
0043B23B  E8 2E 86 FC FF            CALL 0x0040386e
0043B240  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B246  53                        PUSH EBX
0043B247  E8 FB A2 FC FF            CALL 0x00405547
0043B24C  A1 3C 74 80 00            MOV EAX,[0x0080743c]
0043B251  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0043B257  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
0043B25D  25 FF 00 00 00            AND EAX,0xff
0043B262  50                        PUSH EAX
0043B263  A1 D8 73 80 00            MOV EAX,[0x008073d8]
0043B268  51                        PUSH ECX
0043B269  52                        PUSH EDX
0043B26A  50                        PUSH EAX
0043B26B  B9 58 76 80 00            MOV ECX,0x807658
0043B270  E8 5F 84 FC FF            CALL 0x004036d4
0043B275  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B27B  E8 D8 7D FC FF            CALL 0x00403058
0043B280  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B28A  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
STAllPlayersC::SetActivePanel::cf_common_exit_0043B294:
0043B294  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043B297  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0043B29D  51                        PUSH ECX
0043B29E  53                        PUSH EBX
0043B29F  52                        PUSH EDX
0043B2A0  8B CE                     MOV ECX,ESI
0043B2A2  E8 D8 7E FC FF            CALL 0x0040317f
0043B2A7  5F                        POP EDI
0043B2A8  5E                        POP ESI
0043B2A9  5B                        POP EBX
0043B2AA  8B E5                     MOV ESP,EBP
0043B2AC  5D                        POP EBP
0043B2AD  C2 0C 00                  RET 0xc
LAB_0043b2b0:
0043B2B0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043B2B3  8B CF                     MOV ECX,EDI
0043B2B5  C1 E1 04                  SHL ECX,0x4
0043B2B8  8D 84 01 D3 4F 7F 00      LEA EAX,[ECX + EAX*0x1 + 0x7f4fd3]
0043B2BF  8B 08                     MOV ECX,dword ptr [EAX]
0043B2C1  81 F9 9A 01 00 00         CMP ECX,0x19a
0043B2C7  0F 8F C4 01 00 00         JG 0x0043b491
0043B2CD  0F 84 9E 00 00 00         JZ 0x0043b371
0043B2D3  3B CB                     CMP ECX,EBX
0043B2D5  0F 84 7C 08 00 00         JZ 0x0043bb57
0043B2DB  83 F9 5A                  CMP ECX,0x5a
0043B2DE  74 7D                     JZ 0x0043b35d
0043B2E0  81 F9 72 01 00 00         CMP ECX,0x172
0043B2E6  0F 85 B6 01 00 00         JNZ 0x0043b4a2
0043B2EC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B2EF  BB 01 00 00 00            MOV EBX,0x1
0043B2F4  3B CB                     CMP ECX,EBX
0043B2F6  0F 85 5D 03 00 00         JNZ 0x0043b659
0043B2FC  6A 02                     PUSH 0x2
LAB_0043b2fe:
0043B2FE  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B302  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
0043B305  52                        PUSH EDX
0043B306  50                        PUSH EAX
0043B307  8B CE                     MOV ECX,ESI
0043B309  E8 AC 75 FC FF            CALL 0x004028ba
0043B30E  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B311  8B F8                     MOV EDI,EAX
0043B313  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B316  51                        PUSH ECX
0043B317  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043B31A  52                        PUSH EDX
0043B31B  50                        PUSH EAX
0043B31C  8B CF                     MOV ECX,EDI
0043B31E  E8 A2 65 FC FF            CALL 0x004018c5
0043B323  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
0043B329  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
0043B32F  A1 14 74 80 00            MOV EAX,[0x00807414]
0043B334  51                        PUSH ECX
0043B335  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
0043B33B  52                        PUSH EDX
0043B33C  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
0043B342  50                        PUSH EAX
0043B343  51                        PUSH ECX
0043B344  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B34A  52                        PUSH EDX
0043B34B  E8 E0 FE 2A 00            CALL 0x006eb230
0043B350  3B C3                     CMP EAX,EBX
0043B352  0F 84 01 03 00 00         JZ 0x0043b659
0043B358  E9 91 02 00 00            JMP 0x0043b5ee
LAB_0043b35d:
0043B35D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B360  BB 01 00 00 00            MOV EBX,0x1
0043B365  3B CB                     CMP ECX,EBX
0043B367  0F 85 EC 02 00 00         JNZ 0x0043b659
0043B36D  6A 04                     PUSH 0x4
0043B36F  EB 8D                     JMP 0x0043b2fe
LAB_0043b371:
0043B371  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B374  BB 01 00 00 00            MOV EBX,0x1
0043B379  3B CB                     CMP ECX,EBX
0043B37B  0F 85 CB 00 00 00         JNZ 0x0043b44c
0043B381  8D 55 08                  LEA EDX,[EBP + 0x8]
0043B384  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B387  52                        PUSH EDX
0043B388  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B38B  51                        PUSH ECX
0043B38C  52                        PUSH EDX
0043B38D  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B391  8D 4D F4                  LEA ECX,[EBP + -0xc]
0043B394  51                        PUSH ECX
0043B395  8B 48 0A                  MOV ECX,dword ptr [EAX + 0xa]
0043B398  52                        PUSH EDX
0043B399  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043B39C  51                        PUSH ECX
0043B39D  52                        PUSH EDX
0043B39E  68 9A 01 00 00            PUSH 0x19a
0043B3A3  8B CE                     MOV ECX,ESI
0043B3A5  E8 46 71 FC FF            CALL 0x004024f0
0043B3AA  85 C0                     TEST EAX,EAX
0043B3AC  0F 85 9A 00 00 00         JNZ 0x0043b44c
0043B3B2  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043B3B7  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043B3BD  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043B3C3  50                        PUSH EAX
0043B3C4  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B3C9  51                        PUSH ECX
0043B3CA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0043B3CD  52                        PUSH EDX
0043B3CE  50                        PUSH EAX
0043B3CF  51                        PUSH ECX
0043B3D0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B3D6  E8 55 FE 2A 00            CALL 0x006eb230
0043B3DB  3B C3                     CMP EAX,EBX
0043B3DD  74 6D                     JZ 0x0043b44c
0043B3DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B3E2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B3E5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B3E8  52                        PUSH EDX
0043B3E9  50                        PUSH EAX
0043B3EA  51                        PUSH ECX
0043B3EB  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B3F1  E8 78 84 FC FF            CALL 0x0040386e
0043B3F6  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B3FC  53                        PUSH EBX
0043B3FD  E8 45 A1 FC FF            CALL 0x00405547
0043B402  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B408  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B40D  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B413  81 E2 FF 00 00 00         AND EDX,0xff
0043B419  52                        PUSH EDX
0043B41A  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B420  50                        PUSH EAX
0043B421  51                        PUSH ECX
0043B422  52                        PUSH EDX
0043B423  B9 58 76 80 00            MOV ECX,0x807658
0043B428  E8 A7 82 FC FF            CALL 0x004036d4
0043B42D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B433  E8 20 7C FC FF            CALL 0x00403058
0043B438  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B442  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043b44c:
0043B44C  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043B452  33 C0                     XOR EAX,EAX
0043B454  8A C1                     MOV AL,CL
0043B456  6A 00                     PUSH 0x0
0043B458  6A 00                     PUSH 0x0
0043B45A  6A 00                     PUSH 0x0
0043B45C  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043B45F  51                        PUSH ECX
0043B460  8B CE                     MOV ECX,ESI
0043B462  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043B465  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043B468  C1 E2 04                  SHL EDX,0x4
0043B46B  03 D0                     ADD EDX,EAX
0043B46D  89 1C 55 23 50 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5023],EBX
0043B474  E8 6E 7E FC FF            CALL 0x004032e7
0043B479  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043B47E  57                        PUSH EDI
0043B47F  53                        PUSH EBX
0043B480  50                        PUSH EAX
0043B481  8B CE                     MOV ECX,ESI
0043B483  E8 F7 7C FC FF            CALL 0x0040317f
0043B488  5F                        POP EDI
0043B489  5E                        POP ESI
0043B48A  5B                        POP EBX
0043B48B  8B E5                     MOV ESP,EBP
0043B48D  5D                        POP EBP
0043B48E  C2 0C 00                  RET 0xc
LAB_0043b491:
0043B491  81 E9 A4 01 00 00         SUB ECX,0x1a4
0043B497  0F 84 E9 00 00 00         JZ 0x0043b586
0043B49D  83 E9 14                  SUB ECX,0x14
0043B4A0  74 30                     JZ 0x0043b4d2
LAB_0043b4a2:
0043B4A2  68 CC 7A 7A 00            PUSH 0x7a7acc
0043B4A7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043B4AC  53                        PUSH EBX
0043B4AD  53                        PUSH EBX
0043B4AE  68 23 1B 00 00            PUSH 0x1b23
0043B4B3  68 04 60 7A 00            PUSH 0x7a6004
0043B4B8  E8 13 20 27 00            CALL 0x006ad4d0
0043B4BD  83 C4 18                  ADD ESP,0x18
0043B4C0  85 C0                     TEST EAX,EAX
0043B4C2  0F 84 8F 06 00 00         JZ 0x0043bb57
0043B4C8  CC                        INT3
LAB_0043b4d2:
0043B4D2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B4D5  BB 01 00 00 00            MOV EBX,0x1
0043B4DA  3B CB                     CMP ECX,EBX
0043B4DC  0F 85 77 01 00 00         JNZ 0x0043b659
0043B4E2  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043B4E6  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043B4E9  6A 06                     PUSH 0x6
0043B4EB  51                        PUSH ECX
0043B4EC  52                        PUSH EDX
0043B4ED  8B CE                     MOV ECX,ESI
0043B4EF  E8 C6 73 FC FF            CALL 0x004028ba
0043B4F4  8B F8                     MOV EDI,EAX
0043B4F6  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043B4F9  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043B4FC  50                        PUSH EAX
0043B4FD  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043B500  51                        PUSH ECX
0043B501  52                        PUSH EDX
0043B502  8B CF                     MOV ECX,EDI
0043B504  E8 BC 63 FC FF            CALL 0x004018c5
0043B509  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043B50E  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043B514  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043B51A  50                        PUSH EAX
0043B51B  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B520  51                        PUSH ECX
0043B521  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
0043B527  52                        PUSH EDX
0043B528  50                        PUSH EAX
0043B529  51                        PUSH ECX
0043B52A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B530  E8 FB FC 2A 00            CALL 0x006eb230
0043B535  3B C3                     CMP EAX,EBX
0043B537  0F 84 1C 01 00 00         JZ 0x0043b659
0043B53D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B540  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B543  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B546  52                        PUSH EDX
0043B547  50                        PUSH EAX
0043B548  51                        PUSH ECX
0043B549  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B54F  E8 1A 83 FC FF            CALL 0x0040386e
0043B554  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B55A  53                        PUSH EBX
0043B55B  E8 E7 9F FC FF            CALL 0x00405547
0043B560  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B566  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B56B  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B571  81 E2 FF 00 00 00         AND EDX,0xff
0043B577  52                        PUSH EDX
0043B578  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B57E  50                        PUSH EAX
0043B57F  51                        PUSH ECX
0043B580  52                        PUSH EDX
0043B581  E9 AA 00 00 00            JMP 0x0043b630
LAB_0043b586:
0043B586  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B589  BB 01 00 00 00            MOV EBX,0x1
0043B58E  3B CB                     CMP ECX,EBX
0043B590  0F 85 C3 00 00 00         JNZ 0x0043b659
0043B596  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B59A  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
0043B59D  6A 05                     PUSH 0x5
0043B59F  52                        PUSH EDX
0043B5A0  50                        PUSH EAX
0043B5A1  8B CE                     MOV ECX,ESI
0043B5A3  E8 12 73 FC FF            CALL 0x004028ba
0043B5A8  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B5AB  8B F8                     MOV EDI,EAX
0043B5AD  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B5B0  51                        PUSH ECX
0043B5B1  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043B5B4  52                        PUSH EDX
0043B5B5  50                        PUSH EAX
0043B5B6  8B CF                     MOV ECX,EDI
0043B5B8  E8 08 63 FC FF            CALL 0x004018c5
0043B5BD  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
0043B5C3  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
0043B5C9  A1 14 74 80 00            MOV EAX,[0x00807414]
0043B5CE  51                        PUSH ECX
0043B5CF  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
0043B5D5  52                        PUSH EDX
0043B5D6  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
0043B5DC  50                        PUSH EAX
0043B5DD  51                        PUSH ECX
0043B5DE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B5E4  52                        PUSH EDX
0043B5E5  E8 46 FC 2A 00            CALL 0x006eb230
0043B5EA  3B C3                     CMP EAX,EBX
0043B5EC  74 6B                     JZ 0x0043b659
LAB_0043b5ee:
0043B5EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043B5F1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043B5F4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0043B5F7  50                        PUSH EAX
0043B5F8  51                        PUSH ECX
0043B5F9  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B5FF  52                        PUSH EDX
0043B600  E8 69 82 FC FF            CALL 0x0040386e
0043B605  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B60B  53                        PUSH EBX
0043B60C  E8 36 9F FC FF            CALL 0x00405547
0043B611  A1 3C 74 80 00            MOV EAX,[0x0080743c]
0043B616  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0043B61C  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
0043B622  25 FF 00 00 00            AND EAX,0xff
0043B627  50                        PUSH EAX
0043B628  A1 D8 73 80 00            MOV EAX,[0x008073d8]
0043B62D  51                        PUSH ECX
0043B62E  52                        PUSH EDX
0043B62F  50                        PUSH EAX
LAB_0043b630:
0043B630  B9 58 76 80 00            MOV ECX,0x807658
0043B635  E8 9A 80 FC FF            CALL 0x004036d4
0043B63A  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B640  E8 13 7A FC FF            CALL 0x00403058
0043B645  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B64F  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043b659:
0043B659  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043B65F  33 C0                     XOR EAX,EAX
0043B661  8A C1                     MOV AL,CL
0043B663  6A 00                     PUSH 0x0
0043B665  6A 00                     PUSH 0x0
0043B667  6A 00                     PUSH 0x0
0043B669  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043B66C  51                        PUSH ECX
0043B66D  8B CE                     MOV ECX,ESI
0043B66F  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043B672  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043B675  C1 E2 04                  SHL EDX,0x4
0043B678  03 D0                     ADD EDX,EAX
0043B67A  89 1C 55 23 50 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5023],EBX
0043B681  E8 61 7C FC FF            CALL 0x004032e7
STAllPlayersC::SetActivePanel::cf_common_exit_0043B686:
0043B686  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043B689  50                        PUSH EAX
0043B68A  53                        PUSH EBX
0043B68B  E9 B9 04 00 00            JMP 0x0043bb49
LAB_0043b690:
0043B690  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043B693  8B D7                     MOV EDX,EDI
0043B695  C1 E2 04                  SHL EDX,0x4
0043B698  8B 8C 02 83 4F 7F 00      MOV ECX,dword ptr [EDX + EAX*0x1 + 0x7f4f83]
0043B69F  8D 84 02 83 4F 7F 00      LEA EAX,[EDX + EAX*0x1 + 0x7f4f83]
0043B6A6  3B CB                     CMP ECX,EBX
0043B6A8  0F 84 A9 04 00 00         JZ 0x0043bb57
0043B6AE  83 F9 3C                  CMP ECX,0x3c
0043B6B1  0F 84 45 01 00 00         JZ 0x0043b7fc
0043B6B7  81 F9 AE 01 00 00         CMP ECX,0x1ae
0043B6BD  74 30                     JZ 0x0043b6ef
0043B6BF  68 7C 7A 7A 00            PUSH 0x7a7a7c
0043B6C4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043B6C9  53                        PUSH EBX
0043B6CA  53                        PUSH EBX
0043B6CB  68 67 1A 00 00            PUSH 0x1a67
0043B6D0  68 04 60 7A 00            PUSH 0x7a6004
0043B6D5  E8 F6 1D 27 00            CALL 0x006ad4d0
0043B6DA  83 C4 18                  ADD ESP,0x18
0043B6DD  85 C0                     TEST EAX,EAX
0043B6DF  0F 84 72 04 00 00         JZ 0x0043bb57
0043B6E5  CC                        INT3
LAB_0043b6ef:
0043B6EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B6F2  BB 01 00 00 00            MOV EBX,0x1
0043B6F7  3B CB                     CMP ECX,EBX
0043B6F9  0F 85 C4 00 00 00         JNZ 0x0043b7c3
0043B6FF  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043B703  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043B706  6A 03                     PUSH 0x3
0043B708  51                        PUSH ECX
0043B709  52                        PUSH EDX
0043B70A  8B CE                     MOV ECX,ESI
0043B70C  E8 A9 71 FC FF            CALL 0x004028ba
0043B711  8B F8                     MOV EDI,EAX
0043B713  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043B716  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043B719  50                        PUSH EAX
0043B71A  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043B71D  51                        PUSH ECX
0043B71E  52                        PUSH EDX
0043B71F  8B CF                     MOV ECX,EDI
0043B721  E8 9F 61 FC FF            CALL 0x004018c5
0043B726  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043B72B  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043B731  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043B737  50                        PUSH EAX
0043B738  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B73D  51                        PUSH ECX
0043B73E  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
0043B744  52                        PUSH EDX
0043B745  50                        PUSH EAX
0043B746  51                        PUSH ECX
0043B747  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B74D  E8 DE FA 2A 00            CALL 0x006eb230
0043B752  3B C3                     CMP EAX,EBX
0043B754  74 6D                     JZ 0x0043b7c3
0043B756  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B759  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B75C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B75F  52                        PUSH EDX
0043B760  50                        PUSH EAX
0043B761  51                        PUSH ECX
0043B762  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B768  E8 01 81 FC FF            CALL 0x0040386e
0043B76D  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B773  53                        PUSH EBX
0043B774  E8 CE 9D FC FF            CALL 0x00405547
0043B779  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B77F  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B784  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B78A  81 E2 FF 00 00 00         AND EDX,0xff
0043B790  52                        PUSH EDX
0043B791  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B797  50                        PUSH EAX
0043B798  51                        PUSH ECX
0043B799  52                        PUSH EDX
0043B79A  B9 58 76 80 00            MOV ECX,0x807658
0043B79F  E8 30 7F FC FF            CALL 0x004036d4
0043B7A4  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B7AA  E8 A9 78 FC FF            CALL 0x00403058
0043B7AF  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B7B9  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043b7c3:
0043B7C3  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043B7C9  33 C0                     XOR EAX,EAX
0043B7CB  8A C1                     MOV AL,CL
0043B7CD  6A 00                     PUSH 0x0
0043B7CF  6A 00                     PUSH 0x0
0043B7D1  53                        PUSH EBX
0043B7D2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043B7D5  51                        PUSH ECX
0043B7D6  8B CE                     MOV ECX,ESI
0043B7D8  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043B7DB  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043B7DE  C1 E2 04                  SHL EDX,0x4
0043B7E1  03 D0                     ADD EDX,EAX
0043B7E3  C7 04 55 23 50 7F 00 00 00 00 00  MOV dword ptr [EDX*0x2 + 0x7f5023],0x0
0043B7EE  E8 F4 7A FC FF            CALL 0x004032e7
0043B7F3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043B7F6  50                        PUSH EAX
0043B7F7  E9 4B 03 00 00            JMP 0x0043bb47
LAB_0043b7fc:
0043B7FC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B7FF  BB 01 00 00 00            MOV EBX,0x1
0043B804  3B CB                     CMP ECX,EBX
0043B806  0F 85 C8 00 00 00         JNZ 0x0043b8d4
0043B80C  8D 55 08                  LEA EDX,[EBP + 0x8]
0043B80F  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B812  52                        PUSH EDX
0043B813  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B816  51                        PUSH ECX
0043B817  52                        PUSH EDX
0043B818  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B81C  8D 4D F4                  LEA ECX,[EBP + -0xc]
0043B81F  51                        PUSH ECX
0043B820  8B 48 0A                  MOV ECX,dword ptr [EAX + 0xa]
0043B823  52                        PUSH EDX
0043B824  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
0043B827  51                        PUSH ECX
0043B828  52                        PUSH EDX
0043B829  6A 3C                     PUSH 0x3c
0043B82B  8B CE                     MOV ECX,ESI
0043B82D  E8 BE 6C FC FF            CALL 0x004024f0
0043B832  85 C0                     TEST EAX,EAX
0043B834  0F 85 9A 00 00 00         JNZ 0x0043b8d4
0043B83A  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043B83F  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043B845  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043B84B  50                        PUSH EAX
0043B84C  A1 10 74 80 00            MOV EAX,[0x00807410]
0043B851  51                        PUSH ECX
0043B852  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0043B855  52                        PUSH EDX
0043B856  50                        PUSH EAX
0043B857  51                        PUSH ECX
0043B858  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B85E  E8 CD F9 2A 00            CALL 0x006eb230
0043B863  3B C3                     CMP EAX,EBX
0043B865  74 6D                     JZ 0x0043b8d4
0043B867  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043B86A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043B86D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043B870  52                        PUSH EDX
0043B871  50                        PUSH EAX
0043B872  51                        PUSH ECX
0043B873  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B879  E8 F0 7F FC FF            CALL 0x0040386e
0043B87E  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B884  53                        PUSH EBX
0043B885  E8 BD 9C FC FF            CALL 0x00405547
0043B88A  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043B890  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043B895  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043B89B  81 E2 FF 00 00 00         AND EDX,0xff
0043B8A1  52                        PUSH EDX
0043B8A2  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043B8A8  50                        PUSH EAX
0043B8A9  51                        PUSH ECX
0043B8AA  52                        PUSH EDX
0043B8AB  B9 58 76 80 00            MOV ECX,0x807658
0043B8B0  E8 1F 7E FC FF            CALL 0x004036d4
0043B8B5  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043B8BB  E8 98 77 FC FF            CALL 0x00403058
0043B8C0  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043B8CA  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043b8d4:
0043B8D4  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043B8DA  33 C0                     XOR EAX,EAX
0043B8DC  8A C1                     MOV AL,CL
0043B8DE  6A 00                     PUSH 0x0
0043B8E0  6A 00                     PUSH 0x0
0043B8E2  53                        PUSH EBX
0043B8E3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0043B8E6  51                        PUSH ECX
0043B8E7  8B CE                     MOV ECX,ESI
0043B8E9  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0043B8EC  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0043B8EF  C1 E2 04                  SHL EDX,0x4
0043B8F2  03 D0                     ADD EDX,EAX
0043B8F4  C7 04 55 23 50 7F 00 00 00 00 00  MOV dword ptr [EDX*0x2 + 0x7f5023],0x0
0043B8FF  E8 E3 79 FC FF            CALL 0x004032e7
0043B904  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043B909  57                        PUSH EDI
0043B90A  6A 00                     PUSH 0x0
0043B90C  50                        PUSH EAX
0043B90D  8B CE                     MOV ECX,ESI
0043B90F  E8 6B 78 FC FF            CALL 0x0040317f
0043B914  5F                        POP EDI
0043B915  5E                        POP ESI
0043B916  5B                        POP EBX
0043B917  8B E5                     MOV ESP,EBP
0043B919  5D                        POP EBP
0043B91A  C2 0C 00                  RET 0xc
LAB_0043b91d:
0043B91D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0043B920  3B FB                     CMP EDI,EBX
0043B922  0F 84 2F 02 00 00         JZ 0x0043bb57
0043B928  8B CF                     MOV ECX,EDI
0043B92A  C1 E1 04                  SHL ECX,0x4
0043B92D  8D 84 01 83 4F 7F 00      LEA EAX,[ECX + EAX*0x1 + 0x7f4f83]
0043B934  8B 08                     MOV ECX,dword ptr [EAX]
0043B936  3B CB                     CMP ECX,EBX
0043B938  0F 84 19 02 00 00         JZ 0x0043bb57
0043B93E  83 F9 3C                  CMP ECX,0x3c
0043B941  0F 84 28 01 00 00         JZ 0x0043ba6f
0043B947  81 F9 AE 01 00 00         CMP ECX,0x1ae
0043B94D  74 30                     JZ 0x0043b97f
0043B94F  68 2C 7A 7A 00            PUSH 0x7a7a2c
0043B954  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043B959  53                        PUSH EBX
0043B95A  53                        PUSH EBX
0043B95B  68 3B 1A 00 00            PUSH 0x1a3b
0043B960  68 04 60 7A 00            PUSH 0x7a6004
0043B965  E8 66 1B 27 00            CALL 0x006ad4d0
0043B96A  83 C4 18                  ADD ESP,0x18
0043B96D  85 C0                     TEST EAX,EAX
0043B96F  0F 84 E2 01 00 00         JZ 0x0043bb57
0043B975  CC                        INT3
LAB_0043b97f:
0043B97F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043B982  BB 01 00 00 00            MOV EBX,0x1
0043B987  3B CB                     CMP ECX,EBX
0043B989  0F 85 C3 00 00 00         JNZ 0x0043ba52
0043B98F  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0043B993  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
0043B996  6A 03                     PUSH 0x3
0043B998  52                        PUSH EDX
0043B999  50                        PUSH EAX
0043B99A  8B CE                     MOV ECX,ESI
0043B99C  E8 19 6F FC FF            CALL 0x004028ba
0043B9A1  8D 4D FC                  LEA ECX,[EBP + -0x4]
0043B9A4  8B F8                     MOV EDI,EAX
0043B9A6  8D 55 F8                  LEA EDX,[EBP + -0x8]
0043B9A9  51                        PUSH ECX
0043B9AA  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043B9AD  52                        PUSH EDX
0043B9AE  50                        PUSH EAX
0043B9AF  8B CF                     MOV ECX,EDI
0043B9B1  E8 0F 5F FC FF            CALL 0x004018c5
0043B9B6  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
0043B9BC  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
0043B9C2  A1 14 74 80 00            MOV EAX,[0x00807414]
0043B9C7  51                        PUSH ECX
0043B9C8  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
0043B9CE  52                        PUSH EDX
0043B9CF  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
0043B9D5  50                        PUSH EAX
0043B9D6  51                        PUSH ECX
0043B9D7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043B9DD  52                        PUSH EDX
0043B9DE  E8 4D F8 2A 00            CALL 0x006eb230
0043B9E3  3B C3                     CMP EAX,EBX
0043B9E5  74 6B                     JZ 0x0043ba52
0043B9E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043B9EA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043B9ED  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0043B9F0  50                        PUSH EAX
0043B9F1  51                        PUSH ECX
0043B9F2  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043B9F8  52                        PUSH EDX
0043B9F9  E8 70 7E FC FF            CALL 0x0040386e
0043B9FE  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043BA04  53                        PUSH EBX
0043BA05  E8 3D 9B FC FF            CALL 0x00405547
0043BA0A  A1 3C 74 80 00            MOV EAX,[0x0080743c]
0043BA0F  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0043BA15  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
0043BA1B  25 FF 00 00 00            AND EAX,0xff
0043BA20  50                        PUSH EAX
0043BA21  A1 D8 73 80 00            MOV EAX,[0x008073d8]
0043BA26  51                        PUSH ECX
0043BA27  52                        PUSH EDX
0043BA28  50                        PUSH EAX
0043BA29  B9 58 76 80 00            MOV ECX,0x807658
0043BA2E  E8 A1 7C FC FF            CALL 0x004036d4
0043BA33  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043BA39  E8 1A 76 FC FF            CALL 0x00403058
0043BA3E  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043BA48  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043ba52:
0043BA52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0043BA55  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0043BA5B  51                        PUSH ECX
0043BA5C  6A 00                     PUSH 0x0
0043BA5E  52                        PUSH EDX
0043BA5F  8B CE                     MOV ECX,ESI
0043BA61  E8 19 77 FC FF            CALL 0x0040317f
0043BA66  5F                        POP EDI
0043BA67  5E                        POP ESI
0043BA68  5B                        POP EBX
0043BA69  8B E5                     MOV ESP,EBP
0043BA6B  5D                        POP EBP
0043BA6C  C2 0C 00                  RET 0xc
LAB_0043ba6f:
0043BA6F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043BA72  BB 01 00 00 00            MOV EBX,0x1
0043BA77  3B CB                     CMP ECX,EBX
0043BA79  0F 85 C7 00 00 00         JNZ 0x0043bb46
0043BA7F  8D 4D 08                  LEA ECX,[EBP + 0x8]
0043BA82  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043BA85  51                        PUSH ECX
0043BA86  52                        PUSH EDX
0043BA87  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043BA8A  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043BA8D  51                        PUSH ECX
0043BA8E  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043BA92  52                        PUSH EDX
0043BA93  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
0043BA96  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
0043BA99  51                        PUSH ECX
0043BA9A  52                        PUSH EDX
0043BA9B  50                        PUSH EAX
0043BA9C  6A 3C                     PUSH 0x3c
0043BA9E  8B CE                     MOV ECX,ESI
0043BAA0  E8 4B 6A FC FF            CALL 0x004024f0
0043BAA5  85 C0                     TEST EAX,EAX
0043BAA7  0F 85 99 00 00 00         JNZ 0x0043bb46
0043BAAD  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
0043BAB3  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
0043BAB9  A1 14 74 80 00            MOV EAX,[0x00807414]
0043BABE  51                        PUSH ECX
0043BABF  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
0043BAC5  52                        PUSH EDX
0043BAC6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0043BAC9  50                        PUSH EAX
0043BACA  51                        PUSH ECX
0043BACB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043BAD1  52                        PUSH EDX
0043BAD2  E8 59 F7 2A 00            CALL 0x006eb230
0043BAD7  3B C3                     CMP EAX,EBX
0043BAD9  74 6B                     JZ 0x0043bb46
0043BADB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043BADE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043BAE1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0043BAE4  50                        PUSH EAX
0043BAE5  51                        PUSH ECX
0043BAE6  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043BAEC  52                        PUSH EDX
0043BAED  E8 7C 7D FC FF            CALL 0x0040386e
0043BAF2  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043BAF8  53                        PUSH EBX
0043BAF9  E8 49 9A FC FF            CALL 0x00405547
0043BAFE  A1 3C 74 80 00            MOV EAX,[0x0080743c]
0043BB03  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
0043BB09  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
0043BB0F  25 FF 00 00 00            AND EAX,0xff
0043BB14  50                        PUSH EAX
0043BB15  A1 D8 73 80 00            MOV EAX,[0x008073d8]
0043BB1A  51                        PUSH ECX
0043BB1B  52                        PUSH EDX
0043BB1C  50                        PUSH EAX
0043BB1D  B9 58 76 80 00            MOV ECX,0x807658
0043BB22  E8 AD 7B FC FF            CALL 0x004036d4
0043BB27  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043BB2D  E8 26 75 FC FF            CALL 0x00403058
0043BB32  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043BB3C  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043bb46:
0043BB46  57                        PUSH EDI
LAB_0043bb47:
0043BB47  6A 00                     PUSH 0x0
STAllPlayersC::SetActivePanel::cf_common_exit_0043BB49:
0043BB49  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0043BB4F  51                        PUSH ECX
0043BB50  8B CE                     MOV ECX,ESI
0043BB52  E8 28 76 FC FF            CALL 0x0040317f
LAB_0043bb57:
0043BB57  5F                        POP EDI
0043BB58  5E                        POP ESI
0043BB59  5B                        POP EBX
0043BB5A  8B E5                     MOV ESP,EBP
0043BB5C  5D                        POP EBP
0043BB5D  C2 0C 00                  RET 0xc
