FUN_004d6590:
004D6590  55                        PUSH EBP
004D6591  8B EC                     MOV EBP,ESP
004D6593  51                        PUSH ECX
004D6594  53                        PUSH EBX
004D6595  56                        PUSH ESI
004D6596  8B F1                     MOV ESI,ECX
004D6598  57                        PUSH EDI
004D6599  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D659C  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004D65A2  8B BE 5D 02 00 00         MOV EDI,dword ptr [ESI + 0x25d]
004D65A8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D65AB  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
004D65AE  48                        DEC EAX
004D65AF  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
004D65B2  F7 D8                     NEG EAX
004D65B4  1B C0                     SBB EAX,EAX
004D65B6  8B 9E 61 02 00 00         MOV EBX,dword ptr [ESI + 0x261]
004D65BC  83 C0 02                  ADD EAX,0x2
004D65BF  C1 E1 02                  SHL ECX,0x2
004D65C2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004D65C5  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
004D65C8  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
004D65CB  99                        CDQ
004D65CC  2B C2                     SUB EAX,EDX
004D65CE  8B 96 60 03 00 00         MOV EDX,dword ptr [ESI + 0x360]
004D65D4  D1 F8                     SAR EAX,0x1
004D65D6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004D65D9  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004D65DC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D65DF  8D 04 C7                  LEA EAX,[EDI + EAX*0x8]
004D65E2  66 8B 3C 11               MOV DI,word ptr [ECX + EDX*0x1]
004D65E6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D65E9  66 03 F8                  ADD DI,AX
004D65EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D65EF  03 FA                     ADD EDI,EDX
004D65F1  66 89 38                  MOV word ptr [EAX],DI
004D65F4  8B BE 60 03 00 00         MOV EDI,dword ptr [ESI + 0x360]
004D65FA  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004D65FD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6600  8D 04 C3                  LEA EAX,[EBX + EAX*0x8]
004D6603  66 8B 5C 39 04            MOV BX,word ptr [ECX + EDI*0x1 + 0x4]
004D6608  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004D660B  66 03 D8                  ADD BX,AX
004D660E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004D6611  03 DA                     ADD EBX,EDX
004D6613  66 89 1F                  MOV word ptr [EDI],BX
004D6616  8B 96 60 03 00 00         MOV EDX,dword ptr [ESI + 0x360]
004D661C  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D661F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D6622  66 8B 4C 11 08            MOV CX,word ptr [ECX + EDX*0x1 + 0x8]
004D6627  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004D662A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D662D  C1 E0 03                  SHL EAX,0x3
004D6630  66 03 C8                  ADD CX,AX
004D6633  8D 45 14                  LEA EAX,[EBP + 0x14]
004D6636  66 89 0B                  MOV word ptr [EBX],CX
004D6639  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
004D663F  8D 4D 10                  LEA ECX,[EBP + 0x10]
004D6642  50                        PUSH EAX
004D6643  8D 55 08                  LEA EDX,[EBP + 0x8]
004D6646  51                        PUSH ECX
004D6647  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D664D  52                        PUSH EDX
004D664E  E8 DD 6E 20 00            CALL 0x006dd530
004D6653  D9 45 08                  FLD float ptr [EBP + 0x8]
004D6656  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004D665C  E8 27 7C 25 00            CALL 0x0072e288
004D6661  0F BF C0                  MOVSX EAX,AX
004D6664  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004D6667  DB 45 08                  FILD dword ptr [EBP + 0x8]
004D666A  D9 45 10                  FLD float ptr [EBP + 0x10]
004D666D  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004D6673  E8 10 7C 25 00            CALL 0x0072e288
004D6678  0F BF C8                  MOVSX ECX,AX
004D667B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004D667E  DB 45 08                  FILD dword ptr [EBP + 0x8]
004D6681  D9 5D 08                  FSTP float ptr [EBP + 0x8]
004D6684  D9 45 14                  FLD float ptr [EBP + 0x14]
004D6687  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004D668D  E8 F6 7B 25 00            CALL 0x0072e288
004D6692  0F BF D0                  MOVSX EDX,AX
004D6695  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
004D6699  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
004D669C  DB 45 10                  FILD dword ptr [EBP + 0x10]
004D669F  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004D66A3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004D66A6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D66A9  DB 45 10                  FILD dword ptr [EBP + 0x10]
004D66AC  0F BF 13                  MOVSX EDX,word ptr [EBX]
004D66AF  D8 65 08                  FSUB float ptr [EBP + 0x8]
004D66B2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004D66B5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D66B8  0F BF 08                  MOVSX ECX,word ptr [EAX]
004D66BB  D9 5D 14                  FSTP float ptr [EBP + 0x14]
004D66BE  DB 45 10                  FILD dword ptr [EBP + 0x10]
004D66C1  0F BF 17                  MOVSX EDX,word ptr [EDI]
004D66C4  D8 E2                     FSUB ST0,ST2
004D66C6  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004D66C9  5F                        POP EDI
004D66CA  5E                        POP ESI
004D66CB  5B                        POP EBX
004D66CC  D9 5D 10                  FSTP float ptr [EBP + 0x10]
004D66CF  DA 6D FC                  FISUBR dword ptr [EBP + -0x4]
004D66D2  D9 C0                     FLD ST0
004D66D4  D8 C9                     FMUL ST1
004D66D6  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004D66D9  DD D8                     FSTP ST0
004D66DB  DA 6D 0C                  FISUBR dword ptr [EBP + 0xc]
004D66DE  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004D66E1  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004D66E4  D8 65 08                  FSUB float ptr [EBP + 0x8]
004D66E7  D9 45 10                  FLD float ptr [EBP + 0x10]
004D66EA  D8 4D 10                  FMUL float ptr [EBP + 0x10]
004D66ED  D9 45 14                  FLD float ptr [EBP + 0x14]
004D66F0  D8 4D 14                  FMUL float ptr [EBP + 0x14]
004D66F3  DE C1                     FADDP
004D66F5  D8 45 FC                  FADD float ptr [EBP + -0x4]
004D66F8  D9 C1                     FLD ST1
004D66FA  D8 CA                     FMUL ST2
004D66FC  D9 C3                     FLD ST3
004D66FE  D8 CC                     FMUL ST4
004D6700  DE C1                     FADDP
004D6702  D8 45 FC                  FADD float ptr [EBP + -0x4]
004D6705  DE D9                     FCOMPP
004D6707  DF E0                     FNSTSW AX
004D6709  DD D8                     FSTP ST0
004D670B  F6 C4 01                  TEST AH,0x1
004D670E  DD D8                     FSTP ST0
004D6710  74 11                     JZ 0x004d6723
004D6712  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004D6715  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004D671B  33 C0                     XOR EAX,EAX
004D671D  8B E5                     MOV ESP,EBP
004D671F  5D                        POP EBP
004D6720  C2 14 00                  RET 0x14
LAB_004d6723:
004D6723  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004D6726  33 C0                     XOR EAX,EAX
004D6728  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
004D672E  8B E5                     MOV ESP,EBP
004D6730  5D                        POP EBP
004D6731  C2 14 00                  RET 0x14
