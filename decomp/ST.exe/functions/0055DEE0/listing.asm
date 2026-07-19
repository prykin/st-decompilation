FUN_0055dee0:
0055DEE0  55                        PUSH EBP
0055DEE1  8B EC                     MOV EBP,ESP
0055DEE3  83 EC 40                  SUB ESP,0x40
0055DEE6  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055DEEB  53                        PUSH EBX
0055DEEC  0F AF 05 A4 33 80 00      IMUL EAX,dword ptr [0x008033a4]
0055DEF3  56                        PUSH ESI
0055DEF4  57                        PUSH EDI
0055DEF5  D1 E0                     SHL EAX,0x1
0055DEF7  33 FF                     XOR EDI,EDI
0055DEF9  50                        PUSH EAX
0055DEFA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0055DEFD  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0055DF00  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0055DF03  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0055DF06  E8 05 CD 14 00            CALL 0x006aac10
0055DF0B  8B 0D 90 33 80 00         MOV ECX,dword ptr [0x00803390]
0055DF11  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055DF14  6A 01                     PUSH 0x1
0055DF16  51                        PUSH ECX
0055DF17  56                        PUSH ESI
0055DF18  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0055DF1B  E8 50 0F 00 00            CALL 0x0055ee70
0055DF20  8B 0D 24 33 80 00         MOV ECX,dword ptr [0x00803324]
0055DF26  0F AF 0D 58 33 80 00      IMUL ECX,dword ptr [0x00803358]
0055DF2D  3B C7                     CMP EAX,EDI
0055DF2F  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0055DF32  0F 8E C9 03 00 00         JLE 0x0055e301
0055DF38  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055DF3E  40                        INC EAX
0055DF3F  8B D6                     MOV EDX,ESI
0055DF41  D1 E8                     SHR EAX,0x1
0055DF43  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055DF46  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_0055df49:
0055DF49  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0055DF4C  0F BE 52 01               MOVSX EDX,byte ptr [EDX + 0x1]
0055DF50  8B 35 04 33 80 00         MOV ESI,dword ptr [0x00803304]
0055DF56  8B 3D 08 33 80 00         MOV EDI,dword ptr [0x00803308]
0055DF5C  03 F0                     ADD ESI,EAX
0055DF5E  03 FA                     ADD EDI,EDX
0055DF60  85 F6                     TEST ESI,ESI
0055DF62  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0055DF65  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0055DF68  7C 28                     JL 0x0055df92
0055DF6A  3B F1                     CMP ESI,ECX
0055DF6C  7D 24                     JGE 0x0055df92
0055DF6E  85 FF                     TEST EDI,EDI
0055DF70  7C 20                     JL 0x0055df92
0055DF72  3B 3D A8 33 80 00         CMP EDI,dword ptr [0x008033a8]
0055DF78  7D 18                     JGE 0x0055df92
0055DF7A  8B D1                     MOV EDX,ECX
0055DF7C  8B 1D B4 33 80 00         MOV EBX,dword ptr [0x008033b4]
0055DF82  0F AF D7                  IMUL EDX,EDI
0055DF85  03 D6                     ADD EDX,ESI
0055DF87  66 83 3C 53 00            CMP word ptr [EBX + EDX*0x2],0x0
0055DF8C  0F 8F 98 00 00 00         JG 0x0055e02a
LAB_0055df92:
0055DF92  8B 1D 90 33 80 00         MOV EBX,dword ptr [0x00803390]
0055DF98  C1 E0 10                  SHL EAX,0x10
0055DF9B  99                        CDQ
0055DF9C  F7 FB                     IDIV EBX
0055DF9E  C1 E6 10                  SHL ESI,0x10
0055DFA1  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055DFA4  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055DFA7  0F BE 40 01               MOVSX EAX,byte ptr [EAX + 0x1]
0055DFAB  C1 E0 10                  SHL EAX,0x10
0055DFAE  99                        CDQ
0055DFAF  F7 FB                     IDIV EBX
0055DFB1  8B 15 90 33 80 00         MOV EDX,dword ptr [0x00803390]
0055DFB7  C1 E7 10                  SHL EDI,0x10
0055DFBA  8B DF                     MOV EBX,EDI
0055DFBC  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0055DFBF  8B C6                     MOV EAX,ESI
0055DFC1  EB 06                     JMP 0x0055dfc9
LAB_0055dfc3:
0055DFC3  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0055DFC6  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
LAB_0055dfc9:
0055DFC9  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
0055DFCC  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
0055DFCF  2B C7                     SUB EAX,EDI
0055DFD1  2B DE                     SUB EBX,ESI
0055DFD3  8B F0                     MOV ESI,EAX
0055DFD5  8B FB                     MOV EDI,EBX
0055DFD7  C1 FE 10                  SAR ESI,0x10
0055DFDA  C1 FF 10                  SAR EDI,0x10
0055DFDD  4A                        DEC EDX
0055DFDE  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0055DFE1  3B 15 5C 33 80 00         CMP EDX,dword ptr [0x0080335c]
0055DFE7  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0055DFEA  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0055DFED  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0055DFF0  0F 8C F3 02 00 00         JL 0x0055e2e9
0055DFF6  85 F6                     TEST ESI,ESI
0055DFF8  7C CF                     JL 0x0055dfc9
0055DFFA  3B F1                     CMP ESI,ECX
0055DFFC  7D CB                     JGE 0x0055dfc9
0055DFFE  85 FF                     TEST EDI,EDI
0055E000  7C C7                     JL 0x0055dfc9
0055E002  3B 3D A8 33 80 00         CMP EDI,dword ptr [0x008033a8]
0055E008  7D BF                     JGE 0x0055dfc9
0055E00A  8B C1                     MOV EAX,ECX
0055E00C  8B 1D B4 33 80 00         MOV EBX,dword ptr [0x008033b4]
0055E012  0F AF C7                  IMUL EAX,EDI
0055E015  03 C6                     ADD EAX,ESI
0055E017  66 83 3C 43 00            CMP word ptr [EBX + EAX*0x2],0x0
0055E01C  7E A5                     JLE 0x0055dfc3
0055E01E  3B 15 5C 33 80 00         CMP EDX,dword ptr [0x0080335c]
0055E024  0F 8C BF 02 00 00         JL 0x0055e2e9
LAB_0055e02a:
0055E02A  8B 0D 08 33 80 00         MOV ECX,dword ptr [0x00803308]
0055E030  8B 15 04 33 80 00         MOV EDX,dword ptr [0x00803304]
0055E036  51                        PUSH ECX
0055E037  52                        PUSH EDX
0055E038  57                        PUSH EDI
0055E039  56                        PUSH ESI
0055E03A  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0055E03D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0055E040  E8 6B F0 14 00            CALL 0x006ad0b0
0055E045  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_0055e048:
0055E048  C7 45 D8 30 75 00 00      MOV dword ptr [EBP + -0x28],0x7530
0055E04F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0055E056  C7 45 DC AB DC 7E 00      MOV dword ptr [EBP + -0x24],0x7edcab
LAB_0055e05d:
0055E05D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055E060  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0055E063  0F BF 40 FE               MOVSX EAX,word ptr [EAX + -0x2]
0055E067  03 C1                     ADD EAX,ECX
0055E069  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055E06C  0F 88 E8 00 00 00         JS 0x0055e15a
0055E072  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E078  3B C1                     CMP EAX,ECX
0055E07A  0F 8D DA 00 00 00         JGE 0x0055e15a
0055E080  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0055E083  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E086  0F BF 1A                  MOVSX EBX,word ptr [EDX]
0055E089  03 D8                     ADD EBX,EAX
0055E08B  0F 88 C9 00 00 00         JS 0x0055e15a
0055E091  3B 1D A8 33 80 00         CMP EBX,dword ptr [0x008033a8]
0055E097  0F 8D BD 00 00 00         JGE 0x0055e15a
0055E09D  8B C1                     MOV EAX,ECX
0055E09F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055E0A2  0F AF C3                  IMUL EAX,EBX
0055E0A5  8B 0D B4 33 80 00         MOV ECX,dword ptr [0x008033b4]
0055E0AB  03 C2                     ADD EAX,EDX
0055E0AD  0F BF 04 41               MOVSX EAX,word ptr [ECX + EAX*0x2]
0055E0B1  85 C0                     TEST EAX,EAX
0055E0B3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0055E0B6  0F 8E 9E 00 00 00         JLE 0x0055e15a
0055E0BC  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
0055E0BF  0F 8E B5 00 00 00         JLE 0x0055e17a
0055E0C5  8B 15 24 33 80 00         MOV EDX,dword ptr [0x00803324]
0055E0CB  8B 35 20 33 80 00         MOV ESI,dword ptr [0x00803320]
0055E0D1  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0055E0D4  2B D6                     SUB EDX,ESI
0055E0D6  03 C2                     ADD EAX,EDX
0055E0D8  3B C1                     CMP EAX,ECX
0055E0DA  7D 14                     JGE 0x0055e0f0
0055E0DC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0055E0DF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0055E0E2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055E0E5  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0055E0E8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0055E0EB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0055E0EE  EB 6A                     JMP 0x0055e15a
LAB_0055e0f0:
0055E0F0  75 68                     JNZ 0x0055e15a
0055E0F2  8B 35 04 33 80 00         MOV ESI,dword ptr [0x00803304]
0055E0F8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0055E0FB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E0FE  8B 3D 08 33 80 00         MOV EDI,dword ptr [0x00803308]
0055E104  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0055E107  2B F1                     SUB ESI,ECX
0055E109  2B C1                     SUB EAX,ECX
0055E10B  8B CB                     MOV ECX,EBX
0055E10D  2B FA                     SUB EDI,EDX
0055E10F  2B CA                     SUB ECX,EDX
0055E111  0F AF C7                  IMUL EAX,EDI
0055E114  0F AF CE                  IMUL ECX,ESI
0055E117  2B C1                     SUB EAX,ECX
0055E119  99                        CDQ
0055E11A  8B C8                     MOV ECX,EAX
0055E11C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055E11F  33 CA                     XOR ECX,EDX
0055E121  2B CA                     SUB ECX,EDX
0055E123  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0055E126  2B C2                     SUB EAX,EDX
0055E128  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0055E12B  0F AF C7                  IMUL EAX,EDI
0055E12E  2B 55 D0                  SUB EDX,dword ptr [EBP + -0x30]
0055E131  0F AF D6                  IMUL EDX,ESI
0055E134  2B C2                     SUB EAX,EDX
0055E136  99                        CDQ
0055E137  33 C2                     XOR EAX,EDX
0055E139  2B C2                     SUB EAX,EDX
0055E13B  3B C8                     CMP ECX,EAX
0055E13D  7C 0C                     JL 0x0055e14b
0055E13F  75 19                     JNZ 0x0055e15a
0055E141  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055E144  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0055E147  3B C1                     CMP EAX,ECX
0055E149  75 0F                     JNZ 0x0055e15a
LAB_0055e14b:
0055E14B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0055E14E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0055E151  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055E154  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0055E157  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0055e15a:
0055E15A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055E15D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055E160  83 C0 0A                  ADD EAX,0xa
0055E163  83 C6 02                  ADD ESI,0x2
0055E166  3D CE DC 7E 00            CMP EAX,0x7edcce
0055E16B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0055E16E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0055E171  0F 8C E6 FE FF FF         JL 0x0055e05d
0055E177  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_0055e17a:
0055E17A  85 C0                     TEST EAX,EAX
0055E17C  7E 09                     JLE 0x0055e187
0055E17E  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
0055E181  0F 8E 5C 01 00 00         JLE 0x0055e2e3
LAB_0055e187:
0055E187  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0055E18E  C7 45 DC A6 DC 7E 00      MOV dword ptr [EBP + -0x24],0x7edca6
LAB_0055e195:
0055E195  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055E198  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0055E19B  0F BF 40 FE               MOVSX EAX,word ptr [EAX + -0x2]
0055E19F  03 C1                     ADD EAX,ECX
0055E1A1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055E1A4  0F 88 D5 00 00 00         JS 0x0055e27f
0055E1AA  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E1B0  3B C1                     CMP EAX,ECX
0055E1B2  0F 8D C7 00 00 00         JGE 0x0055e27f
0055E1B8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0055E1BB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E1BE  0F BF 1A                  MOVSX EBX,word ptr [EDX]
0055E1C1  03 D8                     ADD EBX,EAX
0055E1C3  0F 88 B6 00 00 00         JS 0x0055e27f
0055E1C9  3B 1D A8 33 80 00         CMP EBX,dword ptr [0x008033a8]
0055E1CF  0F 8D AA 00 00 00         JGE 0x0055e27f
0055E1D5  8B C1                     MOV EAX,ECX
0055E1D7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055E1DA  0F AF C3                  IMUL EAX,EBX
0055E1DD  8B 0D B4 33 80 00         MOV ECX,dword ptr [0x008033b4]
0055E1E3  03 C2                     ADD EAX,EDX
0055E1E5  0F BF 04 41               MOVSX EAX,word ptr [ECX + EAX*0x2]
0055E1E9  85 C0                     TEST EAX,EAX
0055E1EB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0055E1EE  0F 8E 8B 00 00 00         JLE 0x0055e27f
0055E1F4  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
0055E1F7  0F 8E A2 00 00 00         JLE 0x0055e29f
0055E1FD  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0055E200  3B C1                     CMP EAX,ECX
0055E202  7D 11                     JGE 0x0055e215
0055E204  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0055E207  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055E20A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0055E20D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0055E210  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0055E213  EB 6A                     JMP 0x0055e27f
LAB_0055e215:
0055E215  75 68                     JNZ 0x0055e27f
0055E217  8B 35 04 33 80 00         MOV ESI,dword ptr [0x00803304]
0055E21D  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0055E220  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E223  8B 3D 08 33 80 00         MOV EDI,dword ptr [0x00803308]
0055E229  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0055E22C  2B F1                     SUB ESI,ECX
0055E22E  2B C1                     SUB EAX,ECX
0055E230  8B CB                     MOV ECX,EBX
0055E232  2B FA                     SUB EDI,EDX
0055E234  2B CA                     SUB ECX,EDX
0055E236  0F AF C7                  IMUL EAX,EDI
0055E239  0F AF CE                  IMUL ECX,ESI
0055E23C  2B C1                     SUB EAX,ECX
0055E23E  99                        CDQ
0055E23F  8B C8                     MOV ECX,EAX
0055E241  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055E244  33 CA                     XOR ECX,EDX
0055E246  2B CA                     SUB ECX,EDX
0055E248  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0055E24B  2B C2                     SUB EAX,EDX
0055E24D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0055E250  0F AF C7                  IMUL EAX,EDI
0055E253  2B 55 D0                  SUB EDX,dword ptr [EBP + -0x30]
0055E256  0F AF D6                  IMUL EDX,ESI
0055E259  2B C2                     SUB EAX,EDX
0055E25B  99                        CDQ
0055E25C  33 C2                     XOR EAX,EDX
0055E25E  2B C2                     SUB EAX,EDX
0055E260  3B C8                     CMP ECX,EAX
0055E262  7C 0C                     JL 0x0055e270
0055E264  75 19                     JNZ 0x0055e27f
0055E266  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055E269  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0055E26C  3B C1                     CMP EAX,ECX
0055E26E  75 0F                     JNZ 0x0055e27f
LAB_0055e270:
0055E270  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0055E273  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0055E276  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055E279  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0055E27C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0055e27f:
0055E27F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055E282  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055E285  83 C0 0A                  ADD EAX,0xa
0055E288  83 C6 02                  ADD ESI,0x2
0055E28B  3D CE DC 7E 00            CMP EAX,0x7edcce
0055E290  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0055E293  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0055E296  0F 8C F9 FE FF FF         JL 0x0055e195
0055E29C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_0055e29f:
0055E29F  85 C0                     TEST EAX,EAX
0055E2A1  7E 05                     JLE 0x0055e2a8
0055E2A3  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
0055E2A6  7E 3B                     JLE 0x0055e2e3
LAB_0055e2a8:
0055E2A8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0055E2AB  8B 15 A4 33 80 00         MOV EDX,dword ptr [0x008033a4]
0055E2B1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0055E2B4  0F AF D1                  IMUL EDX,ECX
0055E2B7  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055E2BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055E2BD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0055E2C0  03 D0                     ADD EDX,EAX
0055E2C2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0055E2C5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0055E2C8  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0055E2CC  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055E2CF  66 81 F9 FF 00            CMP CX,0xff
0055E2D4  0F 83 6E FD FF FF         JNC 0x0055e048
0055E2DA  41                        INC ECX
0055E2DB  66 89 08                  MOV word ptr [EAX],CX
0055E2DE  E9 65 FD FF FF            JMP 0x0055e048
LAB_0055e2e3:
0055E2E3  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
FUN_0055dee0::cf_continue_loop_0055E2E9:
0055E2E9  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055E2EC  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0055E2EF  83 C2 04                  ADD EDX,0x4
0055E2F2  48                        DEC EAX
0055E2F3  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E2F6  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055E2F9  0F 85 4A FC FF FF         JNZ 0x0055df49
0055E2FF  EB 06                     JMP 0x0055e307
LAB_0055e301:
0055E301  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e307:
0055E307  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055E30C  33 FF                     XOR EDI,EDI
0055E30E  85 C0                     TEST EAX,EAX
0055E310  7E 3C                     JLE 0x0055e34e
LAB_0055e312:
0055E312  8B C1                     MOV EAX,ECX
0055E314  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055E317  0F AF C7                  IMUL EAX,EDI
0055E31A  D1 E0                     SHL EAX,0x1
0055E31C  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
0055E31F  33 D2                     XOR EDX,EDX
0055E321  85 C9                     TEST ECX,ECX
0055E323  7E 1F                     JLE 0x0055e344
0055E325  8B 0D 80 33 80 00         MOV ECX,dword ptr [0x00803380]
0055E32B  8D 44 08 01               LEA EAX,[EAX + ECX*0x1 + 0x1]
LAB_0055e32f:
0055E32F  8A 0E                     MOV CL,byte ptr [ESI]
0055E331  42                        INC EDX
0055E332  88 08                     MOV byte ptr [EAX],CL
0055E334  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E33A  83 C0 02                  ADD EAX,0x2
0055E33D  83 C6 02                  ADD ESI,0x2
0055E340  3B D1                     CMP EDX,ECX
0055E342  7C EB                     JL 0x0055e32f
LAB_0055e344:
0055E344  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055E349  47                        INC EDI
0055E34A  3B F8                     CMP EDI,EAX
0055E34C  7C C4                     JL 0x0055e312
LAB_0055e34e:
0055E34E  83 F9 05                  CMP ECX,0x5
0055E351  0F 8C A2 06 00 00         JL 0x0055e9f9
0055E357  83 3D A8 33 80 00 05      CMP dword ptr [0x008033a8],0x5
0055E35E  0F 8C 95 06 00 00         JL 0x0055e9f9
0055E364  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055E367  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0055E36E  85 C9                     TEST ECX,ECX
0055E370  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055E373  7E 3F                     JLE 0x0055e3b4
0055E375  A1 80 33 80 00            MOV EAX,[0x00803380]
0055E37A  8D 58 01                  LEA EBX,[EAX + 0x1]
LAB_0055e37d:
0055E37D  33 D2                     XOR EDX,EDX
0055E37F  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
0055E382  8B C3                     MOV EAX,EBX
0055E384  BE 03 00 00 00            MOV ESI,0x3
LAB_0055e389:
0055E389  33 C9                     XOR ECX,ECX
0055E38B  8A 08                     MOV CL,byte ptr [EAX]
0055E38D  03 C7                     ADD EAX,EDI
0055E38F  03 D1                     ADD EDX,ECX
0055E391  4E                        DEC ESI
0055E392  75 F5                     JNZ 0x0055e389
0055E394  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055E397  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0055E39A  40                        INC EAX
0055E39B  83 C3 02                  ADD EBX,0x2
0055E39E  66 89 11                  MOV word ptr [ECX],DX
0055E3A1  83 C1 02                  ADD ECX,0x2
0055E3A4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055E3A7  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E3AD  3B C1                     CMP EAX,ECX
0055E3AF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0055E3B2  7C C9                     JL 0x0055e37d
LAB_0055e3b4:
0055E3B4  BE 01 00 00 00            MOV ESI,0x1
LAB_0055e3b9:
0055E3B9  8D 56 02                  LEA EDX,[ESI + 0x2]
0055E3BC  A1 80 33 80 00            MOV EAX,[0x00803380]
0055E3C1  0F AF D1                  IMUL EDX,ECX
0055E3C4  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
0055E3C7  8B D1                     MOV EDX,ECX
0055E3C9  0F AF D6                  IMUL EDX,ESI
0055E3CC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0055E3CF  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055E3D2  33 D2                     XOR EDX,EDX
0055E3D4  85 C9                     TEST ECX,ECX
0055E3D6  7E 26                     JLE 0x0055e3fe
0055E3D8  47                        INC EDI
LAB_0055e3d9:
0055E3D9  03 C9                     ADD ECX,ECX
0055E3DB  8B D8                     MOV EBX,EAX
0055E3DD  2B D9                     SUB EBX,ECX
0055E3DF  83 C0 02                  ADD EAX,0x2
0055E3E2  66 0F B6 0F               MOVZX CX,byte ptr [EDI]
0055E3E6  66 8B 1B                  MOV BX,word ptr [EBX]
0055E3E9  83 C7 02                  ADD EDI,0x2
0055E3EC  66 03 D9                  ADD BX,CX
0055E3EF  42                        INC EDX
0055E3F0  66 89 58 FE               MOV word ptr [EAX + -0x2],BX
0055E3F4  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E3FA  3B D1                     CMP EDX,ECX
0055E3FC  7C DB                     JL 0x0055e3d9
LAB_0055e3fe:
0055E3FE  46                        INC ESI
0055E3FF  83 FE 02                  CMP ESI,0x2
0055E402  7E B5                     JLE 0x0055e3b9
0055E404  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
0055E40A  83 C2 FE                  ADD EDX,-0x2
0055E40D  3B F2                     CMP ESI,EDX
0055E40F  0F 8D 86 00 00 00         JGE 0x0055e49b
0055E415  8D 7E 02                  LEA EDI,[ESI + 0x2]
0055E418  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
LAB_0055e41b:
0055E41B  8D 57 FB                  LEA EDX,[EDI + -0x5]
0055E41E  A1 80 33 80 00            MOV EAX,[0x00803380]
0055E423  0F AF D1                  IMUL EDX,ECX
0055E426  8D 1C 50                  LEA EBX,[EAX + EDX*0x2]
0055E429  8B D7                     MOV EDX,EDI
0055E42B  0F AF D1                  IMUL EDX,ECX
0055E42E  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055E431  8B D1                     MOV EDX,ECX
0055E433  0F AF D6                  IMUL EDX,ESI
0055E436  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055E439  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0055E43C  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055E43F  33 D2                     XOR EDX,EDX
0055E441  85 C9                     TEST ECX,ECX
0055E443  7E 44                     JLE 0x0055e489
0055E445  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055E448  47                        INC EDI
0055E449  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0055E44C  8D 7B 01                  LEA EDI,[EBX + 0x1]
LAB_0055e44f:
0055E44F  03 C9                     ADD ECX,ECX
0055E451  8B D8                     MOV EBX,EAX
0055E453  2B D9                     SUB EBX,ECX
0055E455  83 C0 02                  ADD EAX,0x2
0055E458  66 0F B6 0F               MOVZX CX,byte ptr [EDI]
0055E45C  66 8B 1B                  MOV BX,word ptr [EBX]
0055E45F  83 C7 02                  ADD EDI,0x2
0055E462  66 2B D9                  SUB BX,CX
0055E465  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055E468  66 0F B6 09               MOVZX CX,byte ptr [ECX]
0055E46C  03 D9                     ADD EBX,ECX
0055E46E  42                        INC EDX
0055E46F  66 89 58 FE               MOV word ptr [EAX + -0x2],BX
0055E473  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055E476  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E47C  83 C3 02                  ADD EBX,0x2
0055E47F  3B D1                     CMP EDX,ECX
0055E481  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0055E484  7C C9                     JL 0x0055e44f
0055E486  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_0055e489:
0055E489  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
0055E48F  46                        INC ESI
0055E490  83 C2 FE                  ADD EDX,-0x2
0055E493  47                        INC EDI
0055E494  3B F2                     CMP ESI,EDX
0055E496  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
0055E499  7C 80                     JL 0x0055e41b
LAB_0055e49b:
0055E49B  3B 35 A8 33 80 00         CMP ESI,dword ptr [0x008033a8]
0055E4A1  7D 5C                     JGE 0x0055e4ff
0055E4A3  8D 46 FD                  LEA EAX,[ESI + -0x3]
0055E4A6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0055e4a9:
0055E4A9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E4AC  A1 80 33 80 00            MOV EAX,[0x00803380]
0055E4B1  0F AF D1                  IMUL EDX,ECX
0055E4B4  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
0055E4B7  8B D1                     MOV EDX,ECX
0055E4B9  0F AF D6                  IMUL EDX,ESI
0055E4BC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0055E4BF  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055E4C2  33 D2                     XOR EDX,EDX
0055E4C4  85 C9                     TEST ECX,ECX
0055E4C6  7E 26                     JLE 0x0055e4ee
0055E4C8  47                        INC EDI
LAB_0055e4c9:
0055E4C9  03 C9                     ADD ECX,ECX
0055E4CB  8B D8                     MOV EBX,EAX
0055E4CD  2B D9                     SUB EBX,ECX
0055E4CF  83 C0 02                  ADD EAX,0x2
0055E4D2  66 0F B6 0F               MOVZX CX,byte ptr [EDI]
0055E4D6  66 8B 1B                  MOV BX,word ptr [EBX]
0055E4D9  83 C7 02                  ADD EDI,0x2
0055E4DC  66 2B D9                  SUB BX,CX
0055E4DF  42                        INC EDX
0055E4E0  66 89 58 FE               MOV word ptr [EAX + -0x2],BX
0055E4E4  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E4EA  3B D1                     CMP EDX,ECX
0055E4EC  7C DB                     JL 0x0055e4c9
LAB_0055e4ee:
0055E4EE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E4F1  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055E4F6  46                        INC ESI
0055E4F7  42                        INC EDX
0055E4F8  3B F0                     CMP ESI,EAX
0055E4FA  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0055E4FD  7C AA                     JL 0x0055e4a9
LAB_0055e4ff:
0055E4FF  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0055E506  C7 45 D4 0F 00 00 00      MOV dword ptr [EBP + -0x2c],0xf
0055E50D  C7 45 D0 0C 00 00 00      MOV dword ptr [EBP + -0x30],0xc
0055E514  C7 45 CC 09 00 00 00      MOV dword ptr [EBP + -0x34],0x9
LAB_0055e51b:
0055E51B  8B C1                     MOV EAX,ECX
0055E51D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055E520  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
0055E524  8B 3D 80 33 80 00         MOV EDI,dword ptr [0x00803380]
0055E52A  33 F6                     XOR ESI,ESI
0055E52C  D1 E0                     SHL EAX,0x1
0055E52E  03 D0                     ADD EDX,EAX
0055E530  03 F8                     ADD EDI,EAX
0055E532  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055E535  8B C2                     MOV EAX,EDX
0055E537  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0055E53A  BA 03 00 00 00            MOV EDX,0x3
LAB_0055e53f:
0055E53F  33 DB                     XOR EBX,EBX
0055E541  66 8B 18                  MOV BX,word ptr [EAX]
0055E544  83 C0 02                  ADD EAX,0x2
0055E547  03 F3                     ADD ESI,EBX
0055E549  4A                        DEC EDX
0055E54A  75 F3                     JNZ 0x0055e53f
0055E54C  F6 07 07                  TEST byte ptr [EDI],0x7
0055E54F  74 15                     JZ 0x0055e566
0055E551  33 C0                     XOR EAX,EAX
0055E553  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
0055E556  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
0055E559  99                        CDQ
0055E55A  F7 7D CC                  IDIV dword ptr [EBP + -0x34]
0055E55D  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0055E560  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e566:
0055E566  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0055E569  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E56C  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E56F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E572  83 C2 06                  ADD EDX,0x6
0055E575  BB 03 00 00 00            MOV EBX,0x3
0055E57A  8D 78 03                  LEA EDI,[EAX + 0x3]
0055E57D  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0055E580  C7 45 C0 02 00 00 00      MOV dword ptr [EBP + -0x40],0x2
0055E587  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_0055e58a:
0055E58A  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0055E58D  33 C0                     XOR EAX,EAX
0055E58F  66 8B 02                  MOV AX,word ptr [EDX]
0055E592  03 F0                     ADD ESI,EAX
0055E594  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
0055E597  A8 07                     TEST AL,0x7
0055E599  74 13                     JZ 0x0055e5ae
0055E59B  33 C0                     XOR EAX,EAX
0055E59D  8A 07                     MOV AL,byte ptr [EDI]
0055E59F  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
0055E5A2  99                        CDQ
0055E5A3  F7 7D C4                  IDIV dword ptr [EBP + -0x3c]
0055E5A6  88 07                     MOV byte ptr [EDI],AL
0055E5A8  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e5ae:
0055E5AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E5B1  83 C7 02                  ADD EDI,0x2
0055E5B4  8D 42 03                  LEA EAX,[EDX + 0x3]
0055E5B7  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055E5BA  03 D0                     ADD EDX,EAX
0055E5BC  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0055E5BF  83 C0 02                  ADD EAX,0x2
0055E5C2  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E5C5  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055E5C8  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0055E5CB  48                        DEC EAX
0055E5CC  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055E5CF  75 B9                     JNZ 0x0055e58a
0055E5D1  8D 41 FE                  LEA EAX,[ECX + -0x2]
0055E5D4  83 F8 03                  CMP EAX,0x3
0055E5D7  7E 53                     JLE 0x0055e62c
0055E5D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055E5DC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055E5DF  83 C0 0A                  ADD EAX,0xa
0055E5E2  8D 7A 07                  LEA EDI,[EDX + 0x7]
0055E5E5  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_0055e5e8:
0055E5E8  33 D2                     XOR EDX,EDX
0055E5EA  33 DB                     XOR EBX,EBX
0055E5EC  66 8B 50 F6               MOV DX,word ptr [EAX + -0xa]
0055E5F0  66 8B 18                  MOV BX,word ptr [EAX]
0055E5F3  2B DA                     SUB EBX,EDX
0055E5F5  8A 57 FF                  MOV DL,byte ptr [EDI + -0x1]
0055E5F8  03 F3                     ADD ESI,EBX
0055E5FA  F6 C2 07                  TEST DL,0x7
0055E5FD  74 16                     JZ 0x0055e615
0055E5FF  33 C0                     XOR EAX,EAX
0055E601  8A 07                     MOV AL,byte ptr [EDI]
0055E603  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
0055E606  99                        CDQ
0055E607  F7 7D D4                  IDIV dword ptr [EBP + -0x2c]
0055E60A  88 07                     MOV byte ptr [EDI],AL
0055E60C  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055E612  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
LAB_0055e615:
0055E615  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0055E618  8D 51 FE                  LEA EDX,[ECX + -0x2]
0055E61B  43                        INC EBX
0055E61C  83 C0 02                  ADD EAX,0x2
0055E61F  83 C7 02                  ADD EDI,0x2
0055E622  3B DA                     CMP EBX,EDX
0055E624  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0055E627  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055E62A  7C BC                     JL 0x0055e5e8
LAB_0055e62c:
0055E62C  3B D9                     CMP EBX,ECX
0055E62E  7D 53                     JGE 0x0055e683
0055E630  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E633  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E636  8D 7C 58 01               LEA EDI,[EAX + EBX*0x2 + 0x1]
0055E63A  8D 44 5A FA               LEA EAX,[EDX + EBX*0x2 + -0x6]
0055E63E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_0055e641:
0055E641  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E644  33 D2                     XOR EDX,EDX
0055E646  66 8B 10                  MOV DX,word ptr [EAX]
0055E649  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
0055E64C  2B F2                     SUB ESI,EDX
0055E64E  A8 07                     TEST AL,0x7
0055E650  74 20                     JZ 0x0055e672
0055E652  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E655  2B CB                     SUB ECX,EBX
0055E657  83 C1 02                  ADD ECX,0x2
0055E65A  8D 42 03                  LEA EAX,[EDX + 0x3]
0055E65D  0F AF C8                  IMUL ECX,EAX
0055E660  33 C0                     XOR EAX,EAX
0055E662  8A 07                     MOV AL,byte ptr [EDI]
0055E664  8D 04 86                  LEA EAX,[ESI + EAX*0x4]
0055E667  99                        CDQ
0055E668  F7 F9                     IDIV ECX
0055E66A  88 07                     MOV byte ptr [EDI],AL
0055E66C  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e672:
0055E672  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E675  43                        INC EBX
0055E676  83 C0 02                  ADD EAX,0x2
0055E679  83 C7 02                  ADD EDI,0x2
0055E67C  3B D9                     CMP EBX,ECX
0055E67E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0055E681  7C BE                     JL 0x0055e641
LAB_0055e683:
0055E683  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E686  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0055E689  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
0055E68C  40                        INC EAX
0055E68D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055E690  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0055E693  83 C0 03                  ADD EAX,0x3
0055E696  83 C7 04                  ADD EDI,0x4
0055E699  83 C6 05                  ADD ESI,0x5
0055E69C  83 F8 0F                  CMP EAX,0xf
0055E69F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0055E6A2  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0055E6A5  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0055E6A8  0F 8E 6D FE FF FF         JLE 0x0055e51b
0055E6AE  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
0055E6B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E6B7  83 C2 FE                  ADD EDX,-0x2
0055E6BA  3B C2                     CMP EAX,EDX
0055E6BC  0F 8D 87 01 00 00         JGE 0x0055e849
LAB_0055e6c2:
0055E6C2  8B C1                     MOV EAX,ECX
0055E6C4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055E6C7  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
0055E6CB  8B 3D 80 33 80 00         MOV EDI,dword ptr [0x00803380]
0055E6D1  33 F6                     XOR ESI,ESI
0055E6D3  D1 E0                     SHL EAX,0x1
0055E6D5  03 D0                     ADD EDX,EAX
0055E6D7  03 F8                     ADD EDI,EAX
0055E6D9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055E6DC  8B C2                     MOV EAX,EDX
0055E6DE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0055E6E1  BA 03 00 00 00            MOV EDX,0x3
LAB_0055e6e6:
0055E6E6  33 DB                     XOR EBX,EBX
0055E6E8  66 8B 18                  MOV BX,word ptr [EAX]
0055E6EB  83 C0 02                  ADD EAX,0x2
0055E6EE  03 F3                     ADD ESI,EBX
0055E6F0  4A                        DEC EDX
0055E6F1  75 F3                     JNZ 0x0055e6e6
0055E6F3  F6 07 07                  TEST byte ptr [EDI],0x7
0055E6F6  74 24                     JZ 0x0055e71c
0055E6F8  33 C0                     XOR EAX,EAX
0055E6FA  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
0055E6FD  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
0055E700  B8 89 88 88 88            MOV EAX,0x88888889
0055E705  F7 E9                     IMUL ECX
0055E707  03 D1                     ADD EDX,ECX
0055E709  C1 FA 03                  SAR EDX,0x3
0055E70C  8B CA                     MOV ECX,EDX
0055E70E  C1 E9 1F                  SHR ECX,0x1f
0055E711  03 D1                     ADD EDX,ECX
0055E713  88 57 01                  MOV byte ptr [EDI + 0x1],DL
0055E716  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e71c:
0055E71C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055E71F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055E722  83 C0 06                  ADD EAX,0x6
0055E725  BB 03 00 00 00            MOV EBX,0x3
0055E72A  C7 45 C4 14 00 00 00      MOV dword ptr [EBP + -0x3c],0x14
0055E731  8D 7A 03                  LEA EDI,[EDX + 0x3]
0055E734  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055E737  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_0055e73a:
0055E73A  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0055E73D  33 D2                     XOR EDX,EDX
0055E73F  66 8B 10                  MOV DX,word ptr [EAX]
0055E742  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
0055E745  03 F2                     ADD ESI,EDX
0055E747  A8 07                     TEST AL,0x7
0055E749  74 13                     JZ 0x0055e75e
0055E74B  33 C9                     XOR ECX,ECX
0055E74D  8A 0F                     MOV CL,byte ptr [EDI]
0055E74F  8D 04 8E                  LEA EAX,[ESI + ECX*0x4]
0055E752  99                        CDQ
0055E753  F7 7D C4                  IDIV dword ptr [EBP + -0x3c]
0055E756  88 07                     MOV byte ptr [EDI],AL
0055E758  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e75e:
0055E75E  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E761  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0055E764  83 C0 05                  ADD EAX,0x5
0055E767  83 C2 02                  ADD EDX,0x2
0055E76A  83 C7 02                  ADD EDI,0x2
0055E76D  83 F8 19                  CMP EAX,0x19
0055E770  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0055E773  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0055E776  7E C2                     JLE 0x0055e73a
0055E778  8D 51 FE                  LEA EDX,[ECX + -0x2]
0055E77B  83 FA 03                  CMP EDX,0x3
0055E77E  7E 60                     JLE 0x0055e7e0
0055E780  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E783  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E786  8D 78 07                  LEA EDI,[EAX + 0x7]
0055E789  8D 42 0A                  LEA EAX,[EDX + 0xa]
0055E78C  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_0055e78f:
0055E78F  33 D2                     XOR EDX,EDX
0055E791  33 DB                     XOR EBX,EBX
0055E793  66 8B 50 F6               MOV DX,word ptr [EAX + -0xa]
0055E797  66 8B 18                  MOV BX,word ptr [EAX]
0055E79A  2B DA                     SUB EBX,EDX
0055E79C  8A 57 FF                  MOV DL,byte ptr [EDI + -0x1]
0055E79F  03 F3                     ADD ESI,EBX
0055E7A1  F6 C2 07                  TEST DL,0x7
0055E7A4  74 23                     JZ 0x0055e7c9
0055E7A6  33 C0                     XOR EAX,EAX
0055E7A8  8A 07                     MOV AL,byte ptr [EDI]
0055E7AA  8D 0C 86                  LEA ECX,[ESI + EAX*0x4]
0055E7AD  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0055E7B2  F7 E9                     IMUL ECX
0055E7B4  C1 FA 03                  SAR EDX,0x3
0055E7B7  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0055E7BA  8B CA                     MOV ECX,EDX
0055E7BC  C1 E9 1F                  SHR ECX,0x1f
0055E7BF  03 D1                     ADD EDX,ECX
0055E7C1  88 17                     MOV byte ptr [EDI],DL
0055E7C3  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e7c9:
0055E7C9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0055E7CC  8D 51 FE                  LEA EDX,[ECX + -0x2]
0055E7CF  43                        INC EBX
0055E7D0  83 C0 02                  ADD EAX,0x2
0055E7D3  83 C7 02                  ADD EDI,0x2
0055E7D6  3B DA                     CMP EBX,EDX
0055E7D8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0055E7DB  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055E7DE  7C AF                     JL 0x0055e78f
LAB_0055e7e0:
0055E7E0  3B D9                     CMP EBX,ECX
0055E7E2  7D 4D                     JGE 0x0055e831
0055E7E4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E7E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E7EA  8D 7C 58 01               LEA EDI,[EAX + EBX*0x2 + 0x1]
0055E7EE  8D 44 5A FA               LEA EAX,[EDX + EBX*0x2 + -0x6]
0055E7F2  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_0055e7f5:
0055E7F5  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E7F8  33 D2                     XOR EDX,EDX
0055E7FA  66 8B 10                  MOV DX,word ptr [EAX]
0055E7FD  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
0055E800  2B F2                     SUB ESI,EDX
0055E802  A8 07                     TEST AL,0x7
0055E804  74 1A                     JZ 0x0055e820
0055E806  33 D2                     XOR EDX,EDX
0055E808  2B CB                     SUB ECX,EBX
0055E80A  8A 17                     MOV DL,byte ptr [EDI]
0055E80C  83 C1 02                  ADD ECX,0x2
0055E80F  8D 04 96                  LEA EAX,[ESI + EDX*0x4]
0055E812  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0055E815  99                        CDQ
0055E816  F7 F9                     IDIV ECX
0055E818  88 07                     MOV byte ptr [EDI],AL
0055E81A  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e820:
0055E820  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E823  43                        INC EBX
0055E824  83 C0 02                  ADD EAX,0x2
0055E827  83 C7 02                  ADD EDI,0x2
0055E82A  3B D9                     CMP EBX,ECX
0055E82C  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0055E82F  7C C4                     JL 0x0055e7f5
LAB_0055e831:
0055E831  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E834  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
0055E83A  40                        INC EAX
0055E83B  83 C2 FE                  ADD EDX,-0x2
0055E83E  3B C2                     CMP EAX,EDX
0055E840  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055E843  0F 8C 79 FE FF FF         JL 0x0055e6c2
LAB_0055e849:
0055E849  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055E84E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E851  3B D0                     CMP EDX,EAX
0055E853  0F 8D E1 02 00 00         JGE 0x0055eb3a
LAB_0055e859:
0055E859  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055E85C  8B C1                     MOV EAX,ECX
0055E85E  8B 35 A8 33 80 00         MOV ESI,dword ptr [0x008033a8]
0055E864  0F AF C2                  IMUL EAX,EDX
0055E867  8B 1D 80 33 80 00         MOV EBX,dword ptr [0x00803380]
0055E86D  2B F2                     SUB ESI,EDX
0055E86F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055E872  83 C6 02                  ADD ESI,0x2
0055E875  D1 E0                     SHL EAX,0x1
0055E877  33 FF                     XOR EDI,EDI
0055E879  03 D0                     ADD EDX,EAX
0055E87B  03 C3                     ADD EAX,EBX
0055E87D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0055E880  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055E883  8B C2                     MOV EAX,EDX
0055E885  BA 03 00 00 00            MOV EDX,0x3
LAB_0055e88a:
0055E88A  33 DB                     XOR EBX,EBX
0055E88C  66 8B 18                  MOV BX,word ptr [EAX]
0055E88F  83 C0 02                  ADD EAX,0x2
0055E892  03 FB                     ADD EDI,EBX
0055E894  4A                        DEC EDX
0055E895  75 F3                     JNZ 0x0055e88a
0055E897  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0055E89A  F6 03 07                  TEST byte ptr [EBX],0x7
0055E89D  74 17                     JZ 0x0055e8b6
0055E89F  33 C0                     XOR EAX,EAX
0055E8A1  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
0055E8A4  8A 43 01                  MOV AL,byte ptr [EBX + 0x1]
0055E8A7  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
0055E8AA  99                        CDQ
0055E8AB  F7 F9                     IDIV ECX
0055E8AD  88 43 01                  MOV byte ptr [EBX + 0x1],AL
0055E8B0  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e8b6:
0055E8B6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E8B9  8D 14 B5 00 00 00 00      LEA EDX,[ESI*0x4 + 0x0]
0055E8C0  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E8C3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E8C6  83 C2 06                  ADD EDX,0x6
0055E8C9  8D 58 03                  LEA EBX,[EAX + 0x3]
0055E8CC  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
0055E8CF  C7 45 C0 02 00 00 00      MOV dword ptr [EBP + -0x40],0x2
0055E8D6  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
LAB_0055e8dd:
0055E8DD  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0055E8E0  33 C0                     XOR EAX,EAX
0055E8E2  66 8B 02                  MOV AX,word ptr [EDX]
0055E8E5  03 F8                     ADD EDI,EAX
0055E8E7  8A 43 FF                  MOV AL,byte ptr [EBX + -0x1]
0055E8EA  A8 07                     TEST AL,0x7
0055E8EC  74 13                     JZ 0x0055e901
0055E8EE  33 C0                     XOR EAX,EAX
0055E8F0  8A 03                     MOV AL,byte ptr [EBX]
0055E8F2  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
0055E8F5  99                        CDQ
0055E8F6  F7 7D C4                  IDIV dword ptr [EBP + -0x3c]
0055E8F9  88 03                     MOV byte ptr [EBX],AL
0055E8FB  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e901:
0055E901  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0055E904  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055E907  83 C0 02                  ADD EAX,0x2
0055E90A  03 D6                     ADD EDX,ESI
0055E90C  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0055E90F  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0055E912  83 C3 02                  ADD EBX,0x2
0055E915  48                        DEC EAX
0055E916  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E919  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055E91C  75 BF                     JNZ 0x0055e8dd
0055E91E  8D 51 FE                  LEA EDX,[ECX + -0x2]
0055E921  83 FA 03                  CMP EDX,0x3
0055E924  7E 5C                     JLE 0x0055e982
0055E926  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0055E929  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E92C  83 C0 07                  ADD EAX,0x7
0055E92F  83 C2 0A                  ADD EDX,0xa
0055E932  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0055E935  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
LAB_0055e938:
0055E938  33 C0                     XOR EAX,EAX
0055E93A  33 DB                     XOR EBX,EBX
0055E93C  66 8B 42 F6               MOV AX,word ptr [EDX + -0xa]
0055E940  66 8B 1A                  MOV BX,word ptr [EDX]
0055E943  2B D8                     SUB EBX,EAX
0055E945  03 FB                     ADD EDI,EBX
0055E947  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
0055E94A  F6 43 FF 07               TEST byte ptr [EBX + -0x1],0x7
0055E94E  74 18                     JZ 0x0055e968
0055E950  33 C9                     XOR ECX,ECX
0055E952  8A 0B                     MOV CL,byte ptr [EBX]
0055E954  8D 04 8F                  LEA EAX,[EDI + ECX*0x4]
0055E957  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0055E95A  99                        CDQ
0055E95B  F7 F9                     IDIV ECX
0055E95D  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
0055E960  88 03                     MOV byte ptr [EBX],AL
0055E962  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e968:
0055E968  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055E96B  83 C3 02                  ADD EBX,0x2
0055E96E  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
0055E971  40                        INC EAX
0055E972  8D 59 FE                  LEA EBX,[ECX + -0x2]
0055E975  83 C2 02                  ADD EDX,0x2
0055E978  3B C3                     CMP EAX,EBX
0055E97A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0055E97D  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0055E980  7C B6                     JL 0x0055e938
LAB_0055e982:
0055E982  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055E985  3B C1                     CMP EAX,ECX
0055E987  7D 56                     JGE 0x0055e9df
0055E989  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0055E98C  8D 5C 42 01               LEA EBX,[EDX + EAX*0x2 + 0x1]
0055E990  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055E993  8D 44 42 FA               LEA EAX,[EDX + EAX*0x2 + -0x6]
0055E997  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_0055e99a:
0055E99A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0055E99D  33 D2                     XOR EDX,EDX
0055E99F  66 8B 10                  MOV DX,word ptr [EAX]
0055E9A2  8A 43 FF                  MOV AL,byte ptr [EBX + -0x1]
0055E9A5  2B FA                     SUB EDI,EDX
0055E9A7  A8 07                     TEST AL,0x7
0055E9A9  74 1D                     JZ 0x0055e9c8
0055E9AB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0055E9AE  2B CA                     SUB ECX,EDX
0055E9B0  33 D2                     XOR EDX,EDX
0055E9B2  8A 13                     MOV DL,byte ptr [EBX]
0055E9B4  83 C1 02                  ADD ECX,0x2
0055E9B7  0F AF CE                  IMUL ECX,ESI
0055E9BA  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
0055E9BD  99                        CDQ
0055E9BE  F7 F9                     IDIV ECX
0055E9C0  88 03                     MOV byte ptr [EBX],AL
0055E9C2  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055e9c8:
0055E9C8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055E9CB  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055E9CE  40                        INC EAX
0055E9CF  83 C2 02                  ADD EDX,0x2
0055E9D2  83 C3 02                  ADD EBX,0x2
0055E9D5  3B C1                     CMP EAX,ECX
0055E9D7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0055E9DA  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055E9DD  7C BB                     JL 0x0055e99a
LAB_0055e9df:
0055E9DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055E9E2  8B 15 A8 33 80 00         MOV EDX,dword ptr [0x008033a8]
0055E9E8  40                        INC EAX
0055E9E9  3B C2                     CMP EAX,EDX
0055E9EB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055E9EE  0F 8C 65 FE FF FF         JL 0x0055e859
0055E9F4  E9 41 01 00 00            JMP 0x0055eb3a
LAB_0055e9f9:
0055E9F9  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055E9FE  33 FF                     XOR EDI,EDI
0055EA00  85 C0                     TEST EAX,EAX
0055EA02  0F 8E 32 01 00 00         JLE 0x0055eb3a
LAB_0055ea08:
0055EA08  8B C1                     MOV EAX,ECX
0055EA0A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055EA0D  0F AF C7                  IMUL EAX,EDI
0055EA10  D1 E0                     SHL EAX,0x1
0055EA12  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
0055EA15  33 D2                     XOR EDX,EDX
0055EA17  85 C9                     TEST ECX,ECX
0055EA19  7E 22                     JLE 0x0055ea3d
0055EA1B  8B 0D 80 33 80 00         MOV ECX,dword ptr [0x00803380]
0055EA21  8D 44 08 01               LEA EAX,[EAX + ECX*0x1 + 0x1]
LAB_0055ea25:
0055EA25  66 0F B6 08               MOVZX CX,byte ptr [EAX]
0055EA29  66 89 0E                  MOV word ptr [ESI],CX
0055EA2C  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
0055EA32  42                        INC EDX
0055EA33  83 C0 02                  ADD EAX,0x2
0055EA36  83 C6 02                  ADD ESI,0x2
0055EA39  3B D1                     CMP EDX,ECX
0055EA3B  7C E8                     JL 0x0055ea25
LAB_0055ea3d:
0055EA3D  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055EA42  47                        INC EDI
0055EA43  3B F8                     CMP EDI,EAX
0055EA45  7C C1                     JL 0x0055ea08
0055EA47  85 C0                     TEST EAX,EAX
0055EA49  0F 8E EB 00 00 00         JLE 0x0055eb3a
0055EA4F  BB 02 00 00 00            MOV EBX,0x2
0055EA54  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
0055EA57  EB 06                     JMP 0x0055ea5f
LAB_0055ea59:
0055EA59  8B 0D A4 33 80 00         MOV ECX,dword ptr [0x008033a4]
LAB_0055ea5f:
0055EA5F  8D 53 FE                  LEA EDX,[EBX + -0x2]
0055EA62  A1 80 33 80 00            MOV EAX,[0x00803380]
0055EA67  0F AF D1                  IMUL EDX,ECX
0055EA6A  85 C9                     TEST ECX,ECX
0055EA6C  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0055EA6F  0F 8E B1 00 00 00         JLE 0x0055eb26
0055EA75  40                        INC EAX
0055EA76  BF 02 00 00 00            MOV EDI,0x2
0055EA7B  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
0055EA7E  A1 A4 33 80 00            MOV EAX,[0x008033a4]
LAB_0055ea83:
0055EA83  8D 73 FC                  LEA ESI,[EBX + -0x4]
0055EA86  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
0055EA8D  3B F3                     CMP ESI,EBX
0055EA8F  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0055EA96  7F 70                     JG 0x0055eb08
0055EA98  8B CE                     MOV ECX,ESI
0055EA9A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0055EA9D  0F AF C8                  IMUL ECX,EAX
0055EAA0  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
0055EAA3  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
LAB_0055eaa6:
0055EAA6  85 F6                     TEST ESI,ESI
0055EAA8  7C 3E                     JL 0x0055eae8
0055EAAA  3B 35 A8 33 80 00         CMP ESI,dword ptr [0x008033a8]
0055EAB0  7D 36                     JGE 0x0055eae8
0055EAB2  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055EAB5  8D 4F FC                  LEA ECX,[EDI + -0x4]
0055EAB8  3B CF                     CMP ECX,EDI
0055EABA  7F 2C                     JG 0x0055eae8
LAB_0055eabc:
0055EABC  85 C9                     TEST ECX,ECX
0055EABE  7C 20                     JL 0x0055eae0
0055EAC0  3B C8                     CMP ECX,EAX
0055EAC2  7D 1C                     JGE 0x0055eae0
0055EAC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055EAC7  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
0055EACA  40                        INC EAX
0055EACB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0055EACE  33 C0                     XOR EAX,EAX
0055EAD0  66 8B 02                  MOV AX,word ptr [EDX]
0055EAD3  03 D8                     ADD EBX,EAX
0055EAD5  A1 A4 33 80 00            MOV EAX,[0x008033a4]
0055EADA  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
0055EADD  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
LAB_0055eae0:
0055EAE0  41                        INC ECX
0055EAE1  83 C2 02                  ADD EDX,0x2
0055EAE4  3B CF                     CMP ECX,EDI
0055EAE6  7E D4                     JLE 0x0055eabc
LAB_0055eae8:
0055EAE8  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0055EAEB  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0055EAEE  46                        INC ESI
0055EAEF  03 D1                     ADD EDX,ECX
0055EAF1  3B F3                     CMP ESI,EBX
0055EAF3  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0055EAF6  7E AE                     JLE 0x0055eaa6
0055EAF8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055EAFB  85 C0                     TEST EAX,EAX
0055EAFD  7E 09                     JLE 0x0055eb08
0055EAFF  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0055EB02  99                        CDQ
0055EB03  F7 7D 08                  IDIV dword ptr [EBP + 0x8]
0055EB06  EB 02                     JMP 0x0055eb0a
LAB_0055eb08:
0055EB08  33 C0                     XOR EAX,EAX
LAB_0055eb0a:
0055EB0A  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0055EB0D  47                        INC EDI
0055EB0E  88 01                     MOV byte ptr [ECX],AL
0055EB10  A1 A4 33 80 00            MOV EAX,[0x008033a4]
0055EB15  83 C1 02                  ADD ECX,0x2
0055EB18  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0055EB1B  8D 4F FE                  LEA ECX,[EDI + -0x2]
0055EB1E  3B C8                     CMP ECX,EAX
0055EB20  0F 8C 5D FF FF FF         JL 0x0055ea83
LAB_0055eb26:
0055EB26  A1 A8 33 80 00            MOV EAX,[0x008033a8]
0055EB2B  43                        INC EBX
0055EB2C  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
0055EB2F  8D 53 FE                  LEA EDX,[EBX + -0x2]
0055EB32  3B D0                     CMP EDX,EAX
0055EB34  0F 8C 1F FF FF FF         JL 0x0055ea59
LAB_0055eb3a:
0055EB3A  8D 45 F0                  LEA EAX,[EBP + -0x10]
0055EB3D  50                        PUSH EAX
0055EB3E  E8 1D C5 14 00            CALL 0x006ab060
0055EB43  5F                        POP EDI
0055EB44  5E                        POP ESI
0055EB45  5B                        POP EBX
0055EB46  8B E5                     MOV ESP,EBP
0055EB48  5D                        POP EBP
0055EB49  C2 04 00                  RET 0x4
