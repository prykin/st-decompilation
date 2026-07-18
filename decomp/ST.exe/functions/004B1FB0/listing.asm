FUN_004b1fb0:
004B1FB0  55                        PUSH EBP
004B1FB1  8B EC                     MOV EBP,ESP
004B1FB3  83 EC 18                  SUB ESP,0x18
004B1FB6  53                        PUSH EBX
004B1FB7  56                        PUSH ESI
004B1FB8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B1FBB  33 DB                     XOR EBX,EBX
004B1FBD  3B F3                     CMP ESI,EBX
004B1FBF  57                        PUSH EDI
004B1FC0  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004B1FC3  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004B1FC6  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
004B1FC9  74 02                     JZ 0x004b1fcd
004B1FCB  89 1E                     MOV dword ptr [ESI],EBX
LAB_004b1fcd:
004B1FCD  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B1FD0  3B FB                     CMP EDI,EBX
004B1FD2  74 02                     JZ 0x004b1fd6
004B1FD4  89 1F                     MOV dword ptr [EDI],EBX
LAB_004b1fd6:
004B1FD6  81 7D 08 E2 00 00 00      CMP dword ptr [EBP + 0x8],0xe2
004B1FDD  0F 85 81 00 00 00         JNZ 0x004b2064
004B1FE3  3B F3                     CMP ESI,EBX
004B1FE5  74 06                     JZ 0x004b1fed
004B1FE7  C7 06 01 00 00 00         MOV dword ptr [ESI],0x1
LAB_004b1fed:
004B1FED  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
004B1FF0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B1FF3  03 C6                     ADD EAX,ESI
004B1FF5  33 D2                     XOR EDX,EDX
004B1FF7  3B F0                     CMP ESI,EAX
004B1FF9  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
004B1FFC  7D 53                     JGE 0x004b2051
004B1FFE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_004b2001:
004B2001  85 F6                     TEST ESI,ESI
004B2003  7C 45                     JL 0x004b204a
004B2005  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004B200C  3B F1                     CMP ESI,ECX
004B200E  7D 3A                     JGE 0x004b204a
004B2010  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
004B2013  8B CB                     MOV ECX,EBX
004B2015  03 FB                     ADD EDI,EBX
004B2017  3B DF                     CMP EBX,EDI
004B2019  7D 2C                     JGE 0x004b2047
LAB_004b201b:
004B201B  85 C9                     TEST ECX,ECX
004B201D  7C 20                     JL 0x004b203f
004B201F  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B2026  3B C8                     CMP ECX,EAX
004B2028  7D 15                     JGE 0x004b203f
004B202A  0F AF C6                  IMUL EAX,ESI
004B202D  8B 1D 68 A1 7F 00         MOV EBX,dword ptr [0x007fa168]
004B2033  03 C3                     ADD EAX,EBX
004B2035  33 DB                     XOR EBX,EBX
004B2037  8A 1C 08                  MOV BL,byte ptr [EAX + ECX*0x1]
004B203A  03 D3                     ADD EDX,EBX
004B203C  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_004b203f:
004B203F  41                        INC ECX
004B2040  3B CF                     CMP ECX,EDI
004B2042  7C D7                     JL 0x004b201b
004B2044  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
LAB_004b2047:
004B2047  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_004b204a:
004B204A  46                        INC ESI
004B204B  3B F0                     CMP ESI,EAX
004B204D  7C B2                     JL 0x004b2001
004B204F  33 DB                     XOR EBX,EBX
LAB_004b2051:
004B2051  3B FB                     CMP EDI,EBX
004B2053  0F 84 C0 01 00 00         JZ 0x004b2219
004B2059  89 17                     MOV dword ptr [EDI],EDX
004B205B  5F                        POP EDI
004B205C  5E                        POP ESI
004B205D  33 C0                     XOR EAX,EAX
004B205F  5B                        POP EBX
004B2060  8B E5                     MOV ESP,EBP
004B2062  5D                        POP EBP
004B2063  C3                        RET
LAB_004b2064:
004B2064  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004B2069  3B C3                     CMP EAX,EBX
004B206B  0F 84 A8 01 00 00         JZ 0x004b2219
004B2071  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
004B2074  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B207A  8D 55 EC                  LEA EDX,[EBP + -0x14]
004B207D  E8 0E F1 1F 00            CALL 0x006b1190
004B2082  85 C0                     TEST EAX,EAX
004B2084  0F 8C 7D 01 00 00         JL 0x004b2207
004B208A  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
004B208D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_004b2090:
004B2090  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004B2093  85 C9                     TEST ECX,ECX
004B2095  0F 84 4E 01 00 00         JZ 0x004b21e9
004B209B  8B 11                     MOV EDX,dword ptr [ECX]
004B209D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B20A0  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
004B20A3  0F 85 40 01 00 00         JNZ 0x004b21e9
004B20A9  8D 45 FA                  LEA EAX,[EBP + -0x6]
004B20AC  8D 4D FE                  LEA ECX,[EBP + -0x2]
004B20AF  50                        PUSH EAX
004B20B0  8D 55 FC                  LEA EDX,[EBP + -0x4]
004B20B3  51                        PUSH ECX
004B20B4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004B20B7  52                        PUSH EDX
004B20B8  E8 08 F8 F4 FF            CALL 0x004018c5
004B20BD  66 8B 75 FE               MOV SI,word ptr [EBP + -0x2]
004B20C1  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
004B20C5  85 DB                     TEST EBX,EBX
004B20C7  7C 42                     JL 0x004b210b
004B20C9  85 FF                     TEST EDI,EDI
004B20CB  7C 3E                     JL 0x004b210b
004B20CD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B20D0  85 C0                     TEST EAX,EAX
004B20D2  7C 37                     JL 0x004b210b
004B20D4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004B20D7  85 C0                     TEST EAX,EAX
004B20D9  7C 30                     JL 0x004b210b
004B20DB  0F BF C2                  MOVSX EAX,DX
004B20DE  3B C3                     CMP EAX,EBX
004B20E0  0F 8C 03 01 00 00         JL 0x004b21e9
004B20E6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004B20E9  03 CB                     ADD ECX,EBX
004B20EB  3B C1                     CMP EAX,ECX
004B20ED  0F 8D F6 00 00 00         JGE 0x004b21e9
004B20F3  0F BF C6                  MOVSX EAX,SI
004B20F6  3B C7                     CMP EAX,EDI
004B20F8  0F 8C EB 00 00 00         JL 0x004b21e9
004B20FE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004B2101  03 CF                     ADD ECX,EDI
004B2103  3B C1                     CMP EAX,ECX
004B2105  0F 8D DE 00 00 00         JGE 0x004b21e9
LAB_004b210b:
004B210B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004B210E  41                        INC ECX
004B210F  66 85 D2                  TEST DX,DX
004B2112  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004B2115  7C 57                     JL 0x004b216e
004B2117  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004B211E  66 3B D1                  CMP DX,CX
004B2121  7D 4B                     JGE 0x004b216e
004B2123  66 85 F6                  TEST SI,SI
004B2126  7C 46                     JL 0x004b216e
004B2128  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004B212F  7D 3D                     JGE 0x004b216e
004B2131  66 8B 45 FA               MOV AX,word ptr [EBP + -0x6]
004B2135  66 85 C0                  TEST AX,AX
004B2138  7C 34                     JL 0x004b216e
004B213A  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B2141  7D 2B                     JGE 0x004b216e
004B2143  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B214A  0F BF C0                  MOVSX EAX,AX
004B214D  0F AF F8                  IMUL EDI,EAX
004B2150  0F BF C9                  MOVSX ECX,CX
004B2153  0F BF C6                  MOVSX EAX,SI
004B2156  0F AF C8                  IMUL ECX,EAX
004B2159  03 F9                     ADD EDI,ECX
004B215B  0F BF CA                  MOVSX ECX,DX
004B215E  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004B2164  03 F9                     ADD EDI,ECX
004B2166  8B 34 FA                  MOV ESI,dword ptr [EDX + EDI*0x8]
004B2169  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
004B216C  EB 02                     JMP 0x004b2170
LAB_004b216e:
004B216E  33 F6                     XOR ESI,ESI
LAB_004b2170:
004B2170  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2173  83 C0 A2                  ADD EAX,-0x5e
004B2176  3D 80 00 00 00            CMP EAX,0x80
004B217B  77 31                     JA 0x004b21ae
004B217D  33 C9                     XOR ECX,ECX
004B217F  8A 88 38 22 4B 00         MOV CL,byte ptr [EAX + 0x4b2238]
switchD_004b2185::switchD:
004B2185  FF 24 8D 24 22 4B 00      JMP dword ptr [ECX*0x4 + 0x4b2224]
switchD_004b2185::caseD_dc:
004B218C  C7 45 F4 38 00 00 00      MOV dword ptr [EBP + -0xc],0x38
004B2193  EB 19                     JMP 0x004b21ae
switchD_004b2185::caseD_5e:
004B2195  C7 45 F4 39 00 00 00      MOV dword ptr [EBP + -0xc],0x39
004B219C  EB 10                     JMP 0x004b21ae
switchD_004b2185::caseD_de:
004B219E  C7 45 F4 4F 00 00 00      MOV dword ptr [EBP + -0xc],0x4f
004B21A5  EB 07                     JMP 0x004b21ae
switchD_004b2185::caseD_61:
004B21A7  C7 45 F4 E0 00 00 00      MOV dword ptr [EBP + -0xc],0xe0
switchD_004b2185::caseD_5f:
004B21AE  85 F6                     TEST ESI,ESI
004B21B0  74 26                     JZ 0x004b21d8
004B21B2  81 7E 20 E8 03 00 00      CMP dword ptr [ESI + 0x20],0x3e8
004B21B9  75 1D                     JNZ 0x004b21d8
004B21BB  8B 16                     MOV EDX,dword ptr [ESI]
004B21BD  8B CE                     MOV ECX,ESI
004B21BF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B21C2  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
004B21C5  75 11                     JNZ 0x004b21d8
004B21C7  8B 06                     MOV EAX,dword ptr [ESI]
004B21C9  6A 00                     PUSH 0x0
004B21CB  8B CE                     MOV ECX,ESI
004B21CD  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
004B21D3  01 45 F0                  ADD dword ptr [EBP + -0x10],EAX
004B21D6  EB 11                     JMP 0x004b21e9
LAB_004b21d8:
004B21D8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004B21DB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B21DE  8B 91 59 02 00 00         MOV EDX,dword ptr [ECX + 0x259]
004B21E4  03 C2                     ADD EAX,EDX
004B21E6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004b21e9:
004B21E9  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B21EF  8D 55 EC                  LEA EDX,[EBP + -0x14]
004B21F2  E8 99 EF 1F 00            CALL 0x006b1190
004B21F7  85 C0                     TEST EAX,EAX
004B21F9  0F 8D 91 FE FF FF         JGE 0x004b2090
004B21FF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B2202  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B2205  33 DB                     XOR EBX,EBX
LAB_004b2207:
004B2207  3B F3                     CMP ESI,EBX
004B2209  74 05                     JZ 0x004b2210
004B220B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004B220E  89 06                     MOV dword ptr [ESI],EAX
LAB_004b2210:
004B2210  3B FB                     CMP EDI,EBX
004B2212  74 05                     JZ 0x004b2219
004B2214  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B2217  89 0F                     MOV dword ptr [EDI],ECX
LAB_004b2219:
004B2219  5F                        POP EDI
004B221A  5E                        POP ESI
004B221B  33 C0                     XOR EAX,EAX
004B221D  5B                        POP EBX
004B221E  8B E5                     MOV ESP,EBP
004B2220  5D                        POP EBP
004B2221  C3                        RET
