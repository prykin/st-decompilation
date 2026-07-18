FUN_006e25d0:
006E25D0  55                        PUSH EBP
006E25D1  8B EC                     MOV EBP,ESP
006E25D3  83 EC 08                  SUB ESP,0x8
006E25D6  56                        PUSH ESI
006E25D7  8B F1                     MOV ESI,ECX
006E25D9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E25DC  D9 41 08                  FLD float ptr [ECX + 0x8]
006E25DF  DC 45 20                  FADD double ptr [EBP + 0x20]
006E25E2  DD 55 20                  FST double ptr [EBP + 0x20]
006E25E5  D9 E1                     FABS
006E25E7  DC 1D 68 B1 79 00         FCOMP double ptr [0x0079b168]
006E25ED  DF E0                     FNSTSW AX
006E25EF  F6 C4 01                  TEST AH,0x1
006E25F2  74 0E                     JZ 0x006e2602
006E25F4  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
006E25FB  C7 45 24 00 00 00 00      MOV dword ptr [EBP + 0x24],0x0
LAB_006e2602:
006E2602  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E2608  A8 08                     TEST AL,0x8
006E260A  0F 84 40 01 00 00         JZ 0x006e2750
006E2610  24 F7                     AND AL,0xf7
006E2612  83 F8 03                  CMP EAX,0x3
006E2615  0F 87 0B 01 00 00         JA 0x006e2726
switchD_006e261b::switchD:
006E261B  FF 24 85 50 29 6E 00      JMP dword ptr [EAX*0x4 + 0x6e2950]
switchD_006e261b::caseD_0:
006E2622  D9 01                     FLD float ptr [ECX]
006E2624  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E262A  DC 45 10                  FADD double ptr [EBP + 0x10]
006E262D  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2633  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E2636  D9 41 04                  FLD float ptr [ECX + 0x4]
006E2639  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E263F  DC 45 18                  FADD double ptr [EBP + 0x18]
006E2642  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2648  DD 55 10                  FST double ptr [EBP + 0x10]
006E264B  DC 6D F8                  FSUBR double ptr [EBP + -0x8]
006E264E  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2651  D9 E0                     FCHS
006E2653  EB 2E                     JMP 0x006e2683
switchD_006e261b::caseD_1:
006E2655  D9 01                     FLD float ptr [ECX]
006E2657  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E265D  DC 45 10                  FADD double ptr [EBP + 0x10]
006E2660  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2666  DD 55 F8                  FST double ptr [EBP + -0x8]
006E2669  D9 41 04                  FLD float ptr [ECX + 0x4]
006E266C  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E2672  DC 45 18                  FADD double ptr [EBP + 0x18]
006E2675  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E267B  DD 55 10                  FST double ptr [EBP + 0x10]
006E267E  DE C1                     FADDP
006E2680  DD 45 F8                  FLD double ptr [EBP + -0x8]
LAB_006e2683:
006E2683  DC 65 10                  FSUB double ptr [EBP + 0x10]
006E2686  DD 5D 18                  FSTP double ptr [EBP + 0x18]
006E2689  DD 45 20                  FLD double ptr [EBP + 0x20]
006E268C  DC 86 C0 00 00 00         FADD double ptr [ESI + 0xc0]
006E2692  D9 E0                     FCHS
006E2694  E9 D9 01 00 00            JMP 0x006e2872
switchD_006e261b::caseD_2:
006E2699  D9 01                     FLD float ptr [ECX]
006E269B  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E26A1  DC 45 10                  FADD double ptr [EBP + 0x10]
006E26A4  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E26AA  DD 55 F8                  FST double ptr [EBP + -0x8]
006E26AD  D9 41 04                  FLD float ptr [ECX + 0x4]
006E26B0  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E26B6  DC 45 18                  FADD double ptr [EBP + 0x18]
006E26B9  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E26BF  DD 55 10                  FST double ptr [EBP + 0x10]
006E26C2  DE E1                     FSUBRP
006E26C4  DD 45 10                  FLD double ptr [EBP + 0x10]
006E26C7  DC 45 F8                  FADD double ptr [EBP + -0x8]
006E26CA  DD 5D 18                  FSTP double ptr [EBP + 0x18]
006E26CD  DD 45 20                  FLD double ptr [EBP + 0x20]
006E26D0  DC 86 C0 00 00 00         FADD double ptr [ESI + 0xc0]
006E26D6  D9 E0                     FCHS
006E26D8  E9 95 01 00 00            JMP 0x006e2872
switchD_006e261b::caseD_3:
006E26DD  D9 01                     FLD float ptr [ECX]
006E26DF  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E26E5  DC 45 10                  FADD double ptr [EBP + 0x10]
006E26E8  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E26EE  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E26F1  D9 41 04                  FLD float ptr [ECX + 0x4]
006E26F4  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E26FA  DC 45 18                  FADD double ptr [EBP + 0x18]
006E26FD  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2703  DD 55 10                  FST double ptr [EBP + 0x10]
006E2706  DD 45 F8                  FLD double ptr [EBP + -0x8]
006E2709  D9 E0                     FCHS
006E270B  DE E1                     FSUBRP
006E270D  DD 45 10                  FLD double ptr [EBP + 0x10]
006E2710  DC 65 F8                  FSUB double ptr [EBP + -0x8]
006E2713  DD 5D 18                  FSTP double ptr [EBP + 0x18]
006E2716  DD 45 20                  FLD double ptr [EBP + 0x20]
006E2719  DC 86 C0 00 00 00         FADD double ptr [ESI + 0xc0]
006E271F  D9 E0                     FCHS
006E2721  E9 4C 01 00 00            JMP 0x006e2872
LAB_006e2726:
006E2726  D9 01                     FLD float ptr [ECX]
006E2728  DC 45 10                  FADD double ptr [EBP + 0x10]
006E272B  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E2731  D9 41 04                  FLD float ptr [ECX + 0x4]
006E2734  DC 45 18                  FADD double ptr [EBP + 0x18]
006E2737  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E273D  D9 E0                     FCHS
006E273F  DD 5D 18                  FSTP double ptr [EBP + 0x18]
006E2742  DD 86 80 00 00 00         FLD double ptr [ESI + 0x80]
006E2748  DC 65 20                  FSUB double ptr [EBP + 0x20]
006E274B  E9 22 01 00 00            JMP 0x006e2872
LAB_006e2750:
006E2750  83 F8 03                  CMP EAX,0x3
006E2753  0F 87 E2 01 00 00         JA 0x006e293b
switchD_006e2759::switchD:
006E2759  FF 24 85 60 29 6E 00      JMP dword ptr [EAX*0x4 + 0x6e2960]
switchD_006e2759::caseD_0:
006E2760  D9 01                     FLD float ptr [ECX]
006E2762  DC 45 10                  FADD double ptr [EBP + 0x10]
006E2765  D9 C0                     FLD ST0
006E2767  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006E276D  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E2770  D9 41 04                  FLD float ptr [ECX + 0x4]
006E2773  DC 45 18                  FADD double ptr [EBP + 0x18]
006E2776  D9 C0                     FLD ST0
006E2778  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006E277E  DD 5D 10                  FSTP double ptr [EBP + 0x10]
006E2781  DD 45 20                  FLD double ptr [EBP + 0x20]
006E2784  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E278A  DD 5D 20                  FSTP double ptr [EBP + 0x20]
006E278D  D9 C9                     FXCH
006E278F  EB 6D                     JMP 0x006e27fe
switchD_006e2759::caseD_1:
006E2791  D9 01                     FLD float ptr [ECX]
006E2793  DC 45 10                  FADD double ptr [EBP + 0x10]
006E2796  D9 C0                     FLD ST0
006E2798  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E279E  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E27A1  D9 41 04                  FLD float ptr [ECX + 0x4]
006E27A4  DC 45 18                  FADD double ptr [EBP + 0x18]
006E27A7  D9 C0                     FLD ST0
006E27A9  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006E27AF  DD 5D 10                  FSTP double ptr [EBP + 0x10]
006E27B2  DD 45 20                  FLD double ptr [EBP + 0x20]
006E27B5  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E27BB  DD 5D 20                  FSTP double ptr [EBP + 0x20]
006E27BE  DE C1                     FADDP
006E27C0  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E27C6  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E27CC  E9 80 00 00 00            JMP 0x006e2851
switchD_006e2759::caseD_2:
006E27D1  D9 01                     FLD float ptr [ECX]
006E27D3  DC 45 10                  FADD double ptr [EBP + 0x10]
006E27D6  D9 C0                     FLD ST0
006E27D8  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E27DE  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E27E1  D9 41 04                  FLD float ptr [ECX + 0x4]
006E27E4  DC 45 18                  FADD double ptr [EBP + 0x18]
006E27E7  D9 C0                     FLD ST0
006E27E9  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E27EF  DD 5D 10                  FSTP double ptr [EBP + 0x10]
006E27F2  DD 45 20                  FLD double ptr [EBP + 0x20]
006E27F5  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E27FB  DD 5D 20                  FSTP double ptr [EBP + 0x20]
LAB_006e27fe:
006E27FE  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2804  D9 C9                     FXCH
006E2806  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E280C  DE E9                     FSUBP
006E280E  DC 86 B0 00 00 00         FADD double ptr [ESI + 0xb0]
006E2814  EB 3B                     JMP 0x006e2851
switchD_006e2759::caseD_3:
006E2816  D9 01                     FLD float ptr [ECX]
006E2818  DC 45 10                  FADD double ptr [EBP + 0x10]
006E281B  D9 C0                     FLD ST0
006E281D  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006E2823  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006E2826  D9 41 04                  FLD float ptr [ECX + 0x4]
006E2829  DC 45 18                  FADD double ptr [EBP + 0x18]
006E282C  D9 C0                     FLD ST0
006E282E  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006E2834  DD 5D 10                  FSTP double ptr [EBP + 0x10]
006E2837  DD 45 20                  FLD double ptr [EBP + 0x20]
006E283A  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E2840  DD 5D 20                  FSTP double ptr [EBP + 0x20]
006E2843  DE C1                     FADDP
006E2845  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006E284B  DC AE B0 00 00 00         FSUBR double ptr [ESI + 0xb0]
LAB_006e2851:
006E2851  DD 45 20                  FLD double ptr [EBP + 0x20]
006E2854  DC 86 B8 00 00 00         FADD double ptr [ESI + 0xb8]
006E285A  DC 45 10                  FADD double ptr [EBP + 0x10]
006E285D  DC 45 F8                  FADD double ptr [EBP + -0x8]
006E2860  DD 5D 18                  FSTP double ptr [EBP + 0x18]
006E2863  DD 45 10                  FLD double ptr [EBP + 0x10]
006E2866  DC 45 F8                  FADD double ptr [EBP + -0x8]
006E2869  DC 65 20                  FSUB double ptr [EBP + 0x20]
006E286C  DC 86 C0 00 00 00         FADD double ptr [ESI + 0xc0]
switchD_006e261b::default:
006E2872  DD 5D 20                  FSTP double ptr [EBP + 0x20]
006E2875  53                        PUSH EBX
006E2876  57                        PUSH EDI
006E2877  DC 66 60                  FSUB double ptr [ESI + 0x60]
006E287A  BB 01 00 00 00            MOV EBX,0x1
006E287F  DC 8E D8 00 00 00         FMUL double ptr [ESI + 0xd8]
006E2885  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006E288B  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E2891  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E2897  E8 EC B9 04 00            CALL 0x0072e288
006E289C  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006E289F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E28A2  C1 E1 10                  SHL ECX,0x10
006E28A5  03 C1                     ADD EAX,ECX
006E28A7  89 07                     MOV dword ptr [EDI],EAX
006E28A9  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006E28AC  C1 E2 10                  SHL EDX,0x10
006E28AF  3B C2                     CMP EAX,EDX
006E28B1  7C 0A                     JL 0x006e28bd
006E28B3  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006E28B6  C1 E1 10                  SHL ECX,0x10
006E28B9  3B C1                     CMP EAX,ECX
006E28BB  7C 02                     JL 0x006e28bf
LAB_006e28bd:
006E28BD  33 DB                     XOR EBX,EBX
LAB_006e28bf:
006E28BF  DD 46 78                  FLD double ptr [ESI + 0x78]
006E28C2  DC 65 18                  FSUB double ptr [EBP + 0x18]
006E28C5  DC 8E E0 00 00 00         FMUL double ptr [ESI + 0xe0]
006E28CB  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006E28D1  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E28D7  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006E28DD  E8 A6 B9 04 00            CALL 0x0072e288
006E28E2  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006E28E5  C1 E2 10                  SHL EDX,0x10
006E28E8  03 C2                     ADD EAX,EDX
006E28EA  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006E28ED  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006E28F0  C1 E1 10                  SHL ECX,0x10
006E28F3  3B C1                     CMP EAX,ECX
006E28F5  7C 0A                     JL 0x006e2901
006E28F7  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006E28FA  C1 E2 10                  SHL EDX,0x10
006E28FD  3B C2                     CMP EAX,EDX
006E28FF  7C 02                     JL 0x006e2903
LAB_006e2901:
006E2901  33 DB                     XOR EBX,EBX
LAB_006e2903:
006E2903  DD 45 20                  FLD double ptr [EBP + 0x20]
006E2906  DC A6 14 01 00 00         FSUB double ptr [ESI + 0x114]
006E290C  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006E290F  85 C0                     TEST EAX,EAX
006E2911  DC 8E 0C 01 00 00         FMUL double ptr [ESI + 0x10c]
006E2917  74 0C                     JZ 0x006e2925
006E2919  DC 0D 70 DF 79 00         FMUL double ptr [0x0079df70]
006E291F  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
LAB_006e2925:
006E2925  E8 5E B9 04 00            CALL 0x0072e288
006E292A  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
006E292D  89 5F 0C                  MOV dword ptr [EDI + 0xc],EBX
006E2930  8B C3                     MOV EAX,EBX
006E2932  5F                        POP EDI
006E2933  5B                        POP EBX
006E2934  5E                        POP ESI
006E2935  8B E5                     MOV ESP,EBP
006E2937  5D                        POP EBP
006E2938  C2 24 00                  RET 0x24
switchD_006e2759::default:
006E293B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E293E  5E                        POP ESI
006E293F  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
006E2946  33 C0                     XOR EAX,EAX
006E2948  8B E5                     MOV ESP,EBP
006E294A  5D                        POP EBP
006E294B  C2 24 00                  RET 0x24
