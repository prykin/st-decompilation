FUN_005f23d0:
005F23D0  55                        PUSH EBP
005F23D1  8B EC                     MOV EBP,ESP
005F23D3  83 EC 18                  SUB ESP,0x18
005F23D6  8B D1                     MOV EDX,ECX
005F23D8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005F23DF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005F23E2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005F23E5  83 F9 03                  CMP ECX,0x3
005F23E8  0F 84 EF 02 00 00         JZ 0x005f26dd
005F23EE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F23F1  85 C0                     TEST EAX,EAX
005F23F3  0F 85 E4 02 00 00         JNZ 0x005f26dd
005F23F9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005F23FC  83 F8 39                  CMP EAX,0x39
005F23FF  0F 84 D8 02 00 00         JZ 0x005f26dd
005F2405  83 F8 4F                  CMP EAX,0x4f
005F2408  0F 84 CF 02 00 00         JZ 0x005f26dd
005F240E  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
005F2411  03 C1                     ADD EAX,ECX
005F2413  8B 0C 85 BC 18 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x7918bc]
005F241A  85 C9                     TEST ECX,ECX
005F241C  0F 85 BB 02 00 00         JNZ 0x005f26dd
005F2422  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F2425  53                        PUSH EBX
005F2426  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F2429  56                        PUSH ESI
005F242A  57                        PUSH EDI
005F242B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005F242E  50                        PUSH EAX
005F242F  6A 00                     PUSH 0x0
005F2431  57                        PUSH EDI
005F2432  53                        PUSH EBX
005F2433  8B CA                     MOV ECX,EDX
005F2435  E8 D8 1A E1 FF            CALL 0x00403f12
005F243A  85 C0                     TEST EAX,EAX
005F243C  0F 84 8F 02 00 00         JZ 0x005f26d1
005F2442  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
005F2448  85 C9                     TEST ECX,ECX
005F244A  0F 84 5F 02 00 00         JZ 0x005f26af
005F2450  80 7D 14 01               CMP byte ptr [EBP + 0x14],0x1
005F2454  0F 85 17 02 00 00         JNZ 0x005f2671
005F245A  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F245F  8B F1                     MOV ESI,ECX
005F2461  3C FF                     CMP AL,0xff
005F2463  0F 84 1A 02 00 00         JZ 0x005f2683
005F2469  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F246F  85 C0                     TEST EAX,EAX
005F2471  0F 84 0C 02 00 00         JZ 0x005f2683
005F2477  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
005F247D  8D 4D 10                  LEA ECX,[EBP + 0x10]
005F2480  8D 55 1C                  LEA EDX,[EBP + 0x1c]
005F2483  51                        PUSH ECX
005F2484  52                        PUSH EDX
005F2485  57                        PUSH EDI
005F2486  53                        PUSH EBX
005F2487  50                        PUSH EAX
005F2488  8B CE                     MOV ECX,ESI
005F248A  E8 C4 1A E1 FF            CALL 0x00403f53
005F248F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005F2492  85 C9                     TEST ECX,ECX
005F2494  0F 8C E9 01 00 00         JL 0x005f2683
005F249A  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F249D  3B CA                     CMP ECX,EDX
005F249F  0F 8D DE 01 00 00         JGE 0x005f2683
005F24A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F24A8  8B 3D D0 AE 79 00         MOV EDI,dword ptr [0x0079aed0]
005F24AE  03 C7                     ADD EAX,EDI
005F24B0  85 C0                     TEST EAX,EAX
005F24B2  0F 8C CB 01 00 00         JL 0x005f2683
005F24B8  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F24BB  0F 8D C2 01 00 00         JGE 0x005f2683
005F24C1  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F24C4  85 F6                     TEST ESI,ESI
005F24C6  0F 84 B7 01 00 00         JZ 0x005f2683
005F24CC  0F AF C2                  IMUL EAX,EDX
005F24CF  03 C6                     ADD EAX,ESI
005F24D1  33 D2                     XOR EDX,EDX
005F24D3  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F24D6  8B C2                     MOV EAX,EDX
005F24D8  85 C0                     TEST EAX,EAX
005F24DA  0F 85 A3 01 00 00         JNZ 0x005f2683
005F24E0  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F24E5  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F24EB  3C FF                     CMP AL,0xff
005F24ED  0F 84 90 01 00 00         JZ 0x005f2683
005F24F3  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F24F9  85 C0                     TEST EAX,EAX
005F24FB  0F 84 82 01 00 00         JZ 0x005f2683
005F2501  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F2504  8D 55 18                  LEA EDX,[EBP + 0x18]
005F2507  51                        PUSH ECX
005F2508  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F250B  8D 43 01                  LEA EAX,[EBX + 0x1]
005F250E  52                        PUSH EDX
005F250F  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
005F2515  51                        PUSH ECX
005F2516  50                        PUSH EAX
005F2517  52                        PUSH EDX
005F2518  8B CE                     MOV ECX,ESI
005F251A  E8 34 1A E1 FF            CALL 0x00403f53
005F251F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005F2522  85 C9                     TEST ECX,ECX
005F2524  0F 8C 59 01 00 00         JL 0x005f2683
005F252A  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F252D  3B CA                     CMP ECX,EDX
005F252F  0F 8D 4E 01 00 00         JGE 0x005f2683
005F2535  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F2538  8B 3D D0 AE 79 00         MOV EDI,dword ptr [0x0079aed0]
005F253E  03 C7                     ADD EAX,EDI
005F2540  85 C0                     TEST EAX,EAX
005F2542  0F 8C 3B 01 00 00         JL 0x005f2683
005F2548  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F254B  0F 8D 32 01 00 00         JGE 0x005f2683
005F2551  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F2554  85 F6                     TEST ESI,ESI
005F2556  0F 84 27 01 00 00         JZ 0x005f2683
005F255C  0F AF C2                  IMUL EAX,EDX
005F255F  03 C6                     ADD EAX,ESI
005F2561  33 D2                     XOR EDX,EDX
005F2563  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F2566  8B C2                     MOV EAX,EDX
005F2568  85 C0                     TEST EAX,EAX
005F256A  0F 85 13 01 00 00         JNZ 0x005f2683
005F2570  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F2575  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F257B  3C FF                     CMP AL,0xff
005F257D  0F 84 00 01 00 00         JZ 0x005f2683
005F2583  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F2589  85 C0                     TEST EAX,EAX
005F258B  0F 84 F2 00 00 00         JZ 0x005f2683
005F2591  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F2594  8D 4D EC                  LEA ECX,[EBP + -0x14]
005F2597  8D 55 F0                  LEA EDX,[EBP + -0x10]
005F259A  51                        PUSH ECX
005F259B  8D 78 01                  LEA EDI,[EAX + 0x1]
005F259E  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
005F25A4  52                        PUSH EDX
005F25A5  57                        PUSH EDI
005F25A6  53                        PUSH EBX
005F25A7  50                        PUSH EAX
005F25A8  8B CE                     MOV ECX,ESI
005F25AA  E8 A4 19 E1 FF            CALL 0x00403f53
005F25AF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F25B2  85 C9                     TEST ECX,ECX
005F25B4  0F 8C C9 00 00 00         JL 0x005f2683
005F25BA  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F25BD  3B CA                     CMP ECX,EDX
005F25BF  0F 8D BE 00 00 00         JGE 0x005f2683
005F25C5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F25C8  8B 1D D0 AE 79 00         MOV EBX,dword ptr [0x0079aed0]
005F25CE  03 C3                     ADD EAX,EBX
005F25D0  85 C0                     TEST EAX,EAX
005F25D2  0F 8C A8 00 00 00         JL 0x005f2680
005F25D8  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F25DB  0F 8D 9F 00 00 00         JGE 0x005f2680
005F25E1  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F25E4  85 F6                     TEST ESI,ESI
005F25E6  0F 84 94 00 00 00         JZ 0x005f2680
005F25EC  0F AF C2                  IMUL EAX,EDX
005F25EF  03 C6                     ADD EAX,ESI
005F25F1  33 D2                     XOR EDX,EDX
005F25F3  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F25F6  8B C2                     MOV EAX,EDX
005F25F8  85 C0                     TEST EAX,EAX
005F25FA  0F 85 80 00 00 00         JNZ 0x005f2680
005F2600  A0 4D 87 80 00            MOV AL,[0x0080874d]
005F2605  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
005F260B  3C FF                     CMP AL,0xff
005F260D  74 71                     JZ 0x005f2680
005F260F  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
005F2615  85 C0                     TEST EAX,EAX
005F2617  74 67                     JZ 0x005f2680
005F2619  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F261C  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
005F2622  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F2625  8D 4D 08                  LEA ECX,[EBP + 0x8]
005F2628  50                        PUSH EAX
005F2629  51                        PUSH ECX
005F262A  8D 43 01                  LEA EAX,[EBX + 0x1]
005F262D  57                        PUSH EDI
005F262E  50                        PUSH EAX
005F262F  52                        PUSH EDX
005F2630  8B CE                     MOV ECX,ESI
005F2632  E8 1C 19 E1 FF            CALL 0x00403f53
005F2637  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F263A  85 C9                     TEST ECX,ECX
005F263C  7C 45                     JL 0x005f2683
005F263E  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
005F2641  3B CA                     CMP ECX,EDX
005F2643  7D 3E                     JGE 0x005f2683
005F2645  A1 D0 AE 79 00            MOV EAX,[0x0079aed0]
005F264A  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
005F264D  03 C7                     ADD EAX,EDI
005F264F  85 C0                     TEST EAX,EAX
005F2651  7C 30                     JL 0x005f2683
005F2653  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
005F2656  7D 2B                     JGE 0x005f2683
005F2658  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
005F265B  85 F6                     TEST ESI,ESI
005F265D  74 24                     JZ 0x005f2683
005F265F  0F AF C2                  IMUL EAX,EDX
005F2662  03 C6                     ADD EAX,ESI
005F2664  33 D2                     XOR EDX,EDX
005F2666  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
005F2669  8B C2                     MOV EAX,EDX
005F266B  85 C0                     TEST EAX,EAX
005F266D  74 40                     JZ 0x005f26af
005F266F  EB 12                     JMP 0x005f2683
LAB_005f2671:
005F2671  6A 00                     PUSH 0x0
005F2673  57                        PUSH EDI
005F2674  53                        PUSH EBX
005F2675  E8 E3 27 E1 FF            CALL 0x00404e5d
005F267A  85 C0                     TEST EAX,EAX
005F267C  74 31                     JZ 0x005f26af
005F267E  EB 03                     JMP 0x005f2683
LAB_005f2680:
005F2680  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_005f2683:
005F2683  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F2686  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F2689  6A 00                     PUSH 0x0
005F268B  50                        PUSH EAX
005F268C  6A 00                     PUSH 0x0
005F268E  51                        PUSH ECX
005F268F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F2692  53                        PUSH EBX
005F2693  E8 CD ED E0 FF            CALL 0x00401465
005F2698  85 C0                     TEST EAX,EAX
005F269A  7C 35                     JL 0x005f26d1
005F269C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005F26A3  5F                        POP EDI
005F26A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F26A7  5E                        POP ESI
005F26A8  5B                        POP EBX
005F26A9  8B E5                     MOV ESP,EBP
005F26AB  5D                        POP EBP
005F26AC  C2 18 00                  RET 0x18
FUN_005f23d0::cf_common_exit_005F26AF:
005F26AF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F26B2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F26B5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F26B8  6A 00                     PUSH 0x0
005F26BA  6A 00                     PUSH 0x0
005F26BC  52                        PUSH EDX
005F26BD  6A 00                     PUSH 0x0
005F26BF  50                        PUSH EAX
005F26C0  53                        PUSH EBX
005F26C1  E8 EF 33 E1 FF            CALL 0x00405ab5
005F26C6  85 C0                     TEST EAX,EAX
005F26C8  7C 07                     JL 0x005f26d1
005F26CA  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005f26d1:
005F26D1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F26D4  5F                        POP EDI
005F26D5  5E                        POP ESI
005F26D6  5B                        POP EBX
005F26D7  8B E5                     MOV ESP,EBP
005F26D9  5D                        POP EBP
005F26DA  C2 18 00                  RET 0x18
LAB_005f26dd:
005F26DD  33 C0                     XOR EAX,EAX
005F26DF  8B E5                     MOV ESP,EBP
005F26E1  5D                        POP EBP
005F26E2  C2 18 00                  RET 0x18
