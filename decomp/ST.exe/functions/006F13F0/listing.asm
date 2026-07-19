cMf32::RecPut:
006F13F0  55                        PUSH EBP
006F13F1  8B EC                     MOV EBP,ESP
006F13F3  81 EC A0 01 00 00         SUB ESP,0x1a0
006F13F9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F13FE  53                        PUSH EBX
006F13FF  56                        PUSH ESI
006F1400  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006F1403  33 DB                     XOR EBX,EBX
006F1405  57                        PUSH EDI
006F1406  8D 55 AC                  LEA EDX,[EBP + -0x54]
006F1409  8D 4D A8                  LEA ECX,[EBP + -0x58]
006F140C  53                        PUSH EBX
006F140D  52                        PUSH EDX
006F140E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006F1411  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006F1414  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006F1417  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006F141A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1420  E8 CB C3 03 00            CALL 0x0072d7f0
006F1425  8B F0                     MOV ESI,EAX
006F1427  83 C4 08                  ADD ESP,0x8
006F142A  3B F3                     CMP ESI,EBX
006F142C  0F 85 2C 02 00 00         JNZ 0x006f165e
006F1432  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F1435  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F1438  3B FB                     CMP EDI,EBX
006F143A  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006F143D  74 08                     JZ 0x006f1447
006F143F  85 DB                     TEST EBX,EBX
006F1441  74 04                     JZ 0x006f1447
006F1443  85 F6                     TEST ESI,ESI
006F1445  75 17                     JNZ 0x006f145e
LAB_006f1447:
006F1447  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F144C  68 D2 00 00 00            PUSH 0xd2
006F1451  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1456  50                        PUSH EAX
006F1457  6A CC                     PUSH -0x34
006F1459  E8 E2 49 FB FF            CALL 0x006a5e40
LAB_006f145e:
006F145E  80 3E 00                  CMP byte ptr [ESI],0x0
006F1461  75 18                     JNZ 0x006f147b
006F1463  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006F1469  68 D3 00 00 00            PUSH 0xd3
006F146E  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1473  51                        PUSH ECX
006F1474  6A CC                     PUSH -0x34
006F1476  E8 C5 49 FB FF            CALL 0x006a5e40
LAB_006f147b:
006F147B  83 FB 20                  CMP EBX,0x20
006F147E  7D 07                     JGE 0x006f1487
006F1480  32 C0                     XOR AL,AL
006F1482  88 45 1C                  MOV byte ptr [EBP + 0x1c],AL
006F1485  EB 03                     JMP 0x006f148a
LAB_006f1487:
006F1487  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
LAB_006f148a:
006F148A  3C 01                     CMP AL,0x1
006F148C  74 0F                     JZ 0x006f149d
006F148E  3C 02                     CMP AL,0x2
006F1490  74 0B                     JZ 0x006f149d
006F1492  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006F1495  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F1498  E9 D8 00 00 00            JMP 0x006f1575
LAB_006f149d:
006F149D  53                        PUSH EBX
006F149E  E8 6D 97 FB FF            CALL 0x006aac10
006F14A3  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006F14A9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F14AC  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
006F14B2  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
006F14B8  6A 00                     PUSH 0x0
006F14BA  51                        PUSH ECX
006F14BB  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
006F14C2  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
006F14C8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F14CD  E8 1E C3 03 00            CALL 0x0072d7f0
006F14D2  83 C4 08                  ADD ESP,0x8
006F14D5  85 C0                     TEST EAX,EAX
006F14D7  75 66                     JNZ 0x006f153f
006F14D9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F14DC  25 FF 00 00 00            AND EAX,0xff
006F14E1  48                        DEC EAX
006F14E2  74 27                     JZ 0x006f150b
006F14E4  48                        DEC EAX
006F14E5  75 48                     JNZ 0x006f152f
006F14E7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F14EA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F14ED  50                        PUSH EAX
006F14EE  52                        PUSH EDX
006F14EF  50                        PUSH EAX
006F14F0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F14F3  50                        PUSH EAX
006F14F4  E8 77 FC 05 00            CALL 0x00751170
006F14F9  8B D8                     MOV EBX,EAX
006F14FB  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006F1501  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F1504  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1509  EB 67                     JMP 0x006f1572
LAB_006f150b:
006F150B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F150E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F1511  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F1514  50                        PUSH EAX
006F1515  51                        PUSH ECX
006F1516  50                        PUSH EAX
006F1517  52                        PUSH EDX
006F1518  E8 23 FC 05 00            CALL 0x00751140
006F151D  8B D8                     MOV EBX,EAX
006F151F  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006F1525  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F1528  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F152D  EB 43                     JMP 0x006f1572
LAB_006f152f:
006F152F  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
006F1535  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006F1538  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F153D  EB 33                     JMP 0x006f1572
LAB_006f153f:
006F153F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F1542  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
006F1548  85 C0                     TEST EAX,EAX
006F154A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F1550  74 09                     JZ 0x006f155b
006F1552  8D 55 F8                  LEA EDX,[EBP + -0x8]
006F1555  52                        PUSH EDX
006F1556  E8 05 9B FB FF            CALL 0x006ab060
LAB_006f155b:
006F155B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F155E  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006F1561  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006F1564  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006F156B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006F156E  C6 45 1C 00               MOV byte ptr [EBP + 0x1c],0x0
LAB_006f1572:
006F1572  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_006f1575:
006F1575  8B FE                     MOV EDI,ESI
006F1577  83 C9 FF                  OR ECX,0xffffffff
006F157A  33 C0                     XOR EAX,EAX
006F157C  F2 AE                     SCASB.REPNE ES:EDI
006F157E  F7 D1                     NOT ECX
006F1580  83 C1 17                  ADD ECX,0x17
006F1583  51                        PUSH ECX
006F1584  E8 87 96 FB FF            CALL 0x006aac10
006F1589  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006F158C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F158F  88 08                     MOV byte ptr [EAX],CL
006F1591  8B FE                     MOV EDI,ESI
006F1593  83 C9 FF                  OR ECX,0xffffffff
006F1596  33 C0                     XOR EAX,EAX
006F1598  F2 AE                     SCASB.REPNE ES:EDI
006F159A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F159D  F7 D1                     NOT ECX
006F159F  49                        DEC ECX
006F15A0  66 89 4A 16               MOV word ptr [EDX + 0x16],CX
006F15A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F15A7  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
006F15AB  8D 78 18                  LEA EDI,[EAX + 0x18]
006F15AE  8B C1                     MOV EAX,ECX
006F15B0  C1 E9 02                  SHR ECX,0x2
006F15B3  F3 A5                     MOVSD.REP ES:EDI,ESI
006F15B5  8B C8                     MOV ECX,EAX
006F15B7  83 E1 03                  AND ECX,0x3
006F15BA  F3 A4                     MOVSB.REP ES:EDI,ESI
006F15BC  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006F15BF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F15C2  51                        PUSH ECX
006F15C3  8B 16                     MOV EDX,dword ptr [ESI]
006F15C5  52                        PUSH EDX
006F15C6  E8 35 FB 05 00            CALL 0x00751100
006F15CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F15CE  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006F15D1  89 58 01                  MOV dword ptr [EAX + 0x1],EBX
006F15D4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F15D7  88 51 05                  MOV byte ptr [ECX + 0x5],DL
006F15DA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F15DD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F15E0  89 48 06                  MOV dword ptr [EAX + 0x6],ECX
006F15E3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F15E6  85 C0                     TEST EAX,EAX
006F15E8  74 16                     JZ 0x006f1600
006F15EA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F15ED  8B 08                     MOV ECX,dword ptr [EAX]
006F15EF  83 C2 0A                  ADD EDX,0xa
006F15F2  89 0A                     MOV dword ptr [EDX],ECX
006F15F4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006F15F7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006F15FA  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006F15FD  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
LAB_006f1600:
006F1600  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006F1603  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F1606  8B 06                     MOV EAX,dword ptr [ESI]
006F1608  53                        PUSH EBX
006F1609  51                        PUSH ECX
006F160A  52                        PUSH EDX
006F160B  50                        PUSH EAX
006F160C  E8 3F FA 05 00            CALL 0x00751050
006F1611  8B F8                     MOV EDI,EAX
006F1613  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006F1616  85 C0                     TEST EAX,EAX
006F1618  74 02                     JZ 0x006f161c
006F161A  89 18                     MOV dword ptr [EAX],EBX
LAB_006f161c:
006F161C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F161F  85 C0                     TEST EAX,EAX
006F1621  74 09                     JZ 0x006f162c
006F1623  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F1626  51                        PUSH ECX
006F1627  E8 34 9A FB FF            CALL 0x006ab060
LAB_006f162c:
006F162C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006F162F  85 C0                     TEST EAX,EAX
006F1631  74 10                     JZ 0x006f1643
006F1633  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006F1636  85 C0                     TEST EAX,EAX
006F1638  74 09                     JZ 0x006f1643
006F163A  8D 55 F8                  LEA EDX,[EBP + -0x8]
006F163D  52                        PUSH EDX
006F163E  E8 1D 9A FB FF            CALL 0x006ab060
LAB_006f1643:
006F1643  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1646  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F164B  8B 0E                     MOV ECX,dword ptr [ESI]
006F164D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006F1650  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
006F1653  03 C7                     ADD EAX,EDI
006F1655  5F                        POP EDI
006F1656  5E                        POP ESI
006F1657  5B                        POP EBX
006F1658  8B E5                     MOV ESP,EBP
006F165A  5D                        POP EBP
006F165B  C2 1C 00                  RET 0x1c
LAB_006f165e:
006F165E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006F1661  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F1666  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1669  3B C3                     CMP EAX,EBX
006F166B  74 09                     JZ 0x006f1676
006F166D  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F1670  51                        PUSH ECX
006F1671  E8 EA 99 FB FF            CALL 0x006ab060
LAB_006f1676:
006F1676  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
006F1679  74 0E                     JZ 0x006f1689
006F167B  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
006F167E  74 09                     JZ 0x006f1689
006F1680  8D 55 F8                  LEA EDX,[EBP + -0x8]
006F1683  52                        PUSH EDX
006F1684  E8 D7 99 FB FF            CALL 0x006ab060
LAB_006f1689:
006F1689  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F168C  50                        PUSH EAX
006F168D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F1690  25 FF 00 00 00            AND EAX,0xff
006F1695  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006F1698  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006F169B  05 31 02 00 00            ADD EAX,0x231
006F16A0  8D 14 4D A4 F0 7E 00      LEA EDX,[ECX*0x2 + 0x7ef0a4]
006F16A7  8D 8D 60 FE FF FF         LEA ECX,[EBP + 0xfffffe60]
006F16AD  52                        PUSH EDX
006F16AE  50                        PUSH EAX
006F16AF  68 FC FA 7E 00            PUSH 0x7efafc
006F16B4  51                        PUSH ECX
006F16B5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006F16BB  8D 95 60 FE FF FF         LEA EDX,[EBP + 0xfffffe60]
006F16C1  52                        PUSH EDX
006F16C2  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F16C7  56                        PUSH ESI
006F16C8  53                        PUSH EBX
006F16C9  68 06 01 00 00            PUSH 0x106
006F16CE  68 A4 FA 7E 00            PUSH 0x7efaa4
006F16D3  E8 F8 BD FB FF            CALL 0x006ad4d0
006F16D8  83 C4 2C                  ADD ESP,0x2c
006F16DB  85 C0                     TEST EAX,EAX
006F16DD  74 01                     JZ 0x006f16e0
006F16DF  CC                        INT3
LAB_006f16e0:
006F16E0  68 08 01 00 00            PUSH 0x108
006F16E5  68 A4 FA 7E 00            PUSH 0x7efaa4
006F16EA  53                        PUSH EBX
006F16EB  56                        PUSH ESI
006F16EC  E8 4F 47 FB FF            CALL 0x006a5e40
006F16F1  5F                        POP EDI
006F16F2  5E                        POP ESI
006F16F3  33 C0                     XOR EAX,EAX
006F16F5  5B                        POP EBX
006F16F6  8B E5                     MOV ESP,EBP
006F16F8  5D                        POP EBP
006F16F9  C2 1C 00                  RET 0x1c
