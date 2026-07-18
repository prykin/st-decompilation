FUN_006a23a0:
006A23A0  55                        PUSH EBP
006A23A1  8B EC                     MOV EBP,ESP
006A23A3  83 EC 0C                  SUB ESP,0xc
006A23A6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A23A9  53                        PUSH EBX
006A23AA  56                        PUSH ESI
006A23AB  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A23AE  85 F6                     TEST ESI,ESI
006A23B0  57                        PUSH EDI
006A23B1  C7 45 FC FF 00 00 00      MOV dword ptr [EBP + -0x4],0xff
006A23B8  75 27                     JNZ 0x006a23e1
006A23BA  66 8B 41 02               MOV AX,word ptr [ECX + 0x2]
006A23BE  66 85 C0                  TEST AX,AX
006A23C1  74 09                     JZ 0x006a23cc
006A23C3  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006A23CA  75 15                     JNZ 0x006a23e1
LAB_006a23cc:
006A23CC  66 8B 01                  MOV AX,word ptr [ECX]
006A23CF  66 85 C0                  TEST AX,AX
006A23D2  74 0D                     JZ 0x006a23e1
006A23D4  66 3D 01 00               CMP AX,0x1
006A23D8  74 07                     JZ 0x006a23e1
006A23DA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_006a23e1:
006A23E1  66 8B 41 04               MOV AX,word ptr [ECX + 0x4]
006A23E5  8B CE                     MOV ECX,ESI
006A23E7  C1 E8 08                  SHR EAX,0x8
006A23EA  83 E0 0F                  AND EAX,0xf
006A23ED  2B C8                     SUB ECX,EAX
006A23EF  3B F1                     CMP ESI,ECX
006A23F1  0F 8E 91 00 00 00         JLE 0x006a2488
006A23F7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A23FA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006a23fd:
006A23FD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A2400  68 FF 00 00 00            PUSH 0xff
006A2405  56                        PUSH ESI
006A2406  57                        PUSH EDI
006A2407  53                        PUSH EBX
006A2408  52                        PUSH EDX
006A2409  E8 A2 F5 D5 FF            CALL 0x004019b0
006A240E  83 C4 14                  ADD ESP,0x14
006A2411  85 C0                     TEST EAX,EAX
006A2413  74 58                     JZ 0x006a246d
006A2415  85 DB                     TEST EBX,EBX
006A2417  7C 54                     JL 0x006a246d
006A2419  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A241C  3B 18                     CMP EBX,dword ptr [EAX]
006A241E  7D 4D                     JGE 0x006a246d
006A2420  85 FF                     TEST EDI,EDI
006A2422  7C 49                     JL 0x006a246d
006A2424  3B 78 04                  CMP EDI,dword ptr [EAX + 0x4]
006A2427  7D 44                     JGE 0x006a246d
006A2429  85 F6                     TEST ESI,ESI
006A242B  7C 40                     JL 0x006a246d
006A242D  83 FE 06                  CMP ESI,0x6
006A2430  7D 3B                     JGE 0x006a246d
006A2432  8D 4D F4                  LEA ECX,[EBP + -0xc]
006A2435  51                        PUSH ECX
006A2436  56                        PUSH ESI
006A2437  57                        PUSH EDI
006A2438  53                        PUSH EBX
006A2439  50                        PUSH EAX
006A243A  E8 0D 1D D6 FF            CALL 0x0040414c
006A243F  83 C4 14                  ADD ESP,0x14
006A2442  66 85 C0                  TEST AX,AX
006A2445  74 07                     JZ 0x006a244e
006A2447  C7 45 FC FF 00 00 00      MOV dword ptr [EBP + -0x4],0xff
LAB_006a244e:
006A244E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A2451  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A2454  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A2457  52                        PUSH EDX
006A2458  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A245B  50                        PUSH EAX
006A245C  51                        PUSH ECX
006A245D  56                        PUSH ESI
006A245E  57                        PUSH EDI
006A245F  53                        PUSH EBX
006A2460  52                        PUSH EDX
006A2461  E8 A4 1D D6 FF            CALL 0x0040420a
006A2466  83 C4 1C                  ADD ESP,0x1c
006A2469  85 C0                     TEST EAX,EAX
006A246B  74 27                     JZ 0x006a2494
LAB_006a246d:
006A246D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A2470  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A2473  4E                        DEC ESI
006A2474  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
006A2478  C1 E9 08                  SHR ECX,0x8
006A247B  83 E1 0F                  AND ECX,0xf
006A247E  2B D1                     SUB EDX,ECX
006A2480  3B F2                     CMP ESI,EDX
006A2482  0F 8F 75 FF FF FF         JG 0x006a23fd
LAB_006a2488:
006A2488  5F                        POP EDI
006A2489  5E                        POP ESI
006A248A  B8 01 00 00 00            MOV EAX,0x1
006A248F  5B                        POP EBX
006A2490  8B E5                     MOV ESP,EBP
006A2492  5D                        POP EBP
006A2493  C3                        RET
LAB_006a2494:
006A2494  5F                        POP EDI
006A2495  5E                        POP ESI
006A2496  33 C0                     XOR EAX,EAX
006A2498  5B                        POP EBX
006A2499  8B E5                     MOV ESP,EBP
006A249B  5D                        POP EBP
006A249C  C3                        RET
