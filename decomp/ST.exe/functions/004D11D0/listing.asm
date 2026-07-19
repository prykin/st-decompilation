TLOEmbryoTy::Create:
004D11D0  55                        PUSH EBP
004D11D1  8B EC                     MOV EBP,ESP
004D11D3  81 EC C8 00 00 00         SUB ESP,0xc8
004D11D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004D11DE  53                        PUSH EBX
004D11DF  56                        PUSH ESI
004D11E0  57                        PUSH EDI
004D11E1  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
004D11E4  33 FF                     XOR EDI,EDI
004D11E6  8D 95 3C FF FF FF         LEA EDX,[EBP + 0xffffff3c]
004D11EC  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
004D11F2  57                        PUSH EDI
004D11F3  52                        PUSH EDX
004D11F4  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004D11F7  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
004D11FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D1203  E8 E8 C5 25 00            CALL 0x0072d7f0
004D1208  8B F0                     MOV ESI,EAX
004D120A  83 C4 08                  ADD ESP,0x8
004D120D  3B F7                     CMP ESI,EDI
004D120F  0F 85 AA 10 00 00         JNZ 0x004d22bf
004D1215  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
004D1218  3B DF                     CMP EBX,EDI
004D121A  74 06                     JZ 0x004d1222
004D121C  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
LAB_004d1222:
004D1222  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004D1225  B9 1B 00 00 00            MOV ECX,0x1b
004D122A  F3 A5                     MOVSD.REP ES:EDI,ESI
004D122C  66 A5                     MOVSW ES:EDI,ESI
004D122E  A4                        MOVSB ES:EDI,ESI
004D122F  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
004D1235  83 E8 32                  SUB EAX,0x32
004D1238  89 83 68 03 00 00         MOV dword ptr [EBX + 0x368],EAX
004D123E  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004D1241  51                        PUSH ECX
004D1242  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D1248  E8 6A 37 F3 FF            CALL 0x004049b7
004D124D  25 FF 00 00 00            AND EAX,0xff
004D1252  48                        DEC EAX
004D1253  89 83 6C 03 00 00         MOV dword ptr [EBX + 0x36c],EAX
004D1259  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004D125C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D1262  52                        PUSH EDX
004D1263  E8 4F 37 F3 FF            CALL 0x004049b7
004D1268  33 C9                     XOR ECX,ECX
004D126A  3C 03                     CMP AL,0x3
004D126C  0F 94 C1                  SETZ CL
004D126F  8B C1                     MOV EAX,ECX
004D1271  85 C0                     TEST EAX,EAX
004D1273  89 83 70 03 00 00         MOV dword ptr [EBX + 0x370],EAX
004D1279  74 0C                     JZ 0x004d1287
004D127B  C7 83 64 03 00 00 08 77 79 00  MOV dword ptr [EBX + 0x364],0x797708
004D1285  EB 0A                     JMP 0x004d1291
LAB_004d1287:
004D1287  C7 83 64 03 00 00 C8 76 79 00  MOV dword ptr [EBX + 0x364],0x7976c8
LAB_004d1291:
004D1291  8B 93 68 03 00 00         MOV EDX,dword ptr [EBX + 0x368]
004D1297  8B 04 95 38 1F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x791f38]
004D129E  83 F8 02                  CMP EAX,0x2
004D12A1  75 0C                     JNZ 0x004d12af
004D12A3  C7 83 60 03 00 00 60 CA 7A 00  MOV dword ptr [EBX + 0x360],0x7aca60
004D12AD  EB 1B                     JMP 0x004d12ca
LAB_004d12af:
004D12AF  83 F8 01                  CMP EAX,0x1
004D12B2  75 0C                     JNZ 0x004d12c0
004D12B4  C7 83 60 03 00 00 00 CE 7A 00  MOV dword ptr [EBX + 0x360],0x7ace00
004D12BE  EB 0A                     JMP 0x004d12ca
LAB_004d12c0:
004D12C0  C7 83 60 03 00 00 88 C9 7A 00  MOV dword ptr [EBX + 0x360],0x7ac988
LAB_004d12ca:
004D12CA  6A 00                     PUSH 0x0
004D12CC  8B CB                     MOV ECX,EBX
004D12CE  E8 8A 18 F3 FF            CALL 0x00402b5d
004D12D3  66 8B 83 65 02 00 00      MOV AX,word ptr [EBX + 0x265]
004D12DA  66 8B 8B 61 02 00 00      MOV CX,word ptr [EBX + 0x261]
004D12E1  66 8B 93 5D 02 00 00      MOV DX,word ptr [EBX + 0x25d]
004D12E8  6A 01                     PUSH 0x1
004D12EA  50                        PUSH EAX
004D12EB  51                        PUSH ECX
004D12EC  52                        PUSH EDX
004D12ED  8B CB                     MOV ECX,EBX
004D12EF  E8 6B 16 F3 FF            CALL 0x0040295f
004D12F4  85 C0                     TEST EAX,EAX
004D12F6  74 14                     JZ 0x004d130c
004D12F8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004D12FD  6A 66                     PUSH 0x66
004D12FF  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1304  50                        PUSH EAX
004D1305  6A FB                     PUSH -0x5
004D1307  E8 34 4B 1D 00            CALL 0x006a5e40
LAB_004d130c:
004D130C  66 8B 8B 65 02 00 00      MOV CX,word ptr [EBX + 0x265]
004D1313  66 8B 93 61 02 00 00      MOV DX,word ptr [EBX + 0x261]
004D131A  66 8B 83 5D 02 00 00      MOV AX,word ptr [EBX + 0x25d]
004D1321  51                        PUSH ECX
004D1322  52                        PUSH EDX
004D1323  50                        PUSH EAX
004D1324  8B CB                     MOV ECX,EBX
004D1326  E8 63 14 F3 FF            CALL 0x0040278e
004D132B  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004D132E  83 E8 00                  SUB EAX,0x0
004D1331  74 0C                     JZ 0x004d133f
004D1333  48                        DEC EAX
004D1334  75 10                     JNZ 0x004d1346
004D1336  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
004D133D  EB 07                     JMP 0x004d1346
LAB_004d133f:
004D133F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_004d1346:
004D1346  8B BB 61 02 00 00         MOV EDI,dword ptr [EBX + 0x261]
004D134C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004D134F  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
004D1352  3B FA                     CMP EDI,EDX
004D1354  0F 8D CA 00 00 00         JGE 0x004d1424
LAB_004d135a:
004D135A  8B B3 5D 02 00 00         MOV ESI,dword ptr [EBX + 0x25d]
004D1360  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004D1363  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
004D1366  3B F1                     CMP ESI,ECX
004D1368  0F 8D A2 00 00 00         JGE 0x004d1410
LAB_004d136e:
004D136E  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004D1371  66 8B 83 65 02 00 00      MOV AX,word ptr [EBX + 0x265]
004D1378  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004D137E  52                        PUSH EDX
004D137F  50                        PUSH EAX
004D1380  57                        PUSH EDI
004D1381  56                        PUSH ESI
004D1382  E8 46 39 F3 FF            CALL 0x00404ccd
004D1387  66 8B 83 65 02 00 00      MOV AX,word ptr [EBX + 0x265]
004D138E  66 85 F6                  TEST SI,SI
004D1391  7C 51                     JL 0x004d13e4
004D1393  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
004D139A  66 3B F1                  CMP SI,CX
004D139D  7D 45                     JGE 0x004d13e4
004D139F  66 85 FF                  TEST DI,DI
004D13A2  7C 40                     JL 0x004d13e4
004D13A4  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
004D13AB  7D 37                     JGE 0x004d13e4
004D13AD  66 85 C0                  TEST AX,AX
004D13B0  7C 32                     JL 0x004d13e4
004D13B2  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004D13B9  7D 29                     JGE 0x004d13e4
004D13BB  0F BF D7                  MOVSX EDX,DI
004D13BE  0F BF C9                  MOVSX ECX,CX
004D13C1  0F AF D1                  IMUL EDX,ECX
004D13C4  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004D13CB  0F BF C0                  MOVSX EAX,AX
004D13CE  0F AF C1                  IMUL EAX,ECX
004D13D1  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004D13D7  03 D0                     ADD EDX,EAX
004D13D9  0F BF C6                  MOVSX EAX,SI
004D13DC  03 D0                     ADD EDX,EAX
004D13DE  8B 4C D1 04               MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
004D13E2  EB 02                     JMP 0x004d13e6
LAB_004d13e4:
004D13E4  33 C9                     XOR ECX,ECX
LAB_004d13e6:
004D13E6  85 C9                     TEST ECX,ECX
004D13E8  74 12                     JZ 0x004d13fc
004D13EA  81 79 20 BE 00 00 00      CMP dword ptr [ECX + 0x20],0xbe
004D13F1  75 09                     JNZ 0x004d13fc
004D13F3  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004D13F6  52                        PUSH EDX
004D13F7  E8 40 38 F3 FF            CALL 0x00404c3c
LAB_004d13fc:
004D13FC  8B 83 5D 02 00 00         MOV EAX,dword ptr [EBX + 0x25d]
004D1402  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004D1405  46                        INC ESI
004D1406  03 C2                     ADD EAX,EDX
004D1408  3B F0                     CMP ESI,EAX
004D140A  0F 8C 5E FF FF FF         JL 0x004d136e
LAB_004d1410:
004D1410  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
004D1416  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004D1419  47                        INC EDI
004D141A  03 CA                     ADD ECX,EDX
004D141C  3B F9                     CMP EDI,ECX
004D141E  0F 8C 36 FF FF FF         JL 0x004d135a
LAB_004d1424:
004D1424  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004D1427  33 FF                     XOR EDI,EDI
004D1429  2B C7                     SUB EAX,EDI
004D142B  74 2D                     JZ 0x004d145a
004D142D  48                        DEC EAX
004D142E  75 52                     JNZ 0x004d1482
004D1430  C7 83 F8 02 00 00 F0 00 00 00  MOV dword ptr [EBX + 0x2f8],0xf0
004D143A  C7 83 FC 02 00 00 BE 00 00 00  MOV dword ptr [EBX + 0x2fc],0xbe
004D1444  C7 83 00 03 00 00 78 00 00 00  MOV dword ptr [EBX + 0x300],0x78
004D144E  C7 83 04 03 00 00 56 00 00 00  MOV dword ptr [EBX + 0x304],0x56
004D1458  EB 28                     JMP 0x004d1482
LAB_004d145a:
004D145A  C7 83 F8 02 00 00 B4 00 00 00  MOV dword ptr [EBX + 0x2f8],0xb4
004D1464  C7 83 FC 02 00 00 8C 00 00 00  MOV dword ptr [EBX + 0x2fc],0x8c
004D146E  C7 83 00 03 00 00 5A 00 00 00  MOV dword ptr [EBX + 0x300],0x5a
004D1478  C7 83 04 03 00 00 45 00 00 00  MOV dword ptr [EBX + 0x304],0x45
LAB_004d1482:
004D1482  83 BB 59 02 00 00 5C      CMP dword ptr [EBX + 0x259],0x5c
004D1489  75 1C                     JNZ 0x004d14a7
004D148B  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D148E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D1491  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004D1494  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004D1497  C1 E2 04                  SHL EDX,0x4
004D149A  03 D0                     ADD EDX,EAX
004D149C  C7 04 55 EA 57 7F 00 01 00 00 00  MOV dword ptr [EDX*0x2 + 0x7f57ea],0x1
LAB_004d14a7:
004D14A7  A1 70 A1 7F 00            MOV EAX,[0x007fa170]
004D14AC  3B C7                     CMP EAX,EDI
004D14AE  75 11                     JNZ 0x004d14c1
004D14B0  6A 0A                     PUSH 0xa
004D14B2  6A 04                     PUSH 0x4
004D14B4  6A 0A                     PUSH 0xa
004D14B6  57                        PUSH EDI
004D14B7  E8 D4 CD 1D 00            CALL 0x006ae290
004D14BC  A3 70 A1 7F 00            MOV [0x007fa170],EAX
LAB_004d14c1:
004D14C1  8D 4D D8                  LEA ECX,[EBP + -0x28]
004D14C4  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
004D14C7  51                        PUSH ECX
004D14C8  50                        PUSH EAX
004D14C9  E8 F2 CC 1D 00            CALL 0x006ae1c0
004D14CE  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
004D14D4  83 F8 64                  CMP EAX,0x64
004D14D7  75 62                     JNZ 0x004d153b
004D14D9  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D14DC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D14DF  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004D14E2  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004D14E5  C1 E2 04                  SHL EDX,0x4
004D14E8  03 D0                     ADD EDX,EAX
004D14EA  39 3C 55 F6 57 7F 00      CMP dword ptr [EDX*0x2 + 0x7f57f6],EDI
004D14F1  75 24                     JNZ 0x004d1517
004D14F3  6A 0A                     PUSH 0xa
004D14F5  6A 04                     PUSH 0x4
004D14F7  6A 0A                     PUSH 0xa
004D14F9  57                        PUSH EDI
004D14FA  E8 91 CD 1D 00            CALL 0x006ae290
004D14FF  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D1502  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D1505  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D1508  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D150B  C1 E2 04                  SHL EDX,0x4
004D150E  03 D1                     ADD EDX,ECX
004D1510  89 04 55 F6 57 7F 00      MOV dword ptr [EDX*0x2 + 0x7f57f6],EAX
LAB_004d1517:
004D1517  8D 45 FC                  LEA EAX,[EBP + -0x4]
004D151A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004D151D  50                        PUSH EAX
004D151E  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1521  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D1524  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D1527  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D152A  C1 E1 04                  SHL ECX,0x4
004D152D  03 C8                     ADD ECX,EAX
004D152F  8B 14 4D F6 57 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f57f6]
004D1536  E9 27 02 00 00            JMP 0x004d1762
LAB_004d153b:
004D153B  83 F8 4D                  CMP EAX,0x4d
004D153E  75 62                     JNZ 0x004d15a2
004D1540  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1543  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D1546  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D1549  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D154C  C1 E1 04                  SHL ECX,0x4
004D154F  03 C8                     ADD ECX,EAX
004D1551  39 3C 4D 02 58 7F 00      CMP dword ptr [ECX*0x2 + 0x7f5802],EDI
004D1558  75 24                     JNZ 0x004d157e
004D155A  6A 0A                     PUSH 0xa
004D155C  6A 04                     PUSH 0x4
004D155E  6A 0A                     PUSH 0xa
004D1560  57                        PUSH EDI
004D1561  E8 2A CD 1D 00            CALL 0x006ae290
004D1566  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D1569  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D156C  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D156F  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D1572  C1 E2 04                  SHL EDX,0x4
004D1575  03 D1                     ADD EDX,ECX
004D1577  89 04 55 02 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5802],EAX
LAB_004d157e:
004D157E  8D 45 C4                  LEA EAX,[EBP + -0x3c]
004D1581  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
004D1584  50                        PUSH EAX
004D1585  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1588  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D158B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D158E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D1591  C1 E1 04                  SHL ECX,0x4
004D1594  03 C8                     ADD ECX,EAX
004D1596  8B 14 4D 02 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5802]
004D159D  E9 C0 01 00 00            JMP 0x004d1762
LAB_004d15a2:
004D15A2  83 F8 43                  CMP EAX,0x43
004D15A5  75 62                     JNZ 0x004d1609
004D15A7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D15AA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D15AD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D15B0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D15B3  C1 E1 04                  SHL ECX,0x4
004D15B6  03 C8                     ADD ECX,EAX
004D15B8  39 3C 4D 0E 58 7F 00      CMP dword ptr [ECX*0x2 + 0x7f580e],EDI
004D15BF  75 24                     JNZ 0x004d15e5
004D15C1  6A 0A                     PUSH 0xa
004D15C3  6A 04                     PUSH 0x4
004D15C5  6A 0A                     PUSH 0xa
004D15C7  57                        PUSH EDI
004D15C8  E8 C3 CC 1D 00            CALL 0x006ae290
004D15CD  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D15D0  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D15D3  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D15D6  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D15D9  C1 E2 04                  SHL EDX,0x4
004D15DC  03 D1                     ADD EDX,ECX
004D15DE  89 04 55 0E 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f580e],EAX
LAB_004d15e5:
004D15E5  8D 45 C0                  LEA EAX,[EBP + -0x40]
004D15E8  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
004D15EB  50                        PUSH EAX
004D15EC  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D15EF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D15F2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D15F5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D15F8  C1 E1 04                  SHL ECX,0x4
004D15FB  03 C8                     ADD ECX,EAX
004D15FD  8B 14 4D 0E 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f580e]
004D1604  E9 59 01 00 00            JMP 0x004d1762
LAB_004d1609:
004D1609  83 F8 73                  CMP EAX,0x73
004D160C  75 62                     JNZ 0x004d1670
004D160E  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1611  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D1614  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D1617  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D161A  C1 E1 04                  SHL ECX,0x4
004D161D  03 C8                     ADD ECX,EAX
004D161F  39 3C 4D 12 58 7F 00      CMP dword ptr [ECX*0x2 + 0x7f5812],EDI
004D1626  75 24                     JNZ 0x004d164c
004D1628  6A 0A                     PUSH 0xa
004D162A  6A 04                     PUSH 0x4
004D162C  6A 0A                     PUSH 0xa
004D162E  57                        PUSH EDI
004D162F  E8 5C CC 1D 00            CALL 0x006ae290
004D1634  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D1637  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D163A  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D163D  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D1640  C1 E2 04                  SHL EDX,0x4
004D1643  03 D1                     ADD EDX,ECX
004D1645  89 04 55 12 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5812],EAX
LAB_004d164c:
004D164C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004D164F  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
004D1652  50                        PUSH EAX
004D1653  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1656  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D1659  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D165C  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D165F  C1 E1 04                  SHL ECX,0x4
004D1662  03 C8                     ADD ECX,EAX
004D1664  8B 14 4D 12 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5812]
004D166B  E9 F2 00 00 00            JMP 0x004d1762
LAB_004d1670:
004D1670  83 F8 3A                  CMP EAX,0x3a
004D1673  75 27                     JNZ 0x004d169c
004D1675  A1 6C A1 7F 00            MOV EAX,[0x007fa16c]
004D167A  3B C7                     CMP EAX,EDI
004D167C  75 11                     JNZ 0x004d168f
004D167E  6A 0A                     PUSH 0xa
004D1680  6A 04                     PUSH 0x4
004D1682  6A 0A                     PUSH 0xa
004D1684  57                        PUSH EDI
004D1685  E8 06 CC 1D 00            CALL 0x006ae290
004D168A  A3 6C A1 7F 00            MOV [0x007fa16c],EAX
LAB_004d168f:
004D168F  8D 4D BC                  LEA ECX,[EBP + -0x44]
004D1692  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
004D1695  51                        PUSH ECX
004D1696  50                        PUSH EAX
004D1697  E9 C7 00 00 00            JMP 0x004d1763
LAB_004d169c:
004D169C  83 F8 65                  CMP EAX,0x65
004D169F  75 5F                     JNZ 0x004d1700
004D16A1  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D16A4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D16A7  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004D16AA  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004D16AD  C1 E2 04                  SHL EDX,0x4
004D16B0  03 D0                     ADD EDX,EAX
004D16B2  39 3C 55 06 58 7F 00      CMP dword ptr [EDX*0x2 + 0x7f5806],EDI
004D16B9  75 24                     JNZ 0x004d16df
004D16BB  6A 0A                     PUSH 0xa
004D16BD  6A 04                     PUSH 0x4
004D16BF  6A 0A                     PUSH 0xa
004D16C1  57                        PUSH EDI
004D16C2  E8 C9 CB 1D 00            CALL 0x006ae290
004D16C7  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D16CA  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D16CD  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D16D0  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D16D3  C1 E2 04                  SHL EDX,0x4
004D16D6  03 D1                     ADD EDX,ECX
004D16D8  89 04 55 06 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5806],EAX
LAB_004d16df:
004D16DF  8D 45 D0                  LEA EAX,[EBP + -0x30]
004D16E2  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
004D16E5  50                        PUSH EAX
004D16E6  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D16E9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D16EC  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D16EF  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D16F2  C1 E1 04                  SHL ECX,0x4
004D16F5  03 C8                     ADD ECX,EAX
004D16F7  8B 14 4D 06 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f5806]
004D16FE  EB 62                     JMP 0x004d1762
LAB_004d1700:
004D1700  83 F8 3B                  CMP EAX,0x3b
004D1703  75 63                     JNZ 0x004d1768
004D1705  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D1708  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D170B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D170E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D1711  C1 E1 04                  SHL ECX,0x4
004D1714  03 C8                     ADD ECX,EAX
004D1716  39 3C 4D 0A 58 7F 00      CMP dword ptr [ECX*0x2 + 0x7f580a],EDI
004D171D  75 24                     JNZ 0x004d1743
004D171F  6A 0A                     PUSH 0xa
004D1721  6A 04                     PUSH 0x4
004D1723  6A 0A                     PUSH 0xa
004D1725  57                        PUSH EDI
004D1726  E8 65 CB 1D 00            CALL 0x006ae290
004D172B  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004D172E  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004D1731  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
004D1734  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
004D1737  C1 E2 04                  SHL EDX,0x4
004D173A  03 D1                     ADD EDX,ECX
004D173C  89 04 55 0A 58 7F 00      MOV dword ptr [EDX*0x2 + 0x7f580a],EAX
LAB_004d1743:
004D1743  8D 45 CC                  LEA EAX,[EBP + -0x34]
004D1746  89 5D CC                  MOV dword ptr [EBP + -0x34],EBX
004D1749  50                        PUSH EAX
004D174A  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004D174D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D1750  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D1753  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D1756  C1 E1 04                  SHL ECX,0x4
004D1759  03 C8                     ADD ECX,EAX
004D175B  8B 14 4D 0A 58 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f580a]
LAB_004d1762:
004D1762  52                        PUSH EDX
TLOEmbryoTy::Create::cf_common_join_004D1763:
004D1763  E8 58 CA 1D 00            CALL 0x006ae1c0
LAB_004d1768:
004D1768  8B 83 3D 02 00 00         MOV EAX,dword ptr [EBX + 0x23d]
004D176E  48                        DEC EAX
004D176F  0F 84 55 03 00 00         JZ 0x004d1aca
004D1775  48                        DEC EAX
004D1776  74 2C                     JZ 0x004d17a4
004D1778  68 98 F4 7B 00            PUSH 0x7bf498
004D177D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D1782  57                        PUSH EDI
004D1783  57                        PUSH EDI
004D1784  68 60 01 00 00            PUSH 0x160
004D1789  68 BC F4 7B 00            PUSH 0x7bf4bc
004D178E  E8 3D BD 1D 00            CALL 0x006ad4d0
004D1793  83 C4 18                  ADD ESP,0x18
004D1796  85 C0                     TEST EAX,EAX
004D1798  0F 84 03 0B 00 00         JZ 0x004d22a1
004D179E  CC                        INT3
LAB_004d17a4:
004D17A4  3B DF                     CMP EBX,EDI
004D17A6  74 06                     JZ 0x004d17ae
004D17A8  8D BB A0 02 00 00         LEA EDI,[EBX + 0x2a0]
LAB_004d17ae:
004D17AE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D17B1  B9 2C 00 00 00            MOV ECX,0x2c
004D17B6  6A 44                     PUSH 0x44
004D17B8  8D 70 6F                  LEA ESI,[EAX + 0x6f]
004D17BB  F3 A5                     MOVSD.REP ES:EDI,ESI
004D17BD  E8 AE 94 1D 00            CALL 0x006aac70
004D17C2  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004D17C8  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004D17CB  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004D17CE  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D17D1  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004D17D7  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
004D17DA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004D17DD  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004D17E3  89 0A                     MOV dword ptr [EDX],ECX
004D17E5  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D17E8  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004D17EE  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
004D17F1  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D17F4  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D17FA  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
004D17FD  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004D1800  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D1806  89 4A 38                  MOV dword ptr [EDX + 0x38],ECX
004D1809  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004D180C  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D1811  89 41 34                  MOV dword ptr [ECX + 0x34],EAX
004D1814  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004D1817  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D181C  89 42 30                  MOV dword ptr [EDX + 0x30],EAX
004D181F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004D1822  C7 41 2C 00 00 00 00      MOV dword ptr [ECX + 0x2c],0x0
004D1829  8B 93 F4 02 00 00         MOV EDX,dword ptr [EBX + 0x2f4]
004D182F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004D1832  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D1837  89 04 91                  MOV dword ptr [ECX + EDX*0x4],EAX
004D183A  8B 93 F0 02 00 00         MOV EDX,dword ptr [EBX + 0x2f0]
004D1840  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D1843  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D1849  89 0C 90                  MOV dword ptr [EAX + EDX*0x4],ECX
004D184C  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D1852  85 C0                     TEST EAX,EAX
004D1854  74 13                     JZ 0x004d1869
004D1856  8B 93 F0 02 00 00         MOV EDX,dword ptr [EBX + 0x2f0]
004D185C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D185F  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D1865  89 4C 90 FC               MOV dword ptr [EAX + EDX*0x4 + -0x4],ECX
LAB_004d1869:
004D1869  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
004D186F  33 FF                     XOR EDI,EDI
004D1871  3B C7                     CMP EAX,EDI
004D1873  74 17                     JZ 0x004d188c
004D1875  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004D1878  A1 64 67 80 00            MOV EAX,[0x00806764]
004D187D  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
004D1880  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004D1883  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004D1889  89 51 18                  MOV dword ptr [ECX + 0x18],EDX
LAB_004d188c:
004D188C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004D188F  A1 CC 73 80 00            MOV EAX,[0x008073cc]
004D1894  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004D1897  8D 45 DC                  LEA EAX,[EBP + -0x24]
004D189A  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
004D18A0  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004D18A6  03 D6                     ADD EDX,ESI
004D18A8  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004D18AB  52                        PUSH EDX
004D18AC  50                        PUSH EAX
004D18AD  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004D18B0  E8 F0 33 F3 FF            CALL 0x00404ca5
004D18B5  6A 40                     PUSH 0x40
004D18B7  E8 74 CC 25 00            CALL 0x0072e530
004D18BC  83 C4 04                  ADD ESP,0x4
004D18BF  3B C7                     CMP EAX,EDI
004D18C1  74 09                     JZ 0x004d18cc
004D18C3  8B C8                     MOV ECX,EAX
004D18C5  E8 4C FA F2 FF            CALL 0x00401316
004D18CA  EB 02                     JMP 0x004d18ce
LAB_004d18cc:
004D18CC  33 C0                     XOR EAX,EAX
LAB_004d18ce:
004D18CE  8B 8B FC 02 00 00         MOV ECX,dword ptr [EBX + 0x2fc]
004D18D4  8B 93 F8 02 00 00         MOV EDX,dword ptr [EBX + 0x2f8]
004D18DA  6A 11                     PUSH 0x11
004D18DC  51                        PUSH ECX
004D18DD  8B 8B 04 03 00 00         MOV ECX,dword ptr [EBX + 0x304]
004D18E3  52                        PUSH EDX
004D18E4  8B 93 00 03 00 00         MOV EDX,dword ptr [EBX + 0x300]
004D18EA  57                        PUSH EDI
004D18EB  89 83 5C 03 00 00         MOV dword ptr [EBX + 0x35c],EAX
004D18F1  51                        PUSH ECX
004D18F2  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D18F8  52                        PUSH EDX
004D18F9  51                        PUSH ECX
004D18FA  8B C8                     MOV ECX,EAX
004D18FC  E8 7A 3A F3 FF            CALL 0x0040537b
004D1901  3B C7                     CMP EAX,EDI
004D1903  74 17                     JZ 0x004d191c
004D1905  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D190B  68 3D 01 00 00            PUSH 0x13d
004D1910  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1915  52                        PUSH EDX
004D1916  50                        PUSH EAX
004D1917  E8 24 45 1D 00            CALL 0x006a5e40
LAB_004d191c:
004D191C  83 7B 2C 01               CMP dword ptr [EBX + 0x2c],0x1
004D1920  75 1F                     JNZ 0x004d1941
004D1922  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1928  68 CD CC DC 40            PUSH 0x40dccccd
004D192D  57                        PUSH EDI
004D192E  57                        PUSH EDI
004D192F  57                        PUSH EDI
004D1930  E8 97 39 F3 FF            CALL 0x004052cc
004D1935  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D193B  50                        PUSH EAX
004D193C  E8 CF 78 21 00            CALL 0x006e9210
LAB_004d1941:
004D1941  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004D1944  B9 11 00 00 00            MOV ECX,0x11
004D1949  33 C0                     XOR EAX,EAX
004D194B  F3 AB                     STOSD.REP ES:EDI
004D194D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004D1950  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
004D1956  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
004D1959  8B 96 33 01 00 00         MOV EDX,dword ptr [ESI + 0x133]
004D195F  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1965  33 C0                     XOR EAX,EAX
004D1967  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004D196A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D196D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004D1970  03 D6                     ADD EDX,ESI
004D1972  8D 45 DC                  LEA EAX,[EBP + -0x24]
004D1975  52                        PUSH EDX
004D1976  50                        PUSH EAX
004D1977  E8 29 33 F3 FF            CALL 0x00404ca5
004D197C  8B 8B F4 02 00 00         MOV ECX,dword ptr [EBX + 0x2f4]
004D1982  51                        PUSH ECX
004D1983  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004D1989  E8 3E 39 F3 FF            CALL 0x004052cc
004D198E  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1994  50                        PUSH EAX
004D1995  E8 32 39 F3 FF            CALL 0x004052cc
004D199A  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D19A0  50                        PUSH EAX
004D19A1  E8 9A 89 21 00            CALL 0x006ea340
004D19A6  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004D19A9  B9 11 00 00 00            MOV ECX,0x11
004D19AE  33 C0                     XOR EAX,EAX
004D19B0  F3 AB                     STOSD.REP ES:EDI
004D19B2  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004D19B5  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D19BA  89 42 38                  MOV dword ptr [EDX + 0x38],EAX
004D19BD  8B 8B 70 03 00 00         MOV ECX,dword ptr [EBX + 0x370]
004D19C3  33 C0                     XOR EAX,EAX
004D19C5  3B C8                     CMP ECX,EAX
004D19C7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004D19CA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D19CD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004D19D0  0F 85 CA 00 00 00         JNZ 0x004d1aa0
004D19D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D19D9  BE 0B 00 00 00            MOV ESI,0xb
004D19DE  81 C1 43 01 00 00         ADD ECX,0x143
004D19E4  8D BB 50 03 00 00         LEA EDI,[EBX + 0x350]
004D19EA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004d19ed:
004D19ED  6A 40                     PUSH 0x40
004D19EF  E8 3C CB 25 00            CALL 0x0072e530
004D19F4  83 C4 04                  ADD ESP,0x4
004D19F7  85 C0                     TEST EAX,EAX
004D19F9  74 09                     JZ 0x004d1a04
004D19FB  8B C8                     MOV ECX,EAX
004D19FD  E8 14 F9 F2 FF            CALL 0x00401316
004D1A02  EB 02                     JMP 0x004d1a06
LAB_004d1a04:
004D1A04  33 C0                     XOR EAX,EAX
LAB_004d1a06:
004D1A06  89 07                     MOV dword ptr [EDI],EAX
004D1A08  8B 93 FC 02 00 00         MOV EDX,dword ptr [EBX + 0x2fc]
004D1A0E  8B 8B F8 02 00 00         MOV ECX,dword ptr [EBX + 0x2f8]
004D1A14  6A 11                     PUSH 0x11
004D1A16  52                        PUSH EDX
004D1A17  8B 93 04 03 00 00         MOV EDX,dword ptr [EBX + 0x304]
004D1A1D  51                        PUSH ECX
004D1A1E  8B 8B 00 03 00 00         MOV ECX,dword ptr [EBX + 0x300]
004D1A24  6A 00                     PUSH 0x0
004D1A26  52                        PUSH EDX
004D1A27  8B 15 CC 73 80 00         MOV EDX,dword ptr [0x008073cc]
004D1A2D  51                        PUSH ECX
004D1A2E  52                        PUSH EDX
004D1A2F  8B C8                     MOV ECX,EAX
004D1A31  E8 45 39 F3 FF            CALL 0x0040537b
004D1A36  85 C0                     TEST EAX,EAX
004D1A38  74 17                     JZ 0x004d1a51
004D1A3A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1A40  68 52 01 00 00            PUSH 0x152
004D1A45  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1A4A  51                        PUSH ECX
004D1A4B  50                        PUSH EAX
004D1A4C  E8 EF 43 1D 00            CALL 0x006a5e40
LAB_004d1a51:
004D1A51  56                        PUSH ESI
004D1A52  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
004D1A58  E8 6F 38 F3 FF            CALL 0x004052cc
004D1A5D  8B 0F                     MOV ECX,dword ptr [EDI]
004D1A5F  50                        PUSH EAX
004D1A60  E8 67 38 F3 FF            CALL 0x004052cc
004D1A65  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D1A6B  50                        PUSH EAX
004D1A6C  E8 CF 88 21 00            CALL 0x006ea340
004D1A71  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D1A74  8D 4D DC                  LEA ECX,[EBP + -0x24]
004D1A77  8B 02                     MOV EAX,dword ptr [EDX]
004D1A79  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D1A7C  03 C2                     ADD EAX,EDX
004D1A7E  50                        PUSH EAX
004D1A7F  51                        PUSH ECX
004D1A80  8B 0F                     MOV ECX,dword ptr [EDI]
004D1A82  E8 1E 32 F3 FF            CALL 0x00404ca5
004D1A87  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004D1A8A  4E                        DEC ESI
004D1A8B  83 C2 04                  ADD EDX,0x4
004D1A8E  83 C7 04                  ADD EDI,0x4
004D1A91  83 FE 08                  CMP ESI,0x8
004D1A94  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D1A97  0F 8F 50 FF FF FF         JG 0x004d19ed
004D1A9D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004d1aa0:
004D1AA0  8D 55 DC                  LEA EDX,[EBP + -0x24]
004D1AA3  52                        PUSH EDX
004D1AA4  E8 B7 95 1D 00            CALL 0x006ab060
004D1AA9  8B 86 23 01 00 00         MOV EAX,dword ptr [ESI + 0x123]
004D1AAF  8B CB                     MOV ECX,EBX
004D1AB1  03 C6                     ADD EAX,ESI
004D1AB3  50                        PUSH EAX
004D1AB4  E8 66 3A F3 FF            CALL 0x0040551f
004D1AB9  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
004D1ABD  51                        PUSH ECX
004D1ABE  8B CB                     MOV ECX,EBX
004D1AC0  E8 31 27 F3 FF            CALL 0x004041f6
004D1AC5  E9 D7 07 00 00            JMP 0x004d22a1
LAB_004d1aca:
004D1ACA  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D1AD0  6A 40                     PUSH 0x40
004D1AD2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D1AD8  89 83 AC 02 00 00         MOV dword ptr [EBX + 0x2ac],EAX
004D1ADE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D1AE4  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D1AEA  C7 83 B4 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2b4],0x1
004D1AF4  89 93 B0 02 00 00         MOV dword ptr [EBX + 0x2b0],EDX
004D1AFA  89 BB A4 02 00 00         MOV dword ptr [EBX + 0x2a4],EDI
004D1B00  E8 2B CA 25 00            CALL 0x0072e530
004D1B05  83 C4 04                  ADD ESP,0x4
004D1B08  3B C7                     CMP EAX,EDI
004D1B0A  74 09                     JZ 0x004d1b15
004D1B0C  8B C8                     MOV ECX,EAX
004D1B0E  E8 03 F8 F2 FF            CALL 0x00401316
004D1B13  EB 02                     JMP 0x004d1b17
LAB_004d1b15:
004D1B15  33 C0                     XOR EAX,EAX
LAB_004d1b17:
004D1B17  8B 8B FC 02 00 00         MOV ECX,dword ptr [EBX + 0x2fc]
004D1B1D  8B 93 F8 02 00 00         MOV EDX,dword ptr [EBX + 0x2f8]
004D1B23  6A 11                     PUSH 0x11
004D1B25  51                        PUSH ECX
004D1B26  8B 8B 04 03 00 00         MOV ECX,dword ptr [EBX + 0x304]
004D1B2C  52                        PUSH EDX
004D1B2D  8B 93 00 03 00 00         MOV EDX,dword ptr [EBX + 0x300]
004D1B33  57                        PUSH EDI
004D1B34  89 83 5C 03 00 00         MOV dword ptr [EBX + 0x35c],EAX
004D1B3A  51                        PUSH ECX
004D1B3B  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D1B41  52                        PUSH EDX
004D1B42  51                        PUSH ECX
004D1B43  8B C8                     MOV ECX,EAX
004D1B45  E8 31 38 F3 FF            CALL 0x0040537b
004D1B4A  3B C7                     CMP EAX,EDI
004D1B4C  74 17                     JZ 0x004d1b65
004D1B4E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D1B54  68 C8 00 00 00            PUSH 0xc8
004D1B59  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1B5E  52                        PUSH EDX
004D1B5F  50                        PUSH EAX
004D1B60  E8 DB 42 1D 00            CALL 0x006a5e40
LAB_004d1b65:
004D1B65  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
004D1B6B  2B C7                     SUB EAX,EDI
004D1B6D  74 47                     JZ 0x004d1bb6
004D1B6F  48                        DEC EAX
004D1B70  75 7A                     JNZ 0x004d1bec
004D1B72  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1B78  68 CD CC DC 40            PUSH 0x40dccccd
004D1B7D  57                        PUSH EDI
004D1B7E  57                        PUSH EDI
004D1B7F  57                        PUSH EDI
004D1B80  E8 47 37 F3 FF            CALL 0x004052cc
004D1B85  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D1B8B  50                        PUSH EAX
004D1B8C  E8 7F 76 21 00            CALL 0x006e9210
004D1B91  A1 64 67 80 00            MOV EAX,[0x00806764]
004D1B96  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1B9C  6A 1D                     PUSH 0x1d
004D1B9E  68 70 D4 7A 00            PUSH 0x7ad470
004D1BA3  50                        PUSH EAX
004D1BA4  6A 0E                     PUSH 0xe
004D1BA6  E8 D8 25 F3 FF            CALL 0x00404183
004D1BAB  3B C7                     CMP EAX,EDI
004D1BAD  74 3D                     JZ 0x004d1bec
004D1BAF  68 CC 00 00 00            PUSH 0xcc
004D1BB4  EB 24                     JMP 0x004d1bda
LAB_004d1bb6:
004D1BB6  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
004D1BBC  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1BC2  6A 1D                     PUSH 0x1d
004D1BC4  68 64 D4 7A 00            PUSH 0x7ad464
004D1BC9  52                        PUSH EDX
004D1BCA  6A 0E                     PUSH 0xe
004D1BCC  E8 B2 25 F3 FF            CALL 0x00404183
004D1BD1  3B C7                     CMP EAX,EDI
004D1BD3  74 17                     JZ 0x004d1bec
004D1BD5  68 CA 00 00 00            PUSH 0xca
LAB_004d1bda:
004D1BDA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1BE0  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1BE5  51                        PUSH ECX
004D1BE6  50                        PUSH EAX
004D1BE7  E8 54 42 1D 00            CALL 0x006a5e40
LAB_004d1bec:
004D1BEC  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D1BF2  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
004D1BF8  F7 D8                     NEG EAX
004D1BFA  1B C0                     SBB EAX,EAX
004D1BFC  8B CE                     MOV ECX,ESI
004D1BFE  83 E0 04                  AND EAX,0x4
004D1C01  83 C0 07                  ADD EAX,0x7
004D1C04  50                        PUSH EAX
004D1C05  89 83 F4 02 00 00         MOV dword ptr [EBX + 0x2f4],EAX
004D1C0B  E8 BC 36 F3 FF            CALL 0x004052cc
004D1C10  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1C16  50                        PUSH EAX
004D1C17  E8 B0 36 F3 FF            CALL 0x004052cc
004D1C1C  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D1C22  50                        PUSH EAX
004D1C23  E8 18 87 21 00            CALL 0x006ea340
004D1C28  8B 93 01 02 00 00         MOV EDX,dword ptr [EBX + 0x201]
004D1C2E  8B 83 FD 01 00 00         MOV EAX,dword ptr [EBX + 0x1fd]
004D1C34  8B 8B F9 01 00 00         MOV ECX,dword ptr [EBX + 0x1f9]
004D1C3A  52                        PUSH EDX
004D1C3B  50                        PUSH EAX
004D1C3C  51                        PUSH ECX
004D1C3D  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1C43  E8 91 29 F3 FF            CALL 0x004045d9
004D1C48  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D1C4E  E8 C9 3B F3 FF            CALL 0x0040581c
004D1C53  25 01 00 00 80            AND EAX,0x80000001
004D1C58  79 05                     JNS 0x004d1c5f
004D1C5A  48                        DEC EAX
004D1C5B  83 C8 FE                  OR EAX,0xfffffffe
004D1C5E  40                        INC EAX
LAB_004d1c5f:
004D1C5F  8B 93 6C 03 00 00         MOV EDX,dword ptr [EBX + 0x36c]
004D1C65  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
004D1C6B  50                        PUSH EAX
004D1C6C  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
004D1C72  8B 04 95 E8 F3 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7bf3e8]
004D1C79  50                        PUSH EAX
004D1C7A  68 08 C9 7A 00            PUSH 0x7ac908
004D1C7F  51                        PUSH ECX
004D1C80  FF D7                     CALL EDI
004D1C82  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004D1C87  83 C4 10                  ADD ESP,0x10
004D1C8A  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
004D1C90  8B CE                     MOV ECX,ESI
004D1C92  6A 1D                     PUSH 0x1d
004D1C94  52                        PUSH EDX
004D1C95  50                        PUSH EAX
004D1C96  6A 0E                     PUSH 0xe
004D1C98  E8 E6 24 F3 FF            CALL 0x00404183
004D1C9D  85 C0                     TEST EAX,EAX
004D1C9F  74 17                     JZ 0x004d1cb8
004D1CA1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1CA7  68 D4 00 00 00            PUSH 0xd4
004D1CAC  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1CB1  51                        PUSH ECX
004D1CB2  50                        PUSH EAX
004D1CB3  E8 88 41 1D 00            CALL 0x006a5e40
LAB_004d1cb8:
004D1CB8  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D1CBE  85 C0                     TEST EAX,EAX
004D1CC0  0F 84 29 03 00 00         JZ 0x004d1fef
004D1CC6  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
004D1CCC  83 F9 6C                  CMP ECX,0x6c
004D1CCF  75 0D                     JNZ 0x004d1cde
004D1CD1  83 BB 51 02 00 00 03      CMP dword ptr [EBX + 0x251],0x3
004D1CD8  0F 84 96 01 00 00         JZ 0x004d1e74
LAB_004d1cde:
004D1CDE  83 F9 54                  CMP ECX,0x54
004D1CE1  7C 09                     JL 0x004d1cec
004D1CE3  83 F9 5A                  CMP ECX,0x5a
004D1CE6  0F 8E 88 01 00 00         JLE 0x004d1e74
LAB_004d1cec:
004D1CEC  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
004D1CF2  83 E8 00                  SUB EAX,0x0
004D1CF5  0F 84 85 00 00 00         JZ 0x004d1d80
004D1CFB  48                        DEC EAX
004D1CFC  0F 85 08 01 00 00         JNZ 0x004d1e0a
004D1D02  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D1D08  6A 1D                     PUSH 0x1d
004D1D0A  68 8C F4 7B 00            PUSH 0x7bf48c
004D1D0F  52                        PUSH EDX
004D1D10  6A 09                     PUSH 0x9
004D1D12  8B CE                     MOV ECX,ESI
004D1D14  E8 6A 24 F3 FF            CALL 0x00404183
004D1D19  85 C0                     TEST EAX,EAX
004D1D1B  74 17                     JZ 0x004d1d34
004D1D1D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1D23  68 DF 00 00 00            PUSH 0xdf
004D1D28  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1D2D  51                        PUSH ECX
004D1D2E  50                        PUSH EAX
004D1D2F  E8 0C 41 1D 00            CALL 0x006a5e40
LAB_004d1d34:
004D1D34  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004D1D37  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
004D1D3D  52                        PUSH EDX
004D1D3E  68 7C F4 7B 00            PUSH 0x7bf47c
004D1D43  50                        PUSH EAX
004D1D44  FF D7                     CALL EDI
004D1D46  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D1D4C  83 C4 0C                  ADD ESP,0xc
004D1D4F  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D1D55  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
004D1D5B  F7 D8                     NEG EAX
004D1D5D  1A C0                     SBB AL,AL
004D1D5F  6A 1D                     PUSH 0x1d
004D1D61  24 03                     AND AL,0x3
004D1D63  51                        PUSH ECX
004D1D64  04 06                     ADD AL,0x6
004D1D66  52                        PUSH EDX
004D1D67  FE C8                     DEC AL
004D1D69  8B CE                     MOV ECX,ESI
004D1D6B  50                        PUSH EAX
004D1D6C  E8 12 24 F3 FF            CALL 0x00404183
004D1D71  85 C0                     TEST EAX,EAX
004D1D73  0F 84 91 00 00 00         JZ 0x004d1e0a
004D1D79  68 E1 00 00 00            PUSH 0xe1
004D1D7E  EB 78                     JMP 0x004d1df8
LAB_004d1d80:
004D1D80  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D1D86  6A 1D                     PUSH 0x1d
004D1D88  68 70 F4 7B 00            PUSH 0x7bf470
004D1D8D  52                        PUSH EDX
004D1D8E  6A 09                     PUSH 0x9
004D1D90  8B CE                     MOV ECX,ESI
004D1D92  E8 EC 23 F3 FF            CALL 0x00404183
004D1D97  85 C0                     TEST EAX,EAX
004D1D99  74 17                     JZ 0x004d1db2
004D1D9B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1DA1  68 D9 00 00 00            PUSH 0xd9
004D1DA6  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1DAB  51                        PUSH ECX
004D1DAC  50                        PUSH EAX
004D1DAD  E8 8E 40 1D 00            CALL 0x006a5e40
LAB_004d1db2:
004D1DB2  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004D1DB5  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
004D1DBB  52                        PUSH EDX
004D1DBC  68 60 F4 7B 00            PUSH 0x7bf460
004D1DC1  50                        PUSH EAX
004D1DC2  FF D7                     CALL EDI
004D1DC4  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004D1DCA  83 C4 0C                  ADD ESP,0xc
004D1DCD  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D1DD3  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
004D1DD9  F7 D8                     NEG EAX
004D1DDB  1A C0                     SBB AL,AL
004D1DDD  6A 1D                     PUSH 0x1d
004D1DDF  24 03                     AND AL,0x3
004D1DE1  51                        PUSH ECX
004D1DE2  04 06                     ADD AL,0x6
004D1DE4  52                        PUSH EDX
004D1DE5  FE C8                     DEC AL
004D1DE7  8B CE                     MOV ECX,ESI
004D1DE9  50                        PUSH EAX
004D1DEA  E8 94 23 F3 FF            CALL 0x00404183
004D1DEF  85 C0                     TEST EAX,EAX
004D1DF1  74 17                     JZ 0x004d1e0a
004D1DF3  68 DB 00 00 00            PUSH 0xdb
LAB_004d1df8:
004D1DF8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1DFE  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1E03  51                        PUSH ECX
004D1E04  50                        PUSH EAX
004D1E05  E8 36 40 1D 00            CALL 0x006a5e40
LAB_004d1e0a:
004D1E0A  8B 93 70 03 00 00         MOV EDX,dword ptr [EBX + 0x370]
004D1E10  6A 00                     PUSH 0x0
004D1E12  F7 DA                     NEG EDX
004D1E14  1B D2                     SBB EDX,EDX
004D1E16  8B CB                     MOV ECX,EBX
004D1E18  83 E2 03                  AND EDX,0x3
004D1E1B  C7 83 EC 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2ec],0x0
004D1E25  83 C2 06                  ADD EDX,0x6
004D1E28  89 93 F0 02 00 00         MOV dword ptr [EBX + 0x2f0],EDX
004D1E2E  E8 2E 22 F3 FF            CALL 0x00404061
004D1E33  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D1E38  8A 93 F0 02 00 00         MOV DL,byte ptr [EBX + 0x2f0]
004D1E3E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D1E44  51                        PUSH ECX
004D1E45  52                        PUSH EDX
004D1E46  8B CE                     MOV ECX,ESI
004D1E48  E8 F3 33 F3 FF            CALL 0x00405240
004D1E4D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D1E52  8A 93 F0 02 00 00         MOV DL,byte ptr [EBX + 0x2f0]
004D1E58  FE CA                     DEC DL
004D1E5A  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D1E60  51                        PUSH ECX
004D1E61  52                        PUSH EDX
004D1E62  8B CE                     MOV ECX,ESI
004D1E64  E8 D7 33 F3 FF            CALL 0x00405240
004D1E69  8B 06                     MOV EAX,dword ptr [ESI]
004D1E6B  8B CE                     MOV ECX,ESI
004D1E6D  FF 10                     CALL dword ptr [EAX]
004D1E6F  E9 80 03 00 00            JMP 0x004d21f4
LAB_004d1e74:
004D1E74  85 C0                     TEST EAX,EAX
004D1E76  0F 84 73 01 00 00         JZ 0x004d1fef
004D1E7C  8B 8B 59 02 00 00         MOV ECX,dword ptr [EBX + 0x259]
004D1E82  83 F9 6C                  CMP ECX,0x6c
004D1E85  75 09                     JNZ 0x004d1e90
004D1E87  83 BB 51 02 00 00 03      CMP dword ptr [EBX + 0x251],0x3
004D1E8E  74 12                     JZ 0x004d1ea2
LAB_004d1e90:
004D1E90  83 F9 54                  CMP ECX,0x54
004D1E93  0F 8C 56 01 00 00         JL 0x004d1fef
004D1E99  83 F9 5A                  CMP ECX,0x5a
004D1E9C  0F 8F 4D 01 00 00         JG 0x004d1fef
LAB_004d1ea2:
004D1EA2  8B 83 41 02 00 00         MOV EAX,dword ptr [EBX + 0x241]
004D1EA8  C7 83 EC 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x2ec],0x2
004D1EB2  83 F8 01                  CMP EAX,0x1
004D1EB5  C7 83 F0 02 00 00 0B 00 00 00  MOV dword ptr [EBX + 0x2f0],0xb
004D1EBF  6A 1D                     PUSH 0x1d
004D1EC1  75 25                     JNZ 0x004d1ee8
004D1EC3  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D1EC9  8A 93 F0 02 00 00         MOV DL,byte ptr [EBX + 0x2f0]
004D1ECF  68 58 D4 7A 00            PUSH 0x7ad458
004D1ED4  51                        PUSH ECX
004D1ED5  52                        PUSH EDX
004D1ED6  8B CE                     MOV ECX,ESI
004D1ED8  E8 A6 22 F3 FF            CALL 0x00404183
004D1EDD  85 C0                     TEST EAX,EAX
004D1EDF  74 3C                     JZ 0x004d1f1d
004D1EE1  68 EF 00 00 00            PUSH 0xef
004D1EE6  EB 23                     JMP 0x004d1f0b
LAB_004d1ee8:
004D1EE8  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004D1EEE  8A 83 F0 02 00 00         MOV AL,byte ptr [EBX + 0x2f0]
004D1EF4  68 4C D4 7A 00            PUSH 0x7ad44c
004D1EF9  52                        PUSH EDX
004D1EFA  50                        PUSH EAX
004D1EFB  8B CE                     MOV ECX,ESI
004D1EFD  E8 81 22 F3 FF            CALL 0x00404183
004D1F02  85 C0                     TEST EAX,EAX
004D1F04  74 17                     JZ 0x004d1f1d
004D1F06  68 F0 00 00 00            PUSH 0xf0
LAB_004d1f0b:
004D1F0B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D1F11  68 BC F4 7B 00            PUSH 0x7bf4bc
004D1F16  51                        PUSH ECX
004D1F17  50                        PUSH EAX
004D1F18  E8 23 3F 1D 00            CALL 0x006a5e40
LAB_004d1f1d:
004D1F1D  8B 93 70 03 00 00         MOV EDX,dword ptr [EBX + 0x370]
004D1F23  8B CE                     MOV ECX,ESI
004D1F25  F7 DA                     NEG EDX
004D1F27  1B D2                     SBB EDX,EDX
004D1F29  83 E2 03                  AND EDX,0x3
004D1F2C  83 C2 06                  ADD EDX,0x6
004D1F2F  8A C2                     MOV AL,DL
004D1F31  89 93 F4 02 00 00         MOV dword ptr [EBX + 0x2f4],EDX
004D1F37  50                        PUSH EAX
004D1F38  E8 4D 2A F3 FF            CALL 0x0040498a
004D1F3D  8B 8B F4 02 00 00         MOV ECX,dword ptr [EBX + 0x2f4]
004D1F43  51                        PUSH ECX
004D1F44  8B CE                     MOV ECX,ESI
004D1F46  E8 81 33 F3 FF            CALL 0x004052cc
004D1F4B  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1F51  50                        PUSH EAX
004D1F52  E8 75 33 F3 FF            CALL 0x004052cc
004D1F57  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D1F5D  50                        PUSH EAX
004D1F5E  E8 DD 83 21 00            CALL 0x006ea340
004D1F63  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D1F69  8A 8B F0 02 00 00         MOV CL,byte ptr [EBX + 0x2f0]
004D1F6F  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D1F75  50                        PUSH EAX
004D1F76  51                        PUSH ECX
004D1F77  8B CE                     MOV ECX,ESI
004D1F79  E8 C2 32 F3 FF            CALL 0x00405240
004D1F7E  8B 13                     MOV EDX,dword ptr [EBX]
004D1F80  68 62 03 00 00            PUSH 0x362
004D1F85  6A 03                     PUSH 0x3
004D1F87  8B CB                     MOV ECX,EBX
004D1F89  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004D1F8F  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1F95  6A 00                     PUSH 0x0
004D1F97  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004D1F9A  8B 90 F8 01 00 00         MOV EDX,dword ptr [EAX + 0x1f8]
004D1FA0  8B 02                     MOV EAX,dword ptr [EDX]
004D1FA2  48                        DEC EAX
004D1FA3  50                        PUSH EAX
004D1FA4  6A 00                     PUSH 0x0
004D1FA6  6A 0E                     PUSH 0xe
004D1FA8  E8 0D FF F2 FF            CALL 0x00401eba
004D1FAD  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1FB3  6A 00                     PUSH 0x0
004D1FB5  6A 0E                     PUSH 0xe
004D1FB7  E8 A8 F0 F2 FF            CALL 0x00401064
004D1FBC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D1FC2  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D1FC8  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1FCE  52                        PUSH EDX
004D1FCF  6A 0E                     PUSH 0xe
004D1FD1  E8 6A 32 F3 FF            CALL 0x00405240
004D1FD6  8B 8B 5C 03 00 00         MOV ECX,dword ptr [EBX + 0x35c]
004D1FDC  6A 00                     PUSH 0x0
004D1FDE  E8 9F 09 F3 FF            CALL 0x00402982
004D1FE3  8B CE                     MOV ECX,ESI
004D1FE5  E8 A6 0A F3 FF            CALL 0x00402a90
004D1FEA  E9 05 02 00 00            JMP 0x004d21f4
LAB_004d1fef:
004D1FEF  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
004D1FF5  83 E9 00                  SUB ECX,0x0
004D1FF8  74 2C                     JZ 0x004d2026
004D1FFA  49                        DEC ECX
004D1FFB  75 62                     JNZ 0x004d205f
004D1FFD  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D2003  6A 1D                     PUSH 0x1d
004D2005  F7 D8                     NEG EAX
004D2007  1A C0                     SBB AL,AL
004D2009  68 40 D4 7A 00            PUSH 0x7ad440
004D200E  24 03                     AND AL,0x3
004D2010  51                        PUSH ECX
004D2011  04 06                     ADD AL,0x6
004D2013  8B CE                     MOV ECX,ESI
004D2015  50                        PUSH EAX
004D2016  E8 68 21 F3 FF            CALL 0x00404183
004D201B  85 C0                     TEST EAX,EAX
004D201D  74 40                     JZ 0x004d205f
004D201F  68 02 01 00 00            PUSH 0x102
004D2024  EB 27                     JMP 0x004d204d
LAB_004d2026:
004D2026  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D202C  6A 1D                     PUSH 0x1d
004D202E  F7 D8                     NEG EAX
004D2030  1A C0                     SBB AL,AL
004D2032  68 34 D4 7A 00            PUSH 0x7ad434
004D2037  24 03                     AND AL,0x3
004D2039  51                        PUSH ECX
004D203A  04 06                     ADD AL,0x6
004D203C  8B CE                     MOV ECX,ESI
004D203E  50                        PUSH EAX
004D203F  E8 3F 21 F3 FF            CALL 0x00404183
004D2044  85 C0                     TEST EAX,EAX
004D2046  74 17                     JZ 0x004d205f
004D2048  68 01 01 00 00            PUSH 0x101
LAB_004d204d:
004D204D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D2053  68 BC F4 7B 00            PUSH 0x7bf4bc
004D2058  52                        PUSH EDX
004D2059  50                        PUSH EAX
004D205A  E8 E1 3D 1D 00            CALL 0x006a5e40
LAB_004d205f:
004D205F  8B 03                     MOV EAX,dword ptr [EBX]
004D2061  68 60 03 00 00            PUSH 0x360
004D2066  6A 03                     PUSH 0x3
004D2068  8B CB                     MOV ECX,EBX
004D206A  C7 83 EC 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2ec],0x1
004D2074  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004D207A  8B 8B 70 03 00 00         MOV ECX,dword ptr [EBX + 0x370]
004D2080  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
004D2086  8B 83 EC 02 00 00         MOV EAX,dword ptr [EBX + 0x2ec]
004D208C  6A 00                     PUSH 0x0
004D208E  F7 D9                     NEG ECX
004D2090  1B C9                     SBB ECX,ECX
004D2092  83 E1 03                  AND ECX,0x3
004D2095  83 C1 06                  ADD ECX,0x6
004D2098  89 8B F0 02 00 00         MOV dword ptr [EBX + 0x2f0],ECX
004D209E  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
004D20A1  8B 93 64 03 00 00         MOV EDX,dword ptr [EBX + 0x364]
004D20A7  8D 04 CA                  LEA EAX,[EDX + ECX*0x8]
004D20AA  8B 4C CA 04               MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
004D20AE  8B 10                     MOV EDX,dword ptr [EAX]
004D20B0  8A 83 F0 02 00 00         MOV AL,byte ptr [EBX + 0x2f0]
004D20B6  51                        PUSH ECX
004D20B7  52                        PUSH EDX
004D20B8  50                        PUSH EAX
004D20B9  8B CE                     MOV ECX,ESI
004D20BB  E8 FA FD F2 FF            CALL 0x00401eba
004D20C0  8B 8B 41 02 00 00         MOV ECX,dword ptr [EBX + 0x241]
004D20C6  8B 93 EC 02 00 00         MOV EDX,dword ptr [EBX + 0x2ec]
004D20CC  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004D20CF  8B 8B 64 03 00 00         MOV ECX,dword ptr [EBX + 0x364]
004D20D5  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
004D20D8  8A 83 F0 02 00 00         MOV AL,byte ptr [EBX + 0x2f0]
004D20DE  52                        PUSH EDX
004D20DF  50                        PUSH EAX
004D20E0  8B CE                     MOV ECX,ESI
004D20E2  E8 7D EF F2 FF            CALL 0x00401064
004D20E7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D20ED  8A 83 F0 02 00 00         MOV AL,byte ptr [EBX + 0x2f0]
004D20F3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D20F9  8B CE                     MOV ECX,ESI
004D20FB  52                        PUSH EDX
004D20FC  50                        PUSH EAX
004D20FD  E8 3E 31 F3 FF            CALL 0x00405240
004D2102  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
004D2109  8D BB 50 03 00 00         LEA EDI,[EBX + 0x350]
LAB_004d210f:
004D210F  6A 40                     PUSH 0x40
004D2111  E8 1A C4 25 00            CALL 0x0072e530
004D2116  83 C4 04                  ADD ESP,0x4
004D2119  85 C0                     TEST EAX,EAX
004D211B  74 09                     JZ 0x004d2126
004D211D  8B C8                     MOV ECX,EAX
004D211F  E8 F2 F1 F2 FF            CALL 0x00401316
004D2124  EB 02                     JMP 0x004d2128
LAB_004d2126:
004D2126  33 C0                     XOR EAX,EAX
LAB_004d2128:
004D2128  89 07                     MOV dword ptr [EDI],EAX
004D212A  8B 8B FC 02 00 00         MOV ECX,dword ptr [EBX + 0x2fc]
004D2130  8B 93 F8 02 00 00         MOV EDX,dword ptr [EBX + 0x2f8]
004D2136  6A 11                     PUSH 0x11
004D2138  51                        PUSH ECX
004D2139  8B 8B 04 03 00 00         MOV ECX,dword ptr [EBX + 0x304]
004D213F  52                        PUSH EDX
004D2140  8B 93 00 03 00 00         MOV EDX,dword ptr [EBX + 0x300]
004D2146  6A 00                     PUSH 0x0
004D2148  51                        PUSH ECX
004D2149  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D214F  52                        PUSH EDX
004D2150  51                        PUSH ECX
004D2151  8B C8                     MOV ECX,EAX
004D2153  E8 23 32 F3 FF            CALL 0x0040537b
004D2158  85 C0                     TEST EAX,EAX
004D215A  74 17                     JZ 0x004d2173
004D215C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D2162  68 0D 01 00 00            PUSH 0x10d
004D2167  68 BC F4 7B 00            PUSH 0x7bf4bc
004D216C  52                        PUSH EDX
004D216D  50                        PUSH EAX
004D216E  E8 CD 3C 1D 00            CALL 0x006a5e40
LAB_004d2173:
004D2173  A1 20 0C 79 00            MOV EAX,[0x00790c20]
004D2178  8B 0D 8C 67 80 00         MOV ECX,dword ptr [0x0080678c]
004D217E  6A 1D                     PUSH 0x1d
004D2180  50                        PUSH EAX
004D2181  51                        PUSH ECX
004D2182  8B 0F                     MOV ECX,dword ptr [EDI]
004D2184  6A 0E                     PUSH 0xe
004D2186  E8 F8 1F F3 FF            CALL 0x00404183
004D218B  85 C0                     TEST EAX,EAX
004D218D  74 17                     JZ 0x004d21a6
004D218F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D2195  68 0E 01 00 00            PUSH 0x10e
004D219A  68 BC F4 7B 00            PUSH 0x7bf4bc
004D219F  52                        PUSH EDX
004D21A0  50                        PUSH EAX
004D21A1  E8 9A 3C 1D 00            CALL 0x006a5e40
LAB_004d21a6:
004D21A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D21A9  8B CE                     MOV ECX,ESI
004D21AB  50                        PUSH EAX
004D21AC  E8 1B 31 F3 FF            CALL 0x004052cc
004D21B1  8B 0F                     MOV ECX,dword ptr [EDI]
004D21B3  50                        PUSH EAX
004D21B4  E8 13 31 F3 FF            CALL 0x004052cc
004D21B9  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004D21BF  50                        PUSH EAX
004D21C0  E8 7B 81 21 00            CALL 0x006ea340
004D21C5  8B 8B 01 02 00 00         MOV ECX,dword ptr [EBX + 0x201]
004D21CB  8B 93 FD 01 00 00         MOV EDX,dword ptr [EBX + 0x1fd]
004D21D1  8B 83 F9 01 00 00         MOV EAX,dword ptr [EBX + 0x1f9]
004D21D7  51                        PUSH ECX
004D21D8  8B 0F                     MOV ECX,dword ptr [EDI]
004D21DA  52                        PUSH EDX
004D21DB  50                        PUSH EAX
004D21DC  E8 F8 23 F3 FF            CALL 0x004045d9
004D21E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D21E4  83 C7 04                  ADD EDI,0x4
004D21E7  48                        DEC EAX
004D21E8  83 F8 08                  CMP EAX,0x8
004D21EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D21EE  0F 8F 1B FF FF FF         JG 0x004d210f
LAB_004d21f4:
004D21F4  8B 83 3D 02 00 00         MOV EAX,dword ptr [EBX + 0x23d]
004D21FA  33 F6                     XOR ESI,ESI
004D21FC  33 C9                     XOR ECX,ECX
004D21FE  3B C6                     CMP EAX,ESI
004D2200  0F 94 C1                  SETZ CL
004D2203  51                        PUSH ECX
004D2204  8B CB                     MOV ECX,EBX
004D2206  E8 BE 29 F3 FF            CALL 0x00404bc9
004D220B  8B 83 68 03 00 00         MOV EAX,dword ptr [EBX + 0x368]
004D2211  8B 93 6C 03 00 00         MOV EDX,dword ptr [EBX + 0x36c]
004D2217  89 B3 D8 02 00 00         MOV dword ptr [EBX + 0x2d8],ESI
004D221D  89 B3 D4 02 00 00         MOV dword ptr [EBX + 0x2d4],ESI
004D2223  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D2226  89 B3 D0 02 00 00         MOV dword ptr [EBX + 0x2d0],ESI
004D222C  03 C2                     ADD EAX,EDX
004D222E  89 B3 CC 02 00 00         MOV dword ptr [EBX + 0x2cc],ESI
004D2234  C1 E0 02                  SHL EAX,0x2
004D2237  8B 90 60 31 7E 00         MOV EDX,dword ptr [EAX + 0x7e3160]
004D223D  8B 88 FC 24 7E 00         MOV ECX,dword ptr [EAX + 0x7e24fc]
004D2243  52                        PUSH EDX
004D2244  8B 90 50 1C 7E 00         MOV EDX,dword ptr [EAX + 0x7e1c50]
004D224A  8B 80 AC 45 85 00         MOV EAX,dword ptr [EAX + 0x8545ac]
004D2250  51                        PUSH ECX
004D2251  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004D2254  52                        PUSH EDX
004D2255  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004D2258  50                        PUSH EAX
004D2259  51                        PUSH ECX
004D225A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D2260  56                        PUSH ESI
004D2261  52                        PUSH EDX
004D2262  E8 14 27 F3 FF            CALL 0x0040497b
004D2267  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
004D226D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D2273  50                        PUSH EAX
004D2274  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004D2277  50                        PUSH EAX
004D2278  E8 FA FD F2 FF            CALL 0x00402077
004D227D  85 C0                     TEST EAX,EAX
004D227F  74 17                     JZ 0x004d2298
004D2281  8B 13                     MOV EDX,dword ptr [EBX]
004D2283  8B CB                     MOV ECX,EBX
004D2285  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004D2288  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D228E  50                        PUSH EAX
004D228F  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004D2292  50                        PUSH EAX
004D2293  E8 A1 3B F3 FF            CALL 0x00405e39
LAB_004d2298:
004D2298  6A 05                     PUSH 0x5
004D229A  8B CB                     MOV ECX,EBX
004D229C  E8 00 01 F3 FF            CALL 0x004023a1
LAB_004d22a1:
004D22A1  8B CB                     MOV ECX,EBX
004D22A3  E8 EF F6 F2 FF            CALL 0x00401997
004D22A8  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
004D22AE  33 C0                     XOR EAX,EAX
004D22B0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004D22B6  5F                        POP EDI
004D22B7  5E                        POP ESI
004D22B8  5B                        POP EBX
004D22B9  8B E5                     MOV ESP,EBP
004D22BB  5D                        POP EBP
004D22BC  C2 04 00                  RET 0x4
LAB_004d22bf:
004D22BF  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
004D22C5  68 28 F4 7B 00            PUSH 0x7bf428
004D22CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D22CF  56                        PUSH ESI
004D22D0  57                        PUSH EDI
004D22D1  68 66 01 00 00            PUSH 0x166
004D22D6  68 BC F4 7B 00            PUSH 0x7bf4bc
004D22DB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004D22E1  E8 EA B1 1D 00            CALL 0x006ad4d0
004D22E6  83 C4 18                  ADD ESP,0x18
004D22E9  85 C0                     TEST EAX,EAX
004D22EB  74 01                     JZ 0x004d22ee
004D22ED  CC                        INT3
LAB_004d22ee:
004D22EE  68 67 01 00 00            PUSH 0x167
004D22F3  68 BC F4 7B 00            PUSH 0x7bf4bc
004D22F8  57                        PUSH EDI
004D22F9  56                        PUSH ESI
004D22FA  E8 41 3B 1D 00            CALL 0x006a5e40
004D22FF  8B C6                     MOV EAX,ESI
004D2301  5F                        POP EDI
004D2302  5E                        POP ESI
004D2303  5B                        POP EBX
004D2304  8B E5                     MOV ESP,EBP
004D2306  5D                        POP EBP
004D2307  C2 04 00                  RET 0x4
