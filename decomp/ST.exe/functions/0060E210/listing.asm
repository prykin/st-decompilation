FUN_0060e210:
0060E210  55                        PUSH EBP
0060E211  8B EC                     MOV EBP,ESP
0060E213  83 EC 14                  SUB ESP,0x14
0060E216  56                        PUSH ESI
0060E217  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0060E21A  57                        PUSH EDI
0060E21B  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
0060E222  50                        PUSH EAX
0060E223  E8 48 CA 09 00            CALL 0x006aac70
0060E228  8B F8                     MOV EDI,EAX
0060E22A  85 FF                     TEST EDI,EDI
0060E22C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0060E22F  75 0D                     JNZ 0x0060e23e
0060E231  5F                        POP EDI
0060E232  B8 FE FF FF FF            MOV EAX,0xfffffffe
0060E237  5E                        POP ESI
0060E238  8B E5                     MOV ESP,EBP
0060E23A  5D                        POP EBP
0060E23B  C2 14 00                  RET 0x14
LAB_0060e23e:
0060E23E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0060E241  4E                        DEC ESI
0060E242  49                        DEC ECX
0060E243  B8 00 00 F0 3F            MOV EAX,0x3ff00000
0060E248  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0060E24B  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0060E251  DB 45 10                  FILD dword ptr [EBP + 0x10]
0060E254  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
0060E257  C7 04 F7 00 00 00 00      MOV dword ptr [EDI + ESI*0x8],0x0
0060E25E  89 44 F7 04               MOV dword ptr [EDI + ESI*0x8 + 0x4],EAX
0060E262  8D 56 FE                  LEA EDX,[ESI + -0x2]
0060E265  DC 3D 88 CD 79 00         FDIVR double ptr [0x0079cd88]
0060E26B  33 C0                     XOR EAX,EAX
0060E26D  53                        PUSH EBX
0060E26E  85 D2                     TEST EDX,EDX
0060E270  7C 21                     JL 0x0060e293
0060E272  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0060E275  8B CF                     MOV ECX,EDI
LAB_0060e277:
0060E277  DB 45 10                  FILD dword ptr [EBP + 0x10]
0060E27A  40                        INC EAX
0060E27B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0060E27E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060E281  DC 09                     FMUL double ptr [ECX]
0060E283  83 C1 08                  ADD ECX,0x8
0060E286  4B                        DEC EBX
0060E287  3B C2                     CMP EAX,EDX
0060E289  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
0060E28C  DA 75 F8                  FIDIV dword ptr [EBP + -0x8]
0060E28F  DD 19                     FSTP double ptr [ECX]
0060E291  7E E4                     JLE 0x0060e277
LAB_0060e293:
0060E293  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E296  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
0060E29D  85 C0                     TEST EAX,EAX
0060E29F  0F 8E 31 01 00 00         JLE 0x0060e3d6
0060E2A5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060E2A8  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0060E2AB  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_0060e2ae:
0060E2AE  DB 45 10                  FILD dword ptr [EBP + 0x10]
0060E2B1  D8 C9                     FMUL ST1
0060E2B3  DC 15 C0 01 79 00         FCOM double ptr [0x007901c0]
0060E2B9  DD 55 F4                  FST double ptr [EBP + -0xc]
0060E2BC  DF E0                     FNSTSW AX
0060E2BE  F6 C4 41                  TEST AH,0x41
0060E2C1  74 75                     JZ 0x0060e338
0060E2C3  DC 2D 88 CD 79 00         FSUBR double ptr [0x0079cd88]
0060E2C9  83 FE 01                  CMP ESI,0x1
0060E2CC  D9 C0                     FLD ST0
0060E2CE  7E 0A                     JLE 0x0060e2da
0060E2D0  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_0060e2d3:
0060E2D3  D9 C0                     FLD ST0
0060E2D5  48                        DEC EAX
0060E2D6  DE CA                     FMULP ST2
0060E2D8  75 F9                     JNZ 0x0060e2d3
LAB_0060e2da:
0060E2DA  DD 45 F4                  FLD double ptr [EBP + -0xc]
0060E2DD  D8 F1                     FDIV ST0,ST1
0060E2DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060E2E2  8D 56 FF                  LEA EDX,[ESI + -0x1]
0060E2E5  85 D2                     TEST EDX,EDX
0060E2E7  DD 5D EC                  FSTP double ptr [EBP + -0x14]
0060E2EA  DD D8                     FSTP ST0
0060E2EC  DB 04 B0                  FILD dword ptr [EAX + ESI*0x4]
0060E2EF  DB 04 B3                  FILD dword ptr [EBX + ESI*0x4]
0060E2F2  DD 55 F4                  FST double ptr [EBP + -0xc]
0060E2F5  0F 8C EE 00 00 00         JL 0x0060e3e9
0060E2FB  DD 45 EC                  FLD double ptr [EBP + -0x14]
0060E2FE  8D 0C D7                  LEA ECX,[EDI + EDX*0x8]
0060E301  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060E304  8D 04 93                  LEA EAX,[EBX + EDX*0x4]
0060E307  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0060E30A  2B FB                     SUB EDI,EBX
0060E30C  42                        INC EDX
LAB_0060e30d:
0060E30D  DB 04 07                  FILD dword ptr [EDI + EAX*0x1]
0060E310  83 E8 04                  SUB EAX,0x4
0060E313  83 E9 08                  SUB ECX,0x8
0060E316  4A                        DEC EDX
0060E317  DC 49 08                  FMUL double ptr [ECX + 0x8]
0060E31A  D9 CB                     FXCH ST3
0060E31C  D8 C9                     FMUL ST1
0060E31E  DE C3                     FADDP ST3,ST0
0060E320  DB 40 04                  FILD dword ptr [EAX + 0x4]
0060E323  DC 49 08                  FMUL double ptr [ECX + 0x8]
0060E326  D9 CA                     FXCH ST2
0060E328  D8 C9                     FMUL ST1
0060E32A  DE C2                     FADDP ST2,ST0
0060E32C  75 DF                     JNZ 0x0060e30d
0060E32E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0060E331  DD D8                     FSTP ST0
0060E333  DD 5D F4                  FSTP double ptr [EBP + -0xc]
0060E336  EB 63                     JMP 0x0060e39b
LAB_0060e338:
0060E338  83 FE 01                  CMP ESI,0x1
0060E33B  7E 09                     JLE 0x0060e346
0060E33D  8D 46 FF                  LEA EAX,[ESI + -0x1]
LAB_0060e340:
0060E340  DC 4D F4                  FMUL double ptr [EBP + -0xc]
0060E343  48                        DEC EAX
0060E344  75 FA                     JNZ 0x0060e340
LAB_0060e346:
0060E346  DD 05 88 CD 79 00         FLD double ptr [0x0079cd88]
0060E34C  DC 65 F4                  FSUB double ptr [EBP + -0xc]
0060E34F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060E352  83 FE 01                  CMP ESI,0x1
0060E355  DC 75 F4                  FDIV double ptr [EBP + -0xc]
0060E358  DD 5D EC                  FSTP double ptr [EBP + -0x14]
0060E35B  DB 02                     FILD dword ptr [EDX]
0060E35D  DB 03                     FILD dword ptr [EBX]
0060E35F  DD 55 F4                  FST double ptr [EBP + -0xc]
0060E362  0F 8C 81 00 00 00         JL 0x0060e3e9
0060E368  DD 45 EC                  FLD double ptr [EBP + -0x14]
0060E36B  8D 4F 08                  LEA ECX,[EDI + 0x8]
0060E36E  8D 43 04                  LEA EAX,[EBX + 0x4]
0060E371  2B D3                     SUB EDX,EBX
0060E373  8B FE                     MOV EDI,ESI
LAB_0060e375:
0060E375  DB 04 10                  FILD dword ptr [EAX + EDX*0x1]
0060E378  83 C0 04                  ADD EAX,0x4
0060E37B  83 C1 08                  ADD ECX,0x8
0060E37E  4F                        DEC EDI
0060E37F  DC 49 F8                  FMUL double ptr [ECX + -0x8]
0060E382  D9 CB                     FXCH ST3
0060E384  D8 C9                     FMUL ST1
0060E386  DE C3                     FADDP ST3,ST0
0060E388  DB 40 FC                  FILD dword ptr [EAX + -0x4]
0060E38B  DC 49 F8                  FMUL double ptr [ECX + -0x8]
0060E38E  D9 CA                     FXCH ST2
0060E390  D8 C9                     FMUL ST1
0060E392  DE C2                     FADDP ST2,ST0
0060E394  75 DF                     JNZ 0x0060e375
0060E396  DD D8                     FSTP ST0
0060E398  DD 5D F4                  FSTP double ptr [EBP + -0xc]
LAB_0060e39b:
0060E39B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0060e39e:
0060E39E  D8 C9                     FMUL ST1
0060E3A0  E8 E3 FE 11 00            CALL 0x0072e288
0060E3A5  DD 45 F4                  FLD double ptr [EBP + -0xc]
0060E3A8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060E3AB  D8 C9                     FMUL ST1
0060E3AD  66 89 01                  MOV word ptr [ECX],AX
0060E3B0  E8 D3 FE 11 00            CALL 0x0072e288
0060E3B5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060E3B8  DD D8                     FSTP ST0
0060E3BA  66 89 41 02               MOV word ptr [ECX + 0x2],AX
0060E3BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060E3C1  83 C1 04                  ADD ECX,0x4
0060E3C4  40                        INC EAX
0060E3C5  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0060E3C8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0060E3CB  3B C1                     CMP EAX,ECX
0060E3CD  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0060E3D0  0F 8C D8 FE FF FF         JL 0x0060e2ae
LAB_0060e3d6:
0060E3D6  57                        PUSH EDI
0060E3D7  DD D8                     FSTP ST0
0060E3D9  E8 B2 7A 09 00            CALL 0x006a5e90
0060E3DE  5B                        POP EBX
0060E3DF  5F                        POP EDI
0060E3E0  33 C0                     XOR EAX,EAX
0060E3E2  5E                        POP ESI
0060E3E3  8B E5                     MOV ESP,EBP
0060E3E5  5D                        POP EBP
0060E3E6  C2 14 00                  RET 0x14
LAB_0060e3e9:
0060E3E9  DD D8                     FSTP ST0
0060E3EB  EB B1                     JMP 0x0060e39e
