STJellyGunC::sub_00584060:
00584060  55                        PUSH EBP
00584061  8B EC                     MOV EBP,ESP
00584063  83 EC 18                  SUB ESP,0x18
00584066  53                        PUSH EBX
00584067  56                        PUSH ESI
00584068  8B F1                     MOV ESI,ECX
0058406A  57                        PUSH EDI
0058406B  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
00584071  85 C0                     TEST EAX,EAX
00584073  74 76                     JZ 0x005840eb
00584075  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
0058407C  8A 8E 41 02 00 00         MOV CL,byte ptr [ESI + 0x241]
00584082  6A 01                     PUSH 0x1
00584084  50                        PUSH EAX
00584085  51                        PUSH ECX
00584086  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0058408C  E8 29 E8 E7 FF            CALL 0x004028ba
00584091  8B F8                     MOV EDI,EAX
00584093  85 FF                     TEST EDI,EDI
00584095  74 4A                     JZ 0x005840e1
00584097  8B 17                     MOV EDX,dword ptr [EDI]
00584099  8B CF                     MOV ECX,EDI
0058409B  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
005840A1  85 C0                     TEST EAX,EAX
005840A3  74 3C                     JZ 0x005840e1
005840A5  8D 45 FA                  LEA EAX,[EBP + -0x6]
005840A8  8D 4D FC                  LEA ECX,[EBP + -0x4]
005840AB  50                        PUSH EAX
005840AC  8D 55 FE                  LEA EDX,[EBP + -0x2]
005840AF  51                        PUSH ECX
005840B0  52                        PUSH EDX
005840B1  8B CF                     MOV ECX,EDI
005840B3  E8 53 1E E8 FF            CALL 0x00405f0b
005840B8  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005840BC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005840BF  5F                        POP EDI
005840C0  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005840C4  89 01                     MOV dword ptr [ECX],EAX
005840C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005840C9  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
005840CD  89 10                     MOV dword ptr [EAX],EDX
005840CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005840D2  5E                        POP ESI
005840D3  B8 01 00 00 00            MOV EAX,0x1
005840D8  89 0A                     MOV dword ptr [EDX],ECX
005840DA  5B                        POP EBX
005840DB  8B E5                     MOV ESP,EBP
005840DD  5D                        POP EBP
005840DE  C2 0C 00                  RET 0xc
LAB_005840e1:
005840E1  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
LAB_005840eb:
005840EB  8D 45 F8                  LEA EAX,[EBP + -0x8]
005840EE  8D 4D F6                  LEA ECX,[EBP + -0xa]
005840F1  50                        PUSH EAX
005840F2  8D 55 F4                  LEA EDX,[EBP + -0xc]
005840F5  51                        PUSH ECX
005840F6  52                        PUSH EDX
005840F7  8B CE                     MOV ECX,ESI
005840F9  E8 C7 D7 E7 FF            CALL 0x004018c5
005840FE  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00584101  BF 03 00 00 00            MOV EDI,0x3
00584106  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058410C  05 39 30 00 00            ADD EAX,0x3039
00584111  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00584114  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00584117  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058411D  C1 E8 10                  SHR EAX,0x10
00584120  83 E0 01                  AND EAX,0x1
00584123  40                        INC EAX
00584124  0F BF C8                  MOVSX ECX,AX
00584127  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058412D  33 D2                     XOR EDX,EDX
0058412F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00584132  C1 E8 10                  SHR EAX,0x10
00584135  F7 F7                     DIV EDI
00584137  85 D2                     TEST EDX,EDX
00584139  75 02                     JNZ 0x0058413d
0058413B  F7 D9                     NEG ECX
LAB_0058413d:
0058413D  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
00584141  2B C1                     SUB EAX,ECX
00584143  79 02                     JNS 0x00584147
00584145  F7 D8                     NEG EAX
LAB_00584147:
00584147  99                        CDQ
00584148  B9 05 00 00 00            MOV ECX,0x5
0058414D  8B BE 76 02 00 00         MOV EDI,dword ptr [ESI + 0x276]
00584153  F7 F9                     IDIV ECX
00584155  8B 8E 7E 02 00 00         MOV ECX,dword ptr [ESI + 0x27e]
0058415B  49                        DEC ECX
0058415C  85 FF                     TEST EDI,EDI
0058415E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00584161  7D 11                     JGE 0x00584174
00584163  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00584166  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058416C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00584172  EB 0E                     JMP 0x00584182
LAB_00584174:
00584174  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00584177  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058417D  05 39 30 00 00            ADD EAX,0x3039
LAB_00584182:
00584182  2B CF                     SUB ECX,EDI
00584184  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00584187  41                        INC ECX
00584188  33 D2                     XOR EDX,EDX
0058418A  C1 E8 10                  SHR EAX,0x10
0058418D  F7 F1                     DIV ECX
0058418F  8B 8E 82 02 00 00         MOV ECX,dword ptr [ESI + 0x282]
00584195  8B 9E 7A 02 00 00         MOV EBX,dword ptr [ESI + 0x27a]
0058419B  03 D7                     ADD EDX,EDI
0058419D  49                        DEC ECX
0058419E  85 DB                     TEST EBX,EBX
005841A0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005841A3  7D 11                     JGE 0x005841b6
005841A5  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005841A8  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
005841AE  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
005841B4  EB 0E                     JMP 0x005841c4
LAB_005841b6:
005841B6  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005841B9  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005841BF  05 39 30 00 00            ADD EAX,0x3039
LAB_005841c4:
005841C4  2B CB                     SUB ECX,EBX
005841C6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005841C9  41                        INC ECX
005841CA  33 D2                     XOR EDX,EDX
005841CC  C1 E8 10                  SHR EAX,0x10
005841CF  F7 F1                     DIV ECX
005841D1  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
005841D8  8B FA                     MOV EDI,EDX
005841DA  03 FB                     ADD EDI,EBX
LAB_005841dc:
005841DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005841DF  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005841E2  51                        PUSH ECX
005841E3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005841E9  57                        PUSH EDI
005841EA  53                        PUSH EBX
005841EB  E8 4B 0B E8 FF            CALL 0x00404d3b
005841F0  85 C0                     TEST EAX,EAX
005841F2  74 74                     JZ 0x00584268
005841F4  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
005841F8  3B DA                     CMP EBX,EDX
005841FA  0F 85 A6 00 00 00         JNZ 0x005842a6
00584200  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00584204  3B F8                     CMP EDI,EAX
00584206  0F 85 9A 00 00 00         JNZ 0x005842a6
0058420C  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00584210  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00584213  3B CA                     CMP ECX,EDX
00584215  0F 85 8E 00 00 00         JNZ 0x005842a9
0058421B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058421E  33 D2                     XOR EDX,EDX
00584220  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00584226  05 39 30 00 00            ADD EAX,0x3039
0058422B  BB 03 00 00 00            MOV EBX,0x3
00584230  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00584233  C1 E8 10                  SHR EAX,0x10
00584236  F7 F3                     DIV EBX
00584238  85 D2                     TEST EDX,EDX
0058423A  75 0E                     JNZ 0x0058424a
0058423C  41                        INC ECX
0058423D  83 F9 05                  CMP ECX,0x5
00584240  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00584243  7C 12                     JL 0x00584257
00584245  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00584248  EB 0D                     JMP 0x00584257
LAB_0058424a:
0058424A  49                        DEC ECX
0058424B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0058424E  79 07                     JNS 0x00584257
00584250  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_00584257:
00584257  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0058425A  40                        INC EAX
0058425B  83 F8 05                  CMP EAX,0x5
0058425E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00584261  74 63                     JZ 0x005842c6
00584263  E9 74 FF FF FF            JMP 0x005841dc
LAB_00584268:
00584268  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058426C  8B C3                     MOV EAX,EBX
0058426E  2B C1                     SUB EAX,ECX
00584270  85 C0                     TEST EAX,EAX
00584272  7E 0B                     JLE 0x0058427f
00584274  4B                        DEC EBX
00584275  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00584278  78 4C                     JS 0x005842c6
0058427A  E9 5D FF FF FF            JMP 0x005841dc
LAB_0058427f:
0058427F  7D 09                     JGE 0x0058428a
00584281  43                        INC EBX
00584282  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00584285  E9 52 FF FF FF            JMP 0x005841dc
LAB_0058428a:
0058428A  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058428E  8B C7                     MOV EAX,EDI
00584290  2B C2                     SUB EAX,EDX
00584292  85 C0                     TEST EAX,EAX
00584294  7E 08                     JLE 0x0058429e
00584296  4F                        DEC EDI
00584297  78 2D                     JS 0x005842c6
00584299  E9 3E FF FF FF            JMP 0x005841dc
LAB_0058429e:
0058429E  7D 26                     JGE 0x005842c6
005842A0  47                        INC EDI
005842A1  E9 36 FF FF FF            JMP 0x005841dc
LAB_005842a6:
005842A6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_005842a9:
005842A9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005842AC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005842AF  89 18                     MOV dword ptr [EAX],EBX
005842B1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005842B4  89 3A                     MOV dword ptr [EDX],EDI
005842B6  5F                        POP EDI
005842B7  89 08                     MOV dword ptr [EAX],ECX
005842B9  5E                        POP ESI
005842BA  B8 01 00 00 00            MOV EAX,0x1
005842BF  5B                        POP EBX
005842C0  8B E5                     MOV ESP,EBP
005842C2  5D                        POP EBP
005842C3  C2 0C 00                  RET 0xc
LAB_005842c6:
005842C6  5F                        POP EDI
005842C7  5E                        POP ESI
005842C8  33 C0                     XOR EAX,EAX
005842CA  5B                        POP EBX
005842CB  8B E5                     MOV ESP,EBP
005842CD  5D                        POP EBP
005842CE  C2 0C 00                  RET 0xc
