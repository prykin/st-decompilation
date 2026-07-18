FUN_004c21a0:
004C21A0  55                        PUSH EBP
004C21A1  8B EC                     MOV EBP,ESP
004C21A3  83 EC 08                  SUB ESP,0x8
004C21A6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004C21A9  53                        PUSH EBX
004C21AA  8B D9                     MOV EBX,ECX
004C21AC  56                        PUSH ESI
004C21AD  8D 45 F8                  LEA EAX,[EBP + -0x8]
004C21B0  57                        PUSH EDI
004C21B1  8D 4D 10                  LEA ECX,[EBP + 0x10]
004C21B4  33 F6                     XOR ESI,ESI
004C21B6  50                        PUSH EAX
004C21B7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004C21BA  51                        PUSH ECX
004C21BB  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
004C21C1  56                        PUSH ESI
004C21C2  52                        PUSH EDX
004C21C3  50                        PUSH EAX
004C21C4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004C21C7  E8 54 FA 21 00            CALL 0x006e1c20
004C21CC  D9 45 10                  FLD float ptr [EBP + 0x10]
004C21CF  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004C21D5  D9 45 10                  FLD float ptr [EBP + 0x10]
004C21D8  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004C21DE  DF E0                     FNSTSW AX
004C21E0  F6 C4 01                  TEST AH,0x1
004C21E3  75 0A                     JNZ 0x004c21ef
004C21E5  E8 9E C0 26 00            CALL 0x0072e288
004C21EA  0F BF F8                  MOVSX EDI,AX
004C21ED  EB 09                     JMP 0x004c21f8
LAB_004c21ef:
004C21EF  E8 94 C0 26 00            CALL 0x0072e288
004C21F4  0F BF F8                  MOVSX EDI,AX
004C21F7  4F                        DEC EDI
LAB_004c21f8:
004C21F8  D9 45 F8                  FLD float ptr [EBP + -0x8]
004C21FB  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004C2201  D9 45 F8                  FLD float ptr [EBP + -0x8]
004C2204  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004C220A  DF E0                     FNSTSW AX
004C220C  F6 C4 01                  TEST AH,0x1
004C220F  75 0D                     JNZ 0x004c221e
004C2211  E8 72 C0 26 00            CALL 0x0072e288
004C2216  0F BF C8                  MOVSX ECX,AX
004C2219  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004C221C  EB 0C                     JMP 0x004c222a
LAB_004c221e:
004C221E  E8 65 C0 26 00            CALL 0x0072e288
004C2223  0F BF C0                  MOVSX EAX,AX
004C2226  48                        DEC EAX
004C2227  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_004c222a:
004C222A  F6 83 D1 01 00 00 04      TEST byte ptr [EBX + 0x1d1],0x4
004C2231  74 6C                     JZ 0x004c229f
004C2233  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C2236  3B CB                     CMP ECX,EBX
004C2238  75 05                     JNZ 0x004c223f
004C223A  BE 04 00 00 00            MOV ESI,0x4
LAB_004c223f:
004C223F  85 C9                     TEST ECX,ECX
004C2241  0F 84 D4 03 00 00         JZ 0x004c261b
004C2247  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C224A  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
004C224D  3B 50 24                  CMP EDX,dword ptr [EAX + 0x24]
004C2250  0F 85 C5 03 00 00         JNZ 0x004c261b
004C2256  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004C2259  83 F8 14                  CMP EAX,0x14
004C225C  75 1A                     JNZ 0x004c2278
004C225E  8B 11                     MOV EDX,dword ptr [ECX]
LAB_004c2260:
004C2260  FF 92 EC 00 00 00         CALL dword ptr [EDX + 0xec]
004C2266  85 C0                     TEST EAX,EAX
004C2268  0F 84 AD 03 00 00         JZ 0x004c261b
004C226E  BE 03 00 00 00            MOV ESI,0x3
004C2273  E9 A3 03 00 00            JMP 0x004c261b
LAB_004c2278:
004C2278  3D E8 03 00 00            CMP EAX,0x3e8
004C227D  74 0B                     JZ 0x004c228a
004C227F  3D E9 03 00 00            CMP EAX,0x3e9
004C2284  0F 85 91 03 00 00         JNZ 0x004c261b
LAB_004c228a:
004C228A  8B 01                     MOV EAX,dword ptr [ECX]
004C228C  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
004C2292  85 C0                     TEST EAX,EAX
004C2294  0F 84 81 03 00 00         JZ 0x004c261b
004C229A  E9 77 03 00 00            JMP 0x004c2616
LAB_004c229f:
004C229F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004C22A2  83 F8 43                  CMP EAX,0x43
004C22A5  0F 87 70 03 00 00         JA 0x004c261b
004C22AB  33 C9                     XOR ECX,ECX
004C22AD  8A 88 70 26 4C 00         MOV CL,byte ptr [EAX + 0x4c2670]
switchD_004c22b3::switchD:
004C22B3  FF 24 8D 4C 26 4C 00      JMP dword ptr [ECX*0x4 + 0x4c264c]
switchD_004c22b3::caseD_2:
004C22BA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C22BD  85 C0                     TEST EAX,EAX
004C22BF  0F 84 97 00 00 00         JZ 0x004c235c
004C22C5  85 FF                     TEST EDI,EDI
004C22C7  0F 8C 4E 03 00 00         JL 0x004c261b
004C22CD  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004C22D4  3B FA                     CMP EDI,EDX
004C22D6  0F 8D 3F 03 00 00         JGE 0x004c261b
004C22DC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C22DF  85 C0                     TEST EAX,EAX
004C22E1  0F 8C 34 03 00 00         JL 0x004c261b
004C22E7  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004C22EE  39 45 14                  CMP dword ptr [EBP + 0x14],EAX
004C22F1  EB 59                     JMP 0x004c234c
switchD_004c22b3::caseD_e:
004C22F3  A1 AC B2 7F 00            MOV EAX,[0x007fb2ac]
004C22F8  BE 15 00 00 00            MOV ESI,0x15
004C22FD  85 C0                     TEST EAX,EAX
004C22FF  0F 84 16 03 00 00         JZ 0x004c261b
004C2305  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
004C2308  85 C9                     TEST ECX,ECX
004C230A  0F 84 0B 03 00 00         JZ 0x004c261b
004C2310  BE 14 00 00 00            MOV ESI,0x14
004C2315  E9 01 03 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_26:
004C231A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C231D  85 C0                     TEST EAX,EAX
004C231F  74 3B                     JZ 0x004c235c
004C2321  85 FF                     TEST EDI,EDI
004C2323  0F 8C F2 02 00 00         JL 0x004c261b
004C2329  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004C2330  3B F9                     CMP EDI,ECX
004C2332  0F 8D E3 02 00 00         JGE 0x004c261b
004C2338  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C233B  85 C0                     TEST EAX,EAX
004C233D  0F 8C D8 02 00 00         JL 0x004c261b
004C2343  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004C234A  3B C2                     CMP EAX,EDX
LAB_004c234c:
004C234C  0F 8D C9 02 00 00         JGE 0x004c261b
LAB_004c2352:
004C2352  BE 01 00 00 00            MOV ESI,0x1
004C2357  E9 BF 02 00 00            JMP 0x004c261b
LAB_004c235c:
004C235C  BE 06 00 00 00            MOV ESI,0x6
004C2361  E9 B5 02 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_2a:
004C2366  85 FF                     TEST EDI,EDI
004C2368  0F 8C AD 02 00 00         JL 0x004c261b
004C236E  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004C2375  3B F8                     CMP EDI,EAX
004C2377  0F 8D 9E 02 00 00         JGE 0x004c261b
004C237D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C2380  85 C0                     TEST EAX,EAX
004C2382  0F 8C 93 02 00 00         JL 0x004c261b
004C2388  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004C238F  3B C1                     CMP EAX,ECX
004C2391  0F 8D 84 02 00 00         JGE 0x004c261b
004C2397  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
004C239D  85 C9                     TEST ECX,ECX
004C239F  0F 84 76 02 00 00         JZ 0x004c261b
004C23A5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C23A8  83 BA D4 04 00 00 28      CMP dword ptr [EDX + 0x4d4],0x28
004C23AF  0F 8C 66 02 00 00         JL 0x004c261b
004C23B5  8B C2                     MOV EAX,EDX
004C23B7  6A 07                     PUSH 0x7
004C23B9  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
004C23BC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C23BF  52                        PUSH EDX
004C23C0  6A 02                     PUSH 0x2
004C23C2  50                        PUSH EAX
004C23C3  57                        PUSH EDI
004C23C4  E8 DE 1C F4 FF            CALL 0x004040a7
004C23C9  85 C0                     TEST EAX,EAX
004C23CB  0F 85 4A 02 00 00         JNZ 0x004c261b
004C23D1  BE 19 00 00 00            MOV ESI,0x19
004C23D6  E9 40 02 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_3:
004C23DB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C23DE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C23E1  3B C1                     CMP EAX,ECX
004C23E3  75 07                     JNZ 0x004c23ec
004C23E5  33 F6                     XOR ESI,ESI
004C23E7  E9 2F 02 00 00            JMP 0x004c261b
LAB_004c23ec:
004C23EC  85 FF                     TEST EDI,EDI
004C23EE  0F 8C 27 02 00 00         JL 0x004c261b
004C23F4  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004C23FB  3B F9                     CMP EDI,ECX
004C23FD  0F 8D 18 02 00 00         JGE 0x004c261b
004C2403  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004C2406  85 C9                     TEST ECX,ECX
004C2408  0F 8C 0D 02 00 00         JL 0x004c261b
004C240E  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004C2415  3B CA                     CMP ECX,EDX
004C2417  0F 8D FE 01 00 00         JGE 0x004c261b
004C241D  6A 00                     PUSH 0x0
004C241F  6A 00                     PUSH 0x0
004C2421  6A 00                     PUSH 0x0
004C2423  51                        PUSH ECX
004C2424  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C2427  57                        PUSH EDI
004C2428  50                        PUSH EAX
004C2429  6A 00                     PUSH 0x0
004C242B  E8 91 EE F3 FF            CALL 0x004012c1
004C2430  8B F0                     MOV ESI,EAX
004C2432  F7 DE                     NEG ESI
004C2434  1B F6                     SBB ESI,ESI
004C2436  83 E6 06                  AND ESI,0x6
004C2439  46                        INC ESI
004C243A  E9 DC 01 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_17:
004C243F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004C2442  85 F6                     TEST ESI,ESI
004C2444  0F 84 08 FF FF FF         JZ 0x004c2352
004C244A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004C244D  83 BF 45 02 00 00 04      CMP dword ptr [EDI + 0x245],0x4
004C2454  0F 85 F8 FE FF FF         JNZ 0x004c2352
004C245A  8B 16                     MOV EDX,dword ptr [ESI]
004C245C  8B CE                     MOV ECX,ESI
004C245E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004C2461  83 F8 37                  CMP EAX,0x37
004C2464  74 10                     JZ 0x004c2476
004C2466  8B 06                     MOV EAX,dword ptr [ESI]
004C2468  8B CE                     MOV ECX,ESI
004C246A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004C246D  83 F8 6C                  CMP EAX,0x6c
004C2470  0F 85 DC FE FF FF         JNZ 0x004c2352
LAB_004c2476:
004C2476  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
004C2479  33 C9                     XOR ECX,ECX
004C247B  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
004C247F  51                        PUSH ECX
004C2480  52                        PUSH EDX
004C2481  8B CE                     MOV ECX,ESI
004C2483  E8 23 FA F3 FF            CALL 0x00401eab
004C2488  85 C0                     TEST EAX,EAX
004C248A  0F 84 C2 FE FF FF         JZ 0x004c2352
004C2490  BE 1D 00 00 00            MOV ESI,0x1d
004C2495  E9 81 01 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_42:
004C249A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C249D  85 C0                     TEST EAX,EAX
004C249F  0F 84 AD FE FF FF         JZ 0x004c2352
004C24A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C24A8  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
004C24AB  3B 51 24                  CMP EDX,dword ptr [ECX + 0x24]
004C24AE  0F 85 9E FE FF FF         JNZ 0x004c2352
004C24B4  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
004C24BB  0F 85 91 FE FF FF         JNZ 0x004c2352
004C24C1  50                        PUSH EAX
004C24C2  E8 19 2E F4 FF            CALL 0x004052e0
004C24C7  85 C0                     TEST EAX,EAX
004C24C9  0F 84 83 FE FF FF         JZ 0x004c2352
004C24CF  BE 1F 00 00 00            MOV ESI,0x1f
004C24D4  E9 42 01 00 00            JMP 0x004c261b
switchD_004c22b3::caseD_0:
004C24D9  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004C24DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C24DF  3B D8                     CMP EBX,EAX
004C24E1  0F 84 2F 01 00 00         JZ 0x004c2616
004C24E7  8B 88 45 02 00 00         MOV ECX,dword ptr [EAX + 0x245]
004C24ED  85 DB                     TEST EBX,EBX
004C24EF  75 40                     JNZ 0x004c2531
004C24F1  83 F9 04                  CMP ECX,0x4
004C24F4  75 7B                     JNZ 0x004c2571
004C24F6  85 FF                     TEST EDI,EDI
004C24F8  0F 8C 1D 01 00 00         JL 0x004c261b
004C24FE  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004C2505  3B F8                     CMP EDI,EAX
004C2507  0F 8D 0E 01 00 00         JGE 0x004c261b
004C250D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C2510  85 C0                     TEST EAX,EAX
004C2512  0F 8C 03 01 00 00         JL 0x004c261b
004C2518  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004C251F  3B C1                     CMP EAX,ECX
004C2521  0F 8D F4 00 00 00         JGE 0x004c261b
004C2527  BE 05 00 00 00            MOV ESI,0x5
004C252C  E9 EA 00 00 00            JMP 0x004c261b
LAB_004c2531:
004C2531  83 F9 04                  CMP ECX,0x4
004C2534  75 3B                     JNZ 0x004c2571
004C2536  8B 13                     MOV EDX,dword ptr [EBX]
004C2538  8B CB                     MOV ECX,EBX
004C253A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004C253D  83 F8 37                  CMP EAX,0x37
004C2540  74 0C                     JZ 0x004c254e
004C2542  8B 03                     MOV EAX,dword ptr [EBX]
004C2544  8B CB                     MOV ECX,EBX
004C2546  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004C2549  83 F8 6C                  CMP EAX,0x6c
004C254C  75 23                     JNZ 0x004c2571
LAB_004c254e:
004C254E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C2551  33 C9                     XOR ECX,ECX
004C2553  66 8B 48 32               MOV CX,word ptr [EAX + 0x32]
004C2557  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
004C255A  51                        PUSH ECX
004C255B  52                        PUSH EDX
004C255C  8B CB                     MOV ECX,EBX
004C255E  E8 48 F9 F3 FF            CALL 0x00401eab
004C2563  85 C0                     TEST EAX,EAX
004C2565  74 0A                     JZ 0x004c2571
004C2567  BE 1D 00 00 00            MOV ESI,0x1d
004C256C  E9 AA 00 00 00            JMP 0x004c261b
LAB_004c2571:
004C2571  85 FF                     TEST EDI,EDI
004C2573  7C 65                     JL 0x004c25da
004C2575  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004C257C  3B F8                     CMP EDI,EAX
004C257E  7D 5A                     JGE 0x004c25da
004C2580  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C2583  85 C0                     TEST EAX,EAX
004C2585  7C 53                     JL 0x004c25da
004C2587  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004C258E  3B C1                     CMP EAX,ECX
004C2590  7D 48                     JGE 0x004c25da
004C2592  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C2595  6A 01                     PUSH 0x1
004C2597  6A 00                     PUSH 0x0
004C2599  8B D0                     MOV EDX,EAX
004C259B  6A 00                     PUSH 0x0
004C259D  52                        PUSH EDX
004C259E  57                        PUSH EDI
004C259F  53                        PUSH EBX
004C25A0  6A 00                     PUSH 0x0
004C25A2  E8 1A ED F3 FF            CALL 0x004012c1
004C25A7  85 C0                     TEST EAX,EAX
004C25A9  74 2F                     JZ 0x004c25da
004C25AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C25AE  8B 80 35 02 00 00         MOV EAX,dword ptr [EAX + 0x235]
004C25B4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004C25B7  8B 04 CD A0 2C 79 00      MOV EAX,dword ptr [ECX*0x8 + 0x792ca0]
004C25BE  3D A8 00 00 00            CMP EAX,0xa8
004C25C3  74 15                     JZ 0x004c25da
004C25C5  3D A3 00 00 00            CMP EAX,0xa3
004C25CA  74 0E                     JZ 0x004c25da
004C25CC  3D BE 00 00 00            CMP EAX,0xbe
004C25D1  74 07                     JZ 0x004c25da
004C25D3  BE 07 00 00 00            MOV ESI,0x7
004C25D8  EB 41                     JMP 0x004c261b
LAB_004c25da:
004C25DA  85 DB                     TEST EBX,EBX
004C25DC  74 3D                     JZ 0x004c261b
004C25DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004C25E1  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
004C25E4  3B 50 24                  CMP EDX,dword ptr [EAX + 0x24]
004C25E7  75 32                     JNZ 0x004c261b
004C25E9  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004C25EC  83 F8 14                  CMP EAX,0x14
004C25EF  75 09                     JNZ 0x004c25fa
004C25F1  8B 13                     MOV EDX,dword ptr [EBX]
004C25F3  8B CB                     MOV ECX,EBX
004C25F5  E9 66 FC FF FF            JMP 0x004c2260
LAB_004c25fa:
004C25FA  3D E8 03 00 00            CMP EAX,0x3e8
004C25FF  74 07                     JZ 0x004c2608
004C2601  3D E9 03 00 00            CMP EAX,0x3e9
004C2606  75 13                     JNZ 0x004c261b
LAB_004c2608:
004C2608  8B 03                     MOV EAX,dword ptr [EBX]
004C260A  8B CB                     MOV ECX,EBX
004C260C  FF 90 EC 00 00 00         CALL dword ptr [EAX + 0xec]
004C2612  85 C0                     TEST EAX,EAX
004C2614  74 05                     JZ 0x004c261b
LAB_004c2616:
004C2616  BE 04 00 00 00            MOV ESI,0x4
switchD_004c22b3::caseD_1:
004C261B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C261E  8B 81 20 04 00 00         MOV EAX,dword ptr [ECX + 0x420]
004C2624  85 C0                     TEST EAX,EAX
004C2626  74 17                     JZ 0x004c263f
004C2628  66 83 FE 04               CMP SI,0x4
004C262C  74 11                     JZ 0x004c263f
004C262E  66 83 FE 03               CMP SI,0x3
004C2632  74 0B                     JZ 0x004c263f
004C2634  5F                        POP EDI
004C2635  5E                        POP ESI
004C2636  33 C0                     XOR EAX,EAX
004C2638  5B                        POP EBX
004C2639  8B E5                     MOV ESP,EBP
004C263B  5D                        POP EBP
004C263C  C2 10 00                  RET 0x10
LAB_004c263f:
004C263F  66 8B C6                  MOV AX,SI
004C2642  5F                        POP EDI
004C2643  5E                        POP ESI
004C2644  5B                        POP EBX
004C2645  8B E5                     MOV ESP,EBP
004C2647  5D                        POP EBP
004C2648  C2 10 00                  RET 0x10
