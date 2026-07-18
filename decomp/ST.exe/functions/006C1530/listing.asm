FUN_006c1530:
006C1530  55                        PUSH EBP
006C1531  8B EC                     MOV EBP,ESP
006C1533  81 EC E0 00 00 00         SUB ESP,0xe0
006C1539  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C153E  53                        PUSH EBX
006C153F  33 DB                     XOR EBX,EBX
006C1541  56                        PUSH ESI
006C1542  3B C3                     CMP EAX,EBX
006C1544  57                        PUSH EDI
006C1545  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006C1548  89 1D F0 4F 85 00         MOV dword ptr [0x00854ff0],EBX
006C154E  74 0B                     JZ 0x006c155b
006C1550  33 C0                     XOR EAX,EAX
006C1552  5F                        POP EDI
006C1553  5E                        POP ESI
006C1554  5B                        POP EBX
006C1555  8B E5                     MOV ESP,EBP
006C1557  5D                        POP EBP
006C1558  C2 08 00                  RET 0x8
LAB_006c155b:
006C155B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006C1560  8D 55 84                  LEA EDX,[EBP + -0x7c]
006C1563  8D 4D 80                  LEA ECX,[EBP + -0x80]
006C1566  53                        PUSH EBX
006C1567  52                        PUSH EDX
006C1568  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006C156B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C1571  E8 7A C2 06 00            CALL 0x0072d7f0
006C1576  8B F8                     MOV EDI,EAX
006C1578  83 C4 08                  ADD ESP,0x8
006C157B  3B FB                     CMP EDI,EBX
006C157D  0F 85 A1 02 00 00         JNZ 0x006c1824
006C1583  8B 35 88 BB 85 00         MOV ESI,dword ptr [0x0085bb88]
006C1589  68 98 68 85 00            PUSH 0x856898
006C158E  FF D6                     CALL ESI
006C1590  68 80 68 85 00            PUSH 0x856880
006C1595  FF D6                     CALL ESI
006C1597  B9 20 06 00 00            MOV ECX,0x620
006C159C  33 C0                     XOR EAX,EAX
006C159E  BF F8 4F 85 00            MOV EDI,0x854ff8
006C15A3  53                        PUSH EBX
006C15A4  68 B4 68 85 00            PUSH 0x8568b4
006C15A9  53                        PUSH EBX
006C15AA  F3 AB                     STOSD.REP ES:EDI
006C15AC  E8 FB C0 06 00            CALL 0x0072d6ac
006C15B1  3B C3                     CMP EAX,EBX
006C15B3  74 17                     JZ 0x006c15cc
006C15B5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C15BB  68 35 04 00 00            PUSH 0x435
006C15C0  68 14 DE 7E 00            PUSH 0x7ede14
006C15C5  51                        PUSH ECX
006C15C6  50                        PUSH EAX
006C15C7  E8 74 48 FE FF            CALL 0x006a5e40
LAB_006c15cc:
006C15CC  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C15D1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C15D4  6A 03                     PUSH 0x3
006C15D6  51                        PUSH ECX
006C15D7  8B 10                     MOV EDX,dword ptr [EAX]
006C15D9  50                        PUSH EAX
006C15DA  FF 52 18                  CALL dword ptr [EDX + 0x18]
006C15DD  3B C3                     CMP EAX,EBX
006C15DF  74 17                     JZ 0x006c15f8
006C15E1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C15E7  68 36 04 00 00            PUSH 0x436
006C15EC  68 14 DE 7E 00            PUSH 0x7ede14
006C15F1  52                        PUSH EDX
006C15F2  50                        PUSH EAX
006C15F3  E8 48 48 FE FF            CALL 0x006a5e40
LAB_006c15f8:
006C15F8  B9 18 00 00 00            MOV ECX,0x18
006C15FD  33 C0                     XOR EAX,EAX
006C15FF  8D BD 20 FF FF FF         LEA EDI,[EBP + 0xffffff20]
006C1605  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
006C160B  F3 AB                     STOSD.REP ES:EDI
006C160D  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1612  C7 85 20 FF FF FF 60 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x60
006C161C  52                        PUSH EDX
006C161D  50                        PUSH EAX
006C161E  8B 08                     MOV ECX,dword ptr [EAX]
006C1620  FF 51 10                  CALL dword ptr [ECX + 0x10]
006C1623  3B C3                     CMP EAX,EBX
006C1625  74 17                     JZ 0x006c163e
006C1627  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C162D  68 39 04 00 00            PUSH 0x439
006C1632  68 14 DE 7E 00            PUSH 0x7ede14
006C1637  51                        PUSH ECX
006C1638  50                        PUSH EAX
006C1639  E8 02 48 FE FF            CALL 0x006a5e40
LAB_006c163e:
006C163E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C1641  B9 09 00 00 00            MOV ECX,0x9
006C1646  33 C0                     XOR EAX,EAX
006C1648  8D 7D C4                  LEA EDI,[EBP + -0x3c]
006C164B  F3 AB                     STOSD.REP ES:EDI
006C164D  BF 01 00 00 00            MOV EDI,0x1
006C1652  3B F3                     CMP ESI,EBX
006C1654  C7 45 C4 24 00 00 00      MOV dword ptr [EBP + -0x3c],0x24
006C165B  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
006C165E  74 09                     JZ 0x006c1669
006C1660  C7 45 C8 11 00 00 00      MOV dword ptr [EBP + -0x38],0x11
006C1667  EB 06                     JMP 0x006c166f
LAB_006c1669:
006C1669  89 1D 10 DE 7E 00         MOV dword ptr [0x007ede10],EBX
LAB_006c166f:
006C166F  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1674  53                        PUSH EBX
006C1675  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006C1678  89 1D B8 68 85 00         MOV dword ptr [0x008568b8],EBX
006C167E  8B 10                     MOV EDX,dword ptr [EAX]
006C1680  68 B8 68 85 00            PUSH 0x8568b8
006C1685  51                        PUSH ECX
006C1686  50                        PUSH EAX
006C1687  FF 52 0C                  CALL dword ptr [EDX + 0xc]
006C168A  3B C3                     CMP EAX,EBX
006C168C  74 72                     JZ 0x006c1700
006C168E  3B F3                     CMP ESI,EBX
006C1690  74 57                     JZ 0x006c16e9
006C1692  39 1D B8 68 85 00         CMP dword ptr [0x008568b8],EBX
006C1698  75 66                     JNZ 0x006c1700
006C169A  8B 15 68 E3 79 00         MOV EDX,dword ptr [0x0079e368]
006C16A0  A1 6C E3 79 00            MOV EAX,[0x0079e36c]
006C16A5  8B 0D 70 E3 79 00         MOV ECX,dword ptr [0x0079e370]
006C16AB  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006C16AE  8B 15 74 E3 79 00         MOV EDX,dword ptr [0x0079e374]
006C16B4  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006C16B7  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C16BC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006C16BF  53                        PUSH EBX
006C16C0  8D 55 C4                  LEA EDX,[EBP + -0x3c]
006C16C3  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006C16C6  8B 08                     MOV ECX,dword ptr [EAX]
006C16C8  68 B8 68 85 00            PUSH 0x8568b8
006C16CD  52                        PUSH EDX
006C16CE  50                        PUSH EAX
006C16CF  FF 51 0C                  CALL dword ptr [ECX + 0xc]
006C16D2  3B C3                     CMP EAX,EBX
006C16D4  74 2A                     JZ 0x006c1700
006C16D6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C16DC  68 47 04 00 00            PUSH 0x447
006C16E1  68 14 DE 7E 00            PUSH 0x7ede14
006C16E6  51                        PUSH ECX
006C16E7  EB 11                     JMP 0x006c16fa
LAB_006c16e9:
006C16E9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C16EF  68 4A 04 00 00            PUSH 0x44a
006C16F4  68 14 DE 7E 00            PUSH 0x7ede14
006C16F9  52                        PUSH EDX
LAB_006c16fa:
006C16FA  50                        PUSH EAX
006C16FB  E8 40 47 FE FF            CALL 0x006a5e40
LAB_006c1700:
006C1700  33 C0                     XOR EAX,EAX
006C1702  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C1705  66 89 7D EC               MOV word ptr [EBP + -0x14],DI
006C1709  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C170C  C7 45 F0 22 56 00 00      MOV dword ptr [EBP + -0x10],0x5622
006C1713  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C1716  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C1719  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006C171D  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
006C1723  8B C8                     MOV ECX,EAX
006C1725  80 E1 08                  AND CL,0x8
006C1728  F6 D9                     NEG CL
006C172A  1B C9                     SBB ECX,ECX
006C172C  24 02                     AND AL,0x2
006C172E  83 E1 08                  AND ECX,0x8
006C1731  83 C1 08                  ADD ECX,0x8
006C1734  F6 D8                     NEG AL
006C1736  1B C0                     SBB EAX,EAX
006C1738  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
006C173C  8B 55 FA                  MOV EDX,dword ptr [EBP + -0x6]
006C173F  F7 D8                     NEG EAX
006C1741  40                        INC EAX
006C1742  81 E2 FF FF 00 00         AND EDX,0xffff
006C1748  66 89 45 EE               MOV word ptr [EBP + -0x12],AX
006C174C  8B 45 EE                  MOV EAX,dword ptr [EBP + -0x12]
006C174F  25 FF FF 00 00            AND EAX,0xffff
006C1754  0F AF C2                  IMUL EAX,EDX
006C1757  99                        CDQ
006C1758  83 E2 07                  AND EDX,0x7
006C175B  03 C2                     ADD EAX,EDX
006C175D  8D 55 EC                  LEA EDX,[EBP + -0x14]
006C1760  C1 F8 03                  SAR EAX,0x3
006C1763  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
006C1767  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C176A  25 FF FF 00 00            AND EAX,0xffff
006C176F  52                        PUSH EDX
006C1770  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C1773  C1 E1 04                  SHL ECX,0x4
006C1776  03 C8                     ADD ECX,EAX
006C1778  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
006C177B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006C177E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006C1781  D1 E0                     SHL EAX,0x1
006C1783  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C1786  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C178B  50                        PUSH EAX
006C178C  8B 08                     MOV ECX,dword ptr [EAX]
006C178E  FF 51 38                  CALL dword ptr [ECX + 0x38]
006C1791  3B C3                     CMP EAX,EBX
006C1793  74 17                     JZ 0x006c17ac
006C1795  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C179B  68 54 04 00 00            PUSH 0x454
006C17A0  68 14 DE 7E 00            PUSH 0x7ede14
006C17A5  51                        PUSH ECX
006C17A6  50                        PUSH EAX
006C17A7  E8 94 46 FE FF            CALL 0x006a5e40
LAB_006c17ac:
006C17AC  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C17B1  57                        PUSH EDI
006C17B2  53                        PUSH EBX
006C17B3  53                        PUSH EBX
006C17B4  8B 10                     MOV EDX,dword ptr [EAX]
006C17B6  50                        PUSH EAX
006C17B7  FF 52 30                  CALL dword ptr [EDX + 0x30]
006C17BA  3B C3                     CMP EAX,EBX
006C17BC  74 17                     JZ 0x006c17d5
006C17BE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C17C4  68 55 04 00 00            PUSH 0x455
006C17C9  68 14 DE 7E 00            PUSH 0x7ede14
006C17CE  51                        PUSH ECX
006C17CF  50                        PUSH EAX
006C17D0  E8 6B 46 FE FF            CALL 0x006a5e40
LAB_006c17d5:
006C17D5  3B F3                     CMP ESI,EBX
006C17D7  74 2F                     JZ 0x006c1808
006C17D9  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C17DE  68 BC 68 85 00            PUSH 0x8568bc
006C17E3  68 B8 EA 79 00            PUSH 0x79eab8
006C17E8  50                        PUSH EAX
006C17E9  8B 10                     MOV EDX,dword ptr [EAX]
006C17EB  FF 12                     CALL dword ptr [EDX]
006C17ED  3B C3                     CMP EAX,EBX
006C17EF  74 17                     JZ 0x006c1808
006C17F1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C17F7  68 57 04 00 00            PUSH 0x457
006C17FC  68 14 DE 7E 00            PUSH 0x7ede14
006C1801  51                        PUSH ECX
006C1802  50                        PUSH EAX
006C1803  E8 38 46 FE FF            CALL 0x006a5e40
LAB_006c1808:
006C1808  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C180B  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006C180E  A3 F0 4F 85 00            MOV [0x00854ff0],EAX
006C1813  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C1819  33 C0                     XOR EAX,EAX
006C181B  5F                        POP EDI
006C181C  5E                        POP ESI
006C181D  5B                        POP EBX
006C181E  8B E5                     MOV ESP,EBP
006C1820  5D                        POP EBP
006C1821  C2 08 00                  RET 0x8
LAB_006c1824:
006C1824  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006C1827  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
006C182A  3B C3                     CMP EAX,EBX
006C182C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C1832  74 09                     JZ 0x006c183d
006C1834  8D 55 E8                  LEA EDX,[EBP + -0x18]
006C1837  52                        PUSH EDX
006C1838  E8 B3 FC FF FF            CALL 0x006c14f0
LAB_006c183d:
006C183D  8B 35 84 BB 85 00         MOV ESI,dword ptr [0x0085bb84]
006C1843  68 80 68 85 00            PUSH 0x856880
006C1848  FF D6                     CALL ESI
006C184A  68 98 68 85 00            PUSH 0x856898
006C184F  FF D6                     CALL ESI
006C1851  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C1856  3B C3                     CMP EAX,EBX
006C1858  74 17                     JZ 0x006c1871
006C185A  8B 08                     MOV ECX,dword ptr [EAX]
006C185C  50                        PUSH EAX
006C185D  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C1860  A1 B8 68 85 00            MOV EAX,[0x008568b8]
006C1865  50                        PUSH EAX
006C1866  8B 10                     MOV EDX,dword ptr [EAX]
006C1868  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C186B  89 1D B8 68 85 00         MOV dword ptr [0x008568b8],EBX
LAB_006c1871:
006C1871  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1876  3B C3                     CMP EAX,EBX
006C1878  74 0C                     JZ 0x006c1886
006C187A  8B 08                     MOV ECX,dword ptr [EAX]
006C187C  50                        PUSH EAX
006C187D  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C1880  89 1D B4 68 85 00         MOV dword ptr [0x008568b4],EBX
LAB_006c1886:
006C1886  68 64 04 00 00            PUSH 0x464
006C188B  68 14 DE 7E 00            PUSH 0x7ede14
006C1890  53                        PUSH EBX
006C1891  57                        PUSH EDI
006C1892  E8 A9 45 FE FF            CALL 0x006a5e40
006C1897  5F                        POP EDI
006C1898  5E                        POP ESI
006C1899  83 C8 FF                  OR EAX,0xffffffff
006C189C  5B                        POP EBX
006C189D  8B E5                     MOV ESP,EBP
006C189F  5D                        POP EBP
006C18A0  C2 08 00                  RET 0x8
