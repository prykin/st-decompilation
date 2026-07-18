FUN_006b1470:
006B1470  55                        PUSH EBP
006B1471  8B EC                     MOV EBP,ESP
006B1473  81 EC 80 00 00 00         SUB ESP,0x80
006B1479  56                        PUSH ESI
006B147A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B147D  57                        PUSH EDI
006B147E  8B 3E                     MOV EDI,dword ptr [ESI]
006B1480  85 FF                     TEST EDI,EDI
006B1482  75 1F                     JNZ 0x006b14a3
006B1484  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B1489  68 82 00 00 00            PUSH 0x82
006B148E  68 C0 DA 7E 00            PUSH 0x7edac0
006B1493  50                        PUSH EAX
006B1494  6A CC                     PUSH -0x34
006B1496  E8 A5 49 FF FF            CALL 0x006a5e40
006B149B  5F                        POP EDI
006B149C  5E                        POP ESI
006B149D  8B E5                     MOV ESP,EBP
006B149F  5D                        POP EBP
006B14A0  C2 04 00                  RET 0x4
LAB_006b14a3:
006B14A3  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006B14A6  85 C0                     TEST EAX,EAX
006B14A8  0F 84 C0 01 00 00         JZ 0x006b166e
006B14AE  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006B14B5  74 0D                     JZ 0x006b14c4
006B14B7  8D 8F F0 04 00 00         LEA ECX,[EDI + 0x4f0]
006B14BD  51                        PUSH ECX
006B14BE  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b14c4:
006B14C4  8B 47 44                  MOV EAX,dword ptr [EDI + 0x44]
006B14C7  53                        PUSH EBX
006B14C8  8D 5F 44                  LEA EBX,[EDI + 0x44]
006B14CB  85 C0                     TEST EAX,EAX
006B14CD  74 0C                     JZ 0x006b14db
006B14CF  8B 10                     MOV EDX,dword ptr [EAX]
006B14D1  50                        PUSH EAX
006B14D2  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B14D5  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_006b14db:
006B14DB  8B 47 48                  MOV EAX,dword ptr [EDI + 0x48]
006B14DE  85 C0                     TEST EAX,EAX
006B14E0  74 0D                     JZ 0x006b14ef
006B14E2  8B 08                     MOV ECX,dword ptr [EAX]
006B14E4  50                        PUSH EAX
006B14E5  FF 51 08                  CALL dword ptr [ECX + 0x8]
006B14E8  C7 47 48 00 00 00 00      MOV dword ptr [EDI + 0x48],0x0
LAB_006b14ef:
006B14EF  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006B14F5  85 C0                     TEST EAX,EAX
006B14F7  74 1A                     JZ 0x006b1513
006B14F9  8B 10                     MOV EDX,dword ptr [EAX]
006B14FB  50                        PUSH EAX
006B14FC  FF 52 08                  CALL dword ptr [EDX + 0x8]
006B14FF  33 C0                     XOR EAX,EAX
006B1501  89 86 C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EAX
006B1507  89 86 C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EAX
006B150D  89 86 CC 01 00 00         MOV dword ptr [ESI + 0x1cc],EAX
LAB_006b1513:
006B1513  C7 45 80 7C 00 00 00      MOV dword ptr [EBP + -0x80],0x7c
006B151A  C7 45 84 07 10 00 00      MOV dword ptr [EBP + -0x7c],0x1007
006B1521  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006B1524  8D 55 80                  LEA EDX,[EBP + -0x80]
006B1527  52                        PUSH EDX
006B1528  50                        PUSH EAX
006B1529  8B 08                     MOV ECX,dword ptr [EAX]
006B152B  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B152E  8B F0                     MOV ESI,EAX
006B1530  85 F6                     TEST ESI,ESI
006B1532  0F 85 F9 00 00 00         JNZ 0x006b1631
006B1538  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006B153B  B8 00 08 00 00            MOV EAX,0x800
006B1540  23 D0                     AND EDX,EAX
006B1542  C7 45 80 7C 00 00 00      MOV dword ptr [EBP + -0x80],0x7c
006B1549  C7 45 84 07 10 00 00      MOV dword ptr [EBP + -0x7c],0x1007
006B1550  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006B1553  F7 47 08 00 00 00 10      TEST dword ptr [EDI + 0x8],0x10000000
006B155A  75 05                     JNZ 0x006b1561
006B155C  85 47 0C                  TEST dword ptr [EDI + 0xc],EAX
006B155F  74 03                     JZ 0x006b1564
LAB_006b1561:
006B1561  09 45 E8                  OR dword ptr [EBP + -0x18],EAX
LAB_006b1564:
006B1564  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B1567  6A 00                     PUSH 0x0
006B1569  0C 40                     OR AL,0x40
006B156B  8D 55 80                  LEA EDX,[EBP + -0x80]
006B156E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B1571  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
006B1574  53                        PUSH EBX
006B1575  52                        PUSH EDX
006B1576  8B 08                     MOV ECX,dword ptr [EAX]
006B1578  50                        PUSH EAX
006B1579  FF 51 18                  CALL dword ptr [ECX + 0x18]
006B157C  8B F0                     MOV ESI,EAX
006B157E  85 F6                     TEST ESI,ESI
006B1580  0F 85 AB 00 00 00         JNZ 0x006b1631
006B1586  83 7F 20 08               CMP dword ptr [EDI + 0x20],0x8
006B158A  75 10                     JNZ 0x006b159c
006B158C  8B 4F 3C                  MOV ECX,dword ptr [EDI + 0x3c]
006B158F  85 C9                     TEST ECX,ECX
006B1591  74 09                     JZ 0x006b159c
006B1593  8B 03                     MOV EAX,dword ptr [EBX]
006B1595  51                        PUSH ECX
006B1596  50                        PUSH EAX
006B1597  8B 10                     MOV EDX,dword ptr [EAX]
006B1599  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
LAB_006b159c:
006B159C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006b15a3:
006B15A3  8B 03                     MOV EAX,dword ptr [EBX]
006B15A5  8B 57 40                  MOV EDX,dword ptr [EDI + 0x40]
006B15A8  6A 00                     PUSH 0x0
006B15AA  68 00 00 00 01            PUSH 0x1000000
006B15AF  8B 08                     MOV ECX,dword ptr [EAX]
006B15B1  6A 00                     PUSH 0x0
006B15B3  52                        PUSH EDX
006B15B4  6A 00                     PUSH 0x0
006B15B6  50                        PUSH EAX
006B15B7  FF 51 14                  CALL dword ptr [ECX + 0x14]
006B15BA  8B F0                     MOV ESI,EAX
006B15BC  85 F6                     TEST ESI,ESI
006B15BE  74 3B                     JZ 0x006b15fb
006B15C0  81 FE C2 01 76 88         CMP ESI,0x887601c2
006B15C6  75 08                     JNZ 0x006b15d0
006B15C8  57                        PUSH EDI
006B15C9  E8 72 D6 01 00            CALL 0x006cec40
006B15CE  EB 1F                     JMP 0x006b15ef
LAB_006b15d0:
006B15D0  81 FE A0 00 76 88         CMP ESI,0x887600a0
006B15D6  74 08                     JZ 0x006b15e0
006B15D8  81 FE AE 01 76 88         CMP ESI,0x887601ae
006B15DE  75 1B                     JNZ 0x006b15fb
LAB_006b15e0:
006B15E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B15E3  85 C0                     TEST EAX,EAX
006B15E5  75 14                     JNZ 0x006b15fb
006B15E7  6A 02                     PUSH 0x2
006B15E9  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006b15ef:
006B15EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B15F2  40                        INC EAX
006B15F3  83 F8 02                  CMP EAX,0x2
006B15F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B15F9  7C A8                     JL 0x006b15a3
LAB_006b15fb:
006B15FB  81 FE A0 00 76 88         CMP ESI,0x887600a0
006B1601  74 08                     JZ 0x006b160b
006B1603  81 FE AE 01 76 88         CMP ESI,0x887601ae
006B1609  75 02                     JNZ 0x006b160d
LAB_006b160b:
006B160B  33 F6                     XOR ESI,ESI
LAB_006b160d:
006B160D  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
006B1610  8B 0B                     MOV ECX,dword ptr [EBX]
006B1612  89 4F 40                  MOV dword ptr [EDI + 0x40],ECX
006B1615  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B1618  89 03                     MOV dword ptr [EBX],EAX
006B161A  B8 01 00 00 00            MOV EAX,0x1
006B161F  89 87 B0 04 00 00         MOV dword ptr [EDI + 0x4b0],EAX
006B1625  89 81 B8 01 00 00         MOV dword ptr [ECX + 0x1b8],EAX
006B162B  89 81 B4 01 00 00         MOV dword ptr [ECX + 0x1b4],EAX
LAB_006b1631:
006B1631  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006B1634  5B                        POP EBX
006B1635  A9 00 00 00 04            TEST EAX,0x4000000
006B163A  74 0D                     JZ 0x006b1649
006B163C  81 C7 F0 04 00 00         ADD EDI,0x4f0
006B1642  57                        PUSH EDI
006B1643  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b1649:
006B1649  85 F6                     TEST ESI,ESI
006B164B  74 21                     JZ 0x006b166e
006B164D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B1653  68 CA 00 00 00            PUSH 0xca
006B1658  68 C0 DA 7E 00            PUSH 0x7edac0
006B165D  52                        PUSH EDX
006B165E  56                        PUSH ESI
006B165F  E8 DC 47 FF FF            CALL 0x006a5e40
006B1664  8B C6                     MOV EAX,ESI
006B1666  5F                        POP EDI
006B1667  5E                        POP ESI
006B1668  8B E5                     MOV ESP,EBP
006B166A  5D                        POP EBP
006B166B  C2 04 00                  RET 0x4
LAB_006b166e:
006B166E  5F                        POP EDI
006B166F  33 C0                     XOR EAX,EAX
006B1671  5E                        POP ESI
006B1672  8B E5                     MOV ESP,EBP
006B1674  5D                        POP EBP
006B1675  C2 04 00                  RET 0x4
