FUN_00616400:
00616400  55                        PUSH EBP
00616401  8B EC                     MOV EBP,ESP
00616403  83 EC 0C                  SUB ESP,0xc
00616406  DB 81 7C 02 00 00         FILD dword ptr [ECX + 0x27c]
0061640C  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616412  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00616415  DB 81 80 02 00 00         FILD dword ptr [ECX + 0x280]
0061641B  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616421  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00616424  DB 81 84 02 00 00         FILD dword ptr [ECX + 0x284]
0061642A  D8 0D A8 CE 79 00         FMUL float ptr [0x0079cea8]
00616430  D9 55 FC                  FST float ptr [EBP + -0x4]
00616433  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00616436  D9 45 F8                  FLD float ptr [EBP + -0x8]
00616439  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0061643C  DE C1                     FADDP
0061643E  D9 45 F4                  FLD float ptr [EBP + -0xc]
00616441  D8 4D F4                  FMUL float ptr [EBP + -0xc]
00616444  DE C1                     FADDP
00616446  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
0061644C  DF E0                     FNSTSW AX
0061644E  F6 C4 40                  TEST AH,0x40
00616451  75 4E                     JNZ 0x006164a1
00616453  DB 45 10                  FILD dword ptr [EBP + 0x10]
00616456  0F BF 81 5E 02 00 00      MOVSX EAX,word ptr [ECX + 0x25e]
0061645D  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00616460  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00616463  0F BF 91 5C 02 00 00      MOVSX EDX,word ptr [ECX + 0x25c]
0061646A  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0061646D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00616470  0F BF 81 5A 02 00 00      MOVSX EAX,word ptr [ECX + 0x25a]
00616477  DE C1                     FADDP
00616479  DB 45 08                  FILD dword ptr [EBP + 0x8]
0061647C  D8 4D F4                  FMUL float ptr [EBP + -0xc]
0061647F  DE C1                     FADDP
00616481  DB 45 10                  FILD dword ptr [EBP + 0x10]
00616484  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00616487  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0061648A  DB 45 10                  FILD dword ptr [EBP + 0x10]
0061648D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00616490  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00616493  DE C1                     FADDP
00616495  DB 45 10                  FILD dword ptr [EBP + 0x10]
00616498  D8 4D F4                  FMUL float ptr [EBP + -0xc]
0061649B  DE C1                     FADDP
0061649D  DE E9                     FSUBP
0061649F  DE F1                     FDIVRP
LAB_006164a1:
006164A1  8B E5                     MOV ESP,EBP
006164A3  5D                        POP EBP
006164A4  C2 0C 00                  RET 0xc
