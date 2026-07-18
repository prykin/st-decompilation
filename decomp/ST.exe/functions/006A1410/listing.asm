FUN_006a1410:
006A1410  55                        PUSH EBP
006A1411  8B EC                     MOV EBP,ESP
006A1413  83 EC 10                  SUB ESP,0x10
006A1416  33 C0                     XOR EAX,EAX
006A1418  53                        PUSH EBX
006A1419  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A141C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A141F  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006A1423  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A1426  56                        PUSH ESI
006A1427  57                        PUSH EDI
006A1428  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A142B  85 C0                     TEST EAX,EAX
006A142D  74 0E                     JZ 0x006a143d
006A142F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1432  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006A1435  51                        PUSH ECX
006A1436  53                        PUSH EBX
006A1437  57                        PUSH EDI
006A1438  56                        PUSH ESI
006A1439  FF D0                     CALL EAX
006A143B  EB 03                     JMP 0x006a1440
LAB_006a143d:
006A143D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_006a1440:
006A1440  8D 55 F0                  LEA EDX,[EBP + -0x10]
006A1443  52                        PUSH EDX
006A1444  53                        PUSH EBX
006A1445  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A1448  57                        PUSH EDI
006A1449  56                        PUSH ESI
006A144A  53                        PUSH EBX
006A144B  E8 FC 2C D6 FF            CALL 0x0040414c
006A1450  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A1453  83 C4 14                  ADD ESP,0x14
006A1456  81 F9 FF 00 00 00         CMP ECX,0xff
006A145C  0F 85 0F 01 00 00         JNZ 0x006a1571
006A1462  0F BF F0                  MOVSX ESI,AX
006A1465  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A1468  8B D6                     MOV EDX,ESI
006A146A  8B C8                     MOV ECX,EAX
006A146C  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006A146F  C1 E9 08                  SHR ECX,0x8
006A1472  83 E1 0F                  AND ECX,0xf
006A1475  2B D1                     SUB EDX,ECX
006A1477  3B F2                     CMP ESI,EDX
006A1479  0F 8E C2 00 00 00         JLE 0x006a1541
LAB_006a147f:
006A147F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A1482  85 C0                     TEST EAX,EAX
006A1484  74 0C                     JZ 0x006a1492
006A1486  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A1489  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A148C  51                        PUSH ECX
006A148D  56                        PUSH ESI
006A148E  57                        PUSH EDI
006A148F  52                        PUSH EDX
006A1490  FF D0                     CALL EAX
LAB_006a1492:
006A1492  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1495  85 C9                     TEST ECX,ECX
006A1497  0F 8C 8B 00 00 00         JL 0x006a1528
006A149D  8B 13                     MOV EDX,dword ptr [EBX]
006A149F  3B CA                     CMP ECX,EDX
006A14A1  7D 29                     JGE 0x006a14cc
006A14A3  85 FF                     TEST EDI,EDI
006A14A5  7C 25                     JL 0x006a14cc
006A14A7  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006A14AA  3B F8                     CMP EDI,EAX
006A14AC  7D 1E                     JGE 0x006a14cc
006A14AE  85 F6                     TEST ESI,ESI
006A14B0  7C 1A                     JL 0x006a14cc
006A14B2  83 FE 06                  CMP ESI,0x6
006A14B5  7D 15                     JGE 0x006a14cc
006A14B7  0F AF C6                  IMUL EAX,ESI
006A14BA  03 C7                     ADD EAX,EDI
006A14BC  0F AF C2                  IMUL EAX,EDX
006A14BF  8D 44 08 02               LEA EAX,[EAX + ECX*0x1 + 0x2]
006A14C3  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A14C6  66 C7 04 43 00 00         MOV word ptr [EBX + EAX*0x2],0x0
LAB_006a14cc:
006A14CC  8B 13                     MOV EDX,dword ptr [EBX]
006A14CE  3B CA                     CMP ECX,EDX
006A14D0  7D 28                     JGE 0x006a14fa
006A14D2  85 FF                     TEST EDI,EDI
006A14D4  7C 24                     JL 0x006a14fa
006A14D6  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006A14D9  3B F8                     CMP EDI,EAX
006A14DB  7D 1D                     JGE 0x006a14fa
006A14DD  85 F6                     TEST ESI,ESI
006A14DF  7C 19                     JL 0x006a14fa
006A14E1  83 FE 06                  CMP ESI,0x6
006A14E4  7D 14                     JGE 0x006a14fa
006A14E6  0F AF C6                  IMUL EAX,ESI
006A14E9  03 C7                     ADD EAX,EDI
006A14EB  0F AF C2                  IMUL EAX,EDX
006A14EE  03 C1                     ADD EAX,ECX
006A14F0  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006A14F3  66 C7 44 53 0A 00 00      MOV word ptr [EBX + EDX*0x2 + 0xa],0x0
LAB_006a14fa:
006A14FA  8B 13                     MOV EDX,dword ptr [EBX]
006A14FC  3B CA                     CMP ECX,EDX
006A14FE  7D 28                     JGE 0x006a1528
006A1500  85 FF                     TEST EDI,EDI
006A1502  7C 24                     JL 0x006a1528
006A1504  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
006A1507  3B F8                     CMP EDI,EAX
006A1509  7D 1D                     JGE 0x006a1528
006A150B  85 F6                     TEST ESI,ESI
006A150D  7C 19                     JL 0x006a1528
006A150F  83 FE 06                  CMP ESI,0x6
006A1512  7D 14                     JGE 0x006a1528
006A1514  0F AF C6                  IMUL EAX,ESI
006A1517  03 C7                     ADD EAX,EDI
006A1519  0F AF C2                  IMUL EAX,EDX
006A151C  03 C1                     ADD EAX,ECX
006A151E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A1521  66 C7 44 43 08 00 00      MOV word ptr [EBX + EAX*0x2 + 0x8],0x0
LAB_006a1528:
006A1528  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A152B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A152E  8B C8                     MOV ECX,EAX
006A1530  4E                        DEC ESI
006A1531  C1 E9 08                  SHR ECX,0x8
006A1534  83 E1 0F                  AND ECX,0xf
006A1537  2B D1                     SUB EDX,ECX
006A1539  3B F2                     CMP ESI,EDX
006A153B  0F 8F 3E FF FF FF         JG 0x006a147f
LAB_006a1541:
006A1541  F6 C4 10                  TEST AH,0x10
006A1544  74 63                     JZ 0x006a15a9
006A1546  8B 03                     MOV EAX,dword ptr [EBX]
006A1548  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A154B  0F AF C7                  IMUL EAX,EDI
006A154E  03 C2                     ADD EAX,EDX
006A1550  66 C7 45 F8 01 00         MOV word ptr [EBP + -0x8],0x1
006A1556  66 B9 00 11               MOV CX,0x1100
006A155A  5F                        POP EDI
006A155B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A155E  5E                        POP ESI
006A155F  8D 54 43 08               LEA EDX,[EBX + EAX*0x2 + 0x8]
006A1563  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A1566  5B                        POP EBX
006A1567  89 02                     MOV dword ptr [EDX],EAX
006A1569  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
006A156D  8B E5                     MOV ESP,EBP
006A156F  5D                        POP EBP
006A1570  C3                        RET
LAB_006a1571:
006A1571  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A1574  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006A1577  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
006A157B  85 C9                     TEST ECX,ECX
006A157D  75 08                     JNZ 0x006a1587
006A157F  66 C7 45 F8 01 00         MOV word ptr [EBP + -0x8],0x1
006A1585  EB 0B                     JMP 0x006a1592
LAB_006a1587:
006A1587  83 F9 01                  CMP ECX,0x1
006A158A  75 06                     JNZ 0x006a1592
006A158C  66 C7 45 FA 00 00         MOV word ptr [EBP + -0x6],0x0
LAB_006a1592:
006A1592  8B 03                     MOV EAX,dword ptr [EBX]
006A1594  0F AF C7                  IMUL EAX,EDI
006A1597  03 C6                     ADD EAX,ESI
006A1599  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A159C  8D 4C 43 08               LEA ECX,[EBX + EAX*0x2 + 0x8]
006A15A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A15A3  89 01                     MOV dword ptr [ECX],EAX
006A15A5  66 89 51 04               MOV word ptr [ECX + 0x4],DX
LAB_006a15a9:
006A15A9  5F                        POP EDI
006A15AA  5E                        POP ESI
006A15AB  5B                        POP EBX
006A15AC  8B E5                     MOV ESP,EBP
006A15AE  5D                        POP EBP
006A15AF  C3                        RET
