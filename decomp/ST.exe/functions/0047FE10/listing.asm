STBoatC::Scout:
0047FE10  55                        PUSH EBP
0047FE11  8B EC                     MOV EBP,ESP
0047FE13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047FE16  53                        PUSH EBX
0047FE17  33 DB                     XOR EBX,EBX
0047FE19  56                        PUSH ESI
0047FE1A  3B C3                     CMP EAX,EBX
0047FE1C  57                        PUSH EDI
0047FE1D  8B F1                     MOV ESI,ECX
0047FE1F  0F 84 A1 03 00 00         JZ 0x004801c6
0047FE25  BF 01 00 00 00            MOV EDI,0x1
0047FE2A  3B C7                     CMP EAX,EDI
0047FE2C  0F 84 94 03 00 00         JZ 0x004801c6
0047FE32  8B 86 E7 06 00 00         MOV EAX,dword ptr [ESI + 0x6e7]
0047FE38  3B C3                     CMP EAX,EBX
0047FE3A  0F 85 7D 01 00 00         JNZ 0x0047ffbd
0047FE40  6A 02                     PUSH 0x2
0047FE42  E8 ED 3C F8 FF            CALL 0x00403b34
0047FE47  83 F8 FF                  CMP EAX,-0x1
0047FE4A  74 4C                     JZ 0x0047fe98
0047FE4C  3B C3                     CMP EAX,EBX
0047FE4E  0F 84 F2 00 00 00         JZ 0x0047ff46
0047FE54  83 F8 03                  CMP EAX,0x3
0047FE57  0F 85 2C 03 00 00         JNZ 0x00480189
0047FE5D  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0047FE61  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0047FE64  50                        PUSH EAX
0047FE65  51                        PUSH ECX
0047FE66  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0047FE6C  E8 88 5E F8 FF            CALL 0x00405cf9
0047FE71  3B C3                     CMP EAX,EBX
0047FE73  75 2D                     JNZ 0x0047fea2
0047FE75  68 D8 B8 7A 00            PUSH 0x7ab8d8
0047FE7A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047FE7F  53                        PUSH EBX
0047FE80  53                        PUSH EBX
0047FE81  68 57 3B 00 00            PUSH 0x3b57
0047FE86  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047FE8B  E8 40 D6 22 00            CALL 0x006ad4d0
0047FE90  83 C4 18                  ADD ESP,0x18
0047FE93  85 C0                     TEST EAX,EAX
0047FE95  74 01                     JZ 0x0047fe98
0047FE97  CC                        INT3
LAB_0047fe98:
0047FE98  5F                        POP EDI
0047FE99  5E                        POP ESI
0047FE9A  83 C8 FF                  OR EAX,0xffffffff
0047FE9D  5B                        POP EBX
0047FE9E  5D                        POP EBP
0047FE9F  C2 04 00                  RET 0x4
LAB_0047fea2:
0047FEA2  0F BF 96 CF 06 00 00      MOVSX EDX,word ptr [ESI + 0x6cf]
0047FEA9  0F BF 8E CD 06 00 00      MOVSX ECX,word ptr [ESI + 0x6cd]
0047FEB0  53                        PUSH EBX
0047FEB1  52                        PUSH EDX
0047FEB2  0F BF 96 CB 06 00 00      MOVSX EDX,word ptr [ESI + 0x6cb]
0047FEB9  51                        PUSH ECX
0047FEBA  33 C9                     XOR ECX,ECX
0047FEBC  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0047FEC0  52                        PUSH EDX
0047FEC1  51                        PUSH ECX
0047FEC2  8B C8                     MOV ECX,EAX
0047FEC4  E8 B1 41 F8 FF            CALL 0x0040407a
0047FEC9  8B 8E E3 06 00 00         MOV ECX,dword ptr [ESI + 0x6e3]
0047FECF  83 F9 03                  CMP ECX,0x3
0047FED2  0F 87 B2 00 00 00         JA 0x0047ff8a
switchD_0047fed8::switchD:
0047FED8  FF 24 8D 68 02 48 00      JMP dword ptr [ECX*0x4 + 0x480268]
switchD_0047fed8::caseD_0:
0047FEDF  89 86 D7 06 00 00         MOV dword ptr [ESI + 0x6d7],EAX
0047FEE5  89 BE E3 06 00 00         MOV dword ptr [ESI + 0x6e3],EDI
LAB_0047feeb:
0047FEEB  0F BF 96 CF 06 00 00      MOVSX EDX,word ptr [ESI + 0x6cf]
0047FEF2  0F BF 86 CD 06 00 00      MOVSX EAX,word ptr [ESI + 0x6cd]
0047FEF9  0F BF 8E CB 06 00 00      MOVSX ECX,word ptr [ESI + 0x6cb]
0047FF00  52                        PUSH EDX
0047FF01  50                        PUSH EAX
0047FF02  EB 63                     JMP 0x0047ff67
switchD_0047fed8::caseD_1:
0047FF04  3B 86 D7 06 00 00         CMP EAX,dword ptr [ESI + 0x6d7]
0047FF0A  7C D3                     JL 0x0047fedf
0047FF0C  89 86 DB 06 00 00         MOV dword ptr [ESI + 0x6db],EAX
0047FF12  C7 86 E3 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6e3],0x2
0047FF1C  EB CD                     JMP 0x0047feeb
switchD_0047fed8::caseD_2:
0047FF1E  3B 86 DB 06 00 00         CMP EAX,dword ptr [ESI + 0x6db]
0047FF24  7C B9                     JL 0x0047fedf
0047FF26  89 86 DF 06 00 00         MOV dword ptr [ESI + 0x6df],EAX
0047FF2C  C7 86 E3 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x6e3],0x3
0047FF36  EB B3                     JMP 0x0047feeb
switchD_0047fed8::caseD_3:
0047FF38  3B 86 DF 06 00 00         CMP EAX,dword ptr [ESI + 0x6df]
0047FF3E  7C 9F                     JL 0x0047fedf
0047FF40  89 9E E3 06 00 00         MOV dword ptr [ESI + 0x6e3],EBX
LAB_0047ff46:
0047FF46  0F BF 96 D5 06 00 00      MOVSX EDX,word ptr [ESI + 0x6d5]
0047FF4D  0F BF 86 D3 06 00 00      MOVSX EAX,word ptr [ESI + 0x6d3]
0047FF54  0F BF 8E D1 06 00 00      MOVSX ECX,word ptr [ESI + 0x6d1]
0047FF5B  52                        PUSH EDX
0047FF5C  C7 86 E7 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6e7],0x2
0047FF66  50                        PUSH EAX
LAB_0047ff67:
0047FF67  51                        PUSH ECX
0047FF68  8B CE                     MOV ECX,ESI
0047FF6A  E8 FC 4F F8 FF            CALL 0x00404f6b
0047FF6F  53                        PUSH EBX
0047FF70  8B CE                     MOV ECX,ESI
0047FF72  E8 BD 3B F8 FF            CALL 0x00403b34
0047FF77  83 F8 FF                  CMP EAX,-0x1
0047FF7A  0F 85 09 02 00 00         JNZ 0x00480189
LAB_0047ff80:
0047FF80  5F                        POP EDI
0047FF81  5E                        POP ESI
0047FF82  83 C8 FF                  OR EAX,0xffffffff
0047FF85  5B                        POP EBX
0047FF86  5D                        POP EBP
0047FF87  C2 04 00                  RET 0x4
switchD_0047fed8::default:
0047FF8A  68 B0 B8 7A 00            PUSH 0x7ab8b0
0047FF8F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047FF94  53                        PUSH EBX
0047FF95  53                        PUSH EBX
0047FF96  68 76 3B 00 00            PUSH 0x3b76
0047FF9B  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047FFA0  E8 2B D5 22 00            CALL 0x006ad4d0
0047FFA5  83 C4 18                  ADD ESP,0x18
0047FFA8  85 C0                     TEST EAX,EAX
0047FFAA  0F 84 D9 01 00 00         JZ 0x00480189
0047FFB0  CC                        INT3
LAB_0047ffbd:
0047FFBD  3B C7                     CMP EAX,EDI
0047FFBF  75 6E                     JNZ 0x0048002f
0047FFC1  8B 16                     MOV EDX,dword ptr [ESI]
0047FFC3  8B CE                     MOV ECX,ESI
0047FFC5  FF 52 20                  CALL dword ptr [EDX + 0x20]
0047FFC8  83 F8 FF                  CMP EAX,-0x1
0047FFCB  0F 84 C7 FE FF FF         JZ 0x0047fe98
0047FFD1  3B C7                     CMP EAX,EDI
0047FFD3  75 40                     JNZ 0x00480015
0047FFD5  0F BF 86 D5 06 00 00      MOVSX EAX,word ptr [ESI + 0x6d5]
0047FFDC  0F BF 8E D3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6d3]
0047FFE3  0F BF 96 D1 06 00 00      MOVSX EDX,word ptr [ESI + 0x6d1]
0047FFEA  50                        PUSH EAX
0047FFEB  51                        PUSH ECX
0047FFEC  52                        PUSH EDX
0047FFED  8B CE                     MOV ECX,ESI
0047FFEF  C7 86 E7 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6e7],0x2
0047FFF9  89 9E E3 06 00 00         MOV dword ptr [ESI + 0x6e3],EBX
0047FFFF  E8 67 4F F8 FF            CALL 0x00404f6b
00480004  53                        PUSH EBX
00480005  8B CE                     MOV ECX,ESI
00480007  E8 28 3B F8 FF            CALL 0x00403b34
0048000C  83 F8 FF                  CMP EAX,-0x1
0048000F  0F 84 6B FF FF FF         JZ 0x0047ff80
LAB_00480015:
00480015  8B 06                     MOV EAX,dword ptr [ESI]
00480017  8B CE                     MOV ECX,ESI
00480019  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0048001F  F7 D8                     NEG EAX
00480021  1B C0                     SBB EAX,EAX
00480023  5F                        POP EDI
00480024  24 FD                     AND AL,0xfd
00480026  5E                        POP ESI
00480027  83 C0 02                  ADD EAX,0x2
0048002A  5B                        POP EBX
0048002B  5D                        POP EBP
0048002C  C2 04 00                  RET 0x4
LAB_0048002f:
0048002F  83 F8 02                  CMP EAX,0x2
00480032  0F 85 5D 01 00 00         JNZ 0x00480195
00480038  50                        PUSH EAX
00480039  8B CE                     MOV ECX,ESI
0048003B  E8 F4 3A F8 FF            CALL 0x00403b34
00480040  83 F8 FF                  CMP EAX,-0x1
00480043  0F 84 4F FE FF FF         JZ 0x0047fe98
00480049  3B C3                     CMP EAX,EBX
0048004B  0F 84 0C 01 00 00         JZ 0x0048015d
00480051  83 F8 03                  CMP EAX,0x3
00480054  0F 85 2F 01 00 00         JNZ 0x00480189
0048005A  66 8B 4E 30               MOV CX,word ptr [ESI + 0x30]
0048005E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00480061  51                        PUSH ECX
00480062  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00480068  52                        PUSH EDX
00480069  E8 8B 5C F8 FF            CALL 0x00405cf9
0048006E  3B C3                     CMP EAX,EBX
00480070  75 31                     JNZ 0x004800a3
00480072  68 D8 B8 7A 00            PUSH 0x7ab8d8
00480077  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048007C  53                        PUSH EBX
0048007D  53                        PUSH EBX
0048007E  68 9B 3B 00 00            PUSH 0x3b9b
00480083  68 3C 9D 7A 00            PUSH 0x7a9d3c
00480088  E8 43 D4 22 00            CALL 0x006ad4d0
0048008D  83 C4 18                  ADD ESP,0x18
00480090  85 C0                     TEST EAX,EAX
00480092  0F 84 E8 FE FF FF         JZ 0x0047ff80
00480098  CC                        INT3
LAB_004800a3:
004800A3  0F BF 8E D5 06 00 00      MOVSX ECX,word ptr [ESI + 0x6d5]
004800AA  0F BF 96 D3 06 00 00      MOVSX EDX,word ptr [ESI + 0x6d3]
004800B1  53                        PUSH EBX
004800B2  51                        PUSH ECX
004800B3  0F BF 8E D1 06 00 00      MOVSX ECX,word ptr [ESI + 0x6d1]
004800BA  52                        PUSH EDX
004800BB  33 D2                     XOR EDX,EDX
004800BD  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004800C1  51                        PUSH ECX
004800C2  52                        PUSH EDX
004800C3  8B C8                     MOV ECX,EAX
004800C5  E8 B0 3F F8 FF            CALL 0x0040407a
004800CA  8B 8E E3 06 00 00         MOV ECX,dword ptr [ESI + 0x6e3]
004800D0  83 F9 03                  CMP ECX,0x3
004800D3  0F 87 8D 00 00 00         JA 0x00480166
switchD_004800d9::switchD:
004800D9  FF 24 8D 78 02 48 00      JMP dword ptr [ECX*0x4 + 0x480278]
switchD_004800d9::caseD_0:
004800E0  89 86 D7 06 00 00         MOV dword ptr [ESI + 0x6d7],EAX
004800E6  89 BE E3 06 00 00         MOV dword ptr [ESI + 0x6e3],EDI
LAB_004800ec:
004800EC  0F BF 86 D5 06 00 00      MOVSX EAX,word ptr [ESI + 0x6d5]
004800F3  0F BF 8E D3 06 00 00      MOVSX ECX,word ptr [ESI + 0x6d3]
004800FA  0F BF 96 D1 06 00 00      MOVSX EDX,word ptr [ESI + 0x6d1]
00480101  50                        PUSH EAX
00480102  51                        PUSH ECX
00480103  52                        PUSH EDX
00480104  8B CE                     MOV ECX,ESI
00480106  E8 60 4E F8 FF            CALL 0x00404f6b
0048010B  53                        PUSH EBX
0048010C  8B CE                     MOV ECX,ESI
0048010E  E8 21 3A F8 FF            CALL 0x00403b34
00480113  83 F8 FF                  CMP EAX,-0x1
00480116  75 71                     JNZ 0x00480189
00480118  5F                        POP EDI
00480119  5E                        POP ESI
0048011A  0B C0                     OR EAX,EAX
0048011C  5B                        POP EBX
0048011D  5D                        POP EBP
0048011E  C2 04 00                  RET 0x4
switchD_004800d9::caseD_1:
00480121  3B 86 D7 06 00 00         CMP EAX,dword ptr [ESI + 0x6d7]
00480127  7C B7                     JL 0x004800e0
00480129  89 86 DB 06 00 00         MOV dword ptr [ESI + 0x6db],EAX
0048012F  C7 86 E3 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x6e3],0x2
00480139  EB B1                     JMP 0x004800ec
switchD_004800d9::caseD_2:
0048013B  3B 86 DB 06 00 00         CMP EAX,dword ptr [ESI + 0x6db]
00480141  7C 9D                     JL 0x004800e0
00480143  89 86 DF 06 00 00         MOV dword ptr [ESI + 0x6df],EAX
00480149  C7 86 E3 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x6e3],0x3
00480153  EB 97                     JMP 0x004800ec
switchD_004800d9::caseD_3:
00480155  3B 86 DF 06 00 00         CMP EAX,dword ptr [ESI + 0x6df]
0048015B  7C 83                     JL 0x004800e0
LAB_0048015d:
0048015D  5F                        POP EDI
0048015E  5E                        POP ESI
0048015F  33 C0                     XOR EAX,EAX
00480161  5B                        POP EBX
00480162  5D                        POP EBP
00480163  C2 04 00                  RET 0x4
switchD_004800d9::default:
00480166  68 84 B8 7A 00            PUSH 0x7ab884
0048016B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00480170  53                        PUSH EBX
00480171  53                        PUSH EBX
00480172  68 B7 3B 00 00            PUSH 0x3bb7
00480177  68 3C 9D 7A 00            PUSH 0x7a9d3c
0048017C  E8 4F D3 22 00            CALL 0x006ad4d0
00480181  83 C4 18                  ADD ESP,0x18
00480184  85 C0                     TEST EAX,EAX
00480186  74 01                     JZ 0x00480189
00480188  CC                        INT3
LAB_00480189:
00480189  5F                        POP EDI
0048018A  5E                        POP ESI
0048018B  B8 02 00 00 00            MOV EAX,0x2
00480190  5B                        POP EBX
00480191  5D                        POP EBP
00480192  C2 04 00                  RET 0x4
LAB_00480195:
00480195  68 5C B8 7A 00            PUSH 0x7ab85c
0048019A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0048019F  53                        PUSH EBX
004801A0  53                        PUSH EBX
004801A1  68 BF 3B 00 00            PUSH 0x3bbf
004801A6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004801AB  E8 20 D3 22 00            CALL 0x006ad4d0
004801B0  83 C4 18                  ADD ESP,0x18
004801B3  85 C0                     TEST EAX,EAX
004801B5  0F 84 C5 FD FF FF         JZ 0x0047ff80
004801BB  CC                        INT3
LAB_004801c6:
004801C6  B9 17 00 00 00            MOV ECX,0x17
004801CB  33 C0                     XOR EAX,EAX
004801CD  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004801D3  F3 AB                     STOSD.REP ES:EDI
004801D5  66 8B 96 3F 04 00 00      MOV DX,word ptr [ESI + 0x43f]
004801DC  66 8B 8E 3D 04 00 00      MOV CX,word ptr [ESI + 0x43d]
004801E3  66 8B BE 41 04 00 00      MOV DI,word ptr [ESI + 0x441]
004801EA  66 8B 86 3B 04 00 00      MOV AX,word ptr [ESI + 0x43b]
004801F1  66 89 96 CF 06 00 00      MOV word ptr [ESI + 0x6cf],DX
004801F8  66 89 8E CD 06 00 00      MOV word ptr [ESI + 0x6cd],CX
004801FF  0F BF D2                  MOVSX EDX,DX
00480202  66 89 BE D1 06 00 00      MOV word ptr [ESI + 0x6d1],DI
00480209  66 8B BE 43 04 00 00      MOV DI,word ptr [ESI + 0x443]
00480210  52                        PUSH EDX
00480211  66 89 BE D3 06 00 00      MOV word ptr [ESI + 0x6d3],DI
00480218  66 8B BE 45 04 00 00      MOV DI,word ptr [ESI + 0x445]
0048021F  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
00480225  0F BF C9                  MOVSX ECX,CX
00480228  0F BF D0                  MOVSX EDX,AX
0048022B  51                        PUSH ECX
0048022C  52                        PUSH EDX
0048022D  8B CE                     MOV ECX,ESI
0048022F  89 9E E3 06 00 00         MOV dword ptr [ESI + 0x6e3],EBX
00480235  66 89 86 CB 06 00 00      MOV word ptr [ESI + 0x6cb],AX
0048023C  66 89 BE D5 06 00 00      MOV word ptr [ESI + 0x6d5],DI
00480243  89 9E E7 06 00 00         MOV dword ptr [ESI + 0x6e7],EBX
00480249  E8 1D 4D F8 FF            CALL 0x00404f6b
0048024E  53                        PUSH EBX
0048024F  8B CE                     MOV ECX,ESI
00480251  E8 DE 38 F8 FF            CALL 0x00403b34
00480256  40                        INC EAX
00480257  5F                        POP EDI
00480258  F7 D8                     NEG EAX
0048025A  1B C0                     SBB EAX,EAX
0048025C  5E                        POP ESI
0048025D  83 E0 03                  AND EAX,0x3
00480260  5B                        POP EBX
00480261  48                        DEC EAX
00480262  5D                        POP EBP
00480263  C2 04 00                  RET 0x4
