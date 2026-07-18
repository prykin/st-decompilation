FUN_004e16d0:
004E16D0  55                        PUSH EBP
004E16D1  8B EC                     MOV EBP,ESP
004E16D3  56                        PUSH ESI
004E16D4  8B F1                     MOV ESI,ECX
004E16D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E16D9  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004E16DF  3B C1                     CMP EAX,ECX
004E16E1  0F 85 36 01 00 00         JNZ 0x004e181d
004E16E7  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E16ED  85 C0                     TEST EAX,EAX
004E16EF  0F 85 28 01 00 00         JNZ 0x004e181d
004E16F5  57                        PUSH EDI
004E16F6  BF 01 00 00 00            MOV EDI,0x1
004E16FB  57                        PUSH EDI
004E16FC  8B CE                     MOV ECX,ESI
004E16FE  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004E1704  89 BE E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EDI
004E170A  E8 E8 15 F2 FF            CALL 0x00402cf7
004E170F  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E1715  89 BE E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EDI
004E171B  83 C0 C7                  ADD EAX,-0x39
004E171E  83 F8 27                  CMP EAX,0x27
004E1721  0F 87 E7 00 00 00         JA 0x004e180e
004E1727  33 C9                     XOR ECX,ECX
004E1729  8A 88 40 18 4E 00         MOV CL,byte ptr [EAX + 0x4e1840]
switchD_004e172f::switchD:
004E172F  FF 24 8D 24 18 4E 00      JMP dword ptr [ECX*0x4 + 0x4e1824]
switchD_004e172f::caseD_5e:
004E1736  8B 16                     MOV EDX,dword ptr [ESI]
004E1738  68 A9 03 00 00            PUSH 0x3a9
004E173D  6A 03                     PUSH 0x3
004E173F  8B CE                     MOV ECX,ESI
004E1741  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1747  8B CE                     MOV ECX,ESI
004E1749  E8 89 17 F2 FF            CALL 0x00402ed7
004E174E  5F                        POP EDI
004E174F  33 C0                     XOR EAX,EAX
004E1751  5E                        POP ESI
004E1752  5D                        POP EBP
004E1753  C2 04 00                  RET 0x4
switchD_004e172f::caseD_39:
004E1756  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E175C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1762  8B 3E                     MOV EDI,dword ptr [ESI]
004E1764  50                        PUSH EAX
004E1765  E8 4D 32 F2 FF            CALL 0x004049b7
004E176A  2C 02                     SUB AL,0x2
004E176C  F6 D8                     NEG AL
004E176E  1B C0                     SBB EAX,EAX
004E1770  24 3A                     AND AL,0x3a
004E1772  05 E8 02 00 00            ADD EAX,0x2e8
004E1777  E9 87 00 00 00            JMP 0x004e1803
switchD_004e172f::caseD_4f:
004E177C  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E1782  8B 3E                     MOV EDI,dword ptr [ESI]
004E1784  51                        PUSH ECX
004E1785  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E178B  E8 27 32 F2 FF            CALL 0x004049b7
004E1790  2C 02                     SUB AL,0x2
004E1792  F6 D8                     NEG AL
004E1794  1B C0                     SBB EAX,EAX
004E1796  24 32                     AND AL,0x32
004E1798  05 4E 03 00 00            ADD EAX,0x34e
004E179D  EB 64                     JMP 0x004e1803
switchD_004e172f::caseD_60:
004E179F  8B 16                     MOV EDX,dword ptr [ESI]
004E17A1  68 B8 03 00 00            PUSH 0x3b8
004E17A6  6A 03                     PUSH 0x3
004E17A8  8B CE                     MOV ECX,ESI
004E17AA  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E17B0  8B CE                     MOV ECX,ESI
004E17B2  E8 20 17 F2 FF            CALL 0x00402ed7
004E17B7  5F                        POP EDI
004E17B8  33 C0                     XOR EAX,EAX
004E17BA  5E                        POP ESI
004E17BB  5D                        POP EBP
004E17BC  C2 04 00                  RET 0x4
switchD_004e172f::caseD_3b:
004E17BF  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E17C5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E17CB  8B 3E                     MOV EDI,dword ptr [ESI]
004E17CD  50                        PUSH EAX
004E17CE  E8 E4 31 F2 FF            CALL 0x004049b7
004E17D3  2C 02                     SUB AL,0x2
004E17D5  F6 D8                     NEG AL
004E17D7  1B C0                     SBB EAX,EAX
004E17D9  24 3A                     AND AL,0x3a
004E17DB  05 F5 02 00 00            ADD EAX,0x2f5
004E17E0  EB 21                     JMP 0x004e1803
switchD_004e172f::caseD_52:
004E17E2  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E17E8  8B 3E                     MOV EDI,dword ptr [ESI]
004E17EA  51                        PUSH ECX
004E17EB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E17F1  E8 C1 31 F2 FF            CALL 0x004049b7
004E17F6  2C 02                     SUB AL,0x2
004E17F8  F6 D8                     NEG AL
004E17FA  1B C0                     SBB EAX,EAX
004E17FC  24 3B                     AND AL,0x3b
004E17FE  05 5B 03 00 00            ADD EAX,0x35b
LAB_004e1803:
004E1803  50                        PUSH EAX
004E1804  6A 03                     PUSH 0x3
004E1806  8B CE                     MOV ECX,ESI
004E1808  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
switchD_004e172f::caseD_3a:
004E180E  8B CE                     MOV ECX,ESI
004E1810  E8 C2 16 F2 FF            CALL 0x00402ed7
004E1815  5F                        POP EDI
004E1816  33 C0                     XOR EAX,EAX
004E1818  5E                        POP ESI
004E1819  5D                        POP EBP
004E181A  C2 04 00                  RET 0x4
LAB_004e181d:
004E181D  33 C0                     XOR EAX,EAX
004E181F  5E                        POP ESI
004E1820  5D                        POP EBP
004E1821  C2 04 00                  RET 0x4
