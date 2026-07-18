MTaskTy::PlayScript:
005E1330  55                        PUSH EBP
005E1331  8B EC                     MOV EBP,ESP
005E1333  B8 64 12 00 00            MOV EAX,0x1264
005E1338  E8 03 C7 14 00            CALL 0x0072da40
005E133D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E1342  53                        PUSH EBX
005E1343  56                        PUSH ESI
005E1344  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
005E134A  57                        PUSH EDI
005E134B  8D 95 90 FD FF FF         LEA EDX,[EBP + 0xfffffd90]
005E1351  8D 8D 8C FD FF FF         LEA ECX,[EBP + 0xfffffd8c]
005E1357  6A 00                     PUSH 0x0
005E1359  52                        PUSH EDX
005E135A  89 85 8C FD FF FF         MOV dword ptr [EBP + 0xfffffd8c],EAX
005E1360  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E1366  E8 85 C4 14 00            CALL 0x0072d7f0
005E136B  8B F0                     MOV ESI,EAX
005E136D  83 C4 08                  ADD ESP,0x8
005E1370  85 F6                     TEST ESI,ESI
005E1372  0F 85 C4 21 00 00         JNZ 0x005e353c
005E1378  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
005E137E  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1381  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E1384  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E1387  3B C1                     CMP EAX,ECX
005E1389  0F 8D 2E 1F 00 00         JGE 0x005e32bd
LAB_005e138f:
005E138F  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1392  3B D1                     CMP EDX,ECX
005E1394  73 10                     JNC 0x005e13a6
005E1396  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1399  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E139C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E139F  0F AF F2                  IMUL ESI,EDX
005E13A2  03 F1                     ADD ESI,ECX
005E13A4  EB 02                     JMP 0x005e13a8
LAB_005e13a6:
005E13A6  33 F6                     XOR ESI,ESI
LAB_005e13a8:
005E13A8  8B 43 69                  MOV EAX,dword ptr [EBX + 0x69]
005E13AB  8B 7B 61                  MOV EDI,dword ptr [EBX + 0x61]
005E13AE  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
005E13B1  2B C7                     SUB EAX,EDI
005E13B3  3B C8                     CMP ECX,EAX
005E13B5  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005E13B8  76 0A                     JBE 0x005e13c4
005E13BA  80 7B 6D 05               CMP byte ptr [EBX + 0x6d],0x5
005E13BE  0F 85 F9 1E 00 00         JNZ 0x005e32bd
LAB_005e13c4:
005E13C4  33 C0                     XOR EAX,EAX
005E13C6  8A 06                     MOV AL,byte ptr [ESI]
005E13C8  48                        DEC EAX
005E13C9  83 F8 08                  CMP EAX,0x8
005E13CC  0F 87 D4 1E 00 00         JA 0x005e32a6
switchD_005e13d2::switchD:
005E13D2  FF 24 85 88 35 5E 00      JMP dword ptr [EAX*0x4 + 0x5e3588]
switchD_005e13d2::caseD_9:
005E13D9  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E13DC  8D 7B 5D                  LEA EDI,[EBX + 0x5d]
005E13DF  85 C0                     TEST EAX,EAX
005E13E1  74 28                     JZ 0x005e140b
005E13E3  33 C0                     XOR EAX,EAX
005E13E5  8A 83 80 00 00 00         MOV AL,byte ptr [EBX + 0x80]
005E13EB  48                        DEC EAX
005E13EC  74 11                     JZ 0x005e13ff
005E13EE  48                        DEC EAX
005E13EF  57                        PUSH EDI
005E13F0  74 05                     JZ 0x005e13f7
005E13F2  8B 4B 70                  MOV ECX,dword ptr [EBX + 0x70]
005E13F5  EB 0F                     JMP 0x005e1406
LAB_005e13f7:
005E13F7  8B 0D 98 67 80 00         MOV ECX,dword ptr [0x00806798]
005E13FD  EB 07                     JMP 0x005e1406
LAB_005e13ff:
005E13FF  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005E1405  57                        PUSH EDI
LAB_005e1406:
005E1406  E8 D5 0C 11 00            CALL 0x006f20e0
LAB_005e140b:
005E140B  8B 4B 70                  MOV ECX,dword ptr [EBX + 0x70]
005E140E  8D 46 0D                  LEA EAX,[ESI + 0xd]
005E1411  6A 00                     PUSH 0x0
005E1413  6A 00                     PUSH 0x0
005E1415  50                        PUSH EAX
005E1416  51                        PUSH ECX
005E1417  C6 83 80 00 00 00 00      MOV byte ptr [EBX + 0x80],0x0
005E141E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005E1421  E8 CA 95 12 00            CALL 0x0070a9f0
005E1426  83 C4 10                  ADD ESP,0x10
005E1429  89 07                     MOV dword ptr [EDI],EAX
005E142B  85 C0                     TEST EAX,EAX
005E142D  0F 85 EA 06 00 00         JNZ 0x005e1b1d
005E1433  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005E1436  50                        PUSH EAX
005E1437  50                        PUSH EAX
005E1438  A1 98 67 80 00            MOV EAX,[0x00806798]
005E143D  52                        PUSH EDX
005E143E  50                        PUSH EAX
005E143F  E8 AC 95 12 00            CALL 0x0070a9f0
005E1444  83 C4 10                  ADD ESP,0x10
005E1447  89 07                     MOV dword ptr [EDI],EAX
005E1449  85 C0                     TEST EAX,EAX
005E144B  0F 84 97 06 00 00         JZ 0x005e1ae8
005E1451  B9 14 00 00 00            MOV ECX,0x14
005E1456  33 C0                     XOR EAX,EAX
005E1458  8D 7D 8C                  LEA EDI,[EBP + -0x74]
005E145B  F3 AB                     STOSD.REP ES:EDI
005E145D  8B 3D 24 C2 79 00         MOV EDI,dword ptr [0x0079c224]
005E1463  C6 45 97 01               MOV byte ptr [EBP + -0x69],0x1
005E1467  C6 45 98 01               MOV byte ptr [EBP + -0x68],0x1
005E146B  C6 45 95 01               MOV byte ptr [EBP + -0x6b],0x1
005E146F  8B 4E 01                  MOV ECX,dword ptr [ESI + 0x1]
005E1472  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005E1475  89 4D 8D                  MOV dword ptr [EBP + -0x73],ECX
005E1478  C7 45 91 F0 FF FF 7F      MOV dword ptr [EBP + -0x6f],0x7ffffff0
005E147F  C6 45 8C 07               MOV byte ptr [EBP + -0x74],0x7
005E1483  C6 45 99 01               MOV byte ptr [EBP + -0x67],0x1
005E1487  C7 45 D2 02 00 00 00      MOV dword ptr [EBP + -0x2e],0x2
005E148E  C6 45 DA 01               MOV byte ptr [EBP + -0x26],0x1
005E1492  C6 45 DB 01               MOV byte ptr [EBP + -0x25],0x1
LAB_005e1496:
005E1496  8A 16                     MOV DL,byte ptr [ESI]
005E1498  8A 0F                     MOV CL,byte ptr [EDI]
005E149A  8A C2                     MOV AL,DL
005E149C  3A D1                     CMP DL,CL
005E149E  75 1E                     JNZ 0x005e14be
005E14A0  84 C0                     TEST AL,AL
005E14A2  74 16                     JZ 0x005e14ba
005E14A4  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
005E14A7  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005E14AA  8A C1                     MOV AL,CL
005E14AC  3A CA                     CMP CL,DL
005E14AE  75 0E                     JNZ 0x005e14be
005E14B0  83 C6 02                  ADD ESI,0x2
005E14B3  83 C7 02                  ADD EDI,0x2
005E14B6  84 C0                     TEST AL,AL
005E14B8  75 DC                     JNZ 0x005e1496
LAB_005e14ba:
005E14BA  33 C0                     XOR EAX,EAX
005E14BC  EB 05                     JMP 0x005e14c3
LAB_005e14be:
005E14BE  1B C0                     SBB EAX,EAX
005E14C0  83 D8 FF                  SBB EAX,-0x1
LAB_005e14c3:
005E14C3  85 C0                     TEST EAX,EAX
005E14C5  0F 85 C0 01 00 00         JNZ 0x005e168b
005E14CB  BF 48 DC 7C 00            MOV EDI,0x7cdc48
005E14D0  83 C9 FF                  OR ECX,0xffffffff
005E14D3  F2 AE                     SCASB.REPNE ES:EDI
005E14D5  F7 D1                     NOT ECX
005E14D7  2B F9                     SUB EDI,ECX
005E14D9  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E14DC  8B C1                     MOV EAX,ECX
005E14DE  8B F7                     MOV ESI,EDI
005E14E0  8B FA                     MOV EDI,EDX
005E14E2  C7 45 9A F0 00 00 00      MOV dword ptr [EBP + -0x66],0xf0
005E14E9  C1 E9 02                  SHR ECX,0x2
005E14EC  F3 A5                     MOVSD.REP ES:EDI,ESI
005E14EE  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E14F1  8B C8                     MOV ECX,EAX
005E14F3  83 E1 03                  AND ECX,0x3
005E14F6  33 C0                     XOR EAX,EAX
005E14F8  F3 A4                     MOVSB.REP ES:EDI,ESI
005E14FA  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E14FD  89 45 BE                  MOV dword ptr [EBP + -0x42],EAX
005E1500  89 45 C2                  MOV dword ptr [EBP + -0x3e],EAX
005E1503  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1506  42                        INC EDX
005E1507  51                        PUSH ECX
005E1508  52                        PUSH EDX
005E1509  50                        PUSH EAX
005E150A  E8 C1 FC 0C 00            CALL 0x006b11d0
005E150F  BF 38 DC 7C 00            MOV EDI,0x7cdc38
005E1514  83 C9 FF                  OR ECX,0xffffffff
005E1517  33 C0                     XOR EAX,EAX
005E1519  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E151C  F2 AE                     SCASB.REPNE ES:EDI
005E151E  F7 D1                     NOT ECX
005E1520  2B F9                     SUB EDI,ECX
005E1522  C7 45 9A F1 00 00 00      MOV dword ptr [EBP + -0x66],0xf1
005E1529  8B C1                     MOV EAX,ECX
005E152B  8B F7                     MOV ESI,EDI
005E152D  8B FA                     MOV EDI,EDX
005E152F  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1532  C1 E9 02                  SHR ECX,0x2
005E1535  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1537  8B C8                     MOV ECX,EAX
005E1539  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E153C  83 E1 03                  AND ECX,0x3
005E153F  42                        INC EDX
005E1540  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1542  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1545  C7 45 BE 00 00 00 00      MOV dword ptr [EBP + -0x42],0x0
005E154C  51                        PUSH ECX
005E154D  52                        PUSH EDX
005E154E  50                        PUSH EAX
005E154F  C7 45 C2 9C 00 00 00      MOV dword ptr [EBP + -0x3e],0x9c
005E1556  E8 75 FC 0C 00            CALL 0x006b11d0
005E155B  BF 28 DC 7C 00            MOV EDI,0x7cdc28
005E1560  83 C9 FF                  OR ECX,0xffffffff
005E1563  33 C0                     XOR EAX,EAX
005E1565  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1568  F2 AE                     SCASB.REPNE ES:EDI
005E156A  F7 D1                     NOT ECX
005E156C  2B F9                     SUB EDI,ECX
005E156E  C7 45 9A F2 00 00 00      MOV dword ptr [EBP + -0x66],0xf2
005E1575  8B C1                     MOV EAX,ECX
005E1577  8B F7                     MOV ESI,EDI
005E1579  8B FA                     MOV EDI,EDX
005E157B  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E157E  C1 E9 02                  SHR ECX,0x2
005E1581  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1583  8B C8                     MOV ECX,EAX
005E1585  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1588  83 E1 03                  AND ECX,0x3
005E158B  42                        INC EDX
005E158C  F3 A4                     MOVSB.REP ES:EDI,ESI
005E158E  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1591  C7 45 BE 40 00 00 00      MOV dword ptr [EBP + -0x42],0x40
005E1598  51                        PUSH ECX
005E1599  52                        PUSH EDX
005E159A  50                        PUSH EAX
005E159B  C7 45 C2 9C 00 00 00      MOV dword ptr [EBP + -0x3e],0x9c
005E15A2  E8 29 FC 0C 00            CALL 0x006b11d0
005E15A7  C7 45 9A F3 00 00 00      MOV dword ptr [EBP + -0x66],0xf3
005E15AE  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E15B1  BF 18 DC 7C 00            MOV EDI,0x7cdc18
005E15B6  83 C9 FF                  OR ECX,0xffffffff
005E15B9  33 C0                     XOR EAX,EAX
005E15BB  F2 AE                     SCASB.REPNE ES:EDI
005E15BD  F7 D1                     NOT ECX
005E15BF  2B F9                     SUB EDI,ECX
005E15C1  8B C1                     MOV EAX,ECX
005E15C3  8B F7                     MOV ESI,EDI
005E15C5  8B FA                     MOV EDI,EDX
005E15C7  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E15CA  C1 E9 02                  SHR ECX,0x2
005E15CD  F3 A5                     MOVSD.REP ES:EDI,ESI
005E15CF  8B C8                     MOV ECX,EAX
005E15D1  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E15D4  83 E1 03                  AND ECX,0x3
005E15D7  42                        INC EDX
005E15D8  F3 A4                     MOVSB.REP ES:EDI,ESI
005E15DA  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E15DD  C7 45 BE 08 02 00 00      MOV dword ptr [EBP + -0x42],0x208
005E15E4  51                        PUSH ECX
005E15E5  52                        PUSH EDX
005E15E6  50                        PUSH EAX
005E15E7  C7 45 C2 00 00 00 00      MOV dword ptr [EBP + -0x3e],0x0
005E15EE  E8 DD FB 0C 00            CALL 0x006b11d0
005E15F3  BF 08 DC 7C 00            MOV EDI,0x7cdc08
005E15F8  83 C9 FF                  OR ECX,0xffffffff
005E15FB  33 C0                     XOR EAX,EAX
005E15FD  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1600  F2 AE                     SCASB.REPNE ES:EDI
005E1602  F7 D1                     NOT ECX
005E1604  2B F9                     SUB EDI,ECX
005E1606  C7 45 9A F4 00 00 00      MOV dword ptr [EBP + -0x66],0xf4
005E160D  8B C1                     MOV EAX,ECX
005E160F  8B F7                     MOV ESI,EDI
005E1611  8B FA                     MOV EDI,EDX
005E1613  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1616  C1 E9 02                  SHR ECX,0x2
005E1619  F3 A5                     MOVSD.REP ES:EDI,ESI
005E161B  8B C8                     MOV ECX,EAX
005E161D  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1620  83 E1 03                  AND ECX,0x3
005E1623  42                        INC EDX
005E1624  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1626  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1629  C7 45 BE 08 02 00 00      MOV dword ptr [EBP + -0x42],0x208
005E1630  51                        PUSH ECX
005E1631  52                        PUSH EDX
005E1632  50                        PUSH EAX
005E1633  C7 45 C2 9C 00 00 00      MOV dword ptr [EBP + -0x3e],0x9c
005E163A  E8 91 FB 0C 00            CALL 0x006b11d0
005E163F  BF F8 DB 7C 00            MOV EDI,0x7cdbf8
005E1644  83 C9 FF                  OR ECX,0xffffffff
005E1647  33 C0                     XOR EAX,EAX
005E1649  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E164C  F2 AE                     SCASB.REPNE ES:EDI
005E164E  F7 D1                     NOT ECX
005E1650  2B F9                     SUB EDI,ECX
005E1652  C7 45 9A F5 00 00 00      MOV dword ptr [EBP + -0x66],0xf5
005E1659  8B C1                     MOV EAX,ECX
005E165B  8B F7                     MOV ESI,EDI
005E165D  8B FA                     MOV EDI,EDX
005E165F  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1662  C1 E9 02                  SHR ECX,0x2
005E1665  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1667  8B C8                     MOV ECX,EAX
005E1669  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E166C  83 E1 03                  AND ECX,0x3
005E166F  42                        INC EDX
005E1670  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1672  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1675  C7 45 BE DF 02 00 00      MOV dword ptr [EBP + -0x42],0x2df
005E167C  51                        PUSH ECX
005E167D  52                        PUSH EDX
005E167E  50                        PUSH EAX
005E167F  C7 45 C2 9C 00 00 00      MOV dword ptr [EBP + -0x3e],0x9c
005E1686  E8 45 FB 0C 00            CALL 0x006b11d0
LAB_005e168b:
005E168B  8B 3D 28 C2 79 00         MOV EDI,dword ptr [0x0079c228]
005E1691  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005e1694:
005E1694  8A 0E                     MOV CL,byte ptr [ESI]
005E1696  8A 17                     MOV DL,byte ptr [EDI]
005E1698  8A C1                     MOV AL,CL
005E169A  3A CA                     CMP CL,DL
005E169C  75 1E                     JNZ 0x005e16bc
005E169E  84 C0                     TEST AL,AL
005E16A0  74 16                     JZ 0x005e16b8
005E16A2  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005E16A5  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005E16A8  8A C2                     MOV AL,DL
005E16AA  3A D1                     CMP DL,CL
005E16AC  75 0E                     JNZ 0x005e16bc
005E16AE  83 C6 02                  ADD ESI,0x2
005E16B1  83 C7 02                  ADD EDI,0x2
005E16B4  84 C0                     TEST AL,AL
005E16B6  75 DC                     JNZ 0x005e1694
LAB_005e16b8:
005E16B8  33 C0                     XOR EAX,EAX
005E16BA  EB 05                     JMP 0x005e16c1
LAB_005e16bc:
005E16BC  1B C0                     SBB EAX,EAX
005E16BE  83 D8 FF                  SBB EAX,-0x1
LAB_005e16c1:
005E16C1  85 C0                     TEST EAX,EAX
005E16C3  0F 85 5E 02 00 00         JNZ 0x005e1927
005E16C9  BF E8 DB 7C 00            MOV EDI,0x7cdbe8
005E16CE  83 C9 FF                  OR ECX,0xffffffff
005E16D1  F2 AE                     SCASB.REPNE ES:EDI
005E16D3  F7 D1                     NOT ECX
005E16D5  2B F9                     SUB EDI,ECX
005E16D7  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E16DA  8B C1                     MOV EAX,ECX
005E16DC  8B F7                     MOV ESI,EDI
005E16DE  8B FA                     MOV EDI,EDX
005E16E0  C7 45 9A F0 00 00 00      MOV dword ptr [EBP + -0x66],0xf0
005E16E7  C1 E9 02                  SHR ECX,0x2
005E16EA  F3 A5                     MOVSD.REP ES:EDI,ESI
005E16EC  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E16EF  8B C8                     MOV ECX,EAX
005E16F1  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E16F4  83 E1 03                  AND ECX,0x3
005E16F7  F3 A4                     MOVSB.REP ES:EDI,ESI
005E16F9  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E16FC  42                        INC EDX
005E16FD  51                        PUSH ECX
005E16FE  52                        PUSH EDX
005E16FF  50                        PUSH EAX
005E1700  C7 45 BE B0 00 00 00      MOV dword ptr [EBP + -0x42],0xb0
005E1707  C7 45 C2 00 00 00 00      MOV dword ptr [EBP + -0x3e],0x0
005E170E  E8 BD FA 0C 00            CALL 0x006b11d0
005E1713  BF D8 DB 7C 00            MOV EDI,0x7cdbd8
005E1718  83 C9 FF                  OR ECX,0xffffffff
005E171B  33 C0                     XOR EAX,EAX
005E171D  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1720  F2 AE                     SCASB.REPNE ES:EDI
005E1722  F7 D1                     NOT ECX
005E1724  2B F9                     SUB EDI,ECX
005E1726  C7 45 9A F1 00 00 00      MOV dword ptr [EBP + -0x66],0xf1
005E172D  8B C1                     MOV EAX,ECX
005E172F  8B F7                     MOV ESI,EDI
005E1731  8B FA                     MOV EDI,EDX
005E1733  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1736  C1 E9 02                  SHR ECX,0x2
005E1739  F3 A5                     MOVSD.REP ES:EDI,ESI
005E173B  8B C8                     MOV ECX,EAX
005E173D  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1740  83 E1 03                  AND ECX,0x3
005E1743  42                        INC EDX
005E1744  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1746  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1749  C7 45 BE 00 00 00 00      MOV dword ptr [EBP + -0x42],0x0
005E1750  51                        PUSH ECX
005E1751  52                        PUSH EDX
005E1752  50                        PUSH EAX
005E1753  C7 45 C2 2D 00 00 00      MOV dword ptr [EBP + -0x3e],0x2d
005E175A  E8 71 FA 0C 00            CALL 0x006b11d0
005E175F  BF C8 DB 7C 00            MOV EDI,0x7cdbc8
005E1764  83 C9 FF                  OR ECX,0xffffffff
005E1767  33 C0                     XOR EAX,EAX
005E1769  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E176C  F2 AE                     SCASB.REPNE ES:EDI
005E176E  F7 D1                     NOT ECX
005E1770  2B F9                     SUB EDI,ECX
005E1772  C7 45 9A F2 00 00 00      MOV dword ptr [EBP + -0x66],0xf2
005E1779  8B C1                     MOV EAX,ECX
005E177B  8B F7                     MOV ESI,EDI
005E177D  8B FA                     MOV EDI,EDX
005E177F  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1782  C1 E9 02                  SHR ECX,0x2
005E1785  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1787  8B C8                     MOV ECX,EAX
005E1789  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E178C  83 E1 03                  AND ECX,0x3
005E178F  42                        INC EDX
005E1790  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1792  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1795  C7 45 BE B0 00 00 00      MOV dword ptr [EBP + -0x42],0xb0
005E179C  51                        PUSH ECX
005E179D  52                        PUSH EDX
005E179E  50                        PUSH EAX
005E179F  C7 45 C2 6C 00 00 00      MOV dword ptr [EBP + -0x3e],0x6c
005E17A6  E8 25 FA 0C 00            CALL 0x006b11d0
005E17AB  C7 45 9A F3 00 00 00      MOV dword ptr [EBP + -0x66],0xf3
005E17B2  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E17B5  BF B8 DB 7C 00            MOV EDI,0x7cdbb8
005E17BA  83 C9 FF                  OR ECX,0xffffffff
005E17BD  33 C0                     XOR EAX,EAX
005E17BF  F2 AE                     SCASB.REPNE ES:EDI
005E17C1  F7 D1                     NOT ECX
005E17C3  2B F9                     SUB EDI,ECX
005E17C5  8B C1                     MOV EAX,ECX
005E17C7  8B F7                     MOV ESI,EDI
005E17C9  8B FA                     MOV EDI,EDX
005E17CB  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E17CE  C1 E9 02                  SHR ECX,0x2
005E17D1  F3 A5                     MOVSD.REP ES:EDI,ESI
005E17D3  8B C8                     MOV ECX,EAX
005E17D5  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E17D8  83 E1 03                  AND ECX,0x3
005E17DB  42                        INC EDX
005E17DC  F3 A4                     MOVSB.REP ES:EDI,ESI
005E17DE  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E17E1  C7 45 BE DC 00 00 00      MOV dword ptr [EBP + -0x42],0xdc
005E17E8  51                        PUSH ECX
005E17E9  52                        PUSH EDX
005E17EA  50                        PUSH EAX
005E17EB  C7 45 C2 6C 00 00 00      MOV dword ptr [EBP + -0x3e],0x6c
005E17F2  E8 D9 F9 0C 00            CALL 0x006b11d0
005E17F7  BF A8 DB 7C 00            MOV EDI,0x7cdba8
005E17FC  83 C9 FF                  OR ECX,0xffffffff
005E17FF  33 C0                     XOR EAX,EAX
005E1801  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1804  F2 AE                     SCASB.REPNE ES:EDI
005E1806  F7 D1                     NOT ECX
005E1808  2B F9                     SUB EDI,ECX
005E180A  C7 45 9A F4 00 00 00      MOV dword ptr [EBP + -0x66],0xf4
005E1811  8B C1                     MOV EAX,ECX
005E1813  8B F7                     MOV ESI,EDI
005E1815  8B FA                     MOV EDI,EDX
005E1817  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E181A  C1 E9 02                  SHR ECX,0x2
005E181D  F3 A5                     MOVSD.REP ES:EDI,ESI
005E181F  8B C8                     MOV ECX,EAX
005E1821  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1824  83 E1 03                  AND ECX,0x3
005E1827  42                        INC EDX
005E1828  F3 A4                     MOVSB.REP ES:EDI,ESI
005E182A  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E182D  C7 45 BE CE 01 00 00      MOV dword ptr [EBP + -0x42],0x1ce
005E1834  51                        PUSH ECX
005E1835  52                        PUSH EDX
005E1836  50                        PUSH EAX
005E1837  C7 45 C2 6C 00 00 00      MOV dword ptr [EBP + -0x3e],0x6c
005E183E  E8 8D F9 0C 00            CALL 0x006b11d0
005E1843  BF 98 DB 7C 00            MOV EDI,0x7cdb98
005E1848  83 C9 FF                  OR ECX,0xffffffff
005E184B  33 C0                     XOR EAX,EAX
005E184D  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1850  F2 AE                     SCASB.REPNE ES:EDI
005E1852  F7 D1                     NOT ECX
005E1854  2B F9                     SUB EDI,ECX
005E1856  C7 45 9A F5 00 00 00      MOV dword ptr [EBP + -0x66],0xf5
005E185D  8B C1                     MOV EAX,ECX
005E185F  8B F7                     MOV ESI,EDI
005E1861  8B FA                     MOV EDI,EDX
005E1863  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1866  C1 E9 02                  SHR ECX,0x2
005E1869  F3 A5                     MOVSD.REP ES:EDI,ESI
005E186B  8B C8                     MOV ECX,EAX
005E186D  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1870  83 E1 03                  AND ECX,0x3
005E1873  42                        INC EDX
005E1874  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1876  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1879  C7 45 BE A9 02 00 00      MOV dword ptr [EBP + -0x42],0x2a9
005E1880  51                        PUSH ECX
005E1881  52                        PUSH EDX
005E1882  50                        PUSH EAX
005E1883  C7 45 C2 6C 00 00 00      MOV dword ptr [EBP + -0x3e],0x6c
005E188A  E8 41 F9 0C 00            CALL 0x006b11d0
005E188F  BF 88 DB 7C 00            MOV EDI,0x7cdb88
005E1894  83 C9 FF                  OR ECX,0xffffffff
005E1897  33 C0                     XOR EAX,EAX
005E1899  C7 45 9A F6 00 00 00      MOV dword ptr [EBP + -0x66],0xf6
005E18A0  F2 AE                     SCASB.REPNE ES:EDI
005E18A2  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E18A5  F7 D1                     NOT ECX
005E18A7  2B F9                     SUB EDI,ECX
005E18A9  8B C1                     MOV EAX,ECX
005E18AB  8B F7                     MOV ESI,EDI
005E18AD  8B FA                     MOV EDI,EDX
005E18AF  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E18B2  C1 E9 02                  SHR ECX,0x2
005E18B5  F3 A5                     MOVSD.REP ES:EDI,ESI
005E18B7  8B C8                     MOV ECX,EAX
005E18B9  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E18BC  83 E1 03                  AND ECX,0x3
005E18BF  42                        INC EDX
005E18C0  F3 A4                     MOVSB.REP ES:EDI,ESI
005E18C2  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E18C5  C7 45 BE 78 00 00 00      MOV dword ptr [EBP + -0x42],0x78
005E18CC  51                        PUSH ECX
005E18CD  52                        PUSH EDX
005E18CE  50                        PUSH EAX
005E18CF  C7 45 C2 54 01 00 00      MOV dword ptr [EBP + -0x3e],0x154
005E18D6  E8 F5 F8 0C 00            CALL 0x006b11d0
005E18DB  BF 78 DB 7C 00            MOV EDI,0x7cdb78
005E18E0  83 C9 FF                  OR ECX,0xffffffff
005E18E3  33 C0                     XOR EAX,EAX
005E18E5  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E18E8  F2 AE                     SCASB.REPNE ES:EDI
005E18EA  F7 D1                     NOT ECX
005E18EC  2B F9                     SUB EDI,ECX
005E18EE  C7 45 9A F7 00 00 00      MOV dword ptr [EBP + -0x66],0xf7
005E18F5  8B C1                     MOV EAX,ECX
005E18F7  8B F7                     MOV ESI,EDI
005E18F9  8B FA                     MOV EDI,EDX
005E18FB  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E18FE  C1 E9 02                  SHR ECX,0x2
005E1901  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1903  8B C8                     MOV ECX,EAX
005E1905  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1908  83 E1 03                  AND ECX,0x3
005E190B  42                        INC EDX
005E190C  F3 A4                     MOVSB.REP ES:EDI,ESI
005E190E  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1911  C7 45 BE 78 00 00 00      MOV dword ptr [EBP + -0x42],0x78
005E1918  51                        PUSH ECX
005E1919  52                        PUSH EDX
005E191A  50                        PUSH EAX
005E191B  C7 45 C2 CB 01 00 00      MOV dword ptr [EBP + -0x3e],0x1cb
005E1922  E8 A9 F8 0C 00            CALL 0x006b11d0
LAB_005e1927:
005E1927  8B 3D 2C C2 79 00         MOV EDI,dword ptr [0x0079c22c]
005E192D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005e1930:
005E1930  8A 0E                     MOV CL,byte ptr [ESI]
005E1932  8A 17                     MOV DL,byte ptr [EDI]
005E1934  8A C1                     MOV AL,CL
005E1936  3A CA                     CMP CL,DL
005E1938  75 1E                     JNZ 0x005e1958
005E193A  84 C0                     TEST AL,AL
005E193C  74 16                     JZ 0x005e1954
005E193E  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005E1941  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005E1944  8A C2                     MOV AL,DL
005E1946  3A D1                     CMP DL,CL
005E1948  75 0E                     JNZ 0x005e1958
005E194A  83 C6 02                  ADD ESI,0x2
005E194D  83 C7 02                  ADD EDI,0x2
005E1950  84 C0                     TEST AL,AL
005E1952  75 DC                     JNZ 0x005e1930
LAB_005e1954:
005E1954  33 C0                     XOR EAX,EAX
005E1956  EB 05                     JMP 0x005e195d
LAB_005e1958:
005E1958  1B C0                     SBB EAX,EAX
005E195A  83 D8 FF                  SBB EAX,-0x1
LAB_005e195d:
005E195D  85 C0                     TEST EAX,EAX
005E195F  0F 85 7A 01 00 00         JNZ 0x005e1adf
005E1965  BF 68 DB 7C 00            MOV EDI,0x7cdb68
005E196A  83 C9 FF                  OR ECX,0xffffffff
005E196D  F2 AE                     SCASB.REPNE ES:EDI
005E196F  F7 D1                     NOT ECX
005E1971  2B F9                     SUB EDI,ECX
005E1973  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1976  8B C1                     MOV EAX,ECX
005E1978  8B F7                     MOV ESI,EDI
005E197A  8B FA                     MOV EDI,EDX
005E197C  C7 45 9A F0 00 00 00      MOV dword ptr [EBP + -0x66],0xf0
005E1983  C1 E9 02                  SHR ECX,0x2
005E1986  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1988  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E198B  8B C8                     MOV ECX,EAX
005E198D  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1990  83 E1 03                  AND ECX,0x3
005E1993  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1995  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1998  42                        INC EDX
005E1999  51                        PUSH ECX
005E199A  52                        PUSH EDX
005E199B  50                        PUSH EAX
005E199C  C7 45 BE 8E 00 00 00      MOV dword ptr [EBP + -0x42],0x8e
005E19A3  C7 45 C2 25 01 00 00      MOV dword ptr [EBP + -0x3e],0x125
005E19AA  E8 21 F8 0C 00            CALL 0x006b11d0
005E19AF  BF 58 DB 7C 00            MOV EDI,0x7cdb58
005E19B4  83 C9 FF                  OR ECX,0xffffffff
005E19B7  33 C0                     XOR EAX,EAX
005E19B9  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E19BC  F2 AE                     SCASB.REPNE ES:EDI
005E19BE  F7 D1                     NOT ECX
005E19C0  2B F9                     SUB EDI,ECX
005E19C2  C7 45 9A F1 00 00 00      MOV dword ptr [EBP + -0x66],0xf1
005E19C9  8B C1                     MOV EAX,ECX
005E19CB  8B F7                     MOV ESI,EDI
005E19CD  8B FA                     MOV EDI,EDX
005E19CF  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E19D2  C1 E9 02                  SHR ECX,0x2
005E19D5  F3 A5                     MOVSD.REP ES:EDI,ESI
005E19D7  8B C8                     MOV ECX,EAX
005E19D9  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E19DC  83 E1 03                  AND ECX,0x3
005E19DF  42                        INC EDX
005E19E0  F3 A4                     MOVSB.REP ES:EDI,ESI
005E19E2  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E19E5  C7 45 BE 03 01 00 00      MOV dword ptr [EBP + -0x42],0x103
005E19EC  51                        PUSH ECX
005E19ED  52                        PUSH EDX
005E19EE  50                        PUSH EAX
005E19EF  C7 45 C2 0F 01 00 00      MOV dword ptr [EBP + -0x3e],0x10f
005E19F6  E8 D5 F7 0C 00            CALL 0x006b11d0
005E19FB  BF 48 DB 7C 00            MOV EDI,0x7cdb48
005E1A00  83 C9 FF                  OR ECX,0xffffffff
005E1A03  33 C0                     XOR EAX,EAX
005E1A05  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1A08  F2 AE                     SCASB.REPNE ES:EDI
005E1A0A  F7 D1                     NOT ECX
005E1A0C  2B F9                     SUB EDI,ECX
005E1A0E  C7 45 9A F2 00 00 00      MOV dword ptr [EBP + -0x66],0xf2
005E1A15  8B C1                     MOV EAX,ECX
005E1A17  8B F7                     MOV ESI,EDI
005E1A19  8B FA                     MOV EDI,EDX
005E1A1B  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1A1E  C1 E9 02                  SHR ECX,0x2
005E1A21  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1A23  8B C8                     MOV ECX,EAX
005E1A25  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1A28  83 E1 03                  AND ECX,0x3
005E1A2B  42                        INC EDX
005E1A2C  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1A2E  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1A31  C7 45 BE 03 01 00 00      MOV dword ptr [EBP + -0x42],0x103
005E1A38  51                        PUSH ECX
005E1A39  52                        PUSH EDX
005E1A3A  50                        PUSH EAX
005E1A3B  C7 45 C2 5F 01 00 00      MOV dword ptr [EBP + -0x3e],0x15f
005E1A42  E8 89 F7 0C 00            CALL 0x006b11d0
005E1A47  C7 45 9A F3 00 00 00      MOV dword ptr [EBP + -0x66],0xf3
005E1A4E  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1A51  BF 38 DB 7C 00            MOV EDI,0x7cdb38
005E1A56  83 C9 FF                  OR ECX,0xffffffff
005E1A59  33 C0                     XOR EAX,EAX
005E1A5B  F2 AE                     SCASB.REPNE ES:EDI
005E1A5D  F7 D1                     NOT ECX
005E1A5F  2B F9                     SUB EDI,ECX
005E1A61  8B C1                     MOV EAX,ECX
005E1A63  8B F7                     MOV ESI,EDI
005E1A65  8B FA                     MOV EDI,EDX
005E1A67  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1A6A  C1 E9 02                  SHR ECX,0x2
005E1A6D  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1A6F  8B C8                     MOV ECX,EAX
005E1A71  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1A74  83 E1 03                  AND ECX,0x3
005E1A77  42                        INC EDX
005E1A78  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1A7A  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1A7D  C7 45 BE D7 00 00 00      MOV dword ptr [EBP + -0x42],0xd7
005E1A84  51                        PUSH ECX
005E1A85  52                        PUSH EDX
005E1A86  50                        PUSH EAX
005E1A87  C7 45 C2 A4 01 00 00      MOV dword ptr [EBP + -0x3e],0x1a4
005E1A8E  E8 3D F7 0C 00            CALL 0x006b11d0
005E1A93  BF 28 DB 7C 00            MOV EDI,0x7cdb28
005E1A98  83 C9 FF                  OR ECX,0xffffffff
005E1A9B  33 C0                     XOR EAX,EAX
005E1A9D  8D 55 9E                  LEA EDX,[EBP + -0x62]
005E1AA0  F2 AE                     SCASB.REPNE ES:EDI
005E1AA2  F7 D1                     NOT ECX
005E1AA4  2B F9                     SUB EDI,ECX
005E1AA6  C7 45 9A F4 00 00 00      MOV dword ptr [EBP + -0x66],0xf4
005E1AAD  8B C1                     MOV EAX,ECX
005E1AAF  8B F7                     MOV ESI,EDI
005E1AB1  8B FA                     MOV EDI,EDX
005E1AB3  8B 53 7C                  MOV EDX,dword ptr [EBX + 0x7c]
005E1AB6  C1 E9 02                  SHR ECX,0x2
005E1AB9  F3 A5                     MOVSD.REP ES:EDI,ESI
005E1ABB  8B C8                     MOV ECX,EAX
005E1ABD  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1AC0  83 E1 03                  AND ECX,0x3
005E1AC3  42                        INC EDX
005E1AC4  F3 A4                     MOVSB.REP ES:EDI,ESI
005E1AC6  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005E1AC9  C7 45 BE 7C 02 00 00      MOV dword ptr [EBP + -0x42],0x27c
005E1AD0  51                        PUSH ECX
005E1AD1  52                        PUSH EDX
005E1AD2  50                        PUSH EAX
005E1AD3  C7 45 C2 26 01 00 00      MOV dword ptr [EBP + -0x3e],0x126
005E1ADA  E8 F1 F6 0C 00            CALL 0x006b11d0
LAB_005e1adf:
005E1ADF  C6 83 80 00 00 00 02      MOV byte ptr [EBX + 0x80],0x2
005E1AE6  EB 35                     JMP 0x005e1b1d
LAB_005e1ae8:
005E1AE8  33 C9                     XOR ECX,ECX
005E1AEA  6A 01                     PUSH 0x1
005E1AEC  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005E1AF2  6A 00                     PUSH 0x0
005E1AF4  51                        PUSH ECX
005E1AF5  6A 01                     PUSH 0x1
005E1AF7  68 64 DA 7C 00            PUSH 0x7cda64
005E1AFC  E8 FF 10 11 00            CALL 0x006f2c00
005E1B01  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005E1B07  83 C4 0C                  ADD ESP,0xc
005E1B0A  50                        PUSH EAX
005E1B0B  52                        PUSH EDX
005E1B0C  E8 DF 8E 12 00            CALL 0x0070a9f0
005E1B11  89 07                     MOV dword ptr [EDI],EAX
005E1B13  83 C4 10                  ADD ESP,0x10
005E1B16  C6 83 80 00 00 00 01      MOV byte ptr [EBX + 0x80],0x1
LAB_005e1b1d:
005E1B1D  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E1B20  8B 4B 7C                  MOV ECX,dword ptr [EBX + 0x7c]
005E1B23  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005E1B26  73 0B                     JNC 0x005e1b33
005E1B28  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E1B2B  0F AF F1                  IMUL ESI,ECX
005E1B2E  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005E1B31  EB 02                     JMP 0x005e1b35
LAB_005e1b33:
005E1B33  33 F6                     XOR ESI,ESI
LAB_005e1b35:
005E1B35  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005E1B38  8D 85 9C ED FF FF         LEA EAX,[EBP + 0xffffed9c]
005E1B3E  6A 00                     PUSH 0x0
005E1B40  50                        PUSH EAX
005E1B41  51                        PUSH ECX
005E1B42  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005E1B45  E8 16 A8 0D 00            CALL 0x006bc360
005E1B4A  8D 93 91 00 00 00         LEA EDX,[EBX + 0x91]
005E1B50  8D 85 9C ED FF FF         LEA EAX,[EBP + 0xffffed9c]
005E1B56  52                        PUSH EDX
005E1B57  6A 10                     PUSH 0x10
005E1B59  6A 1A                     PUSH 0x1a
005E1B5B  68 00 01 00 00            PUSH 0x100
005E1B60  6A 00                     PUSH 0x0
005E1B62  50                        PUSH EAX
005E1B63  E8 18 6C 13 00            CALL 0x00718780
005E1B68  8D 8B 91 01 00 00         LEA ECX,[EBX + 0x191]
005E1B6E  8D 95 9C ED FF FF         LEA EDX,[EBP + 0xffffed9c]
005E1B74  51                        PUSH ECX
005E1B75  6A 10                     PUSH 0x10
005E1B77  6A 2E                     PUSH 0x2e
005E1B79  68 00 01 00 00            PUSH 0x100
005E1B7E  6A 00                     PUSH 0x0
005E1B80  52                        PUSH EDX
005E1B81  E8 FA 6B 13 00            CALL 0x00718780
005E1B86  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E1B89  83 C4 30                  ADD ESP,0x30
005E1B8C  85 C0                     TEST EAX,EAX
005E1B8E  74 38                     JZ 0x005e1bc8
005E1B90  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E1B95  6A 00                     PUSH 0x0
005E1B97  6A 01                     PUSH 0x1
005E1B99  50                        PUSH EAX
005E1B9A  E8 A4 01 E2 FF            CALL 0x00401d43
005E1B9F  83 C4 0C                  ADD ESP,0xc
005E1BA2  8B CB                     MOV ECX,EBX
005E1BA4  E8 C7 1A E2 FF            CALL 0x00403670
005E1BA9  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005E1BAC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E1BB2  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E1BB7  6A 00                     PUSH 0x0
005E1BB9  6A 02                     PUSH 0x2
005E1BBB  6A 0A                     PUSH 0xa
005E1BBD  51                        PUSH ECX
005E1BBE  52                        PUSH EDX
005E1BBF  50                        PUSH EAX
005E1BC0  E8 C5 28 E2 FF            CALL 0x0040448a
005E1BC5  83 C4 18                  ADD ESP,0x18
LAB_005e1bc8:
005E1BC8  8B 83 89 00 00 00         MOV EAX,dword ptr [EBX + 0x89]
005E1BCE  85 C0                     TEST EAX,EAX
005E1BD0  74 09                     JZ 0x005e1bdb
005E1BD2  50                        PUSH EAX
005E1BD3  E8 88 E9 12 00            CALL 0x00710560
005E1BD8  83 C4 04                  ADD ESP,0x4
LAB_005e1bdb:
005E1BDB  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
005E1BE1  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E1BE4  51                        PUSH ECX
005E1BE5  6A 00                     PUSH 0x0
005E1BE7  52                        PUSH EDX
005E1BE8  E8 B8 26 E2 FF            CALL 0x004042a5
005E1BED  89 83 89 00 00 00         MOV dword ptr [EBX + 0x89],EAX
005E1BF3  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
005E1BFA  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
005E1C01  8B 83 8D 00 00 00         MOV EAX,dword ptr [EBX + 0x8d]
005E1C07  83 C4 0C                  ADD ESP,0xc
005E1C0A  85 C0                     TEST EAX,EAX
005E1C0C  74 09                     JZ 0x005e1c17
005E1C0E  50                        PUSH EAX
005E1C0F  E8 4C E9 12 00            CALL 0x00710560
005E1C14  83 C4 04                  ADD ESP,0x4
LAB_005e1c17:
005E1C17  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
005E1C1C  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005E1C1F  50                        PUSH EAX
005E1C20  6A 00                     PUSH 0x0
005E1C22  51                        PUSH ECX
005E1C23  E8 DE 06 E2 FF            CALL 0x00402306
005E1C28  83 C4 0C                  ADD ESP,0xc
005E1C2B  B9 58 76 80 00            MOV ECX,0x807658
005E1C30  89 83 8D 00 00 00         MOV dword ptr [EBX + 0x8d],EAX
005E1C36  6A 00                     PUSH 0x0
005E1C38  E8 5F 16 E2 FF            CALL 0x0040329c
005E1C3D  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005E1C44  0F 84 5C 16 00 00         JZ 0x005e32a6
005E1C4A  8B 53 70                  MOV EDX,dword ptr [EBX + 0x70]
005E1C4D  83 C6 2D                  ADD ESI,0x2d
005E1C50  6A 00                     PUSH 0x0
005E1C52  6A 00                     PUSH 0x0
005E1C54  56                        PUSH ESI
005E1C55  52                        PUSH EDX
005E1C56  E8 A5 80 13 00            CALL 0x00719d00
005E1C5B  83 C4 10                  ADD ESP,0x10
005E1C5E  89 83 85 00 00 00         MOV dword ptr [EBX + 0x85],EAX
005E1C64  85 C0                     TEST EAX,EAX
005E1C66  75 1B                     JNZ 0x005e1c83
005E1C68  50                        PUSH EAX
005E1C69  50                        PUSH EAX
005E1C6A  A1 98 67 80 00            MOV EAX,[0x00806798]
005E1C6F  56                        PUSH ESI
005E1C70  50                        PUSH EAX
005E1C71  E8 8A 80 13 00            CALL 0x00719d00
005E1C76  83 C4 10                  ADD ESP,0x10
005E1C79  89 83 85 00 00 00         MOV dword ptr [EBX + 0x85],EAX
005E1C7F  85 C0                     TEST EAX,EAX
005E1C81  74 16                     JZ 0x005e1c99
LAB_005e1c83:
005E1C83  50                        PUSH EAX
005E1C84  6A 00                     PUSH 0x0
005E1C86  6A 02                     PUSH 0x2
005E1C88  6A 00                     PUSH 0x0
005E1C8A  B9 58 76 80 00            MOV ECX,0x807658
005E1C8F  E8 3D 13 E2 FF            CALL 0x00402fd1
005E1C94  E9 0D 16 00 00            JMP 0x005e32a6
LAB_005e1c99:
005E1C99  6A 00                     PUSH 0x0
005E1C9B  6A 00                     PUSH 0x0
005E1C9D  6A 02                     PUSH 0x2
005E1C9F  6A 14                     PUSH 0x14
005E1CA1  B9 58 76 80 00            MOV ECX,0x807658
005E1CA6  E8 26 13 E2 FF            CALL 0x00402fd1
005E1CAB  E9 F6 15 00 00            JMP 0x005e32a6
switchD_005e13d2::caseD_1:
005E1CB0  80 7B 6E 01               CMP byte ptr [EBX + 0x6e],0x1
005E1CB4  75 13                     JNZ 0x005e1cc9
005E1CB6  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
005E1CB9  84 C0                     TEST AL,AL
005E1CBB  0F 84 E5 15 00 00         JZ 0x005e32a6
005E1CC1  3C 01                     CMP AL,0x1
005E1CC3  0F 84 DD 15 00 00         JZ 0x005e32a6
LAB_005e1cc9:
005E1CC9  33 C0                     XOR EAX,EAX
005E1CCB  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
005E1CCE  83 F8 04                  CMP EAX,0x4
005E1CD1  77 23                     JA 0x005e1cf6
switchD_005e1cd3::switchD:
005E1CD3  FF 24 85 AC 35 5E 00      JMP dword ptr [EAX*0x4 + 0x5e35ac]
switchD_005e1cd3::caseD_2:
005E1CDA  C6 45 E0 02               MOV byte ptr [EBP + -0x20],0x2
005E1CDE  EB 16                     JMP 0x005e1cf6
switchD_005e1cd3::caseD_0:
005E1CE0  C6 45 E0 00               MOV byte ptr [EBP + -0x20],0x0
005E1CE4  EB 10                     JMP 0x005e1cf6
switchD_005e1cd3::caseD_1:
005E1CE6  C6 45 E0 01               MOV byte ptr [EBP + -0x20],0x1
005E1CEA  EB 0A                     JMP 0x005e1cf6
switchD_005e1cd3::caseD_3:
005E1CEC  C6 45 E0 03               MOV byte ptr [EBP + -0x20],0x3
005E1CF0  EB 04                     JMP 0x005e1cf6
switchD_005e1cd3::caseD_4:
005E1CF2  C6 45 E0 04               MOV byte ptr [EBP + -0x20],0x4
switchD_005e1cd3::default:
005E1CF6  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005E1CF9  81 E7 FF 00 00 00         AND EDI,0xff
005E1CFF  8B 84 BB 91 02 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x291]
005E1D06  85 C0                     TEST EAX,EAX
005E1D08  74 2F                     JZ 0x005e1d39
005E1D0A  8B 8C BB A5 02 00 00      MOV ECX,dword ptr [EBX + EDI*0x4 + 0x2a5]
005E1D11  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E1D17  51                        PUSH ECX
005E1D18  52                        PUSH EDX
005E1D19  E8 D2 1D 0D 00            CALL 0x006b3af0
005E1D1E  8B 84 BB 91 02 00 00      MOV EAX,dword ptr [EBX + EDI*0x4 + 0x291]
005E1D25  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E1D28  50                        PUSH EAX
005E1D29  E8 82 39 10 00            CALL 0x006e56b0
005E1D2E  C7 84 BB 91 02 00 00 00 00 00 00  MOV dword ptr [EBX + EDI*0x4 + 0x291],0x0
LAB_005e1d39:
005E1D39  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
005E1D3C  8D 04 8B                  LEA EAX,[EBX + ECX*0x4]
005E1D3F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E1D42  05 53 06 00 00            ADD EAX,0x653
005E1D47  50                        PUSH EAX
005E1D48  E8 13 93 0C 00            CALL 0x006ab060
005E1D4D  80 7E 0E 01               CMP byte ptr [ESI + 0xe],0x1
005E1D51  0F 85 4F 15 00 00         JNZ 0x005e32a6
005E1D57  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
005E1D5A  8B 4E 1B                  MOV ECX,dword ptr [ESI + 0x1b]
005E1D5D  3D 91 00 00 00            CMP EAX,0x91
005E1D62  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005E1D65  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
005E1D68  7D 07                     JGE 0x005e1d71
005E1D6A  C7 45 EC 91 00 00 00      MOV dword ptr [EBP + -0x14],0x91
LAB_005e1d71:
005E1D71  83 F9 28                  CMP ECX,0x28
005E1D74  7D 07                     JGE 0x005e1d7d
005E1D76  C7 45 80 28 00 00 00      MOV dword ptr [EBP + -0x80],0x28
LAB_005e1d7d:
005E1D7D  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E1D80  6A 01                     PUSH 0x1
005E1D82  8D 50 28                  LEA EDX,[EAX + 0x28]
005E1D85  52                        PUSH EDX
005E1D86  50                        PUSH EAX
005E1D87  E8 54 32 0D 00            CALL 0x006b4fe0
005E1D8C  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
005E1D8F  50                        PUSH EAX
005E1D90  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E1D93  33 C9                     XOR ECX,ECX
005E1D95  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005E1D99  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005E1D9C  51                        PUSH ECX
005E1D9D  52                        PUSH EDX
005E1D9E  50                        PUSH EAX
005E1D9F  E8 1C 33 0D 00            CALL 0x006b50c0
005E1DA4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E1DA7  33 D2                     XOR EDX,EDX
005E1DA9  81 C1 53 06 00 00         ADD ECX,0x653
005E1DAF  89 01                     MOV dword ptr [ECX],EAX
005E1DB1  8A 46 0A                  MOV AL,byte ptr [ESI + 0xa]
005E1DB4  3C 01                     CMP AL,0x1
005E1DB6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E1DB9  0F 94 C2                  SETZ DL
005E1DBC  C1 E2 08                  SHL EDX,0x8
005E1DBF  05 5B 06 00 00            ADD EAX,0x65b
005E1DC4  8D 8C 1A 91 00 00 00      LEA ECX,[EDX + EBX*0x1 + 0x91]
005E1DCB  8D 56 09                  LEA EDX,[ESI + 0x9]
005E1DCE  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
005E1DD1  8B 0A                     MOV ECX,dword ptr [EDX]
005E1DD3  8D 97 12 62 00 00         LEA EDX,[EDI + 0x6212]
005E1DD9  89 08                     MOV dword ptr [EAX],ECX
005E1DDB  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
005E1DDE  8D 87 00 62 00 00         LEA EAX,[EDI + 0x6200]
005E1DE4  52                        PUSH EDX
005E1DE5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005E1DE8  50                        PUSH EAX
005E1DE9  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
005E1DEC  51                        PUSH ECX
005E1DED  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
005E1DF0  52                        PUSH EDX
005E1DF1  50                        PUSH EAX
005E1DF2  51                        PUSH ECX
005E1DF3  6A 01                     PUSH 0x1
005E1DF5  6A 01                     PUSH 0x1
005E1DF7  8B CB                     MOV ECX,EBX
005E1DF9  E8 1E 3F E2 FF            CALL 0x00405d1c
005E1DFE  89 84 BB 91 02 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x291],EAX
005E1E05  8B 56 13                  MOV EDX,dword ptr [ESI + 0x13]
005E1E08  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
005E1E0B  8B 8C BB A5 02 00 00      MOV ECX,dword ptr [EBX + EDI*0x4 + 0x2a5]
005E1E12  8D BC BB A5 02 00 00      LEA EDI,[EBX + EDI*0x4 + 0x2a5]
005E1E19  52                        PUSH EDX
005E1E1A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E1E20  50                        PUSH EAX
005E1E21  6A FF                     PUSH -0x1
005E1E23  51                        PUSH ECX
005E1E24  52                        PUSH EDX
005E1E25  E8 16 18 0D 00            CALL 0x006b3640
005E1E2A  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005E1E2D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005E1E30  8B 17                     MOV EDX,dword ptr [EDI]
005E1E32  50                        PUSH EAX
005E1E33  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E1E38  51                        PUSH ECX
005E1E39  52                        PUSH EDX
005E1E3A  50                        PUSH EAX
005E1E3B  E8 C0 09 0D 00            CALL 0x006b2800
005E1E40  8B 4E 05                  MOV ECX,dword ptr [ESI + 0x5]
005E1E43  8B 17                     MOV EDX,dword ptr [EDI]
005E1E45  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E1E4A  51                        PUSH ECX
005E1E4B  52                        PUSH EDX
005E1E4C  50                        PUSH EAX
005E1E4D  E8 CE 11 0D 00            CALL 0x006b3020
005E1E52  8B 0F                     MOV ECX,dword ptr [EDI]
005E1E54  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E1E5A  51                        PUSH ECX
005E1E5B  52                        PUSH EDX
005E1E5C  E8 CF 15 0D 00            CALL 0x006b3430
005E1E61  E9 40 14 00 00            JMP 0x005e32a6
switchD_005e13d2::caseD_2:
005E1E66  80 7B 6E 01               CMP byte ptr [EBX + 0x6e],0x1
005E1E6A  0F 84 36 14 00 00         JZ 0x005e32a6
005E1E70  8B 83 B9 02 00 00         MOV EAX,dword ptr [EBX + 0x2b9]
005E1E76  85 C0                     TEST EAX,EAX
005E1E78  74 41                     JZ 0x005e1ebb
005E1E7A  8D BB BD 02 00 00         LEA EDI,[EBX + 0x2bd]
005E1E80  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_005e1e87:
005E1E87  8B 07                     MOV EAX,dword ptr [EDI]
005E1E89  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E1E8F  50                        PUSH EAX
005E1E90  51                        PUSH ECX
005E1E91  E8 5A 1C 0D 00            CALL 0x006b3af0
005E1E96  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E1E99  83 C7 04                  ADD EDI,0x4
005E1E9C  48                        DEC EAX
005E1E9D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E1EA0  75 E5                     JNZ 0x005e1e87
005E1EA2  8B 93 B9 02 00 00         MOV EDX,dword ptr [EBX + 0x2b9]
005E1EA8  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E1EAB  52                        PUSH EDX
005E1EAC  E8 FF 37 10 00            CALL 0x006e56b0
005E1EB1  C7 83 B9 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2b9],0x0
LAB_005e1ebb:
005E1EBB  8D BB 8F 06 00 00         LEA EDI,[EBX + 0x68f]
005E1EC1  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_005e1ec8:
005E1EC8  57                        PUSH EDI
005E1EC9  E8 92 91 0C 00            CALL 0x006ab060
005E1ECE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E1ED1  83 C7 0C                  ADD EDI,0xc
005E1ED4  48                        DEC EAX
005E1ED5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E1ED8  75 EE                     JNZ 0x005e1ec8
005E1EDA  80 7E 0D 01               CMP byte ptr [ESI + 0xd],0x1
005E1EDE  0F 85 C2 13 00 00         JNZ 0x005e32a6
005E1EE4  B9 16 00 00 00            MOV ECX,0x16
005E1EE9  33 C0                     XOR EAX,EAX
005E1EEB  8D BD D0 FD FF FF         LEA EDI,[EBP + 0xfffffdd0]
005E1EF1  F3 AB                     STOSD.REP ES:EDI
005E1EF3  B9 8C 00 00 00            MOV ECX,0x8c
005E1EF8  8D BD 9C F1 FF FF         LEA EDI,[EBP + 0xfffff19c]
005E1EFE  F3 AB                     STOSD.REP ES:EDI
005E1F00  B1 02                     MOV CL,0x2
005E1F02  8D 46 16                  LEA EAX,[ESI + 0x16]
005E1F05  88 8D 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],CL
005E1F0B  BF 02 00 00 00            MOV EDI,0x2
LAB_005e1f10:
005E1F10  83 38 00                  CMP dword ptr [EAX],0x0
005E1F13  7C 02                     JL 0x005e1f17
005E1F15  FE C1                     INC CL
LAB_005e1f17:
005E1F17  83 C0 04                  ADD EAX,0x4
005E1F1A  4F                        DEC EDI
005E1F1B  75 F3                     JNZ 0x005e1f10
005E1F1D  88 8D 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],CL
005E1F23  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
005E1F29  25 FF 00 00 00            AND EAX,0xff
005E1F2E  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005E1F31  83 E8 02                  SUB EAX,0x2
005E1F34  74 15                     JZ 0x005e1f4b
005E1F36  48                        DEC EAX
005E1F37  75 26                     JNZ 0x005e1f5f
005E1F39  80 3D 40 73 80 00 03      CMP byte ptr [0x00807340],0x3
005E1F40  75 1D                     JNZ 0x005e1f5f
005E1F42  C6 05 40 73 80 00 01      MOV byte ptr [0x00807340],0x1
005E1F49  EB 14                     JMP 0x005e1f5f
LAB_005e1f4b:
005E1F4B  A0 40 73 80 00            MOV AL,[0x00807340]
005E1F50  3C 01                     CMP AL,0x1
005E1F52  74 04                     JZ 0x005e1f58
005E1F54  3C 03                     CMP AL,0x3
005E1F56  75 07                     JNZ 0x005e1f5f
LAB_005e1f58:
005E1F58  C6 05 40 73 80 00 00      MOV byte ptr [0x00807340],0x0
LAB_005e1f5f:
005E1F5F  84 C9                     TEST CL,CL
005E1F61  C6 45 F7 00               MOV byte ptr [EBP + -0x9],0x0
005E1F65  0F 86 96 01 00 00         JBE 0x005e2101
005E1F6B  8D 46 09                  LEA EAX,[ESI + 0x9]
005E1F6E  8D 8B 93 06 00 00         LEA ECX,[EBX + 0x693]
005E1F74  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
005E1F7A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005E1F81  8D BD 9C F1 FF FF         LEA EDI,[EBP + 0xfffff19c]
005E1F87  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E1F8A  83 C6 1E                  ADD ESI,0x1e
LAB_005e1f8d:
005E1F8D  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
005E1F90  B9 52 1F 00 00            MOV ECX,0x1f52
005E1F95  83 E8 02                  SUB EAX,0x2
005E1F98  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005E1F9B  74 72                     JZ 0x005e200f
005E1F9D  48                        DEC EAX
005E1F9E  74 3B                     JZ 0x005e1fdb
005E1FA0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E1FA3  83 F8 03                  CMP EAX,0x3
005E1FA6  77 2E                     JA 0x005e1fd6
switchD_005e1fa8::switchD:
005E1FA8  FF 24 85 C0 35 5E 00      JMP dword ptr [EAX*0x4 + 0x5e35c0]
switchD_005e1fa8::caseD_0:
005E1FAF  40                        INC EAX
005E1FB0  C7 45 E8 47 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f47
005E1FB7  89 07                     MOV dword ptr [EDI],EAX
005E1FB9  EB 7B                     JMP 0x005e2036
switchD_005e1fa8::caseD_1:
005E1FBB  40                        INC EAX
005E1FBC  C7 45 E8 48 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f48
005E1FC3  89 07                     MOV dword ptr [EDI],EAX
005E1FC5  EB 6F                     JMP 0x005e2036
switchD_005e1fa8::caseD_2:
005E1FC7  40                        INC EAX
005E1FC8  C7 45 E8 49 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f49
005E1FCF  89 07                     MOV dword ptr [EDI],EAX
005E1FD1  EB 63                     JMP 0x005e2036
switchD_005e1fa8::caseD_3:
005E1FD3  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
switchD_005e1fa8::default:
005E1FD6  40                        INC EAX
005E1FD7  89 07                     MOV dword ptr [EDI],EAX
005E1FD9  EB 5B                     JMP 0x005e2036
LAB_005e1fdb:
005E1FDB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E1FDE  8B C1                     MOV EAX,ECX
005E1FE0  83 E8 00                  SUB EAX,0x0
005E1FE3  74 1E                     JZ 0x005e2003
005E1FE5  48                        DEC EAX
005E1FE6  74 0F                     JZ 0x005e1ff7
005E1FE8  48                        DEC EAX
005E1FE9  75 1F                     JNZ 0x005e200a
005E1FEB  41                        INC ECX
005E1FEC  C7 45 E8 49 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f49
005E1FF3  89 0F                     MOV dword ptr [EDI],ECX
005E1FF5  EB 3F                     JMP 0x005e2036
LAB_005e1ff7:
005E1FF7  41                        INC ECX
005E1FF8  C7 45 E8 48 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f48
005E1FFF  89 0F                     MOV dword ptr [EDI],ECX
005E2001  EB 33                     JMP 0x005e2036
LAB_005e2003:
005E2003  C7 45 E8 47 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f47
LAB_005e200a:
005E200A  41                        INC ECX
005E200B  89 0F                     MOV dword ptr [EDI],ECX
005E200D  EB 27                     JMP 0x005e2036
LAB_005e200f:
005E200F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E2012  83 E8 00                  SUB EAX,0x0
005E2015  74 12                     JZ 0x005e2029
005E2017  48                        DEC EAX
005E2018  75 1C                     JNZ 0x005e2036
005E201A  C7 45 E8 49 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f49
005E2021  C7 07 03 00 00 00         MOV dword ptr [EDI],0x3
005E2027  EB 0D                     JMP 0x005e2036
LAB_005e2029:
005E2029  C7 45 E8 47 1F 00 00      MOV dword ptr [EBP + -0x18],0x1f47
005E2030  C7 07 01 00 00 00         MOV dword ptr [EDI],0x1
LAB_005e2036:
005E2036  A0 40 73 80 00            MOV AL,[0x00807340]
005E203B  8A 4D F7                  MOV CL,byte ptr [EBP + -0x9]
005E203E  33 D2                     XOR EDX,EDX
005E2040  3A C8                     CMP CL,AL
005E2042  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005E2045  0F 94 C2                  SETZ DL
005E2048  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
005E204B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005E2051  8B 4E F0                  MOV ECX,dword ptr [ESI + -0x10]
005E2054  52                        PUSH EDX
005E2055  50                        PUSH EAX
005E2056  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
005E2059  E8 E2 E0 0C 00            CALL 0x006b0140
005E205E  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E2064  50                        PUSH EAX
005E2065  E8 A6 F0 12 00            CALL 0x00711110
005E206A  83 C0 1B                  ADD EAX,0x1b
005E206D  6A 01                     PUSH 0x1
005E206F  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
005E2072  8B 0E                     MOV ECX,dword ptr [ESI]
005E2074  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E2077  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
005E207A  C7 47 18 14 00 00 00      MOV dword ptr [EDI + 0x18],0x14
005E2081  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005E2084  8D 48 28                  LEA ECX,[EAX + 0x28]
005E2087  89 95 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EDX
005E208D  51                        PUSH ECX
005E208E  50                        PUSH EAX
005E208F  E8 4C 2F 0D 00            CALL 0x006b4fe0
005E2094  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E2097  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
005E209D  50                        PUSH EAX
005E209E  33 C0                     XOR EAX,EAX
005E20A0  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005E20A4  50                        PUSH EAX
005E20A5  6A 14                     PUSH 0x14
005E20A7  51                        PUSH ECX
005E20A8  E8 13 30 0D 00            CALL 0x006b50c0
005E20AD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E20B0  33 D2                     XOR EDX,EDX
005E20B2  89 41 FC                  MOV dword ptr [ECX + -0x4],EAX
005E20B5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005E20B8  38 50 0A                  CMP byte ptr [EAX + 0xa],DL
005E20BB  8D 41 04                  LEA EAX,[ECX + 0x4]
005E20BE  0F 95 C2                  SETNZ DL
005E20C1  C1 E2 08                  SHL EDX,0x8
005E20C4  83 C1 0C                  ADD ECX,0xc
005E20C7  83 C6 04                  ADD ESI,0x4
005E20CA  8D 94 1A 91 00 00 00      LEA EDX,[EDX + EBX*0x1 + 0x91]
005E20D1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E20D4  89 51 F4                  MOV dword ptr [ECX + -0xc],EDX
005E20D7  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
005E20DD  8A 8D 74 FF FF FF         MOV CL,byte ptr [EBP + 0xffffff74]
005E20E3  83 C7 70                  ADD EDI,0x70
005E20E6  8B 12                     MOV EDX,dword ptr [EDX]
005E20E8  89 10                     MOV dword ptr [EAX],EDX
005E20EA  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
005E20ED  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005E20F0  FE C0                     INC AL
005E20F2  42                        INC EDX
005E20F3  3A C1                     CMP AL,CL
005E20F5  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
005E20F8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005E20FB  0F 82 8C FE FF FF         JC 0x005e1f8d
LAB_005e2101:
005E2101  8B 15 40 73 80 00         MOV EDX,dword ptr [0x00807340]
005E2107  B8 01 00 00 00            MOV EAX,0x1
005E210C  89 85 D0 FD FF FF         MOV dword ptr [EBP + 0xfffffdd0],EAX
005E2112  8D 8D 9C F1 FF FF         LEA ECX,[EBP + 0xfffff19c]
005E2118  89 85 D4 FD FF FF         MOV dword ptr [EBP + 0xfffffdd4],EAX
005E211E  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E2121  89 8D 18 FE FF FF         MOV dword ptr [EBP + 0xfffffe18],ECX
005E2127  89 85 E0 FD FF FF         MOV dword ptr [EBP + 0xfffffde0],EAX
005E212D  B9 02 00 00 00            MOV ECX,0x2
005E2132  89 85 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],EAX
005E2138  81 E2 FF 00 00 00         AND EDX,0xff
005E213E  8D 85 D0 FD FF FF         LEA EAX,[EBP + 0xfffffdd0]
005E2144  89 8D E4 FD FF FF         MOV dword ptr [EBP + 0xfffffde4],ECX
005E214A  89 8D 04 FE FF FF         MOV dword ptr [EBP + 0xfffffe04],ECX
005E2150  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E2153  6A 00                     PUSH 0x0
005E2155  42                        INC EDX
005E2156  50                        PUSH EAX
005E2157  8D 83 B9 02 00 00         LEA EAX,[EBX + 0x2b9]
005E215D  89 95 1C FE FF FF         MOV dword ptr [EBP + 0xfffffe1c],EDX
005E2163  C7 85 E8 FD FF FF 05 62 00 00  MOV dword ptr [EBP + 0xfffffde8],0x6205
005E216D  C7 85 08 FE FF FF 17 62 00 00  MOV dword ptr [EBP + 0xfffffe08],0x6217
005E2177  8B 11                     MOV EDX,dword ptr [ECX]
005E2179  6A 00                     PUSH 0x0
005E217B  50                        PUSH EAX
005E217C  6A 05                     PUSH 0x5
005E217E  FF 52 08                  CALL dword ptr [EDX + 0x8]
005E2181  8D B5 A8 F1 FF FF         LEA ESI,[EBP + 0xfffff1a8]
005E2187  8D BB BD 02 00 00         LEA EDI,[EBX + 0x2bd]
005E218D  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_005e2194:
005E2194  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E2197  8B 16                     MOV EDX,dword ptr [ESI]
005E2199  8B 07                     MOV EAX,dword ptr [EDI]
005E219B  51                        PUSH ECX
005E219C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E21A2  52                        PUSH EDX
005E21A3  6A FF                     PUSH -0x1
005E21A5  50                        PUSH EAX
005E21A6  51                        PUSH ECX
005E21A7  E8 94 14 0D 00            CALL 0x006b3640
005E21AC  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
005E21AF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E21B2  8B 0F                     MOV ECX,dword ptr [EDI]
005E21B4  52                        PUSH EDX
005E21B5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E21BB  50                        PUSH EAX
005E21BC  51                        PUSH ECX
005E21BD  52                        PUSH EDX
005E21BE  E8 3D 06 0D 00            CALL 0x006b2800
005E21C3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005E21C6  8B 17                     MOV EDX,dword ptr [EDI]
005E21C8  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
005E21CB  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E21D0  51                        PUSH ECX
005E21D1  52                        PUSH EDX
005E21D2  50                        PUSH EAX
005E21D3  E8 48 0E 0D 00            CALL 0x006b3020
005E21D8  8B 0F                     MOV ECX,dword ptr [EDI]
005E21DA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E21E0  51                        PUSH ECX
005E21E1  52                        PUSH EDX
005E21E2  E8 49 12 0D 00            CALL 0x006b3430
005E21E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E21EA  83 C6 70                  ADD ESI,0x70
005E21ED  83 C7 04                  ADD EDI,0x4
005E21F0  48                        DEC EAX
005E21F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E21F4  75 9E                     JNZ 0x005e2194
005E21F6  E9 AB 10 00 00            JMP 0x005e32a6
switchD_005e13d2::caseD_3:
005E21FB  80 7B 6E 01               CMP byte ptr [EBX + 0x6e],0x1
005E21FF  0F 84 A1 10 00 00         JZ 0x005e32a6
005E2205  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005E220B  85 C0                     TEST EAX,EAX
005E220D  74 6E                     JZ 0x005e227d
005E220F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E2212  50                        PUSH EAX
005E2213  E8 98 34 10 00            CALL 0x006e56b0
005E2218  8B 83 84 04 00 00         MOV EAX,dword ptr [EBX + 0x484]
005E221E  C7 83 CD 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2cd],0x0
005E2228  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E222E  50                        PUSH EAX
005E222F  51                        PUSH ECX
005E2230  E8 BB 18 0D 00            CALL 0x006b3af0
005E2235  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
005E223B  83 F8 FF                  CMP EAX,-0x1
005E223E  74 0D                     JZ 0x005e224d
005E2240  8B 93 19 03 00 00         MOV EDX,dword ptr [EBX + 0x319]
005E2246  50                        PUSH EAX
005E2247  52                        PUSH EDX
005E2248  E8 A3 18 0D 00            CALL 0x006b3af0
LAB_005e224d:
005E224D  8B 83 66 03 00 00         MOV EAX,dword ptr [EBX + 0x366]
005E2253  83 F8 FF                  CMP EAX,-0x1
005E2256  74 0D                     JZ 0x005e2265
005E2258  50                        PUSH EAX
005E2259  8B 83 AA 03 00 00         MOV EAX,dword ptr [EBX + 0x3aa]
005E225F  50                        PUSH EAX
005E2260  E8 8B 18 0D 00            CALL 0x006b3af0
LAB_005e2265:
005E2265  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E226B  83 F8 FF                  CMP EAX,-0x1
005E226E  74 0D                     JZ 0x005e227d
005E2270  8B 8B 3B 04 00 00         MOV ECX,dword ptr [EBX + 0x43b]
005E2276  50                        PUSH EAX
005E2277  51                        PUSH ECX
005E2278  E8 73 18 0D 00            CALL 0x006b3af0
LAB_005e227d:
005E227D  8D 83 BF 06 00 00         LEA EAX,[EBX + 0x6bf]
005E2283  50                        PUSH EAX
005E2284  E8 D7 8D 0C 00            CALL 0x006ab060
005E2289  80 7E 0D 01               CMP byte ptr [ESI + 0xd],0x1
005E228D  0F 85 13 10 00 00         JNZ 0x005e32a6
005E2293  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E2299  B9 1E 02 00 00            MOV ECX,0x21e
005E229E  33 C0                     XOR EAX,EAX
005E22A0  8D BD D0 F4 FF FF         LEA EDI,[EBP + 0xfffff4d0]
005E22A6  F3 AB                     STOSD.REP ES:EDI
005E22A8  8B 82 48 05 00 00         MOV EAX,dword ptr [EDX + 0x548]
005E22AE  85 C0                     TEST EAX,EAX
005E22B0  74 06                     JZ 0x005e22b8
005E22B2  50                        PUSH EAX
005E22B3  E8 B8 32 0D 00            CALL 0x006b5570
LAB_005e22b8:
005E22B8  6A 0A                     PUSH 0xa
005E22BA  6A 0A                     PUSH 0xa
005E22BC  6A 00                     PUSH 0x0
005E22BE  E8 2D 32 0D 00            CALL 0x006b54f0
005E22C3  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E22C9  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005E22CF  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005E22D5  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E22D8  85 C0                     TEST EAX,EAX
005E22DA  0F 84 C6 0F 00 00         JZ 0x005e32a6
005E22E0  33 FF                     XOR EDI,EDI
005E22E2  85 C0                     TEST EAX,EAX
005E22E4  7E 36                     JLE 0x005e231c
005E22E6  3B F8                     CMP EDI,EAX
005E22E8  7D 08                     JGE 0x005e22f2
LAB_005e22ea:
005E22EA  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005E22ED  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
005E22F0  EB 02                     JMP 0x005e22f4
LAB_005e22f2:
005E22F2  33 C0                     XOR EAX,EAX
LAB_005e22f4:
005E22F4  68 20 DB 7C 00            PUSH 0x7cdb20
005E22F9  50                        PUSH EAX
005E22FA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E22FF  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E2305  51                        PUSH ECX
005E2306  E8 95 F2 E1 FF            CALL 0x004015a0
005E230B  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005E2311  83 C4 0C                  ADD ESP,0xc
005E2314  47                        INC EDI
005E2315  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E2318  3B F8                     CMP EDI,EAX
005E231A  7C CE                     JL 0x005e22ea
LAB_005e231c:
005E231C  8B 56 16                  MOV EDX,dword ptr [ESI + 0x16]
005E231F  8B 83 F5 02 00 00         MOV EAX,dword ptr [EBX + 0x2f5]
005E2325  6A 01                     PUSH 0x1
005E2327  2B D0                     SUB EDX,EAX
005E2329  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E232E  6A 00                     PUSH 0x0
005E2330  6A FF                     PUSH -0x1
005E2332  83 EA 2D                  SUB EDX,0x2d
005E2335  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E233B  6A 00                     PUSH 0x0
005E233D  52                        PUSH EDX
005E233E  68 EC 21 7C 00            PUSH 0x7c21ec
005E2343  68 D8 21 7C 00            PUSH 0x7c21d8
005E2348  51                        PUSH ECX
005E2349  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E234F  E8 8C 03 13 00            CALL 0x007126e0
005E2354  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E235A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005E235D  8B 82 48 05 00 00         MOV EAX,dword ptr [EDX + 0x548]
005E2363  85 C0                     TEST EAX,EAX
005E2365  74 06                     JZ 0x005e236d
005E2367  50                        PUSH EAX
005E2368  E8 03 32 0D 00            CALL 0x006b5570
LAB_005e236d:
005E236D  6A 0A                     PUSH 0xa
005E236F  6A 0A                     PUSH 0xa
005E2371  6A 00                     PUSH 0x0
005E2373  E8 78 31 0D 00            CALL 0x006b54f0
005E2378  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E237E  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005E2384  8A 8B C7 06 00 00         MOV CL,byte ptr [EBX + 0x6c7]
005E238A  A1 18 76 80 00            MOV EAX,[0x00807618]
005E238F  80 F9 01                  CMP CL,0x1
005E2392  0F 95 C2                  SETNZ DL
005E2395  4A                        DEC EDX
005E2396  50                        PUSH EAX
005E2397  83 E2 02                  AND EDX,0x2
005E239A  68 47 23 00 00            PUSH 0x2347
005E239F  88 95 18 FF FF FF         MOV byte ptr [EBP + 0xffffff18],DL
005E23A5  8B BD 18 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff18]
005E23AB  81 E7 FF 00 00 00         AND EDI,0xff
005E23B1  E8 8A DD 0C 00            CALL 0x006b0140
005E23B6  50                        PUSH EAX
005E23B7  57                        PUSH EDI
005E23B8  8D 8D CC F3 FF FF         LEA ECX,[EBP + 0xfffff3cc]
005E23BE  68 14 DB 7C 00            PUSH 0x7cdb14
005E23C3  51                        PUSH ECX
005E23C4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E23CA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E23CF  83 C4 10                  ADD ESP,0x10
005E23D2  8D 95 CC F3 FF FF         LEA EDX,[EBP + 0xfffff3cc]
005E23D8  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E23DE  52                        PUSH EDX
005E23DF  51                        PUSH ECX
005E23E0  E8 BB 36 0D 00            CALL 0x006b5aa0
005E23E5  BA 02 00 00 00            MOV EDX,0x2
005E23EA  68 C3 C3 80 00            PUSH 0x80c3c3
005E23EF  2B D7                     SUB EDX,EDI
005E23F1  8D 85 CC F3 FF FF         LEA EAX,[EBP + 0xfffff3cc]
005E23F7  52                        PUSH EDX
005E23F8  68 08 DB 7C 00            PUSH 0x7cdb08
005E23FD  50                        PUSH EAX
005E23FE  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E2404  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E240A  83 C4 10                  ADD ESP,0x10
005E240D  8D 8D CC F3 FF FF         LEA ECX,[EBP + 0xfffff3cc]
005E2413  8B 82 48 05 00 00         MOV EAX,dword ptr [EDX + 0x548]
005E2419  51                        PUSH ECX
005E241A  50                        PUSH EAX
005E241B  E8 80 36 0D 00            CALL 0x006b5aa0
005E2420  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E2426  68 5C 3B 7C 00            PUSH 0x7c3b5c
005E242B  8B 91 48 05 00 00         MOV EDX,dword ptr [ECX + 0x548]
005E2431  52                        PUSH EDX
005E2432  E8 69 36 0D 00            CALL 0x006b5aa0
005E2437  A1 18 76 80 00            MOV EAX,[0x00807618]
005E243C  50                        PUSH EAX
005E243D  68 46 23 00 00            PUSH 0x2346
005E2442  E8 F9 DC 0C 00            CALL 0x006b0140
005E2447  50                        PUSH EAX
005E2448  57                        PUSH EDI
005E2449  8D 8D CC F3 FF FF         LEA ECX,[EBP + 0xfffff3cc]
005E244F  68 14 DB 7C 00            PUSH 0x7cdb14
005E2454  51                        PUSH ECX
005E2455  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005E245B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E2460  83 C4 10                  ADD ESP,0x10
005E2463  8D 95 CC F3 FF FF         LEA EDX,[EBP + 0xfffff3cc]
005E2469  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E246F  52                        PUSH EDX
005E2470  51                        PUSH ECX
005E2471  E8 2A 36 0D 00            CALL 0x006b5aa0
005E2476  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E247C  68 5C 3B 7C 00            PUSH 0x7c3b5c
005E2481  8B 82 48 05 00 00         MOV EAX,dword ptr [EDX + 0x548]
005E2487  50                        PUSH EAX
005E2488  E8 13 36 0D 00            CALL 0x006b5aa0
005E248D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005E2490  85 C0                     TEST EAX,EAX
005E2492  74 58                     JZ 0x005e24ec
005E2494  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E2497  85 C9                     TEST ECX,ECX
005E2499  74 0D                     JZ 0x005e24a8
005E249B  8B 8B 8D 00 00 00         MOV ECX,dword ptr [EBX + 0x8d]
005E24A1  50                        PUSH EAX
005E24A2  50                        PUSH EAX
005E24A3  E8 28 05 13 00            CALL 0x007129d0
LAB_005e24a8:
005E24A8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E24AB  33 FF                     XOR EDI,EDI
005E24AD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E24B0  85 C0                     TEST EAX,EAX
005E24B2  7E 2F                     JLE 0x005e24e3
005E24B4  3B F8                     CMP EDI,EAX
005E24B6  7D 0B                     JGE 0x005e24c3
LAB_005e24b8:
005E24B8  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005E24BB  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
005E24BE  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
005E24C1  EB 02                     JMP 0x005e24c5
LAB_005e24c3:
005E24C3  33 C0                     XOR EAX,EAX
LAB_005e24c5:
005E24C5  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E24CB  50                        PUSH EAX
005E24CC  8B 91 48 05 00 00         MOV EDX,dword ptr [ECX + 0x548]
005E24D2  52                        PUSH EDX
005E24D3  E8 C8 35 0D 00            CALL 0x006b5aa0
005E24D8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005E24DB  47                        INC EDI
005E24DC  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005E24DF  3B F8                     CMP EDI,EAX
005E24E1  7C D5                     JL 0x005e24b8
LAB_005e24e3:
005E24E3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005E24E6  51                        PUSH ECX
005E24E7  E8 84 30 0D 00            CALL 0x006b5570
LAB_005e24ec:
005E24EC  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E24EF  8B 56 16                  MOV EDX,dword ptr [ESI + 0x16]
005E24F2  8B 7E 1A                  MOV EDI,dword ptr [ESI + 0x1a]
005E24F5  6A 01                     PUSH 0x1
005E24F7  8D 48 28                  LEA ECX,[EAX + 0x28]
005E24FA  89 95 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDX
005E2500  51                        PUSH ECX
005E2501  50                        PUSH EAX
005E2502  E8 D9 2A 0D 00            CALL 0x006b4fe0
005E2507  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E250A  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
005E2510  50                        PUSH EAX
005E2511  33 C0                     XOR EAX,EAX
005E2513  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005E2517  50                        PUSH EAX
005E2518  57                        PUSH EDI
005E2519  51                        PUSH ECX
005E251A  E8 A1 2B 0D 00            CALL 0x006b50c0
005E251F  89 83 BF 06 00 00         MOV dword ptr [EBX + 0x6bf],EAX
005E2525  8A 46 0A                  MOV AL,byte ptr [ESI + 0xa]
005E2528  33 D2                     XOR EDX,EDX
005E252A  8D 4E 09                  LEA ECX,[ESI + 0x9]
005E252D  84 C0                     TEST AL,AL
005E252F  0F 95 C2                  SETNZ DL
005E2532  C1 E2 08                  SHL EDX,0x8
005E2535  8D 84 1A 91 00 00 00      LEA EAX,[EDX + EBX*0x1 + 0x91]
005E253C  89 83 C3 06 00 00         MOV dword ptr [EBX + 0x6c3],EAX
005E2542  8B 11                     MOV EDX,dword ptr [ECX]
005E2544  89 93 C7 06 00 00         MOV dword ptr [EBX + 0x6c7],EDX
005E254A  C7 85 D0 F4 FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffff4d0],0x0
005E2554  C7 85 D4 F4 FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffff4d4],0x2
005E255E  8B 46 0E                  MOV EAX,dword ptr [ESI + 0xe]
005E2561  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E2567  83 C0 0F                  ADD EAX,0xf
005E256A  89 85 F0 F4 FF FF         MOV dword ptr [EBP + 0xfffff4f0],EAX
005E2570  8B 46 12                  MOV EAX,dword ptr [ESI + 0x12]
005E2573  83 C0 0F                  ADD EAX,0xf
005E2576  C7 85 D8 F4 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff4d8],0x1
005E2580  89 85 F4 F4 FF FF         MOV dword ptr [EBP + 0xfffff4f4],EAX
005E2586  8B 91 48 05 00 00         MOV EDX,dword ptr [ECX + 0x548]
005E258C  8B BB 8D 00 00 00         MOV EDI,dword ptr [EBX + 0x8d]
005E2592  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005E2595  8B 93 F5 02 00 00         MOV EDX,dword ptr [EBX + 0x2f5]
005E259B  89 85 DC F4 FF FF         MOV dword ptr [EBP + 0xfffff4dc],EAX
005E25A1  8B 76 16                  MOV ESI,dword ptr [ESI + 0x16]
005E25A4  2B F2                     SUB ESI,EDX
005E25A6  83 EE 2D                  SUB ESI,0x2d
005E25A9  89 B5 E0 F4 FF FF         MOV dword ptr [EBP + 0xfffff4e0],ESI
005E25AF  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005E25B5  85 C0                     TEST EAX,EAX
005E25B7  74 0F                     JZ 0x005e25c8
005E25B9  57                        PUSH EDI
005E25BA  E8 D1 E1 12 00            CALL 0x00710790
005E25BF  8B B5 E0 F4 FF FF         MOV ESI,dword ptr [EBP + 0xfffff4e0]
005E25C5  83 C4 04                  ADD ESP,0x4
LAB_005e25c8:
005E25C8  8B 8F 8A 00 00 00         MOV ECX,dword ptr [EDI + 0x8a]
005E25CE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005E25D1  89 8D E4 F4 FF FF         MOV dword ptr [EBP + 0xfffff4e4],ECX
005E25D7  C7 85 E8 F4 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff4e8],0x1
005E25E1  8B 47 1A                  MOV EAX,dword ptr [EDI + 0x1a]
005E25E4  C7 85 10 F5 FF FF 32 63 00 00  MOV dword ptr [EBP + 0xfffff510],0x6332
005E25EE  83 E8 1E                  SUB EAX,0x1e
005E25F1  C7 85 80 F5 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff580],0x4
005E25FB  99                        CDQ
005E25FC  F7 F9                     IDIV ECX
005E25FE  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E2601  33 D2                     XOR EDX,EDX
005E2603  89 95 84 F5 FF FF         MOV dword ptr [EBP + 0xfffff584],EDX
005E2609  89 95 8C F5 FF FF         MOV dword ptr [EBP + 0xfffff58c],EDX
005E260F  8B 95 F0 F4 FF FF         MOV EDX,dword ptr [EBP + 0xfffff4f0]
005E2615  89 8D 08 F5 FF FF         MOV dword ptr [EBP + 0xfffff508],ECX
005E261B  89 85 EC F4 FF FF         MOV dword ptr [EBP + 0xfffff4ec],EAX
005E2621  B8 02 00 00 00            MOV EAX,0x2
005E2626  89 85 0C F5 FF FF         MOV dword ptr [EBP + 0xfffff50c],EAX
005E262C  89 85 88 F5 FF FF         MOV dword ptr [EBP + 0xfffff588],EAX
005E2632  89 85 90 F5 FF FF         MOV dword ptr [EBP + 0xfffff590],EAX
005E2638  8D 44 16 0F               LEA EAX,[ESI + EDX*0x1 + 0xf]
005E263C  8B 93 8A 03 00 00         MOV EDX,dword ptr [EBX + 0x38a]
005E2642  89 83 7E 03 00 00         MOV dword ptr [EBX + 0x37e],EAX
005E2648  89 85 94 F5 FF FF         MOV dword ptr [EBP + 0xfffff594],EAX
005E264E  8B 47 12                  MOV EAX,dword ptr [EDI + 0x12]
005E2651  8B 77 1A                  MOV ESI,dword ptr [EDI + 0x1a]
005E2654  2B C2                     SUB EAX,EDX
005E2656  89 8D EC F5 FF FF         MOV dword ptr [EBP + 0xfffff5ec],ECX
005E265C  B9 5F 00 00 00            MOV ECX,0x5f
005E2661  8D 44 30 F0               LEA EAX,[EAX + ESI*0x1 + -0x10]
005E2665  8D B5 8C F5 FF FF         LEA ESI,[EBP + 0xfffff58c]
005E266B  89 83 82 03 00 00         MOV dword ptr [EBX + 0x382],EAX
005E2671  89 85 98 F5 FF FF         MOV dword ptr [EBP + 0xfffff598],EAX
005E2677  8B 83 86 03 00 00         MOV EAX,dword ptr [EBX + 0x386]
005E267D  8D BD 0C F7 FF FF         LEA EDI,[EBP + 0xfffff70c]
005E2683  89 85 9C F5 FF FF         MOV dword ptr [EBP + 0xfffff59c],EAX
005E2689  B8 02 00 00 00            MOV EAX,0x2
005E268E  89 95 A0 F5 FF FF         MOV dword ptr [EBP + 0xfffff5a0],EDX
005E2694  C7 85 9C F6 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff69c],0x1f4
005E269E  C7 85 A0 F6 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff6a0],0x32
005E26A8  89 85 F0 F5 FF FF         MOV dword ptr [EBP + 0xfffff5f0],EAX
005E26AE  C7 85 F4 F5 FF FF 34 63 00 00  MOV dword ptr [EBP + 0xfffff5f4],0x6334
005E26B8  89 85 08 F7 FF FF         MOV dword ptr [EBP + 0xfffff708],EAX
005E26BE  F3 A5                     MOVSD.REP ES:EDI,ESI
005E26C0  8B 8D E0 F4 FF FF         MOV ECX,dword ptr [EBP + 0xfffff4e0]
005E26C6  8B 95 F0 F4 FF FF         MOV EDX,dword ptr [EBP + 0xfffff4f0]
005E26CC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005E26CF  8B BB 17 04 00 00         MOV EDI,dword ptr [EBX + 0x417]
005E26D5  8D 44 11 0F               LEA EAX,[ECX + EDX*0x1 + 0xf]
005E26D9  8B 8B F9 02 00 00         MOV ECX,dword ptr [EBX + 0x2f9]
005E26DF  89 83 ED 02 00 00         MOV dword ptr [EBX + 0x2ed],EAX
005E26E5  89 85 14 F7 FF FF         MOV dword ptr [EBP + 0xfffff714],EAX
005E26EB  8B 46 12                  MOV EAX,dword ptr [ESI + 0x12]
005E26EE  89 8D 20 F7 FF FF         MOV dword ptr [EBP + 0xfffff720],ECX
005E26F4  83 C0 0F                  ADD EAX,0xf
005E26F7  C7 85 74 F7 FF FF 33 63 00 00  MOV dword ptr [EBP + 0xfffff774],0x6333
005E2701  89 83 F1 02 00 00         MOV dword ptr [EBX + 0x2f1],EAX
005E2707  89 85 18 F7 FF FF         MOV dword ptr [EBP + 0xfffff718],EAX
005E270D  8B 83 F5 02 00 00         MOV EAX,dword ptr [EBX + 0x2f5]
005E2713  C7 85 88 F8 FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffff888],0x3
005E271D  89 85 1C F7 FF FF         MOV dword ptr [EBP + 0xfffff71c],EAX
005E2723  2B C7                     SUB EAX,EDI
005E2725  99                        CDQ
005E2726  2B C2                     SUB EAX,EDX
005E2728  8B 95 E0 F4 FF FF         MOV EDX,dword ptr [EBP + 0xfffff4e0]
005E272E  D1 F8                     SAR EAX,0x1
005E2730  03 C2                     ADD EAX,EDX
005E2732  8B 95 F0 F4 FF FF         MOV EDX,dword ptr [EBP + 0xfffff4f0]
005E2738  C7 85 8C F8 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff88c],0x1
005E2742  C7 85 94 F8 FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffff894],0x0
005E274C  8D 44 10 0F               LEA EAX,[EAX + EDX*0x1 + 0xf]
005E2750  89 83 0F 04 00 00         MOV dword ptr [EBX + 0x40f],EAX
005E2756  89 85 98 F8 FF FF         MOV dword ptr [EBP + 0xfffff898],EAX
005E275C  8B 46 12                  MOV EAX,dword ptr [ESI + 0x12]
005E275F  89 BD A0 F8 FF FF         MOV dword ptr [EBP + 0xfffff8a0],EDI
005E2765  8D 44 08 1E               LEA EAX,[EAX + ECX*0x1 + 0x1e]
005E2769  89 83 13 04 00 00         MOV dword ptr [EBX + 0x413],EAX
005E276F  89 85 9C F8 FF FF         MOV dword ptr [EBP + 0xfffff89c],EAX
005E2775  8B 56 1A                  MOV EDX,dword ptr [ESI + 0x1a]
005E2778  2B D1                     SUB EDX,ECX
005E277A  8B 83 8A 03 00 00         MOV EAX,dword ptr [EBX + 0x38a]
005E2780  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005E2783  2B D0                     SUB EDX,EAX
005E2785  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E2788  83 EA 3C                  SUB EDX,0x3c
005E278B  6A 00                     PUSH 0x0
005E278D  89 95 A4 F8 FF FF         MOV dword ptr [EBP + 0xfffff8a4],EDX
005E2793  8D 95 D0 F4 FF FF         LEA EDX,[EBP + 0xfffff4d0]
005E2799  52                        PUSH EDX
005E279A  8D BB CD 02 00 00         LEA EDI,[EBX + 0x2cd]
005E27A0  C7 85 A8 F8 FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffff8a8],0xe
005E27AA  89 85 DC F8 FF FF         MOV dword ptr [EBP + 0xfffff8dc],EAX
005E27B0  C7 85 E0 F8 FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffff8e0],0x2
005E27BA  C7 85 E4 F8 FF FF 35 63 00 00  MOV dword ptr [EBP + 0xfffff8e4],0x6335
005E27C4  8B 01                     MOV EAX,dword ptr [ECX]
005E27C6  6A 00                     PUSH 0x0
005E27C8  57                        PUSH EDI
005E27C9  6A 08                     PUSH 0x8
005E27CB  FF 50 08                  CALL dword ptr [EAX + 0x8]
005E27CE  8B 0F                     MOV ECX,dword ptr [EDI]
005E27D0  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005E27D3  50                        PUSH EAX
005E27D4  51                        PUSH ECX
005E27D5  6A 02                     PUSH 0x2
005E27D7  8B CB                     MOV ECX,EBX
005E27D9  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005E27E0  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005E27E7  E8 94 38 10 00            CALL 0x006e6080
005E27EC  8B 56 12                  MOV EDX,dword ptr [ESI + 0x12]
005E27EF  8B 46 0E                  MOV EAX,dword ptr [ESI + 0xe]
005E27F2  8B 8B 84 04 00 00         MOV ECX,dword ptr [EBX + 0x484]
005E27F8  52                        PUSH EDX
005E27F9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E27FF  50                        PUSH EAX
005E2800  6A FF                     PUSH -0x1
005E2802  51                        PUSH ECX
005E2803  52                        PUSH EDX
005E2804  E8 37 0E 0D 00            CALL 0x006b3640
005E2809  8B 46 1A                  MOV EAX,dword ptr [ESI + 0x1a]
005E280C  8B 4E 16                  MOV ECX,dword ptr [ESI + 0x16]
005E280F  8B 93 84 04 00 00         MOV EDX,dword ptr [EBX + 0x484]
005E2815  50                        PUSH EAX
005E2816  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E281B  51                        PUSH ECX
005E281C  52                        PUSH EDX
005E281D  50                        PUSH EAX
005E281E  E8 DD FF 0C 00            CALL 0x006b2800
005E2823  8B 4E 05                  MOV ECX,dword ptr [ESI + 0x5]
005E2826  8B 93 84 04 00 00         MOV EDX,dword ptr [EBX + 0x484]
005E282C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E2831  51                        PUSH ECX
005E2832  52                        PUSH EDX
005E2833  50                        PUSH EAX
005E2834  E8 E7 07 0D 00            CALL 0x006b3020
005E2839  8B 8B 84 04 00 00         MOV ECX,dword ptr [EBX + 0x484]
005E283F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E2845  51                        PUSH ECX
005E2846  52                        PUSH EDX
005E2847  E8 E4 0B 0D 00            CALL 0x006b3430
005E284C  8B 76 05                  MOV ESI,dword ptr [ESI + 0x5]
005E284F  85 F6                     TEST ESI,ESI
005E2851  7E 03                     JLE 0x005e2856
005E2853  4E                        DEC ESI
005E2854  EB 02                     JMP 0x005e2858
LAB_005e2856:
005E2856  33 F6                     XOR ESI,ESI
LAB_005e2858:
005E2858  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
005E285E  83 F8 FF                  CMP EAX,-0x1
005E2861  74 0E                     JZ 0x005e2871
005E2863  56                        PUSH ESI
005E2864  50                        PUSH EAX
005E2865  8B 83 19 03 00 00         MOV EAX,dword ptr [EBX + 0x319]
005E286B  50                        PUSH EAX
005E286C  E8 AF 07 0D 00            CALL 0x006b3020
LAB_005e2871:
005E2871  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005E2874  89 B3 2E 03 00 00         MOV dword ptr [EBX + 0x32e],ESI
005E287A  8B 47 05                  MOV EAX,dword ptr [EDI + 0x5]
005E287D  85 C0                     TEST EAX,EAX
005E287F  7E 05                     JLE 0x005e2886
005E2881  8D 70 FF                  LEA ESI,[EAX + -0x1]
005E2884  EB 02                     JMP 0x005e2888
LAB_005e2886:
005E2886  33 F6                     XOR ESI,ESI
LAB_005e2888:
005E2888  8B 83 66 03 00 00         MOV EAX,dword ptr [EBX + 0x366]
005E288E  83 F8 FF                  CMP EAX,-0x1
005E2891  74 0E                     JZ 0x005e28a1
005E2893  8B 8B AA 03 00 00         MOV ECX,dword ptr [EBX + 0x3aa]
005E2899  56                        PUSH ESI
005E289A  50                        PUSH EAX
005E289B  51                        PUSH ECX
005E289C  E8 7F 07 0D 00            CALL 0x006b3020
LAB_005e28a1:
005E28A1  89 B3 BF 03 00 00         MOV dword ptr [EBX + 0x3bf],ESI
005E28A7  8B 47 05                  MOV EAX,dword ptr [EDI + 0x5]
005E28AA  85 C0                     TEST EAX,EAX
005E28AC  7E 05                     JLE 0x005e28b3
005E28AE  8D 70 FF                  LEA ESI,[EAX + -0x1]
005E28B1  EB 02                     JMP 0x005e28b5
LAB_005e28b3:
005E28B3  33 F6                     XOR ESI,ESI
LAB_005e28b5:
005E28B5  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E28BB  83 F8 FF                  CMP EAX,-0x1
005E28BE  74 0E                     JZ 0x005e28ce
005E28C0  8B 93 3B 04 00 00         MOV EDX,dword ptr [EBX + 0x43b]
005E28C6  56                        PUSH ESI
005E28C7  50                        PUSH EAX
005E28C8  52                        PUSH EDX
005E28C9  E8 52 07 0D 00            CALL 0x006b3020
LAB_005e28ce:
005E28CE  89 B3 50 04 00 00         MOV dword ptr [EBX + 0x450],ESI
005E28D4  8A 93 CA 06 00 00         MOV DL,byte ptr [EBX + 0x6ca]
005E28DA  33 C0                     XOR EAX,EAX
005E28DC  80 FA 01                  CMP DL,0x1
005E28DF  0F 94 C0                  SETZ AL
005E28E2  89 83 FB 03 00 00         MOV dword ptr [EBX + 0x3fb],EAX
005E28E8  8B 83 D5 02 00 00         MOV EAX,dword ptr [EBX + 0x2d5]
005E28EE  83 F8 FF                  CMP EAX,-0x1
005E28F1  74 1D                     JZ 0x005e2910
005E28F3  8B 8B F1 02 00 00         MOV ECX,dword ptr [EBX + 0x2f1]
005E28F9  8B 93 ED 02 00 00         MOV EDX,dword ptr [EBX + 0x2ed]
005E28FF  51                        PUSH ECX
005E2900  52                        PUSH EDX
005E2901  6A FE                     PUSH -0x2
005E2903  50                        PUSH EAX
005E2904  8B 83 19 03 00 00         MOV EAX,dword ptr [EBX + 0x319]
005E290A  50                        PUSH EAX
005E290B  E8 C0 0B 0D 00            CALL 0x006b34d0
LAB_005e2910:
005E2910  8B 83 66 03 00 00         MOV EAX,dword ptr [EBX + 0x366]
005E2916  83 F8 FF                  CMP EAX,-0x1
005E2919  74 1D                     JZ 0x005e2938
005E291B  8B 8B 82 03 00 00         MOV ECX,dword ptr [EBX + 0x382]
005E2921  8B 93 7E 03 00 00         MOV EDX,dword ptr [EBX + 0x37e]
005E2927  51                        PUSH ECX
005E2928  52                        PUSH EDX
005E2929  6A FE                     PUSH -0x2
005E292B  50                        PUSH EAX
005E292C  8B 83 AA 03 00 00         MOV EAX,dword ptr [EBX + 0x3aa]
005E2932  50                        PUSH EAX
005E2933  E8 98 0B 0D 00            CALL 0x006b34d0
LAB_005e2938:
005E2938  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E293E  83 F8 FF                  CMP EAX,-0x1
005E2941  74 1D                     JZ 0x005e2960
005E2943  8B 8B 13 04 00 00         MOV ECX,dword ptr [EBX + 0x413]
005E2949  8B 93 0F 04 00 00         MOV EDX,dword ptr [EBX + 0x40f]
005E294F  51                        PUSH ECX
005E2950  52                        PUSH EDX
005E2951  6A FE                     PUSH -0x2
005E2953  50                        PUSH EAX
005E2954  8B 83 3B 04 00 00         MOV EAX,dword ptr [EBX + 0x43b]
005E295A  50                        PUSH EAX
005E295B  E8 70 0B 0D 00            CALL 0x006b34d0
LAB_005e2960:
005E2960  8B 83 F7 03 00 00         MOV EAX,dword ptr [EBX + 0x3f7]
005E2966  83 F8 FF                  CMP EAX,-0x1
005E2969  0F 84 37 09 00 00         JZ 0x005e32a6
005E296F  8B 8B 13 04 00 00         MOV ECX,dword ptr [EBX + 0x413]
005E2975  8B 93 0F 04 00 00         MOV EDX,dword ptr [EBX + 0x40f]
005E297B  51                        PUSH ECX
005E297C  8B 8B FB 03 00 00         MOV ECX,dword ptr [EBX + 0x3fb]
005E2982  52                        PUSH EDX
005E2983  8B 93 3B 04 00 00         MOV EDX,dword ptr [EBX + 0x43b]
005E2989  51                        PUSH ECX
005E298A  50                        PUSH EAX
005E298B  52                        PUSH EDX
005E298C  E8 9F 0D 0D 00            CALL 0x006b3730
005E2991  E9 10 09 00 00            JMP 0x005e32a6
switchD_005e13d2::caseD_5:
005E2996  8A 56 0E                  MOV DL,byte ptr [ESI + 0xe]
005E2999  84 D2                     TEST DL,DL
005E299B  74 08                     JZ 0x005e29a5
005E299D  8B 83 47 06 00 00         MOV EAX,dword ptr [EBX + 0x647]
005E29A3  EB 06                     JMP 0x005e29ab
LAB_005e29a5:
005E29A5  8B 83 4F 06 00 00         MOV EAX,dword ptr [EBX + 0x64f]
LAB_005e29ab:
005E29AB  8B 7E 0F                  MOV EDI,dword ptr [ESI + 0xf]
005E29AE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E29B1  3B F9                     CMP EDI,ECX
005E29B3  73 38                     JNC 0x005e29ed
005E29B5  84 D2                     TEST DL,DL
005E29B7  74 08                     JZ 0x005e29c1
005E29B9  8B 8B 47 06 00 00         MOV ECX,dword ptr [EBX + 0x647]
005E29BF  EB 06                     JMP 0x005e29c7
LAB_005e29c1:
005E29C1  8B 8B 4F 06 00 00         MOV ECX,dword ptr [EBX + 0x64f]
LAB_005e29c7:
005E29C7  84 D2                     TEST DL,DL
005E29C9  74 11                     JZ 0x005e29dc
005E29CB  8B 83 47 06 00 00         MOV EAX,dword ptr [EBX + 0x647]
005E29D1  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005E29D4  0F AF C7                  IMUL EAX,EDI
005E29D7  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005E29DA  EB 13                     JMP 0x005e29ef
LAB_005e29dc:
005E29DC  8B 83 4F 06 00 00         MOV EAX,dword ptr [EBX + 0x64f]
005E29E2  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005E29E5  0F AF C7                  IMUL EAX,EDI
005E29E8  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005E29EB  EB 02                     JMP 0x005e29ef
LAB_005e29ed:
005E29ED  33 C0                     XOR EAX,EAX
LAB_005e29ef:
005E29EF  80 7E 0D 01               CMP byte ptr [ESI + 0xd],0x1
005E29F3  0F 85 A0 04 00 00         JNZ 0x005e2e99
005E29F9  85 C0                     TEST EAX,EAX
005E29FB  74 34                     JZ 0x005e2a31
005E29FD  8B 38                     MOV EDI,dword ptr [EAX]
005E29FF  85 FF                     TEST EDI,EDI
005E2A01  7C 2E                     JL 0x005e2a31
005E2A03  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
005E2A06  3B 4E 14                  CMP ECX,dword ptr [ESI + 0x14]
005E2A09  75 26                     JNZ 0x005e2a31
005E2A0B  84 D2                     TEST DL,DL
005E2A0D  74 04                     JZ 0x005e2a13
005E2A0F  33 C0                     XOR EAX,EAX
005E2A11  EB 03                     JMP 0x005e2a16
LAB_005e2a13:
005E2A13  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
LAB_005e2a16:
005E2A16  8B 56 1E                  MOV EDX,dword ptr [ESI + 0x1e]
005E2A19  8B 4E 1A                  MOV ECX,dword ptr [ESI + 0x1a]
005E2A1C  52                        PUSH EDX
005E2A1D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E2A23  51                        PUSH ECX
005E2A24  50                        PUSH EAX
005E2A25  57                        PUSH EDI
005E2A26  52                        PUSH EDX
005E2A27  E8 04 0D 0D 00            CALL 0x006b3730
005E2A2C  E9 75 08 00 00            JMP 0x005e32a6
LAB_005e2a31:
005E2A31  50                        PUSH EAX
005E2A32  8B CB                     MOV ECX,EBX
005E2A34  E8 22 2B E2 FF            CALL 0x0040555b
005E2A39  8B 0D C7 C4 80 00         MOV ECX,dword ptr [0x0080c4c7]
005E2A3F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005E2A42  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
005E2A45  7D 08                     JGE 0x005e2a4f
005E2A47  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005E2A4A  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
005E2A4D  EB 02                     JMP 0x005e2a51
LAB_005e2a4f:
005E2A4F  33 C0                     XOR EAX,EAX
LAB_005e2a51:
005E2A51  85 C0                     TEST EAX,EAX
005E2A53  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E2A56  0F 84 4A 08 00 00         JZ 0x005e32a6
005E2A5C  B9 0F 00 00 00            MOV ECX,0xf
005E2A61  33 C0                     XOR EAX,EAX
005E2A63  8D BD C8 FE FF FF         LEA EDI,[EBP + 0xfffffec8]
005E2A69  F3 AB                     STOSD.REP ES:EDI
005E2A6B  66 AB                     STOSW ES:EDI
005E2A6D  8A 46 0E                  MOV AL,byte ptr [ESI + 0xe]
005E2A70  84 C0                     TEST AL,AL
005E2A72  0F 84 28 02 00 00         JZ 0x005e2ca0
005E2A78  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
005E2A7B  6A 01                     PUSH 0x1
005E2A7D  89 95 FE FE FF FF         MOV dword ptr [EBP + 0xfffffefe],EDX
005E2A83  8A 46 19                  MOV AL,byte ptr [ESI + 0x19]
005E2A86  88 85 FD FE FF FF         MOV byte ptr [EBP + 0xfffffefd],AL
005E2A8C  8A 4E 18                  MOV CL,byte ptr [ESI + 0x18]
005E2A8F  88 8D F8 FE FF FF         MOV byte ptr [EBP + 0xfffffef8],CL
005E2A95  8A 56 09                  MOV DL,byte ptr [ESI + 0x9]
005E2A98  8B 46 22                  MOV EAX,dword ptr [ESI + 0x22]
005E2A9B  FE CA                     DEC DL
005E2A9D  F6 DA                     NEG DL
005E2A9F  8B 7E 26                  MOV EDI,dword ptr [ESI + 0x26]
005E2AA2  89 85 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EAX
005E2AA8  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E2AAB  1B D2                     SBB EDX,EDX
005E2AAD  83 E2 FE                  AND EDX,0xfffffffe
005E2AB0  8D 48 28                  LEA ECX,[EAX + 0x28]
005E2AB3  83 C2 02                  ADD EDX,0x2
005E2AB6  51                        PUSH ECX
005E2AB7  50                        PUSH EAX
005E2AB8  89 95 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EDX
005E2ABE  E8 1D 25 0D 00            CALL 0x006b4fe0
005E2AC3  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E2AC6  8B 8D 0C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff0c]
005E2ACC  50                        PUSH EAX
005E2ACD  33 C0                     XOR EAX,EAX
005E2ACF  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005E2AD3  50                        PUSH EAX
005E2AD4  57                        PUSH EDI
005E2AD5  51                        PUSH ECX
005E2AD6  E8 E5 25 0D 00            CALL 0x006b50c0
005E2ADB  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
005E2AE1  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E2AE4  85 C9                     TEST ECX,ECX
005E2AE6  75 18                     JNZ 0x005e2b00
005E2AE8  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005E2AEC  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005E2AF0  83 C1 1F                  ADD ECX,0x1f
005E2AF3  C1 E9 03                  SHR ECX,0x3
005E2AF6  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005E2AFC  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005e2b00:
005E2B00  50                        PUSH EAX
005E2B01  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005E2B04  E8 97 24 0D 00            CALL 0x006b4fa0
005E2B09  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005E2B0C  8B F8                     MOV EDI,EAX
005E2B0E  8B D1                     MOV EDX,ECX
005E2B10  83 C8 FF                  OR EAX,0xffffffff
005E2B13  C1 E9 02                  SHR ECX,0x2
005E2B16  F3 AB                     STOSD.REP ES:EDI
005E2B18  8B CA                     MOV ECX,EDX
005E2B1A  83 E1 03                  AND ECX,0x3
005E2B1D  F3 AA                     STOSB.REP ES:EDI
005E2B1F  8A 46 19                  MOV AL,byte ptr [ESI + 0x19]
005E2B22  84 C0                     TEST AL,AL
005E2B24  74 1E                     JZ 0x005e2b44
005E2B26  8A 95 FF FE FF FF         MOV DL,byte ptr [EBP + 0xfffffeff]
005E2B2C  33 C0                     XOR EAX,EAX
005E2B2E  80 FA 01                  CMP DL,0x1
005E2B31  0F 94 C0                  SETZ AL
005E2B34  C1 E0 08                  SHL EAX,0x8
005E2B37  8D 8C 18 91 00 00 00      LEA ECX,[EAX + EBX*0x1 + 0x91]
005E2B3E  89 8D F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],ECX
LAB_005e2b44:
005E2B44  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
005E2B4A  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2B50  6A 00                     PUSH 0x0
005E2B52  6A 00                     PUSH 0x0
005E2B54  6A 00                     PUSH 0x0
005E2B56  6A 00                     PUSH 0x0
005E2B58  6A 00                     PUSH 0x0
005E2B5A  52                        PUSH EDX
005E2B5B  E8 30 DF 12 00            CALL 0x00710a90
005E2B60  6A 01                     PUSH 0x1
005E2B62  6A 01                     PUSH 0x1
005E2B64  6A 00                     PUSH 0x0
005E2B66  E8 85 29 0D 00            CALL 0x006b54f0
005E2B6B  8B F8                     MOV EDI,EAX
005E2B6D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E2B70  50                        PUSH EAX
005E2B71  57                        PUSH EDI
005E2B72  E8 29 2F 0D 00            CALL 0x006b5aa0
005E2B77  8B 4E 2A                  MOV ECX,dword ptr [ESI + 0x2a]
005E2B7A  8B 56 22                  MOV EDX,dword ptr [ESI + 0x22]
005E2B7D  6A 01                     PUSH 0x1
005E2B7F  6A 00                     PUSH 0x0
005E2B81  D1 E1                     SHL ECX,0x1
005E2B83  6A FF                     PUSH -0x1
005E2B85  2B D1                     SUB EDX,ECX
005E2B87  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2B8D  6A 00                     PUSH 0x0
005E2B8F  52                        PUSH EDX
005E2B90  68 EC 21 7C 00            PUSH 0x7c21ec
005E2B95  68 D8 21 7C 00            PUSH 0x7c21d8
005E2B9A  57                        PUSH EDI
005E2B9B  E8 40 FB 12 00            CALL 0x007126e0
005E2BA0  57                        PUSH EDI
005E2BA1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005E2BA4  E8 C7 29 0D 00            CALL 0x006b5570
005E2BA9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005E2BAC  85 C0                     TEST EAX,EAX
005E2BAE  0F 84 AA 00 00 00         JZ 0x005e2c5e
005E2BB4  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2BBA  8B F8                     MOV EDI,EAX
005E2BBC  57                        PUSH EDI
005E2BBD  6A 00                     PUSH 0x0
005E2BBF  E8 BC 04 13 00            CALL 0x00713080
005E2BC4  85 C0                     TEST EAX,EAX
005E2BC6  89 85 02 FF FF FF         MOV dword ptr [EBP + 0xffffff02],EAX
005E2BCC  0F 84 86 00 00 00         JZ 0x005e2c58
005E2BD2  68 B4 00 00 00            PUSH 0xb4
005E2BD7  E8 54 B9 14 00            CALL 0x0072e530
005E2BDC  33 C9                     XOR ECX,ECX
005E2BDE  83 C4 04                  ADD ESP,0x4
005E2BE1  3B C1                     CMP EAX,ECX
005E2BE3  74 0B                     JZ 0x005e2bf0
005E2BE5  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
005E2BE8  89 88 88 00 00 00         MOV dword ptr [EAX + 0x88],ECX
005E2BEE  EB 02                     JMP 0x005e2bf2
LAB_005e2bf0:
005E2BF0  33 C0                     XOR EAX,EAX
LAB_005e2bf2:
005E2BF2  89 85 F9 FE FF FF         MOV dword ptr [EBP + 0xfffffef9],EAX
005E2BF8  8B 4E 2A                  MOV ECX,dword ptr [ESI + 0x2a]
005E2BFB  89 8D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],ECX
005E2C01  8B 56 2E                  MOV EDX,dword ptr [ESI + 0x2e]
005E2C04  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
005E2C0A  89 95 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EDX
005E2C10  68 FF 00 00 00            PUSH 0xff
005E2C15  6A 04                     PUSH 0x4
005E2C17  8D 51 01                  LEA EDX,[ECX + 0x1]
005E2C1A  52                        PUSH EDX
005E2C1B  8B 56 26                  MOV EDX,dword ptr [ESI + 0x26]
005E2C1E  51                        PUSH ECX
005E2C1F  8B 4E 2E                  MOV ECX,dword ptr [ESI + 0x2e]
005E2C22  D1 E1                     SHL ECX,0x1
005E2C24  6A 00                     PUSH 0x0
005E2C26  2B D1                     SUB EDX,ECX
005E2C28  8B 4E 2A                  MOV ECX,dword ptr [ESI + 0x2a]
005E2C2B  6A 00                     PUSH 0x0
005E2C2D  52                        PUSH EDX
005E2C2E  8B 56 22                  MOV EDX,dword ptr [ESI + 0x22]
005E2C31  D1 E1                     SHL ECX,0x1
005E2C33  2B D1                     SUB EDX,ECX
005E2C35  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2C3B  52                        PUSH EDX
005E2C3C  8B 95 02 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff02]
005E2C42  6A 00                     PUSH 0x0
005E2C44  6A 00                     PUSH 0x0
005E2C46  6A 00                     PUSH 0x0
005E2C48  51                        PUSH ECX
005E2C49  52                        PUSH EDX
005E2C4A  8B C8                     MOV ECX,EAX
005E2C4C  E8 AF 0E 13 00            CALL 0x00713b00
005E2C51  40                        INC EAX
005E2C52  89 85 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EAX
LAB_005e2c58:
005E2C58  57                        PUSH EDI
005E2C59  E8 12 29 0D 00            CALL 0x006b5570
LAB_005e2c5e:
005E2C5E  8B 83 47 06 00 00         MOV EAX,dword ptr [EBX + 0x647]
005E2C64  8B 4E 26                  MOV ECX,dword ptr [ESI + 0x26]
005E2C67  8B 56 22                  MOV EDX,dword ptr [ESI + 0x22]
005E2C6A  50                        PUSH EAX
005E2C6B  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
005E2C6E  51                        PUSH ECX
005E2C6F  52                        PUSH EDX
005E2C70  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E2C76  68 B0 41 40 00            PUSH 0x4041b0
005E2C7B  8D 8D C8 FE FF FF         LEA ECX,[EBP + 0xfffffec8]
005E2C81  50                        PUSH EAX
005E2C82  51                        PUSH ECX
005E2C83  52                        PUSH EDX
005E2C84  E8 A7 F6 0C 00            CALL 0x006b2330
005E2C89  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
005E2C8C  8B 93 47 06 00 00         MOV EDX,dword ptr [EBX + 0x647]
005E2C92  8D 85 C8 FE FF FF         LEA EAX,[EBP + 0xfffffec8]
005E2C98  50                        PUSH EAX
005E2C99  51                        PUSH ECX
005E2C9A  52                        PUSH EDX
005E2C9B  E9 D2 01 00 00            JMP 0x005e2e72
LAB_005e2ca0:
005E2CA0  8A 46 09                  MOV AL,byte ptr [ESI + 0x9]
005E2CA3  C6 45 88 00               MOV byte ptr [EBP + -0x78],0x0
005E2CA7  FE C8                     DEC AL
005E2CA9  F6 D8                     NEG AL
005E2CAB  1B C0                     SBB EAX,EAX
005E2CAD  24 FE                     AND AL,0xfe
005E2CAF  83 C0 02                  ADD EAX,0x2
005E2CB2  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
LAB_005e2cb8:
005E2CB8  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E2CBB  8B 4E 22                  MOV ECX,dword ptr [ESI + 0x22]
005E2CBE  8B 7E 26                  MOV EDI,dword ptr [ESI + 0x26]
005E2CC1  6A 01                     PUSH 0x1
005E2CC3  8D 50 28                  LEA EDX,[EAX + 0x28]
005E2CC6  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
005E2CCC  52                        PUSH EDX
005E2CCD  50                        PUSH EAX
005E2CCE  E8 0D 23 0D 00            CALL 0x006b4fe0
005E2CD3  8B 95 08 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff08]
005E2CD9  50                        PUSH EAX
005E2CDA  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005E2CDD  33 C9                     XOR ECX,ECX
005E2CDF  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005E2CE3  51                        PUSH ECX
005E2CE4  57                        PUSH EDI
005E2CE5  52                        PUSH EDX
005E2CE6  E8 D5 23 0D 00            CALL 0x006b50c0
005E2CEB  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
005E2CEE  81 E1 FF 00 00 00         AND ECX,0xff
005E2CF4  8D 8C 8D CC FE FF FF      LEA ECX,[EBP + ECX*0x4 + 0xfffffecc]
005E2CFB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005E2CFE  89 01                     MOV dword ptr [ECX],EAX
005E2D00  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E2D03  85 C9                     TEST ECX,ECX
005E2D05  75 18                     JNZ 0x005e2d1f
005E2D07  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005E2D0B  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005E2D0F  83 C1 1F                  ADD ECX,0x1f
005E2D12  C1 E9 03                  SHR ECX,0x3
005E2D15  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005E2D1B  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005e2d1f:
005E2D1F  50                        PUSH EAX
005E2D20  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005E2D23  E8 78 22 0D 00            CALL 0x006b4fa0
LAB_005e2d28:
005E2D28  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005E2D2B  8B F8                     MOV EDI,EAX
005E2D2D  8B D1                     MOV EDX,ECX
005E2D2F  83 C8 FF                  OR EAX,0xffffffff
005E2D32  C1 E9 02                  SHR ECX,0x2
005E2D35  F3 AB                     STOSD.REP ES:EDI
005E2D37  8B CA                     MOV ECX,EDX
005E2D39  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005E2D3C  83 E1 03                  AND ECX,0x3
005E2D3F  F3 AA                     STOSB.REP ES:EDI
005E2D41  8A 46 0B                  MOV AL,byte ptr [ESI + 0xb]
005E2D44  8A 4E 19                  MOV CL,byte ptr [ESI + 0x19]
005E2D47  50                        PUSH EAX
005E2D48  8B 02                     MOV EAX,dword ptr [EDX]
005E2D4A  51                        PUSH ECX
005E2D4B  50                        PUSH EAX
005E2D4C  8B CB                     MOV ECX,EBX
005E2D4E  E8 FE 2C E2 FF            CALL 0x00405a51
005E2D53  8A 46 19                  MOV AL,byte ptr [ESI + 0x19]
005E2D56  84 C0                     TEST AL,AL
005E2D58  74 1B                     JZ 0x005e2d75
005E2D5A  8A 56 0A                  MOV DL,byte ptr [ESI + 0xa]
005E2D5D  33 C9                     XOR ECX,ECX
005E2D5F  80 FA 01                  CMP DL,0x1
005E2D62  0F 94 C1                  SETZ CL
005E2D65  C1 E1 08                  SHL ECX,0x8
005E2D68  8D 94 19 91 00 00 00      LEA EDX,[ECX + EBX*0x1 + 0x91]
005E2D6F  89 95 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EDX
LAB_005e2d75:
005E2D75  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005E2D78  6A 00                     PUSH 0x0
005E2D7A  6A 00                     PUSH 0x0
005E2D7C  6A 00                     PUSH 0x0
005E2D7E  8B 08                     MOV ECX,dword ptr [EAX]
005E2D80  6A 00                     PUSH 0x0
005E2D82  6A 00                     PUSH 0x0
005E2D84  51                        PUSH ECX
005E2D85  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2D8B  E8 00 DD 12 00            CALL 0x00710a90
005E2D90  6A 01                     PUSH 0x1
005E2D92  6A 01                     PUSH 0x1
005E2D94  6A 00                     PUSH 0x0
005E2D96  E8 55 27 0D 00            CALL 0x006b54f0
005E2D9B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E2D9E  8B F8                     MOV EDI,EAX
005E2DA0  52                        PUSH EDX
005E2DA1  57                        PUSH EDI
005E2DA2  E8 F9 2C 0D 00            CALL 0x006b5aa0
005E2DA7  8B 46 2A                  MOV EAX,dword ptr [ESI + 0x2a]
005E2DAA  8B 4E 22                  MOV ECX,dword ptr [ESI + 0x22]
005E2DAD  6A 01                     PUSH 0x1
005E2DAF  6A 00                     PUSH 0x0
005E2DB1  D1 E0                     SHL EAX,0x1
005E2DB3  6A FF                     PUSH -0x1
005E2DB5  2B C8                     SUB ECX,EAX
005E2DB7  6A 00                     PUSH 0x0
005E2DB9  51                        PUSH ECX
005E2DBA  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2DC0  68 EC 21 7C 00            PUSH 0x7c21ec
005E2DC5  68 D8 21 7C 00            PUSH 0x7c21d8
005E2DCA  57                        PUSH EDI
005E2DCB  E8 10 F9 12 00            CALL 0x007126e0
005E2DD0  57                        PUSH EDI
005E2DD1  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005E2DD4  E8 97 27 0D 00            CALL 0x006b5570
005E2DD9  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
005E2DDC  85 C0                     TEST EAX,EAX
005E2DDE  74 45                     JZ 0x005e2e25
005E2DE0  8A 45 88                  MOV AL,byte ptr [EBP + -0x78]
005E2DE3  84 C0                     TEST AL,AL
005E2DE5  75 08                     JNZ 0x005e2def
005E2DE7  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
005E2DED  EB 14                     JMP 0x005e2e03
LAB_005e2def:
005E2DEF  3C 01                     CMP AL,0x1
005E2DF1  75 0B                     JNZ 0x005e2dfe
005E2DF3  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
005E2DF9  8D 42 01                  LEA EAX,[EDX + 0x1]
005E2DFC  EB 05                     JMP 0x005e2e03
LAB_005e2dfe:
005E2DFE  B8 04 00 00 00            MOV EAX,0x4
LAB_005e2e03:
005E2E03  8B 4E 2A                  MOV ECX,dword ptr [ESI + 0x2a]
005E2E06  8B 7D 84                  MOV EDI,dword ptr [EBP + -0x7c]
005E2E09  50                        PUSH EAX
005E2E0A  8B 46 2E                  MOV EAX,dword ptr [ESI + 0x2e]
005E2E0D  50                        PUSH EAX
005E2E0E  51                        PUSH ECX
005E2E0F  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E2E15  6A FF                     PUSH -0x1
005E2E17  6A 00                     PUSH 0x0
005E2E19  57                        PUSH EDI
005E2E1A  E8 51 F1 12 00            CALL 0x00711f70
005E2E1F  57                        PUSH EDI
005E2E20  E8 4B 27 0D 00            CALL 0x006b5570
LAB_005e2e25:
005E2E25  8A 45 88                  MOV AL,byte ptr [EBP + -0x78]
005E2E28  FE C0                     INC AL
005E2E2A  3C 03                     CMP AL,0x3
005E2E2C  88 45 88                  MOV byte ptr [EBP + -0x78],AL
005E2E2F  0F 82 83 FE FF FF         JC 0x005e2cb8
005E2E35  8B 93 4F 06 00 00         MOV EDX,dword ptr [EBX + 0x64f]
005E2E3B  8B 46 26                  MOV EAX,dword ptr [ESI + 0x26]
005E2E3E  8B 4E 22                  MOV ECX,dword ptr [ESI + 0x22]
005E2E41  52                        PUSH EDX
005E2E42  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
005E2E45  50                        PUSH EAX
005E2E46  51                        PUSH ECX
005E2E47  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E2E4D  68 B4 3D 40 00            PUSH 0x403db4
005E2E52  8D 85 C8 FE FF FF         LEA EAX,[EBP + 0xfffffec8]
005E2E58  52                        PUSH EDX
005E2E59  50                        PUSH EAX
005E2E5A  51                        PUSH ECX
005E2E5B  E8 D0 F4 0C 00            CALL 0x006b2330
005E2E60  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
005E2E63  8B 8B 4F 06 00 00         MOV ECX,dword ptr [EBX + 0x64f]
005E2E69  8D 95 C8 FE FF FF         LEA EDX,[EBP + 0xfffffec8]
005E2E6F  52                        PUSH EDX
005E2E70  50                        PUSH EAX
005E2E71  51                        PUSH ECX
LAB_005e2e72:
005E2E72  E8 C9 B2 0C 00            CALL 0x006ae140
005E2E77  8B 56 1E                  MOV EDX,dword ptr [ESI + 0x1e]
005E2E7A  8B 46 1A                  MOV EAX,dword ptr [ESI + 0x1a]
005E2E7D  8B 8D C8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec8]
005E2E83  52                        PUSH EDX
005E2E84  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E2E8A  50                        PUSH EAX
005E2E8B  6A 00                     PUSH 0x0
005E2E8D  51                        PUSH ECX
005E2E8E  52                        PUSH EDX
005E2E8F  E8 AC 07 0D 00            CALL 0x006b3640
005E2E94  E9 0D 04 00 00            JMP 0x005e32a6
LAB_005e2e99:
005E2E99  85 C0                     TEST EAX,EAX
005E2E9B  0F 84 05 04 00 00         JZ 0x005e32a6
005E2EA1  83 38 00                  CMP dword ptr [EAX],0x0
005E2EA4  0F 8C FC 03 00 00         JL 0x005e32a6
005E2EAA  80 7B 6D 05               CMP byte ptr [EBX + 0x6d],0x5
005E2EAE  75 0D                     JNZ 0x005e2ebd
005E2EB0  50                        PUSH EAX
005E2EB1  8B CB                     MOV ECX,EBX
005E2EB3  E8 A3 26 E2 FF            CALL 0x0040555b
005E2EB8  E9 E9 03 00 00            JMP 0x005e32a6
LAB_005e2ebd:
005E2EBD  84 D2                     TEST DL,DL
005E2EBF  74 08                     JZ 0x005e2ec9
005E2EC1  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E2EC4  83 E9 02                  SUB ECX,0x2
005E2EC7  EB 05                     JMP 0x005e2ece
LAB_005e2ec9:
005E2EC9  B9 01 00 00 00            MOV ECX,0x1
LAB_005e2ece:
005E2ECE  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
005E2ED1  C7 40 28 02 00 00 00      MOV dword ptr [EAX + 0x28],0x2
005E2ED8  8B 4B 69                  MOV ECX,dword ptr [EBX + 0x69]
005E2EDB  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
005E2EDE  8B 10                     MOV EDX,dword ptr [EAX]
005E2EE0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E2EE5  52                        PUSH EDX
005E2EE6  50                        PUSH EAX
005E2EE7  E8 E4 06 0D 00            CALL 0x006b35d0
005E2EEC  E9 B5 03 00 00            JMP 0x005e32a6
switchD_005e13d2::caseD_6:
005E2EF1  80 7B 6D 05               CMP byte ptr [EBX + 0x6d],0x5
005E2EF5  0F 84 AB 03 00 00         JZ 0x005e32a6
005E2EFB  8B 4B 70                  MOV ECX,dword ptr [EBX + 0x70]
005E2EFE  83 C6 0D                  ADD ESI,0xd
005E2F01  6A 00                     PUSH 0x0
005E2F03  6A 00                     PUSH 0x0
005E2F05  56                        PUSH ESI
005E2F06  51                        PUSH ECX
005E2F07  E8 F4 6D 13 00            CALL 0x00719d00
005E2F0C  83 C4 10                  ADD ESP,0x10
005E2F0F  85 C0                     TEST EAX,EAX
005E2F11  74 16                     JZ 0x005e2f29
LAB_005e2f13:
005E2F13  50                        PUSH EAX
005E2F14  6A FF                     PUSH -0x1
005E2F16  6A 03                     PUSH 0x3
005E2F18  6A 00                     PUSH 0x0
005E2F1A  B9 58 76 80 00            MOV ECX,0x807658
005E2F1F  E8 AD 00 E2 FF            CALL 0x00402fd1
005E2F24  E9 7D 03 00 00            JMP 0x005e32a6
LAB_005e2f29:
005E2F29  8B 15 98 67 80 00         MOV EDX,dword ptr [0x00806798]
005E2F2F  6A 00                     PUSH 0x0
005E2F31  6A 00                     PUSH 0x0
005E2F33  56                        PUSH ESI
005E2F34  52                        PUSH EDX
005E2F35  E8 C6 6D 13 00            CALL 0x00719d00
005E2F3A  83 C4 10                  ADD ESP,0x10
005E2F3D  85 C0                     TEST EAX,EAX
005E2F3F  0F 84 61 03 00 00         JZ 0x005e32a6
005E2F45  EB CC                     JMP 0x005e2f13
switchD_005e13d2::caseD_7:
005E2F47  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E2F4D  8B 4E 0E                  MOV ECX,dword ptr [ESI + 0xe]
005E2F50  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005E2F53  73 0B                     JNC 0x005e2f60
005E2F55  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005E2F58  0F AF F9                  IMUL EDI,ECX
005E2F5B  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
005E2F5E  EB 02                     JMP 0x005e2f62
LAB_005e2f60:
005E2F60  33 FF                     XOR EDI,EDI
LAB_005e2f62:
005E2F62  8A 46 0D                  MOV AL,byte ptr [ESI + 0xd]
005E2F65  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005E2F68  3C 01                     CMP AL,0x1
005E2F6A  0F 85 99 03 00 00         JNZ 0x005e3309
005E2F70  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E2F76  E8 A5 28 13 00            CALL 0x00715820
005E2F7B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E2F80  8D 95 4C FD FF FF         LEA EDX,[EBP + 0xfffffd4c]
005E2F86  8D 8D 48 FD FF FF         LEA ECX,[EBP + 0xfffffd48]
005E2F8C  6A 00                     PUSH 0x0
005E2F8E  52                        PUSH EDX
005E2F8F  C7 85 C2 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffec2],0x0
005E2F99  C7 85 70 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x1
005E2FA3  89 85 48 FD FF FF         MOV dword ptr [EBP + 0xfffffd48],EAX
005E2FA9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E2FAF  E8 3C A8 14 00            CALL 0x0072d7f0
005E2FB4  83 C4 08                  ADD ESP,0x8
005E2FB7  85 C0                     TEST EAX,EAX
005E2FB9  0F 85 B4 02 00 00         JNZ 0x005e3273
005E2FBF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E2FC2  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005E2FC5  85 C0                     TEST EAX,EAX
005E2FC7  74 67                     JZ 0x005e3030
005E2FC9  83 C0 65                  ADD EAX,0x65
005E2FCC  85 C0                     TEST EAX,EAX
005E2FCE  74 56                     JZ 0x005e3026
005E2FD0  8D 7E 12                  LEA EDI,[ESI + 0x12]
LAB_005e2fd3:
005E2FD3  8A 10                     MOV DL,byte ptr [EAX]
005E2FD5  8A 1F                     MOV BL,byte ptr [EDI]
005E2FD7  8A CA                     MOV CL,DL
005E2FD9  3A D3                     CMP DL,BL
005E2FDB  75 1E                     JNZ 0x005e2ffb
005E2FDD  84 C9                     TEST CL,CL
005E2FDF  74 16                     JZ 0x005e2ff7
005E2FE1  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
005E2FE4  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
005E2FE7  8A CA                     MOV CL,DL
005E2FE9  3A D3                     CMP DL,BL
005E2FEB  75 0E                     JNZ 0x005e2ffb
005E2FED  83 C0 02                  ADD EAX,0x2
005E2FF0  83 C7 02                  ADD EDI,0x2
005E2FF3  84 C9                     TEST CL,CL
005E2FF5  75 DC                     JNZ 0x005e2fd3
LAB_005e2ff7:
005E2FF7  33 C0                     XOR EAX,EAX
005E2FF9  EB 05                     JMP 0x005e3000
LAB_005e2ffb:
005E2FFB  1B C0                     SBB EAX,EAX
005E2FFD  83 D8 FF                  SBB EAX,-0x1
LAB_005e3000:
005E3000  85 C0                     TEST EAX,EAX
005E3002  74 22                     JZ 0x005e3026
005E3004  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005E3007  8B CF                     MOV ECX,EDI
005E3009  E8 A2 2A 13 00            CALL 0x00715ab0
005E300E  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
005E3014  8D 87 9A 00 00 00         LEA EAX,[EDI + 0x9a]
005E301A  85 C9                     TEST ECX,ECX
005E301C  74 12                     JZ 0x005e3030
005E301E  50                        PUSH EAX
005E301F  E8 3C 80 0C 00            CALL 0x006ab060
005E3024  EB 0A                     JMP 0x005e3030
LAB_005e3026:
005E3026  C7 85 70 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff70],0x0
LAB_005e3030:
005E3030  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
005E3036  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
005E303C  85 C0                     TEST EAX,EAX
005E303E  74 60                     JZ 0x005e30a0
005E3040  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
005E3043  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E3049  6A 00                     PUSH 0x0
005E304B  6A 00                     PUSH 0x0
005E304D  6A 00                     PUSH 0x0
005E304F  6A 1E                     PUSH 0x1e
005E3051  50                        PUSH EAX
005E3052  51                        PUSH ECX
005E3053  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E3059  E8 42 28 13 00            CALL 0x007158a0
005E305E  8B 53 70                  MOV EDX,dword ptr [EBX + 0x70]
005E3061  8D 7E 12                  LEA EDI,[ESI + 0x12]
005E3064  6A 00                     PUSH 0x0
005E3066  6A FF                     PUSH -0x1
005E3068  57                        PUSH EDI
005E3069  6A 00                     PUSH 0x0
005E306B  6A 1E                     PUSH 0x1e
005E306D  52                        PUSH EDX
005E306E  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E3074  E8 C7 2F 13 00            CALL 0x00716040
005E3079  85 C0                     TEST EAX,EAX
005E307B  0F 84 CA 00 00 00         JZ 0x005e314b
005E3081  A1 98 67 80 00            MOV EAX,[0x00806798]
005E3086  6A 01                     PUSH 0x1
005E3088  6A FF                     PUSH -0x1
005E308A  57                        PUSH EDI
005E308B  6A 00                     PUSH 0x0
005E308D  6A 1E                     PUSH 0x1e
005E308F  50                        PUSH EAX
005E3090  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E3096  E8 A5 2F 13 00            CALL 0x00716040
005E309B  E9 AB 00 00 00            JMP 0x005e314b
LAB_005e30a0:
005E30A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E30A3  85 C0                     TEST EAX,EAX
005E30A5  74 05                     JZ 0x005e30ac
005E30A7  8D 70 04                  LEA ESI,[EAX + 0x4]
005E30AA  EB 02                     JMP 0x005e30ae
LAB_005e30ac:
005E30AC  33 F6                     XOR ESI,ESI
LAB_005e30ae:
005E30AE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E30B1  B9 11 00 00 00            MOV ECX,0x11
005E30B6  8D BD 2C FE FF FF         LEA EDI,[EBP + 0xfffffe2c]
005E30BC  F3 A5                     MOVSD.REP ES:EDI,ESI
005E30BE  8B 48 48                  MOV ECX,dword ptr [EAX + 0x48]
005E30C1  8B F8                     MOV EDI,EAX
005E30C3  89 8D 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],ECX
005E30C9  8A 50 4C                  MOV DL,byte ptr [EAX + 0x4c]
005E30CC  88 95 74 FE FF FF         MOV byte ptr [EBP + 0xfffffe74],DL
005E30D2  8B 48 4D                  MOV ECX,dword ptr [EAX + 0x4d]
005E30D5  89 8D 75 FE FF FF         MOV dword ptr [EBP + 0xfffffe75],ECX
005E30DB  8B 50 51                  MOV EDX,dword ptr [EAX + 0x51]
005E30DE  89 95 79 FE FF FF         MOV dword ptr [EBP + 0xfffffe79],EDX
005E30E4  8B 48 55                  MOV ECX,dword ptr [EAX + 0x55]
005E30E7  89 8D 7D FE FF FF         MOV dword ptr [EBP + 0xfffffe7d],ECX
005E30ED  8B 50 59                  MOV EDX,dword ptr [EAX + 0x59]
005E30F0  89 95 81 FE FF FF         MOV dword ptr [EBP + 0xfffffe81],EDX
005E30F6  8B 48 5D                  MOV ECX,dword ptr [EAX + 0x5d]
005E30F9  89 8D 85 FE FF FF         MOV dword ptr [EBP + 0xfffffe85],ECX
005E30FF  8B 50 61                  MOV EDX,dword ptr [EAX + 0x61]
005E3102  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E3108  89 95 89 FE FF FF         MOV dword ptr [EBP + 0xfffffe89],EDX
005E310E  2B F9                     SUB EDI,ECX
005E3110  8D B5 8D FE FF FF         LEA ESI,[EBP + 0xfffffe8d]
005E3116  B9 20 00 00 00            MOV ECX,0x20
LAB_005e311b:
005E311B  8A 14 37                  MOV DL,byte ptr [EDI + ESI*0x1]
005E311E  88 16                     MOV byte ptr [ESI],DL
005E3120  46                        INC ESI
005E3121  49                        DEC ECX
005E3122  75 F7                     JNZ 0x005e311b
005E3124  8B 88 85 00 00 00         MOV ECX,dword ptr [EAX + 0x85]
005E312A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005E312D  89 8D AD FE FF FF         MOV dword ptr [EBP + 0xfffffead],ECX
005E3133  8B 90 89 00 00 00         MOV EDX,dword ptr [EAX + 0x89]
005E3139  89 95 B1 FE FF FF         MOV dword ptr [EBP + 0xfffffeb1],EDX
005E313F  8B 80 8D 00 00 00         MOV EAX,dword ptr [EAX + 0x8d]
005E3145  89 85 B5 FE FF FF         MOV dword ptr [EBP + 0xfffffeb5],EAX
LAB_005e314b:
005E314B  8B 4E 32                  MOV ECX,dword ptr [ESI + 0x32]
005E314E  33 C0                     XOR EAX,EAX
005E3150  89 8D 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],ECX
005E3156  8B 56 36                  MOV EDX,dword ptr [ESI + 0x36]
005E3159  89 95 48 FE FF FF         MOV dword ptr [EBP + 0xfffffe48],EDX
005E315F  8A 46 4F                  MOV AL,byte ptr [ESI + 0x4f]
005E3162  83 E8 00                  SUB EAX,0x0
005E3165  0F 84 A6 00 00 00         JZ 0x005e3211
005E316B  48                        DEC EAX
005E316C  74 77                     JZ 0x005e31e5
005E316E  48                        DEC EAX
005E316F  0F 85 AC 00 00 00         JNZ 0x005e3221
005E3175  8A 56 4E                  MOV DL,byte ptr [ESI + 0x4e]
005E3178  84 D2                     TEST DL,DL
005E317A  8B 53 69                  MOV EDX,dword ptr [EBX + 0x69]
005E317D  0F 95 C0                  SETNZ AL
005E3180  83 C0 03                  ADD EAX,0x3
005E3183  88 85 B9 FE FF FF         MOV byte ptr [EBP + 0xfffffeb9],AL
005E3189  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
005E318C  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005E3192  89 95 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EDX
005E3198  8B 46 46                  MOV EAX,dword ptr [ESI + 0x46]
005E319B  C7 85 BA FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeba],0x0
005E31A5  89 85 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EAX
005E31AB  8B 46 42                  MOV EAX,dword ptr [ESI + 0x42]
005E31AE  89 85 BE FE FF FF         MOV dword ptr [EBP + 0xfffffebe],EAX
005E31B4  8B 4E 3E                  MOV ECX,dword ptr [ESI + 0x3e]
005E31B7  8B 56 3A                  MOV EDX,dword ptr [ESI + 0x3a]
005E31BA  50                        PUSH EAX
005E31BB  8B 46 36                  MOV EAX,dword ptr [ESI + 0x36]
005E31BE  51                        PUSH ECX
005E31BF  8B 4E 32                  MOV ECX,dword ptr [ESI + 0x32]
005E31C2  52                        PUSH EDX
005E31C3  50                        PUSH EAX
005E31C4  51                        PUSH ECX
005E31C5  E8 F6 4F 0E 00            CALL 0x006c81c0
005E31CA  85 C0                     TEST EAX,EAX
005E31CC  89 85 C2 FE FF FF         MOV dword ptr [EBP + 0xfffffec2],EAX
005E31D2  75 4D                     JNZ 0x005e3221
005E31D4  8A 4E 4E                  MOV CL,byte ptr [ESI + 0x4e]
005E31D7  84 C9                     TEST CL,CL
005E31D9  0F 95 C2                  SETNZ DL
005E31DC  42                        INC EDX
005E31DD  88 95 B9 FE FF FF         MOV byte ptr [EBP + 0xfffffeb9],DL
005E31E3  EB 3C                     JMP 0x005e3221
LAB_005e31e5:
005E31E5  8A 56 4E                  MOV DL,byte ptr [ESI + 0x4e]
005E31E8  84 D2                     TEST DL,DL
005E31EA  8B 53 69                  MOV EDX,dword ptr [EBX + 0x69]
005E31ED  0F 95 C0                  SETNZ AL
005E31F0  40                        INC EAX
005E31F1  88 85 B9 FE FF FF         MOV byte ptr [EBP + 0xfffffeb9],AL
005E31F7  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
005E31FA  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005E3200  89 95 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EDX
005E3206  8B 46 46                  MOV EAX,dword ptr [ESI + 0x46]
005E3209  89 85 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EAX
005E320F  EB 10                     JMP 0x005e3221
LAB_005e3211:
005E3211  C6 85 B9 FE FF FF 00      MOV byte ptr [EBP + 0xfffffeb9],0x0
005E3218  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
005E321B  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
LAB_005e3221:
005E3221  8B 85 2C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe2c]
005E3227  83 F8 FF                  CMP EAX,-0x1
005E322A  74 22                     JZ 0x005e324e
005E322C  8B 95 48 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe48]
005E3232  8B 8D 44 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe44]
005E3238  52                        PUSH EDX
005E3239  8B 95 30 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe30]
005E323F  51                        PUSH ECX
005E3240  52                        PUSH EDX
005E3241  50                        PUSH EAX
005E3242  8B 85 70 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe70]
005E3248  50                        PUSH EAX
005E3249  E8 E2 04 0D 00            CALL 0x006b3730
LAB_005e324e:
005E324E  8B 56 0E                  MOV EDX,dword ptr [ESI + 0xe]
005E3251  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E3257  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E325D  51                        PUSH ECX
005E325E  52                        PUSH EDX
005E325F  50                        PUSH EAX
005E3260  E8 DB AE 0C 00            CALL 0x006ae140
005E3265  8B 8D 48 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd48]
005E326B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E3271  EB 33                     JMP 0x005e32a6
LAB_005e3273:
005E3273  8B 95 48 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd48]
005E3279  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005E327F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E3285  E8 26 28 13 00            CALL 0x00715ab0
005E328A  8B 85 C2 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec2]
005E3290  85 C0                     TEST EAX,EAX
005E3292  74 0C                     JZ 0x005e32a0
005E3294  8D 85 C2 FE FF FF         LEA EAX,[EBP + 0xfffffec2]
005E329A  50                        PUSH EAX
005E329B  E8 C0 7D 0C 00            CALL 0x006ab060
LAB_005e32a0:
005E32A0  8B 9D 78 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff78]
switchD_005e13d2::caseD_4:
005E32A6  8B 73 7C                  MOV ESI,dword ptr [EBX + 0x7c]
005E32A9  46                        INC ESI
005E32AA  89 73 7C                  MOV dword ptr [EBX + 0x7c],ESI
005E32AD  8B 4B 74                  MOV ECX,dword ptr [EBX + 0x74]
005E32B0  8B C6                     MOV EAX,ESI
005E32B2  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005E32B5  3B C1                     CMP EAX,ECX
005E32B7  0F 8C D2 E0 FF FF         JL 0x005e138f
LAB_005e32bd:
005E32BD  8B 53 74                  MOV EDX,dword ptr [EBX + 0x74]
005E32C0  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E32C3  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005E32C6  0F 85 5D 02 00 00         JNZ 0x005e3529
005E32CC  80 7B 6D 05               CMP byte ptr [EBX + 0x6d],0x5
005E32D0  0F 85 4F 02 00 00         JNZ 0x005e3525
005E32D6  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E32DC  85 C0                     TEST EAX,EAX
005E32DE  0F 84 41 02 00 00         JZ 0x005e3525
005E32E4  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E32E7  33 FF                     XOR EDI,EDI
005E32E9  85 C9                     TEST ECX,ECX
005E32EB  0F 86 34 02 00 00         JBE 0x005e3525
005E32F1  3B F9                     CMP EDI,ECX
005E32F3  0F 83 E5 01 00 00         JNC 0x005e34de
LAB_005e32f9:
005E32F9  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005E32FC  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E32FF  0F AF F7                  IMUL ESI,EDI
005E3302  03 F1                     ADD ESI,ECX
005E3304  E9 D7 01 00 00            JMP 0x005e34e0
LAB_005e3309:
005E3309  85 FF                     TEST EDI,EDI
005E330B  74 99                     JZ 0x005e32a6
005E330D  8B CF                     MOV ECX,EDI
005E330F  E8 9C 27 13 00            CALL 0x00715ab0
005E3314  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
005E331A  8D 87 9A 00 00 00         LEA EAX,[EDI + 0x9a]
005E3320  85 C9                     TEST ECX,ECX
005E3322  74 82                     JZ 0x005e32a6
005E3324  50                        PUSH EAX
005E3325  E8 36 7D 0C 00            CALL 0x006ab060
005E332A  E9 77 FF FF FF            JMP 0x005e32a6
switchD_005e13d2::caseD_8:
005E332F  B9 14 00 00 00            MOV ECX,0x14
005E3334  33 C0                     XOR EAX,EAX
005E3336  8D BD 20 FF FF FF         LEA EDI,[EBP + 0xffffff20]
005E333C  42                        INC EDX
005E333D  F3 AB                     STOSD.REP ES:EDI
005E333F  8D 8D 20 FF FF FF         LEA ECX,[EBP + 0xffffff20]
005E3345  88 85 2A FF FF FF         MOV byte ptr [EBP + 0xffffff2a],AL
005E334B  8B 43 74                  MOV EAX,dword ptr [EBX + 0x74]
005E334E  51                        PUSH ECX
005E334F  BE 26 02 00 00            MOV ESI,0x226
005E3354  52                        PUSH EDX
005E3355  50                        PUSH EAX
005E3356  C6 85 2B FF FF FF 01      MOV byte ptr [EBP + 0xffffff2b],0x1
005E335D  C6 85 2C FF FF FF 01      MOV byte ptr [EBP + 0xffffff2c],0x1
005E3364  C6 85 29 FF FF FF 01      MOV byte ptr [EBP + 0xffffff29],0x1
005E336B  C6 85 20 FF FF FF 01      MOV byte ptr [EBP + 0xffffff20],0x1
005E3372  C6 85 2D FF FF FF 02      MOV byte ptr [EBP + 0xffffff2d],0x2
005E3379  C6 85 2E FF FF FF 01      MOV byte ptr [EBP + 0xffffff2e],0x1
005E3380  C7 85 2F FF FF FF 62 02 00 00  MOV dword ptr [EBP + 0xffffff2f],0x262
005E338A  C7 85 37 FF FF FF 91 00 00 00  MOV dword ptr [EBP + 0xffffff37],0x91
005E3394  89 B5 33 FF FF FF         MOV dword ptr [EBP + 0xffffff33],ESI
005E339A  C7 85 3B FF FF FF 28 00 00 00  MOV dword ptr [EBP + 0xffffff3b],0x28
005E33A4  E8 27 DE 0C 00            CALL 0x006b11d0
005E33A9  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E33AC  8B 4B 74                  MOV ECX,dword ptr [EBX + 0x74]
005E33AF  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005E33B5  40                        INC EAX
005E33B6  52                        PUSH EDX
005E33B7  50                        PUSH EAX
005E33B8  51                        PUSH ECX
005E33B9  C6 85 2D FF FF FF 01      MOV byte ptr [EBP + 0xffffff2d],0x1
005E33C0  C7 85 2F FF FF FF 2D 00 00 00  MOV dword ptr [EBP + 0xffffff2f],0x2d
005E33CA  89 B5 33 FF FF FF         MOV dword ptr [EBP + 0xffffff33],ESI
005E33D0  E8 FB DD 0C 00            CALL 0x006b11d0
005E33D5  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E33D8  8B 4B 74                  MOV ECX,dword ptr [EBX + 0x74]
005E33DB  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005E33E1  40                        INC EAX
005E33E2  52                        PUSH EDX
005E33E3  BF F4 01 00 00            MOV EDI,0x1f4
005E33E8  50                        PUSH EAX
005E33E9  51                        PUSH ECX
005E33EA  C6 85 2D FF FF FF 00      MOV byte ptr [EBP + 0xffffff2d],0x0
005E33F1  C7 85 2F FF FF FF 23 00 00 00  MOV dword ptr [EBP + 0xffffff2f],0x23
005E33FB  89 BD 33 FF FF FF         MOV dword ptr [EBP + 0xffffff33],EDI
005E3401  E8 CA DD 0C 00            CALL 0x006b11d0
005E3406  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E3409  8B 4B 74                  MOV ECX,dword ptr [EBX + 0x74]
005E340C  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005E3412  40                        INC EAX
005E3413  52                        PUSH EDX
005E3414  50                        PUSH EAX
005E3415  51                        PUSH ECX
005E3416  C6 85 2B FF FF FF 00      MOV byte ptr [EBP + 0xffffff2b],0x0
005E341D  C6 85 2C FF FF FF 00      MOV byte ptr [EBP + 0xffffff2c],0x0
005E3424  C6 85 29 FF FF FF 00      MOV byte ptr [EBP + 0xffffff29],0x0
005E342B  C6 85 2A FF FF FF 00      MOV byte ptr [EBP + 0xffffff2a],0x0
005E3432  C6 85 20 FF FF FF 02      MOV byte ptr [EBP + 0xffffff20],0x2
005E3439  C6 85 2D FF FF FF 01      MOV byte ptr [EBP + 0xffffff2d],0x1
005E3440  C7 85 2E FF FF FF 04 01 00 00  MOV dword ptr [EBP + 0xffffff2e],0x104
005E344A  89 B5 3E FF FF FF         MOV dword ptr [EBP + 0xffffff3e],ESI
005E3450  C7 85 32 FF FF FF 22 01 00 00  MOV dword ptr [EBP + 0xffffff32],0x122
005E345A  C7 85 42 FF FF FF 3F 02 00 00  MOV dword ptr [EBP + 0xffffff42],0x23f
005E3464  C7 85 36 FF FF FF A4 01 00 00  MOV dword ptr [EBP + 0xffffff36],0x1a4
005E346E  89 B5 46 FF FF FF         MOV dword ptr [EBP + 0xffffff46],ESI
005E3474  E8 57 DD 0C 00            CALL 0x006b11d0
005E3479  B8 C8 00 00 00            MOV EAX,0xc8
005E347E  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005E3484  89 85 32 FF FF FF         MOV dword ptr [EBP + 0xffffff32],EAX
005E348A  89 85 3A FF FF FF         MOV dword ptr [EBP + 0xffffff3a],EAX
005E3490  8B 43 7C                  MOV EAX,dword ptr [EBX + 0x7c]
005E3493  C6 85 2B FF FF FF 00      MOV byte ptr [EBP + 0xffffff2b],0x0
005E349A  C6 85 2C FF FF FF 00      MOV byte ptr [EBP + 0xffffff2c],0x0
005E34A1  C6 85 29 FF FF FF 00      MOV byte ptr [EBP + 0xffffff29],0x0
005E34A8  C6 85 2A FF FF FF 00      MOV byte ptr [EBP + 0xffffff2a],0x0
005E34AF  C6 85 20 FF FF FF 03      MOV byte ptr [EBP + 0xffffff20],0x3
005E34B6  C6 85 2D FF FF FF 01      MOV byte ptr [EBP + 0xffffff2d],0x1
005E34BD  C7 85 2E FF FF FF 96 00 00 00  MOV dword ptr [EBP + 0xffffff2e],0x96
005E34C7  89 BD 36 FF FF FF         MOV dword ptr [EBP + 0xffffff36],EDI
005E34CD  52                        PUSH EDX
005E34CE  40                        INC EAX
005E34CF  8B 4B 74                  MOV ECX,dword ptr [EBX + 0x74]
005E34D2  50                        PUSH EAX
005E34D3  51                        PUSH ECX
005E34D4  E8 F7 DC 0C 00            CALL 0x006b11d0
005E34D9  E9 C8 FD FF FF            JMP 0x005e32a6
LAB_005e34de:
005E34DE  33 F6                     XOR ESI,ESI
LAB_005e34e0:
005E34E0  83 7E 04 FF               CMP dword ptr [ESI + 0x4],-0x1
005E34E4  74 2D                     JZ 0x005e3513
005E34E6  33 C0                     XOR EAX,EAX
005E34E8  8A 86 91 00 00 00         MOV AL,byte ptr [ESI + 0x91]
005E34EE  48                        DEC EAX
005E34EF  74 05                     JZ 0x005e34f6
005E34F1  83 E8 02                  SUB EAX,0x2
005E34F4  75 1D                     JNZ 0x005e3513
LAB_005e34f6:
005E34F6  8B CE                     MOV ECX,ESI
005E34F8  E8 B3 25 13 00            CALL 0x00715ab0
005E34FD  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
005E3503  8D 86 9A 00 00 00         LEA EAX,[ESI + 0x9a]
005E3509  85 C9                     TEST ECX,ECX
005E350B  74 06                     JZ 0x005e3513
005E350D  50                        PUSH EAX
005E350E  E8 4D 7B 0C 00            CALL 0x006ab060
LAB_005e3513:
005E3513  8B 83 4B 06 00 00         MOV EAX,dword ptr [EBX + 0x64b]
005E3519  47                        INC EDI
005E351A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E351D  3B F9                     CMP EDI,ECX
005E351F  0F 82 D4 FD FF FF         JC 0x005e32f9
LAB_005e3525:
005E3525  C6 43 6D 01               MOV byte ptr [EBX + 0x6d],0x1
LAB_005e3529:
005E3529  8B 8D 8C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd8c]
005E352F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E3535  5F                        POP EDI
005E3536  5E                        POP ESI
005E3537  5B                        POP EBX
005E3538  8B E5                     MOV ESP,EBP
005E353A  5D                        POP EBP
005E353B  C3                        RET
LAB_005e353c:
005E353C  8B 95 8C FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd8c]
005E3542  68 F0 DA 7C 00            PUSH 0x7cdaf0
005E3547  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E354C  56                        PUSH ESI
005E354D  6A 00                     PUSH 0x0
005E354F  68 5F 04 00 00            PUSH 0x45f
005E3554  68 94 D9 7C 00            PUSH 0x7cd994
005E3559  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E355F  E8 6C 9F 0C 00            CALL 0x006ad4d0
005E3564  83 C4 18                  ADD ESP,0x18
005E3567  85 C0                     TEST EAX,EAX
005E3569  74 01                     JZ 0x005e356c
005E356B  CC                        INT3
LAB_005e356c:
005E356C  68 5F 04 00 00            PUSH 0x45f
005E3571  68 94 D9 7C 00            PUSH 0x7cd994
005E3576  6A 00                     PUSH 0x0
005E3578  56                        PUSH ESI
005E3579  E8 C2 28 0C 00            CALL 0x006a5e40
005E357E  5F                        POP EDI
005E357F  5E                        POP ESI
005E3580  5B                        POP EBX
005E3581  8B E5                     MOV ESP,EBP
005E3583  5D                        POP EBP
005E3584  C3                        RET
