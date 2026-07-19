FUN_004b2520:
004B2520  55                        PUSH EBP
004B2521  8B EC                     MOV EBP,ESP
004B2523  6A FF                     PUSH -0x1
004B2525  68 40 09 79 00            PUSH 0x790940
004B252A  68 64 D9 72 00            PUSH 0x72d964
004B252F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
004B2535  50                        PUSH EAX
004B2536  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
004B253D  83 EC 64                  SUB ESP,0x64
004B2540  53                        PUSH EBX
004B2541  56                        PUSH ESI
004B2542  57                        PUSH EDI
004B2543  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004B2546  33 F6                     XOR ESI,ESI
004B2548  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004B254B  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
004B254E  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004B2551  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004B2554  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
004B255A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004B255D  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
004B2563  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B2566  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
004B256C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004B256F  89 30                     MOV dword ptr [EAX],ESI
004B2571  C7 45 BC 01 00 00 00      MOV dword ptr [EBP + -0x44],0x1
004B2578  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004B257B  B8 B4 00 00 00            MOV EAX,0xb4
004B2580  E8 BB B4 27 00            CALL 0x0072da40
004B2585  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004B2588  8B C4                     MOV EAX,ESP
004B258A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004B258D  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
004B2590  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
004B2597  EB 2B                     JMP 0x004b25c4
LAB_004b25c4:
004B25C4  6A 01                     PUSH 0x1
004B25C6  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
004B25C9  52                        PUSH EDX
004B25CA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004B25CD  50                        PUSH EAX
004B25CE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B25D1  51                        PUSH ECX
004B25D2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B25D5  57                        PUSH EDI
004B25D6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004B25D9  53                        PUSH EBX
004B25DA  E8 2F 13 F5 FF            CALL 0x0040390e
004B25DF  83 C4 18                  ADD ESP,0x18
004B25E2  85 C0                     TEST EAX,EAX
004B25E4  74 3A                     JZ 0x004b2620
004B25E6  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
004B25E9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B25EC  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004B25EF  89 38                     MOV dword ptr [EAX],EDI
004B25F1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B25F4  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004B25F7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B25FA  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
004B25FD  46                        INC ESI
004B25FE  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
FUN_004b2520::cf_common_exit_004B2601:
004B2601  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004B2604  85 C9                     TEST ECX,ECX
004B2606  0F 84 4A 05 00 00         JZ 0x004b2b56
004B260C  83 F9 01                  CMP ECX,0x1
004B260F  0F 8E 1F 05 00 00         JLE 0x004b2b34
004B2615  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
004B2618  99                        CDQ
004B2619  F7 F9                     IDIV ECX
004B261B  E9 16 05 00 00            JMP 0x004b2b36
LAB_004b2620:
004B2620  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B2623  83 FE 32                  CMP ESI,0x32
004B2626  7C 27                     JL 0x004b264f
004B2628  83 FE 74                  CMP ESI,0x74
004B262B  7D 22                     JGE 0x004b264f
004B262D  53                        PUSH EBX
004B262E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B2634  E8 7E 23 F5 FF            CALL 0x004049b7
004B2639  25 FF 00 00 00            AND EAX,0xff
004B263E  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
004B2641  03 C1                     ADD EAX,ECX
004B2643  8B 14 85 20 3F 7E 00      MOV EDX,dword ptr [EAX*0x4 + 0x7e3f20]
004B264A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004B264D  EB 1C                     JMP 0x004b266b
LAB_004b264f:
004B264F  83 FE 01                  CMP ESI,0x1
004B2652  0F 8C 29 02 00 00         JL 0x004b2881
004B2658  83 FE 29                  CMP ESI,0x29
004B265B  0F 8D 20 02 00 00         JGE 0x004b2881
004B2661  8B 04 B5 AC FB 7D 00      MOV EAX,dword ptr [ESI*0x4 + 0x7dfbac]
004B2668  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_004b266b:
004B266B  8D 47 F8                  LEA EAX,[EDI + -0x8]
004B266E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004B2671  8D 4F 08                  LEA ECX,[EDI + 0x8]
004B2674  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004B2677  3B C1                     CMP EAX,ECX
004B2679  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B267F  0F 8F 09 02 00 00         JG 0x004b288e
LAB_004b2685:
004B2685  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B2688  85 C0                     TEST EAX,EAX
004B268A  0F 8C D1 01 00 00         JL 0x004b2861
004B2690  0F BF D1                  MOVSX EDX,CX
004B2693  3B C2                     CMP EAX,EDX
004B2695  0F 8D C6 01 00 00         JGE 0x004b2861
004B269B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B269E  8D 42 F8                  LEA EAX,[EDX + -0x8]
004B26A1  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004B26A4  83 C2 08                  ADD EDX,0x8
004B26A7  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
004B26AA  3B C2                     CMP EAX,EDX
004B26AC  0F 8F AF 01 00 00         JG 0x004b2861
LAB_004b26b2:
004B26B2  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B26B5  85 C0                     TEST EAX,EAX
004B26B7  0F 8C 94 01 00 00         JL 0x004b2851
004B26BD  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B26C4  39 45 C4                  CMP dword ptr [EBP + -0x3c],EAX
004B26C7  0F 8D 84 01 00 00         JGE 0x004b2851
004B26CD  33 F6                     XOR ESI,ESI
004B26CF  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B26D6  4A                        DEC EDX
004B26D7  85 D2                     TEST EDX,EDX
004B26D9  0F 8E 72 01 00 00         JLE 0x004b2851
LAB_004b26df:
004B26DF  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B26E2  66 85 C0                  TEST AX,AX
004B26E5  7C 4D                     JL 0x004b2734
004B26E7  66 3B C1                  CMP AX,CX
004B26EA  7D 48                     JGE 0x004b2734
004B26EC  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B26EF  66 85 C0                  TEST AX,AX
004B26F2  7C 40                     JL 0x004b2734
004B26F4  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004B26FB  7D 37                     JGE 0x004b2734
004B26FD  66 85 F6                  TEST SI,SI
004B2700  7C 32                     JL 0x004b2734
004B2702  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004B2709  7D 29                     JGE 0x004b2734
004B270B  0F BF C0                  MOVSX EAX,AX
004B270E  0F BF D1                  MOVSX EDX,CX
004B2711  0F AF C2                  IMUL EAX,EDX
004B2714  0F BF D6                  MOVSX EDX,SI
004B2717  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004B271E  0F AF D7                  IMUL EDX,EDI
004B2721  03 C2                     ADD EAX,EDX
004B2723  0F BF 55 C8               MOVSX EDX,word ptr [EBP + -0x38]
004B2727  03 C2                     ADD EAX,EDX
004B2729  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004B272F  8B 3C C2                  MOV EDI,dword ptr [EDX + EAX*0x8]
004B2732  EB 02                     JMP 0x004b2736
LAB_004b2734:
004B2734  33 FF                     XOR EDI,EDI
LAB_004b2736:
004B2736  85 FF                     TEST EDI,EDI
004B2738  0F 84 FF 00 00 00         JZ 0x004b283d
004B273E  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004B2741  83 F8 08                  CMP EAX,0x8
004B2744  0F 83 F3 00 00 00         JNC 0x004b283d
004B274A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B2750  85 D2                     TEST EDX,EDX
004B2752  74 11                     JZ 0x004b2765
004B2754  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B2757  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004B275F  0F 83 D8 00 00 00         JNC 0x004b283d
LAB_004b2765:
004B2765  8B 07                     MOV EAX,dword ptr [EDI]
004B2767  8B CF                     MOV ECX,EDI
004B2769  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B276C  83 F8 6F                  CMP EAX,0x6f
004B276F  0F 85 C2 00 00 00         JNZ 0x004b2837
004B2775  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004B2778  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
004B277B  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004B2781  84 C9                     TEST CL,CL
004B2783  74 2A                     JZ 0x004b27af
004B2785  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004B2788  25 FF 00 00 00            AND EAX,0xff
004B278D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
004B2790  8B C3                     MOV EAX,EBX
004B2792  25 FF 00 00 00            AND EAX,0xff
004B2797  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B279A  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004B27A1  33 C0                     XOR EAX,EAX
004B27A3  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004B27AA  0F 95 C0                  SETNZ AL
004B27AD  EB 79                     JMP 0x004b2828
LAB_004b27af:
004B27AF  3A C3                     CMP AL,BL
004B27B1  74 6A                     JZ 0x004b281d
004B27B3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004B27B6  25 FF 00 00 00            AND EAX,0xff
004B27BB  8B CB                     MOV ECX,EBX
004B27BD  81 E1 FF 00 00 00         AND ECX,0xff
004B27C3  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
004B27CA  84 D2                     TEST DL,DL
004B27CC  75 10                     JNZ 0x004b27de
004B27CE  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
004B27D5  75 07                     JNZ 0x004b27de
004B27D7  B8 FE FF FF FF            MOV EAX,0xfffffffe
004B27DC  EB 41                     JMP 0x004b281f
LAB_004b27de:
004B27DE  80 FA 01                  CMP DL,0x1
004B27E1  75 0F                     JNZ 0x004b27f2
004B27E3  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
004B27EB  75 05                     JNZ 0x004b27f2
004B27ED  83 C8 FF                  OR EAX,0xffffffff
004B27F0  EB 2D                     JMP 0x004b281f
LAB_004b27f2:
004B27F2  84 D2                     TEST DL,DL
004B27F4  75 11                     JNZ 0x004b2807
004B27F6  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004B27FE  75 07                     JNZ 0x004b2807
004B2800  B8 01 00 00 00            MOV EAX,0x1
004B2805  EB 18                     JMP 0x004b281f
LAB_004b2807:
004B2807  80 FA 01                  CMP DL,0x1
004B280A  75 11                     JNZ 0x004b281d
004B280C  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
004B2814  75 07                     JNZ 0x004b281d
004B2816  B8 02 00 00 00            MOV EAX,0x2
004B281B  EB 02                     JMP 0x004b281f
LAB_004b281d:
004B281D  33 C0                     XOR EAX,EAX
LAB_004b281f:
004B281F  33 C9                     XOR ECX,ECX
004B2821  85 C0                     TEST EAX,EAX
004B2823  0F 9C C1                  SETL CL
004B2826  8B C1                     MOV EAX,ECX
LAB_004b2828:
004B2828  85 C0                     TEST EAX,EAX
004B282A  74 0B                     JZ 0x004b2837
004B282C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004B282F  39 97 D0 04 00 00         CMP dword ptr [EDI + 0x4d0],EDX
004B2835  7F 3C                     JG 0x004b2873
LAB_004b2837:
004B2837  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b283d:
004B283D  46                        INC ESI
004B283E  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B2845  48                        DEC EAX
004B2846  3B F0                     CMP ESI,EAX
004B2848  0F 8C 91 FE FF FF         JL 0x004b26df
004B284E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_004b2851:
004B2851  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B2854  40                        INC EAX
004B2855  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004B2858  3B 45 A4                  CMP EAX,dword ptr [EBP + -0x5c]
004B285B  0F 8E 51 FE FF FF         JLE 0x004b26b2
LAB_004b2861:
004B2861  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004B2864  40                        INC EAX
004B2865  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004B2868  3B 45 A8                  CMP EAX,dword ptr [EBP + -0x58]
004B286B  0F 8E 14 FE FF FF         JLE 0x004b2685
004B2871  EB 1B                     JMP 0x004b288e
LAB_004b2873:
004B2873  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
004B2876  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B287C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004B287F  EB 0D                     JMP 0x004b288e
LAB_004b2881:
004B2881  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
004B2888  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b288e:
004B288E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004B2891  33 D2                     XOR EDX,EDX
004B2893  3B C2                     CMP EAX,EDX
004B2895  74 2B                     JZ 0x004b28c2
004B2897  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004B289A  29 88 D0 04 00 00         SUB dword ptr [EAX + 0x4d0],ECX
004B28A0  79 06                     JNS 0x004b28a8
004B28A2  89 90 D0 04 00 00         MOV dword ptr [EAX + 0x4d0],EDX
LAB_004b28a8:
004B28A8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B28AE  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
004B28B4  89 88 D4 04 00 00         MOV dword ptr [EAX + 0x4d4],ECX
004B28BA  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B28C0  EB 2F                     JMP 0x004b28f1
LAB_004b28c2:
004B28C2  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
004B28C5  39 10                     CMP dword ptr [EAX],EDX
004B28C7  74 25                     JZ 0x004b28ee
004B28C9  89 10                     MOV dword ptr [EAX],EDX
004B28CB  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004B28CE  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
004B28D1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B28D4  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
004B28D7  89 38                     MOV dword ptr [EAX],EDI
004B28D9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B28DC  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
004B28DF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B28E2  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
004B28E5  41                        INC ECX
004B28E6  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004B28E9  E9 13 FD FF FF            JMP 0x004b2601
LAB_004b28ee:
004B28EE  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
LAB_004b28f1:
004B28F1  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
004B28F8  8D 47 01                  LEA EAX,[EDI + 0x1]
004B28FB  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B28FE  8D 57 FF                  LEA EDX,[EDI + -0x1]
004B2901  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
004B2904  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B2907  2B C7                     SUB EAX,EDI
004B2909  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
LAB_004b290c:
004B290C  66 A1 42 B2 7F 00         MOV AX,[0x007fb242]
004B2912  66 3B C8                  CMP CX,AX
004B2915  7E 02                     JLE 0x004b2919
004B2917  8B C1                     MOV EAX,ECX
LAB_004b2919:
004B2919  0F BF C0                  MOVSX EAX,AX
004B291C  39 45 DC                  CMP dword ptr [EBP + -0x24],EAX
004B291F  0F 8D DC FC FF FF         JGE 0x004b2601
004B2925  33 DB                     XOR EBX,EBX
004B2927  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B292E  4A                        DEC EDX
004B292F  85 D2                     TEST EDX,EDX
004B2931  0F 8E EF 01 00 00         JLE 0x004b2b26
004B2937  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B293A  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
004B293D  EB 06                     JMP 0x004b2945
LAB_004b293f:
004B293F  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
004B2942  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
LAB_004b2945:
004B2945  3B 7D A0                  CMP EDI,dword ptr [EBP + -0x60]
004B2948  0F 8F DE 00 00 00         JG 0x004b2a2c
004B294E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B2951  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004B2954  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
LAB_004b2957:
004B2957  85 FF                     TEST EDI,EDI
004B2959  0F 8C C3 00 00 00         JL 0x004b2a22
004B295F  0F BF C1                  MOVSX EAX,CX
004B2962  3B F8                     CMP EDI,EAX
004B2964  0F 8D B8 00 00 00         JGE 0x004b2a22
004B296A  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004B296D  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004B2970  03 C2                     ADD EAX,EDX
004B2972  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004B2975  85 C0                     TEST EAX,EAX
004B2977  7C 4D                     JL 0x004b29c6
004B2979  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B2980  3B C2                     CMP EAX,EDX
004B2982  7D 42                     JGE 0x004b29c6
004B2984  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B2987  50                        PUSH EAX
004B2988  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
004B298B  51                        PUSH ECX
004B298C  53                        PUSH EBX
004B298D  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
004B2990  52                        PUSH EDX
004B2991  57                        PUSH EDI
004B2992  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2995  50                        PUSH EAX
004B2996  E8 73 0F F5 FF            CALL 0x0040390e
004B299B  83 C4 18                  ADD ESP,0x18
004B299E  85 C0                     TEST EAX,EAX
004B29A0  74 1E                     JZ 0x004b29c0
004B29A2  89 3E                     MOV dword ptr [ESI],EDI
004B29A4  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
004B29A7  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
004B29AA  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
004B29AD  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B29B0  40                        INC EAX
004B29B1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B29B4  83 C6 0C                  ADD ESI,0xc
004B29B7  83 F8 0F                  CMP EAX,0xf
004B29BA  0F 8D 41 FC FF FF         JGE 0x004b2601
LAB_004b29c0:
004B29C0  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b29c6:
004B29C6  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004B29C9  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004B29CC  03 C2                     ADD EAX,EDX
004B29CE  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004B29D1  85 C0                     TEST EAX,EAX
004B29D3  7C 4D                     JL 0x004b2a22
004B29D5  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B29DC  3B C2                     CMP EAX,EDX
004B29DE  7D 42                     JGE 0x004b2a22
004B29E0  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B29E3  50                        PUSH EAX
004B29E4  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
004B29E7  51                        PUSH ECX
004B29E8  53                        PUSH EBX
004B29E9  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
004B29EC  52                        PUSH EDX
004B29ED  57                        PUSH EDI
004B29EE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B29F1  50                        PUSH EAX
004B29F2  E8 17 0F F5 FF            CALL 0x0040390e
004B29F7  83 C4 18                  ADD ESP,0x18
004B29FA  85 C0                     TEST EAX,EAX
004B29FC  74 1E                     JZ 0x004b2a1c
004B29FE  89 3E                     MOV dword ptr [ESI],EDI
004B2A00  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
004B2A03  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
004B2A06  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
004B2A09  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B2A0C  40                        INC EAX
004B2A0D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B2A10  83 C6 0C                  ADD ESI,0xc
004B2A13  83 F8 0F                  CMP EAX,0xf
004B2A16  0F 8D E5 FB FF FF         JGE 0x004b2601
LAB_004b2a1c:
004B2A1C  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b2a22:
004B2A22  47                        INC EDI
004B2A23  3B 7D A0                  CMP EDI,dword ptr [EBP + -0x60]
004B2A26  0F 8E 2B FF FF FF         JLE 0x004b2957
LAB_004b2a2c:
004B2A2C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004B2A2F  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004B2A32  8D 7C 10 01               LEA EDI,[EAX + EDX*0x1 + 0x1]
004B2A36  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004B2A39  8D 44 10 FF               LEA EAX,[EAX + EDX*0x1 + -0x1]
004B2A3D  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004B2A40  3B F8                     CMP EDI,EAX
004B2A42  0F 8F CD 00 00 00         JG 0x004b2b15
004B2A48  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B2A4B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B2A4E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004B2A51  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
LAB_004b2a54:
004B2A54  85 FF                     TEST EDI,EDI
004B2A56  0F 8C AF 00 00 00         JL 0x004b2b0b
004B2A5C  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B2A63  3B F8                     CMP EDI,EAX
004B2A65  0F 8D A0 00 00 00         JGE 0x004b2b0b
004B2A6B  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004B2A6E  85 C0                     TEST EAX,EAX
004B2A70  7C 49                     JL 0x004b2abb
004B2A72  0F BF D1                  MOVSX EDX,CX
004B2A75  3B C2                     CMP EAX,EDX
004B2A77  7D 42                     JGE 0x004b2abb
004B2A79  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B2A7C  50                        PUSH EAX
004B2A7D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
004B2A80  51                        PUSH ECX
004B2A81  53                        PUSH EBX
004B2A82  57                        PUSH EDI
004B2A83  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004B2A86  52                        PUSH EDX
004B2A87  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2A8A  50                        PUSH EAX
004B2A8B  E8 7E 0E F5 FF            CALL 0x0040390e
004B2A90  83 C4 18                  ADD ESP,0x18
004B2A93  85 C0                     TEST EAX,EAX
004B2A95  74 1E                     JZ 0x004b2ab5
004B2A97  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004B2A9A  89 0E                     MOV dword ptr [ESI],ECX
004B2A9C  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
004B2A9F  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
004B2AA2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B2AA5  40                        INC EAX
004B2AA6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B2AA9  83 C6 0C                  ADD ESI,0xc
004B2AAC  83 F8 0F                  CMP EAX,0xf
004B2AAF  0F 8D 4C FB FF FF         JGE 0x004b2601
LAB_004b2ab5:
004B2AB5  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b2abb:
004B2ABB  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
004B2ABE  85 C0                     TEST EAX,EAX
004B2AC0  7C 49                     JL 0x004b2b0b
004B2AC2  0F BF D1                  MOVSX EDX,CX
004B2AC5  3B C2                     CMP EAX,EDX
004B2AC7  7D 42                     JGE 0x004b2b0b
004B2AC9  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004B2ACC  50                        PUSH EAX
004B2ACD  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
004B2AD0  51                        PUSH ECX
004B2AD1  53                        PUSH EBX
004B2AD2  57                        PUSH EDI
004B2AD3  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
004B2AD6  52                        PUSH EDX
004B2AD7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2ADA  50                        PUSH EAX
004B2ADB  E8 2E 0E F5 FF            CALL 0x0040390e
004B2AE0  83 C4 18                  ADD ESP,0x18
004B2AE3  85 C0                     TEST EAX,EAX
004B2AE5  74 1E                     JZ 0x004b2b05
004B2AE7  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
004B2AEA  89 0E                     MOV dword ptr [ESI],ECX
004B2AEC  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
004B2AEF  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
004B2AF2  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004B2AF5  40                        INC EAX
004B2AF6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B2AF9  83 C6 0C                  ADD ESI,0xc
004B2AFC  83 F8 0F                  CMP EAX,0xf
004B2AFF  0F 8D FC FA FF FF         JGE 0x004b2601
LAB_004b2b05:
004B2B05  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
LAB_004b2b0b:
004B2B0B  47                        INC EDI
004B2B0C  3B 7D 8C                  CMP EDI,dword ptr [EBP + -0x74]
004B2B0F  0F 8E 3F FF FF FF         JLE 0x004b2a54
LAB_004b2b15:
004B2B15  43                        INC EBX
004B2B16  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004B2B1D  4A                        DEC EDX
004B2B1E  3B DA                     CMP EBX,EDX
004B2B20  0F 8C 19 FE FF FF         JL 0x004b293f
LAB_004b2b26:
004B2B26  FF 45 DC                  INC dword ptr [EBP + -0x24]
004B2B29  FF 4D 9C                  DEC dword ptr [EBP + -0x64]
004B2B2C  FF 45 A0                  INC dword ptr [EBP + -0x60]
004B2B2F  E9 D8 FD FF FF            JMP 0x004b290c
LAB_004b2b34:
004B2B34  33 D2                     XOR EDX,EDX
LAB_004b2b36:
004B2B36  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
004B2B39  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004B2B3C  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
004B2B3F  8B 10                     MOV EDX,dword ptr [EAX]
004B2B41  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004B2B44  89 11                     MOV dword ptr [ECX],EDX
004B2B46  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004B2B49  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004B2B4C  89 11                     MOV dword ptr [ECX],EDX
004B2B4E  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004B2B51  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004B2B54  89 10                     MOV dword ptr [EAX],EDX
LAB_004b2b56:
004B2B56  33 C0                     XOR EAX,EAX
004B2B58  8D 65 80                  LEA ESP,[EBP + -0x80]
004B2B5B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B2B5E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004B2B65  5F                        POP EDI
004B2B66  5E                        POP ESI
004B2B67  5B                        POP EBX
004B2B68  8B E5                     MOV ESP,EBP
004B2B6A  5D                        POP EBP
004B2B6B  C3                        RET
