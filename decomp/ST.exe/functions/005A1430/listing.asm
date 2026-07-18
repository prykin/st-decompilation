FUN_005a1430:
005A1430  55                        PUSH EBP
005A1431  8B EC                     MOV EBP,ESP
005A1433  83 EC 48                  SUB ESP,0x48
005A1436  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A143C  53                        PUSH EBX
005A143D  56                        PUSH ESI
005A143E  3C 01                     CMP AL,0x1
005A1440  57                        PUSH EDI
005A1441  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A1444  0F 85 66 01 00 00         JNZ 0x005a15b0
005A144A  8B 81 C0 1A 00 00         MOV EAX,dword ptr [ECX + 0x1ac0]
005A1450  85 C0                     TEST EAX,EAX
005A1452  0F 84 58 01 00 00         JZ 0x005a15b0
005A1458  8B 81 BC 1A 00 00         MOV EAX,dword ptr [ECX + 0x1abc]
005A145E  85 C0                     TEST EAX,EAX
005A1460  0F 8C 4A 01 00 00         JL 0x005a15b0
005A1466  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A146B  8D 55 BC                  LEA EDX,[EBP + -0x44]
005A146E  8D 4D B8                  LEA ECX,[EBP + -0x48]
005A1471  6A 00                     PUSH 0x0
005A1473  52                        PUSH EDX
005A1474  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005A1477  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A147D  E8 6E C3 18 00            CALL 0x0072d7f0
005A1482  8B F0                     MOV ESI,EAX
005A1484  83 C4 08                  ADD ESP,0x8
005A1487  85 F6                     TEST ESI,ESI
005A1489  0F 85 E2 00 00 00         JNZ 0x005a1571
005A148F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A1492  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A1498  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005A149B  85 DB                     TEST EBX,EBX
005A149D  75 18                     JNZ 0x005a14b7
005A149F  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005A14A3  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005A14A7  83 C3 1F                  ADD EBX,0x1f
005A14AA  C1 EB 03                  SHR EBX,0x3
005A14AD  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005A14B3  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005a14b7:
005A14B7  50                        PUSH EAX
005A14B8  E8 E3 3A 11 00            CALL 0x006b4fa0
005A14BD  8B CB                     MOV ECX,EBX
005A14BF  8B F8                     MOV EDI,EAX
005A14C1  8B D1                     MOV EDX,ECX
005A14C3  83 C8 FF                  OR EAX,0xffffffff
005A14C6  C1 E9 02                  SHR ECX,0x2
005A14C9  F3 AB                     STOSD.REP ES:EDI
005A14CB  8B CA                     MOV ECX,EDX
005A14CD  68 F0 00 00 00            PUSH 0xf0
005A14D2  83 E1 03                  AND ECX,0x3
005A14D5  68 B8 01 00 00            PUSH 0x1b8
005A14DA  F3 AA                     STOSB.REP ES:EDI
005A14DC  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A14E2  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A14E8  6A 16                     PUSH 0x16
005A14EA  6A 00                     PUSH 0x0
005A14EC  6A 00                     PUSH 0x0
005A14EE  50                        PUSH EAX
005A14EF  E8 9C F5 16 00            CALL 0x00710a90
005A14F4  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A14FA  51                        PUSH ECX
005A14FB  68 BB 25 00 00            PUSH 0x25bb
005A1500  E8 3B EC 10 00            CALL 0x006b0140
005A1505  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005A1508  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A150E  50                        PUSH EAX
005A150F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A1512  52                        PUSH EDX
005A1513  50                        PUSH EAX
005A1514  51                        PUSH ECX
005A1515  68 BA 25 00 00            PUSH 0x25ba
005A151A  E8 21 EC 10 00            CALL 0x006b0140
005A151F  50                        PUSH EAX
005A1520  68 34 C4 7C 00            PUSH 0x7cc434
005A1525  68 3A F3 80 00            PUSH 0x80f33a
005A152A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A1530  83 C4 18                  ADD ESP,0x18
005A1533  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A1539  6A FF                     PUSH -0x1
005A153B  6A FF                     PUSH -0x1
005A153D  6A 02                     PUSH 0x2
005A153F  6A FF                     PUSH -0x1
005A1541  6A FE                     PUSH -0x2
005A1543  68 3A F3 80 00            PUSH 0x80f33a
005A1548  E8 23 06 17 00            CALL 0x00711b70
005A154D  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
005A1553  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A1558  52                        PUSH EDX
005A1559  50                        PUSH EAX
005A155A  E8 71 20 11 00            CALL 0x006b35d0
005A155F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A1562  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1568  5F                        POP EDI
005A1569  5E                        POP ESI
005A156A  5B                        POP EBX
005A156B  8B E5                     MOV ESP,EBP
005A156D  5D                        POP EBP
005A156E  C2 08 00                  RET 0x8
LAB_005a1571:
005A1571  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005A1574  68 20 C4 7C 00            PUSH 0x7cc420
005A1579  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A157E  56                        PUSH ESI
005A157F  6A 00                     PUSH 0x0
005A1581  68 41 09 00 00            PUSH 0x941
005A1586  68 70 BF 7C 00            PUSH 0x7cbf70
005A158B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1591  E8 3A BF 10 00            CALL 0x006ad4d0
005A1596  83 C4 18                  ADD ESP,0x18
005A1599  85 C0                     TEST EAX,EAX
005A159B  74 01                     JZ 0x005a159e
005A159D  CC                        INT3
LAB_005a159e:
005A159E  68 41 09 00 00            PUSH 0x941
005A15A3  68 70 BF 7C 00            PUSH 0x7cbf70
005A15A8  6A 00                     PUSH 0x0
005A15AA  56                        PUSH ESI
005A15AB  E8 90 48 10 00            CALL 0x006a5e40
LAB_005a15b0:
005A15B0  5F                        POP EDI
005A15B1  5E                        POP ESI
005A15B2  5B                        POP EBX
005A15B3  8B E5                     MOV ESP,EBP
005A15B5  5D                        POP EBP
005A15B6  C2 08 00                  RET 0x8
