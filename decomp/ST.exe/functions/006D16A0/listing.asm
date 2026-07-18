FUN_006d16a0:
006D16A0  55                        PUSH EBP
006D16A1  8B EC                     MOV EBP,ESP
006D16A3  6A FF                     PUSH -0x1
006D16A5  68 B0 DA 79 00            PUSH 0x79dab0
006D16AA  68 64 D9 72 00            PUSH 0x72d964
006D16AF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006D16B5  50                        PUSH EAX
006D16B6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006D16BD  81 EC 48 02 00 00         SUB ESP,0x248
006D16C3  53                        PUSH EBX
006D16C4  56                        PUSH ESI
006D16C5  57                        PUSH EDI
006D16C6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006D16C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D16CC  33 F6                     XOR ESI,ESI
006D16CE  3B C6                     CMP EAX,ESI
006D16D0  74 0F                     JZ 0x006d16e1
006D16D2  33 D2                     XOR EDX,EDX
006D16D4  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
006D16D8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D16DB  3B CA                     CMP ECX,EDX
006D16DD  75 13                     JNZ 0x006d16f2
006D16DF  EB 03                     JMP 0x006d16e4
LAB_006d16e1:
006D16E1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006d16e4:
006D16E4  33 D2                     XOR EDX,EDX
006D16E6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D16E9  66 8B 57 0E               MOV DX,word ptr [EDI + 0xe]
006D16ED  39 55 2C                  CMP dword ptr [EBP + 0x2c],EDX
006D16F0  74 19                     JZ 0x006d170b
LAB_006d16f2:
006D16F2  6A 19                     PUSH 0x19
006D16F4  68 E4 E1 7E 00            PUSH 0x7ee1e4
006D16F9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006D16FE  50                        PUSH EAX
006D16FF  6A CC                     PUSH -0x34
006D1701  E8 3A 47 FD FF            CALL 0x006a5e40
006D1706  E9 E8 02 00 00            JMP 0x006d19f3
LAB_006d170b:
006D170B  89 B5 C4 FD FF FF         MOV dword ptr [EBP + 0xfffffdc4],ESI
006D1711  3B C6                     CMP EAX,ESI
006D1713  75 46                     JNZ 0x006d175b
006D1715  33 C0                     XOR EAX,EAX
006D1717  83 F9 10                  CMP ECX,0x10
006D171A  0F 95 C0                  SETNZ AL
006D171D  48                        DEC EAX
006D171E  83 E0 03                  AND EAX,0x3
006D1721  6A 01                     PUSH 0x1
006D1723  50                        PUSH EAX
006D1724  51                        PUSH ECX
006D1725  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D1728  53                        PUSH EBX
006D1729  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006D172C  57                        PUSH EDI
006D172D  E8 BE F9 FF FF            CALL 0x006d10f0
006D1732  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D1735  3B C6                     CMP EAX,ESI
006D1737  0F 84 7B 02 00 00         JZ 0x006d19b8
006D173D  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006D1740  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D1743  50                        PUSH EAX
006D1744  E8 57 38 FE FF            CALL 0x006b4fa0
006D1749  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006D174C  C7 85 C4 FD FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffdc4],0x1
006D1756  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1759  EB 06                     JMP 0x006d1761
LAB_006d175b:
006D175B  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D175E  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
LAB_006d1761:
006D1761  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006D1764  89 B5 AC FD FF FF         MOV dword ptr [EBP + 0xfffffdac],ESI
006D176A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D176D  89 8D B0 FD FF FF         MOV dword ptr [EBP + 0xfffffdb0],ECX
006D1773  89 BD B4 FD FF FF         MOV dword ptr [EBP + 0xfffffdb4],EDI
006D1779  89 9D B8 FD FF FF         MOV dword ptr [EBP + 0xfffffdb8],EBX
006D177F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D1782  89 95 C8 FD FF FF         MOV dword ptr [EBP + 0xfffffdc8],EDX
006D1788  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D178B  89 8D CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],ECX
006D1791  89 BD D0 FD FF FF         MOV dword ptr [EBP + 0xfffffdd0],EDI
006D1797  89 9D D4 FD FF FF         MOV dword ptr [EBP + 0xfffffdd4],EBX
006D179D  8D 95 BC FD FF FF         LEA EDX,[EBP + 0xfffffdbc]
006D17A3  52                        PUSH EDX
006D17A4  8D 8D AC FD FF FF         LEA ECX,[EBP + 0xfffffdac]
006D17AA  51                        PUSH ECX
006D17AB  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D17AE  57                        PUSH EDI
006D17AF  8D 95 DC FD FF FF         LEA EDX,[EBP + 0xfffffddc]
006D17B5  52                        PUSH EDX
006D17B6  8D 8D C8 FD FF FF         LEA ECX,[EBP + 0xfffffdc8]
006D17BC  51                        PUSH ECX
006D17BD  50                        PUSH EAX
006D17BE  E8 BD EE FF FF            CALL 0x006d0680
006D17C3  85 C0                     TEST EAX,EAX
006D17C5  75 2D                     JNZ 0x006d17f4
006D17C7  8B 85 C4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdc4]
006D17CD  85 C0                     TEST EAX,EAX
006D17CF  0F 84 E3 01 00 00         JZ 0x006d19b8
006D17D5  8D 55 08                  LEA EDX,[EBP + 0x8]
006D17D8  52                        PUSH EDX
006D17D9  E8 82 98 FD FF            CALL 0x006ab060
006D17DE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D17E1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D17E4  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D17EB  5F                        POP EDI
006D17EC  5E                        POP ESI
006D17ED  5B                        POP EBX
006D17EE  8B E5                     MOV ESP,EBP
006D17F0  5D                        POP EBP
006D17F1  C2 30 00                  RET 0x30
LAB_006d17f4:
006D17F4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D17F7  85 C0                     TEST EAX,EAX
006D17F9  75 09                     JNZ 0x006d1804
006D17FB  57                        PUSH EDI
006D17FC  E8 9F 37 FE FF            CALL 0x006b4fa0
006D1801  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_006d1804:
006D1804  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D1807  85 C0                     TEST EAX,EAX
006D1809  75 0C                     JNZ 0x006d1817
006D180B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D180E  50                        PUSH EAX
006D180F  E8 8C 37 FE FF            CALL 0x006b4fa0
006D1814  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006d1817:
006D1817  8B 85 BC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdbc]
006D181D  85 C0                     TEST EAX,EAX
006D181F  7D 1F                     JGE 0x006d1840
006D1821  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D1824  8D 4C 19 FF               LEA ECX,[ECX + EBX*0x1 + -0x1]
006D1828  0F AF C8                  IMUL ECX,EAX
006D182B  8B C6                     MOV EAX,ESI
006D182D  0F AF 45 2C               IMUL EAX,dword ptr [EBP + 0x2c]
006D1831  99                        CDQ
006D1832  83 E2 07                  AND EDX,0x7
006D1835  03 C2                     ADD EAX,EDX
006D1837  8B F8                     MOV EDI,EAX
006D1839  C1 FF 03                  SAR EDI,0x3
006D183C  2B F9                     SUB EDI,ECX
006D183E  EB 1C                     JMP 0x006d185c
LAB_006d1840:
006D1840  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
006D1843  2B 7D 28                  SUB EDI,dword ptr [EBP + 0x28]
006D1846  2B FB                     SUB EDI,EBX
006D1848  0F AF F8                  IMUL EDI,EAX
006D184B  8B C6                     MOV EAX,ESI
006D184D  0F AF 45 2C               IMUL EAX,dword ptr [EBP + 0x2c]
006D1851  99                        CDQ
006D1852  83 E2 07                  AND EDX,0x7
006D1855  03 C2                     ADD EAX,EDX
006D1857  C1 F8 03                  SAR EAX,0x3
006D185A  03 F8                     ADD EDI,EAX
LAB_006d185c:
006D185C  8B 8D DC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffddc]
006D1862  85 C9                     TEST ECX,ECX
006D1864  7D 2C                     JGE 0x006d1892
006D1866  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D1869  8D 74 1A FF               LEA ESI,[EDX + EBX*0x1 + -0x1]
006D186D  0F AF F1                  IMUL ESI,ECX
006D1870  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D1873  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
006D1877  99                        CDQ
006D1878  83 E2 07                  AND EDX,0x7
006D187B  03 C2                     ADD EAX,EDX
006D187D  89 B5 A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ESI
006D1883  8B F0                     MOV ESI,EAX
006D1885  C1 FE 03                  SAR ESI,0x3
006D1888  8B 85 A8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda8]
006D188E  2B F0                     SUB ESI,EAX
006D1890  EB 20                     JMP 0x006d18b2
LAB_006d1892:
006D1892  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D1895  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
006D1898  2B 75 14                  SUB ESI,dword ptr [EBP + 0x14]
006D189B  2B F3                     SUB ESI,EBX
006D189D  0F AF F1                  IMUL ESI,ECX
006D18A0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D18A3  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
006D18A7  99                        CDQ
006D18A8  83 E2 07                  AND EDX,0x7
006D18AB  03 C2                     ADD EAX,EDX
006D18AD  C1 F8 03                  SAR EAX,0x3
006D18B0  03 F0                     ADD ESI,EAX
LAB_006d18b2:
006D18B2  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D18B9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D18BC  83 F8 10                  CMP EAX,0x10
006D18BF  0F 85 C2 00 00 00         JNZ 0x006d1987
006D18C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D18C8  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
006D18CC  75 05                     JNZ 0x006d18d3
006D18CE  83 C0 28                  ADD EAX,0x28
006D18D1  EB 02                     JMP 0x006d18d5
LAB_006d18d3:
006D18D3  33 C0                     XOR EAX,EAX
LAB_006d18d5:
006D18D5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006D18D8  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006D18DB  83 FA 08                  CMP EDX,0x8
006D18DE  75 66                     JNZ 0x006d1946
006D18E0  50                        PUSH EAX
006D18E1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D18E4  50                        PUSH EAX
006D18E5  E8 F6 36 FE FF            CALL 0x006b4fe0
006D18EA  50                        PUSH EAX
006D18EB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D18EE  83 C1 28                  ADD ECX,0x28
006D18F1  51                        PUSH ECX
006D18F2  8D 95 E0 FD FF FF         LEA EDX,[EBP + 0xfffffde0]
006D18F8  52                        PUSH EDX
006D18F9  E8 C2 FB FF FF            CALL 0x006d14c0
006D18FE  8D 85 E0 FD FF FF         LEA EAX,[EBP + 0xfffffde0]
006D1904  50                        PUSH EAX
006D1905  53                        PUSH EBX
006D1906  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D1909  51                        PUSH ECX
006D190A  8B 95 BC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdbc]
006D1910  52                        PUSH EDX
006D1911  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D1914  03 F8                     ADD EDI,EAX
006D1916  57                        PUSH EDI
006D1917  8B 8D DC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffddc]
006D191D  51                        PUSH ECX
006D191E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D1921  03 F2                     ADD ESI,EDX
006D1923  56                        PUSH ESI
006D1924  E8 87 EC FF FF            CALL 0x006d05b0
006D1929  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D1930  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1933  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D1936  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D193D  5F                        POP EDI
006D193E  5E                        POP ESI
006D193F  5B                        POP EBX
006D1940  8B E5                     MOV ESP,EBP
006D1942  5D                        POP EBP
006D1943  C2 30 00                  RET 0x30
LAB_006d1946:
006D1946  83 FA 18                  CMP EDX,0x18
006D1949  75 66                     JNZ 0x006d19b1
006D194B  50                        PUSH EAX
006D194C  53                        PUSH EBX
006D194D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D1950  50                        PUSH EAX
006D1951  8B 95 BC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdbc]
006D1957  52                        PUSH EDX
006D1958  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D195B  03 F8                     ADD EDI,EAX
006D195D  57                        PUSH EDI
006D195E  51                        PUSH ECX
006D195F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D1962  03 F1                     ADD ESI,ECX
006D1964  56                        PUSH ESI
006D1965  E8 86 8B 00 00            CALL 0x006da4f0
006D196A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006D1971  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D1974  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D1977  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D197E  5F                        POP EDI
006D197F  5E                        POP ESI
006D1980  5B                        POP EBX
006D1981  8B E5                     MOV ESP,EBP
006D1983  5D                        POP EBP
006D1984  C2 30 00                  RET 0x30
LAB_006d1987:
006D1987  83 F8 18                  CMP EAX,0x18
006D198A  75 25                     JNZ 0x006d19b1
006D198C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D198F  83 C2 28                  ADD EDX,0x28
006D1992  52                        PUSH EDX
006D1993  53                        PUSH EBX
006D1994  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D1997  50                        PUSH EAX
006D1998  8B 95 BC FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdbc]
006D199E  52                        PUSH EDX
006D199F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D19A2  03 F8                     ADD EDI,EAX
006D19A4  57                        PUSH EDI
006D19A5  51                        PUSH ECX
006D19A6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D19A9  03 F1                     ADD ESI,ECX
006D19AB  56                        PUSH ESI
006D19AC  E8 9F 20 00 00            CALL 0x006d3a50
LAB_006d19b1:
006D19B1  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006d19b8:
006D19B8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D19BB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D19BE  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D19C5  5F                        POP EDI
006D19C6  5E                        POP ESI
006D19C7  5B                        POP EBX
006D19C8  8B E5                     MOV ESP,EBP
006D19CA  5D                        POP EBP
006D19CB  C2 30 00                  RET 0x30
LAB_006d19f3:
006D19F3  33 C0                     XOR EAX,EAX
006D19F5  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D19F8  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006D19FF  5F                        POP EDI
006D1A00  5E                        POP ESI
006D1A01  5B                        POP EBX
006D1A02  8B E5                     MOV ESP,EBP
006D1A04  5D                        POP EBP
006D1A05  C2 30 00                  RET 0x30
