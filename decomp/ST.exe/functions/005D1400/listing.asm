SettMapMTy::GetMessage:
005D1400  55                        PUSH EBP
005D1401  8B EC                     MOV EBP,ESP
005D1403  81 EC 7C 06 00 00         SUB ESP,0x67c
005D1409  53                        PUSH EBX
005D140A  56                        PUSH ESI
005D140B  8B F1                     MOV ESI,ECX
005D140D  57                        PUSH EDI
005D140E  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
005D1411  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005D1414  E8 97 3D 11 00            CALL 0x006e51b0
005D1419  33 FF                     XOR EDI,EDI
005D141B  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005D141E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D1423  8D 95 14 FF FF FF         LEA EDX,[EBP + 0xffffff14]
005D1429  8D 8D 10 FF FF FF         LEA ECX,[EBP + 0xffffff10]
005D142F  57                        PUSH EDI
005D1430  52                        PUSH EDX
005D1431  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
005D1437  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D143D  E8 AE C3 15 00            CALL 0x0072d7f0
005D1442  8B F0                     MOV ESI,EAX
005D1444  83 C4 08                  ADD ESP,0x8
005D1447  3B F7                     CMP ESI,EDI
005D1449  0F 85 2D 28 00 00         JNZ 0x005d3c7c
005D144F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D1452  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
005D1455  56                        PUSH ESI
005D1456  8B CB                     MOV ECX,EBX
005D1458  E8 21 1E E3 FF            CALL 0x0040327e
005D145D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D1463  56                        PUSH ESI
005D1464  E8 CE 14 E3 FF            CALL 0x00402937
005D1469  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005D146C  3D 04 65 00 00            CMP EAX,0x6504
005D1471  0F 87 D4 03 00 00         JA 0x005d184b
005D1477  0F 84 4D 03 00 00         JZ 0x005d17ca
005D147D  3D 40 63 00 00            CMP EAX,0x6340
005D1482  0F 87 C9 01 00 00         JA 0x005d1651
005D1488  0F 84 A8 01 00 00         JZ 0x005d1636
005D148E  3D 26 63 00 00            CMP EAX,0x6326
005D1493  0F 87 F7 00 00 00         JA 0x005d1590
005D1499  0F 84 DF 00 00 00         JZ 0x005d157e
005D149F  83 E8 02                  SUB EAX,0x2
005D14A2  0F 84 C8 00 00 00         JZ 0x005d1570
005D14A8  48                        DEC EAX
005D14A9  0F 85 6E 14 00 00         JNZ 0x005d291d
005D14AF  8B 8B 26 22 00 00         MOV ECX,dword ptr [EBX + 0x2226]
005D14B5  8D 83 26 22 00 00         LEA EAX,[EBX + 0x2226]
005D14BB  3B CF                     CMP ECX,EDI
005D14BD  74 0C                     JZ 0x005d14cb
005D14BF  50                        PUSH EAX
005D14C0  E8 9B 9B 0D 00            CALL 0x006ab060
005D14C5  89 BB 2A 22 00 00         MOV dword ptr [EBX + 0x222a],EDI
LAB_005d14cb:
005D14CB  8B 83 2F 22 00 00         MOV EAX,dword ptr [EBX + 0x222f]
005D14D1  3B C7                     CMP EAX,EDI
005D14D3  74 06                     JZ 0x005d14db
005D14D5  50                        PUSH EAX
005D14D6  E8 35 CC 0D 00            CALL 0x006ae110
LAB_005d14db:
005D14DB  89 BB 2F 22 00 00         MOV dword ptr [EBX + 0x222f],EDI
005D14E1  8B 4B 4D                  MOV ECX,dword ptr [EBX + 0x4d]
005D14E4  81 F9 FF 60 00 00         CMP ECX,0x60ff
005D14EA  0F 84 2D 14 00 00         JZ 0x005d291d
005D14F0  A1 64 17 81 00            MOV EAX,[0x00811764]
005D14F5  3B C7                     CMP EAX,EDI
005D14F7  0F 84 20 14 00 00         JZ 0x005d291d
005D14FD  8A 15 7E 87 80 00         MOV DL,byte ptr [0x0080877e]
005D1503  84 D2                     TEST DL,DL
005D1505  74 3A                     JZ 0x005d1541
005D1507  6A FF                     PUSH -0x1
005D1509  57                        PUSH EDI
005D150A  81 F9 1F 61 00 00         CMP ECX,0x611f
005D1510  57                        PUSH EDI
005D1511  57                        PUSH EDI
005D1512  75 11                     JNZ 0x005d1525
005D1514  6A 12                     PUSH 0x12
005D1516  57                        PUSH EDI
005D1517  50                        PUSH EAX
005D1518  E8 43 3E 14 00            CALL 0x00715360
005D151D  83 C4 1C                  ADD ESP,0x1c
005D1520  E9 F8 13 00 00            JMP 0x005d291d
LAB_005d1525:
005D1525  6A 10                     PUSH 0x10
005D1527  57                        PUSH EDI
005D1528  50                        PUSH EAX
005D1529  E8 32 3E 14 00            CALL 0x00715360
005D152E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D1534  83 C4 1C                  ADD ESP,0x1c
005D1537  E8 47 36 E3 FF            CALL 0x00404b83
005D153C  E9 DC 13 00 00            JMP 0x005d291d
LAB_005d1541:
005D1541  6A FF                     PUSH -0x1
005D1543  57                        PUSH EDI
005D1544  57                        PUSH EDI
005D1545  57                        PUSH EDI
005D1546  6A 11                     PUSH 0x11
005D1548  57                        PUSH EDI
005D1549  50                        PUSH EAX
005D154A  E8 11 3E 14 00            CALL 0x00715360
005D154F  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
005D1552  83 C4 1C                  ADD ESP,0x1c
005D1555  3D 09 61 00 00            CMP EAX,0x6109
005D155A  0F 84 BD 13 00 00         JZ 0x005d291d
005D1560  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D1566  E8 18 36 E3 FF            CALL 0x00404b83
005D156B  E9 AD 13 00 00            JMP 0x005d291d
LAB_005d1570:
005D1570  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005D1573  89 83 09 22 00 00         MOV dword ptr [EBX + 0x2209],EAX
005D1579  E9 9F 13 00 00            JMP 0x005d291d
LAB_005d157e:
005D157E  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005D1581  B2 02                     MOV DL,0x2
005D1583  2A 11                     SUB DL,byte ptr [ECX]
005D1585  88 93 08 22 00 00         MOV byte ptr [EBX + 0x2208],DL
005D158B  E9 8D 13 00 00            JMP 0x005d291d
LAB_005d1590:
005D1590  3D 27 63 00 00            CMP EAX,0x6327
005D1595  0F 85 82 13 00 00         JNZ 0x005d291d
005D159B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D159E  8B 8B 04 22 00 00         MOV ECX,dword ptr [EBX + 0x2204]
005D15A4  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005D15A7  56                        PUSH ESI
005D15A8  51                        PUSH ECX
005D15A9  8B CB                     MOV ECX,EBX
005D15AB  E8 A5 3B E3 FF            CALL 0x00405155
005D15B0  8B 06                     MOV EAX,dword ptr [ESI]
005D15B2  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D15B5  8B 8B 04 22 00 00         MOV ECX,dword ptr [EBX + 0x2204]
005D15BB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005D15BE  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005D15C1  8D 78 FF                  LEA EDI,[EAX + -0x1]
005D15C4  F7 DF                     NEG EDI
005D15C6  1B FF                     SBB EDI,EDI
005D15C8  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
005D15CB  F7 DF                     NEG EDI
005D15CD  81 C7 22 24 00 00         ADD EDI,0x2422
005D15D3  4A                        DEC EDX
005D15D4  F7 DA                     NEG EDX
005D15D6  1B D2                     SBB EDX,EDX
005D15D8  83 E2 FD                  AND EDX,0xfffffffd
005D15DB  83 C2 03                  ADD EDX,0x3
005D15DE  2B F2                     SUB ESI,EDX
005D15E0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005D15E3  48                        DEC EAX
005D15E4  56                        PUSH ESI
005D15E5  0F AF C2                  IMUL EAX,EDX
005D15E8  52                        PUSH EDX
005D15E9  6A 00                     PUSH 0x0
005D15EB  50                        PUSH EAX
005D15EC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D15F1  6A 00                     PUSH 0x0
005D15F3  51                        PUSH ECX
005D15F4  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D15F7  E8 94 F4 13 00            CALL 0x00710a90
005D15FC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D1602  6A 02                     PUSH 0x2
005D1604  6A FF                     PUSH -0x1
005D1606  6A FF                     PUSH -0x1
005D1608  51                        PUSH ECX
005D1609  57                        PUSH EDI
005D160A  E8 31 EB 0D 00            CALL 0x006b0140
005D160F  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D1615  50                        PUSH EAX
005D1616  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D1619  E8 A2 03 14 00            CALL 0x007119c0
005D161E  8B 83 00 22 00 00         MOV EAX,dword ptr [EBX + 0x2200]
005D1624  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005D162A  50                        PUSH EAX
005D162B  51                        PUSH ECX
005D162C  E8 9F 1F 0E 00            CALL 0x006b35d0
005D1631  E9 E7 12 00 00            JMP 0x005d291d
LAB_005d1636:
005D1636  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D163C  57                        PUSH EDI
005D163D  81 C2 5C 05 00 00         ADD EDX,0x55c
005D1643  56                        PUSH ESI
005D1644  52                        PUSH EDX
005D1645  8B CB                     MOV ECX,EBX
005D1647  E8 88 1B E3 FF            CALL 0x004031d4
005D164C  E9 CC 12 00 00            JMP 0x005d291d
LAB_005d1651:
005D1651  3D 01 65 00 00            CMP EAX,0x6501
005D1656  0F 87 E3 00 00 00         JA 0x005d173f
005D165C  74 5E                     JZ 0x005d16bc
005D165E  3D 41 63 00 00            CMP EAX,0x6341
005D1663  74 3C                     JZ 0x005d16a1
005D1665  3D FF 64 00 00            CMP EAX,0x64ff
005D166A  0F 85 AD 12 00 00         JNZ 0x005d291d
005D1670  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1675  84 C0                     TEST AL,AL
005D1677  0F 84 A0 12 00 00         JZ 0x005d291d
005D167D  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005D1683  6A FF                     PUSH -0x1
005D1685  6A 01                     PUSH 0x1
005D1687  8D 83 53 1F 00 00         LEA EAX,[EBX + 0x1f53]
005D168D  6A 0D                     PUSH 0xd
005D168F  50                        PUSH EAX
005D1690  6A 20                     PUSH 0x20
005D1692  57                        PUSH EDI
005D1693  51                        PUSH ECX
005D1694  E8 C7 3C 14 00            CALL 0x00715360
005D1699  83 C4 1C                  ADD ESP,0x1c
005D169C  E9 7C 12 00 00            JMP 0x005d291d
LAB_005d16a1:
005D16A1  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D16A7  57                        PUSH EDI
005D16A8  81 C2 ED 05 00 00         ADD EDX,0x5ed
005D16AE  56                        PUSH ESI
005D16AF  52                        PUSH EDX
005D16B0  8B CB                     MOV ECX,EBX
005D16B2  E8 1D 1B E3 FF            CALL 0x004031d4
005D16B7  E9 61 12 00 00            JMP 0x005d291d
LAB_005d16bc:
005D16BC  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D16BF  83 FA FF                  CMP EDX,-0x1
005D16C2  0F 84 55 12 00 00         JZ 0x005d291d
005D16C8  39 BB 84 1F 00 00         CMP dword ptr [EBX + 0x1f84],EDI
005D16CE  0F 84 49 12 00 00         JZ 0x005d291d
005D16D4  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D16DA  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D16DD  73 0B                     JNC 0x005d16ea
005D16DF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D16E2  0F AF C2                  IMUL EAX,EDX
005D16E5  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005D16E8  EB 02                     JMP 0x005d16ec
LAB_005d16ea:
005D16EA  33 C0                     XOR EAX,EAX
LAB_005d16ec:
005D16EC  8A 80 04 01 00 00         MOV AL,byte ptr [EAX + 0x104]
005D16F2  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005D16F5  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D16FA  84 C0                     TEST AL,AL
005D16FC  74 24                     JZ 0x005d1722
005D16FE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D1701  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005D1704  81 E1 FF 00 00 00         AND ECX,0xff
005D170A  51                        PUSH ECX
005D170B  6A 01                     PUSH 0x1
005D170D  52                        PUSH EDX
005D170E  8B CB                     MOV ECX,EBX
005D1710  E8 53 09 E3 FF            CALL 0x00402068
005D1715  57                        PUSH EDI
005D1716  8B CB                     MOV ECX,EBX
005D1718  E8 B8 23 E3 FF            CALL 0x00403ad5
005D171D  E9 FB 11 00 00            JMP 0x005d291d
LAB_005d1722:
005D1722  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D1725  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005D1728  25 FF 00 00 00            AND EAX,0xff
005D172D  50                        PUSH EAX
005D172E  6A 01                     PUSH 0x1
005D1730  6A 05                     PUSH 0x5
005D1732  51                        PUSH ECX
005D1733  8B CB                     MOV ECX,EBX
005D1735  E8 12 16 E3 FF            CALL 0x00402d4c
005D173A  E9 DE 11 00 00            JMP 0x005d291d
LAB_005d173f:
005D173F  3D 02 65 00 00            CMP EAX,0x6502
005D1744  0F 85 D3 11 00 00         JNZ 0x005d291d
005D174A  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D174D  83 FA FF                  CMP EDX,-0x1
005D1750  0F 84 C7 11 00 00         JZ 0x005d291d
005D1756  39 BB 84 1F 00 00         CMP dword ptr [EBX + 0x1f84],EDI
005D175C  0F 84 BB 11 00 00         JZ 0x005d291d
005D1762  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D1768  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D176B  73 0B                     JNC 0x005d1778
005D176D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D1770  0F AF C2                  IMUL EAX,EDX
005D1773  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005D1776  EB 02                     JMP 0x005d177a
LAB_005d1778:
005D1778  33 C0                     XOR EAX,EAX
LAB_005d177a:
005D177A  8A 90 04 01 00 00         MOV DL,byte ptr [EAX + 0x104]
005D1780  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1785  84 C0                     TEST AL,AL
005D1787  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
005D178A  74 21                     JZ 0x005d17ad
005D178C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D178F  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005D1792  25 FF 00 00 00            AND EAX,0xff
005D1797  50                        PUSH EAX
005D1798  51                        PUSH ECX
005D1799  8B CB                     MOV ECX,EBX
005D179B  E8 A6 43 E3 FF            CALL 0x00405b46
005D17A0  57                        PUSH EDI
005D17A1  8B CB                     MOV ECX,EBX
005D17A3  E8 2D 23 E3 FF            CALL 0x00403ad5
005D17A8  E9 70 11 00 00            JMP 0x005d291d
LAB_005d17ad:
005D17AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D17B0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005D17B3  81 E2 FF 00 00 00         AND EDX,0xff
005D17B9  57                        PUSH EDI
005D17BA  52                        PUSH EDX
005D17BB  6A 01                     PUSH 0x1
005D17BD  50                        PUSH EAX
005D17BE  8B CB                     MOV ECX,EBX
005D17C0  E8 87 15 E3 FF            CALL 0x00402d4c
005D17C5  E9 53 11 00 00            JMP 0x005d291d
LAB_005d17ca:
005D17CA  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D17CD  83 FA FF                  CMP EDX,-0x1
005D17D0  0F 84 47 11 00 00         JZ 0x005d291d
005D17D6  39 BB 84 1F 00 00         CMP dword ptr [EBX + 0x1f84],EDI
005D17DC  0F 84 3B 11 00 00         JZ 0x005d291d
005D17E2  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D17E8  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D17EB  73 0B                     JNC 0x005d17f8
005D17ED  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D17F0  0F AF C2                  IMUL EAX,EDX
005D17F3  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005D17F6  EB 02                     JMP 0x005d17fa
LAB_005d17f8:
005D17F8  33 C0                     XOR EAX,EAX
LAB_005d17fa:
005D17FA  8A 88 04 01 00 00         MOV CL,byte ptr [EAX + 0x104]
005D1800  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1805  84 C0                     TEST AL,AL
005D1807  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005D180A  74 22                     JZ 0x005d182e
005D180C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D180F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005D1812  81 E2 FF 00 00 00         AND EDX,0xff
005D1818  8B CB                     MOV ECX,EBX
005D181A  52                        PUSH EDX
005D181B  50                        PUSH EAX
005D181C  E8 85 29 E3 FF            CALL 0x004041a6
005D1821  57                        PUSH EDI
005D1822  8B CB                     MOV ECX,EBX
005D1824  E8 AC 22 E3 FF            CALL 0x00403ad5
005D1829  E9 EF 10 00 00            JMP 0x005d291d
LAB_005d182e:
005D182E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D1831  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005D1834  81 E1 FF 00 00 00         AND ECX,0xff
005D183A  57                        PUSH EDI
005D183B  51                        PUSH ECX
005D183C  6A 02                     PUSH 0x2
005D183E  52                        PUSH EDX
005D183F  8B CB                     MOV ECX,EBX
005D1841  E8 06 15 E3 FF            CALL 0x00402d4c
005D1846  E9 D2 10 00 00            JMP 0x005d291d
LAB_005d184b:
005D184B  3D 4B 65 00 00            CMP EAX,0x654b
005D1850  0F 87 47 01 00 00         JA 0x005d199d
005D1856  3D 4A 65 00 00            CMP EAX,0x654a
005D185B  0F 83 A7 01 00 00         JNC 0x005d1a08
005D1861  05 FB 9A FF FF            ADD EAX,0xffff9afb
005D1866  83 F8 44                  CMP EAX,0x44
005D1869  0F 87 AE 10 00 00         JA 0x005d291d
005D186F  33 C9                     XOR ECX,ECX
005D1871  8A 88 E0 3C 5D 00         MOV CL,byte ptr [EAX + 0x5d3ce0]
switchD_005d1877::switchD:
005D1877  FF 24 8D CC 3C 5D 00      JMP dword ptr [ECX*0x4 + 0x5d3ccc]
switchD_005d1877::caseD_6506:
005D187E  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005D1881  3B C7                     CMP EAX,EDI
005D1883  74 39                     JZ 0x005d18be
005D1885  83 F8 02                  CMP EAX,0x2
005D1888  0F 86 8F 10 00 00         JBE 0x005d291d
005D188E  83 F8 08                  CMP EAX,0x8
005D1891  0F 87 86 10 00 00         JA 0x005d291d
005D1897  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D189C  84 C0                     TEST AL,AL
005D189E  0F 84 79 10 00 00         JZ 0x005d291d
005D18A4  8B 0D AB 8A 80 00         MOV ECX,dword ptr [0x00808aab]
005D18AA  57                        PUSH EDI
005D18AB  41                        INC ECX
005D18AC  89 0D AB 8A 80 00         MOV dword ptr [0x00808aab],ECX
005D18B2  8B CB                     MOV ECX,EBX
005D18B4  E8 D0 31 E3 FF            CALL 0x00404a89
005D18B9  E9 5F 10 00 00            JMP 0x005d291d
LAB_005d18be:
005D18BE  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D18C3  84 C0                     TEST AL,AL
005D18C5  0F 84 52 10 00 00         JZ 0x005d291d
005D18CB  8B 35 AB 8A 80 00         MOV ESI,dword ptr [0x00808aab]
005D18D1  57                        PUSH EDI
005D18D2  46                        INC ESI
005D18D3  8B CB                     MOV ECX,EBX
005D18D5  89 35 AB 8A 80 00         MOV dword ptr [0x00808aab],ESI
005D18DB  8B 93 21 21 00 00         MOV EDX,dword ptr [EBX + 0x2121]
005D18E1  42                        INC EDX
005D18E2  89 93 21 21 00 00         MOV dword ptr [EBX + 0x2121],EDX
005D18E8  E8 9C 31 E3 FF            CALL 0x00404a89
005D18ED  57                        PUSH EDI
005D18EE  8B CB                     MOV ECX,EBX
005D18F0  E8 E0 21 E3 FF            CALL 0x00403ad5
005D18F5  E9 23 10 00 00            JMP 0x005d291d
switchD_005d1877::caseD_6505:
005D18FA  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005D18FD  83 FA FF                  CMP EDX,-0x1
005D1900  0F 84 17 10 00 00         JZ 0x005d291d
005D1906  39 BB 84 1F 00 00         CMP dword ptr [EBX + 0x1f84],EDI
005D190C  0F 84 0B 10 00 00         JZ 0x005d291d
005D1912  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D1918  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D191B  73 0B                     JNC 0x005d1928
005D191D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D1920  0F AF C2                  IMUL EAX,EDX
005D1923  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005D1926  EB 02                     JMP 0x005d192a
LAB_005d1928:
005D1928  33 C0                     XOR EAX,EAX
LAB_005d192a:
005D192A  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
005D1930  84 C9                     TEST CL,CL
005D1932  74 42                     JZ 0x005d1976
005D1934  8A 0D A0 67 80 00         MOV CL,byte ptr [0x008067a0]
005D193A  84 C9                     TEST CL,CL
005D193C  B9 1D 7E 80 00            MOV ECX,0x807e1d
005D1941  75 05                     JNZ 0x005d1948
005D1943  B9 DD 7D 80 00            MOV ECX,0x807ddd
LAB_005d1948:
005D1948  8B 90 08 01 00 00         MOV EDX,dword ptr [EAX + 0x108]
005D194E  8B 80 04 01 00 00         MOV EAX,dword ptr [EAX + 0x104]
005D1954  51                        PUSH ECX
005D1955  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005D1958  52                        PUSH EDX
005D1959  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005D195F  50                        PUSH EAX
005D1960  51                        PUSH ECX
005D1961  52                        PUSH EDX
005D1962  8B CB                     MOV ECX,EBX
005D1964  E8 72 02 E3 FF            CALL 0x00401bdb
005D1969  57                        PUSH EDI
005D196A  8B CB                     MOV ECX,EBX
005D196C  E8 64 21 E3 FF            CALL 0x00403ad5
005D1971  E9 A7 0F 00 00            JMP 0x005d291d
LAB_005d1976:
005D1976  8B 88 08 01 00 00         MOV ECX,dword ptr [EAX + 0x108]
005D197C  8B 90 04 01 00 00         MOV EDX,dword ptr [EAX + 0x104]
005D1982  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005D1985  51                        PUSH ECX
005D1986  52                        PUSH EDX
005D1987  6A 03                     PUSH 0x3
005D1989  50                        PUSH EAX
005D198A  8B CB                     MOV ECX,EBX
005D198C  E8 BB 13 E3 FF            CALL 0x00402d4c
005D1991  C6 83 44 22 00 00 00      MOV byte ptr [EBX + 0x2244],0x0
005D1998  E9 80 0F 00 00            JMP 0x005d291d
LAB_005d199d:
005D199D  3D 4A 69 00 00            CMP EAX,0x694a
005D19A2  0F 87 52 0C 00 00         JA 0x005d25fa
005D19A8  0F 84 81 00 00 00         JZ 0x005d1a2f
005D19AE  2D 4C 65 00 00            SUB EAX,0x654c
005D19B3  74 08                     JZ 0x005d19bd
005D19B5  48                        DEC EAX
005D19B6  74 50                     JZ 0x005d1a08
005D19B8  E9 60 0F 00 00            JMP 0x005d291d
LAB_005d19bd:
005D19BD  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D19C2  84 C0                     TEST AL,AL
005D19C4  0F 84 53 0F 00 00         JZ 0x005d291d
005D19CA  8B CB                     MOV ECX,EBX
005D19CC  E8 F5 1B E3 FF            CALL 0x004035c6
005D19D1  8B CB                     MOV ECX,EBX
005D19D3  E8 A5 41 E3 FF            CALL 0x00405b7d
005D19D8  8B 13                     MOV EDX,dword ptr [EBX]
005D19DA  8B CB                     MOV ECX,EBX
005D19DC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D19DF  8B CB                     MOV ECX,EBX
005D19E1  E8 B4 10 E3 FF            CALL 0x00402a9a
switchD_005d1877::caseD_6549:
005D19E6  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D19EB  84 C0                     TEST AL,AL
005D19ED  0F 84 2A 0F 00 00         JZ 0x005d291d
005D19F3  8B 8B 21 21 00 00         MOV ECX,dword ptr [EBX + 0x2121]
005D19F9  57                        PUSH EDI
005D19FA  41                        INC ECX
005D19FB  89 8B 21 21 00 00         MOV dword ptr [EBX + 0x2121],ECX
005D1A01  8B CB                     MOV ECX,EBX
005D1A03  E8 CD 20 E3 FF            CALL 0x00403ad5
switchD_005d1877::caseD_6548:
005D1A08  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1A0D  84 C0                     TEST AL,AL
005D1A0F  0F 84 08 0F 00 00         JZ 0x005d291d
005D1A15  8B 0D AB 8A 80 00         MOV ECX,dword ptr [0x00808aab]
005D1A1B  57                        PUSH EDI
005D1A1C  41                        INC ECX
005D1A1D  89 0D AB 8A 80 00         MOV dword ptr [0x00808aab],ECX
005D1A23  8B CB                     MOV ECX,EBX
005D1A25  E8 5F 30 E3 FF            CALL 0x00404a89
005D1A2A  E9 EE 0E 00 00            JMP 0x005d291d
LAB_005d1a2f:
005D1A2F  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005D1A35  B8 01 01 01 01            MOV EAX,0x1010101
005D1A3A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005D1A3D  32 D2                     XOR DL,DL
005D1A3F  3B F7                     CMP ESI,EDI
005D1A41  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005D1A44  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005D1A48  88 55 F3                  MOV byte ptr [EBP + -0xd],DL
005D1A4B  0F 84 CC 0E 00 00         JZ 0x005d291d
005D1A51  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1A56  84 C0                     TEST AL,AL
005D1A58  0F 84 FC 00 00 00         JZ 0x005d1b5a
005D1A5E  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005D1A61  85 C0                     TEST EAX,EAX
005D1A63  7E 37                     JLE 0x005d1a9c
005D1A65  3B F8                     CMP EDI,EAX
LAB_005d1a67:
005D1A67  73 0D                     JNC 0x005d1a76
005D1A69  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D1A6C  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005D1A6F  0F AF C7                  IMUL EAX,EDI
005D1A72  03 C1                     ADD EAX,ECX
005D1A74  EB 02                     JMP 0x005d1a78
LAB_005d1a76:
005D1A76  33 C0                     XOR EAX,EAX
LAB_005d1a78:
005D1A78  85 C0                     TEST EAX,EAX
005D1A7A  74 14                     JZ 0x005d1a90
005D1A7C  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D1A7F  80 F9 02                  CMP CL,0x2
005D1A82  74 05                     JZ 0x005d1a89
005D1A84  80 F9 03                  CMP CL,0x3
005D1A87  75 07                     JNZ 0x005d1a90
LAB_005d1a89:
005D1A89  8A 48 4F                  MOV CL,byte ptr [EAX + 0x4f]
005D1A8C  84 C9                     TEST CL,CL
005D1A8E  74 0A                     JZ 0x005d1a9a
LAB_005d1a90:
005D1A90  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005D1A93  47                        INC EDI
005D1A94  3B F8                     CMP EDI,EAX
005D1A96  7C CF                     JL 0x005d1a67
005D1A98  EB 02                     JMP 0x005d1a9c
LAB_005d1a9a:
005D1A9A  B2 01                     MOV DL,0x1
LAB_005d1a9c:
005D1A9C  84 D2                     TEST DL,DL
005D1A9E  74 2F                     JZ 0x005d1acf
005D1AA0  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005D1AA6  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005D1AAC  85 C9                     TEST ECX,ECX
005D1AAE  0F 84 69 0E 00 00         JZ 0x005d291d
005D1AB4  6A 00                     PUSH 0x0
005D1AB6  6A 00                     PUSH 0x0
005D1AB8  6A 00                     PUSH 0x0
005D1ABA  6A 00                     PUSH 0x0
005D1ABC  6A 00                     PUSH 0x0
005D1ABE  6A 00                     PUSH 0x0
005D1AC0  68 27 25 00 00            PUSH 0x2527
005D1AC5  E8 DE 24 E3 FF            CALL 0x00403fa8
005D1ACA  E9 4E 0E 00 00            JMP 0x005d291d
LAB_005d1acf:
005D1ACF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005D1AD2  33 C9                     XOR ECX,ECX
005D1AD4  85 C0                     TEST EAX,EAX
005D1AD6  7E 4D                     JLE 0x005d1b25
005D1AD8  3B C8                     CMP ECX,EAX
LAB_005d1ada:
005D1ADA  73 0D                     JNC 0x005d1ae9
005D1ADC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D1ADF  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005D1AE2  0F AF C1                  IMUL EAX,ECX
005D1AE5  03 C2                     ADD EAX,EDX
005D1AE7  EB 02                     JMP 0x005d1aeb
LAB_005d1ae9:
005D1AE9  33 C0                     XOR EAX,EAX
LAB_005d1aeb:
005D1AEB  85 C0                     TEST EAX,EAX
005D1AED  74 28                     JZ 0x005d1b17
005D1AEF  80 38 00                  CMP byte ptr [EAX],0x0
005D1AF2  74 23                     JZ 0x005d1b17
005D1AF4  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005D1AFA  8A 40 04                  MOV AL,byte ptr [EAX + 0x4]
005D1AFD  80 FA 0C                  CMP DL,0xc
005D1B00  75 0A                     JNZ 0x005d1b0c
005D1B02  84 C0                     TEST AL,AL
005D1B04  74 1B                     JZ 0x005d1b21
005D1B06  3C 01                     CMP AL,0x1
005D1B08  74 17                     JZ 0x005d1b21
005D1B0A  EB 08                     JMP 0x005d1b14
LAB_005d1b0c:
005D1B0C  84 C0                     TEST AL,AL
005D1B0E  74 07                     JZ 0x005d1b17
005D1B10  3C 01                     CMP AL,0x1
005D1B12  74 03                     JZ 0x005d1b17
LAB_005d1b14:
005D1B14  FE 45 F3                  INC byte ptr [EBP + -0xd]
LAB_005d1b17:
005D1B17  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
005D1B1A  41                        INC ECX
005D1B1B  3B C8                     CMP ECX,EAX
005D1B1D  7C BB                     JL 0x005d1ada
005D1B1F  EB 04                     JMP 0x005d1b25
LAB_005d1b21:
005D1B21  C6 45 F3 00               MOV byte ptr [EBP + -0xd],0x0
LAB_005d1b25:
005D1B25  80 7D F3 02               CMP byte ptr [EBP + -0xd],0x2
005D1B29  73 2F                     JNC 0x005d1b5a
005D1B2B  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D1B31  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005D1B37  85 C9                     TEST ECX,ECX
005D1B39  0F 84 DE 0D 00 00         JZ 0x005d291d
005D1B3F  6A 00                     PUSH 0x0
005D1B41  6A 00                     PUSH 0x0
005D1B43  6A 00                     PUSH 0x0
005D1B45  6A 00                     PUSH 0x0
005D1B47  6A 00                     PUSH 0x0
005D1B49  6A 00                     PUSH 0x0
005D1B4B  68 28 25 00 00            PUSH 0x2528
005D1B50  E8 53 24 E3 FF            CALL 0x00403fa8
005D1B55  E9 C3 0D 00 00            JMP 0x005d291d
LAB_005d1b5a:
005D1B5A  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005D1B60  85 FF                     TEST EDI,EDI
005D1B62  74 4D                     JZ 0x005d1bb1
005D1B64  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005D1B6A  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005D1B70  50                        PUSH EAX
005D1B71  51                        PUSH ECX
005D1B72  6A 00                     PUSH 0x0
005D1B74  8B CF                     MOV ECX,EDI
005D1B76  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005D1B7D  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005D1B86  E8 F3 34 E3 FF            CALL 0x0040507e
005D1B8B  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005D1B91  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005D1B97  52                        PUSH EDX
005D1B98  50                        PUSH EAX
005D1B99  8B CF                     MOV ECX,EDI
005D1B9B  E8 7E 08 E3 FF            CALL 0x0040241e
005D1BA0  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005D1BA7  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005d1bb1:
005D1BB1  B9 A2 00 00 00            MOV ECX,0xa2
005D1BB6  33 C0                     XOR EAX,EAX
005D1BB8  BF C7 87 80 00            MOV EDI,0x8087c7
005D1BBD  C6 05 C6 87 80 00 00      MOV byte ptr [0x008087c6],0x0
005D1BC4  C6 05 4F 87 80 00 00      MOV byte ptr [0x0080874f],0x0
005D1BCB  F3 AB                     STOSD.REP ES:EDI
005D1BCD  B8 E9 87 80 00            MOV EAX,0x8087e9
LAB_005d1bd2:
005D1BD2  C6 40 FF 00               MOV byte ptr [EAX + -0x1],0x0
005D1BD6  C6 00 FF                  MOV byte ptr [EAX],0xff
005D1BD9  83 C0 51                  ADD EAX,0x51
005D1BDC  3D 71 8A 80 00            CMP EAX,0x808a71
005D1BE1  7C EF                     JL 0x005d1bd2
005D1BE3  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D1BE9  33 FF                     XOR EDI,EDI
005D1BEB  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D1BEE  85 D2                     TEST EDX,EDX
005D1BF0  7E 32                     JLE 0x005d1c24
005D1BF2  3B FA                     CMP EDI,EDX
LAB_005d1bf4:
005D1BF4  73 0D                     JNC 0x005d1c03
005D1BF6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D1BF9  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
005D1BFC  0F AF C7                  IMUL EAX,EDI
005D1BFF  03 C6                     ADD EAX,ESI
005D1C01  EB 02                     JMP 0x005d1c05
LAB_005d1c03:
005D1C03  33 C0                     XOR EAX,EAX
LAB_005d1c05:
005D1C05  85 C0                     TEST EAX,EAX
005D1C07  74 16                     JZ 0x005d1c1f
005D1C09  80 38 00                  CMP byte ptr [EAX],0x0
005D1C0C  74 11                     JZ 0x005d1c1f
005D1C0E  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005D1C11  3C FF                     CMP AL,0xff
005D1C13  74 0A                     JZ 0x005d1c1f
005D1C15  25 FF 00 00 00            AND EAX,0xff
005D1C1A  C6 44 05 D0 00            MOV byte ptr [EBP + EAX*0x1 + -0x30],0x0
LAB_005d1c1f:
005D1C1F  47                        INC EDI
005D1C20  3B FA                     CMP EDI,EDX
005D1C22  7C D0                     JL 0x005d1bf4
LAB_005d1c24:
005D1C24  33 FF                     XOR EDI,EDI
005D1C26  85 D2                     TEST EDX,EDX
005D1C28  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005D1C2B  0F 8E 81 02 00 00         JLE 0x005d1eb2
005D1C31  3B FA                     CMP EDI,EDX
LAB_005d1c33:
005D1C33  73 0D                     JNC 0x005d1c42
005D1C35  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005D1C38  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005D1C3B  0F AF D7                  IMUL EDX,EDI
005D1C3E  03 D0                     ADD EDX,EAX
005D1C40  EB 02                     JMP 0x005d1c44
LAB_005d1c42:
005D1C42  33 D2                     XOR EDX,EDX
LAB_005d1c44:
005D1C44  85 D2                     TEST EDX,EDX
005D1C46  0F 84 51 02 00 00         JZ 0x005d1e9d
005D1C4C  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
005D1C4F  84 C0                     TEST AL,AL
005D1C51  0F 84 46 02 00 00         JZ 0x005d1e9d
005D1C57  3C 01                     CMP AL,0x1
005D1C59  75 12                     JNZ 0x005d1c6d
005D1C5B  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D1C61  3C 05                     CMP AL,0x5
005D1C63  74 08                     JZ 0x005d1c6d
005D1C65  3C 0F                     CMP AL,0xf
005D1C67  0F 85 30 02 00 00         JNZ 0x005d1e9d
LAB_005d1c6d:
005D1C6D  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005D1C70  33 C9                     XOR ECX,ECX
005D1C72  8A 4A 05                  MOV CL,byte ptr [EDX + 0x5]
005D1C75  3B 4E 0C                  CMP ECX,dword ptr [ESI + 0xc]
005D1C78  73 0E                     JNC 0x005d1c88
005D1C7A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D1C7D  0F AF C1                  IMUL EAX,ECX
005D1C80  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005D1C83  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005D1C86  EB 07                     JMP 0x005d1c8f
LAB_005d1c88:
005D1C88  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005d1c8f:
005D1C8F  8A 0D C6 87 80 00         MOV CL,byte ptr [0x008087c6]
005D1C95  FE C1                     INC CL
005D1C97  88 0D C6 87 80 00         MOV byte ptr [0x008087c6],CL
005D1C9D  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1CA0  3C FF                     CMP AL,0xff
005D1CA2  75 1A                     JNZ 0x005d1cbe
005D1CA4  33 C0                     XOR EAX,EAX
LAB_005d1ca6:
005D1CA6  8A 4C 05 D0               MOV CL,byte ptr [EBP + EAX*0x1 + -0x30]
005D1CAA  84 C9                     TEST CL,CL
005D1CAC  75 08                     JNZ 0x005d1cb6
005D1CAE  40                        INC EAX
005D1CAF  83 F8 08                  CMP EAX,0x8
005D1CB2  7C F2                     JL 0x005d1ca6
005D1CB4  EB 08                     JMP 0x005d1cbe
LAB_005d1cb6:
005D1CB6  88 42 02                  MOV byte ptr [EDX + 0x2],AL
005D1CB9  C6 44 05 D0 00            MOV byte ptr [EBP + EAX*0x1 + -0x30],0x0
LAB_005d1cbe:
005D1CBE  8A 4A 02                  MOV CL,byte ptr [EDX + 0x2]
005D1CC1  8B C1                     MOV EAX,ECX
005D1CC3  25 FF 00 00 00            AND EAX,0xff
005D1CC8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1CCB  88 8C C0 E9 87 80 00      MOV byte ptr [EAX + EAX*0x8 + 0x8087e9],CL
005D1CD2  8A 4A 03                  MOV CL,byte ptr [EDX + 0x3]
005D1CD5  33 C0                     XOR EAX,EAX
005D1CD7  47                        INC EDI
005D1CD8  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1CDB  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
005D1CDE  88 8C F6 E8 87 80 00      MOV byte ptr [ESI + ESI*0x8 + 0x8087e8],CL
005D1CE5  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D1CEB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D1CEE  3B F9                     CMP EDI,ECX
005D1CF0  7D 2E                     JGE 0x005d1d20
LAB_005d1cf2:
005D1CF2  73 0D                     JNC 0x005d1d01
005D1CF4  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005D1CF7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D1CFA  0F AF F7                  IMUL ESI,EDI
005D1CFD  03 F1                     ADD ESI,ECX
005D1CFF  EB 02                     JMP 0x005d1d03
LAB_005d1d01:
005D1D01  33 F6                     XOR ESI,ESI
LAB_005d1d03:
005D1D03  85 F6                     TEST ESI,ESI
005D1D05  74 0B                     JZ 0x005d1d12
005D1D07  80 3E 00                  CMP byte ptr [ESI],0x0
005D1D0A  75 14                     JNZ 0x005d1d20
005D1D0C  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1D0F  88 46 02                  MOV byte ptr [ESI + 0x2],AL
LAB_005d1d12:
005D1D12  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D1D18  47                        INC EDI
005D1D19  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D1D1C  3B F9                     CMP EDI,ECX
005D1D1E  7C D2                     JL 0x005d1cf2
LAB_005d1d20:
005D1D20  33 C0                     XOR EAX,EAX
005D1D22  BF A0 16 80 00            MOV EDI,0x8016a0
005D1D27  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1D2A  83 C9 FF                  OR ECX,0xffffffff
005D1D2D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1D30  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D1D37  33 C0                     XOR EAX,EAX
005D1D39  F2 AE                     SCASB.REPNE ES:EDI
005D1D3B  F7 D1                     NOT ECX
005D1D3D  2B F9                     SUB EDI,ECX
005D1D3F  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D1D42  8B C1                     MOV EAX,ECX
005D1D44  8B F7                     MOV ESI,EDI
005D1D46  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D1D49  C1 E9 02                  SHR ECX,0x2
005D1D4C  F3 A5                     MOVSD.REP ES:EDI,ESI
005D1D4E  8B C8                     MOV ECX,EAX
005D1D50  33 C0                     XOR EAX,EAX
005D1D52  83 E1 03                  AND ECX,0x3
005D1D55  F3 A4                     MOVSB.REP ES:EDI,ESI
005D1D57  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
005D1D5A  83 E8 02                  SUB EAX,0x2
005D1D5D  0F 84 BD 00 00 00         JZ 0x005d1e20
005D1D63  48                        DEC EAX
005D1D64  0F 84 8F 00 00 00         JZ 0x005d1df9
005D1D6A  48                        DEC EAX
005D1D6B  0F 85 E1 00 00 00         JNZ 0x005d1e52
005D1D71  33 C0                     XOR EAX,EAX
005D1D73  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1D76  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1D79  C6 84 C0 C7 87 80 00 01   MOV byte ptr [EAX + EAX*0x8 + 0x8087c7],0x1
005D1D81  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D1D84  85 C0                     TEST EAX,EAX
005D1D86  74 3A                     JZ 0x005d1dc2
005D1D88  8B C8                     MOV ECX,EAX
005D1D8A  33 C0                     XOR EAX,EAX
005D1D8C  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1D8F  8D 79 4C                  LEA EDI,[ECX + 0x4c]
005D1D92  83 C9 FF                  OR ECX,0xffffffff
005D1D95  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1D98  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D1D9F  33 C0                     XOR EAX,EAX
005D1DA1  F2 AE                     SCASB.REPNE ES:EDI
005D1DA3  F7 D1                     NOT ECX
005D1DA5  2B F9                     SUB EDI,ECX
005D1DA7  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D1DAA  8B C1                     MOV EAX,ECX
005D1DAC  8B F7                     MOV ESI,EDI
005D1DAE  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D1DB1  C1 E9 02                  SHR ECX,0x2
005D1DB4  F3 A5                     MOVSD.REP ES:EDI,ESI
005D1DB6  8B C8                     MOV ECX,EAX
005D1DB8  83 E1 03                  AND ECX,0x3
005D1DBB  F3 A4                     MOVSB.REP ES:EDI,ESI
005D1DBD  E9 90 00 00 00            JMP 0x005d1e52
LAB_005d1dc2:
005D1DC2  33 C0                     XOR EAX,EAX
005D1DC4  BF A0 16 80 00            MOV EDI,0x8016a0
005D1DC9  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1DCC  83 C9 FF                  OR ECX,0xffffffff
005D1DCF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1DD2  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D1DD9  33 C0                     XOR EAX,EAX
005D1DDB  F2 AE                     SCASB.REPNE ES:EDI
005D1DDD  F7 D1                     NOT ECX
005D1DDF  2B F9                     SUB EDI,ECX
005D1DE1  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D1DE4  8B C1                     MOV EAX,ECX
005D1DE6  8B F7                     MOV ESI,EDI
005D1DE8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D1DEB  C1 E9 02                  SHR ECX,0x2
005D1DEE  F3 A5                     MOVSD.REP ES:EDI,ESI
005D1DF0  8B C8                     MOV ECX,EAX
005D1DF2  83 E1 03                  AND ECX,0x3
005D1DF5  F3 A4                     MOVSB.REP ES:EDI,ESI
005D1DF7  EB 59                     JMP 0x005d1e52
LAB_005d1df9:
005D1DF9  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D1DFF  8B 42 06                  MOV EAX,dword ptr [EDX + 0x6]
005D1E02  3B C8                     CMP ECX,EAX
005D1E04  75 4C                     JNZ 0x005d1e52
005D1E06  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E09  A2 4D 87 80 00            MOV [0x0080874d],AL
005D1E0E  8A 4A 03                  MOV CL,byte ptr [EDX + 0x3]
005D1E11  88 0D 4E 87 80 00         MOV byte ptr [0x0080874e],CL
005D1E17  C6 05 4F 87 80 00 01      MOV byte ptr [0x0080874f],0x1
005D1E1E  EB 32                     JMP 0x005d1e52
LAB_005d1e20:
005D1E20  80 3A 00                  CMP byte ptr [EDX],0x0
005D1E23  74 10                     JZ 0x005d1e35
005D1E25  33 C0                     XOR EAX,EAX
005D1E27  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E2A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1E2D  C6 84 C0 C7 87 80 00 00   MOV byte ptr [EAX + EAX*0x8 + 0x8087c7],0x0
LAB_005d1e35:
005D1E35  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005D1E3A  8B 4A 06                  MOV ECX,dword ptr [EDX + 0x6]
005D1E3D  3B C1                     CMP EAX,ECX
005D1E3F  75 11                     JNZ 0x005d1e52
005D1E41  8A 4A 02                  MOV CL,byte ptr [EDX + 0x2]
005D1E44  88 0D 4D 87 80 00         MOV byte ptr [0x0080874d],CL
005D1E4A  8A 42 03                  MOV AL,byte ptr [EDX + 0x3]
005D1E4D  A2 4E 87 80 00            MOV [0x0080874e],AL
LAB_005d1e52:
005D1E52  8A 4A 4A                  MOV CL,byte ptr [EDX + 0x4a]
005D1E55  33 C0                     XOR EAX,EAX
005D1E57  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E5A  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005D1E5D  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
005D1E60  33 C0                     XOR EAX,EAX
005D1E62  88 8C F6 EA 87 80 00      MOV byte ptr [ESI + ESI*0x8 + 0x8087ea],CL
005D1E69  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E6C  8B 4A 54                  MOV ECX,dword ptr [EDX + 0x54]
005D1E6F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1E72  89 8C C0 EB 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087eb],ECX
005D1E79  8B 4A 58                  MOV ECX,dword ptr [EDX + 0x58]
005D1E7C  33 C0                     XOR EAX,EAX
005D1E7E  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E81  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1E84  89 8C C0 EF 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087ef],ECX
005D1E8B  33 C0                     XOR EAX,EAX
005D1E8D  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D1E90  8B 52 5C                  MOV EDX,dword ptr [EDX + 0x5c]
005D1E93  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D1E96  89 94 C0 F3 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087f3],EDX
LAB_005d1e9d:
005D1E9D  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D1EA3  47                        INC EDI
005D1EA4  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005D1EA7  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D1EAA  3B FA                     CMP EDI,EDX
005D1EAC  0F 8C 81 FD FF FF         JL 0x005d1c33
LAB_005d1eb2:
005D1EB2  B9 20 76 80 00            MOV ECX,0x807620
005D1EB7  E8 5F 3A E3 FF            CALL 0x0040591b
005D1EBC  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D1EC2  3C 07                     CMP AL,0x7
005D1EC4  74 08                     JZ 0x005d1ece
005D1EC6  3C 0E                     CMP AL,0xe
005D1EC8  0F 85 4A 01 00 00         JNZ 0x005d2018
LAB_005d1ece:
005D1ECE  8B 83 47 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f47]
005D1ED4  85 C0                     TEST EAX,EAX
005D1ED6  0F 85 17 01 00 00         JNZ 0x005d1ff3
005D1EDC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D1EDF  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005D1EE2  85 C9                     TEST ECX,ECX
005D1EE4  0F 85 09 01 00 00         JNZ 0x005d1ff3
005D1EEA  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D1EEF  84 C0                     TEST AL,AL
005D1EF1  0F 84 7F 01 00 00         JZ 0x005d2076
005D1EF7  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005D1EFD  8B 81 E6 02 00 00         MOV EAX,dword ptr [ECX + 0x2e6]
005D1F03  85 C0                     TEST EAX,EAX
005D1F05  0F 84 6B 01 00 00         JZ 0x005d2076
005D1F0B  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005D1F11  85 FF                     TEST EDI,EDI
005D1F13  74 4D                     JZ 0x005d1f62
005D1F15  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005D1F1B  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005D1F21  52                        PUSH EDX
005D1F22  50                        PUSH EAX
005D1F23  6A 00                     PUSH 0x0
005D1F25  8B CF                     MOV ECX,EDI
005D1F27  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005D1F2E  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005D1F37  E8 42 31 E3 FF            CALL 0x0040507e
005D1F3C  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005D1F42  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005D1F48  51                        PUSH ECX
005D1F49  52                        PUSH EDX
005D1F4A  8B CF                     MOV ECX,EDI
005D1F4C  E8 CD 04 E3 FF            CALL 0x0040241e
005D1F51  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005D1F58  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005d1f62:
005D1F62  B9 08 00 00 00            MOV ECX,0x8
005D1F67  33 C0                     XOR EAX,EAX
005D1F69  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
005D1F6F  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D1F75  F3 AB                     STOSD.REP ES:EDI
005D1F77  B9 08 00 00 00            MOV ECX,0x8
005D1F7C  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
005D1F82  F3 AB                     STOSD.REP ES:EDI
005D1F84  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005D1F87  B9 02 00 00 00            MOV ECX,0x2
005D1F8C  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
005D1F92  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
005D1F98  6A 00                     PUSH 0x0
005D1F9A  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
005D1F9D  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
005D1FA3  6A 00                     PUSH 0x0
005D1FA5  8D 85 54 FF FF FF         LEA EAX,[EBP + 0xffffff54]
005D1FAB  6A 00                     PUSH 0x0
005D1FAD  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
005D1FB3  50                        PUSH EAX
005D1FB4  51                        PUSH ECX
005D1FB5  C7 45 84 4A 69 00 00      MOV dword ptr [EBP + -0x7c],0x694a
005D1FBC  C7 45 88 01 00 00 00      MOV dword ptr [EBP + -0x78],0x1
005D1FC3  C7 85 64 FF FF FF 3F 69 00 00  MOV dword ptr [EBP + 0xffffff64],0x693f
005D1FCD  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005D1FD3  6A 01                     PUSH 0x1
005D1FD5  68 1F 25 00 00            PUSH 0x251f
005D1FDA  E8 C9 1F E3 FF            CALL 0x00403fa8
005D1FDF  85 C0                     TEST EAX,EAX
005D1FE1  0F 84 8F 00 00 00         JZ 0x005d2076
005D1FE7  8B 03                     MOV EAX,dword ptr [EBX]
005D1FE9  8B CB                     MOV ECX,EBX
005D1FEB  FF 50 24                  CALL dword ptr [EAX + 0x24]
005D1FEE  E9 83 00 00 00            JMP 0x005d2076
LAB_005d1ff3:
005D1FF3  BF E4 3D 85 00            MOV EDI,0x853de4
005D1FF8  83 C9 FF                  OR ECX,0xffffffff
005D1FFB  33 C0                     XOR EAX,EAX
005D1FFD  F2 AE                     SCASB.REPNE ES:EDI
005D1FFF  F7 D1                     NOT ECX
005D2001  2B F9                     SUB EDI,ECX
005D2003  8B D1                     MOV EDX,ECX
005D2005  8B F7                     MOV ESI,EDI
005D2007  BF 16 ED 80 00            MOV EDI,0x80ed16
005D200C  C1 E9 02                  SHR ECX,0x2
005D200F  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2011  8B CA                     MOV ECX,EDX
005D2013  83 E1 03                  AND ECX,0x3
005D2016  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005d2018:
005D2018  BF 16 ED 80 00            MOV EDI,0x80ed16
005D201D  83 C9 FF                  OR ECX,0xffffffff
005D2020  33 C0                     XOR EAX,EAX
005D2022  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005D2026  F2 AE                     SCASB.REPNE ES:EDI
005D2028  F7 D1                     NOT ECX
005D202A  2B F9                     SUB EDI,ECX
005D202C  8B C1                     MOV EAX,ECX
005D202E  8B F7                     MOV ESI,EDI
005D2030  BF 1A EE 80 00            MOV EDI,0x80ee1a
005D2035  C1 E9 02                  SHR ECX,0x2
005D2038  F3 A5                     MOVSD.REP ES:EDI,ESI
005D203A  8B C8                     MOV ECX,EAX
005D203C  33 C0                     XOR EAX,EAX
005D203E  83 E1 03                  AND ECX,0x3
005D2041  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2043  BF 80 76 80 00            MOV EDI,0x807680
005D2048  83 C9 FF                  OR ECX,0xffffffff
005D204B  F2 AE                     SCASB.REPNE ES:EDI
005D204D  F7 D1                     NOT ECX
005D204F  49                        DEC ECX
005D2050  8B F9                     MOV EDI,ECX
005D2052  83 C9 FF                  OR ECX,0xffffffff
005D2055  81 C7 16 ED 80 00         ADD EDI,0x80ed16
005D205B  F2 AE                     SCASB.REPNE ES:EDI
005D205D  F7 D1                     NOT ECX
005D205F  2B F9                     SUB EDI,ECX
005D2061  8B D1                     MOV EDX,ECX
005D2063  8B F7                     MOV ESI,EDI
005D2065  BF 1E EF 80 00            MOV EDI,0x80ef1e
005D206A  C1 E9 02                  SHR ECX,0x2
005D206D  F3 A5                     MOVSD.REP ES:EDI,ESI
005D206F  8B CA                     MOV ECX,EDX
005D2071  83 E1 03                  AND ECX,0x3
005D2074  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005d2076:
005D2076  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D2079  84 C0                     TEST AL,AL
005D207B  0F 84 9C 08 00 00         JZ 0x005d291d
005D2081  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D2087  C7 05 9C 87 80 00 00 00 00 00  MOV dword ptr [0x0080879c],0x0
005D2091  A2 A0 87 80 00            MOV [0x008087a0],AL
005D2096  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D209B  84 C0                     TEST AL,AL
005D209D  0F 84 5C 03 00 00         JZ 0x005d23ff
005D20A3  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005D20A9  6A 01                     PUSH 0x1
005D20AB  51                        PUSH ECX
005D20AC  E8 4F 44 0E 00            CALL 0x006b6500
005D20B1  B9 09 00 00 00            MOV ECX,0x9
005D20B6  33 C0                     XOR EAX,EAX
005D20B8  8D 7D 94                  LEA EDI,[EBP + -0x6c]
005D20BB  8B 15 D5 7D 80 00         MOV EDX,dword ptr [0x00807dd5]
005D20C1  F3 AB                     STOSD.REP ES:EDI
005D20C3  66 AB                     STOSW ES:EDI
005D20C5  A0 3B 73 80 00            MOV AL,[0x0080733b]
005D20CA  8A 0D 61 73 80 00         MOV CL,byte ptr [0x00807361]
005D20D0  88 45 A0                  MOV byte ptr [EBP + -0x60],AL
005D20D3  A1 BE 87 80 00            MOV EAX,[0x008087be]
005D20D8  C1 EA 10                  SHR EDX,0x10
005D20DB  89 45 97                  MOV dword ptr [EBP + -0x69],EAX
005D20DE  33 C0                     XOR EAX,EAX
005D20E0  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D20E6  66 89 55 94               MOV word ptr [EBP + -0x6c],DX
005D20EA  8B 15 54 87 80 00         MOV EDX,dword ptr [0x00808754]
005D20F0  88 4D A1                  MOV byte ptr [EBP + -0x5f],CL
005D20F3  8B 0D AB 8A 80 00         MOV ECX,dword ptr [0x00808aab]
005D20F9  89 55 A2                  MOV dword ptr [EBP + -0x5e],EDX
005D20FC  8B 93 21 21 00 00         MOV EDX,dword ptr [EBX + 0x2121]
005D2102  83 C0 FC                  ADD EAX,-0x4
005D2105  83 F8 0F                  CMP EAX,0xf
005D2108  C6 45 96 02               MOV byte ptr [EBP + -0x6a],0x2
005D210C  89 4D AA                  MOV dword ptr [EBP + -0x56],ECX
005D210F  89 55 AE                  MOV dword ptr [EBP + -0x52],EDX
005D2112  77 38                     JA 0x005d214c
005D2114  33 C9                     XOR ECX,ECX
005D2116  8A 88 40 3D 5D 00         MOV CL,byte ptr [EAX + 0x5d3d40]
switchD_005d211c::switchD:
005D211C  FF 24 8D 28 3D 5D 00      JMP dword ptr [ECX*0x4 + 0x5d3d28]
switchD_005d211c::caseD_4:
005D2123  C6 45 9F 02               MOV byte ptr [EBP + -0x61],0x2
005D2127  EB 23                     JMP 0x005d214c
switchD_005d211c::caseD_5:
005D2129  C6 45 9F 03               MOV byte ptr [EBP + -0x61],0x3
005D212D  EB 1D                     JMP 0x005d214c
switchD_005d211c::caseD_7:
005D212F  C6 45 9F 01               MOV byte ptr [EBP + -0x61],0x1
005D2133  EB 17                     JMP 0x005d214c
switchD_005d211c::caseD_c:
005D2135  C6 45 9F 05               MOV byte ptr [EBP + -0x61],0x5
005D2139  EB 11                     JMP 0x005d214c
switchD_005d211c::caseD_13:
005D213B  A0 00 34 80 00            MOV AL,[0x00803400]
005D2140  3C 14                     CMP AL,0x14
005D2142  72 08                     JC 0x005d214c
005D2144  3C 15                     CMP AL,0x15
005D2146  77 04                     JA 0x005d214c
005D2148  C6 45 9F 04               MOV byte ptr [EBP + -0x61],0x4
switchD_005d211c::caseD_6:
005D214C  A1 64 17 81 00            MOV EAX,[0x00811764]
005D2151  6A FF                     PUSH -0x1
005D2153  6A 01                     PUSH 0x1
005D2155  8D 55 94                  LEA EDX,[EBP + -0x6c]
005D2158  6A 26                     PUSH 0x26
005D215A  52                        PUSH EDX
005D215B  6A 2D                     PUSH 0x2d
005D215D  6A 00                     PUSH 0x0
005D215F  50                        PUSH EAX
005D2160  E8 FB 31 14 00            CALL 0x00715360
005D2165  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005D216B  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005D2171  83 C4 1C                  ADD ESP,0x1c
005D2174  51                        PUSH ECX
005D2175  52                        PUSH EDX
005D2176  E8 85 43 0E 00            CALL 0x006b6500
005D217B  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005D217E  6A 0A                     PUSH 0xa
005D2180  6A 04                     PUSH 0x4
005D2182  6A 28                     PUSH 0x28
005D2184  6A 00                     PUSH 0x0
005D2186  89 83 33 22 00 00         MOV dword ptr [EBX + 0x2233],EAX
005D218C  C6 83 2E 22 00 00 01      MOV byte ptr [EBX + 0x222e],0x1
005D2193  E8 F8 C0 0D 00            CALL 0x006ae290
005D2198  89 83 2F 22 00 00         MOV dword ptr [EBX + 0x222f],EAX
005D219E  A1 FE C4 80 00            MOV EAX,[0x0080c4fe]
005D21A3  85 C0                     TEST EAX,EAX
005D21A5  74 06                     JZ 0x005d21ad
005D21A7  50                        PUSH EAX
005D21A8  E8 63 BF 0D 00            CALL 0x006ae110
LAB_005d21ad:
005D21AD  6A 0A                     PUSH 0xa
005D21AF  6A 04                     PUSH 0x4
005D21B1  6A 28                     PUSH 0x28
005D21B3  6A 00                     PUSH 0x0
005D21B5  E8 D6 C0 0D 00            CALL 0x006ae290
005D21BA  A3 FE C4 80 00            MOV [0x0080c4fe],EAX
005D21BF  B9 A8 03 00 00            MOV ECX,0x3a8
005D21C4  33 C0                     XOR EAX,EAX
005D21C6  BF B0 8A 80 00            MOV EDI,0x808ab0
005D21CB  F3 AB                     STOSD.REP ES:EDI
005D21CD  A2 AF 8A 80 00            MOV [0x00808aaf],AL
005D21D2  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D21D8  33 D2                     XOR EDX,EDX
005D21DA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D21DD  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005D21E0  85 C9                     TEST ECX,ECX
005D21E2  0F 8E C7 01 00 00         JLE 0x005d23af
005D21E8  3B D1                     CMP EDX,ECX
LAB_005d21ea:
005D21EA  73 0D                     JNC 0x005d21f9
005D21EC  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005D21EF  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D21F2  0F AF FA                  IMUL EDI,EDX
005D21F5  03 F9                     ADD EDI,ECX
005D21F7  EB 02                     JMP 0x005d21fb
LAB_005d21f9:
005D21F9  33 FF                     XOR EDI,EDI
LAB_005d21fb:
005D21FB  85 FF                     TEST EDI,EDI
005D21FD  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005D2200  0F 84 91 01 00 00         JZ 0x005d2397
005D2206  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D2209  3C 02                     CMP AL,0x2
005D220B  74 04                     JZ 0x005d2211
005D220D  3C 03                     CMP AL,0x3
005D220F  75 29                     JNZ 0x005d223a
LAB_005d2211:
005D2211  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D2217  8B 47 06                  MOV EAX,dword ptr [EDI + 0x6]
005D221A  8D 77 06                  LEA ESI,[EDI + 0x6]
005D221D  3B C8                     CMP ECX,EAX
005D221F  74 19                     JZ 0x005d223a
005D2221  8B 93 2F 22 00 00         MOV EDX,dword ptr [EBX + 0x222f]
005D2227  56                        PUSH ESI
005D2228  52                        PUSH EDX
005D2229  E8 92 BF 0D 00            CALL 0x006ae1c0
005D222E  A1 FE C4 80 00            MOV EAX,[0x0080c4fe]
005D2233  56                        PUSH ESI
005D2234  50                        PUSH EAX
005D2235  E8 86 BF 0D 00            CALL 0x006ae1c0
LAB_005d223a:
005D223A  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D223D  3C 01                     CMP AL,0x1
005D223F  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005D2242  0F 84 4F 01 00 00         JZ 0x005d2397
005D2248  84 C0                     TEST AL,AL
005D224A  0F 84 47 01 00 00         JZ 0x005d2397
005D2250  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D2253  83 C9 FF                  OR ECX,0xffffffff
005D2256  33 C0                     XOR EAX,EAX
005D2258  8D B5 74 FE FF FF         LEA ESI,[EBP + 0xfffffe74]
005D225E  8D 7A 0A                  LEA EDI,[EDX + 0xa]
005D2261  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D2264  F2 AE                     SCASB.REPNE ES:EDI
005D2266  F7 D1                     NOT ECX
005D2268  2B F9                     SUB EDI,ECX
005D226A  8B C1                     MOV EAX,ECX
005D226C  8B F7                     MOV ESI,EDI
005D226E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D2271  C1 E9 02                  SHR ECX,0x2
005D2274  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2276  8B C8                     MOV ECX,EAX
005D2278  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D227B  83 E1 03                  AND ECX,0x3
005D227E  3C 04                     CMP AL,0x4
005D2280  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2282  74 20                     JZ 0x005d22a4
005D2284  8D 7A 0A                  LEA EDI,[EDX + 0xa]
005D2287  83 C9 FF                  OR ECX,0xffffffff
005D228A  33 C0                     XOR EAX,EAX
005D228C  8D B5 74 FE FF FF         LEA ESI,[EBP + 0xfffffe74]
005D2292  F2 AE                     SCASB.REPNE ES:EDI
005D2294  F7 D1                     NOT ECX
005D2296  2B F9                     SUB EDI,ECX
005D2298  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D229B  8B F7                     MOV ESI,EDI
005D229D  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D22A0  8B C1                     MOV EAX,ECX
005D22A2  EB 39                     JMP 0x005d22dd
LAB_005d22a4:
005D22A4  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005D22A7  33 C0                     XOR EAX,EAX
005D22A9  8A 42 05                  MOV AL,byte ptr [EDX + 0x5]
005D22AC  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
005D22AF  73 0B                     JNC 0x005d22bc
005D22B1  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005D22B4  0F AF F8                  IMUL EDI,EAX
005D22B7  03 7E 1C                  ADD EDI,dword ptr [ESI + 0x1c]
005D22BA  EB 02                     JMP 0x005d22be
LAB_005d22bc:
005D22BC  33 FF                     XOR EDI,EDI
LAB_005d22be:
005D22BE  85 FF                     TEST EDI,EDI
005D22C0  74 27                     JZ 0x005d22e9
005D22C2  83 C9 FF                  OR ECX,0xffffffff
005D22C5  33 C0                     XOR EAX,EAX
005D22C7  F2 AE                     SCASB.REPNE ES:EDI
005D22C9  F7 D1                     NOT ECX
005D22CB  8D B5 74 FE FF FF         LEA ESI,[EBP + 0xfffffe74]
005D22D1  2B F9                     SUB EDI,ECX
005D22D3  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D22D6  8B F7                     MOV ESI,EDI
005D22D8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D22DB  8B C1                     MOV EAX,ECX
LAB_005d22dd:
005D22DD  C1 E9 02                  SHR ECX,0x2
005D22E0  F3 A5                     MOVSD.REP ES:EDI,ESI
005D22E2  8B C8                     MOV ECX,EAX
005D22E4  83 E1 03                  AND ECX,0x3
005D22E7  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005d22e9:
005D22E9  8B 4A 06                  MOV ECX,dword ptr [EDX + 0x6]
005D22EC  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D22EF  89 8D B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],ECX
005D22F5  8A 0A                     MOV CL,byte ptr [EDX]
005D22F7  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005D22FA  88 85 B8 FE FF FF         MOV byte ptr [EBP + 0xfffffeb8],AL
005D2300  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D2303  88 8D B9 FE FF FF         MOV byte ptr [EBP + 0xfffffeb9],CL
005D2309  3C 02                     CMP AL,0x2
005D230B  C6 85 BB FE FF FF 01      MOV byte ptr [EBP + 0xfffffebb],0x1
005D2312  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
005D2318  75 09                     JNZ 0x005d2323
005D231A  C6 85 BA FE FF FF 01      MOV byte ptr [EBP + 0xfffffeba],0x1
005D2321  EB 0F                     JMP 0x005d2332
LAB_005d2323:
005D2323  3C 03                     CMP AL,0x3
005D2325  0F 95 C0                  SETNZ AL
005D2328  48                        DEC EAX
005D2329  83 E0 02                  AND EAX,0x2
005D232C  88 85 BA FE FF FF         MOV byte ptr [EBP + 0xfffffeba],AL
LAB_005d2332:
005D2332  33 C0                     XOR EAX,EAX
005D2334  B9 27 00 00 00            MOV ECX,0x27
005D2339  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D233E  8D B5 74 FE FF FF         LEA ESI,[EBP + 0xfffffe74]
005D2344  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005D2347  C1 E2 03                  SHL EDX,0x3
005D234A  2B D0                     SUB EDX,EAX
005D234C  8A 85 B8 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffeb8]
005D2352  3C 08                     CMP AL,0x8
005D2354  8D 3C 95 B0 8A 80 00      LEA EDI,[EDX*0x4 + 0x808ab0]
005D235B  F3 A5                     MOVSD.REP ES:EDI,ESI
005D235D  73 32                     JNC 0x005d2391
005D235F  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
005D2365  33 C9                     XOR ECX,ECX
005D2367  25 FF 00 00 00            AND EAX,0xff
005D236C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D236F  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
LAB_005d2372:
005D2372  8A 84 0E 00 88 80 00      MOV AL,byte ptr [ESI + ECX*0x1 + 0x808800]
005D2379  84 C0                     TEST AL,AL
005D237B  74 08                     JZ 0x005d2385
005D237D  41                        INC ECX
005D237E  83 F9 18                  CMP ECX,0x18
005D2381  7C EF                     JL 0x005d2372
005D2383  EB 0C                     JMP 0x005d2391
LAB_005d2385:
005D2385  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D238A  88 84 0E 00 88 80 00      MOV byte ptr [ESI + ECX*0x1 + 0x808800],AL
LAB_005d2391:
005D2391  FE 05 AF 8A 80 00         INC byte ptr [0x00808aaf]
LAB_005d2397:
005D2397  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D239D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D23A0  42                        INC EDX
005D23A1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D23A4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005D23A7  3B D1                     CMP EDX,ECX
005D23A9  0F 8C 3B FE FF FF         JL 0x005d21ea
LAB_005d23af:
005D23AF  8B 8B 2F 22 00 00         MOV ECX,dword ptr [EBX + 0x222f]
005D23B5  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D23B8  85 C0                     TEST EAX,EAX
005D23BA  0F 85 14 02 00 00         JNZ 0x005d25d4
005D23C0  8B CB                     MOV ECX,EBX
005D23C2  C6 83 2E 22 00 00 00      MOV byte ptr [EBX + 0x222e],0x0
005D23C9  E8 50 23 E3 FF            CALL 0x0040471e
005D23CE  A0 A0 67 80 00            MOV AL,[0x008067a0]
005D23D3  84 C0                     TEST AL,AL
005D23D5  0F 84 F9 01 00 00         JZ 0x005d25d4
005D23DB  8D 93 5F 1A 00 00         LEA EDX,[EBX + 0x1a5f]
005D23E1  B9 90 2A 80 00            MOV ECX,0x802a90
005D23E6  52                        PUSH EDX
005D23E7  6A 06                     PUSH 0x6
005D23E9  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
005D23EF  B9 90 2A 80 00            MOV ECX,0x802a90
005D23F4  FF 15 78 C0 85 00         CALL dword ptr [0x0085c078]
005D23FA  E9 D5 01 00 00            JMP 0x005d25d4
LAB_005d23ff:
005D23FF  B9 A8 03 00 00            MOV ECX,0x3a8
005D2404  33 C0                     XOR EAX,EAX
005D2406  BF B0 8A 80 00            MOV EDI,0x808ab0
005D240B  F3 AB                     STOSD.REP ES:EDI
005D240D  A2 AF 8A 80 00            MOV [0x00808aaf],AL
005D2412  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D2418  33 FF                     XOR EDI,EDI
005D241A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D241D  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005D2420  85 C9                     TEST ECX,ECX
005D2422  0F 8E 6A 01 00 00         JLE 0x005d2592
005D2428  3B F9                     CMP EDI,ECX
LAB_005d242a:
005D242A  73 0D                     JNC 0x005d2439
005D242C  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005D242F  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D2432  0F AF D7                  IMUL EDX,EDI
005D2435  03 D1                     ADD EDX,ECX
005D2437  EB 02                     JMP 0x005d243b
LAB_005d2439:
005D2439  33 D2                     XOR EDX,EDX
LAB_005d243b:
005D243B  85 D2                     TEST EDX,EDX
005D243D  0F 84 3A 01 00 00         JZ 0x005d257d
005D2443  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
005D2446  80 F9 01                  CMP CL,0x1
005D2449  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
005D244C  0F 84 2B 01 00 00         JZ 0x005d257d
005D2452  84 C9                     TEST CL,CL
005D2454  0F 84 23 01 00 00         JZ 0x005d257d
005D245A  80 F9 04                  CMP CL,0x4
005D245D  74 20                     JZ 0x005d247f
005D245F  8D 7A 0A                  LEA EDI,[EDX + 0xa]
005D2462  83 C9 FF                  OR ECX,0xffffffff
005D2465  33 C0                     XOR EAX,EAX
005D2467  8D B5 D8 FD FF FF         LEA ESI,[EBP + 0xfffffdd8]
005D246D  F2 AE                     SCASB.REPNE ES:EDI
005D246F  F7 D1                     NOT ECX
005D2471  2B F9                     SUB EDI,ECX
005D2473  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D2476  8B F7                     MOV ESI,EDI
005D2478  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D247B  8B C1                     MOV EAX,ECX
005D247D  EB 39                     JMP 0x005d24b8
LAB_005d247f:
005D247F  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005D2482  33 C0                     XOR EAX,EAX
005D2484  8A 42 05                  MOV AL,byte ptr [EDX + 0x5]
005D2487  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
005D248A  73 0B                     JNC 0x005d2497
005D248C  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005D248F  0F AF F8                  IMUL EDI,EAX
005D2492  03 7E 1C                  ADD EDI,dword ptr [ESI + 0x1c]
005D2495  EB 02                     JMP 0x005d2499
LAB_005d2497:
005D2497  33 FF                     XOR EDI,EDI
LAB_005d2499:
005D2499  85 FF                     TEST EDI,EDI
005D249B  74 2A                     JZ 0x005d24c7
005D249D  83 C9 FF                  OR ECX,0xffffffff
005D24A0  33 C0                     XOR EAX,EAX
005D24A2  F2 AE                     SCASB.REPNE ES:EDI
005D24A4  F7 D1                     NOT ECX
005D24A6  8D B5 D8 FD FF FF         LEA ESI,[EBP + 0xfffffdd8]
005D24AC  2B F9                     SUB EDI,ECX
005D24AE  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D24B1  8B F7                     MOV ESI,EDI
005D24B3  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D24B6  8B C1                     MOV EAX,ECX
LAB_005d24b8:
005D24B8  C1 E9 02                  SHR ECX,0x2
005D24BB  F3 A5                     MOVSD.REP ES:EDI,ESI
005D24BD  8B C8                     MOV ECX,EAX
005D24BF  83 E1 03                  AND ECX,0x3
005D24C2  F3 A4                     MOVSB.REP ES:EDI,ESI
005D24C4  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
LAB_005d24c7:
005D24C7  8B 42 06                  MOV EAX,dword ptr [EDX + 0x6]
005D24CA  80 F9 02                  CMP CL,0x2
005D24CD  89 85 18 FE FF FF         MOV dword ptr [EBP + 0xfffffe18],EAX
005D24D3  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D24D6  8A 12                     MOV DL,byte ptr [EDX]
005D24D8  88 85 1C FE FF FF         MOV byte ptr [EBP + 0xfffffe1c],AL
005D24DE  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005D24E1  88 95 1D FE FF FF         MOV byte ptr [EBP + 0xfffffe1d],DL
005D24E7  C6 85 1F FE FF FF 01      MOV byte ptr [EBP + 0xfffffe1f],0x1
005D24EE  89 85 20 FE FF FF         MOV dword ptr [EBP + 0xfffffe20],EAX
005D24F4  75 09                     JNZ 0x005d24ff
005D24F6  C6 85 1E FE FF FF 01      MOV byte ptr [EBP + 0xfffffe1e],0x1
005D24FD  EB 10                     JMP 0x005d250f
LAB_005d24ff:
005D24FF  80 F9 03                  CMP CL,0x3
005D2502  0F 95 C1                  SETNZ CL
005D2505  49                        DEC ECX
005D2506  83 E1 02                  AND ECX,0x2
005D2509  88 8D 1E FE FF FF         MOV byte ptr [EBP + 0xfffffe1e],CL
LAB_005d250f:
005D250F  33 C0                     XOR EAX,EAX
005D2511  B9 27 00 00 00            MOV ECX,0x27
005D2516  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D251B  8D B5 D8 FD FF FF         LEA ESI,[EBP + 0xfffffdd8]
005D2521  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005D2524  C1 E2 03                  SHL EDX,0x3
005D2527  2B D0                     SUB EDX,EAX
005D2529  8A 85 1C FE FF FF         MOV AL,byte ptr [EBP + 0xfffffe1c]
005D252F  3C 08                     CMP AL,0x8
005D2531  8D 3C 95 B0 8A 80 00      LEA EDI,[EDX*0x4 + 0x808ab0]
005D2538  F3 A5                     MOVSD.REP ES:EDI,ESI
005D253A  73 32                     JNC 0x005d256e
005D253C  8B 85 1C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe1c]
005D2542  33 C9                     XOR ECX,ECX
005D2544  25 FF 00 00 00            AND EAX,0xff
005D2549  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D254C  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
LAB_005d254f:
005D254F  8A 84 0E 00 88 80 00      MOV AL,byte ptr [ESI + ECX*0x1 + 0x808800]
005D2556  84 C0                     TEST AL,AL
005D2558  74 08                     JZ 0x005d2562
005D255A  41                        INC ECX
005D255B  83 F9 18                  CMP ECX,0x18
005D255E  7C EF                     JL 0x005d254f
005D2560  EB 0C                     JMP 0x005d256e
LAB_005d2562:
005D2562  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D2567  88 84 0E 00 88 80 00      MOV byte ptr [ESI + ECX*0x1 + 0x808800],AL
LAB_005d256e:
005D256E  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D2573  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005D2576  FE C0                     INC AL
005D2578  A2 AF 8A 80 00            MOV [0x00808aaf],AL
LAB_005d257d:
005D257D  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D2583  47                        INC EDI
005D2584  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005D2587  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D258A  3B F9                     CMP EDI,ECX
005D258C  0F 8C 98 FE FF FF         JL 0x005d242a
LAB_005d2592:
005D2592  8B CB                     MOV ECX,EBX
005D2594  E8 85 21 E3 FF            CALL 0x0040471e
005D2599  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005D259F  6A 01                     PUSH 0x1
005D25A1  51                        PUSH ECX
005D25A2  E8 59 3F 0E 00            CALL 0x006b6500
005D25A7  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005D25AD  6A FF                     PUSH -0x1
005D25AF  6A 00                     PUSH 0x0
005D25B1  6A 00                     PUSH 0x0
005D25B3  6A 00                     PUSH 0x0
005D25B5  6A 2E                     PUSH 0x2e
005D25B7  6A 01                     PUSH 0x1
005D25B9  52                        PUSH EDX
005D25BA  E8 A1 2D 14 00            CALL 0x00715360
005D25BF  A1 3C 73 80 00            MOV EAX,[0x0080733c]
005D25C4  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005D25CA  83 C4 1C                  ADD ESP,0x1c
005D25CD  50                        PUSH EAX
005D25CE  51                        PUSH ECX
005D25CF  E8 2C 3F 0E 00            CALL 0x006b6500
LAB_005d25d4:
005D25D4  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D25DA  3C 0C                     CMP AL,0xc
005D25DC  74 08                     JZ 0x005d25e6
005D25DE  3C 10                     CMP AL,0x10
005D25E0  0F 85 37 03 00 00         JNZ 0x005d291d
LAB_005d25e6:
005D25E6  B8 01 00 00 00            MOV EAX,0x1
005D25EB  A3 9C 87 80 00            MOV [0x0080879c],EAX
005D25F0  A3 2E F3 80 00            MOV [0x0080f32e],EAX
005D25F5  E9 23 03 00 00            JMP 0x005d291d
LAB_005d25fa:
005D25FA  3D A2 C0 00 00            CMP EAX,0xc0a2
005D25FF  0F 85 18 03 00 00         JNZ 0x005d291d
005D2605  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005D260B  E8 E4 FF E2 FF            CALL 0x004025f4
005D2610  85 C0                     TEST EAX,EAX
005D2612  0F 85 C2 02 00 00         JNZ 0x005d28da
005D2618  A0 A0 67 80 00            MOV AL,[0x008067a0]
005D261D  84 C0                     TEST AL,AL
005D261F  74 67                     JZ 0x005d2688
005D2621  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D2627  8B 82 86 06 00 00         MOV EAX,dword ptr [EDX + 0x686]
005D262D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D2630  85 C9                     TEST ECX,ECX
005D2632  7E 07                     JLE 0x005d263b
005D2634  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005D2637  8B 00                     MOV EAX,dword ptr [EAX]
005D2639  EB 02                     JMP 0x005d263d
LAB_005d263b:
005D263B  33 C0                     XOR EAX,EAX
LAB_005d263d:
005D263D  50                        PUSH EAX
005D263E  B9 20 76 80 00            MOV ECX,0x807620
005D2643  E8 D5 F4 E2 FF            CALL 0x00401b1d
005D2648  85 C0                     TEST EAX,EAX
005D264A  74 3C                     JZ 0x005d2688
005D264C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005D2652  8B 81 86 06 00 00         MOV EAX,dword ptr [ECX + 0x686]
005D2658  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D265B  85 C9                     TEST ECX,ECX
005D265D  7E 16                     JLE 0x005d2675
005D265F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005D2662  B9 90 2A 80 00            MOV ECX,0x802a90
005D2667  8B 02                     MOV EAX,dword ptr [EDX]
005D2669  50                        PUSH EAX
005D266A  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005D2670  E9 65 02 00 00            JMP 0x005d28da
LAB_005d2675:
005D2675  33 C0                     XOR EAX,EAX
005D2677  B9 90 2A 80 00            MOV ECX,0x802a90
005D267C  50                        PUSH EAX
005D267D  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005D2683  E9 52 02 00 00            JMP 0x005d28da
LAB_005d2688:
005D2688  B9 14 01 00 00            MOV ECX,0x114
005D268D  33 C0                     XOR EAX,EAX
005D268F  8D BD 84 F9 FF FF         LEA EDI,[EBP + 0xfffff984]
005D2695  F3 AB                     STOSD.REP ES:EDI
005D2697  AA                        STOSB ES:EDI
005D2698  A0 A0 67 80 00            MOV AL,[0x008067a0]
005D269D  BF 1D 7E 80 00            MOV EDI,0x807e1d
005D26A2  84 C0                     TEST AL,AL
005D26A4  75 05                     JNZ 0x005d26ab
005D26A6  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005d26ab:
005D26AB  83 C9 FF                  OR ECX,0xffffffff
005D26AE  33 C0                     XOR EAX,EAX
005D26B0  F2 AE                     SCASB.REPNE ES:EDI
005D26B2  F7 D1                     NOT ECX
005D26B4  2B F9                     SUB EDI,ECX
005D26B6  8D 95 84 F9 FF FF         LEA EDX,[EBP + 0xfffff984]
005D26BC  8B C1                     MOV EAX,ECX
005D26BE  8B F7                     MOV ESI,EDI
005D26C0  8B FA                     MOV EDI,EDX
005D26C2  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D26C8  C1 E9 02                  SHR ECX,0x2
005D26CB  F3 A5                     MOVSD.REP ES:EDI,ESI
005D26CD  8B C8                     MOV ECX,EAX
005D26CF  83 E1 03                  AND ECX,0x3
005D26D2  F3 A4                     MOVSB.REP ES:EDI,ESI
005D26D4  8B 82 86 06 00 00         MOV EAX,dword ptr [EDX + 0x686]
005D26DA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D26DD  85 C9                     TEST ECX,ECX
005D26DF  7E 07                     JLE 0x005d26e8
005D26E1  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005D26E4  8B 39                     MOV EDI,dword ptr [ECX]
005D26E6  EB 02                     JMP 0x005d26ea
LAB_005d26e8:
005D26E8  33 FF                     XOR EDI,EDI
LAB_005d26ea:
005D26EA  83 C9 FF                  OR ECX,0xffffffff
005D26ED  33 C0                     XOR EAX,EAX
005D26EF  F2 AE                     SCASB.REPNE ES:EDI
005D26F1  F7 D1                     NOT ECX
005D26F3  8D B5 C4 F9 FF FF         LEA ESI,[EBP + 0xfffff9c4]
005D26F9  2B F9                     SUB EDI,ECX
005D26FB  8B C1                     MOV EAX,ECX
005D26FD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D2700  8B F7                     MOV ESI,EDI
005D2702  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005D2705  C1 E9 02                  SHR ECX,0x2
005D2708  F3 A5                     MOVSD.REP ES:EDI,ESI
005D270A  8B C8                     MOV ECX,EAX
005D270C  83 E1 03                  AND ECX,0x3
005D270F  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2711  8D 8D 84 F9 FF FF         LEA ECX,[EBP + 0xfffff984]
005D2717  51                        PUSH ECX
005D2718  8B CA                     MOV ECX,EDX
005D271A  E8 9D 04 E3 FF            CALL 0x00402bbc
005D271F  8A 83 08 22 00 00         MOV AL,byte ptr [EBX + 0x2208]
005D2725  84 C0                     TEST AL,AL
005D2727  74 27                     JZ 0x005d2750
005D2729  A1 64 17 81 00            MOV EAX,[0x00811764]
005D272E  6A FF                     PUSH -0x1
005D2730  6A 01                     PUSH 0x1
005D2732  8D 95 84 F9 FF FF         LEA EDX,[EBP + 0xfffff984]
005D2738  68 51 04 00 00            PUSH 0x451
005D273D  52                        PUSH EDX
005D273E  6A 1B                     PUSH 0x1b
005D2740  6A 00                     PUSH 0x0
005D2742  50                        PUSH EAX
005D2743  E8 18 2C 14 00            CALL 0x00715360
005D2748  83 C4 1C                  ADD ESP,0x1c
005D274B  E9 8A 01 00 00            JMP 0x005d28da
LAB_005d2750:
005D2750  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005D2756  85 F6                     TEST ESI,ESI
005D2758  0F 84 7C 01 00 00         JZ 0x005d28da
005D275E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005D2761  33 D2                     XOR EDX,EDX
005D2763  85 FF                     TEST EDI,EDI
005D2765  76 3C                     JBE 0x005d27a3
005D2767  3B D7                     CMP EDX,EDI
005D2769  73 0D                     JNC 0x005d2778
LAB_005d276b:
005D276B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D276E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005D2771  0F AF C2                  IMUL EAX,EDX
005D2774  03 C1                     ADD EAX,ECX
005D2776  EB 02                     JMP 0x005d277a
LAB_005d2778:
005D2778  33 C0                     XOR EAX,EAX
LAB_005d277a:
005D277A  85 C0                     TEST EAX,EAX
005D277C  74 18                     JZ 0x005d2796
005D277E  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D2781  80 F9 02                  CMP CL,0x2
005D2784  74 05                     JZ 0x005d278b
005D2786  80 F9 03                  CMP CL,0x3
005D2789  75 0B                     JNZ 0x005d2796
LAB_005d278b:
005D278B  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D2791  39 48 06                  CMP dword ptr [EAX + 0x6],ECX
005D2794  74 07                     JZ 0x005d279d
LAB_005d2796:
005D2796  42                        INC EDX
005D2797  3B D7                     CMP EDX,EDI
005D2799  72 D0                     JC 0x005d276b
005D279B  EB 06                     JMP 0x005d27a3
LAB_005d279d:
005D279D  8A 50 4A                  MOV DL,byte ptr [EAX + 0x4a]
005D27A0  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
LAB_005d27a3:
005D27A3  33 D2                     XOR EDX,EDX
005D27A5  85 FF                     TEST EDI,EDI
005D27A7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005D27AA  0F 86 2A 01 00 00         JBE 0x005d28da
005D27B0  3B D7                     CMP EDX,EDI
005D27B2  73 0D                     JNC 0x005d27c1
LAB_005d27b4:
005D27B4  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D27B7  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
005D27BA  0F AF C2                  IMUL EAX,EDX
005D27BD  03 C1                     ADD EAX,ECX
005D27BF  EB 02                     JMP 0x005d27c3
LAB_005d27c1:
005D27C1  33 C0                     XOR EAX,EAX
LAB_005d27c3:
005D27C3  85 C0                     TEST EAX,EAX
005D27C5  0F 84 FA 00 00 00         JZ 0x005d28c5
005D27CB  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D27CE  80 F9 02                  CMP CL,0x2
005D27D1  74 09                     JZ 0x005d27dc
005D27D3  80 F9 03                  CMP CL,0x3
005D27D6  0F 85 E9 00 00 00         JNZ 0x005d28c5
LAB_005d27dc:
005D27DC  8B 78 06                  MOV EDI,dword ptr [EAX + 0x6]
005D27DF  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D27E5  3B F9                     CMP EDI,ECX
005D27E7  0F 84 D8 00 00 00         JZ 0x005d28c5
005D27ED  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
005D27F3  84 C9                     TEST CL,CL
005D27F5  74 13                     JZ 0x005d280a
005D27F7  8A 40 4A                  MOV AL,byte ptr [EAX + 0x4a]
005D27FA  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
005D27FD  3A C1                     CMP AL,CL
005D27FF  0F 85 C0 00 00 00         JNZ 0x005d28c5
005D2805  E9 96 00 00 00            JMP 0x005d28a0
LAB_005d280a:
005D280A  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005D2810  80 F9 FF                  CMP CL,0xff
005D2813  0F 84 AC 00 00 00         JZ 0x005d28c5
005D2819  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005D281C  3C FF                     CMP AL,0xff
005D281E  0F 84 A1 00 00 00         JZ 0x005d28c5
005D2824  3A C8                     CMP CL,AL
005D2826  0F 84 99 00 00 00         JZ 0x005d28c5
005D282C  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005D282F  74 68                     JZ 0x005d2899
005D2831  33 C0                     XOR EAX,EAX
005D2833  8A C1                     MOV AL,CL
005D2835  8B F0                     MOV ESI,EAX
005D2837  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005D283A  25 FF 00 00 00            AND EAX,0xff
005D283F  8A 8C F0 4F 8A 80 00      MOV CL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
005D2846  84 C9                     TEST CL,CL
005D2848  75 10                     JNZ 0x005d285a
005D284A  38 8C C6 4F 8A 80 00      CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],CL
005D2851  75 07                     JNZ 0x005d285a
005D2853  B8 FE FF FF FF            MOV EAX,0xfffffffe
005D2858  EB 41                     JMP 0x005d289b
LAB_005d285a:
005D285A  80 F9 01                  CMP CL,0x1
005D285D  75 0F                     JNZ 0x005d286e
005D285F  80 BC C6 4F 8A 80 00 00   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x0
005D2867  75 05                     JNZ 0x005d286e
005D2869  83 C8 FF                  OR EAX,0xffffffff
005D286C  EB 2D                     JMP 0x005d289b
LAB_005d286e:
005D286E  84 C9                     TEST CL,CL
005D2870  75 11                     JNZ 0x005d2883
005D2872  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005D287A  75 07                     JNZ 0x005d2883
005D287C  B8 01 00 00 00            MOV EAX,0x1
005D2881  EB 18                     JMP 0x005d289b
LAB_005d2883:
005D2883  80 F9 01                  CMP CL,0x1
005D2886  75 11                     JNZ 0x005d2899
005D2888  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005D2890  75 07                     JNZ 0x005d2899
005D2892  B8 02 00 00 00            MOV EAX,0x2
005D2897  EB 02                     JMP 0x005d289b
LAB_005d2899:
005D2899  33 C0                     XOR EAX,EAX
LAB_005d289b:
005D289B  83 F8 02                  CMP EAX,0x2
005D289E  75 25                     JNZ 0x005d28c5
LAB_005d28a0:
005D28A0  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005D28A6  6A FF                     PUSH -0x1
005D28A8  6A 01                     PUSH 0x1
005D28AA  8D 8D 84 F9 FF FF         LEA ECX,[EBP + 0xfffff984]
005D28B0  68 51 04 00 00            PUSH 0x451
005D28B5  51                        PUSH ECX
005D28B6  6A 1B                     PUSH 0x1b
005D28B8  57                        PUSH EDI
005D28B9  52                        PUSH EDX
005D28BA  E8 A1 2A 14 00            CALL 0x00715360
005D28BF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D28C2  83 C4 1C                  ADD ESP,0x1c
LAB_005d28c5:
005D28C5  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005D28CB  42                        INC EDX
005D28CC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005D28CF  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005D28D2  3B D7                     CMP EDX,EDI
005D28D4  0F 82 DA FE FF FF         JC 0x005d27b4
LAB_005d28da:
005D28DA  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005D28E0  68 A0 16 80 00            PUSH 0x8016a0
005D28E5  6A 00                     PUSH 0x0
005D28E7  8B 88 86 06 00 00         MOV ECX,dword ptr [EAX + 0x686]
005D28ED  51                        PUSH ECX
005D28EE  E8 2D 37 0E 00            CALL 0x006b6020
005D28F3  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005D28F9  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005D2900  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005D2903  8B 90 86 06 00 00         MOV EDX,dword ptr [EAX + 0x686]
005D2909  51                        PUSH ECX
005D290A  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005D290D  8B 90 4C 05 00 00         MOV EDX,dword ptr [EAX + 0x54c]
005D2913  52                        PUSH EDX
005D2914  6A 02                     PUSH 0x2
005D2916  8B CB                     MOV ECX,EBX
005D2918  E8 63 37 11 00            CALL 0x006e6080
switchD_005d1877::caseD_6507:
005D291D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D2920  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
005D2923  3D FF 69 00 00            CMP EAX,0x69ff
005D2928  0F 82 C7 0B 00 00         JC 0x005d34f5
005D292E  3D 7F 6A 00 00            CMP EAX,0x6a7f
005D2933  0F 83 BC 0B 00 00         JNC 0x005d34f5
005D2939  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005D293D  0F 85 B2 0B 00 00         JNZ 0x005d34f5
005D2943  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005D2949  8D 88 01 96 FF FF         LEA ECX,[EAX + 0xffff9601]
005D294F  C1 E9 03                  SHR ECX,0x3
005D2952  40                        INC EAX
005D2953  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005D2956  83 E0 07                  AND EAX,0x7
005D2959  85 D2                     TEST EDX,EDX
005D295B  74 1A                     JZ 0x005d2977
005D295D  8B B3 88 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f88]
005D2963  03 CE                     ADD ECX,ESI
005D2965  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005D2968  3B CE                     CMP ECX,ESI
005D296A  73 0B                     JNC 0x005d2977
005D296C  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005D296F  0F AF F1                  IMUL ESI,ECX
005D2972  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
005D2975  EB 02                     JMP 0x005d2979
LAB_005d2977:
005D2977  33 F6                     XOR ESI,ESI
LAB_005d2979:
005D2979  85 F6                     TEST ESI,ESI
005D297B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005D297E  0F 84 71 0B 00 00         JZ 0x005d34f5
005D2984  83 F8 07                  CMP EAX,0x7
005D2987  0F 87 68 0B 00 00         JA 0x005d34f5
switchD_005d298d::switchD:
005D298D  FF 24 85 50 3D 5D 00      JMP dword ptr [EAX*0x4 + 0x5d3d50]
switchD_005d298d::caseD_0:
005D2994  80 7E 04 02               CMP byte ptr [ESI + 0x4],0x2
005D2998  0F 85 57 0B 00 00         JNZ 0x005d34f5
005D299E  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D29A4  8B 46 06                  MOV EAX,dword ptr [ESI + 0x6]
005D29A7  3B C1                     CMP EAX,ECX
005D29A9  0F 85 46 0B 00 00         JNZ 0x005d34f5
005D29AF  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D29B4  84 C0                     TEST AL,AL
005D29B6  74 21                     JZ 0x005d29d9
005D29B8  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D29BE  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
005D29C1  03 D6                     ADD EDX,ESI
005D29C3  8B CB                     MOV ECX,EBX
005D29C5  52                        PUSH EDX
005D29C6  E8 3C 2A E3 FF            CALL 0x00405407
005D29CB  6A 00                     PUSH 0x0
005D29CD  8B CB                     MOV ECX,EBX
005D29CF  E8 01 11 E3 FF            CALL 0x00403ad5
005D29D4  E9 1C 0B 00 00            JMP 0x005d34f5
LAB_005d29d9:
005D29D9  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D29DF  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
005D29E2  6A 00                     PUSH 0x0
005D29E4  6A 00                     PUSH 0x0
005D29E6  03 C2                     ADD EAX,EDX
005D29E8  6A 00                     PUSH 0x0
005D29EA  50                        PUSH EAX
005D29EB  E9 FE 0A 00 00            JMP 0x005d34ee
switchD_005d298d::caseD_1:
005D29F0  80 3E 00                  CMP byte ptr [ESI],0x0
005D29F3  0F 84 FC 0A 00 00         JZ 0x005d34f5
005D29F9  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
005D29FC  B9 01 01 01 01            MOV ECX,0x1010101
005D2A01  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
005D2A04  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
005D2A07  33 C9                     XOR ECX,ECX
005D2A09  85 D2                     TEST EDX,EDX
005D2A0B  7E 32                     JLE 0x005d2a3f
005D2A0D  3B CA                     CMP ECX,EDX
LAB_005d2a0f:
005D2A0F  73 11                     JNC 0x005d2a22
005D2A11  8B BB 84 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f84]
005D2A17  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D2A1A  0F AF C1                  IMUL EAX,ECX
005D2A1D  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
005D2A20  EB 02                     JMP 0x005d2a24
LAB_005d2a22:
005D2A22  33 C0                     XOR EAX,EAX
LAB_005d2a24:
005D2A24  80 38 00                  CMP byte ptr [EAX],0x0
005D2A27  74 11                     JZ 0x005d2a3a
005D2A29  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005D2A2C  3C FF                     CMP AL,0xff
005D2A2E  74 0A                     JZ 0x005d2a3a
005D2A30  25 FF 00 00 00            AND EAX,0xff
005D2A35  C6 44 05 C0 00            MOV byte ptr [EBP + EAX*0x1 + -0x40],0x0
LAB_005d2a3a:
005D2A3A  41                        INC ECX
005D2A3B  3B CA                     CMP ECX,EDX
005D2A3D  7C D0                     JL 0x005d2a0f
LAB_005d2a3f:
005D2A3F  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D2A42  3C FF                     CMP AL,0xff
005D2A44  74 0A                     JZ 0x005d2a50
005D2A46  25 FF 00 00 00            AND EAX,0xff
005D2A4B  C6 44 05 C0 01            MOV byte ptr [EBP + EAX*0x1 + -0x40],0x1
LAB_005d2a50:
005D2A50  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D2A56  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
005D2A59  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2A5F  03 D7                     ADD EDX,EDI
005D2A61  33 FF                     XOR EDI,EDI
005D2A63  C7 83 71 21 00 00 02 65 00 00  MOV dword ptr [EBX + 0x2171],0x6502
005D2A6D  89 93 79 21 00 00         MOV dword ptr [EBX + 0x2179],EDX
005D2A73  C7 83 91 21 00 00 03 65 00 00  MOV dword ptr [EBX + 0x2191],0x6503
005D2A7D  89 BB A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EDI
005D2A83  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
005D2A86  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D2A8C  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2A92  50                        PUSH EAX
005D2A93  51                        PUSH ECX
005D2A94  C7 83 37 1F 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x1f37],0xff
005D2A9E  E8 1D B7 0D 00            CALL 0x006ae1c0
005D2AA3  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
LAB_005d2aa7:
005D2AA7  8A 44 3D C0               MOV AL,byte ptr [EBP + EDI*0x1 + -0x40]
005D2AAB  84 C0                     TEST AL,AL
005D2AAD  74 34                     JZ 0x005d2ae3
005D2AAF  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D2AB5  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2ABB  50                        PUSH EAX
005D2ABC  52                        PUSH EDX
005D2ABD  89 BB 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],EDI
005D2AC3  E8 F8 B6 0D 00            CALL 0x006ae1c0
005D2AC8  33 C0                     XOR EAX,EAX
005D2ACA  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D2ACD  3B C7                     CMP EAX,EDI
005D2ACF  75 0F                     JNZ 0x005d2ae0
005D2AD1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D2AD4  81 E1 FF 00 00 00         AND ECX,0xff
005D2ADA  89 8B A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ECX
LAB_005d2ae0:
005D2AE0  FE 45 F8                  INC byte ptr [EBP + -0x8]
LAB_005d2ae3:
005D2AE3  47                        INC EDI
005D2AE4  83 FF 08                  CMP EDI,0x8
005D2AE7  7C BE                     JL 0x005d2aa7
005D2AE9  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D2AEF  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005D2AF2  C7 83 C5 21 00 00 24 01 00 00  MOV dword ptr [EBX + 0x21c5],0x124
005D2AFC  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005D2B02  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D2B05  C7 83 CD 21 00 00 1E 00 00 00  MOV dword ptr [EBX + 0x21cd],0x1e
005D2B0F  C7 83 A5 21 00 00 12 00 00 00  MOV dword ptr [EBX + 0x21a5],0x12
005D2B19  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D2B1C  8D 4C 80 41               LEA ECX,[EAX + EAX*0x4 + 0x41]
005D2B20  89 8B C9 21 00 00         MOV dword ptr [EBX + 0x21c9],ECX
005D2B26  E9 5D 06 00 00            JMP 0x005d3188
switchD_005d298d::caseD_2:
005D2B2B  80 3E 00                  CMP byte ptr [ESI],0x0
005D2B2E  0F 84 C1 09 00 00         JZ 0x005d34f5
005D2B34  8B 8B 88 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f88]
005D2B3A  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
005D2B3D  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D2B43  03 CE                     ADD ECX,ESI
005D2B45  C7 83 71 21 00 00 04 65 00 00  MOV dword ptr [EBX + 0x2171],0x6504
005D2B4F  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005D2B55  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D2B5F  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005D2B66  A1 18 76 80 00            MOV EAX,[0x00807618]
005D2B6B  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005D2B72  50                        PUSH EAX
005D2B73  68 F1 23 00 00            PUSH 0x23f1
005D2B78  E8 C3 D5 0D 00            CALL 0x006b0140
005D2B7D  8B F8                     MOV EDI,EAX
005D2B7F  83 C9 FF                  OR ECX,0xffffffff
005D2B82  33 C0                     XOR EAX,EAX
005D2B84  6A 0A                     PUSH 0xa
005D2B86  F2 AE                     SCASB.REPNE ES:EDI
005D2B88  F7 D1                     NOT ECX
005D2B8A  2B F9                     SUB EDI,ECX
005D2B8C  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2B92  8B D1                     MOV EDX,ECX
005D2B94  8B F7                     MOV ESI,EDI
005D2B96  8B F8                     MOV EDI,EAX
005D2B98  50                        PUSH EAX
005D2B99  C1 E9 02                  SHR ECX,0x2
005D2B9C  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2B9E  8B CA                     MOV ECX,EDX
005D2BA0  83 E1 03                  AND ECX,0x3
005D2BA3  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2BA5  E8 B6 B9 15 00            CALL 0x0072e560
005D2BAA  83 C4 08                  ADD ESP,0x8
005D2BAD  85 C0                     TEST EAX,EAX
005D2BAF  74 12                     JZ 0x005d2bc3
LAB_005d2bb1:
005D2BB1  6A 0A                     PUSH 0xa
005D2BB3  50                        PUSH EAX
005D2BB4  C6 00 20                  MOV byte ptr [EAX],0x20
005D2BB7  E8 A4 B9 15 00            CALL 0x0072e560
005D2BBC  83 C4 08                  ADD ESP,0x8
005D2BBF  85 C0                     TEST EAX,EAX
005D2BC1  75 EE                     JNZ 0x005d2bb1
LAB_005d2bc3:
005D2BC3  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2BC9  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005D2BD3  50                        PUSH EAX
005D2BD4  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2BDA  50                        PUSH EAX
005D2BDB  E8 E0 B5 0D 00            CALL 0x006ae1c0
005D2BE0  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D2BE6  51                        PUSH ECX
005D2BE7  68 F0 23 00 00            PUSH 0x23f0
005D2BEC  E8 4F D5 0D 00            CALL 0x006b0140
005D2BF1  8B F8                     MOV EDI,EAX
005D2BF3  83 C9 FF                  OR ECX,0xffffffff
005D2BF6  33 C0                     XOR EAX,EAX
005D2BF8  6A 0A                     PUSH 0xa
005D2BFA  F2 AE                     SCASB.REPNE ES:EDI
005D2BFC  F7 D1                     NOT ECX
005D2BFE  2B F9                     SUB EDI,ECX
005D2C00  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2C06  8B D1                     MOV EDX,ECX
005D2C08  8B F7                     MOV ESI,EDI
005D2C0A  8B F8                     MOV EDI,EAX
005D2C0C  50                        PUSH EAX
005D2C0D  C1 E9 02                  SHR ECX,0x2
005D2C10  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2C12  8B CA                     MOV ECX,EDX
005D2C14  83 E1 03                  AND ECX,0x3
005D2C17  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2C19  E8 42 B9 15 00            CALL 0x0072e560
005D2C1E  83 C4 08                  ADD ESP,0x8
005D2C21  85 C0                     TEST EAX,EAX
005D2C23  74 12                     JZ 0x005d2c37
LAB_005d2c25:
005D2C25  6A 0A                     PUSH 0xa
005D2C27  50                        PUSH EAX
005D2C28  C6 00 20                  MOV byte ptr [EAX],0x20
005D2C2B  E8 30 B9 15 00            CALL 0x0072e560
005D2C30  83 C4 08                  ADD ESP,0x8
005D2C33  85 C0                     TEST EAX,EAX
005D2C35  75 EE                     JNZ 0x005d2c25
LAB_005d2c37:
005D2C37  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2C3D  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005D2C47  50                        PUSH EAX
005D2C48  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2C4E  50                        PUSH EAX
005D2C4F  E8 6C B5 0D 00            CALL 0x006ae1c0
005D2C54  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005D2C5A  81 E1 00 00 FF FF         AND ECX,0xffff0000
005D2C60  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005D2C66  75 0E                     JNZ 0x005d2c76
005D2C68  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D2C6B  33 C0                     XOR EAX,EAX
005D2C6D  80 7A 04 02               CMP byte ptr [EDX + 0x4],0x2
005D2C71  0F 95 C0                  SETNZ AL
005D2C74  EB 03                     JMP 0x005d2c79
LAB_005d2c76:
005D2C76  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005d2c79:
005D2C79  85 C0                     TEST EAX,EAX
005D2C7B  74 73                     JZ 0x005d2cf0
005D2C7D  A1 18 76 80 00            MOV EAX,[0x00807618]
005D2C82  50                        PUSH EAX
005D2C83  68 F2 23 00 00            PUSH 0x23f2
005D2C88  E8 B3 D4 0D 00            CALL 0x006b0140
005D2C8D  8B F8                     MOV EDI,EAX
005D2C8F  83 C9 FF                  OR ECX,0xffffffff
005D2C92  33 C0                     XOR EAX,EAX
005D2C94  6A 0A                     PUSH 0xa
005D2C96  F2 AE                     SCASB.REPNE ES:EDI
005D2C98  F7 D1                     NOT ECX
005D2C9A  2B F9                     SUB EDI,ECX
005D2C9C  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2CA2  8B D1                     MOV EDX,ECX
005D2CA4  8B F7                     MOV ESI,EDI
005D2CA6  8B F8                     MOV EDI,EAX
005D2CA8  50                        PUSH EAX
005D2CA9  C1 E9 02                  SHR ECX,0x2
005D2CAC  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2CAE  8B CA                     MOV ECX,EDX
005D2CB0  83 E1 03                  AND ECX,0x3
005D2CB3  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2CB5  E8 A6 B8 15 00            CALL 0x0072e560
005D2CBA  83 C4 08                  ADD ESP,0x8
005D2CBD  85 C0                     TEST EAX,EAX
005D2CBF  74 12                     JZ 0x005d2cd3
LAB_005d2cc1:
005D2CC1  6A 0A                     PUSH 0xa
005D2CC3  50                        PUSH EAX
005D2CC4  C6 00 20                  MOV byte ptr [EAX],0x20
005D2CC7  E8 94 B8 15 00            CALL 0x0072e560
005D2CCC  83 C4 08                  ADD ESP,0x8
005D2CCF  85 C0                     TEST EAX,EAX
005D2CD1  75 EE                     JNZ 0x005d2cc1
LAB_005d2cd3:
005D2CD3  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2CD9  C7 83 37 1F 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1f37],0x3
005D2CE3  50                        PUSH EAX
005D2CE4  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2CEA  50                        PUSH EAX
005D2CEB  E8 D0 B4 0D 00            CALL 0x006ae1c0
LAB_005d2cf0:
005D2CF0  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D2CF6  33 C0                     XOR EAX,EAX
005D2CF8  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D2CFB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D2CFE  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005D2D04  8A 41 03                  MOV AL,byte ptr [ECX + 0x3]
005D2D07  C7 83 C5 21 00 00 43 01 00 00  MOV dword ptr [EBX + 0x21c5],0x143
005D2D11  48                        DEC EAX
005D2D12  C7 83 CD 21 00 00 78 00 00 00  MOV dword ptr [EBX + 0x21cd],0x78
005D2D1C  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005D2D22  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D2D25  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D2D28  8D 54 80 41               LEA EDX,[EAX + EAX*0x4 + 0x41]
005D2D2C  89 93 C9 21 00 00         MOV dword ptr [EBX + 0x21c9],EDX
005D2D32  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D2D37  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
005D2D3A  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D2D40  85 C0                     TEST EAX,EAX
005D2D42  74 09                     JZ 0x005d2d4d
005D2D44  56                        PUSH ESI
005D2D45  E8 46 DA 13 00            CALL 0x00710790
005D2D4A  83 C4 04                  ADD ESP,0x4
LAB_005d2d4d:
005D2D4D  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
005D2D53  89 8B A5 21 00 00         MOV dword ptr [EBX + 0x21a5],ECX
005D2D59  E9 2A 04 00 00            JMP 0x005d3188
switchD_005d298d::caseD_3:
005D2D5E  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
005D2D61  8B BB 88 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f88]
005D2D67  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2D6D  8B CA                     MOV ECX,EDX
005D2D6F  03 CF                     ADD ECX,EDI
005D2D71  C7 83 71 21 00 00 05 65 00 00  MOV dword ptr [EBX + 0x2171],0x6505
005D2D7B  89 8B 79 21 00 00         MOV dword ptr [EBX + 0x2179],ECX
005D2D81  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D2D8B  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
005D2D92  8D BB 33 1E 00 00         LEA EDI,[EBX + 0x1e33]
005D2D98  B9 43 00 00 00            MOV ECX,0x43
005D2D9D  33 C0                     XOR EAX,EAX
005D2D9F  F3 AB                     STOSD.REP ES:EDI
005D2DA1  80 3E 00                  CMP byte ptr [ESI],0x0
005D2DA4  0F 84 D9 01 00 00         JZ 0x005d2f83
005D2DAA  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D2DB0  3C 05                     CMP AL,0x5
005D2DB2  75 0A                     JNZ 0x005d2dbe
005D2DB4  80 7E 04 04               CMP byte ptr [ESI + 0x4],0x4
005D2DB8  0F 84 20 01 00 00         JZ 0x005d2ede
LAB_005d2dbe:
005D2DBE  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
005D2DC4  84 C9                     TEST CL,CL
005D2DC6  74 54                     JZ 0x005d2e1c
005D2DC8  3C 05                     CMP AL,0x5
005D2DCA  74 50                     JZ 0x005d2e1c
005D2DCC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D2DD2  51                        PUSH ECX
005D2DD3  68 40 1F 00 00            PUSH 0x1f40
005D2DD8  E8 63 D3 0D 00            CALL 0x006b0140
005D2DDD  8B F8                     MOV EDI,EAX
005D2DDF  83 C9 FF                  OR ECX,0xffffffff
005D2DE2  33 C0                     XOR EAX,EAX
005D2DE4  F2 AE                     SCASB.REPNE ES:EDI
005D2DE6  F7 D1                     NOT ECX
005D2DE8  2B F9                     SUB EDI,ECX
005D2DEA  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2DF0  8B D1                     MOV EDX,ECX
005D2DF2  8B F7                     MOV ESI,EDI
005D2DF4  8B F8                     MOV EDI,EAX
005D2DF6  50                        PUSH EAX
005D2DF7  C1 E9 02                  SHR ECX,0x2
005D2DFA  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2DFC  8B CA                     MOV ECX,EDX
005D2DFE  83 E1 03                  AND ECX,0x3
005D2E01  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2E03  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2E09  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005D2E13  50                        PUSH EAX
005D2E14  E8 A7 B3 0D 00            CALL 0x006ae1c0
005D2E19  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_005d2e1c:
005D2E1C  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005D2E22  B8 01 00 00 00            MOV EAX,0x1
005D2E27  81 E1 00 00 FF FF         AND ECX,0xffff0000
005D2E2D  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005D2E33  75 0B                     JNZ 0x005d2e40
005D2E35  8A 4E 03                  MOV CL,byte ptr [ESI + 0x3]
005D2E38  33 C0                     XOR EAX,EAX
005D2E3A  80 F9 03                  CMP CL,0x3
005D2E3D  0F 95 C0                  SETNZ AL
LAB_005d2e40:
005D2E40  85 C0                     TEST EAX,EAX
005D2E42  74 4D                     JZ 0x005d2e91
005D2E44  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D2E4A  52                        PUSH EDX
005D2E4B  68 42 1F 00 00            PUSH 0x1f42
005D2E50  E8 EB D2 0D 00            CALL 0x006b0140
005D2E55  8B F8                     MOV EDI,EAX
005D2E57  83 C9 FF                  OR ECX,0xffffffff
005D2E5A  33 C0                     XOR EAX,EAX
005D2E5C  F2 AE                     SCASB.REPNE ES:EDI
005D2E5E  F7 D1                     NOT ECX
005D2E60  2B F9                     SUB EDI,ECX
005D2E62  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2E68  8B D1                     MOV EDX,ECX
005D2E6A  8B F7                     MOV ESI,EDI
005D2E6C  8B F8                     MOV EDI,EAX
005D2E6E  50                        PUSH EAX
005D2E6F  C1 E9 02                  SHR ECX,0x2
005D2E72  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2E74  8B CA                     MOV ECX,EDX
005D2E76  83 E1 03                  AND ECX,0x3
005D2E79  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2E7B  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2E81  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005D2E8B  50                        PUSH EAX
005D2E8C  E8 2F B3 0D 00            CALL 0x006ae1c0
LAB_005d2e91:
005D2E91  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D2E97  51                        PUSH ECX
005D2E98  68 41 1F 00 00            PUSH 0x1f41
005D2E9D  E8 9E D2 0D 00            CALL 0x006b0140
005D2EA2  8B F8                     MOV EDI,EAX
005D2EA4  83 C9 FF                  OR ECX,0xffffffff
005D2EA7  33 C0                     XOR EAX,EAX
005D2EA9  F2 AE                     SCASB.REPNE ES:EDI
005D2EAB  F7 D1                     NOT ECX
005D2EAD  2B F9                     SUB EDI,ECX
005D2EAF  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2EB5  8B D1                     MOV EDX,ECX
005D2EB7  8B F7                     MOV ESI,EDI
005D2EB9  8B F8                     MOV EDI,EAX
005D2EBB  50                        PUSH EAX
005D2EBC  C1 E9 02                  SHR ECX,0x2
005D2EBF  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2EC1  8B CA                     MOV ECX,EDX
005D2EC3  83 E1 03                  AND ECX,0x3
005D2EC6  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2EC8  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D2ECE  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005D2ED8  50                        PUSH EAX
005D2ED9  E8 E2 B2 0D 00            CALL 0x006ae1c0
LAB_005d2ede:
005D2EDE  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D2EE3  84 C0                     TEST AL,AL
005D2EE5  0F 84 DF 01 00 00         JZ 0x005d30ca
005D2EEB  80 BB 26 1E 00 00 05      CMP byte ptr [EBX + 0x1e26],0x5
005D2EF2  0F 84 D2 01 00 00         JZ 0x005d30ca
005D2EF8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D2EFB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005D2F02  8B 41 50                  MOV EAX,dword ptr [ECX + 0x50]
005D2F05  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D2F08  85 C9                     TEST ECX,ECX
005D2F0A  0F 8E BA 01 00 00         JLE 0x005d30ca
LAB_005d2f10:
005D2F10  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D2F13  3B D1                     CMP EDX,ECX
005D2F15  73 0B                     JNC 0x005d2f22
005D2F17  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D2F1A  0F AF CA                  IMUL ECX,EDX
005D2F1D  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005D2F20  EB 02                     JMP 0x005d2f24
LAB_005d2f22:
005D2F22  33 C9                     XOR ECX,ECX
LAB_005d2f24:
005D2F24  8D 79 40                  LEA EDI,[ECX + 0x40]
005D2F27  83 C9 FF                  OR ECX,0xffffffff
005D2F2A  33 C0                     XOR EAX,EAX
005D2F2C  F2 AE                     SCASB.REPNE ES:EDI
005D2F2E  F7 D1                     NOT ECX
005D2F30  2B F9                     SUB EDI,ECX
005D2F32  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2F38  8B D1                     MOV EDX,ECX
005D2F3A  8B F7                     MOV ESI,EDI
005D2F3C  8B F8                     MOV EDI,EAX
005D2F3E  50                        PUSH EAX
005D2F3F  C1 E9 02                  SHR ECX,0x2
005D2F42  F3 A5                     MOVSD.REP ES:EDI,ESI
005D2F44  8B CA                     MOV ECX,EDX
005D2F46  83 E1 03                  AND ECX,0x3
005D2F49  F3 A4                     MOVSB.REP ES:EDI,ESI
005D2F4B  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D2F51  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D2F54  52                        PUSH EDX
005D2F55  C7 83 37 1F 00 00 04 00 00 00  MOV dword ptr [EBX + 0x1f37],0x4
005D2F5F  89 8B 3B 1F 00 00         MOV dword ptr [EBX + 0x1f3b],ECX
005D2F65  E8 56 B2 0D 00            CALL 0x006ae1c0
005D2F6A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005D2F6D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D2F70  42                        INC EDX
005D2F71  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D2F74  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005D2F77  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D2F7A  3B D1                     CMP EDX,ECX
005D2F7C  7C 92                     JL 0x005d2f10
005D2F7E  E9 47 01 00 00            JMP 0x005d30ca
LAB_005d2f83:
005D2F83  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D2F89  8B CA                     MOV ECX,EDX
005D2F8B  03 C8                     ADD ECX,EAX
005D2F8D  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
005D2F91  78 3C                     JS 0x005d2fcf
005D2F93  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005D2F99  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
LAB_005d2f9c:
005D2F9C  3B CA                     CMP ECX,EDX
005D2F9E  73 0D                     JNC 0x005d2fad
005D2FA0  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D2FA3  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005D2FA6  0F AF C1                  IMUL EAX,ECX
005D2FA9  03 C7                     ADD EAX,EDI
005D2FAB  EB 02                     JMP 0x005d2faf
LAB_005d2fad:
005D2FAD  33 C0                     XOR EAX,EAX
LAB_005d2faf:
005D2FAF  80 38 00                  CMP byte ptr [EAX],0x0
005D2FB2  75 05                     JNZ 0x005d2fb9
005D2FB4  49                        DEC ECX
005D2FB5  79 E5                     JNS 0x005d2f9c
005D2FB7  EB 16                     JMP 0x005d2fcf
LAB_005d2fb9:
005D2FB9  80 78 04 02               CMP byte ptr [EAX + 0x4],0x2
005D2FBD  75 10                     JNZ 0x005d2fcf
005D2FBF  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
005D2FC2  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005D2FC7  3B C8                     CMP ECX,EAX
005D2FC9  74 04                     JZ 0x005d2fcf
005D2FCB  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
LAB_005d2fcf:
005D2FCF  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005D2FD2  84 C0                     TEST AL,AL
005D2FD4  0F 84 A3 00 00 00         JZ 0x005d307d
005D2FDA  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D2FE0  52                        PUSH EDX
005D2FE1  68 42 1F 00 00            PUSH 0x1f42
005D2FE6  E8 55 D1 0D 00            CALL 0x006b0140
005D2FEB  8B F8                     MOV EDI,EAX
005D2FED  83 C9 FF                  OR ECX,0xffffffff
005D2FF0  33 C0                     XOR EAX,EAX
005D2FF2  F2 AE                     SCASB.REPNE ES:EDI
005D2FF4  F7 D1                     NOT ECX
005D2FF6  2B F9                     SUB EDI,ECX
005D2FF8  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D2FFE  8B D1                     MOV EDX,ECX
005D3000  8B F7                     MOV ESI,EDI
005D3002  8B F8                     MOV EDI,EAX
005D3004  50                        PUSH EAX
005D3005  C1 E9 02                  SHR ECX,0x2
005D3008  F3 A5                     MOVSD.REP ES:EDI,ESI
005D300A  8B CA                     MOV ECX,EDX
005D300C  83 E1 03                  AND ECX,0x3
005D300F  F3 A4                     MOVSB.REP ES:EDI,ESI
005D3011  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D3017  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005D3021  50                        PUSH EAX
005D3022  E8 99 B1 0D 00            CALL 0x006ae1c0
005D3027  A0 AA 8A 80 00            MOV AL,[0x00808aaa]
005D302C  84 C0                     TEST AL,AL
005D302E  74 4D                     JZ 0x005d307d
005D3030  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D3036  51                        PUSH ECX
005D3037  68 46 1F 00 00            PUSH 0x1f46
005D303C  E8 FF D0 0D 00            CALL 0x006b0140
005D3041  8B F8                     MOV EDI,EAX
005D3043  83 C9 FF                  OR ECX,0xffffffff
005D3046  33 C0                     XOR EAX,EAX
005D3048  F2 AE                     SCASB.REPNE ES:EDI
005D304A  F7 D1                     NOT ECX
005D304C  2B F9                     SUB EDI,ECX
005D304E  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D3054  8B D1                     MOV EDX,ECX
005D3056  8B F7                     MOV ESI,EDI
005D3058  8B F8                     MOV EDI,EAX
005D305A  50                        PUSH EAX
005D305B  C1 E9 02                  SHR ECX,0x2
005D305E  F3 A5                     MOVSD.REP ES:EDI,ESI
005D3060  8B CA                     MOV ECX,EDX
005D3062  83 E1 03                  AND ECX,0x3
005D3065  F3 A4                     MOVSB.REP ES:EDI,ESI
005D3067  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D306D  C7 83 37 1F 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1f37],0x3
005D3077  50                        PUSH EAX
005D3078  E8 43 B1 0D 00            CALL 0x006ae1c0
LAB_005d307d:
005D307D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D3083  51                        PUSH ECX
005D3084  68 41 1F 00 00            PUSH 0x1f41
005D3089  E8 B2 D0 0D 00            CALL 0x006b0140
005D308E  8B F8                     MOV EDI,EAX
005D3090  83 C9 FF                  OR ECX,0xffffffff
005D3093  33 C0                     XOR EAX,EAX
005D3095  F2 AE                     SCASB.REPNE ES:EDI
005D3097  F7 D1                     NOT ECX
005D3099  2B F9                     SUB EDI,ECX
005D309B  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D30A1  8B D1                     MOV EDX,ECX
005D30A3  8B F7                     MOV ESI,EDI
005D30A5  8B F8                     MOV EDI,EAX
005D30A7  50                        PUSH EAX
005D30A8  C1 E9 02                  SHR ECX,0x2
005D30AB  F3 A5                     MOVSD.REP ES:EDI,ESI
005D30AD  8B CA                     MOV ECX,EDX
005D30AF  83 E1 03                  AND ECX,0x3
005D30B2  F3 A4                     MOVSB.REP ES:EDI,ESI
005D30B4  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D30BA  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005D30C4  50                        PUSH EAX
005D30C5  E8 F6 B0 0D 00            CALL 0x006ae1c0
LAB_005d30ca:
005D30CA  8B BB 2F 1E 00 00         MOV EDI,dword ptr [EBX + 0x1e2f]
005D30D0  33 F6                     XOR ESI,ESI
005D30D2  89 B3 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ESI
005D30D8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D30DB  3B C6                     CMP EAX,ESI
005D30DD  7E 46                     JLE 0x005d3125
005D30DF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D30E2  33 D2                     XOR EDX,EDX
005D30E4  3B F0                     CMP ESI,EAX
005D30E6  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
005D30E9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_005d30ec:
005D30EC  73 0D                     JNC 0x005d30fb
005D30EE  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D30F1  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005D30F4  0F AF C6                  IMUL EAX,ESI
005D30F7  03 C2                     ADD EAX,EDX
005D30F9  EB 02                     JMP 0x005d30fd
LAB_005d30fb:
005D30FB  33 C0                     XOR EAX,EAX
LAB_005d30fd:
005D30FD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005D3100  39 90 04 01 00 00         CMP dword ptr [EAX + 0x104],EDX
005D3106  75 0D                     JNZ 0x005d3115
005D3108  33 D2                     XOR EDX,EDX
005D310A  8A 51 05                  MOV DL,byte ptr [ECX + 0x5]
005D310D  39 90 08 01 00 00         CMP dword ptr [EAX + 0x108],EDX
005D3113  74 0A                     JZ 0x005d311f
LAB_005d3115:
005D3115  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D3118  46                        INC ESI
005D3119  3B F0                     CMP ESI,EAX
005D311B  7C CF                     JL 0x005d30ec
005D311D  EB 06                     JMP 0x005d3125
LAB_005d311f:
005D311F  89 B3 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ESI
LAB_005d3125:
005D3125  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D3128  C7 83 C5 21 00 00 5D 01 00 00  MOV dword ptr [EBX + 0x21c5],0x15d
005D3132  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005D3138  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D313B  C7 83 CD 21 00 00 5F 00 00 00  MOV dword ptr [EBX + 0x21cd],0x5f
005D3145  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D3148  8D 4C 80 41               LEA ECX,[EAX + EAX*0x4 + 0x41]
005D314C  89 8B C9 21 00 00         MOV dword ptr [EBX + 0x21c9],ECX
005D3152  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D3158  8B 72 34                  MOV ESI,dword ptr [EDX + 0x34]
005D315B  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D3161  85 C0                     TEST EAX,EAX
005D3163  74 09                     JZ 0x005d316e
005D3165  56                        PUSH ESI
005D3166  E8 25 D6 13 00            CALL 0x00710790
005D316B  83 C4 04                  ADD ESP,0x4
LAB_005d316e:
005D316E  8B 86 8A 00 00 00         MOV EAX,dword ptr [ESI + 0x8a]
005D3174  89 83 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EAX
005D317A  8B 83 A9 21 00 00         MOV EAX,dword ptr [EBX + 0x21a9]
005D3180  85 C0                     TEST EAX,EAX
005D3182  0F 8E 6D 03 00 00         JLE 0x005d34f5
LAB_005d3188:
005D3188  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D318B  8D 83 61 21 00 00         LEA EAX,[EBX + 0x2161]
005D3191  6A 00                     PUSH 0x0
005D3193  50                        PUSH EAX
005D3194  8B 11                     MOV EDX,dword ptr [ECX]
005D3196  6A 00                     PUSH 0x0
005D3198  6A 00                     PUSH 0x0
005D319A  68 EF 00 01 00            PUSH 0x100ef
005D319F  FF 52 08                  CALL dword ptr [EDX + 0x8]
005D31A2  E9 4E 03 00 00            JMP 0x005d34f5
switchD_005d298d::caseD_5:
005D31A7  80 3E 00                  CMP byte ptr [ESI],0x0
005D31AA  0F 84 45 03 00 00         JZ 0x005d34f5
005D31B0  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D31B5  84 C0                     TEST AL,AL
005D31B7  0F 84 79 02 00 00         JZ 0x005d3436
005D31BD  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
005D31C0  33 C9                     XOR ECX,ECX
005D31C2  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
005D31C5  C6 45 F8 FF               MOV byte ptr [EBP + -0x8],0xff
005D31C9  85 FF                     TEST EDI,EDI
005D31CB  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005D31D2  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005D31D5  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
005D31D8  7E 33                     JLE 0x005d320d
005D31DA  3B CF                     CMP ECX,EDI
LAB_005d31dc:
005D31DC  73 13                     JNC 0x005d31f1
005D31DE  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005D31E4  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D31E7  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
005D31EA  0F AF C1                  IMUL EAX,ECX
005D31ED  03 C6                     ADD EAX,ESI
005D31EF  EB 02                     JMP 0x005d31f3
LAB_005d31f1:
005D31F1  33 C0                     XOR EAX,EAX
LAB_005d31f3:
005D31F3  85 C0                     TEST EAX,EAX
005D31F5  74 11                     JZ 0x005d3208
005D31F7  8A 40 4A                  MOV AL,byte ptr [EAX + 0x4a]
005D31FA  3C 08                     CMP AL,0x8
005D31FC  73 0A                     JNC 0x005d3208
005D31FE  25 FF 00 00 00            AND EAX,0xff
005D3203  C6 44 05 C8 01            MOV byte ptr [EBP + EAX*0x1 + -0x38],0x1
LAB_005d3208:
005D3208  41                        INC ECX
005D3209  3B CF                     CMP ECX,EDI
005D320B  7C CF                     JL 0x005d31dc
LAB_005d320d:
005D320D  32 C9                     XOR CL,CL
005D320F  33 C0                     XOR EAX,EAX
LAB_005d3211:
005D3211  8A 54 05 C8               MOV DL,byte ptr [EBP + EAX*0x1 + -0x38]
005D3215  84 D2                     TEST DL,DL
005D3217  74 02                     JZ 0x005d321b
005D3219  FE C1                     INC CL
LAB_005d321b:
005D321B  40                        INC EAX
005D321C  83 F8 08                  CMP EAX,0x8
005D321F  7C F0                     JL 0x005d3211
005D3221  8A 93 1C 21 00 00         MOV DL,byte ptr [EBX + 0x211c]
005D3227  3A CA                     CMP CL,DL
005D3229  73 1C                     JNC 0x005d3247
LAB_005d322b:
005D322B  33 C0                     XOR EAX,EAX
LAB_005d322d:
005D322D  80 7C 05 C8 00            CMP byte ptr [EBP + EAX*0x1 + -0x38],0x0
005D3232  74 08                     JZ 0x005d323c
005D3234  40                        INC EAX
005D3235  83 F8 08                  CMP EAX,0x8
005D3238  7C F3                     JL 0x005d322d
005D323A  EB 07                     JMP 0x005d3243
LAB_005d323c:
005D323C  C6 44 05 C8 01            MOV byte ptr [EBP + EAX*0x1 + -0x38],0x1
005D3241  FE C1                     INC CL
LAB_005d3243:
005D3243  3A CA                     CMP CL,DL
005D3245  72 E4                     JC 0x005d322b
LAB_005d3247:
005D3247  33 F6                     XOR ESI,ESI
005D3249  85 FF                     TEST EDI,EDI
005D324B  0F 8E 8B 00 00 00         JLE 0x005d32dc
005D3251  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
LAB_005d3254:
005D3254  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
005D3257  3B F2                     CMP ESI,EDX
005D3259  73 11                     JNC 0x005d326c
005D325B  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D3261  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D3264  0F AF C6                  IMUL EAX,ESI
005D3267  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005D326A  EB 02                     JMP 0x005d326e
LAB_005d326c:
005D326C  33 C0                     XOR EAX,EAX
LAB_005d326e:
005D326E  85 C0                     TEST EAX,EAX
005D3270  74 61                     JZ 0x005d32d3
005D3272  8B 8B 88 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f88]
005D3278  03 CF                     ADD ECX,EDI
005D327A  3B CE                     CMP ECX,ESI
005D327C  74 33                     JZ 0x005d32b1
005D327E  80 38 00                  CMP byte ptr [EAX],0x0
005D3281  74 50                     JZ 0x005d32d3
005D3283  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D3286  84 C9                     TEST CL,CL
005D3288  74 27                     JZ 0x005d32b1
005D328A  80 F9 01                  CMP CL,0x1
005D328D  74 22                     JZ 0x005d32b1
005D328F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005D3292  85 C9                     TEST ECX,ECX
005D3294  74 0F                     JZ 0x005d32a5
005D3296  8A 48 4A                  MOV CL,byte ptr [EAX + 0x4a]
005D3299  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005D32A0  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005D32A3  EB 0C                     JMP 0x005d32b1
LAB_005d32a5:
005D32A5  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
005D32A8  3A 48 4A                  CMP CL,byte ptr [EAX + 0x4a]
005D32AB  74 04                     JZ 0x005d32b1
005D32AD  C6 45 F8 FF               MOV byte ptr [EBP + -0x8],0xff
LAB_005d32b1:
005D32B1  80 38 00                  CMP byte ptr [EAX],0x0
005D32B4  74 1D                     JZ 0x005d32d3
005D32B6  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D32B9  84 C9                     TEST CL,CL
005D32BB  74 05                     JZ 0x005d32c2
005D32BD  80 F9 01                  CMP CL,0x1
005D32C0  75 11                     JNZ 0x005d32d3
LAB_005d32c2:
005D32C2  8A 40 4A                  MOV AL,byte ptr [EAX + 0x4a]
005D32C5  3C 08                     CMP AL,0x8
005D32C7  73 0A                     JNC 0x005d32d3
005D32C9  25 FF 00 00 00            AND EAX,0xff
005D32CE  C6 44 05 C8 00            MOV byte ptr [EBP + EAX*0x1 + -0x38],0x0
LAB_005d32d3:
005D32D3  46                        INC ESI
005D32D4  3B F2                     CMP ESI,EDX
005D32D6  0F 8C 78 FF FF FF         JL 0x005d3254
LAB_005d32dc:
005D32DC  80 7D F8 08               CMP byte ptr [EBP + -0x8],0x8
005D32E0  73 0E                     JNC 0x005d32f0
005D32E2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005D32E5  81 E2 FF 00 00 00         AND EDX,0xff
005D32EB  C6 44 15 C8 00            MOV byte ptr [EBP + EDX*0x1 + -0x38],0x0
LAB_005d32f0:
005D32F0  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D32F6  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
005D32F9  03 C1                     ADD EAX,ECX
005D32FB  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D3301  33 FF                     XOR EDI,EDI
005D3303  C7 83 71 21 00 00 01 65 00 00  MOV dword ptr [EBX + 0x2171],0x6501
005D330D  89 83 79 21 00 00         MOV dword ptr [EBX + 0x2179],EAX
005D3313  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D331D  89 BB A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EDI
005D3323  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
005D3326  8D 4D C8                  LEA ECX,[EBP + -0x38]
005D3329  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
005D332D  83 E9 41                  SUB ECX,0x41
005D3330  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
LAB_005d3333:
005D3333  8A 54 0F 41               MOV DL,byte ptr [EDI + ECX*0x1 + 0x41]
005D3337  8D 47 41                  LEA EAX,[EDI + 0x41]
005D333A  84 D2                     TEST DL,DL
005D333C  74 60                     JZ 0x005d339e
005D333E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D3344  50                        PUSH EAX
005D3345  52                        PUSH EDX
005D3346  68 4A 1F 00 00            PUSH 0x1f4a
005D334B  8D B3 33 1E 00 00         LEA ESI,[EBX + 0x1e33]
005D3351  E8 EA CD 0D 00            CALL 0x006b0140
005D3356  50                        PUSH EAX
005D3357  68 08 D5 7C 00            PUSH 0x7cd508
005D335C  56                        PUSH ESI
005D335D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D3363  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D3369  83 C4 10                  ADD ESP,0x10
005D336C  89 BB 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],EDI
005D3372  56                        PUSH ESI
005D3373  50                        PUSH EAX
005D3374  E8 47 AE 0D 00            CALL 0x006ae1c0
005D3379  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D337C  33 C9                     XOR ECX,ECX
005D337E  8A 4A 4A                  MOV CL,byte ptr [EDX + 0x4a]
005D3381  3B CF                     CMP ECX,EDI
005D3383  75 0E                     JNZ 0x005d3393
005D3385  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D3388  25 FF 00 00 00            AND EAX,0xff
005D338D  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
LAB_005d3393:
005D3393  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
005D3396  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005D3399  FE C0                     INC AL
005D339B  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_005d339e:
005D339E  47                        INC EDI
005D339F  83 FF 08                  CMP EDI,0x8
005D33A2  7C 8F                     JL 0x005d3333
005D33A4  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D33AA  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D33B0  3C 06                     CMP AL,0x6
005D33B2  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D33B5  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005D33BB  74 0D                     JZ 0x005d33ca
005D33BD  3C 01                     CMP AL,0x1
005D33BF  74 09                     JZ 0x005d33ca
005D33C1  3C 02                     CMP AL,0x2
005D33C3  B8 6B 02 00 00            MOV EAX,0x26b
005D33C8  75 05                     JNZ 0x005d33cf
LAB_005d33ca:
005D33CA  B8 AB 02 00 00            MOV EAX,0x2ab
LAB_005d33cf:
005D33CF  89 83 C5 21 00 00         MOV dword ptr [EBX + 0x21c5],EAX
005D33D5  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D33D8  C7 83 CD 21 00 00 46 00 00 00  MOV dword ptr [EBX + 0x21cd],0x46
005D33E2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D33E5  8D 44 80 41               LEA EAX,[EAX + EAX*0x4 + 0x41]
005D33E9  89 83 C9 21 00 00         MOV dword ptr [EBX + 0x21c9],EAX
005D33EF  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D33F5  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
005D33F8  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D33FE  85 C0                     TEST EAX,EAX
005D3400  74 09                     JZ 0x005d340b
005D3402  56                        PUSH ESI
005D3403  E8 88 D3 13 00            CALL 0x00710790
005D3408  83 C4 04                  ADD ESP,0x4
LAB_005d340b:
005D340B  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
005D3411  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D3414  89 93 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EDX
005D341A  8D 93 61 21 00 00         LEA EDX,[EBX + 0x2161]
005D3420  8B 01                     MOV EAX,dword ptr [ECX]
005D3422  6A 00                     PUSH 0x0
005D3424  52                        PUSH EDX
005D3425  6A 00                     PUSH 0x0
005D3427  6A 00                     PUSH 0x0
005D3429  68 EF 00 01 00            PUSH 0x100ef
005D342E  FF 50 08                  CALL dword ptr [EAX + 0x8]
005D3431  E9 BF 00 00 00            JMP 0x005d34f5
LAB_005d3436:
005D3436  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D343B  84 C0                     TEST AL,AL
005D343D  74 2B                     JZ 0x005d346a
005D343F  8B 8B 88 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f88]
005D3445  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
005D3448  33 C0                     XOR EAX,EAX
005D344A  03 CE                     ADD ECX,ESI
005D344C  A0 4D 87 80 00            MOV AL,[0x0080874d]
005D3451  50                        PUSH EAX
005D3452  6A 00                     PUSH 0x0
005D3454  51                        PUSH ECX
005D3455  8B CB                     MOV ECX,EBX
005D3457  E8 0C EC E2 FF            CALL 0x00402068
005D345C  6A 00                     PUSH 0x0
005D345E  8B CB                     MOV ECX,EBX
005D3460  E8 24 16 E3 FF            CALL 0x00404a89
005D3465  E9 8B 00 00 00            JMP 0x005d34f5
LAB_005d346a:
005D346A  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D3470  33 D2                     XOR EDX,EDX
005D3472  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005D3478  52                        PUSH EDX
005D3479  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
005D347C  6A 00                     PUSH 0x0
005D347E  03 C2                     ADD EAX,EDX
005D3480  6A 05                     PUSH 0x5
005D3482  50                        PUSH EAX
005D3483  EB 69                     JMP 0x005d34ee
switchD_005d298d::caseD_7:
005D3485  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D348A  84 C0                     TEST AL,AL
005D348C  74 45                     JZ 0x005d34d3
005D348E  8A 4E 4F                  MOV CL,byte ptr [ESI + 0x4f]
005D3491  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D3494  84 C9                     TEST CL,CL
005D3496  0F 94 C1                  SETZ CL
005D3499  C1 E0 05                  SHL EAX,0x5
005D349C  88 4E 4F                  MOV byte ptr [ESI + 0x4f],CL
005D349F  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005D34A6  8B 84 18 A8 1F 00 00      MOV EAX,dword ptr [EAX + EBX*0x1 + 0x1fa8]
005D34AD  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005D34B0  52                        PUSH EDX
005D34B1  50                        PUSH EAX
005D34B2  6A 02                     PUSH 0x2
005D34B4  8B CB                     MOV ECX,EBX
005D34B6  E8 C5 2B 11 00            CALL 0x006e6080
005D34BB  8B 8B 21 21 00 00         MOV ECX,dword ptr [EBX + 0x2121]
005D34C1  6A 00                     PUSH 0x0
005D34C3  41                        INC ECX
005D34C4  89 8B 21 21 00 00         MOV dword ptr [EBX + 0x2121],ECX
005D34CA  8B CB                     MOV ECX,EBX
005D34CC  E8 04 06 E3 FF            CALL 0x00403ad5
005D34D1  EB 22                     JMP 0x005d34f5
LAB_005d34d3:
005D34D3  8A 46 4F                  MOV AL,byte ptr [ESI + 0x4f]
005D34D6  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D34DC  33 C9                     XOR ECX,ECX
005D34DE  6A 00                     PUSH 0x0
005D34E0  84 C0                     TEST AL,AL
005D34E2  0F 94 C1                  SETZ CL
005D34E5  51                        PUSH ECX
005D34E6  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
005D34E9  03 D1                     ADD EDX,ECX
005D34EB  6A 07                     PUSH 0x7
005D34ED  52                        PUSH EDX
LAB_005d34ee:
005D34EE  8B CB                     MOV ECX,EBX
005D34F0  E8 57 F8 E2 FF            CALL 0x00402d4c
switchD_005d298d::caseD_4:
005D34F5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D34F8  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005D34FB  3D 7F 6A 00 00            CMP EAX,0x6a7f
005D3500  0F 82 5F 07 00 00         JC 0x005d3c65
005D3506  3D FF 6A 00 00            CMP EAX,0x6aff
005D350B  0F 83 54 07 00 00         JNC 0x005d3c65
005D3511  8D B0 81 95 FF FF         LEA ESI,[EAX + 0xffff9581]
005D3517  33 FF                     XOR EDI,EDI
005D3519  C1 EE 03                  SHR ESI,0x3
005D351C  40                        INC EAX
005D351D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005D3520  83 E0 07                  AND EAX,0x7
005D3523  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005D3526  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005D3529  8B C8                     MOV ECX,EAX
005D352B  8B 11                     MOV EDX,dword ptr [ECX]
005D352D  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005D3530  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005D3533  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005D3536  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005D3539  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005D353C  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005D353F  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005D3542  8B 10                     MOV EDX,dword ptr [EAX]
005D3544  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D354A  81 EA 13 01 00 00         SUB EDX,0x113
005D3550  3B CF                     CMP ECX,EDI
005D3552  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005D3555  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
005D3558  74 16                     JZ 0x005d3570
005D355A  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D3560  03 D6                     ADD EDX,ESI
005D3562  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D3565  73 09                     JNC 0x005d3570
005D3567  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
005D356A  0F AF FA                  IMUL EDI,EDX
005D356D  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
LAB_005d3570:
005D3570  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D3573  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005D3576  8B 00                     MOV EAX,dword ptr [EAX]
005D3578  68 FF 00 00 00            PUSH 0xff
005D357D  51                        PUSH ECX
005D357E  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3585  52                        PUSH EDX
005D3586  2D 13 01 00 00            SUB EAX,0x113
005D358B  6A 00                     PUSH 0x0
005D358D  50                        PUSH EAX
005D358E  6A 00                     PUSH 0x0
005D3590  51                        PUSH ECX
005D3591  E8 DA 0B 0E 00            CALL 0x006b4170
005D3596  85 FF                     TEST EDI,EDI
005D3598  0F 84 9D 06 00 00         JZ 0x005d3c3b
005D359E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
005D35A1  83 F8 07                  CMP EAX,0x7
005D35A4  0F 87 91 06 00 00         JA 0x005d3c3b
switchD_005d35aa::switchD:
005D35AA  FF 24 85 70 3D 5D 00      JMP dword ptr [EAX*0x4 + 0x5d3d70]
switchD_005d35aa::caseD_0:
005D35B1  80 3F 00                  CMP byte ptr [EDI],0x0
005D35B4  0F 84 81 06 00 00         JZ 0x005d3c3b
005D35BA  80 7F 04 02               CMP byte ptr [EDI + 0x4],0x2
005D35BE  0F 85 77 06 00 00         JNZ 0x005d3c3b
005D35C4  8B 57 06                  MOV EDX,dword ptr [EDI + 0x6]
005D35C7  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005D35CC  3B D0                     CMP EDX,EAX
005D35CE  0F 85 67 06 00 00         JNZ 0x005d3c3b
005D35D4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D35D7  6A 67                     PUSH 0x67
005D35D9  8D 55 DC                  LEA EDX,[EBP + -0x24]
005D35DC  66 8B 48 14               MOV CX,word ptr [EAX + 0x14]
005D35E0  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D35E7  66 F7 D9                  NEG CX
005D35EA  1B C9                     SBB ECX,ECX
005D35EC  83 E1 FC                  AND ECX,0xfffffffc
005D35EF  83 C1 23                  ADD ECX,0x23
005D35F2  51                        PUSH ECX
005D35F3  6A 02                     PUSH 0x2
005D35F5  52                        PUSH EDX
005D35F6  50                        PUSH EAX
005D35F7  8B CB                     MOV ECX,EBX
005D35F9  E8 61 16 E3 FF            CALL 0x00404c5f
005D35FE  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005D3601  F6 D9                     NEG CL
005D3603  1B C9                     SBB ECX,ECX
005D3605  83 C1 02                  ADD ECX,0x2
005D3608  51                        PUSH ECX
005D3609  E9 E6 05 00 00            JMP 0x005d3bf4
switchD_005d35aa::caseD_1:
005D360E  80 3F 00                  CMP byte ptr [EDI],0x0
005D3611  0F 84 24 06 00 00         JZ 0x005d3c3b
005D3617  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005D361A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005D361D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D3620  41                        INC ECX
005D3621  40                        INC EAX
005D3622  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005D3625  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005D3628  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005D362B  B8 02 00 00 00            MOV EAX,0x2
005D3630  6A FF                     PUSH -0x1
005D3632  2B D0                     SUB EDX,EAX
005D3634  2B C8                     SUB ECX,EAX
005D3636  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005D3639  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D363C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005D363F  8D 4D DC                  LEA ECX,[EBP + -0x24]
005D3642  66 8B 42 14               MOV AX,word ptr [EDX + 0x14]
005D3646  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D364D  66 F7 D8                  NEG AX
005D3650  1B C0                     SBB EAX,EAX
005D3652  24 FC                     AND AL,0xfc
005D3654  83 C0 23                  ADD EAX,0x23
005D3657  50                        PUSH EAX
005D3658  6A 00                     PUSH 0x0
005D365A  51                        PUSH ECX
005D365B  52                        PUSH EDX
005D365C  8B CB                     MOV ECX,EBX
005D365E  E8 FC 15 E3 FF            CALL 0x00404c5f
005D3663  8A 47 02                  MOV AL,byte ptr [EDI + 0x2]
005D3666  3C FF                     CMP AL,0xff
005D3668  0F 84 CD 05 00 00         JZ 0x005d3c3b
005D366E  25 FF 00 00 00            AND EAX,0xff
005D3673  83 F8 07                  CMP EAX,0x7
005D3676  77 3F                     JA 0x005d36b7
switchD_005d3678::switchD:
005D3678  FF 24 85 90 3D 5D 00      JMP dword ptr [EAX*0x4 + 0x5d3d90]
switchD_005d3678::caseD_0:
005D367F  B8 FC 00 00 00            MOV EAX,0xfc
005D3684  EB 36                     JMP 0x005d36bc
switchD_005d3678::caseD_1:
005D3686  B8 FA 00 00 00            MOV EAX,0xfa
005D368B  EB 2F                     JMP 0x005d36bc
switchD_005d3678::caseD_2:
005D368D  B8 FB 00 00 00            MOV EAX,0xfb
005D3692  EB 28                     JMP 0x005d36bc
switchD_005d3678::caseD_3:
005D3694  B8 F9 00 00 00            MOV EAX,0xf9
005D3699  EB 21                     JMP 0x005d36bc
switchD_005d3678::caseD_4:
005D369B  B8 FD 00 00 00            MOV EAX,0xfd
005D36A0  EB 1A                     JMP 0x005d36bc
switchD_005d3678::caseD_5:
005D36A2  B8 FE 00 00 00            MOV EAX,0xfe
005D36A7  EB 13                     JMP 0x005d36bc
switchD_005d3678::caseD_6:
005D36A9  B8 F3 00 00 00            MOV EAX,0xf3
005D36AE  EB 0C                     JMP 0x005d36bc
switchD_005d3678::caseD_7:
005D36B0  B8 07 00 00 00            MOV EAX,0x7
005D36B5  EB 05                     JMP 0x005d36bc
switchD_005d3678::default:
005D36B7  B8 FF 00 00 00            MOV EAX,0xff
LAB_005d36bc:
005D36BC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D36BF  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D36C2  50                        PUSH EAX
005D36C3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D36C6  83 C0 FC                  ADD EAX,-0x4
005D36C9  83 C1 FC                  ADD ECX,-0x4
005D36CC  50                        PUSH EAX
005D36CD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005D36D0  83 C2 02                  ADD EDX,0x2
005D36D3  51                        PUSH ECX
005D36D4  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D36DB  83 C0 02                  ADD EAX,0x2
005D36DE  52                        PUSH EDX
005D36DF  50                        PUSH EAX
005D36E0  6A 00                     PUSH 0x0
005D36E2  51                        PUSH ECX
005D36E3  E8 88 0A 0E 00            CALL 0x006b4170
005D36E8  E9 4E 05 00 00            JMP 0x005d3c3b
switchD_005d35aa::caseD_2:
005D36ED  80 3F 00                  CMP byte ptr [EDI],0x0
005D36F0  0F 84 45 05 00 00         JZ 0x005d3c3b
005D36F6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D36F9  6A 67                     PUSH 0x67
005D36FB  8D 4D DC                  LEA ECX,[EBP + -0x24]
005D36FE  66 8B 42 14               MOV AX,word ptr [EDX + 0x14]
005D3702  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3709  66 F7 D8                  NEG AX
005D370C  1B C0                     SBB EAX,EAX
005D370E  24 FC                     AND AL,0xfc
005D3710  83 C0 23                  ADD EAX,0x23
005D3713  50                        PUSH EAX
005D3714  6A 02                     PUSH 0x2
005D3716  51                        PUSH ECX
005D3717  52                        PUSH EDX
005D3718  8B CB                     MOV ECX,EBX
005D371A  E8 40 15 E3 FF            CALL 0x00404c5f
005D371F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D3722  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D3725  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D3728  50                        PUSH EAX
005D3729  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005D372C  51                        PUSH ECX
005D372D  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3734  52                        PUSH EDX
005D3735  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D373B  50                        PUSH EAX
005D373C  6A 00                     PUSH 0x0
005D373E  51                        PUSH ECX
005D373F  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D3742  E8 49 D3 13 00            CALL 0x00710a90
005D3747  33 C0                     XOR EAX,EAX
005D3749  8A 47 03                  MOV AL,byte ptr [EDI + 0x3]
005D374C  48                        DEC EAX
005D374D  74 2C                     JZ 0x005d377b
005D374F  48                        DEC EAX
005D3750  74 07                     JZ 0x005d3759
005D3752  BF 4C A2 7C 00            MOV EDI,0x7ca24c
005D3757  EB 27                     JMP 0x005d3780
LAB_005d3759:
005D3759  BF 48 A2 7C 00            MOV EDI,0x7ca248
005D375E  83 C9 FF                  OR ECX,0xffffffff
005D3761  33 C0                     XOR EAX,EAX
005D3763  F2 AE                     SCASB.REPNE ES:EDI
005D3765  F7 D1                     NOT ECX
005D3767  2B F9                     SUB EDI,ECX
005D3769  8B D1                     MOV EDX,ECX
005D376B  8B F7                     MOV ESI,EDI
005D376D  BF 3A F3 80 00            MOV EDI,0x80f33a
005D3772  C1 E9 02                  SHR ECX,0x2
005D3775  F3 A5                     MOVSD.REP ES:EDI,ESI
005D3777  8B CA                     MOV ECX,EDX
005D3779  EB 20                     JMP 0x005d379b
LAB_005d377b:
005D377B  BF 50 A2 7C 00            MOV EDI,0x7ca250
LAB_005d3780:
005D3780  83 C9 FF                  OR ECX,0xffffffff
005D3783  33 C0                     XOR EAX,EAX
005D3785  F2 AE                     SCASB.REPNE ES:EDI
005D3787  F7 D1                     NOT ECX
005D3789  2B F9                     SUB EDI,ECX
005D378B  8B C1                     MOV EAX,ECX
005D378D  8B F7                     MOV ESI,EDI
005D378F  BF 3A F3 80 00            MOV EDI,0x80f33a
005D3794  C1 E9 02                  SHR ECX,0x2
005D3797  F3 A5                     MOVSD.REP ES:EDI,ESI
005D3799  8B C8                     MOV ECX,EAX
LAB_005d379b:
005D379B  83 E1 03                  AND ECX,0x3
005D379E  6A 02                     PUSH 0x2
005D37A0  F3 A4                     MOVSB.REP ES:EDI,ESI
005D37A2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D37A8  6A FF                     PUSH -0x1
005D37AA  6A FF                     PUSH -0x1
005D37AC  68 3A F3 80 00            PUSH 0x80f33a
005D37B1  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D37B4  E8 07 E2 13 00            CALL 0x007119c0
005D37B9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005D37BC  E9 7A 04 00 00            JMP 0x005d3c3b
switchD_005d35aa::caseD_3:
005D37C1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D37C4  6A 67                     PUSH 0x67
005D37C6  8D 4D DC                  LEA ECX,[EBP + -0x24]
005D37C9  66 8B 42 14               MOV AX,word ptr [EDX + 0x14]
005D37CD  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D37D4  66 F7 D8                  NEG AX
005D37D7  1B C0                     SBB EAX,EAX
005D37D9  24 FC                     AND AL,0xfc
005D37DB  83 C0 23                  ADD EAX,0x23
005D37DE  50                        PUSH EAX
005D37DF  6A 02                     PUSH 0x2
005D37E1  51                        PUSH ECX
005D37E2  52                        PUSH EDX
005D37E3  8B CB                     MOV ECX,EBX
005D37E5  E8 75 14 E3 FF            CALL 0x00404c5f
005D37EA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D37ED  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D37F0  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D37F3  50                        PUSH EAX
005D37F4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005D37F7  51                        PUSH ECX
005D37F8  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D37FF  52                        PUSH EDX
005D3800  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D3806  50                        PUSH EAX
005D3807  6A 00                     PUSH 0x0
005D3809  51                        PUSH ECX
005D380A  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D380D  E8 7E D2 13 00            CALL 0x00710a90
005D3812  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D3815  6A 02                     PUSH 0x2
005D3817  6A FF                     PUSH -0x1
005D3819  6A FF                     PUSH -0x1
005D381B  50                        PUSH EAX
005D381C  68 10 23 7C 00            PUSH 0x7c2310
005D3821  57                        PUSH EDI
005D3822  8B CB                     MOV ECX,EBX
005D3824  E8 E4 E3 E2 FF            CALL 0x00401c0d
005D3829  50                        PUSH EAX
005D382A  E9 8E 00 00 00            JMP 0x005d38bd
switchD_005d35aa::caseD_4:
005D382F  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3836  6A 67                     PUSH 0x67
005D3838  6A 67                     PUSH 0x67
005D383A  8D 4D DC                  LEA ECX,[EBP + -0x24]
005D383D  6A 02                     PUSH 0x2
005D383F  51                        PUSH ECX
005D3840  52                        PUSH EDX
005D3841  8B CB                     MOV ECX,EBX
005D3843  E8 17 14 E3 FF            CALL 0x00404c5f
005D3848  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D384B  3C 02                     CMP AL,0x2
005D384D  0F 82 E8 03 00 00         JC 0x005d3c3b
005D3853  3C 03                     CMP AL,0x3
005D3855  0F 86 87 00 00 00         JBE 0x005d38e2
005D385B  3C 04                     CMP AL,0x4
005D385D  0F 85 D8 03 00 00         JNZ 0x005d3c3b
005D3863  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
005D3866  33 C9                     XOR ECX,ECX
005D3868  8A 4F 05                  MOV CL,byte ptr [EDI + 0x5]
005D386B  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005D386E  73 0B                     JNC 0x005d387b
005D3870  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005D3873  0F AF F9                  IMUL EDI,ECX
005D3876  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
005D3879  EB 02                     JMP 0x005d387d
LAB_005d387b:
005D387B  33 FF                     XOR EDI,EDI
LAB_005d387d:
005D387D  85 FF                     TEST EDI,EDI
005D387F  0F 84 B6 03 00 00         JZ 0x005d3c3b
005D3885  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D3888  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D388B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D388E  50                        PUSH EAX
005D388F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005D3892  51                        PUSH ECX
005D3893  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D389A  52                        PUSH EDX
005D389B  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D38A1  50                        PUSH EAX
005D38A2  6A 00                     PUSH 0x0
005D38A4  51                        PUSH ECX
005D38A5  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D38A8  E8 E3 D1 13 00            CALL 0x00710a90
005D38AD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D38B0  6A 02                     PUSH 0x2
005D38B2  6A FF                     PUSH -0x1
005D38B4  6A FF                     PUSH -0x1
005D38B6  50                        PUSH EAX
005D38B7  68 74 72 7C 00            PUSH 0x7c7274
005D38BC  57                        PUSH EDI
LAB_005d38bd:
005D38BD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D38C3  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
005D38C6  52                        PUSH EDX
005D38C7  E8 A3 F9 E2 FF            CALL 0x0040326f
005D38CC  83 C4 10                  ADD ESP,0x10
005D38CF  50                        PUSH EAX
005D38D0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D38D5  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D38D8  E8 E3 E0 13 00            CALL 0x007119c0
005D38DD  E9 59 03 00 00            JMP 0x005d3c3b
LAB_005d38e2:
005D38E2  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005D38E5  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D38E8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005D38EB  51                        PUSH ECX
005D38EC  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005D38EF  52                        PUSH EDX
005D38F0  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D38F7  50                        PUSH EAX
005D38F8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D38FD  51                        PUSH ECX
005D38FE  6A 00                     PUSH 0x0
005D3900  52                        PUSH EDX
005D3901  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D3904  E8 87 D1 13 00            CALL 0x00710a90
005D3909  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D390C  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D3912  6A 02                     PUSH 0x2
005D3914  6A FF                     PUSH -0x1
005D3916  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005D3919  6A FF                     PUSH -0x1
005D391B  51                        PUSH ECX
005D391C  83 C7 0A                  ADD EDI,0xa
005D391F  68 74 72 7C 00            PUSH 0x7c7274
005D3924  57                        PUSH EDI
005D3925  50                        PUSH EAX
005D3926  E8 44 F9 E2 FF            CALL 0x0040326f
005D392B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D3931  83 C4 10                  ADD ESP,0x10
005D3934  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D3937  50                        PUSH EAX
005D3938  E8 83 E0 13 00            CALL 0x007119c0
005D393D  E9 F9 02 00 00            JMP 0x005d3c3b
switchD_005d35aa::caseD_5:
005D3942  80 3F 00                  CMP byte ptr [EDI],0x0
005D3945  0F 84 F0 02 00 00         JZ 0x005d3c3b
005D394B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D394E  6A 67                     PUSH 0x67
005D3950  8D 4D DC                  LEA ECX,[EBP + -0x24]
005D3953  66 8B 42 14               MOV AX,word ptr [EDX + 0x14]
005D3957  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D395E  66 F7 D8                  NEG AX
005D3961  1B C0                     SBB EAX,EAX
005D3963  24 FC                     AND AL,0xfc
005D3965  83 C0 23                  ADD EAX,0x23
005D3968  50                        PUSH EAX
005D3969  6A 02                     PUSH 0x2
005D396B  51                        PUSH ECX
005D396C  52                        PUSH EDX
005D396D  8B CB                     MOV ECX,EBX
005D396F  E8 EB 12 E3 FF            CALL 0x00404c5f
005D3974  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D3977  84 C0                     TEST AL,AL
005D3979  0F 84 BC 02 00 00         JZ 0x005d3c3b
005D397F  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D3984  84 C0                     TEST AL,AL
005D3986  74 74                     JZ 0x005d39fc
005D3988  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D398E  33 C0                     XOR EAX,EAX
005D3990  8A 47 4A                  MOV AL,byte ptr [EDI + 0x4a]
005D3993  83 C0 41                  ADD EAX,0x41
005D3996  50                        PUSH EAX
005D3997  51                        PUSH ECX
005D3998  68 4A 1F 00 00            PUSH 0x1f4a
005D399D  E8 9E C7 0D 00            CALL 0x006b0140
005D39A2  50                        PUSH EAX
005D39A3  68 08 D5 7C 00            PUSH 0x7cd508
005D39A8  68 3A F3 80 00            PUSH 0x80f33a
005D39AD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D39B3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D39B6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D39B9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D39BC  83 C4 10                  ADD ESP,0x10
005D39BF  52                        PUSH EDX
005D39C0  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005D39C3  50                        PUSH EAX
005D39C4  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D39CB  51                        PUSH ECX
005D39CC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D39D2  52                        PUSH EDX
005D39D3  6A 00                     PUSH 0x0
005D39D5  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D39D8  50                        PUSH EAX
005D39D9  E8 B2 D0 13 00            CALL 0x00710a90
005D39DE  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D39E4  6A 02                     PUSH 0x2
005D39E6  6A FF                     PUSH -0x1
005D39E8  6A FF                     PUSH -0x1
005D39EA  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D39ED  68 3A F3 80 00            PUSH 0x80f33a
005D39F2  E8 C9 DF 13 00            CALL 0x007119c0
005D39F7  E9 3F 02 00 00            JMP 0x005d3c3b
LAB_005d39fc:
005D39FC  A0 4D 87 80 00            MOV AL,[0x0080874d]
005D3A01  3C FF                     CMP AL,0xff
005D3A03  0F 84 32 02 00 00         JZ 0x005d3c3b
005D3A09  8A 4F 02                  MOV CL,byte ptr [EDI + 0x2]
005D3A0C  80 F9 FF                  CMP CL,0xff
005D3A0F  0F 84 26 02 00 00         JZ 0x005d3c3b
005D3A15  3A C1                     CMP AL,CL
005D3A17  0F 84 1E 02 00 00         JZ 0x005d3c3b
005D3A1D  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
005D3A24  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
005D3A27  74 6B                     JZ 0x005d3a94
005D3A29  33 C9                     XOR ECX,ECX
005D3A2B  8A C8                     MOV CL,AL
005D3A2D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
005D3A30  8B F9                     MOV EDI,ECX
005D3A32  25 FF 00 00 00            AND EAX,0xff
005D3A37  8A 8C F8 4F 8A 80 00      MOV CL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
005D3A3E  84 C9                     TEST CL,CL
005D3A40  75 12                     JNZ 0x005d3a54
005D3A42  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
005D3A49  84 D2                     TEST DL,DL
005D3A4B  75 07                     JNZ 0x005d3a54
005D3A4D  B8 FE FF FF FF            MOV EAX,0xfffffffe
005D3A52  EB 42                     JMP 0x005d3a96
LAB_005d3a54:
005D3A54  80 F9 01                  CMP CL,0x1
005D3A57  75 10                     JNZ 0x005d3a69
005D3A59  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
005D3A60  84 D2                     TEST DL,DL
005D3A62  75 05                     JNZ 0x005d3a69
005D3A64  83 C8 FF                  OR EAX,0xffffffff
005D3A67  EB 2D                     JMP 0x005d3a96
LAB_005d3a69:
005D3A69  84 C9                     TEST CL,CL
005D3A6B  75 11                     JNZ 0x005d3a7e
005D3A6D  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
005D3A75  75 07                     JNZ 0x005d3a7e
005D3A77  B8 01 00 00 00            MOV EAX,0x1
005D3A7C  EB 18                     JMP 0x005d3a96
LAB_005d3a7e:
005D3A7E  80 F9 01                  CMP CL,0x1
005D3A81  75 11                     JNZ 0x005d3a94
005D3A83  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
005D3A8B  75 07                     JNZ 0x005d3a94
005D3A8D  B8 02 00 00 00            MOV EAX,0x2
005D3A92  EB 02                     JMP 0x005d3a96
LAB_005d3a94:
005D3A94  33 C0                     XOR EAX,EAX
LAB_005d3a96:
005D3A96  83 C0 02                  ADD EAX,0x2
005D3A99  83 F8 04                  CMP EAX,0x4
005D3A9C  77 20                     JA 0x005d3abe
switchD_005d3a9e::switchD:
005D3A9E  FF 24 85 B0 3D 5D 00      JMP dword ptr [EAX*0x4 + 0x5d3db0]
switchD_005d3a9e::caseD_fffffffe:
005D3AA5  33 C0                     XOR EAX,EAX
005D3AA7  EB 18                     JMP 0x005d3ac1
switchD_005d3a9e::caseD_2:
005D3AA9  B8 03 00 00 00            MOV EAX,0x3
005D3AAE  EB 11                     JMP 0x005d3ac1
switchD_005d3a9e::caseD_ffffffff:
005D3AB0  B8 02 00 00 00            MOV EAX,0x2
005D3AB5  EB 0A                     JMP 0x005d3ac1
switchD_005d3a9e::caseD_1:
005D3AB7  B8 01 00 00 00            MOV EAX,0x1
005D3ABC  EB 03                     JMP 0x005d3ac1
switchD_005d3a9e::caseD_0:
005D3ABE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005d3ac1:
005D3AC1  48                        DEC EAX
005D3AC2  0F 88 73 01 00 00         JS 0x005d3c3b
005D3AC8  8B 93 4B 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f4b]
005D3ACE  50                        PUSH EAX
005D3ACF  E9 26 01 00 00            JMP 0x005d3bfa
switchD_005d35aa::caseD_6:
005D3AD4  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3ADB  6A 67                     PUSH 0x67
005D3ADD  6A 67                     PUSH 0x67
005D3ADF  8D 55 DC                  LEA EDX,[EBP + -0x24]
005D3AE2  6A 02                     PUSH 0x2
005D3AE4  52                        PUSH EDX
005D3AE5  50                        PUSH EAX
005D3AE6  8B CB                     MOV ECX,EBX
005D3AE8  E8 72 11 E3 FF            CALL 0x00404c5f
005D3AED  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D3AF0  3C 02                     CMP AL,0x2
005D3AF2  74 08                     JZ 0x005d3afc
005D3AF4  3C 03                     CMP AL,0x3
005D3AF6  0F 85 3F 01 00 00         JNZ 0x005d3c3b
LAB_005d3afc:
005D3AFC  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D3B01  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005D3B07  84 C0                     TEST AL,AL
005D3B09  74 05                     JZ 0x005d3b10
005D3B0B  39 4F 06                  CMP dword ptr [EDI + 0x6],ECX
005D3B0E  75 11                     JNZ 0x005d3b21
LAB_005d3b10:
005D3B10  84 C0                     TEST AL,AL
005D3B12  0F 85 23 01 00 00         JNZ 0x005d3c3b
005D3B18  39 4F 06                  CMP dword ptr [EDI + 0x6],ECX
005D3B1B  0F 85 1A 01 00 00         JNZ 0x005d3c3b
LAB_005d3b21:
005D3B21  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005D3B24  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D3B27  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005D3B2A  51                        PUSH ECX
005D3B2B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005D3B2E  52                        PUSH EDX
005D3B2F  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3B36  50                        PUSH EAX
005D3B37  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D3B3C  51                        PUSH ECX
005D3B3D  6A 00                     PUSH 0x0
005D3B3F  52                        PUSH EDX
005D3B40  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D3B43  E8 48 CF 13 00            CALL 0x00710a90
005D3B48  8B 4F 4B                  MOV ECX,dword ptr [EDI + 0x4b]
005D3B4B  51                        PUSH ECX
005D3B4C  68 E4 1A 7C 00            PUSH 0x7c1ae4
005D3B51  68 3A F3 80 00            PUSH 0x80f33a
005D3B56  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D3B5C  BF 3A F3 80 00            MOV EDI,0x80f33a
005D3B61  83 C9 FF                  OR ECX,0xffffffff
005D3B64  33 C0                     XOR EAX,EAX
005D3B66  83 C4 0C                  ADD ESP,0xc
005D3B69  F2 AE                     SCASB.REPNE ES:EDI
005D3B6B  F7 D1                     NOT ECX
005D3B6D  49                        DEC ECX
005D3B6E  83 F9 04                  CMP ECX,0x4
005D3B71  76 26                     JBE 0x005d3b99
005D3B73  BF 00 D5 7C 00            MOV EDI,0x7cd500
005D3B78  83 C9 FF                  OR ECX,0xffffffff
005D3B7B  F2 AE                     SCASB.REPNE ES:EDI
005D3B7D  F7 D1                     NOT ECX
005D3B7F  2B F9                     SUB EDI,ECX
005D3B81  8B D1                     MOV EDX,ECX
005D3B83  8B F7                     MOV ESI,EDI
005D3B85  BF 3A F3 80 00            MOV EDI,0x80f33a
005D3B8A  C1 E9 02                  SHR ECX,0x2
005D3B8D  F3 A5                     MOVSD.REP ES:EDI,ESI
005D3B8F  8B CA                     MOV ECX,EDX
005D3B91  83 E1 03                  AND ECX,0x3
005D3B94  F3 A4                     MOVSB.REP ES:EDI,ESI
005D3B96  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_005d3b99:
005D3B99  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D3B9E  6A 02                     PUSH 0x2
005D3BA0  6A FF                     PUSH -0x1
005D3BA2  6A FF                     PUSH -0x1
005D3BA4  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D3BA7  68 3A F3 80 00            PUSH 0x80f33a
005D3BAC  E8 0F DE 13 00            CALL 0x007119c0
005D3BB1  E9 85 00 00 00            JMP 0x005d3c3b
switchD_005d35aa::caseD_7:
005D3BB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D3BB9  6A 67                     PUSH 0x67
005D3BBB  8D 45 DC                  LEA EAX,[EBP + -0x24]
005D3BBE  66 8B 51 14               MOV DX,word ptr [ECX + 0x14]
005D3BC2  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3BC9  66 F7 DA                  NEG DX
005D3BCC  1B D2                     SBB EDX,EDX
005D3BCE  83 E2 FC                  AND EDX,0xfffffffc
005D3BD1  83 C2 23                  ADD EDX,0x23
005D3BD4  52                        PUSH EDX
005D3BD5  6A 02                     PUSH 0x2
005D3BD7  50                        PUSH EAX
005D3BD8  51                        PUSH ECX
005D3BD9  8B CB                     MOV ECX,EBX
005D3BDB  E8 7F 10 E3 FF            CALL 0x00404c5f
005D3BE0  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D3BE3  3C 02                     CMP AL,0x2
005D3BE5  75 07                     JNZ 0x005d3bee
005D3BE7  8A 4F 4F                  MOV CL,byte ptr [EDI + 0x4f]
005D3BEA  84 C9                     TEST CL,CL
005D3BEC  75 04                     JNZ 0x005d3bf2
LAB_005d3bee:
005D3BEE  3C 04                     CMP AL,0x4
005D3BF0  75 49                     JNZ 0x005d3c3b
LAB_005d3bf2:
005D3BF2  6A 00                     PUSH 0x0
LAB_005d3bf4:
005D3BF4  8B 93 4F 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f4f]
LAB_005d3bfa:
005D3BFA  52                        PUSH EDX
005D3BFB  E8 A0 77 13 00            CALL 0x0070b3a0
005D3C00  8B C8                     MOV ECX,EAX
005D3C02  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D3C05  51                        PUSH ECX
005D3C06  6A 06                     PUSH 0x6
005D3C08  2B 41 08                  SUB EAX,dword ptr [ECX + 0x8]
005D3C0B  99                        CDQ
005D3C0C  2B C2                     SUB EAX,EDX
005D3C0E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D3C11  D1 F8                     SAR EAX,0x1
005D3C13  8D 44 10 01               LEA EAX,[EAX + EDX*0x1 + 0x1]
005D3C17  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005D3C1A  50                        PUSH EAX
005D3C1B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D3C1E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005D3C21  2B C2                     SUB EAX,EDX
005D3C23  99                        CDQ
005D3C24  2B C2                     SUB EAX,EDX
005D3C26  D1 F8                     SAR EAX,0x1
005D3C28  03 C1                     ADD EAX,ECX
005D3C2A  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D3C31  50                        PUSH EAX
005D3C32  51                        PUSH ECX
005D3C33  E8 F1 F5 E2 FF            CALL 0x00403229
005D3C38  83 C4 1C                  ADD ESP,0x1c
switchD_005d35aa::default:
005D3C3B  8B 94 B3 CC 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20cc]
005D3C42  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D3C47  52                        PUSH EDX
005D3C48  50                        PUSH EAX
005D3C49  E8 82 F9 0D 00            CALL 0x006b35d0
005D3C4E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D3C51  66 83 79 14 03            CMP word ptr [ECX + 0x14],0x3
005D3C56  75 0D                     JNZ 0x005d3c65
005D3C58  6A FF                     PUSH -0x1
005D3C5A  6A 01                     PUSH 0x1
005D3C5C  6A 09                     PUSH 0x9
005D3C5E  8B CB                     MOV ECX,EBX
005D3C60  E8 8C 0F E3 FF            CALL 0x00404bf1
LAB_005d3c65:
005D3C65  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
005D3C6B  33 C0                     XOR EAX,EAX
005D3C6D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D3C73  5F                        POP EDI
005D3C74  5E                        POP ESI
005D3C75  5B                        POP EBX
005D3C76  8B E5                     MOV ESP,EBP
005D3C78  5D                        POP EBP
005D3C79  C2 04 00                  RET 0x4
LAB_005d3c7c:
005D3C7C  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
005D3C82  68 E4 D4 7C 00            PUSH 0x7cd4e4
005D3C87  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D3C8C  56                        PUSH ESI
005D3C8D  57                        PUSH EDI
005D3C8E  68 86 09 00 00            PUSH 0x986
005D3C93  68 58 D2 7C 00            PUSH 0x7cd258
005D3C98  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D3C9D  E8 2E 98 0D 00            CALL 0x006ad4d0
005D3CA2  83 C4 18                  ADD ESP,0x18
005D3CA5  85 C0                     TEST EAX,EAX
005D3CA7  74 01                     JZ 0x005d3caa
005D3CA9  CC                        INT3
LAB_005d3caa:
005D3CAA  68 86 09 00 00            PUSH 0x986
005D3CAF  68 58 D2 7C 00            PUSH 0x7cd258
005D3CB4  57                        PUSH EDI
005D3CB5  56                        PUSH ESI
005D3CB6  E8 85 21 0D 00            CALL 0x006a5e40
005D3CBB  5F                        POP EDI
005D3CBC  5E                        POP ESI
005D3CBD  B8 FF FF 00 00            MOV EAX,0xffff
005D3CC2  5B                        POP EBX
005D3CC3  8B E5                     MOV ESP,EBP
005D3CC5  5D                        POP EBP
005D3CC6  C2 04 00                  RET 0x4
