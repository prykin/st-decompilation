FUN_006e1460:
006E1460  55                        PUSH EBP
006E1461  8B EC                     MOV EBP,ESP
006E1463  6A FF                     PUSH -0x1
006E1465  68 38 E1 79 00            PUSH 0x79e138
006E146A  68 64 D9 72 00            PUSH 0x72d964
006E146F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006E1475  50                        PUSH EAX
006E1476  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006E147D  81 EC D4 00 00 00         SUB ESP,0xd4
006E1483  53                        PUSH EBX
006E1484  56                        PUSH ESI
006E1485  57                        PUSH EDI
006E1486  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006E1489  8B F1                     MOV ESI,ECX
006E148B  33 C9                     XOR ECX,ECX
006E148D  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
006E1493  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006E1496  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
006E1499  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
006E149F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E14A2  3B C1                     CMP EAX,ECX
006E14A4  74 13                     JZ 0x006e14b9
006E14A6  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006E14A9  25 00 11 00 00            AND EAX,0x1100
006E14AE  3D 00 01 00 00            CMP EAX,0x100
006E14B3  0F 84 43 07 00 00         JZ 0x006e1bfc
LAB_006e14b9:
006E14B9  39 8E DC 02 00 00         CMP dword ptr [ESI + 0x2dc],ECX
006E14BF  0F 85 37 07 00 00         JNZ 0x006e1bfc
006E14C5  BF 01 00 00 00            MOV EDI,0x1
006E14CA  89 BE D8 02 00 00         MOV dword ptr [ESI + 0x2d8],EDI
006E14D0  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006E14D3  51                        PUSH ECX
006E14D4  8D 95 28 FF FF FF         LEA EDX,[EBP + 0xffffff28]
006E14DA  52                        PUSH EDX
006E14DB  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
006E14E1  50                        PUSH EAX
006E14E2  8D 4D 10                  LEA ECX,[EBP + 0x10]
006E14E5  51                        PUSH ECX
006E14E6  8D 55 08                  LEA EDX,[EBP + 0x8]
006E14E9  52                        PUSH EDX
006E14EA  8B CE                     MOV ECX,ESI
006E14EC  E8 2F FE FF FF            CALL 0x006e1320
006E14F1  39 BE 24 01 00 00         CMP dword ptr [ESI + 0x124],EDI
006E14F7  75 18                     JNZ 0x006e1511
006E14F9  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
006E14FF  29 86 74 03 00 00         SUB dword ptr [ESI + 0x374],EAX
006E1505  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006E150B  29 8E 78 03 00 00         SUB dword ptr [ESI + 0x378],ECX
LAB_006e1511:
006E1511  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E1514  52                        PUSH EDX
006E1515  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E1518  50                        PUSH EAX
006E1519  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E151C  51                        PUSH ECX
006E151D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E1520  52                        PUSH EDX
006E1521  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E1527  50                        PUSH EAX
006E1528  8B CE                     MOV ECX,ESI
006E152A  E8 E1 C0 FF FF            CALL 0x006dd610
006E152F  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006E1532  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006E1535  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006E1538  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
006E153B  8B 5E 38                  MOV EBX,dword ptr [ESI + 0x38]
006E153E  2B D9                     SUB EBX,ECX
006E1540  89 5D 8C                  MOV dword ptr [EBP + -0x74],EBX
006E1543  8B C2                     MOV EAX,EDX
006E1545  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006E1548  2B D0                     SUB EDX,EAX
006E154A  89 95 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EDX
006E1550  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006E1553  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006E1556  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
006E155C  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
006E1562  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
006E1565  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
006E1568  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006E156B  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E156E  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
006E1571  8B 56 74                  MOV EDX,dword ptr [ESI + 0x74]
006E1574  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006E157A  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
006E1580  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
006E1583  8B 56 7C                  MOV EDX,dword ptr [ESI + 0x7c]
006E1586  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
006E158C  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
006E1592  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
006E1598  99                        CDQ
006E1599  8B F8                     MOV EDI,EAX
006E159B  33 FA                     XOR EDI,EDX
006E159D  2B FA                     SUB EDI,EDX
006E159F  89 BD 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EDI
006E15A5  8B C3                     MOV EAX,EBX
006E15A7  99                        CDQ
006E15A8  2B C2                     SUB EAX,EDX
006E15AA  D1 F8                     SAR EAX,0x1
006E15AC  3B F8                     CMP EDI,EAX
006E15AE  7F 1C                     JG 0x006e15cc
006E15B0  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
006E15B6  99                        CDQ
006E15B7  8B D8                     MOV EBX,EAX
006E15B9  33 DA                     XOR EBX,EDX
006E15BB  2B DA                     SUB EBX,EDX
006E15BD  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006E15C3  99                        CDQ
006E15C4  2B C2                     SUB EAX,EDX
006E15C6  D1 F8                     SAR EAX,0x1
006E15C8  3B D8                     CMP EBX,EAX
006E15CA  7E 2A                     JLE 0x006e15f6
LAB_006e15cc:
006E15CC  83 BE 24 01 00 00 01      CMP dword ptr [ESI + 0x124],0x1
006E15D3  74 21                     JZ 0x006e15f6
006E15D5  8B CE                     MOV ECX,ESI
006E15D7  E8 04 C6 FF FF            CALL 0x006ddbe0
006E15DC  8B CE                     MOV ECX,ESI
006E15DE  E8 6D FA FF FF            CALL 0x006e1050
006E15E3  33 C0                     XOR EAX,EAX
006E15E5  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006E15EB  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
006E15F1  E9 06 06 00 00            JMP 0x006e1bfc
LAB_006e15f6:
006E15F6  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006E15F9  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006E15FC  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006E15FF  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006E1602  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
006E1605  8B 56 6C                  MOV EDX,dword ptr [ESI + 0x6c]
006E1608  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006E160B  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006E160E  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
006E1611  8B 56 74                  MOV EDX,dword ptr [ESI + 0x74]
006E1614  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
006E1617  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
006E161A  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
006E161D  8B 56 7C                  MOV EDX,dword ptr [ESI + 0x7c]
006E1620  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
006E1623  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
006E1626  DD 46 68                  FLD double ptr [ESI + 0x68]
006E1629  DC 66 60                  FSUB double ptr [ESI + 0x60]
006E162C  DA 8D 20 FF FF FF         FIMUL dword ptr [EBP + 0xffffff20]
006E1632  DA 75 8C                  FIDIV dword ptr [EBP + -0x74]
006E1635  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
006E163B  99                        CDQ
006E163C  33 C2                     XOR EAX,EDX
006E163E  2B C2                     SUB EAX,EDX
006E1640  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
006E1646  DD 46 78                  FLD double ptr [ESI + 0x78]
006E1649  DC 66 70                  FSUB double ptr [ESI + 0x70]
006E164C  DA 8D 1C FF FF FF         FIMUL dword ptr [EBP + 0xffffff1c]
006E1652  DA B5 38 FF FF FF         FIDIV dword ptr [EBP + 0xffffff38]
006E1658  DD 9D 54 FF FF FF         FSTP double ptr [EBP + 0xffffff54]
006E165E  89 8D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ECX
006E1664  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006E1667  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
006E166D  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
006E1673  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
006E1679  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006E167C  2B D7                     SUB EDX,EDI
006E167E  89 95 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EDX
006E1684  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
006E168A  2B D0                     SUB EDX,EAX
006E168C  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006E1692  33 DB                     XOR EBX,EBX
006E1694  8B 86 B0 02 00 00         MOV EAX,dword ptr [ESI + 0x2b0]
006E169A  85 C0                     TEST EAX,EAX
006E169C  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
006E16A2  74 06                     JZ 0x006e16aa
006E16A4  01 96 C8 02 00 00         ADD dword ptr [ESI + 0x2c8],EDX
LAB_006e16aa:
006E16AA  85 D2                     TEST EDX,EDX
006E16AC  7D 53                     JGE 0x006e1701
006E16AE  29 95 44 FF FF FF         SUB dword ptr [EBP + 0xffffff44],EDX
006E16B4  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006E16BA  03 CA                     ADD ECX,EDX
006E16BC  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006E16BF  DD 46 68                  FLD double ptr [ESI + 0x68]
006E16C2  D8 E1                     FSUB ST0,ST1
006E16C4  DD 5D E0                  FSTP double ptr [EBP + -0x20]
006E16C7  DD D8                     FSTP ST0
006E16C9  85 C0                     TEST EAX,EAX
006E16CB  74 77                     JZ 0x006e1744
006E16CD  8B BE C0 02 00 00         MOV EDI,dword ptr [ESI + 0x2c0]
006E16D3  8B D7                     MOV EDX,EDI
006E16D5  F7 DA                     NEG EDX
006E16D7  39 96 C8 02 00 00         CMP dword ptr [ESI + 0x2c8],EDX
006E16DD  7F 13                     JG 0x006e16f2
LAB_006e16df:
006E16DF  8B 8E C8 02 00 00         MOV ECX,dword ptr [ESI + 0x2c8]
006E16E5  03 CF                     ADD ECX,EDI
006E16E7  89 8E C8 02 00 00         MOV dword ptr [ESI + 0x2c8],ECX
006E16ED  43                        INC EBX
006E16EE  3B CA                     CMP ECX,EDX
006E16F0  7E ED                     JLE 0x006e16df
LAB_006e16f2:
006E16F2  89 9D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EBX
006E16F8  C7 45 88 00 00 00 00      MOV dword ptr [EBP + -0x78],0x0
006E16FF  EB 43                     JMP 0x006e1744
LAB_006e1701:
006E1701  01 95 5C FF FF FF         ADD dword ptr [EBP + 0xffffff5c],EDX
006E1707  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006E170A  DC 46 60                  FADD double ptr [ESI + 0x60]
006E170D  DD 5D C8                  FSTP double ptr [EBP + -0x38]
006E1710  85 C0                     TEST EAX,EAX
006E1712  74 30                     JZ 0x006e1744
006E1714  8B 8E C8 02 00 00         MOV ECX,dword ptr [ESI + 0x2c8]
006E171A  85 C9                     TEST ECX,ECX
006E171C  7E 19                     JLE 0x006e1737
006E171E  8B 96 C0 02 00 00         MOV EDX,dword ptr [ESI + 0x2c0]
LAB_006e1724:
006E1724  8B 8E C8 02 00 00         MOV ECX,dword ptr [ESI + 0x2c8]
006E172A  2B CA                     SUB ECX,EDX
006E172C  89 8E C8 02 00 00         MOV dword ptr [ESI + 0x2c8],ECX
006E1732  43                        INC EBX
006E1733  85 C9                     TEST ECX,ECX
006E1735  7F ED                     JG 0x006e1724
LAB_006e1737:
006E1737  C7 85 70 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x0
006E1741  89 5D 88                  MOV dword ptr [EBP + -0x78],EBX
LAB_006e1744:
006E1744  33 FF                     XOR EDI,EDI
006E1746  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
006E1749  85 C0                     TEST EAX,EAX
006E174B  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006E1751  74 06                     JZ 0x006e1759
006E1753  01 8E CC 02 00 00         ADD dword ptr [ESI + 0x2cc],ECX
LAB_006e1759:
006E1759  85 C9                     TEST ECX,ECX
006E175B  7D 62                     JGE 0x006e17bf
006E175D  29 8D 2C FF FF FF         SUB dword ptr [EBP + 0xffffff2c],ECX
006E1763  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006E1766  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
006E176C  03 CA                     ADD ECX,EDX
006E176E  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
006E1774  DD 85 54 FF FF FF         FLD double ptr [EBP + 0xffffff54]
006E177A  DC 46 70                  FADD double ptr [ESI + 0x70]
006E177D  DD 5D 80                  FSTP double ptr [EBP + -0x80]
006E1780  85 C0                     TEST EAX,EAX
006E1782  0F 84 87 00 00 00         JZ 0x006e180f
006E1788  8B 96 C4 02 00 00         MOV EDX,dword ptr [ESI + 0x2c4]
006E178E  8B CA                     MOV ECX,EDX
006E1790  F7 D9                     NEG ECX
006E1792  39 8E CC 02 00 00         CMP dword ptr [ESI + 0x2cc],ECX
006E1798  7F 16                     JG 0x006e17b0
LAB_006e179a:
006E179A  8B 86 CC 02 00 00         MOV EAX,dword ptr [ESI + 0x2cc]
006E17A0  03 C2                     ADD EAX,EDX
006E17A2  89 86 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EAX
006E17A8  47                        INC EDI
006E17A9  3B C1                     CMP EAX,ECX
006E17AB  7E ED                     JLE 0x006e179a
006E17AD  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
LAB_006e17b0:
006E17B0  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
006E17B3  C7 85 74 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x0
006E17BD  EB 50                     JMP 0x006e180f
LAB_006e17bf:
006E17BF  01 8D 4C FF FF FF         ADD dword ptr [EBP + 0xffffff4c],ECX
006E17C5  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006E17C8  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
006E17CE  DD 46 78                  FLD double ptr [ESI + 0x78]
006E17D1  DC A5 54 FF FF FF         FSUB double ptr [EBP + 0xffffff54]
006E17D7  DD 5D 90                  FSTP double ptr [EBP + -0x70]
006E17DA  85 C0                     TEST EAX,EAX
006E17DC  74 31                     JZ 0x006e180f
006E17DE  8B 86 CC 02 00 00         MOV EAX,dword ptr [ESI + 0x2cc]
006E17E4  85 C0                     TEST EAX,EAX
006E17E6  7E 1A                     JLE 0x006e1802
006E17E8  8B 8E C4 02 00 00         MOV ECX,dword ptr [ESI + 0x2c4]
006E17EE  8B D0                     MOV EDX,EAX
LAB_006e17f0:
006E17F0  2B D1                     SUB EDX,ECX
006E17F2  8B C2                     MOV EAX,EDX
006E17F4  47                        INC EDI
006E17F5  85 C0                     TEST EAX,EAX
006E17F7  7F F7                     JG 0x006e17f0
006E17F9  89 96 CC 02 00 00         MOV dword ptr [ESI + 0x2cc],EDX
006E17FF  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
LAB_006e1802:
006E1802  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
006E1809  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
LAB_006e180f:
006E180F  83 BE 24 01 00 00 01      CMP dword ptr [ESI + 0x124],0x1
006E1816  0F 85 C8 00 00 00         JNZ 0x006e18e4
006E181C  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
006E1822  52                        PUSH EDX
006E1823  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006E1829  50                        PUSH EAX
006E182A  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
006E1830  51                        PUSH ECX
006E1831  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
006E1837  52                        PUSH EDX
006E1838  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
006E183E  50                        PUSH EAX
006E183F  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
006E1845  51                        PUSH ECX
006E1846  8B CE                     MOV ECX,ESI
006E1848  E8 B3 18 00 00            CALL 0x006e3100
LAB_006e184d:
006E184D  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
006E1853  85 C0                     TEST EAX,EAX
006E1855  0F 84 23 02 00 00         JZ 0x006e1a7e
006E185B  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006E185E  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
006E1861  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
006E1868  99                        CDQ
006E1869  33 C2                     XOR EAX,EDX
006E186B  2B C2                     SUB EAX,EDX
006E186D  03 C1                     ADD EAX,ECX
006E186F  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
006E1872  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
006E1878  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
006E187B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006E187E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006E1881  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
006E1884  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
006E1887  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006E188A  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006E188D  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
006E1890  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
006E1893  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
006E1899  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006E189F  89 4E 70                  MOV dword ptr [ESI + 0x70],ECX
006E18A2  89 56 74                  MOV dword ptr [ESI + 0x74],EDX
006E18A5  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
006E18AB  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006E18B1  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
006E18B4  89 4E 7C                  MOV dword ptr [ESI + 0x7c],ECX
006E18B7  85 DB                     TEST EBX,EBX
006E18B9  0F 8E A3 01 00 00         JLE 0x006e1a62
006E18BF  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006E18C2  39 95 70 FF FF FF         CMP dword ptr [EBP + 0xffffff70],EDX
006E18C8  0F 8E 4C 01 00 00         JLE 0x006e1a1a
006E18CE  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
006E18D4  2B C3                     SUB EAX,EBX
006E18D6  8B 8E B0 02 00 00         MOV ECX,dword ptr [ESI + 0x2b0]
006E18DC  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
006E18DF  E9 3C 01 00 00            JMP 0x006e1a20
LAB_006e18e4:
006E18E4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006E18E7  52                        PUSH EDX
006E18E8  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
006E18EE  50                        PUSH EAX
006E18EF  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
006E18F5  51                        PUSH ECX
006E18F6  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
006E18FC  52                        PUSH EDX
006E18FD  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
006E1903  50                        PUSH EAX
006E1904  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
006E190A  51                        PUSH ECX
006E190B  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
006E1911  52                        PUSH EDX
006E1912  8B CE                     MOV ECX,ESI
006E1914  E8 77 16 00 00            CALL 0x006e2f90
006E1919  8B 8E B0 02 00 00         MOV ECX,dword ptr [ESI + 0x2b0]
006E191F  85 C9                     TEST ECX,ECX
006E1921  0F 84 26 FF FF FF         JZ 0x006e184d
006E1927  85 DB                     TEST EBX,EBX
006E1929  75 11                     JNZ 0x006e193c
006E192B  85 FF                     TEST EDI,EDI
006E192D  75 0D                     JNZ 0x006e193c
006E192F  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006E1932  85 D2                     TEST EDX,EDX
006E1934  0F 84 13 FF FF FF         JZ 0x006e184d
006E193A  EB 03                     JMP 0x006e193f
LAB_006e193c:
006E193C  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
LAB_006e193f:
006E193F  9B                        WAIT
006E1940  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006E1947  85 D2                     TEST EDX,EDX
006E1949  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
006E194F  75 47                     JNZ 0x006e1998
006E1951  8B 96 BC 02 00 00         MOV EDX,dword ptr [ESI + 0x2bc]
006E1957  2B D7                     SUB EDX,EDI
006E1959  52                        PUSH EDX
006E195A  8B D0                     MOV EDX,EAX
006E195C  2B D3                     SUB EDX,EBX
006E195E  D1 E2                     SHL EDX,0x1
006E1960  52                        PUSH EDX
006E1961  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006E1964  52                        PUSH EDX
006E1965  8B D0                     MOV EDX,EAX
006E1967  0F AF 55 9C               IMUL EDX,dword ptr [EBP + -0x64]
006E196B  03 95 70 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff70]
006E1971  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006E1974  52                        PUSH EDX
006E1975  0F AF 85 74 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff74]
006E197C  03 45 88                  ADD EAX,dword ptr [EBP + -0x78]
006E197F  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006E1982  50                        PUSH EAX
006E1983  E8 88 FC FE FF            CALL 0x006d1610
006E1988  9B                        WAIT
006E1989  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E1990  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006E1993  E9 B5 FE FF FF            JMP 0x006e184d
LAB_006e1998:
006E1998  52                        PUSH EDX
006E1999  8B 96 BC 02 00 00         MOV EDX,dword ptr [ESI + 0x2bc]
006E199F  2B D7                     SUB EDX,EDI
006E19A1  52                        PUSH EDX
006E19A2  8B D0                     MOV EDX,EAX
006E19A4  2B D3                     SUB EDX,EBX
006E19A6  52                        PUSH EDX
006E19A7  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006E19AA  52                        PUSH EDX
006E19AB  8B D0                     MOV EDX,EAX
006E19AD  0F AF 55 9C               IMUL EDX,dword ptr [EBP + -0x64]
006E19B1  03 95 70 FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff70]
006E19B7  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006E19BA  52                        PUSH EDX
006E19BB  0F AF 85 74 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff74]
006E19C2  03 45 88                  ADD EAX,dword ptr [EBP + -0x78]
006E19C5  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006E19C8  50                        PUSH EAX
006E19C9  E8 82 13 00 00            CALL 0x006e2d50
006E19CE  9B                        WAIT
006E19CF  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006E19D6  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006E19D9  E9 6F FE FF FF            JMP 0x006e184d
LAB_006e1a1a:
006E1A1A  8B 96 B0 02 00 00         MOV EDX,dword ptr [ESI + 0x2b0]
LAB_006e1a20:
006E1A20  C7 45 AC 00 00 00 00      MOV dword ptr [EBP + -0x54],0x0
006E1A27  8B 86 BC 02 00 00         MOV EAX,dword ptr [ESI + 0x2bc]
006E1A2D  85 C0                     TEST EAX,EAX
006E1A2F  7E 31                     JLE 0x006e1a62
LAB_006e1a31:
006E1A31  85 DB                     TEST EBX,EBX
006E1A33  7E 15                     JLE 0x006e1a4a
006E1A35  8B CB                     MOV ECX,EBX
006E1A37  B8 30 75 30 75            MOV EAX,0x75307530
006E1A3C  8B FA                     MOV EDI,EDX
006E1A3E  D1 E9                     SHR ECX,0x1
006E1A40  F3 AB                     STOSD.REP ES:EDI
006E1A42  13 C9                     ADC ECX,ECX
006E1A44  66 F3 AB                  STOSW.REP ES:EDI
006E1A47  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
LAB_006e1a4a:
006E1A4A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006E1A4D  40                        INC EAX
006E1A4E  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006E1A51  8B 8E B8 02 00 00         MOV ECX,dword ptr [ESI + 0x2b8]
006E1A57  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006E1A5A  3B 86 BC 02 00 00         CMP EAX,dword ptr [ESI + 0x2bc]
006E1A60  7C CF                     JL 0x006e1a31
LAB_006e1a62:
006E1A62  8B CE                     MOV ECX,ESI
006E1A64  E8 77 C1 FF FF            CALL 0x006ddbe0
006E1A69  8B CE                     MOV ECX,ESI
006E1A6B  E8 50 CF FF FF            CALL 0x006de9c0
006E1A70  33 C0                     XOR EAX,EAX
006E1A72  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006E1A78  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
LAB_006e1a7e:
006E1A7E  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
006E1A84  85 C0                     TEST EAX,EAX
006E1A86  0F 84 C6 00 00 00         JZ 0x006e1b52
006E1A8C  C7 46 30 00 00 00 00      MOV dword ptr [ESI + 0x30],0x0
006E1A93  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
006E1A99  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
006E1A9C  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006E1A9F  89 56 38                  MOV dword ptr [ESI + 0x38],EDX
006E1AA2  99                        CDQ
006E1AA3  33 C2                     XOR EAX,EDX
006E1AA5  2B C2                     SUB EAX,EDX
006E1AA7  03 C1                     ADD EAX,ECX
006E1AA9  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006E1AAC  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
006E1AB2  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
006E1AB8  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
006E1ABB  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
006E1ABE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006E1AC1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006E1AC4  89 56 68                  MOV dword ptr [ESI + 0x68],EDX
006E1AC7  89 46 6C                  MOV dword ptr [ESI + 0x6c],EAX
006E1ACA  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006E1ACD  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006E1AD0  89 4E 70                  MOV dword ptr [ESI + 0x70],ECX
006E1AD3  89 56 74                  MOV dword ptr [ESI + 0x74],EDX
006E1AD6  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
006E1AD9  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006E1ADC  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
006E1ADF  89 4E 7C                  MOV dword ptr [ESI + 0x7c],ECX
006E1AE2  85 FF                     TEST EDI,EDI
006E1AE4  7E 50                     JLE 0x006e1b36
006E1AE6  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006E1AEC  39 55 9C                  CMP dword ptr [EBP + -0x64],EDX
006E1AEF  7E 1A                     JLE 0x006e1b0b
006E1AF1  8B 86 BC 02 00 00         MOV EAX,dword ptr [ESI + 0x2bc]
006E1AF7  2B C7                     SUB EAX,EDI
006E1AF9  0F AF 86 B8 02 00 00      IMUL EAX,dword ptr [ESI + 0x2b8]
006E1B00  8B 8E B0 02 00 00         MOV ECX,dword ptr [ESI + 0x2b0]
006E1B06  8D 3C 41                  LEA EDI,[ECX + EAX*0x2]
006E1B09  EB 06                     JMP 0x006e1b11
LAB_006e1b0b:
006E1B0B  8B BE B0 02 00 00         MOV EDI,dword ptr [ESI + 0x2b0]
LAB_006e1b11:
006E1B11  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006E1B14  85 DB                     TEST EBX,EBX
006E1B16  7E 1E                     JLE 0x006e1b36
006E1B18  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
LAB_006e1b1e:
006E1B1E  68 30 75 00 00            PUSH 0x7530
006E1B23  50                        PUSH EAX
006E1B24  57                        PUSH EDI
006E1B25  E8 96 CB FE FF            CALL 0x006ce6c0
006E1B2A  8B 86 B8 02 00 00         MOV EAX,dword ptr [ESI + 0x2b8]
006E1B30  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
006E1B33  4B                        DEC EBX
006E1B34  75 E8                     JNZ 0x006e1b1e
LAB_006e1b36:
006E1B36  8B CE                     MOV ECX,ESI
006E1B38  E8 A3 C0 FF FF            CALL 0x006ddbe0
006E1B3D  8B CE                     MOV ECX,ESI
006E1B3F  E8 7C CE FF FF            CALL 0x006de9c0
006E1B44  33 C0                     XOR EAX,EAX
006E1B46  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
006E1B4C  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
LAB_006e1b52:
006E1B52  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E1B55  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
006E1B58  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006E1B5B  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
006E1B5E  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006E1B61  03 D0                     ADD EDX,EAX
006E1B63  89 56 38                  MOV dword ptr [ESI + 0x38],EDX
006E1B66  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
006E1B6C  03 C1                     ADD EAX,ECX
006E1B6E  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
006E1B71  8B 8D 3C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff3c]
006E1B77  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006E1B7D  89 4E 60                  MOV dword ptr [ESI + 0x60],ECX
006E1B80  89 56 64                  MOV dword ptr [ESI + 0x64],EDX
006E1B83  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006E1B86  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006E1B89  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
006E1B8C  89 4E 6C                  MOV dword ptr [ESI + 0x6c],ECX
006E1B8F  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
006E1B95  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
006E1B9B  89 56 70                  MOV dword ptr [ESI + 0x70],EDX
006E1B9E  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
006E1BA1  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
006E1BA7  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
006E1BAD  89 4E 78                  MOV dword ptr [ESI + 0x78],ECX
006E1BB0  89 56 7C                  MOV dword ptr [ESI + 0x7c],EDX
006E1BB3  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006E1BB9  85 C9                     TEST ECX,ECX
006E1BBB  74 3F                     JZ 0x006e1bfc
006E1BBD  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006E1BC3  50                        PUSH EAX
006E1BC4  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E1BCA  52                        PUSH EDX
006E1BCB  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
006E1BD1  50                        PUSH EAX
006E1BD2  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006E1BD8  52                        PUSH EDX
006E1BD9  E8 82 F8 FF FF            CALL 0x006e1460
006E1BDE  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006E1BE4  8B 88 74 03 00 00         MOV ECX,dword ptr [EAX + 0x374]
006E1BEA  89 8E 74 03 00 00         MOV dword ptr [ESI + 0x374],ECX
006E1BF0  8B 90 78 03 00 00         MOV EDX,dword ptr [EAX + 0x378]
006E1BF6  89 96 78 03 00 00         MOV dword ptr [ESI + 0x378],EDX
LAB_006e1bfc:
006E1BFC  33 C0                     XOR EAX,EAX
006E1BFE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006E1C01  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006E1C08  5F                        POP EDI
006E1C09  5E                        POP ESI
006E1C0A  5B                        POP EBX
006E1C0B  8B E5                     MOV ESP,EBP
006E1C0D  5D                        POP EBP
006E1C0E  C2 10 00                  RET 0x10
