FUN_004b1690:
004B1690  55                        PUSH EBP
004B1691  8B EC                     MOV EBP,ESP
004B1693  83 EC 10                  SUB ESP,0x10
004B1696  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1699  53                        PUSH EBX
004B169A  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B16A1  56                        PUSH ESI
004B16A2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B16A5  57                        PUSH EDI
004B16A6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B16A9  85 F6                     TEST ESI,ESI
004B16AB  0F 8C 65 01 00 00         JL 0x004b1816
004B16B1  0F BF C3                  MOVSX EAX,BX
004B16B4  8D 4E 01                  LEA ECX,[ESI + 0x1]
004B16B7  3B C8                     CMP ECX,EAX
004B16B9  0F 8F 57 01 00 00         JG 0x004b1816
004B16BF  85 D2                     TEST EDX,EDX
004B16C1  0F 8C 4F 01 00 00         JL 0x004b1816
004B16C7  8D 42 01                  LEA EAX,[EDX + 0x1]
004B16CA  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B16D1  3B C2                     CMP EAX,EDX
004B16D3  0F 8F 3D 01 00 00         JG 0x004b1816
004B16D9  85 FF                     TEST EDI,EDI
004B16DB  0F 8C 35 01 00 00         JL 0x004b1816
004B16E1  8D 57 01                  LEA EDX,[EDI + 0x1]
004B16E4  0F BF 3D 44 B2 7F 00      MOVSX EDI,word ptr [0x007fb244]
004B16EB  3B D7                     CMP EDX,EDI
004B16ED  0F 8F 23 01 00 00         JG 0x004b1816
004B16F3  BA 01 00 00 00            MOV EDX,0x1
004B16F8  3B F1                     CMP ESI,ECX
004B16FA  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004B16FD  0F 8D 15 01 00 00         JGE 0x004b1818
LAB_004b1703:
004B1703  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1706  3B C8                     CMP ECX,EAX
004B1708  0F 8D F3 00 00 00         JGE 0x004b1801
LAB_004b170e:
004B170E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1711  8D 50 01                  LEA EDX,[EAX + 0x1]
004B1714  3B C2                     CMP EAX,EDX
004B1716  0F 8D D5 00 00 00         JGE 0x004b17f1
LAB_004b171c:
004B171C  66 85 F6                  TEST SI,SI
004B171F  0F 8C F1 00 00 00         JL 0x004b1816
004B1725  66 3B F3                  CMP SI,BX
004B1728  7D 56                     JGE 0x004b1780
004B172A  66 85 C9                  TEST CX,CX
004B172D  7C 51                     JL 0x004b1780
004B172F  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004B1736  7D 48                     JGE 0x004b1780
004B1738  66 85 C0                  TEST AX,AX
004B173B  7C 43                     JL 0x004b1780
004B173D  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B1744  7D 3A                     JGE 0x004b1780
004B1746  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B174D  0F BF F8                  MOVSX EDI,AX
004B1750  0F AF FA                  IMUL EDI,EDX
004B1753  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004B1756  0F BF F9                  MOVSX EDI,CX
004B1759  0F BF D3                  MOVSX EDX,BX
004B175C  0F AF FA                  IMUL EDI,EDX
004B175F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004B1762  03 D7                     ADD EDX,EDI
004B1764  0F BF FE                  MOVSX EDI,SI
004B1767  03 D7                     ADD EDX,EDI
004B1769  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004B176F  83 3C D7 00               CMP dword ptr [EDI + EDX*0x8],0x0
004B1773  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B177A  0F 85 96 00 00 00         JNZ 0x004b1816
LAB_004b1780:
004B1780  66 85 F6                  TEST SI,SI
004B1783  0F 8C 8D 00 00 00         JL 0x004b1816
004B1789  66 3B F3                  CMP SI,BX
004B178C  0F 8D 84 00 00 00         JGE 0x004b1816
004B1792  66 85 C9                  TEST CX,CX
004B1795  7C 7F                     JL 0x004b1816
004B1797  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004B179E  7D 76                     JGE 0x004b1816
004B17A0  66 85 C0                  TEST AX,AX
004B17A3  7C 71                     JL 0x004b1816
004B17A5  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B17AC  7D 68                     JGE 0x004b1816
004B17AE  0F BF 3D 78 B2 7F 00      MOVSX EDI,word ptr [0x007fb278]
004B17B5  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004B17BC  0F BF D1                  MOVSX EDX,CX
004B17BF  0F AF D7                  IMUL EDX,EDI
004B17C2  0F BF F8                  MOVSX EDI,AX
004B17C5  0F AF FB                  IMUL EDI,EBX
004B17C8  03 D7                     ADD EDX,EDI
004B17CA  0F BF FE                  MOVSX EDI,SI
004B17CD  03 D7                     ADD EDX,EDI
004B17CF  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
004B17D5  0F BF 14 57               MOVSX EDX,word ptr [EDI + EDX*0x2]
004B17D9  85 D2                     TEST EDX,EDX
004B17DB  75 32                     JNZ 0x004b180f
004B17DD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B17E0  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B17E7  40                        INC EAX
004B17E8  42                        INC EDX
004B17E9  3B C2                     CMP EAX,EDX
004B17EB  0F 8C 2B FF FF FF         JL 0x004b171c
LAB_004b17f1:
004B17F1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B17F4  41                        INC ECX
004B17F5  40                        INC EAX
004B17F6  3B C8                     CMP ECX,EAX
004B17F8  0F 8C 10 FF FF FF         JL 0x004b170e
004B17FE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
LAB_004b1801:
004B1801  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B1804  46                        INC ESI
004B1805  41                        INC ECX
004B1806  3B F1                     CMP ESI,ECX
004B1808  7D 0E                     JGE 0x004b1818
004B180A  E9 F4 FE FF FF            JMP 0x004b1703
LAB_004b180f:
004B180F  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
LAB_004b1816:
004B1816  33 D2                     XOR EDX,EDX
LAB_004b1818:
004B1818  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B181B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004B1822  2D DD 00 00 00            SUB EAX,0xdd
004B1827  74 0C                     JZ 0x004b1835
004B1829  48                        DEC EAX
004B182A  75 10                     JNZ 0x004b183c
004B182C  C7 45 FC D0 07 79 00      MOV dword ptr [EBP + -0x4],0x7907d0
004B1833  EB 07                     JMP 0x004b183c
LAB_004b1835:
004B1835  C7 45 FC AC 07 79 00      MOV dword ptr [EBP + -0x4],0x7907ac
LAB_004b183c:
004B183C  85 D2                     TEST EDX,EDX
004B183E  0F 84 4D 03 00 00         JZ 0x004b1b91
004B1844  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1847  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004B184E  85 C0                     TEST EAX,EAX
004B1850  0F 8E 46 01 00 00         JLE 0x004b199c
004B1856  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B1859  8D 50 FF                  LEA EDX,[EAX + -0x1]
004B185C  83 C0 02                  ADD EAX,0x2
004B185F  3B D0                     CMP EDX,EAX
004B1861  0F 8D 35 01 00 00         JGE 0x004b199c
004B1867  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B186A  83 C0 02                  ADD EAX,0x2
LAB_004b186d:
004B186D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1870  49                        DEC ECX
004B1871  3B C8                     CMP ECX,EAX
004B1873  0F 8D 0B 01 00 00         JGE 0x004b1984
004B1879  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B187C  8D 3C 49                  LEA EDI,[ECX + ECX*0x2]
004B187F  C1 E7 02                  SHL EDI,0x2
004B1882  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B1885  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
004B1888  C1 E0 02                  SHL EAX,0x2
004B188B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004b188e:
004B188E  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004B1891  8B C7                     MOV EAX,EDI
004B1893  2B C6                     SUB EAX,ESI
004B1895  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B1898  C1 E6 02                  SHL ESI,0x2
004B189B  2B C6                     SUB EAX,ESI
004B189D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004B18A0  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004B18A3  83 7C 30 10 01            CMP dword ptr [EAX + ESI*0x1 + 0x10],0x1
004B18A8  0F 85 C1 00 00 00         JNZ 0x004b196f
004B18AE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B18B1  48                        DEC EAX
004B18B2  66 85 D2                  TEST DX,DX
004B18B5  0F 8C B4 00 00 00         JL 0x004b196f
004B18BB  66 3B D3                  CMP DX,BX
004B18BE  7D 53                     JGE 0x004b1913
004B18C0  66 85 C9                  TEST CX,CX
004B18C3  7C 4E                     JL 0x004b1913
004B18C5  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004B18CC  7D 45                     JGE 0x004b1913
004B18CE  66 85 C0                  TEST AX,AX
004B18D1  7C 40                     JL 0x004b1913
004B18D3  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B18DA  7D 37                     JGE 0x004b1913
004B18DC  0F BF F1                  MOVSX ESI,CX
004B18DF  0F BF FB                  MOVSX EDI,BX
004B18E2  0F AF F7                  IMUL ESI,EDI
004B18E5  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B18EC  0F BF D8                  MOVSX EBX,AX
004B18EF  0F AF FB                  IMUL EDI,EBX
004B18F2  03 F7                     ADD ESI,EDI
004B18F4  0F BF FA                  MOVSX EDI,DX
004B18F7  03 F7                     ADD ESI,EDI
004B18F9  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004B18FF  83 3C F7 00               CMP dword ptr [EDI + ESI*0x8],0x0
004B1903  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B190A  0F 85 85 00 00 00         JNZ 0x004b1995
004B1910  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
LAB_004b1913:
004B1913  66 85 D2                  TEST DX,DX
004B1916  7C 57                     JL 0x004b196f
004B1918  66 3B D3                  CMP DX,BX
004B191B  7D 52                     JGE 0x004b196f
004B191D  66 85 C9                  TEST CX,CX
004B1920  7C 4D                     JL 0x004b196f
004B1922  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004B1929  7D 44                     JGE 0x004b196f
004B192B  66 85 C0                  TEST AX,AX
004B192E  7C 3F                     JL 0x004b196f
004B1930  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B1937  7D 36                     JGE 0x004b196f
004B1939  0F BF 1D 78 B2 7F 00      MOVSX EBX,word ptr [0x007fb278]
004B1940  0F BF F1                  MOVSX ESI,CX
004B1943  0F AF F3                  IMUL ESI,EBX
004B1946  0F BF 1D 7E B2 7F 00      MOVSX EBX,word ptr [0x007fb27e]
004B194D  0F BF C0                  MOVSX EAX,AX
004B1950  0F AF D8                  IMUL EBX,EAX
004B1953  0F BF C2                  MOVSX EAX,DX
004B1956  03 F3                     ADD ESI,EBX
004B1958  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B195F  03 F0                     ADD ESI,EAX
004B1961  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004B1966  0F BF 04 70               MOVSX EAX,word ptr [EAX + ESI*0x2]
004B196A  83 F8 FF                  CMP EAX,-0x1
004B196D  75 26                     JNZ 0x004b1995
LAB_004b196f:
004B196F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B1972  41                        INC ECX
004B1973  83 C0 02                  ADD EAX,0x2
004B1976  83 C7 0C                  ADD EDI,0xc
004B1979  3B C8                     CMP ECX,EAX
004B197B  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
004B197E  0F 8C 0A FF FF FF         JL 0x004b188e
LAB_004b1984:
004B1984  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B1987  42                        INC EDX
004B1988  83 C1 02                  ADD ECX,0x2
004B198B  3B D1                     CMP EDX,ECX
004B198D  0F 8C DA FE FF FF         JL 0x004b186d
004B1993  EB 07                     JMP 0x004b199c
LAB_004b1995:
004B1995  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_004b199c:
004B199C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B199F  85 C0                     TEST EAX,EAX
004B19A1  0F 85 92 00 00 00         JNZ 0x004b1a39
004B19A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B19AA  85 C0                     TEST EAX,EAX
004B19AC  0F 84 87 00 00 00         JZ 0x004b1a39
004B19B2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B19B5  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004B19BC  83 F8 03                  CMP EAX,0x3
004B19BF  7D 78                     JGE 0x004b1a39
004B19C1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004B19C4  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
004B19CB  8D 47 03                  LEA EAX,[EDI + 0x3]
004B19CE  3B F8                     CMP EDI,EAX
004B19D0  7D 67                     JGE 0x004b1a39
LAB_004b19d2:
004B19D2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B19D5  8D 46 03                  LEA EAX,[ESI + 0x3]
004B19D8  3B F0                     CMP ESI,EAX
004B19DA  7D 42                     JGE 0x004b1a1e
004B19DC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B19DF  8D 5A 01                  LEA EBX,[EDX + 0x1]
LAB_004b19e2:
004B19E2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004B19E8  53                        PUSH EBX
004B19E9  56                        PUSH ESI
004B19EA  57                        PUSH EDI
004B19EB  E8 4B 33 F5 FF            CALL 0x00404d3b
004B19F0  85 C0                     TEST EAX,EAX
004B19F2  74 37                     JZ 0x004b1a2b
004B19F4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B19F7  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004B19FD  83 C0 02                  ADD EAX,0x2
004B1A00  50                        PUSH EAX
004B1A01  56                        PUSH ESI
004B1A02  57                        PUSH EDI
004B1A03  E8 33 33 F5 FF            CALL 0x00404d3b
004B1A08  85 C0                     TEST EAX,EAX
004B1A0A  74 1F                     JZ 0x004b1a2b
004B1A0C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1A0F  46                        INC ESI
004B1A10  8D 41 03                  LEA EAX,[ECX + 0x3]
004B1A13  3B F0                     CMP ESI,EAX
004B1A15  7C CB                     JL 0x004b19e2
004B1A17  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
LAB_004b1a1e:
004B1A1E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B1A21  47                        INC EDI
004B1A22  8D 42 03                  LEA EAX,[EDX + 0x3]
004B1A25  3B F8                     CMP EDI,EAX
004B1A27  7C A9                     JL 0x004b19d2
004B1A29  EB 0E                     JMP 0x004b1a39
LAB_004b1a2b:
004B1A2B  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B1A32  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_004b1a39:
004B1A39  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004B1A3C  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
004B1A43  8D 46 03                  LEA EAX,[ESI + 0x3]
004B1A46  3B F0                     CMP ESI,EAX
004B1A48  0F 8D B2 00 00 00         JGE 0x004b1b00
004B1A4E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B1A51  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B1A54  8D 48 03                  LEA ECX,[EAX + 0x3]
LAB_004b1a57:
004B1A57  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1A5A  3B D1                     CMP EDX,ECX
004B1A5C  0F 8D 8F 00 00 00         JGE 0x004b1af1
004B1A62  8D 47 01                  LEA EAX,[EDI + 0x1]
LAB_004b1a65:
004B1A65  3B F8                     CMP EDI,EAX
004B1A67  8B CF                     MOV ECX,EDI
004B1A69  7D 77                     JGE 0x004b1ae2
LAB_004b1a6b:
004B1A6B  66 85 F6                  TEST SI,SI
004B1A6E  7C 54                     JL 0x004b1ac4
004B1A70  66 3B F3                  CMP SI,BX
004B1A73  7D 4F                     JGE 0x004b1ac4
004B1A75  66 85 D2                  TEST DX,DX
004B1A78  7C 4A                     JL 0x004b1ac4
004B1A7A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004B1A81  7D 41                     JGE 0x004b1ac4
004B1A83  66 85 C9                  TEST CX,CX
004B1A86  7C 3C                     JL 0x004b1ac4
004B1A88  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004B1A8F  7D 33                     JGE 0x004b1ac4
004B1A91  0F BF C2                  MOVSX EAX,DX
004B1A94  0F BF FB                  MOVSX EDI,BX
004B1A97  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004B1A9E  0F AF C7                  IMUL EAX,EDI
004B1AA1  0F BF F9                  MOVSX EDI,CX
004B1AA4  0F AF FB                  IMUL EDI,EBX
004B1AA7  03 C7                     ADD EAX,EDI
004B1AA9  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
004B1AB0  0F BF FE                  MOVSX EDI,SI
004B1AB3  03 C7                     ADD EAX,EDI
004B1AB5  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
004B1ABB  8B 44 C7 04               MOV EAX,dword ptr [EDI + EAX*0x8 + 0x4]
004B1ABF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B1AC2  EB 02                     JMP 0x004b1ac6
LAB_004b1ac4:
004B1AC4  33 C0                     XOR EAX,EAX
LAB_004b1ac6:
004B1AC6  85 C0                     TEST EAX,EAX
004B1AC8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004B1ACB  74 0D                     JZ 0x004b1ada
004B1ACD  81 78 20 BE 00 00 00      CMP dword ptr [EAX + 0x20],0xbe
004B1AD4  0F 85 AE 00 00 00         JNZ 0x004b1b88
LAB_004b1ada:
004B1ADA  41                        INC ECX
004B1ADB  8D 47 01                  LEA EAX,[EDI + 0x1]
004B1ADE  3B C8                     CMP ECX,EAX
004B1AE0  7C 89                     JL 0x004b1a6b
LAB_004b1ae2:
004B1AE2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1AE5  42                        INC EDX
004B1AE6  83 C1 03                  ADD ECX,0x3
004B1AE9  3B D1                     CMP EDX,ECX
004B1AEB  0F 8C 74 FF FF FF         JL 0x004b1a65
LAB_004b1af1:
004B1AF1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B1AF4  46                        INC ESI
004B1AF5  8D 42 03                  LEA EAX,[EDX + 0x3]
004B1AF8  3B F0                     CMP ESI,EAX
004B1AFA  0F 8C 57 FF FF FF         JL 0x004b1a57
LAB_004b1b00:
004B1B00  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004B1B05  85 C0                     TEST EAX,EAX
004B1B07  74 65                     JZ 0x004b1b6e
004B1B09  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004B1B10  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B1B16  8D 55 F4                  LEA EDX,[EBP + -0xc]
004B1B19  E8 72 F6 1F 00            CALL 0x006b1190
004B1B1E  85 C0                     TEST EAX,EAX
004B1B20  7C 4C                     JL 0x004b1b6e
LAB_004b1b22:
004B1B22  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004B1B25  85 C9                     TEST ECX,ECX
004B1B27  74 33                     JZ 0x004b1b5c
004B1B29  8D 45 FE                  LEA EAX,[EBP + -0x2]
004B1B2C  8D 55 1A                  LEA EDX,[EBP + 0x1a]
004B1B2F  50                        PUSH EAX
004B1B30  8D 45 16                  LEA EAX,[EBP + 0x16]
004B1B33  52                        PUSH EDX
004B1B34  50                        PUSH EAX
004B1B35  E8 8B FD F4 FF            CALL 0x004018c5
004B1B3A  0F BF 4D 16               MOVSX ECX,word ptr [EBP + 0x16]
004B1B3E  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
004B1B41  75 19                     JNZ 0x004b1b5c
004B1B43  0F BF 55 1A               MOVSX EDX,word ptr [EBP + 0x1a]
004B1B47  3B 55 0C                  CMP EDX,dword ptr [EBP + 0xc]
004B1B4A  75 10                     JNZ 0x004b1b5c
004B1B4C  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004B1B50  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
004B1B53  75 07                     JNZ 0x004b1b5c
004B1B55  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_004b1b5c:
004B1B5C  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B1B62  8D 55 F4                  LEA EDX,[EBP + -0xc]
004B1B65  E8 26 F6 1F 00            CALL 0x006b1190
004B1B6A  85 C0                     TEST EAX,EAX
004B1B6C  7D B4                     JGE 0x004b1b22
LAB_004b1b6e:
004B1B6E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B1B71  85 C0                     TEST EAX,EAX
004B1B73  74 1C                     JZ 0x004b1b91
004B1B75  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B1B78  85 C0                     TEST EAX,EAX
004B1B7A  74 15                     JZ 0x004b1b91
004B1B7C  5F                        POP EDI
004B1B7D  5E                        POP ESI
004B1B7E  B8 01 00 00 00            MOV EAX,0x1
004B1B83  5B                        POP EBX
004B1B84  8B E5                     MOV ESP,EBP
004B1B86  5D                        POP EBP
004B1B87  C3                        RET
LAB_004b1b88:
004B1B88  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
004B1B8F  EB DD                     JMP 0x004b1b6e
LAB_004b1b91:
004B1B91  5F                        POP EDI
004B1B92  5E                        POP ESI
004B1B93  33 C0                     XOR EAX,EAX
004B1B95  5B                        POP EBX
004B1B96  8B E5                     MOV ESP,EBP
004B1B98  5D                        POP EBP
004B1B99  C3                        RET
