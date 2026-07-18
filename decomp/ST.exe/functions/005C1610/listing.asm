FUN_005c1610:
005C1610  55                        PUSH EBP
005C1611  8B EC                     MOV EBP,ESP
005C1613  81 EC 88 00 00 00         SUB ESP,0x88
005C1619  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C161C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C161F  53                        PUSH EBX
005C1620  56                        PUSH ESI
005C1621  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005C1624  57                        PUSH EDI
005C1625  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
005C1628  6A 00                     PUSH 0x0
005C162A  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
005C162D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005C1630  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C1635  83 EA 46                  SUB EDX,0x46
005C1638  83 E9 1A                  SUB ECX,0x1a
005C163B  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
005C163E  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
005C1641  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005C1647  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005C164D  52                        PUSH EDX
005C164E  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005C1654  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C165A  E8 91 C1 16 00            CALL 0x0072d7f0
005C165F  8B F0                     MOV ESI,EAX
005C1661  83 C4 08                  ADD ESP,0x8
005C1664  85 F6                     TEST ESI,ESI
005C1666  0F 85 C2 02 00 00         JNZ 0x005c192e
005C166C  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
005C166F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C1672  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C1675  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
005C1678  50                        PUSH EAX
005C1679  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005C167C  51                        PUSH ECX
005C167D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C1683  52                        PUSH EDX
005C1684  50                        PUSH EAX
005C1685  51                        PUSH ECX
005C1686  E8 F5 48 0F 00            CALL 0x006b5f80
005C168B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C168E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C1691  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
005C1694  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C1697  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
005C169A  68 FF 00 00 01            PUSH 0x10000ff
005C169F  52                        PUSH EDX
005C16A0  8B 51 73                  MOV EDX,dword ptr [ECX + 0x73]
005C16A3  50                        PUSH EAX
005C16A4  57                        PUSH EDI
005C16A5  53                        PUSH EBX
005C16A6  6A 00                     PUSH 0x0
005C16A8  52                        PUSH EDX
005C16A9  E8 C2 2A 0F 00            CALL 0x006b4170
005C16AE  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005C16B1  83 E8 00                  SUB EAX,0x0
005C16B4  0F 84 AC 00 00 00         JZ 0x005c1766
005C16BA  48                        DEC EAX
005C16BB  74 13                     JZ 0x005c16d0
005C16BD  48                        DEC EAX
005C16BE  0F 85 42 01 00 00         JNZ 0x005c1806
005C16C4  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005C16C7  8D 44 03 FF               LEA EAX,[EBX + EAX*0x1 + -0x1]
005C16CB  E9 19 01 00 00            JMP 0x005c17e9
LAB_005c16d0:
005C16D0  8D 57 02                  LEA EDX,[EDI + 0x2]
005C16D3  8D 43 02                  LEA EAX,[EBX + 0x2]
005C16D6  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
005C16D9  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
005C16DC  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005C16DF  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
005C16E2  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C16E5  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
005C16E8  6A 4C                     PUSH 0x4c
005C16EA  6A 06                     PUSH 0x6
005C16EC  8D 54 0B FF               LEA EDX,[EBX + ECX*0x1 + -0x1]
005C16F0  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005C16F3  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C16F6  8D 54 0B FF               LEA EDX,[EBX + ECX*0x1 + -0x1]
005C16FA  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005C16FD  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005C1700  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005C1703  8D 54 39 FF               LEA EDX,[ECX + EDI*0x1 + -0x1]
005C1707  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005C170A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C170D  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005C1710  8D 4C 38 FF               LEA ECX,[EAX + EDI*0x1 + -0x1]
005C1714  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005C1717  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C171A  8D 4D C8                  LEA ECX,[EBP + -0x38]
005C171D  8D 44 3A FD               LEA EAX,[EDX + EDI*0x1 + -0x3]
005C1721  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C1724  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005C1727  51                        PUSH ECX
005C1728  8B 42 73                  MOV EAX,dword ptr [EDX + 0x73]
005C172B  6A 00                     PUSH 0x0
005C172D  50                        PUSH EAX
005C172E  E8 6D 67 10 00            CALL 0x006c7ea0
005C1733  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005C1736  6A 18                     PUSH 0x18
005C1738  8D 4D C8                  LEA ECX,[EBP + -0x38]
005C173B  6A 06                     PUSH 0x6
005C173D  8B 42 73                  MOV EAX,dword ptr [EDX + 0x73]
005C1740  51                        PUSH ECX
005C1741  6A 00                     PUSH 0x0
005C1743  50                        PUSH EAX
005C1744  E8 C7 67 10 00            CALL 0x006c7f10
005C1749  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C174C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C174F  6A 0D                     PUSH 0xd
005C1751  6A 4C                     PUSH 0x4c
005C1753  8D 44 0B FF               LEA EAX,[EBX + ECX*0x1 + -0x1]
005C1757  8D 4C 3A FE               LEA ECX,[EDX + EDI*0x1 + -0x2]
005C175B  51                        PUSH ECX
005C175C  8D 57 01                  LEA EDX,[EDI + 0x1]
005C175F  50                        PUSH EAX
005C1760  52                        PUSH EDX
005C1761  E9 91 00 00 00            JMP 0x005c17f7
LAB_005c1766:
005C1766  8D 43 05                  LEA EAX,[EBX + 0x5]
005C1769  8D 57 02                  LEA EDX,[EDI + 0x2]
005C176C  8D 4B 07                  LEA ECX,[EBX + 0x7]
005C176F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005C1772  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
005C1775  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005C1778  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
005C177B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C177E  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
005C1781  6A 4C                     PUSH 0x4c
005C1783  8D 54 13 FD               LEA EDX,[EBX + EDX*0x1 + -0x3]
005C1787  6A 06                     PUSH 0x6
005C1789  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005C178C  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C178F  8D 54 13 FD               LEA EDX,[EBX + EDX*0x1 + -0x3]
005C1793  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005C1796  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C1799  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005C179C  8D 54 3A FF               LEA EDX,[EDX + EDI*0x1 + -0x1]
005C17A0  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005C17A3  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005C17A6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005C17A9  8D 54 39 FF               LEA EDX,[ECX + EDI*0x1 + -0x1]
005C17AD  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005C17B0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005C17B3  8D 55 C8                  LEA EDX,[EBP + -0x38]
005C17B6  8D 4C 38 FD               LEA ECX,[EAX + EDI*0x1 + -0x3]
005C17BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C17BD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005C17C0  52                        PUSH EDX
005C17C1  8B 48 73                  MOV ECX,dword ptr [EAX + 0x73]
005C17C4  6A 00                     PUSH 0x0
005C17C6  51                        PUSH ECX
005C17C7  E8 D4 66 10 00            CALL 0x006c7ea0
005C17CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C17CF  6A 18                     PUSH 0x18
005C17D1  8D 55 C8                  LEA EDX,[EBP + -0x38]
005C17D4  6A 06                     PUSH 0x6
005C17D6  8B 48 73                  MOV ECX,dword ptr [EAX + 0x73]
005C17D9  52                        PUSH EDX
005C17DA  6A 00                     PUSH 0x0
005C17DC  51                        PUSH ECX
005C17DD  E8 2E 67 10 00            CALL 0x006c7f10
005C17E2  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005C17E5  8D 44 13 FF               LEA EAX,[EBX + EDX*0x1 + -0x1]
LAB_005c17e9:
005C17E9  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005C17EC  6A 0D                     PUSH 0xd
005C17EE  6A 18                     PUSH 0x18
005C17F0  8D 54 39 FF               LEA EDX,[ECX + EDI*0x1 + -0x1]
005C17F4  52                        PUSH EDX
005C17F5  50                        PUSH EAX
005C17F6  57                        PUSH EDI
LAB_005c17f7:
005C17F7  50                        PUSH EAX
005C17F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C17FB  6A 00                     PUSH 0x0
005C17FD  8B 48 73                  MOV ECX,dword ptr [EAX + 0x73]
005C1800  51                        PUSH ECX
005C1801  E8 0A 43 0F 00            CALL 0x006b5b10
LAB_005c1806:
005C1806  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
005C1809  83 F8 01                  CMP EAX,0x1
005C180C  0F 87 D0 00 00 00         JA 0x005c18e2
005C1812  8B 0E                     MOV ECX,dword ptr [ESI]
005C1814  80 CA FF                  OR DL,0xff
005C1817  83 F9 01                  CMP ECX,0x1
005C181A  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
005C181D  76 14                     JBE 0x005c1833
005C181F  8A 15 46 C8 80 00         MOV DL,byte ptr [0x0080c846]
005C1825  83 F9 02                  CMP ECX,0x2
005C1828  74 06                     JZ 0x005c1830
005C182A  8A 91 3C C8 80 00         MOV DL,byte ptr [ECX + 0x80c83c]
LAB_005c1830:
005C1830  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
LAB_005c1833:
005C1833  80 FA FF                  CMP DL,0xff
005C1836  0F 84 A6 00 00 00         JZ 0x005c18e2
005C183C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C183F  81 E1 FF 00 00 00         AND ECX,0xff
005C1845  83 F9 07                  CMP ECX,0x7
005C1848  77 3F                     JA 0x005c1889
switchD_005c184a::switchD:
005C184A  FF 24 8D 7C 19 5C 00      JMP dword ptr [ECX*0x4 + 0x5c197c]
switchD_005c184a::caseD_0:
005C1851  B9 FC 00 00 00            MOV ECX,0xfc
005C1856  EB 36                     JMP 0x005c188e
switchD_005c184a::caseD_1:
005C1858  B9 FA 00 00 00            MOV ECX,0xfa
005C185D  EB 2F                     JMP 0x005c188e
switchD_005c184a::caseD_2:
005C185F  B9 FB 00 00 00            MOV ECX,0xfb
005C1864  EB 28                     JMP 0x005c188e
switchD_005c184a::caseD_3:
005C1866  B9 F9 00 00 00            MOV ECX,0xf9
005C186B  EB 21                     JMP 0x005c188e
switchD_005c184a::caseD_4:
005C186D  B9 FD 00 00 00            MOV ECX,0xfd
005C1872  EB 1A                     JMP 0x005c188e
switchD_005c184a::caseD_5:
005C1874  B9 FE 00 00 00            MOV ECX,0xfe
005C1879  EB 13                     JMP 0x005c188e
switchD_005c184a::caseD_6:
005C187B  B9 F3 00 00 00            MOV ECX,0xf3
005C1880  EB 0C                     JMP 0x005c188e
switchD_005c184a::caseD_7:
005C1882  B9 07 00 00 00            MOV ECX,0x7
005C1887  EB 05                     JMP 0x005c188e
switchD_005c184a::default:
005C1889  B9 FF 00 00 00            MOV ECX,0xff
LAB_005c188e:
005C188E  F7 D8                     NEG EAX
005C1890  1B C0                     SBB EAX,EAX
005C1892  51                        PUSH ECX
005C1893  24 FB                     AND AL,0xfb
005C1895  8D 57 0B                  LEA EDX,[EDI + 0xb]
005C1898  6A 0D                     PUSH 0xd
005C189A  83 C0 05                  ADD EAX,0x5
005C189D  6A 1A                     PUSH 0x1a
005C189F  52                        PUSH EDX
005C18A0  8D 54 18 07               LEA EDX,[EAX + EBX*0x1 + 0x7]
005C18A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C18A7  52                        PUSH EDX
005C18A8  6A 00                     PUSH 0x0
005C18AA  8B 48 73                  MOV ECX,dword ptr [EAX + 0x73]
005C18AD  51                        PUSH ECX
005C18AE  E8 BD 28 0F 00            CALL 0x006b4170
005C18B3  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005C18B6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005C18B9  F7 DA                     NEG EDX
005C18BB  1B D2                     SBB EDX,EDX
005C18BD  6A 0D                     PUSH 0xd
005C18BF  83 E2 FB                  AND EDX,0xfffffffb
005C18C2  68 00 00 00 01            PUSH 0x1000000
005C18C7  6A 0D                     PUSH 0xd
005C18C9  8D 47 0B                  LEA EAX,[EDI + 0xb]
005C18CC  83 C2 05                  ADD EDX,0x5
005C18CF  6A 1A                     PUSH 0x1a
005C18D1  50                        PUSH EAX
005C18D2  8D 44 1A 07               LEA EAX,[EDX + EBX*0x1 + 0x7]
005C18D6  8B 51 73                  MOV EDX,dword ptr [ECX + 0x73]
005C18D9  50                        PUSH EAX
005C18DA  6A 00                     PUSH 0x0
005C18DC  52                        PUSH EDX
005C18DD  E8 FE 45 0F 00            CALL 0x006b5ee0
LAB_005c18e2:
005C18E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C18E5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005C18E8  68 FF 00 00 01            PUSH 0x10000ff
005C18ED  68 4C 00 00 01            PUSH 0x100004c
005C18F2  8D 88 A3 00 00 00         LEA ECX,[EAX + 0xa3]
005C18F8  51                        PUSH ECX
005C18F9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005C18FC  52                        PUSH EDX
005C18FD  8B 50 73                  MOV EDX,dword ptr [EAX + 0x73]
005C1900  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005C1903  51                        PUSH ECX
005C1904  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005C1907  57                        PUSH EDI
005C1908  53                        PUSH EBX
005C1909  6A 00                     PUSH 0x0
005C190B  52                        PUSH EDX
005C190C  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C1912  50                        PUSH EAX
005C1913  51                        PUSH ECX
005C1914  52                        PUSH EDX
005C1915  E8 C6 2F 0F 00            CALL 0x006b48e0
005C191A  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005C1920  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C1925  5F                        POP EDI
005C1926  5E                        POP ESI
005C1927  5B                        POP EBX
005C1928  8B E5                     MOV ESP,EBP
005C192A  5D                        POP EBP
005C192B  C2 04 00                  RET 0x4
LAB_005c192e:
005C192E  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005C1934  68 84 D0 7C 00            PUSH 0x7cd084
005C1939  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C193E  56                        PUSH ESI
005C193F  6A 00                     PUSH 0x0
005C1941  68 69 03 00 00            PUSH 0x369
005C1946  68 C8 CE 7C 00            PUSH 0x7ccec8
005C194B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C1951  E8 7A BB 0E 00            CALL 0x006ad4d0
005C1956  83 C4 18                  ADD ESP,0x18
005C1959  85 C0                     TEST EAX,EAX
005C195B  74 01                     JZ 0x005c195e
005C195D  CC                        INT3
LAB_005c195e:
005C195E  68 69 03 00 00            PUSH 0x369
005C1963  68 C8 CE 7C 00            PUSH 0x7ccec8
005C1968  6A 00                     PUSH 0x0
005C196A  56                        PUSH ESI
005C196B  E8 D0 44 0E 00            CALL 0x006a5e40
005C1970  5F                        POP EDI
005C1971  5E                        POP ESI
005C1972  5B                        POP EBX
005C1973  8B E5                     MOV ESP,EBP
005C1975  5D                        POP EBP
005C1976  C2 04 00                  RET 0x4
