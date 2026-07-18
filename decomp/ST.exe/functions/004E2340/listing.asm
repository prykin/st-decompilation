FUN_004e2340:
004E2340  55                        PUSH EBP
004E2341  8B EC                     MOV EBP,ESP
004E2343  83 EC 0C                  SUB ESP,0xc
004E2346  53                        PUSH EBX
004E2347  8B D9                     MOV EBX,ECX
004E2349  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E234C  56                        PUSH ESI
004E234D  57                        PUSH EDI
004E234E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E2351  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004E2354  83 C8 FF                  OR EAX,0xffffffff
004E2357  8D 34 D3                  LEA ESI,[EBX + EDX*0x8]
004E235A  8B 94 D3 D0 04 00 00      MOV EDX,dword ptr [EBX + EDX*0x8 + 0x4d0]
004E2361  3B D7                     CMP EDX,EDI
004E2363  0F 85 79 03 00 00         JNZ 0x004e26e2
004E2369  8B 96 D4 04 00 00         MOV EDX,dword ptr [ESI + 0x4d4]
004E236F  85 D2                     TEST EDX,EDX
004E2371  0F 84 6B 03 00 00         JZ 0x004e26e2
004E2377  8D 84 89 9B 00 00 00      LEA EAX,[ECX + ECX*0x4 + 0x9b]
004E237E  8B 0C C3                  MOV ECX,dword ptr [EBX + EAX*0x8]
004E2381  8B 0C 8D 1C 09 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e091c]
004E2388  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
004E238B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E238E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004E2393  F7 E9                     IMUL ECX
004E2395  C1 FA 05                  SAR EDX,0x5
004E2398  8B C2                     MOV EAX,EDX
004E239A  8B CB                     MOV ECX,EBX
004E239C  C1 E8 1F                  SHR EAX,0x1f
004E239F  03 D0                     ADD EDX,EAX
004E23A1  8B FA                     MOV EDI,EDX
004E23A3  8B 13                     MOV EDX,dword ptr [EBX]
004E23A5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E23A8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E23AE  50                        PUSH EAX
004E23AF  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004E23B2  50                        PUSH EAX
004E23B3  E8 DF 04 F2 FF            CALL 0x00402897
004E23B8  85 C0                     TEST EAX,EAX
004E23BA  74 2F                     JZ 0x004e23eb
004E23BC  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004E23BF  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004E23C2  51                        PUSH ECX
004E23C3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E23C9  52                        PUSH EDX
004E23CA  E8 C9 08 F2 FF            CALL 0x00402c98
004E23CF  85 C0                     TEST EAX,EAX
004E23D1  75 18                     JNZ 0x004e23eb
004E23D3  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004E23D9  C1 E7 02                  SHL EDI,0x2
004E23DC  85 C9                     TEST ECX,ECX
004E23DE  74 0B                     JZ 0x004e23eb
004E23E0  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004E23E3  6A 05                     PUSH 0x5
004E23E5  50                        PUSH EAX
004E23E6  E8 09 07 F2 FF            CALL 0x00402af4
LAB_004e23eb:
004E23EB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E23F1  8B 8E E8 04 00 00         MOV ECX,dword ptr [ESI + 0x4e8]
004E23F7  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004E23FD  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
004E2400  3B C2                     CMP EAX,EDX
004E2402  0F 82 D4 02 00 00         JC 0x004e26dc
004E2408  2B C1                     SUB EAX,ECX
004E240A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E240D  0F AF 86 E4 04 00 00      IMUL EAX,dword ptr [ESI + 0x4e4]
004E2414  8B 09                     MOV ECX,dword ptr [ECX]
004E2416  33 D2                     XOR EDX,EDX
004E2418  F7 34 8D 1C 09 7E 00      DIV dword ptr [ECX*0x4 + 0x7e091c]
004E241F  8B 13                     MOV EDX,dword ptr [EBX]
004E2421  8B CB                     MOV ECX,EBX
004E2423  8B F8                     MOV EDI,EAX
004E2425  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
004E2428  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E242B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2431  50                        PUSH EAX
004E2432  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004E2435  50                        PUSH EAX
004E2436  E8 5C 04 F2 FF            CALL 0x00402897
004E243B  85 C0                     TEST EAX,EAX
004E243D  74 43                     JZ 0x004e2482
004E243F  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004E2442  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004E2445  51                        PUSH ECX
004E2446  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E244C  52                        PUSH EDX
004E244D  E8 46 08 F2 FF            CALL 0x00402c98
004E2452  85 C0                     TEST EAX,EAX
004E2454  75 2C                     JNZ 0x004e2482
004E2456  8B C7                     MOV EAX,EDI
004E2458  99                        CDQ
004E2459  83 E2 03                  AND EDX,0x3
004E245C  03 C2                     ADD EAX,EDX
004E245E  C1 F8 02                  SAR EAX,0x2
004E2461  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004E2464  75 07                     JNZ 0x004e246d
004E2466  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_004e246d:
004E246D  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004E2473  85 C9                     TEST ECX,ECX
004E2475  74 0B                     JZ 0x004e2482
004E2477  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004E247A  6A 05                     PUSH 0x5
004E247C  50                        PUSH EAX
004E247D  E8 72 06 F2 FF            CALL 0x00402af4
LAB_004e2482:
004E2482  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004E2488  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E248B  8B BE E4 04 00 00         MOV EDI,dword ptr [ESI + 0x4e4]
004E2491  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
004E2494  3B C7                     CMP EAX,EDI
004E2496  7E 07                     JLE 0x004e249f
004E2498  8B C7                     MOV EAX,EDI
004E249A  2B C1                     SUB EAX,ECX
004E249C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_004e249f:
004E249F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E24A2  33 C0                     XOR EAX,EAX
004E24A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E24A7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004E24AA  8B 11                     MOV EDX,dword ptr [ECX]
004E24AC  8B 0C 95 5C 08 7E 00      MOV ECX,dword ptr [EDX*0x4 + 0x7e085c]
004E24B3  8B C1                     MOV EAX,ECX
004E24B5  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
004E24B9  99                        CDQ
004E24BA  F7 FF                     IDIV EDI
004E24BC  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E24BF  8B C1                     MOV EAX,ECX
004E24C1  0F AF 86 DC 04 00 00      IMUL EAX,dword ptr [ESI + 0x4dc]
004E24C8  99                        CDQ
004E24C9  F7 FF                     IDIV EDI
004E24CB  33 D2                     XOR EDX,EDX
004E24CD  2B C8                     SUB ECX,EAX
004E24CF  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004E24D5  3B C2                     CMP EAX,EDX
004E24D7  7E 0A                     JLE 0x004e24e3
004E24D9  F7 D8                     NEG EAX
004E24DB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E24DE  79 03                     JNS 0x004e24e3
004E24E0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_004e24e3:
004E24E3  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004E24E9  3B C2                     CMP EAX,EDX
004E24EB  7E 0A                     JLE 0x004e24f7
004E24ED  F7 D8                     NEG EAX
004E24EF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004E24F2  79 03                     JNS 0x004e24f7
004E24F4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004e24f7:
004E24F7  8B 86 F4 04 00 00         MOV EAX,dword ptr [ESI + 0x4f4]
004E24FD  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E2500  8D 14 38                  LEA EDX,[EAX + EDI*0x1]
004E2503  3B D1                     CMP EDX,ECX
004E2505  7E 11                     JLE 0x004e2518
004E2507  2B C8                     SUB ECX,EAX
004E2509  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004E250C  79 07                     JNS 0x004e2515
004E250E  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_004e2515:
004E2515  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_004e2518:
004E2518  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E251B  85 C0                     TEST EAX,EAX
004E251D  74 16                     JZ 0x004e2535
004E251F  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004E2522  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2528  6A 04                     PUSH 0x4
004E252A  50                        PUSH EAX
004E252B  E8 CD 38 F2 FF            CALL 0x00405dfd
004E2530  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
004E2533  7F 36                     JG 0x004e256b
LAB_004e2535:
004E2535  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E2538  85 C0                     TEST EAX,EAX
004E253A  74 16                     JZ 0x004e2552
004E253C  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004E253F  6A 04                     PUSH 0x4
004E2541  51                        PUSH ECX
004E2542  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2548  E8 0F 39 F2 FF            CALL 0x00405e5c
004E254D  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
004E2550  7F 19                     JG 0x004e256b
LAB_004e2552:
004E2552  85 FF                     TEST EDI,EDI
004E2554  74 3F                     JZ 0x004e2595
004E2556  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004E2559  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E255F  6A 04                     PUSH 0x4
004E2561  52                        PUSH EDX
004E2562  E8 44 FE F1 FF            CALL 0x004023ab
004E2567  3B F8                     CMP EDI,EAX
004E2569  7E 2A                     JLE 0x004e2595
LAB_004e256b:
004E256B  8B BE E4 04 00 00         MOV EDI,dword ptr [ESI + 0x4e4]
004E2571  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004E2576  F7 EF                     IMUL EDI
004E2578  C1 FA 05                  SAR EDX,0x5
004E257B  8B C2                     MOV EAX,EDX
004E257D  C1 E8 1F                  SHR EAX,0x1f
004E2580  03 D0                     ADD EDX,EAX
004E2582  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E2585  3B C2                     CMP EAX,EDX
004E2587  0F 8E D8 00 00 00         JLE 0x004e2665
004E258D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E2590  E9 0A FF FF FF            JMP 0x004e249f
LAB_004e2595:
004E2595  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E2598  85 C0                     TEST EAX,EAX
004E259A  74 24                     JZ 0x004e25c0
004E259C  8B 96 EC 04 00 00         MOV EDX,dword ptr [ESI + 0x4ec]
004E25A2  50                        PUSH EAX
004E25A3  03 D0                     ADD EDX,EAX
004E25A5  89 96 EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EDX
004E25AB  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004E25AE  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004E25B1  51                        PUSH ECX
004E25B2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E25B8  6A 04                     PUSH 0x4
004E25BA  52                        PUSH EDX
004E25BB  E8 39 05 F2 FF            CALL 0x00402af9
LAB_004e25c0:
004E25C0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E25C3  85 C0                     TEST EAX,EAX
004E25C5  74 24                     JZ 0x004e25eb
004E25C7  8B 96 F0 04 00 00         MOV EDX,dword ptr [ESI + 0x4f0]
004E25CD  50                        PUSH EAX
004E25CE  03 D0                     ADD EDX,EAX
004E25D0  89 96 F0 04 00 00         MOV dword ptr [ESI + 0x4f0],EDX
004E25D6  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004E25D9  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
004E25DC  50                        PUSH EAX
004E25DD  6A 04                     PUSH 0x4
004E25DF  51                        PUSH ECX
004E25E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E25E6  E8 21 06 F2 FF            CALL 0x00402c0c
LAB_004e25eb:
004E25EB  85 FF                     TEST EDI,EDI
004E25ED  74 24                     JZ 0x004e2613
004E25EF  8B 8E F4 04 00 00         MOV ECX,dword ptr [ESI + 0x4f4]
004E25F5  57                        PUSH EDI
004E25F6  03 CF                     ADD ECX,EDI
004E25F8  89 8E F4 04 00 00         MOV dword ptr [ESI + 0x4f4],ECX
004E25FE  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004E2601  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004E2604  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E260A  52                        PUSH EDX
004E260B  6A 04                     PUSH 0x4
004E260D  50                        PUSH EAX
004E260E  E8 80 01 F2 FF            CALL 0x00402793
LAB_004e2613:
004E2613  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E2616  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004E261C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E261F  03 D1                     ADD EDX,ECX
004E2621  85 C0                     TEST EAX,EAX
004E2623  89 96 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EDX
004E2629  74 1A                     JZ 0x004e2645
004E262B  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004E2631  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004E2637  3B 96 E4 04 00 00         CMP EDX,dword ptr [ESI + 0x4e4]
004E263D  7C 06                     JL 0x004e2645
004E263F  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
LAB_004e2645:
004E2645  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
004E2648  33 C9                     XOR ECX,ECX
004E264A  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004E2650  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004E2653  3B C1                     CMP EAX,ECX
004E2655  75 0E                     JNZ 0x004e2665
004E2657  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E265D  8A D0                     MOV DL,AL
004E265F  52                        PUSH EDX
004E2660  E8 28 25 F2 FF            CALL 0x00404b8d
LAB_004e2665:
004E2665  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E266A  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004E2670  89 8E E8 04 00 00         MOV dword ptr [ESI + 0x4e8],ECX
004E2676  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004E267C  8B 8B 24 05 00 00         MOV ECX,dword ptr [EBX + 0x524]
004E2682  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004E2688  83 C1 19                  ADD ECX,0x19
004E268B  3B C1                     CMP EAX,ECX
004E268D  76 4D                     JBE 0x004e26dc
004E268F  8A 93 3D 02 00 00         MOV DL,byte ptr [EBX + 0x23d]
004E2695  89 83 24 05 00 00         MOV dword ptr [EBX + 0x524],EAX
004E269B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E26A1  52                        PUSH EDX
004E26A2  E8 10 23 F2 FF            CALL 0x004049b7
004E26A7  3C 02                     CMP AL,0x2
004E26A9  75 20                     JNZ 0x004e26cb
004E26AB  8B 03                     MOV EAX,dword ptr [EBX]
004E26AD  68 C8 02 00 00            PUSH 0x2c8
004E26B2  6A 03                     PUSH 0x3
004E26B4  8B CB                     MOV ECX,EBX
004E26B6  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E26BC  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E26C2  5F                        POP EDI
004E26C3  5E                        POP ESI
004E26C4  5B                        POP EBX
004E26C5  8B E5                     MOV ESP,EBP
004E26C7  5D                        POP EBP
004E26C8  C2 0C 00                  RET 0xc
LAB_004e26cb:
004E26CB  8B 13                     MOV EDX,dword ptr [EBX]
004E26CD  68 00 02 00 00            PUSH 0x200
004E26D2  6A 03                     PUSH 0x3
004E26D4  8B CB                     MOV ECX,EBX
004E26D6  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004e26dc:
004E26DC  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
LAB_004e26e2:
004E26E2  5F                        POP EDI
004E26E3  5E                        POP ESI
004E26E4  5B                        POP EBX
004E26E5  8B E5                     MOV ESP,EBP
004E26E7  5D                        POP EBP
004E26E8  C2 0C 00                  RET 0xc
