FUN_006b2020:
006B2020  55                        PUSH EBP
006B2021  8B EC                     MOV EBP,ESP
006B2023  51                        PUSH ECX
006B2024  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B2027  53                        PUSH EBX
006B2028  56                        PUSH ESI
006B2029  57                        PUSH EDI
006B202A  8B 88 AC 01 00 00         MOV ECX,dword ptr [EAX + 0x1ac]
006B2030  8B 90 A0 01 00 00         MOV EDX,dword ptr [EAX + 0x1a0]
006B2036  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B2039  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B203C  3B CA                     CMP ECX,EDX
006B203E  0F 83 90 01 00 00         JNC 0x006b21d4
006B2044  8B 90 B0 01 00 00         MOV EDX,dword ptr [EAX + 0x1b0]
006B204A  8B 1C 8A                  MOV EBX,dword ptr [EDX + ECX*0x4]
006B204D  F7 03 00 00 08 00         TEST dword ptr [EBX],0x80000
006B2053  0F 85 7B 01 00 00         JNZ 0x006b21d4
006B2059  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
006B205C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006B205F  8B 73 48                  MOV ESI,dword ptr [EBX + 0x48]
006B2062  3B F9                     CMP EDI,ECX
006B2064  0F 8D 9F 00 00 00         JGE 0x006b2109
006B206A  53                        PUSH EBX
006B206B  50                        PUSH EAX
006B206C  89 7B 44                  MOV dword ptr [EBX + 0x44],EDI
006B206F  E8 9C CD 01 00            CALL 0x006cee10
006B2074  85 F6                     TEST ESI,ESI
006B2076  89 43 50                  MOV dword ptr [EBX + 0x50],EAX
006B2079  0F 8E 55 01 00 00         JLE 0x006b21d4
006B207F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B2082  8B 44 B1 FC               MOV EAX,dword ptr [ECX + ESI*0x4 + -0x4]
006B2086  3B 78 44                  CMP EDI,dword ptr [EAX + 0x44]
006B2089  0F 8D 45 01 00 00         JGE 0x006b21d4
006B208F  8B 03                     MOV EAX,dword ptr [EBX]
006B2091  F6 C4 40                  TEST AH,0x40
006B2094  74 20                     JZ 0x006b20b6
006B2096  4E                        DEC ESI
006B2097  78 46                     JS 0x006b20df
006B2099  8D 0C B1                  LEA ECX,[ECX + ESI*0x4]
LAB_006b209c:
006B209C  8B 01                     MOV EAX,dword ptr [ECX]
006B209E  3B 78 44                  CMP EDI,dword ptr [EAX + 0x44]
006B20A1  7D 3C                     JGE 0x006b20df
006B20A3  8D 56 01                  LEA EDX,[ESI + 0x1]
006B20A6  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006B20A9  4E                        DEC ESI
006B20AA  83 E9 04                  SUB ECX,0x4
006B20AD  85 F6                     TEST ESI,ESI
006B20AF  89 50 48                  MOV dword ptr [EAX + 0x48],EDX
006B20B2  7D E8                     JGE 0x006b209c
006B20B4  EB 29                     JMP 0x006b20df
LAB_006b20b6:
006B20B6  4E                        DEC ESI
006B20B7  78 26                     JS 0x006b20df
006B20B9  8D 0C B1                  LEA ECX,[ECX + ESI*0x4]
LAB_006b20bc:
006B20BC  8B 01                     MOV EAX,dword ptr [ECX]
006B20BE  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
006B20C1  3B FA                     CMP EDI,EDX
006B20C3  7C 09                     JL 0x006b20ce
006B20C5  75 18                     JNZ 0x006b20df
006B20C7  8B 10                     MOV EDX,dword ptr [EAX]
006B20C9  F6 C6 40                  TEST DH,0x40
006B20CC  74 11                     JZ 0x006b20df
LAB_006b20ce:
006B20CE  8D 56 01                  LEA EDX,[ESI + 0x1]
006B20D1  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
006B20D4  4E                        DEC ESI
006B20D5  83 E9 04                  SUB ECX,0x4
006B20D8  85 F6                     TEST ESI,ESI
006B20DA  89 50 48                  MOV dword ptr [EAX + 0x48],EDX
006B20DD  7D DD                     JGE 0x006b20bc
LAB_006b20df:
006B20DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B20E2  46                        INC ESI
006B20E3  89 1C B0                  MOV dword ptr [EAX + ESI*0x4],EBX
006B20E6  8A 03                     MOV AL,byte ptr [EBX]
006B20E8  A8 20                     TEST AL,0x20
006B20EA  89 73 48                  MOV dword ptr [EBX + 0x48],ESI
006B20ED  0F 84 E1 00 00 00         JZ 0x006b21d4
006B20F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B20F6  5F                        POP EDI
006B20F7  5E                        POP ESI
006B20F8  5B                        POP EBX
006B20F9  C7 81 B4 01 00 00 01 00 00 00  MOV dword ptr [ECX + 0x1b4],0x1
006B2103  8B E5                     MOV ESP,EBP
006B2105  5D                        POP EBP
006B2106  C2 0C 00                  RET 0xc
LAB_006b2109:
006B2109  0F 8E BB 00 00 00         JLE 0x006b21ca
006B210F  53                        PUSH EBX
006B2110  50                        PUSH EAX
006B2111  89 7B 44                  MOV dword ptr [EBX + 0x44],EDI
006B2114  E8 F7 CC 01 00            CALL 0x006cee10
006B2119  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B211C  89 43 50                  MOV dword ptr [EBX + 0x50],EAX
006B211F  8B 8A A0 01 00 00         MOV ECX,dword ptr [EDX + 0x1a0]
006B2125  8D 41 FF                  LEA EAX,[ECX + -0x1]
006B2128  3B F0                     CMP ESI,EAX
006B212A  0F 8D A4 00 00 00         JGE 0x006b21d4
006B2130  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B2133  8D 46 01                  LEA EAX,[ESI + 0x1]
006B2136  8B 74 B2 04               MOV ESI,dword ptr [EDX + ESI*0x4 + 0x4]
006B213A  3B 7E 44                  CMP EDI,dword ptr [ESI + 0x44]
006B213D  0F 8E 91 00 00 00         JLE 0x006b21d4
006B2143  F7 03 00 40 00 00         TEST dword ptr [EBX],0x4000
006B2149  74 28                     JZ 0x006b2173
006B214B  3B C1                     CMP EAX,ECX
006B214D  7D 56                     JGE 0x006b21a5
006B214F  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
LAB_006b2152:
006B2152  8B 0A                     MOV ECX,dword ptr [EDX]
006B2154  3B 79 44                  CMP EDI,dword ptr [ECX + 0x44]
006B2157  7E 4C                     JLE 0x006b21a5
006B2159  8D 70 FF                  LEA ESI,[EAX + -0x1]
006B215C  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
006B215F  89 71 48                  MOV dword ptr [ECX + 0x48],ESI
006B2162  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2165  40                        INC EAX
006B2166  83 C2 04                  ADD EDX,0x4
006B2169  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B216F  7C E1                     JL 0x006b2152
006B2171  EB 32                     JMP 0x006b21a5
LAB_006b2173:
006B2173  3B C1                     CMP EAX,ECX
006B2175  7D 2E                     JGE 0x006b21a5
006B2177  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
LAB_006b217a:
006B217A  8B 0A                     MOV ECX,dword ptr [EDX]
006B217C  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
006B217F  3B FE                     CMP EDI,ESI
006B2181  7F 0A                     JG 0x006b218d
006B2183  75 20                     JNZ 0x006b21a5
006B2185  F7 01 00 40 00 00         TEST dword ptr [ECX],0x4000
006B218B  74 18                     JZ 0x006b21a5
LAB_006b218d:
006B218D  8D 70 FF                  LEA ESI,[EAX + -0x1]
006B2190  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
006B2193  89 71 48                  MOV dword ptr [ECX + 0x48],ESI
006B2196  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B2199  40                        INC EAX
006B219A  83 C2 04                  ADD EDX,0x4
006B219D  3B 81 A0 01 00 00         CMP EAX,dword ptr [ECX + 0x1a0]
006B21A3  7C D5                     JL 0x006b217a
LAB_006b21a5:
006B21A5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B21A8  48                        DEC EAX
006B21A9  89 1C 82                  MOV dword ptr [EDX + EAX*0x4],EBX
006B21AC  89 43 48                  MOV dword ptr [EBX + 0x48],EAX
006B21AF  F6 03 20                  TEST byte ptr [EBX],0x20
006B21B2  74 20                     JZ 0x006b21d4
006B21B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B21B7  5F                        POP EDI
006B21B8  5E                        POP ESI
006B21B9  5B                        POP EBX
006B21BA  C7 80 B4 01 00 00 01 00 00 00  MOV dword ptr [EAX + 0x1b4],0x1
006B21C4  8B E5                     MOV ESP,EBP
006B21C6  5D                        POP EBP
006B21C7  C2 0C 00                  RET 0xc
LAB_006b21ca:
006B21CA  53                        PUSH EBX
006B21CB  50                        PUSH EAX
006B21CC  E8 3F CC 01 00            CALL 0x006cee10
006B21D1  89 43 50                  MOV dword ptr [EBX + 0x50],EAX
LAB_006b21d4:
006B21D4  5F                        POP EDI
006B21D5  5E                        POP ESI
006B21D6  5B                        POP EBX
006B21D7  8B E5                     MOV ESP,EBP
006B21D9  5D                        POP EBP
006B21DA  C2 0C 00                  RET 0xc
