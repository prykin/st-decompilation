FUN_006b1680:
006B1680  55                        PUSH EBP
006B1681  8B EC                     MOV EBP,ESP
006B1683  83 EC 7C                  SUB ESP,0x7c
006B1686  53                        PUSH EBX
006B1687  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006B168A  57                        PUSH EDI
006B168B  F7 43 08 00 00 00 04      TEST dword ptr [EBX + 0x8],0x4000000
006B1692  74 0D                     JZ 0x006b16a1
006B1694  8D 83 F0 04 00 00         LEA EAX,[EBX + 0x4f0]
006B169A  50                        PUSH EAX
006B169B  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b16a1:
006B16A1  8B 43 40                  MOV EAX,dword ptr [EBX + 0x40]
006B16A4  33 FF                     XOR EDI,EDI
006B16A6  3B C7                     CMP EAX,EDI
006B16A8  0F 84 7F 02 00 00         JZ 0x006b192d
006B16AE  56                        PUSH ESI
006B16AF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B16B2  8B 06                     MOV EAX,dword ptr [ESI]
006B16B4  3B C7                     CMP EAX,EDI
006B16B6  74 54                     JZ 0x006b170c
006B16B8  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B16BF  74 0C                     JZ 0x006b16cd
006B16C1  05 F0 04 00 00            ADD EAX,0x4f0
006B16C6  50                        PUSH EAX
006B16C7  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b16cd:
006B16CD  8B 0E                     MOV ECX,dword ptr [ESI]
006B16CF  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006B16D2  3B C7                     CMP EAX,EDI
006B16D4  74 0B                     JZ 0x006b16e1
006B16D6  8B 10                     MOV EDX,dword ptr [EAX]
006B16D8  50                        PUSH EAX
006B16D9  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B16DC  8B 06                     MOV EAX,dword ptr [ESI]
006B16DE  89 78 44                  MOV dword ptr [EAX + 0x44],EDI
LAB_006b16e1:
006B16E1  8B 0E                     MOV ECX,dword ptr [ESI]
006B16E3  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
006B16E6  3B C7                     CMP EAX,EDI
006B16E8  74 0B                     JZ 0x006b16f5
006B16EA  8B 10                     MOV EDX,dword ptr [EAX]
006B16EC  50                        PUSH EAX
006B16ED  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B16F0  8B 06                     MOV EAX,dword ptr [ESI]
006B16F2  89 78 48                  MOV dword ptr [EAX + 0x48],EDI
LAB_006b16f5:
006B16F5  8B 06                     MOV EAX,dword ptr [ESI]
006B16F7  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B16FE  74 0C                     JZ 0x006b170c
006B1700  05 F0 04 00 00            ADD EAX,0x4f0
006B1705  50                        PUSH EAX
006B1706  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b170c:
006B170C  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006B1712  3B C7                     CMP EAX,EDI
006B1714  74 18                     JZ 0x006b172e
006B1716  8B 08                     MOV ECX,dword ptr [EAX]
006B1718  50                        PUSH EAX
006B1719  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B171C  89 BE C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EDI
006B1722  89 BE C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EDI
006B1728  89 BE CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EDI
LAB_006b172e:
006B172E  8B 43 40                  MOV EAX,dword ptr [EBX + 0x40]
006B1731  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006B1734  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006B173B  C7 45 88 07 10 00 00      MOV dword ptr [EBP + -0x78],0x1007
006B1742  8B 10                     MOV EDX,dword ptr [EAX]
006B1744  51                        PUSH ECX
006B1745  50                        PUSH EAX
006B1746  FF 52 58                  CALL dword ptr [EDX + 0x58]
006B1749  8B F8                     MOV EDI,EAX
006B174B  33 C9                     XOR ECX,ECX
006B174D  3B F9                     CMP EDI,ECX
006B174F  0F 85 9B 01 00 00         JNZ 0x006b18f0
006B1755  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006B1758  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006B175B  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006B175E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B1761  89 1E                     MOV dword ptr [ESI],EBX
006B1763  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
006B1766  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006B1769  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006B176C  C7 86 E8 01 00 00 FF FF FF 7F  MOV dword ptr [ESI + 0x1e8],0x7fffffff
006B1776  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
006B1779  25 00 08 00 00            AND EAX,0x800
006B177E  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006B1785  F7 C2 00 00 00 10         TEST EDX,0x10000000
006B178B  C7 45 88 07 10 00 00      MOV dword ptr [EBP + -0x78],0x1007
006B1792  75 08                     JNZ 0x006b179c
006B1794  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006B1797  F6 C6 08                  TEST DH,0x8
006B179A  74 03                     JZ 0x006b179f
LAB_006b179c:
006B179C  80 CC 08                  OR AH,0x8
LAB_006b179f:
006B179F  0C 40                     OR AL,0x40
006B17A1  8D 7B 44                  LEA EDI,[EBX + 0x44]
006B17A4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006B17A7  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
006B17AA  51                        PUSH ECX
006B17AB  8D 4D 84                  LEA ECX,[EBP + -0x7c]
006B17AE  8B 10                     MOV EDX,dword ptr [EAX]
006B17B0  57                        PUSH EDI
006B17B1  51                        PUSH ECX
006B17B2  50                        PUSH EAX
006B17B3  FF 52 18                  CALL dword ptr [EDX + 0x18]
006B17B6  85 C0                     TEST EAX,EAX
006B17B8  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B17BB  0F 85 2C 01 00 00         JNZ 0x006b18ed
006B17C1  83 7B 20 08               CMP dword ptr [EBX + 0x20],0x8
006B17C5  75 10                     JNZ 0x006b17d7
006B17C7  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
006B17CA  85 C0                     TEST EAX,EAX
006B17CC  74 09                     JZ 0x006b17d7
006B17CE  8B 3F                     MOV EDI,dword ptr [EDI]
006B17D0  50                        PUSH EAX
006B17D1  57                        PUSH EDI
006B17D2  8B 17                     MOV EDX,dword ptr [EDI]
006B17D4  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
LAB_006b17d7:
006B17D7  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006b17de:
006B17DE  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
006B17E1  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
006B17E4  6A 00                     PUSH 0x0
006B17E6  68 00 00 00 01            PUSH 0x1000000
006B17EB  8B 08                     MOV ECX,dword ptr [EAX]
006B17ED  6A 00                     PUSH 0x0
006B17EF  52                        PUSH EDX
006B17F0  6A 00                     PUSH 0x0
006B17F2  50                        PUSH EAX
006B17F3  FF 51 14                  CALL dword ptr [ECX + 0x14]
006B17F6  8B F8                     MOV EDI,EAX
006B17F8  85 FF                     TEST EDI,EDI
006B17FA  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006B17FD  74 3B                     JZ 0x006b183a
006B17FF  81 FF C2 01 76 88         CMP EDI,0x887601c2
006B1805  75 08                     JNZ 0x006b180f
006B1807  53                        PUSH EBX
006B1808  E8 33 D4 01 00            CALL 0x006cec40
006B180D  EB 1F                     JMP 0x006b182e
LAB_006b180f:
006B180F  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B1815  74 08                     JZ 0x006b181f
006B1817  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B181D  75 1B                     JNZ 0x006b183a
LAB_006b181f:
006B181F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1822  85 C0                     TEST EAX,EAX
006B1824  75 14                     JNZ 0x006b183a
006B1826  6A 02                     PUSH 0x2
006B1828  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006b182e:
006B182E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1831  40                        INC EAX
006B1832  83 F8 02                  CMP EAX,0x2
006B1835  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B1838  7C A4                     JL 0x006b17de
LAB_006b183a:
006B183A  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B1840  74 08                     JZ 0x006b184a
006B1842  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B1848  75 07                     JNZ 0x006b1851
LAB_006b184a:
006B184A  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_006b1851:
006B1851  8B 43 40                  MOV EAX,dword ptr [EBX + 0x40]
006B1854  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
006B1857  89 4B 40                  MOV dword ptr [EBX + 0x40],ECX
006B185A  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
006B185D  B9 2C 00 00 00            MOV ECX,0x2c
006B1862  33 C0                     XOR EAX,EAX
006B1864  8D 7E 14                  LEA EDI,[ESI + 0x14]
006B1867  C7 83 B0 04 00 00 01 00 00 00  MOV dword ptr [EBX + 0x4b0],0x1
006B1871  F3 AB                     STOSD.REP ES:EDI
006B1873  89 86 C4 00 00 00         MOV dword ptr [ESI + 0xc4],EAX
006B1879  8D BE C8 00 00 00         LEA EDI,[ESI + 0xc8]
006B187F  B9 0A 00 00 00            MOV ECX,0xa
006B1884  83 C8 FF                  OR EAX,0xffffffff
006B1887  F3 AB                     STOSD.REP ES:EDI
006B1889  B9 16 00 00 00            MOV ECX,0x16
006B188E  33 C0                     XOR EAX,EAX
006B1890  8D BE 1C 01 00 00         LEA EDI,[ESI + 0x11c]
006B1896  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006B1899  F3 AB                     STOSD.REP ES:EDI
006B189B  B9 0B 00 00 00            MOV ECX,0xb
006B18A0  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
006B18A6  F3 AB                     STOSD.REP ES:EDI
006B18A8  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
006B18AB  8D 46 20                  LEA EAX,[ESI + 0x20]
006B18AE  B9 0B 00 00 00            MOV ECX,0xb
LAB_006b18b3:
006B18B3  89 50 FC                  MOV dword ptr [EAX + -0x4],EDX
006B18B6  89 38                     MOV dword ptr [EAX],EDI
006B18B8  83 C0 10                  ADD EAX,0x10
006B18BB  49                        DEC ECX
006B18BC  75 F5                     JNZ 0x006b18b3
006B18BE  8D BE F0 00 00 00         LEA EDI,[ESI + 0xf0]
006B18C4  B9 0B 00 00 00            MOV ECX,0xb
006B18C9  B8 01 00 00 00            MOV EAX,0x1
006B18CE  F3 AB                     STOSD.REP ES:EDI
006B18D0  89 86 B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EAX
006B18D6  89 86 B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EAX
006B18DC  B8 FF FF FF 7F            MOV EAX,0x7fffffff
006B18E1  89 86 E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EAX
006B18E7  89 86 E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EAX
LAB_006b18ed:
006B18ED  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006b18f0:
006B18F0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006B18F3  5E                        POP ESI
006B18F4  A9 00 00 00 04            TEST EAX,0x4000000
006B18F9  74 0D                     JZ 0x006b1908
006B18FB  81 C3 F0 04 00 00         ADD EBX,0x4f0
006B1901  53                        PUSH EBX
006B1902  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b1908:
006B1908  85 FF                     TEST EDI,EDI
006B190A  74 21                     JZ 0x006b192d
006B190C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B1912  68 4A 01 00 00            PUSH 0x14a
006B1917  68 C0 DA 7E 00            PUSH 0x7edac0
006B191C  52                        PUSH EDX
006B191D  57                        PUSH EDI
006B191E  E8 1D 45 FF FF            CALL 0x006a5e40
006B1923  8B C7                     MOV EAX,EDI
006B1925  5F                        POP EDI
006B1926  5B                        POP EBX
006B1927  8B E5                     MOV ESP,EBP
006B1929  5D                        POP EBP
006B192A  C2 08 00                  RET 0x8
LAB_006b192d:
006B192D  5F                        POP EDI
006B192E  33 C0                     XOR EAX,EAX
006B1930  5B                        POP EBX
006B1931  8B E5                     MOV ESP,EBP
006B1933  5D                        POP EBP
006B1934  C2 08 00                  RET 0x8
