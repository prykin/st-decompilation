MReportTy::SetCtrl:
005C1340  55                        PUSH EBP
005C1341  8B EC                     MOV EBP,ESP
005C1343  81 EC 6C 04 00 00         SUB ESP,0x46c
005C1349  8A 41 66                  MOV AL,byte ptr [ECX + 0x66]
005C134C  56                        PUSH ESI
005C134D  3C 01                     CMP AL,0x1
005C134F  57                        PUSH EDI
005C1350  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005C1353  75 0A                     JNZ 0x005c135f
005C1355  8A 41 6A                  MOV AL,byte ptr [ECX + 0x6a]
005C1358  FE C0                     INC AL
005C135A  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005C135D  EB 09                     JMP 0x005c1368
LAB_005c135f:
005C135F  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005C1365  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
LAB_005c1368:
005C1368  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005C136E  8D 4D 98                  LEA ECX,[EBP + -0x68]
005C1371  8D 45 94                  LEA EAX,[EBP + -0x6c]
005C1374  6A 00                     PUSH 0x0
005C1376  51                        PUSH ECX
005C1377  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
005C137A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C137F  E8 6C C4 16 00            CALL 0x0072d7f0
005C1384  8B F0                     MOV ESI,EAX
005C1386  83 C4 08                  ADD ESP,0x8
005C1389  85 F6                     TEST ESI,ESI
005C138B  0F 85 A6 01 00 00         JNZ 0x005c1537
005C1391  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005C1394  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005C139A  8D 7E 5D                  LEA EDI,[ESI + 0x5d]
005C139D  57                        PUSH EDI
005C139E  E8 3D 0D 13 00            CALL 0x006f20e0
005C13A3  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005C13A6  3C 01                     CMP AL,0x1
005C13A8  75 07                     JNZ 0x005c13b1
005C13AA  B8 50 A2 7C 00            MOV EAX,0x7ca250
005C13AF  EB 0E                     JMP 0x005c13bf
LAB_005c13b1:
005C13B1  3C 02                     CMP AL,0x2
005C13B3  B8 48 A2 7C 00            MOV EAX,0x7ca248
005C13B8  74 05                     JZ 0x005c13bf
005C13BA  B8 4C A2 7C 00            MOV EAX,0x7ca24c
LAB_005c13bf:
005C13BF  8B 15 22 C5 80 00         MOV EDX,dword ptr [0x0080c522]
005C13C5  F7 DA                     NEG EDX
005C13C7  1A D2                     SBB DL,DL
005C13C9  80 E2 FB                  AND DL,0xfb
005C13CC  80 C2 46                  ADD DL,0x46
005C13CF  0F BE CA                  MOVSX ECX,DL
005C13D2  51                        PUSH ECX
005C13D3  50                        PUSH EAX
005C13D4  68 6C CF 7C 00            PUSH 0x7ccf6c
005C13D9  68 3A F3 80 00            PUSH 0x80f33a
005C13DE  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C13E4  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005C13EA  6A 01                     PUSH 0x1
005C13EC  6A 00                     PUSH 0x0
005C13EE  68 3A F3 80 00            PUSH 0x80f33a
005C13F3  52                        PUSH EDX
005C13F4  E8 F7 95 14 00            CALL 0x0070a9f0
005C13F9  83 C4 20                  ADD ESP,0x20
005C13FC  8D 8D 94 FB FF FF         LEA ECX,[EBP + 0xfffffb94]
005C1402  89 07                     MOV dword ptr [EDI],EAX
005C1404  6A 00                     PUSH 0x0
005C1406  51                        PUSH ECX
005C1407  50                        PUSH EAX
005C1408  E8 53 AF 0F 00            CALL 0x006bc360
005C140D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C1413  8D 85 94 FB FF FF         LEA EAX,[EBP + 0xfffffb94]
005C1419  81 C2 44 01 00 00         ADD EDX,0x144
005C141F  52                        PUSH EDX
005C1420  6A 10                     PUSH 0x10
005C1422  6A 1A                     PUSH 0x1a
005C1424  68 00 01 00 00            PUSH 0x100
005C1429  6A 00                     PUSH 0x0
005C142B  50                        PUSH EAX
005C142C  E8 4F 73 15 00            CALL 0x00718780
005C1431  8D 8E A3 00 00 00         LEA ECX,[ESI + 0xa3]
005C1437  8D 95 94 FB FF FF         LEA EDX,[EBP + 0xfffffb94]
005C143D  51                        PUSH ECX
005C143E  6A 10                     PUSH 0x10
005C1440  6A 1A                     PUSH 0x1a
005C1442  68 00 01 00 00            PUSH 0x100
005C1447  6A 00                     PUSH 0x0
005C1449  52                        PUSH EDX
005C144A  E8 31 73 15 00            CALL 0x00718780
005C144F  8D 86 A3 01 00 00         LEA EAX,[ESI + 0x1a3]
005C1455  8D 8D 94 FB FF FF         LEA ECX,[EBP + 0xfffffb94]
005C145B  50                        PUSH EAX
005C145C  6A 10                     PUSH 0x10
005C145E  6A 2E                     PUSH 0x2e
005C1460  68 00 01 00 00            PUSH 0x100
005C1465  6A 00                     PUSH 0x0
005C1467  51                        PUSH ECX
005C1468  E8 13 73 15 00            CALL 0x00718780
005C146D  8B 17                     MOV EDX,dword ptr [EDI]
005C146F  83 C4 48                  ADD ESP,0x48
005C1472  52                        PUSH EDX
005C1473  6A 01                     PUSH 0x1
005C1475  6A 00                     PUSH 0x0
005C1477  6A 00                     PUSH 0x0
005C1479  E8 BA 22 E4 FF            CALL 0x00403738
005C147E  8B 86 83 00 00 00         MOV EAX,dword ptr [ESI + 0x83]
005C1484  83 C4 10                  ADD ESP,0x10
005C1487  85 C0                     TEST EAX,EAX
005C1489  74 09                     JZ 0x005c1494
005C148B  50                        PUSH EAX
005C148C  E8 CF F0 14 00            CALL 0x00710560
005C1491  83 C4 04                  ADD ESP,0x4
LAB_005c1494:
005C1494  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
005C1499  8B 0F                     MOV ECX,dword ptr [EDI]
005C149B  50                        PUSH EAX
005C149C  6A 00                     PUSH 0x0
005C149E  51                        PUSH ECX
005C149F  E8 01 2E E4 FF            CALL 0x004042a5
005C14A4  89 86 83 00 00 00         MOV dword ptr [ESI + 0x83],EAX
005C14AA  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
005C14B1  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
005C14B8  8B 86 87 00 00 00         MOV EAX,dword ptr [ESI + 0x87]
005C14BE  83 C4 0C                  ADD ESP,0xc
005C14C1  85 C0                     TEST EAX,EAX
005C14C3  74 09                     JZ 0x005c14ce
005C14C5  50                        PUSH EAX
005C14C6  E8 95 F0 14 00            CALL 0x00710560
005C14CB  83 C4 04                  ADD ESP,0x4
LAB_005c14ce:
005C14CE  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
005C14D4  8B 07                     MOV EAX,dword ptr [EDI]
005C14D6  52                        PUSH EDX
005C14D7  6A 00                     PUSH 0x0
005C14D9  50                        PUSH EAX
005C14DA  E8 27 0E E4 FF            CALL 0x00402306
005C14DF  89 86 87 00 00 00         MOV dword ptr [ESI + 0x87],EAX
005C14E5  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C14EB  83 C4 0C                  ADD ESP,0xc
005C14EE  89 41 38                  MOV dword ptr [ECX + 0x38],EAX
005C14F1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005C14F4  85 C0                     TEST EAX,EAX
005C14F6  74 2E                     JZ 0x005c1526
005C14F8  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005C14FB  B9 08 00 00 00            MOV ECX,0x8
005C1500  33 C0                     XOR EAX,EAX
005C1502  8D 7D D8                  LEA EDI,[EBP + -0x28]
005C1505  F3 AB                     STOSD.REP ES:EDI
005C1507  8D 45 D8                  LEA EAX,[EBP + -0x28]
005C150A  B9 20 76 80 00            MOV ECX,0x807620
005C150F  50                        PUSH EAX
005C1510  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005C1513  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
005C151A  C7 45 E8 FF 70 00 00      MOV dword ptr [EBP + -0x18],0x70ff
005C1521  E8 2A 26 12 00            CALL 0x006e3b50
LAB_005c1526:
005C1526  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
005C1529  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C152F  5F                        POP EDI
005C1530  5E                        POP ESI
005C1531  8B E5                     MOV ESP,EBP
005C1533  5D                        POP EBP
005C1534  C2 04 00                  RET 0x4
LAB_005c1537:
005C1537  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
005C153A  68 5C D0 7C 00            PUSH 0x7cd05c
005C153F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C1544  56                        PUSH ESI
005C1545  6A 00                     PUSH 0x0
005C1547  68 2C 03 00 00            PUSH 0x32c
005C154C  68 C8 CE 7C 00            PUSH 0x7ccec8
005C1551  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C1557  E8 74 BF 0E 00            CALL 0x006ad4d0
005C155C  83 C4 18                  ADD ESP,0x18
005C155F  85 C0                     TEST EAX,EAX
005C1561  74 01                     JZ 0x005c1564
005C1563  CC                        INT3
LAB_005c1564:
005C1564  68 2C 03 00 00            PUSH 0x32c
005C1569  68 C8 CE 7C 00            PUSH 0x7ccec8
005C156E  6A 00                     PUSH 0x0
005C1570  56                        PUSH ESI
005C1571  E8 CA 48 0E 00            CALL 0x006a5e40
005C1576  5F                        POP EDI
005C1577  5E                        POP ESI
005C1578  8B E5                     MOV ESP,EBP
005C157A  5D                        POP EBP
005C157B  C2 04 00                  RET 0x4
