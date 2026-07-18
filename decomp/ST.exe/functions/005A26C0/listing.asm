FUN_005a26c0:
005A26C0  55                        PUSH EBP
005A26C1  8B EC                     MOV EBP,ESP
005A26C3  81 EC 80 00 00 00         SUB ESP,0x80
005A26C9  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A26CF  53                        PUSH EBX
005A26D0  56                        PUSH ESI
005A26D1  3C 06                     CMP AL,0x6
005A26D3  57                        PUSH EDI
005A26D4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005A26D7  0F 85 AC 02 00 00         JNZ 0x005a2989
005A26DD  8A 81 60 1A 00 00         MOV AL,byte ptr [ECX + 0x1a60]
005A26E3  84 C0                     TEST AL,AL
005A26E5  0F 85 9E 02 00 00         JNZ 0x005a2989
005A26EB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A26F0  8D 55 84                  LEA EDX,[EBP + -0x7c]
005A26F3  8D 4D 80                  LEA ECX,[EBP + -0x80]
005A26F6  6A 00                     PUSH 0x0
005A26F8  52                        PUSH EDX
005A26F9  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
005A26FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2702  E8 E9 B0 18 00            CALL 0x0072d7f0
005A2707  8B F0                     MOV ESI,EAX
005A2709  83 C4 08                  ADD ESP,0x8
005A270C  85 F6                     TEST ESI,ESI
005A270E  0F 85 36 02 00 00         JNZ 0x005a294a
005A2714  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005A2717  8B CB                     MOV ECX,EBX
005A2719  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A271C  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A2723  50                        PUSH EAX
005A2724  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A272A  50                        PUSH EAX
005A272B  6A 02                     PUSH 0x2
005A272D  E8 4E 39 14 00            CALL 0x006e6080
005A2732  8B 8B A6 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea6]
005A2738  33 C0                     XOR EAX,EAX
005A273A  66 8B 43 31               MOV AX,word ptr [EBX + 0x31]
005A273E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A2741  3B C2                     CMP EAX,EDX
005A2743  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005A2746  73 0E                     JNC 0x005a2756
005A2748  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
005A274B  0F AF F0                  IMUL ESI,EAX
005A274E  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
005A2751  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005A2754  EB 0A                     JMP 0x005a2760
LAB_005a2756:
005A2756  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005A275D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005a2760:
005A2760  85 F6                     TEST ESI,ESI
005A2762  74 0C                     JZ 0x005a2770
005A2764  B9 0B 00 00 00            MOV ECX,0xb
005A2769  8D 7D C4                  LEA EDI,[EBP + -0x3c]
005A276C  F3 A5                     MOVSD.REP ES:EDI,ESI
005A276E  66 A5                     MOVSW ES:EDI,ESI
LAB_005a2770:
005A2770  33 C9                     XOR ECX,ECX
005A2772  85 D2                     TEST EDX,EDX
005A2774  76 64                     JBE 0x005a27da
005A2776  3B CA                     CMP ECX,EDX
005A2778  73 13                     JNC 0x005a278d
LAB_005a277a:
005A277A  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A2780  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A2783  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005A2786  0F AF F1                  IMUL ESI,ECX
005A2789  03 F7                     ADD ESI,EDI
005A278B  EB 02                     JMP 0x005a278f
LAB_005a278d:
005A278D  33 F6                     XOR ESI,ESI
LAB_005a278f:
005A278F  85 F6                     TEST ESI,ESI
005A2791  74 33                     JZ 0x005a27c6
005A2793  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_005a2796:
005A2796  8A 16                     MOV DL,byte ptr [ESI]
005A2798  8A C2                     MOV AL,DL
005A279A  3A 17                     CMP DL,byte ptr [EDI]
005A279C  75 1C                     JNZ 0x005a27ba
005A279E  84 C0                     TEST AL,AL
005A27A0  74 14                     JZ 0x005a27b6
005A27A2  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005A27A5  8A C2                     MOV AL,DL
005A27A7  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005A27AA  75 0E                     JNZ 0x005a27ba
005A27AC  83 C6 02                  ADD ESI,0x2
005A27AF  83 C7 02                  ADD EDI,0x2
005A27B2  84 C0                     TEST AL,AL
005A27B4  75 E0                     JNZ 0x005a2796
LAB_005a27b6:
005A27B6  33 C0                     XOR EAX,EAX
005A27B8  EB 05                     JMP 0x005a27bf
LAB_005a27ba:
005A27BA  1B C0                     SBB EAX,EAX
005A27BC  83 D8 FF                  SBB EAX,-0x1
LAB_005a27bf:
005A27BF  85 C0                     TEST EAX,EAX
005A27C1  74 0A                     JZ 0x005a27cd
005A27C3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005a27c6:
005A27C6  41                        INC ECX
005A27C7  3B CA                     CMP ECX,EDX
005A27C9  72 AF                     JC 0x005a277a
005A27CB  EB 0D                     JMP 0x005a27da
LAB_005a27cd:
005A27CD  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A27D3  51                        PUSH ECX
005A27D4  50                        PUSH EAX
005A27D5  E8 96 E4 10 00            CALL 0x006b0c70
LAB_005a27da:
005A27DA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A27DF  68 F3 00 00 00            PUSH 0xf3
005A27E4  68 24 01 00 00            PUSH 0x124
005A27E9  6A 5E                     PUSH 0x5e
005A27EB  68 E9 01 00 00            PUSH 0x1e9
005A27F0  50                        PUSH EAX
005A27F1  E8 8A 37 11 00            CALL 0x006b5f80
005A27F6  8B 8B 9A 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e9a]
005A27FC  51                        PUSH ECX
005A27FD  6A 01                     PUSH 0x1
005A27FF  68 F3 00 00 00            PUSH 0xf3
005A2804  68 24 01 00 00            PUSH 0x124
005A2809  6A 00                     PUSH 0x0
005A280B  6A 00                     PUSH 0x0
005A280D  6A 5E                     PUSH 0x5e
005A280F  68 E9 01 00 00            PUSH 0x1e9
005A2814  E8 7F FA E5 FF            CALL 0x00402298
005A2819  8B 93 A6 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea6]
005A281F  8B 8B 20 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b20]
005A2825  83 C4 20                  ADD ESP,0x20
005A2828  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005A282B  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005A2832  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A2835  56                        PUSH ESI
005A2836  51                        PUSH ECX
005A2837  6A 02                     PUSH 0x2
005A2839  8B CB                     MOV ECX,EBX
005A283B  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A283E  66 C7 43 35 01 00         MOV word ptr [EBX + 0x35],0x1
005A2844  E8 37 38 14 00            CALL 0x006e6080
005A2849  8B 93 A6 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea6]
005A284F  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A2856  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A2859  85 C0                     TEST EAX,EAX
005A285B  74 11                     JZ 0x005a286e
005A285D  8B 83 6B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6b]
005A2863  85 C0                     TEST EAX,EAX
005A2865  74 07                     JZ 0x005a286e
005A2867  B8 01 00 00 00            MOV EAX,0x1
005A286C  EB 02                     JMP 0x005a2870
LAB_005a286e:
005A286E  33 C0                     XOR EAX,EAX
LAB_005a2870:
005A2870  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A2873  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A2879  56                        PUSH ESI
005A287A  50                        PUSH EAX
005A287B  6A 02                     PUSH 0x2
005A287D  8B CB                     MOV ECX,EBX
005A287F  E8 FC 37 14 00            CALL 0x006e6080
005A2884  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A2887  85 C0                     TEST EAX,EAX
005A2889  0F 84 A9 00 00 00         JZ 0x005a2938
005A288F  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A2895  33 C9                     XOR ECX,ECX
005A2897  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005A289A  85 D2                     TEST EDX,EDX
005A289C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005A289F  0F 86 93 00 00 00         JBE 0x005a2938
005A28A5  3B CA                     CMP ECX,EDX
005A28A7  73 13                     JNC 0x005a28bc
LAB_005a28a9:
005A28A9  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A28AF  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A28B2  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005A28B5  0F AF F1                  IMUL ESI,ECX
005A28B8  03 F7                     ADD ESI,EDI
005A28BA  EB 02                     JMP 0x005a28be
LAB_005a28bc:
005A28BC  33 F6                     XOR ESI,ESI
LAB_005a28be:
005A28BE  85 F6                     TEST ESI,ESI
005A28C0  74 33                     JZ 0x005a28f5
005A28C2  8D 7D C4                  LEA EDI,[EBP + -0x3c]
LAB_005a28c5:
005A28C5  8A 16                     MOV DL,byte ptr [ESI]
005A28C7  8A C2                     MOV AL,DL
005A28C9  3A 17                     CMP DL,byte ptr [EDI]
005A28CB  75 1C                     JNZ 0x005a28e9
005A28CD  84 C0                     TEST AL,AL
005A28CF  74 14                     JZ 0x005a28e5
005A28D1  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005A28D4  8A C2                     MOV AL,DL
005A28D6  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005A28D9  75 0E                     JNZ 0x005a28e9
005A28DB  83 C6 02                  ADD ESI,0x2
005A28DE  83 C7 02                  ADD EDI,0x2
005A28E1  84 C0                     TEST AL,AL
005A28E3  75 E0                     JNZ 0x005a28c5
LAB_005a28e5:
005A28E5  33 C0                     XOR EAX,EAX
005A28E7  EB 05                     JMP 0x005a28ee
LAB_005a28e9:
005A28E9  1B C0                     SBB EAX,EAX
005A28EB  83 D8 FF                  SBB EAX,-0x1
LAB_005a28ee:
005A28EE  85 C0                     TEST EAX,EAX
005A28F0  74 1A                     JZ 0x005a290c
005A28F2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_005a28f5:
005A28F5  41                        INC ECX
005A28F6  3B CA                     CMP ECX,EDX
005A28F8  72 AF                     JC 0x005a28a9
005A28FA  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
005A28FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2903  5F                        POP EDI
005A2904  5E                        POP ESI
005A2905  5B                        POP EBX
005A2906  8B E5                     MOV ESP,EBP
005A2908  5D                        POP EBP
005A2909  C2 04 00                  RET 0x4
LAB_005a290c:
005A290C  B8 01 00 00 00            MOV EAX,0x1
005A2911  66 89 4B 31               MOV word ptr [EBX + 0x31],CX
005A2915  66 89 43 37               MOV word ptr [EBX + 0x37],AX
005A2919  66 89 43 35               MOV word ptr [EBX + 0x35],AX
005A291D  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A2920  8B CB                     MOV ECX,EBX
005A2922  50                        PUSH EAX
005A2923  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A2929  50                        PUSH EAX
005A292A  6A 02                     PUSH 0x2
005A292C  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005A2933  E8 48 37 14 00            CALL 0x006e6080
LAB_005a2938:
005A2938  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
005A293B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A2941  5F                        POP EDI
005A2942  5E                        POP ESI
005A2943  5B                        POP EBX
005A2944  8B E5                     MOV ESP,EBP
005A2946  5D                        POP EBP
005A2947  C2 04 00                  RET 0x4
LAB_005a294a:
005A294A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
005A294D  68 CC C4 7C 00            PUSH 0x7cc4cc
005A2952  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A2957  56                        PUSH ESI
005A2958  6A 00                     PUSH 0x0
005A295A  68 3C 0A 00 00            PUSH 0xa3c
005A295F  68 70 BF 7C 00            PUSH 0x7cbf70
005A2964  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A296A  E8 61 AB 10 00            CALL 0x006ad4d0
005A296F  83 C4 18                  ADD ESP,0x18
005A2972  85 C0                     TEST EAX,EAX
005A2974  74 01                     JZ 0x005a2977
005A2976  CC                        INT3
LAB_005a2977:
005A2977  68 3C 0A 00 00            PUSH 0xa3c
005A297C  68 70 BF 7C 00            PUSH 0x7cbf70
005A2981  6A 00                     PUSH 0x0
005A2983  56                        PUSH ESI
005A2984  E8 B7 34 10 00            CALL 0x006a5e40
LAB_005a2989:
005A2989  5F                        POP EDI
005A298A  5E                        POP ESI
005A298B  5B                        POP EBX
005A298C  8B E5                     MOV ESP,EBP
005A298E  5D                        POP EBP
005A298F  C2 04 00                  RET 0x4
