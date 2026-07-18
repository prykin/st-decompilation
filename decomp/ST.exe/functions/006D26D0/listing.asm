FUN_006d26d0:
006D26D0  55                        PUSH EBP
006D26D1  8B EC                     MOV EBP,ESP
006D26D3  56                        PUSH ESI
006D26D4  57                        PUSH EDI
006D26D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D26D8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_006d26db:
006D26DB  33 C9                     XOR ECX,ECX
006D26DD  8A 0E                     MOV CL,byte ptr [ESI]
006D26DF  46                        INC ESI
006D26E0  0B C9                     OR ECX,ECX
006D26E2  0F 84 17 01 00 00         JZ 0x006d27ff
006D26E8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_006d26eb:
006D26EB  F6 C1 80                  TEST CL,0x80
006D26EE  75 10                     JNZ 0x006d2700
LAB_006d26f0:
006D26F0  3B CA                     CMP ECX,EDX
006D26F2  7F 36                     JG 0x006d272a
006D26F4  2B D1                     SUB EDX,ECX
006D26F6  33 C9                     XOR ECX,ECX
006D26F8  8A 0E                     MOV CL,byte ptr [ESI]
006D26FA  46                        INC ESI
006D26FB  F6 C1 80                  TEST CL,0x80
006D26FE  74 F0                     JZ 0x006d26f0
LAB_006d2700:
006D2700  F6 C1 40                  TEST CL,0x40
006D2703  74 13                     JZ 0x006d2718
006D2705  80 E1 3F                  AND CL,0x3f
006D2708  3B CA                     CMP ECX,EDX
006D270A  7F 25                     JG 0x006d2731
006D270C  2B D1                     SUB EDX,ECX
006D270E  33 C9                     XOR ECX,ECX
006D2710  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
006D2713  83 C6 02                  ADD ESI,0x2
006D2716  EB D3                     JMP 0x006d26eb
LAB_006d2718:
006D2718  80 E1 3F                  AND CL,0x3f
006D271B  3B CA                     CMP ECX,EDX
006D271D  7F 19                     JG 0x006d2738
006D271F  03 F1                     ADD ESI,ECX
006D2721  2B D1                     SUB EDX,ECX
006D2723  33 C9                     XOR ECX,ECX
006D2725  8A 0E                     MOV CL,byte ptr [ESI]
006D2727  46                        INC ESI
006D2728  EB C1                     JMP 0x006d26eb
LAB_006d272a:
006D272A  2A CA                     SUB CL,DL
006D272C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D272F  EB 35                     JMP 0x006d2766
LAB_006d2731:
006D2731  2A CA                     SUB CL,DL
006D2733  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D2736  EB 13                     JMP 0x006d274b
LAB_006d2738:
006D2738  03 F2                     ADD ESI,EDX
006D273A  2A CA                     SUB CL,DL
006D273C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D273F  EB 18                     JMP 0x006d2759
LAB_006d2741:
006D2741  F6 C1 80                  TEST CL,0x80
006D2744  74 20                     JZ 0x006d2766
006D2746  F6 C1 40                  TEST CL,0x40
006D2749  74 0E                     JZ 0x006d2759
LAB_006d274b:
006D274B  83 E1 3F                  AND ECX,0x3f
006D274E  AC                        LODSB ESI
006D274F  3B CA                     CMP ECX,EDX
006D2751  7F 28                     JG 0x006d277b
006D2753  2B D1                     SUB EDX,ECX
006D2755  F3 AA                     STOSB.REP ES:EDI
006D2757  EB 15                     JMP 0x006d276e
LAB_006d2759:
006D2759  83 E1 3F                  AND ECX,0x3f
006D275C  3B CA                     CMP ECX,EDX
006D275E  7F 2B                     JG 0x006d278b
006D2760  2B D1                     SUB EDX,ECX
006D2762  F3 A4                     MOVSB.REP ES:EDI,ESI
006D2764  EB 08                     JMP 0x006d276e
LAB_006d2766:
006D2766  3B CA                     CMP ECX,EDX
006D2768  7F 30                     JG 0x006d279a
006D276A  2B D1                     SUB EDX,ECX
006D276C  03 F9                     ADD EDI,ECX
LAB_006d276e:
006D276E  33 C9                     XOR ECX,ECX
006D2770  0B D2                     OR EDX,EDX
006D2772  7E 30                     JLE 0x006d27a4
006D2774  33 C9                     XOR ECX,ECX
006D2776  8A 0E                     MOV CL,byte ptr [ESI]
006D2778  46                        INC ESI
006D2779  EB C6                     JMP 0x006d2741
LAB_006d277b:
006D277B  87 CA                     XCHG EDX,ECX
006D277D  4E                        DEC ESI
006D277E  80 CA C0                  OR DL,0xc0
006D2781  0B C9                     OR ECX,ECX
006D2783  7E 1F                     JLE 0x006d27a4
006D2785  2B D1                     SUB EDX,ECX
006D2787  F3 AA                     STOSB.REP ES:EDI
006D2789  EB 19                     JMP 0x006d27a4
LAB_006d278b:
006D278B  87 CA                     XCHG EDX,ECX
006D278D  80 CA 80                  OR DL,0x80
006D2790  0B C9                     OR ECX,ECX
006D2792  7E 10                     JLE 0x006d27a4
006D2794  2B D1                     SUB EDX,ECX
006D2796  F3 A4                     MOVSB.REP ES:EDI,ESI
006D2798  EB 0A                     JMP 0x006d27a4
LAB_006d279a:
006D279A  87 CA                     XCHG EDX,ECX
006D279C  0B C9                     OR ECX,ECX
006D279E  7E 04                     JLE 0x006d27a4
006D27A0  2B D1                     SUB EDX,ECX
006D27A2  03 F9                     ADD EDI,ECX
LAB_006d27a4:
006D27A4  8B CA                     MOV ECX,EDX
006D27A6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006D27A9  2B 55 1C                  SUB EDX,dword ptr [EBP + 0x1c]
006D27AC  2B 55 18                  SUB EDX,dword ptr [EBP + 0x18]
LAB_006d27af:
006D27AF  F6 C1 80                  TEST CL,0x80
006D27B2  75 10                     JNZ 0x006d27c4
LAB_006d27b4:
006D27B4  3B CA                     CMP ECX,EDX
006D27B6  7D 36                     JGE 0x006d27ee
006D27B8  2B D1                     SUB EDX,ECX
006D27BA  33 C9                     XOR ECX,ECX
006D27BC  8A 0E                     MOV CL,byte ptr [ESI]
006D27BE  46                        INC ESI
006D27BF  F6 C1 80                  TEST CL,0x80
006D27C2  74 F0                     JZ 0x006d27b4
LAB_006d27c4:
006D27C4  F6 C1 40                  TEST CL,0x40
006D27C7  74 11                     JZ 0x006d27da
006D27C9  80 E1 3F                  AND CL,0x3f
006D27CC  46                        INC ESI
006D27CD  3B CA                     CMP ECX,EDX
006D27CF  7D 1D                     JGE 0x006d27ee
006D27D1  2B D1                     SUB EDX,ECX
006D27D3  33 C9                     XOR ECX,ECX
006D27D5  8A 0E                     MOV CL,byte ptr [ESI]
006D27D7  46                        INC ESI
006D27D8  EB D5                     JMP 0x006d27af
LAB_006d27da:
006D27DA  80 E1 3F                  AND CL,0x3f
006D27DD  3B CA                     CMP ECX,EDX
006D27DF  7D 0B                     JGE 0x006d27ec
006D27E1  03 F1                     ADD ESI,ECX
006D27E3  2B D1                     SUB EDX,ECX
006D27E5  33 C9                     XOR ECX,ECX
006D27E7  8A 0E                     MOV CL,byte ptr [ESI]
006D27E9  46                        INC ESI
006D27EA  EB C3                     JMP 0x006d27af
LAB_006d27ec:
006D27EC  03 F1                     ADD ESI,ECX
LAB_006d27ee:
006D27EE  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D27F1  2B 7D 1C                  SUB EDI,dword ptr [EBP + 0x1c]
006D27F4  FF 4D 20                  DEC dword ptr [EBP + 0x20]
006D27F7  0F 8F DE FE FF FF         JG 0x006d26db
006D27FD  EB 0C                     JMP 0x006d280b
LAB_006d27ff:
006D27FF  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D2802  FF 4D 20                  DEC dword ptr [EBP + 0x20]
006D2805  0F 8F D0 FE FF FF         JG 0x006d26db
LAB_006d280b:
006D280B  5F                        POP EDI
006D280C  5E                        POP ESI
006D280D  5D                        POP EBP
006D280E  C2 1C 00                  RET 0x1c
