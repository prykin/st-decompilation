FUN_004b1120:
004B1120  55                        PUSH EBP
004B1121  8B EC                     MOV EBP,ESP
004B1123  83 EC 18                  SUB ESP,0x18
004B1126  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B1129  53                        PUSH EBX
004B112A  33 DB                     XOR EBX,EBX
004B112C  56                        PUSH ESI
004B112D  3B C3                     CMP EAX,EBX
004B112F  57                        PUSH EDI
004B1130  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
004B1137  74 05                     JZ 0x004b113e
004B1139  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004B113C  EB 02                     JMP 0x004b1140
LAB_004b113e:
004B113E  33 C0                     XOR EAX,EAX
LAB_004b1140:
004B1140  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004B1143  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B1146  50                        PUSH EAX
004B1147  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B114A  8B 11                     MOV EDX,dword ptr [ECX]
004B114C  53                        PUSH EBX
004B114D  53                        PUSH EBX
004B114E  53                        PUSH EBX
004B114F  53                        PUSH EBX
004B1150  50                        PUSH EAX
004B1151  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B1154  56                        PUSH ESI
004B1155  52                        PUSH EDX
004B1156  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B1159  8B 08                     MOV ECX,dword ptr [EAX]
004B115B  8B 02                     MOV EAX,dword ptr [EDX]
004B115D  51                        PUSH ECX
004B115E  50                        PUSH EAX
004B115F  E8 C5 16 F5 FF            CALL 0x00402829
004B1164  83 C4 28                  ADD ESP,0x28
004B1167  3B C3                     CMP EAX,EBX
004B1169  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004B116C  0F 85 A8 03 00 00         JNZ 0x004b151a
004B1172  8B 04 B5 2C 07 79 00      MOV EAX,dword ptr [ESI*0x4 + 0x79072c]
004B1179  B9 01 00 00 00            MOV ECX,0x1
004B117E  3B C1                     CMP EAX,ECX
004B1180  0F 85 72 01 00 00         JNZ 0x004b12f8
004B1186  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004B118B  89 5D 20                  MOV dword ptr [EBP + 0x20],EBX
004B118E  3B C3                     CMP EAX,EBX
004B1190  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
004B1193  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
004B1196  0F 84 7E 03 00 00         JZ 0x004b151a
004B119C  89 58 04                  MOV dword ptr [EAX + 0x4],EBX
004B119F  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B11A5  8D 55 EC                  LEA EDX,[EBP + -0x14]
004B11A8  E8 E3 FF 1F 00            CALL 0x006b1190
004B11AD  85 C0                     TEST EAX,EAX
004B11AF  0F 8C 65 03 00 00         JL 0x004b151a
004B11B5  EB 03                     JMP 0x004b11ba
LAB_004b11b7:
004B11B7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_004b11ba:
004B11BA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004B11BD  85 C9                     TEST ECX,ECX
004B11BF  0F 84 F0 00 00 00         JZ 0x004b12b5
004B11C5  8D 46 C8                  LEA EAX,[ESI + -0x38]
004B11C8  83 F8 29                  CMP EAX,0x29
004B11CB  0F 87 E4 00 00 00         JA 0x004b12b5
004B11D1  33 D2                     XOR EDX,EDX
004B11D3  8A 90 38 15 4B 00         MOV DL,byte ptr [EAX + 0x4b1538]
switchD_004b11d9::switchD:
004B11D9  FF 24 95 24 15 4B 00      JMP dword ptr [EDX*0x4 + 0x4b1524]
switchD_004b11d9::caseD_38:
004B11E0  8B 01                     MOV EAX,dword ptr [ECX]
004B11E2  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B11E5  3D DC 00 00 00            CMP EAX,0xdc
004B11EA  0F 85 C5 00 00 00         JNZ 0x004b12b5
004B11F0  EB 34                     JMP 0x004b1226
switchD_004b11d9::caseD_39:
004B11F2  8B 11                     MOV EDX,dword ptr [ECX]
004B11F4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B11F7  3D DD 00 00 00            CMP EAX,0xdd
004B11FC  0F 85 B3 00 00 00         JNZ 0x004b12b5
004B1202  EB 22                     JMP 0x004b1226
switchD_004b11d9::caseD_4f:
004B1204  8B 01                     MOV EAX,dword ptr [ECX]
004B1206  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B1209  3D DE 00 00 00            CMP EAX,0xde
004B120E  0F 85 A1 00 00 00         JNZ 0x004b12b5
004B1214  EB 10                     JMP 0x004b1226
switchD_004b11d9::caseD_61:
004B1216  8B 11                     MOV EDX,dword ptr [ECX]
004B1218  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B121B  3D E0 00 00 00            CMP EAX,0xe0
004B1220  0F 85 8F 00 00 00         JNZ 0x004b12b5
LAB_004b1226:
004B1226  8D 45 FA                  LEA EAX,[EBP + -0x6]
004B1229  8D 4D FC                  LEA ECX,[EBP + -0x4]
004B122C  50                        PUSH EAX
004B122D  8D 55 FE                  LEA EDX,[EBP + -0x2]
004B1230  51                        PUSH ECX
004B1231  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004B1234  52                        PUSH EDX
004B1235  E8 8B 06 F5 FF            CALL 0x004018c5
004B123A  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
004B123E  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004B1245  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004B1249  0F BF FA                  MOVSX EDI,DX
004B124C  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004B1250  0F AF F7                  IMUL ESI,EDI
004B1253  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004B125A  0F AF F8                  IMUL EDI,EAX
004B125D  8B D9                     MOV EBX,ECX
004B125F  03 DE                     ADD EBX,ESI
004B1261  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
004B1267  03 FB                     ADD EDI,EBX
004B1269  83 3C FE 00               CMP dword ptr [ESI + EDI*0x8],0x0
004B126D  75 46                     JNZ 0x004b12b5
004B126F  66 83 FA 04               CMP DX,0x4
004B1273  7D 40                     JGE 0x004b12b5
004B1275  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B1278  8B 12                     MOV EDX,dword ptr [EDX]
004B127A  52                        PUSH EDX
004B127B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B127E  8B 12                     MOV EDX,dword ptr [EDX]
004B1280  52                        PUSH EDX
004B1281  50                        PUSH EAX
004B1282  51                        PUSH ECX
004B1283  E8 50 BC 1F 00            CALL 0x006aced8
004B1288  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B128B  83 C4 10                  ADD ESP,0x10
004B128E  85 C9                     TEST ECX,ECX
004B1290  7C 04                     JL 0x004b1296
004B1292  3B C1                     CMP EAX,ECX
004B1294  7D 1F                     JGE 0x004b12b5
LAB_004b1296:
004B1296  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
004B129A  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
004B129E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B12A1  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004B12A4  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004B12A8  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
004B12AB  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
004B12AE  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
switchD_004b11d9::caseD_3a:
004B12B5  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B12BB  8D 55 EC                  LEA EDX,[EBP + -0x14]
004B12BE  E8 CD FE 1F 00            CALL 0x006b1190
004B12C3  85 C0                     TEST EAX,EAX
004B12C5  0F 8D EC FE FF FF         JGE 0x004b11b7
004B12CB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B12CE  85 C0                     TEST EAX,EAX
004B12D0  0F 84 44 02 00 00         JZ 0x004b151a
004B12D6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B12D9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B12DC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B12DF  5F                        POP EDI
004B12E0  89 01                     MOV dword ptr [ECX],EAX
004B12E2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B12E5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004B12E8  5E                        POP ESI
004B12E9  89 10                     MOV dword ptr [EAX],EDX
004B12EB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B12EE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B12F1  5B                        POP EBX
004B12F2  89 0A                     MOV dword ptr [EDX],ECX
004B12F4  8B E5                     MOV ESP,EBP
004B12F6  5D                        POP EBP
004B12F7  C3                        RET
LAB_004b12f8:
004B12F8  A1 40 B2 7F 00            MOV EAX,[0x007fb240]
004B12FD  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
004B1304  66 3B C2                  CMP AX,DX
004B1307  7F 03                     JG 0x004b130c
004B1309  66 8B C2                  MOV AX,DX
LAB_004b130c:
004B130C  0F BF C0                  MOVSX EAX,AX
004B130F  3B C1                     CMP EAX,ECX
004B1311  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004B1314  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004B1317  0F 8E FD 01 00 00         JLE 0x004b151a
LAB_004b131d:
004B131D  3B 4D 20                  CMP ECX,dword ptr [EBP + 0x20]
004B1320  0F 8E BC 01 00 00         JLE 0x004b14e2
004B1326  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B132D  4A                        DEC EDX
004B132E  85 D2                     TEST EDX,EDX
004B1330  0F 8E AC 01 00 00         JLE 0x004b14e2
LAB_004b1336:
004B1336  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1339  8B 00                     MOV EAX,dword ptr [EAX]
004B133B  8B F0                     MOV ESI,EAX
004B133D  03 C1                     ADD EAX,ECX
004B133F  2B F1                     SUB ESI,ECX
004B1341  3B F0                     CMP ESI,EAX
004B1343  0F 8F B9 00 00 00         JG 0x004b1402
LAB_004b1349:
004B1349  85 F6                     TEST ESI,ESI
004B134B  0F 8C A1 00 00 00         JL 0x004b13f2
004B1351  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B1358  3B F2                     CMP ESI,EDX
004B135A  0F 8D 92 00 00 00         JGE 0x004b13f2
004B1360  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B1363  8B 38                     MOV EDI,dword ptr [EAX]
004B1365  2B F9                     SUB EDI,ECX
004B1367  78 40                     JS 0x004b13a9
004B1369  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B1370  3B FA                     CMP EDI,EDX
004B1372  7D 35                     JGE 0x004b13a9
004B1374  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B1377  85 C0                     TEST EAX,EAX
004B1379  74 05                     JZ 0x004b1380
004B137B  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004B137E  EB 02                     JMP 0x004b1382
LAB_004b1380:
004B1380  33 C0                     XOR EAX,EAX
LAB_004b1382:
004B1382  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B1385  50                        PUSH EAX
004B1386  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B1389  6A 00                     PUSH 0x0
004B138B  6A 00                     PUSH 0x0
004B138D  6A 00                     PUSH 0x0
004B138F  6A 00                     PUSH 0x0
004B1391  50                        PUSH EAX
004B1392  51                        PUSH ECX
004B1393  53                        PUSH EBX
004B1394  57                        PUSH EDI
004B1395  56                        PUSH ESI
004B1396  E8 8E 14 F5 FF            CALL 0x00402829
004B139B  83 C4 28                  ADD ESP,0x28
004B139E  85 C0                     TEST EAX,EAX
004B13A0  0F 85 52 01 00 00         JNZ 0x004b14f8
004B13A6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_004b13a9:
004B13A9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B13AC  8B 3A                     MOV EDI,dword ptr [EDX]
004B13AE  03 F9                     ADD EDI,ECX
004B13B0  78 40                     JS 0x004b13f2
004B13B2  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B13B9  3B F8                     CMP EDI,EAX
004B13BB  7D 35                     JGE 0x004b13f2
004B13BD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B13C0  85 C0                     TEST EAX,EAX
004B13C2  74 05                     JZ 0x004b13c9
004B13C4  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004B13C7  EB 02                     JMP 0x004b13cb
LAB_004b13c9:
004B13C9  33 C0                     XOR EAX,EAX
LAB_004b13cb:
004B13CB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B13CE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B13D1  50                        PUSH EAX
004B13D2  6A 00                     PUSH 0x0
004B13D4  6A 00                     PUSH 0x0
004B13D6  6A 00                     PUSH 0x0
004B13D8  6A 00                     PUSH 0x0
004B13DA  51                        PUSH ECX
004B13DB  52                        PUSH EDX
004B13DC  53                        PUSH EBX
004B13DD  57                        PUSH EDI
004B13DE  56                        PUSH ESI
004B13DF  E8 45 14 F5 FF            CALL 0x00402829
004B13E4  83 C4 28                  ADD ESP,0x28
004B13E7  85 C0                     TEST EAX,EAX
004B13E9  0F 85 09 01 00 00         JNZ 0x004b14f8
004B13EF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_004b13f2:
004B13F2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B13F5  46                        INC ESI
004B13F6  8B 10                     MOV EDX,dword ptr [EAX]
004B13F8  03 D1                     ADD EDX,ECX
004B13FA  3B F2                     CMP ESI,EDX
004B13FC  0F 8E 47 FF FF FF         JLE 0x004b1349
LAB_004b1402:
004B1402  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B1405  8B 00                     MOV EAX,dword ptr [EAX]
004B1407  8B F0                     MOV ESI,EAX
004B1409  2B F1                     SUB ESI,ECX
004B140B  8D 54 08 FF               LEA EDX,[EAX + ECX*0x1 + -0x1]
004B140F  46                        INC ESI
004B1410  3B F2                     CMP ESI,EDX
004B1412  0F 8F B4 00 00 00         JG 0x004b14cc
LAB_004b1418:
004B1418  85 F6                     TEST ESI,ESI
004B141A  0F 8C 9A 00 00 00         JL 0x004b14ba
004B1420  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B1427  3B F2                     CMP ESI,EDX
004B1429  0F 8D 8B 00 00 00         JGE 0x004b14ba
004B142F  2B C1                     SUB EAX,ECX
004B1431  8B F8                     MOV EDI,EAX
004B1433  78 40                     JS 0x004b1475
004B1435  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B143C  3B F8                     CMP EDI,EAX
004B143E  7D 35                     JGE 0x004b1475
004B1440  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B1443  85 C0                     TEST EAX,EAX
004B1445  74 05                     JZ 0x004b144c
004B1447  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004B144A  EB 02                     JMP 0x004b144e
LAB_004b144c:
004B144C  33 C0                     XOR EAX,EAX
LAB_004b144e:
004B144E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B1451  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B1454  50                        PUSH EAX
004B1455  6A 00                     PUSH 0x0
004B1457  6A 00                     PUSH 0x0
004B1459  6A 00                     PUSH 0x0
004B145B  6A 00                     PUSH 0x0
004B145D  51                        PUSH ECX
004B145E  52                        PUSH EDX
004B145F  53                        PUSH EBX
004B1460  56                        PUSH ESI
004B1461  57                        PUSH EDI
004B1462  E8 C2 13 F5 FF            CALL 0x00402829
004B1467  83 C4 28                  ADD ESP,0x28
004B146A  85 C0                     TEST EAX,EAX
004B146C  0F 85 92 00 00 00         JNZ 0x004b1504
004B1472  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_004b1475:
004B1475  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B1478  8B 38                     MOV EDI,dword ptr [EAX]
004B147A  03 F9                     ADD EDI,ECX
004B147C  78 3C                     JS 0x004b14ba
004B147E  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B1485  3B FA                     CMP EDI,EDX
004B1487  7D 31                     JGE 0x004b14ba
004B1489  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004B148C  85 C0                     TEST EAX,EAX
004B148E  74 05                     JZ 0x004b1495
004B1490  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
004B1493  EB 02                     JMP 0x004b1497
LAB_004b1495:
004B1495  33 C0                     XOR EAX,EAX
LAB_004b1497:
004B1497  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B149A  50                        PUSH EAX
004B149B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B149E  6A 00                     PUSH 0x0
004B14A0  6A 00                     PUSH 0x0
004B14A2  6A 00                     PUSH 0x0
004B14A4  6A 00                     PUSH 0x0
004B14A6  50                        PUSH EAX
004B14A7  51                        PUSH ECX
004B14A8  53                        PUSH EBX
004B14A9  56                        PUSH ESI
004B14AA  57                        PUSH EDI
004B14AB  E8 79 13 F5 FF            CALL 0x00402829
004B14B0  83 C4 28                  ADD ESP,0x28
004B14B3  85 C0                     TEST EAX,EAX
004B14B5  75 4D                     JNZ 0x004b1504
004B14B7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_004b14ba:
004B14BA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B14BD  46                        INC ESI
004B14BE  8B 02                     MOV EAX,dword ptr [EDX]
004B14C0  8D 54 08 FF               LEA EDX,[EAX + ECX*0x1 + -0x1]
004B14C4  3B F2                     CMP ESI,EDX
004B14C6  0F 8E 4C FF FF FF         JLE 0x004b1418
LAB_004b14cc:
004B14CC  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B14D3  43                        INC EBX
004B14D4  48                        DEC EAX
004B14D5  3B D8                     CMP EBX,EAX
004B14D7  0F 8C 59 FE FF FF         JL 0x004b1336
004B14DD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004B14E0  33 DB                     XOR EBX,EBX
LAB_004b14e2:
004B14E2  41                        INC ECX
004B14E3  3B C8                     CMP ECX,EAX
004B14E5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004B14E8  0F 8C 2F FE FF FF         JL 0x004b131d
004B14EE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B14F1  5F                        POP EDI
004B14F2  5E                        POP ESI
004B14F3  5B                        POP EBX
004B14F4  8B E5                     MOV ESP,EBP
004B14F6  5D                        POP EBP
004B14F7  C3                        RET
LAB_004b14f8:
004B14F8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B14FB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B14FE  89 31                     MOV dword ptr [ECX],ESI
004B1500  89 3A                     MOV dword ptr [EDX],EDI
004B1502  EB 0A                     JMP 0x004b150e
LAB_004b1504:
004B1504  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B1507  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B150A  89 39                     MOV dword ptr [ECX],EDI
004B150C  89 32                     MOV dword ptr [EDX],ESI
LAB_004b150e:
004B150E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B1511  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004B1518  89 18                     MOV dword ptr [EAX],EBX
LAB_004b151a:
004B151A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B151D  5F                        POP EDI
004B151E  5E                        POP ESI
004B151F  5B                        POP EBX
004B1520  8B E5                     MOV ESP,EBP
004B1522  5D                        POP EBP
004B1523  C3                        RET
