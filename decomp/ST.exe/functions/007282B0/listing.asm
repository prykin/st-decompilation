FUN_007282b0:
007282B0  55                        PUSH EBP
007282B1  8B EC                     MOV EBP,ESP
007282B3  83 EC 5C                  SUB ESP,0x5c
007282B6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007282B9  53                        PUSH EBX
007282BA  56                        PUSH ESI
007282BB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007282BE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007282C1  57                        PUSH EDI
007282C2  8B 4A 28                  MOV ECX,dword ptr [EDX + 0x28]
007282C5  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
007282CC  2B C6                     SUB EAX,ESI
007282CE  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007282D1  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
007282D4  33 C0                     XOR EAX,EAX
007282D6  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
007282D9  C1 E0 04                  SHL EAX,0x4
007282DC  03 C7                     ADD EAX,EDI
007282DE  8B 18                     MOV EBX,dword ptr [EAX]
007282E0  89 1D A8 70 85 00         MOV dword ptr [0x008570a8],EBX
007282E6  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
007282E9  89 1D AC 70 85 00         MOV dword ptr [0x008570ac],EBX
007282EF  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
007282F2  89 1D B0 70 85 00         MOV dword ptr [0x008570b0],EBX
007282F8  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
007282FB  A3 B4 70 85 00            MOV [0x008570b4],EAX
00728300  33 C0                     XOR EAX,EAX
00728302  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
00728305  C1 E0 04                  SHL EAX,0x4
00728308  03 C7                     ADD EAX,EDI
0072830A  8B 18                     MOV EBX,dword ptr [EAX]
0072830C  89 1D B8 70 85 00         MOV dword ptr [0x008570b8],EBX
00728312  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
00728315  89 1D BC 70 85 00         MOV dword ptr [0x008570bc],EBX
0072831B  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0072831E  89 1D C0 70 85 00         MOV dword ptr [0x008570c0],EBX
00728324  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00728327  A3 C4 70 85 00            MOV [0x008570c4],EAX
0072832C  33 C0                     XOR EAX,EAX
0072832E  8A 41 03                  MOV AL,byte ptr [ECX + 0x3]
00728331  C1 E0 04                  SHL EAX,0x4
00728334  03 C7                     ADD EAX,EDI
00728336  8B 38                     MOV EDI,dword ptr [EAX]
00728338  89 3D C8 70 85 00         MOV dword ptr [0x008570c8],EDI
0072833E  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00728341  89 3D CC 70 85 00         MOV dword ptr [0x008570cc],EDI
00728347  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0072834A  89 1D D0 70 85 00         MOV dword ptr [0x008570d0],EBX
00728350  8A 1D 6C 70 85 00         MOV BL,byte ptr [0x0085706c]
00728356  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00728359  A3 D4 70 85 00            MOV [0x008570d4],EAX
0072835E  8B 42 3C                  MOV EAX,dword ptr [EDX + 0x3c]
00728361  84 1C 30                  TEST byte ptr [EAX + ESI*0x1],BL
00728364  75 0F                     JNZ 0x00728375
00728366  C7 05 F8 70 85 00 FF 00 00 00  MOV dword ptr [0x008570f8],0xff
00728370  E9 10 01 00 00            JMP 0x00728485
LAB_00728375:
00728375  0F BF 5A 08               MOVSX EBX,word ptr [EDX + 0x8]
00728379  D1 E3                     SHL EBX,0x1
0072837B  89 1D F8 70 85 00         MOV dword ptr [0x008570f8],EBX
00728381  8A 01                     MOV AL,byte ptr [ECX]
00728383  A8 20                     TEST AL,0x20
00728385  74 68                     JZ 0x007283ef
00728387  8A 42 48                  MOV AL,byte ptr [EDX + 0x48]
0072838A  3C 01                     CMP AL,0x1
0072838C  88 45 0C                  MOV byte ptr [EBP + 0xc],AL
0072838F  72 3F                     JC 0x007283d0
00728391  33 C0                     XOR EAX,EAX
00728393  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
00728396  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00728399  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
0072839C  D9 44 88 08               FLD float ptr [EAX + ECX*0x4 + 0x8]
007283A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007283A3  DD 81 D0 00 00 00         FLD double ptr [ECX + 0xd0]
007283A9  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
007283AF  D9 E0                     FCHS
007283B1  DE D9                     FCOMPP
007283B3  DF E0                     FNSTSW AX
007283B5  F6 C4 01                  TEST AH,0x1
007283B8  75 16                     JNZ 0x007283d0
007283BA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007283BD  0F BF 5A 08               MOVSX EBX,word ptr [EDX + 0x8]
007283C1  25 FF 00 00 00            AND EAX,0xff
007283C6  2B D8                     SUB EBX,EAX
007283C8  D1 E3                     SHL EBX,0x1
007283CA  89 1D F8 70 85 00         MOV dword ptr [0x008570f8],EBX
LAB_007283d0:
007283D0  8B 52 3C                  MOV EDX,dword ptr [EDX + 0x3c]
007283D3  A0 58 70 85 00            MOV AL,[0x00857058]
007283D8  84 04 32                  TEST byte ptr [EDX + ESI*0x1],AL
007283DB  0F 85 A4 00 00 00         JNZ 0x00728485
007283E1  80 CB 80                  OR BL,0x80
007283E4  89 1D F8 70 85 00         MOV dword ptr [0x008570f8],EBX
007283EA  E9 96 00 00 00            JMP 0x00728485
LAB_007283ef:
007283EF  0F BF 5A 08               MOVSX EBX,word ptr [EDX + 0x8]
007283F3  33 C0                     XOR EAX,EAX
007283F5  8A 42 48                  MOV AL,byte ptr [EDX + 0x48]
007283F8  2B D8                     SUB EBX,EAX
007283FA  8D 44 1B 01               LEA EAX,[EBX + EBX*0x1 + 0x1]
007283FE  8A 1D 58 70 85 00         MOV BL,byte ptr [0x00857058]
00728404  A3 F8 70 85 00            MOV [0x008570f8],EAX
00728409  8B 42 3C                  MOV EAX,dword ptr [EDX + 0x3c]
0072840C  84 1C 30                  TEST byte ptr [EAX + ESI*0x1],BL
0072840F  74 0F                     JZ 0x00728420
00728411  A1 F8 70 85 00            MOV EAX,[0x008570f8]
00728416  83 E6 03                  AND ESI,0x3
00728419  C1 E6 04                  SHL ESI,0x4
0072841C  0B C6                     OR EAX,ESI
0072841E  EB 07                     JMP 0x00728427
LAB_00728420:
00728420  A1 F8 70 85 00            MOV EAX,[0x008570f8]
00728425  0C 80                     OR AL,0x80
LAB_00728427:
00728427  A3 F8 70 85 00            MOV [0x008570f8],EAX
0072842C  8B 52 20                  MOV EDX,dword ptr [EDX + 0x20]
0072842F  33 C0                     XOR EAX,EAX
00728431  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
00728434  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00728437  D9 04 82                  FLD float ptr [EDX + EAX*0x4]
0072843A  33 C0                     XOR EAX,EAX
0072843C  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
0072843F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00728442  D8 14 82                  FCOM float ptr [EDX + EAX*0x4]
00728445  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
00728448  DF E0                     FNSTSW AX
0072844A  F6 C4 41                  TEST AH,0x41
0072844D  75 04                     JNZ 0x00728453
0072844F  DD D8                     FSTP ST0
00728451  D9 06                     FLD float ptr [ESI]
LAB_00728453:
00728453  33 C0                     XOR EAX,EAX
00728455  8A 41 03                  MOV AL,byte ptr [ECX + 0x3]
00728458  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0072845B  D8 14 8A                  FCOM float ptr [EDX + ECX*0x4]
0072845E  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
00728461  DF E0                     FNSTSW AX
00728463  F6 C4 41                  TEST AH,0x41
00728466  75 04                     JNZ 0x0072846c
00728468  DD D8                     FSTP ST0
0072846A  D9 01                     FLD float ptr [ECX]
LAB_0072846c:
0072846C  D8 1D F8 04 79 00         FCOMP float ptr [0x007904f8]
00728472  DF E0                     FNSTSW AX
00728474  F6 C4 41                  TEST AH,0x41
00728477  75 0C                     JNZ 0x00728485
00728479  A1 F8 70 85 00            MOV EAX,[0x008570f8]
0072847E  0C 40                     OR AL,0x40
00728480  A3 F8 70 85 00            MOV [0x008570f8],EAX
LAB_00728485:
00728485  8B 0D AC 70 85 00         MOV ECX,dword ptr [0x008570ac]
0072848B  8B 15 BC 70 85 00         MOV EDX,dword ptr [0x008570bc]
00728491  33 DB                     XOR EBX,EBX
00728493  3B CA                     CMP ECX,EDX
00728495  7F 2F                     JG 0x007284c6
00728497  3B CF                     CMP ECX,EDI
00728499  7F 16                     JG 0x007284b1
0072849B  33 F6                     XOR ESI,ESI
0072849D  3B FA                     CMP EDI,EDX
0072849F  8B C1                     MOV EAX,ECX
007284A1  7C 15                     JL 0x007284b8
007284A3  8B CF                     MOV ECX,EDI
007284A5  C7 05 70 70 85 00 02 00 00 00  MOV dword ptr [0x00857070],0x2
007284AF  EB 3F                     JMP 0x007284f0
LAB_007284b1:
007284B1  8B C7                     MOV EAX,EDI
007284B3  BE 02 00 00 00            MOV ESI,0x2
LAB_007284b8:
007284B8  8B CA                     MOV ECX,EDX
007284BA  C7 05 70 70 85 00 01 00 00 00  MOV dword ptr [0x00857070],0x1
007284C4  EB 2A                     JMP 0x007284f0
LAB_007284c6:
007284C6  3B D7                     CMP EDX,EDI
007284C8  7F 19                     JG 0x007284e3
007284CA  3B F9                     CMP EDI,ECX
007284CC  8B C2                     MOV EAX,EDX
007284CE  BE 01 00 00 00            MOV ESI,0x1
007284D3  7C 15                     JL 0x007284ea
007284D5  8B CF                     MOV ECX,EDI
007284D7  C7 05 70 70 85 00 02 00 00 00  MOV dword ptr [0x00857070],0x2
007284E1  EB 0D                     JMP 0x007284f0
LAB_007284e3:
007284E3  8B C7                     MOV EAX,EDI
007284E5  BE 02 00 00 00            MOV ESI,0x2
LAB_007284ea:
007284EA  89 1D 70 70 85 00         MOV dword ptr [0x00857070],EBX
LAB_007284f0:
007284F0  3B C1                     CMP EAX,ECX
007284F2  0F 8D CA 00 00 00         JGE 0x007285c2
007284F8  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
007284FB  8D 55 D0                  LEA EDX,[EBP + -0x30]
007284FE  C1 F8 10                  SAR EAX,0x10
00728501  56                        PUSH ESI
00728502  52                        PUSH EDX
00728503  8B CF                     MOV ECX,EDI
00728505  A3 98 70 85 00            MOV [0x00857098],EAX
0072850A  C7 45 D0 FF FF FF FF      MOV dword ptr [EBP + -0x30],0xffffffff
00728511  E8 6A F7 FF FF            CALL 0x00727c80
00728516  85 C0                     TEST EAX,EAX
00728518  0F 84 A4 00 00 00         JZ 0x007285c2
0072851E  8D 45 A4                  LEA EAX,[EBP + -0x5c]
00728521  56                        PUSH ESI
00728522  50                        PUSH EAX
00728523  8B CF                     MOV ECX,EDI
00728525  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
0072852C  E8 4F F7 FF FF            CALL 0x00727c80
00728531  85 C0                     TEST EAX,EAX
00728533  0F 84 89 00 00 00         JZ 0x007285c2
00728539  A1 98 70 85 00            MOV EAX,[0x00857098]
0072853E  8B 4F 3C                  MOV ECX,dword ptr [EDI + 0x3c]
00728541  3B C1                     CMP EAX,ECX
00728543  7D 7D                     JGE 0x007285c2
LAB_00728545:
00728545  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00728548  7C 10                     JL 0x0072855a
0072854A  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0072854D  8D 55 D0                  LEA EDX,[EBP + -0x30]
00728550  51                        PUSH ECX
00728551  52                        PUSH EDX
00728552  E8 79 00 00 00            CALL 0x007285d0
00728557  83 C4 08                  ADD ESP,0x8
LAB_0072855a:
0072855A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0072855D  48                        DEC EAX
0072855E  3B C3                     CMP EAX,EBX
00728560  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00728563  7E 0D                     JLE 0x00728572
00728565  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00728568  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072856B  03 C8                     ADD ECX,EAX
0072856D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00728570  EB 13                     JMP 0x00728585
LAB_00728572:
00728572  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00728575  8D 55 D0                  LEA EDX,[EBP + -0x30]
00728578  51                        PUSH ECX
00728579  52                        PUSH EDX
0072857A  8B CF                     MOV ECX,EDI
0072857C  E8 FF F6 FF FF            CALL 0x00727c80
00728581  85 C0                     TEST EAX,EAX
00728583  74 3D                     JZ 0x007285c2
LAB_00728585:
00728585  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00728588  48                        DEC EAX
00728589  3B C3                     CMP EAX,EBX
0072858B  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0072858E  7E 0D                     JLE 0x0072859d
00728590  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00728593  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00728596  03 C8                     ADD ECX,EAX
00728598  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
0072859B  EB 13                     JMP 0x007285b0
LAB_0072859d:
0072859D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
007285A0  8D 55 A4                  LEA EDX,[EBP + -0x5c]
007285A3  51                        PUSH ECX
007285A4  52                        PUSH EDX
007285A5  8B CF                     MOV ECX,EDI
007285A7  E8 D4 F6 FF FF            CALL 0x00727c80
007285AC  85 C0                     TEST EAX,EAX
007285AE  74 12                     JZ 0x007285c2
LAB_007285b0:
007285B0  A1 98 70 85 00            MOV EAX,[0x00857098]
007285B5  40                        INC EAX
007285B6  A3 98 70 85 00            MOV [0x00857098],EAX
007285BB  8B 4F 3C                  MOV ECX,dword ptr [EDI + 0x3c]
007285BE  3B C1                     CMP EAX,ECX
007285C0  7C 83                     JL 0x00728545
LAB_007285c2:
007285C2  5F                        POP EDI
007285C3  5E                        POP ESI
007285C4  5B                        POP EBX
007285C5  8B E5                     MOV ESP,EBP
007285C7  5D                        POP EBP
007285C8  C2 0C 00                  RET 0xc
