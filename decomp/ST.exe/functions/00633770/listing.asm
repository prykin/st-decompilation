FUN_00633770:
00633770  55                        PUSH EBP
00633771  8B EC                     MOV EBP,ESP
00633773  83 EC 24                  SUB ESP,0x24
00633776  53                        PUSH EBX
00633777  56                        PUSH ESI
00633778  8B F1                     MOV ESI,ECX
0063377A  57                        PUSH EDI
0063377B  8B 46 11                  MOV EAX,dword ptr [ESI + 0x11]
0063377E  83 F8 04                  CMP EAX,0x4
00633781  0F 87 A2 15 00 00         JA 0x00634d29
switchD_00633787::switchD:
00633787  FF 24 85 08 53 63 00      JMP dword ptr [EAX*0x4 + 0x635308]
switchD_00633787::caseD_0:
0063378E  8B 06                     MOV EAX,dword ptr [ESI]
00633790  33 DB                     XOR EBX,EBX
00633792  3B C3                     CMP EAX,EBX
00633794  0F 84 8F 15 00 00         JZ 0x00634d29
0063379A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0063379D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006337A2  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
006337A5  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006337A8  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
006337AE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006337B1  2B C2                     SUB EAX,EDX
006337B3  3B CB                     CMP ECX,EBX
006337B5  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006337B8  DF 6D DC                  FILD qword ptr [EBP + -0x24]
006337BB  D9 C0                     FLD ST0
006337BD  D8 4E 5D                  FMUL float ptr [ESI + 0x5d]
006337C0  D9 FE                     FSIN
006337C2  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006337C8  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006337CE  D9 46 75                  FLD float ptr [ESI + 0x75]
006337D1  D8 66 65                  FSUB float ptr [ESI + 0x65]
006337D4  DE C9                     FMULP
006337D6  D8 46 65                  FADD float ptr [ESI + 0x65]
006337D9  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006337DC  D8 4E 61                  FMUL float ptr [ESI + 0x61]
006337DF  D9 FF                     FCOS
006337E1  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006337E7  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006337ED  D9 46 79                  FLD float ptr [ESI + 0x79]
006337F0  D8 66 6D                  FSUB float ptr [ESI + 0x6d]
006337F3  DE C9                     FMULP
006337F5  D8 46 6D                  FADD float ptr [ESI + 0x6d]
006337F8  D9 5D E0                  FSTP float ptr [EBP + -0x20]
006337FB  0F 8E 28 15 00 00         JLE 0x00634d29
LAB_00633801:
00633801  8B 06                     MOV EAX,dword ptr [ESI]
00633803  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00633806  0F 83 8D 00 00 00         JNC 0x00633899
0063380C  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0063380F  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00633812  0F AF FB                  IMUL EDI,EBX
00633815  03 FA                     ADD EDI,EDX
00633817  85 FF                     TEST EDI,EDI
00633819  74 7E                     JZ 0x00633899
0063381B  D9 46 7D                  FLD float ptr [ESI + 0x7d]
0063381E  D8 47 21                  FADD float ptr [EDI + 0x21]
00633821  D8 45 08                  FADD float ptr [EBP + 0x8]
00633824  D9 FF                     FCOS
00633826  D8 8E 8D 00 00 00         FMUL float ptr [ESI + 0x8d]
0063382C  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633832  D8 47 21                  FADD float ptr [EDI + 0x21]
00633835  D8 45 E0                  FADD float ptr [EBP + -0x20]
00633838  D9 FF                     FCOS
0063383A  D8 8E 91 00 00 00         FMUL float ptr [ESI + 0x91]
00633840  D9 55 0C                  FST float ptr [EBP + 0xc]
00633843  D9 FE                     FSIN
00633845  D9 C1                     FLD ST1
00633847  D9 FF                     FCOS
00633849  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
0063384F  D8 C9                     FMUL ST1
00633851  E8 32 AA 0F 00            CALL 0x0072e288
00633856  D9 C9                     FXCH
00633858  D9 FE                     FSIN
0063385A  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00633860  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00633863  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00633869  D8 C9                     FMUL ST1
0063386B  E8 18 AA 0F 00            CALL 0x0072e288
00633870  DD D8                     FSTP ST0
00633872  D9 45 0C                  FLD float ptr [EBP + 0xc]
00633875  D9 FF                     FCOS
00633877  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
0063387D  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00633880  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
00633886  E8 FD A9 0F 00            CALL 0x0072e288
0063388B  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
00633891  03 C1                     ADD EAX,ECX
00633893  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00633896  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00633899:
00633899  43                        INC EBX
0063389A  3B D9                     CMP EBX,ECX
0063389C  0F 8C 5F FF FF FF         JL 0x00633801
006338A2  5F                        POP EDI
006338A3  5E                        POP ESI
006338A4  5B                        POP EBX
006338A5  8B E5                     MOV ESP,EBP
006338A7  5D                        POP EBP
006338A8  C2 08 00                  RET 0x8
switchD_00633787::caseD_1:
006338AB  DB 45 08                  FILD dword ptr [EBP + 0x8]
006338AE  D8 0D C4 D1 79 00         FMUL float ptr [0x0079d1c4]
006338B4  D9 C0                     FLD ST0
006338B6  D9 FF                     FCOS
006338B8  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006338BB  D9 FE                     FSIN
006338BD  D9 5D F8                  FSTP float ptr [EBP + -0x8]
006338C0  D9 86 8D 00 00 00         FLD float ptr [ESI + 0x8d]
006338C6  D8 5E 79                  FCOMP float ptr [ESI + 0x79]
006338C9  DF E0                     FNSTSW AX
006338CB  F6 C4 41                  TEST AH,0x41
006338CE  75 12                     JNZ 0x006338e2
006338D0  D9 86 8D 00 00 00         FLD float ptr [ESI + 0x8d]
006338D6  D8 66 79                  FSUB float ptr [ESI + 0x79]
006338D9  D8 46 6D                  FADD float ptr [ESI + 0x6d]
006338DC  D9 9E 8D 00 00 00         FSTP float ptr [ESI + 0x8d]
LAB_006338e2:
006338E2  8B 0E                     MOV ECX,dword ptr [ESI]
006338E4  33 D2                     XOR EDX,EDX
006338E6  3B CA                     CMP ECX,EDX
006338E8  0F 84 ED 01 00 00         JZ 0x00633adb
006338EE  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006338F1  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006338F4  D9 86 91 00 00 00         FLD float ptr [ESI + 0x91]
006338FA  DC C0                     FADD ST0,ST0
006338FC  8D 3C 00                  LEA EDI,[EAX + EAX*0x1]
006338FF  2B C8                     SUB ECX,EAX
00633901  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
00633904  3B C2                     CMP EAX,EDX
00633906  D8 2D A4 D1 79 00         FSUBR float ptr [0x0079d1a4]
0063390C  DA 75 0C                  FIDIV dword ptr [EBP + 0xc]
0063390F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00633912  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00633915  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00633918  D9 5D E8                  FSTP float ptr [EBP + -0x18]
0063391B  0F 8E D6 00 00 00         JLE 0x006339f7
00633921  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00633924  8B D9                     MOV EBX,ECX
LAB_00633926:
00633926  8B 06                     MOV EAX,dword ptr [ESI]
00633928  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063392B  0F 83 A7 00 00 00         JNC 0x006339d8
00633931  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00633934  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00633937  0F AF FB                  IMUL EDI,EBX
0063393A  03 FA                     ADD EDI,EDX
0063393C  85 FF                     TEST EDI,EDI
0063393E  0F 84 94 00 00 00         JZ 0x006339d8
00633944  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00633947  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
0063394D  DA 75 08                  FIDIV dword ptr [EBP + 0x8]
00633950  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00633956  D8 45 E8                  FADD float ptr [EBP + -0x18]
00633959  D9 46 69                  FLD float ptr [ESI + 0x69]
0063395C  D8 66 65                  FSUB float ptr [ESI + 0x65]
0063395F  D8 46 65                  FADD float ptr [ESI + 0x65]
00633962  D9 55 0C                  FST float ptr [EBP + 0xc]
00633965  D9 FE                     FSIN
00633967  D9 C1                     FLD ST1
00633969  D9 FF                     FCOS
0063396B  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00633971  D8 C9                     FMUL ST1
00633973  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00633976  D9 C9                     FXCH
00633978  D9 FE                     FSIN
0063397A  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00633980  D8 C9                     FMUL ST1
00633982  D9 C9                     FXCH
00633984  DD D8                     FSTP ST0
00633986  D9 C0                     FLD ST0
00633988  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063398B  D9 45 08                  FLD float ptr [EBP + 0x8]
0063398E  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00633991  DE C1                     FADDP
00633993  E8 F0 A8 0F 00            CALL 0x0072e288
00633998  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063399B  D9 45 08                  FLD float ptr [EBP + 0x8]
0063399E  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006339A1  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
006339A7  DE E9                     FSUBP
006339A9  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
006339AC  E8 D7 A8 0F 00            CALL 0x0072e288
006339B1  D9 45 0C                  FLD float ptr [EBP + 0xc]
006339B4  D9 FF                     FCOS
006339B6  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
006339BC  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
006339BF  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
006339C5  E8 BE A8 0F 00            CALL 0x0072e288
006339CA  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
006339D0  03 C1                     ADD EAX,ECX
006339D2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006339D5  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_006339d8:
006339D8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006339DB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006339DE  83 C0 02                  ADD EAX,0x2
006339E1  42                        INC EDX
006339E2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006339E5  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006339E8  43                        INC EBX
006339E9  3B D0                     CMP EDX,EAX
006339EB  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006339EE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006339F1  0F 8C 2F FF FF FF         JL 0x00633926
LAB_006339f7:
006339F7  33 DB                     XOR EBX,EBX
006339F9  85 C9                     TEST ECX,ECX
006339FB  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006339FE  0F 8E D7 00 00 00         JLE 0x00633adb
LAB_00633a04:
00633A04  8B 06                     MOV EAX,dword ptr [ESI]
00633A06  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00633A09  0F 83 C0 00 00 00         JNC 0x00633acf
00633A0F  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00633A12  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00633A15  0F AF FB                  IMUL EDI,EBX
00633A18  03 FA                     ADD EDI,EDX
00633A1A  85 FF                     TEST EDI,EDI
00633A1C  0F 84 AD 00 00 00         JZ 0x00633acf
00633A22  D9 47 21                  FLD float ptr [EDI + 0x21]
00633A25  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00633A2B  DB 46 1D                  FILD dword ptr [ESI + 0x1d]
00633A2E  DA 4D F0                  FIMUL dword ptr [EBP + -0x10]
00633A31  D8 0D A4 C5 79 00         FMUL float ptr [0x0079c5a4]
00633A37  DA 76 19                  FIDIV dword ptr [ESI + 0x19]
00633A3A  D8 86 91 00 00 00         FADD float ptr [ESI + 0x91]
00633A40  D9 FE                     FSIN
00633A42  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
00633A48  D9 46 69                  FLD float ptr [ESI + 0x69]
00633A4B  D8 66 65                  FSUB float ptr [ESI + 0x65]
00633A4E  DE C9                     FMULP
00633A50  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
00633A56  D8 46 65                  FADD float ptr [ESI + 0x65]
00633A59  D9 55 0C                  FST float ptr [EBP + 0xc]
00633A5C  D9 FE                     FSIN
00633A5E  D9 C1                     FLD ST1
00633A60  D9 FF                     FCOS
00633A62  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00633A68  D8 C9                     FMUL ST1
00633A6A  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00633A6D  D9 C9                     FXCH
00633A6F  D9 FE                     FSIN
00633A71  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00633A77  D8 C9                     FMUL ST1
00633A79  D9 C9                     FXCH
00633A7B  DD D8                     FSTP ST0
00633A7D  D9 C0                     FLD ST0
00633A7F  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00633A82  D9 45 08                  FLD float ptr [EBP + 0x8]
00633A85  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00633A88  DE C1                     FADDP
00633A8A  E8 F9 A7 0F 00            CALL 0x0072e288
00633A8F  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00633A92  D9 45 08                  FLD float ptr [EBP + 0x8]
00633A95  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00633A98  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00633A9E  DE E9                     FSUBP
00633AA0  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00633AA3  E8 E0 A7 0F 00            CALL 0x0072e288
00633AA8  D9 45 0C                  FLD float ptr [EBP + 0xc]
00633AAB  D9 FF                     FCOS
00633AAD  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
00633AB3  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00633AB6  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
00633ABC  E8 C7 A7 0F 00            CALL 0x0072e288
00633AC1  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
00633AC7  03 C1                     ADD EAX,ECX
00633AC9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00633ACC  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00633acf:
00633ACF  43                        INC EBX
00633AD0  3B D9                     CMP EBX,ECX
00633AD2  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00633AD5  0F 8C 29 FF FF FF         JL 0x00633a04
LAB_00633adb:
00633ADB  D9 86 89 00 00 00         FLD float ptr [ESI + 0x89]
00633AE1  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00633AE7  D9 9E 8D 00 00 00         FSTP float ptr [ESI + 0x8d]
00633AED  D9 86 85 00 00 00         FLD float ptr [ESI + 0x85]
00633AF3  D8 86 91 00 00 00         FADD float ptr [ESI + 0x91]
00633AF9  D9 9E 91 00 00 00         FSTP float ptr [ESI + 0x91]
00633AFF  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633B05  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00633B0B  DF E0                     FNSTSW AX
00633B0D  F6 C4 40                  TEST AH,0x40
00633B10  0F 85 13 12 00 00         JNZ 0x00634d29
00633B16  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633B1C  D8 46 69                  FADD float ptr [ESI + 0x69]
00633B1F  D9 56 69                  FST float ptr [ESI + 0x69]
00633B22  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633B28  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00633B2E  DF E0                     FNSTSW AX
00633B30  F6 C4 41                  TEST AH,0x41
00633B33  75 25                     JNZ 0x00633b5a
00633B35  D8 5E 75                  FCOMP float ptr [ESI + 0x75]
00633B38  DF E0                     FNSTSW AX
00633B3A  F6 C4 01                  TEST AH,0x1
00633B3D  0F 85 E6 11 00 00         JNZ 0x00634d29
00633B43  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633B49  D9 E0                     FCHS
00633B4B  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
00633B51  5F                        POP EDI
00633B52  5E                        POP ESI
00633B53  5B                        POP EBX
00633B54  8B E5                     MOV ESP,EBP
00633B56  5D                        POP EBP
00633B57  C2 08 00                  RET 0x8
LAB_00633b5a:
00633B5A  D8 5E 65                  FCOMP float ptr [ESI + 0x65]
00633B5D  DF E0                     FNSTSW AX
00633B5F  F6 C4 41                  TEST AH,0x41
00633B62  0F 84 C1 11 00 00         JZ 0x00634d29
00633B68  D9 86 81 00 00 00         FLD float ptr [ESI + 0x81]
00633B6E  D9 E0                     FCHS
00633B70  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
00633B76  5F                        POP EDI
00633B77  5E                        POP ESI
00633B78  5B                        POP EBX
00633B79  8B E5                     MOV ESP,EBP
00633B7B  5D                        POP EBP
00633B7C  C2 08 00                  RET 0x8
switchD_00633787::caseD_2:
00633B7F  DB 45 08                  FILD dword ptr [EBP + 0x8]
00633B82  D8 0D C4 D1 79 00         FMUL float ptr [0x0079d1c4]
00633B88  D9 C0                     FLD ST0
00633B8A  D9 FF                     FCOS
00633B8C  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00633B8F  D9 FE                     FSIN
00633B91  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00633B94  D9 86 91 00 00 00         FLD float ptr [ESI + 0x91]
00633B9A  D9 86 8D 00 00 00         FLD float ptr [ESI + 0x8d]
00633BA0  D8 5E 79                  FCOMP float ptr [ESI + 0x79]
00633BA3  DF E0                     FNSTSW AX
00633BA5  F6 C4 41                  TEST AH,0x41
00633BA8  75 12                     JNZ 0x00633bbc
00633BAA  D9 86 8D 00 00 00         FLD float ptr [ESI + 0x8d]
00633BB0  D8 66 79                  FSUB float ptr [ESI + 0x79]
00633BB3  D8 46 6D                  FADD float ptr [ESI + 0x6d]
00633BB6  D9 9E 8D 00 00 00         FSTP float ptr [ESI + 0x8d]
LAB_00633bbc:
00633BBC  D9 86 91 00 00 00         FLD float ptr [ESI + 0x91]
00633BC2  D8 5E 75                  FCOMP float ptr [ESI + 0x75]
00633BC5  DF E0                     FNSTSW AX
00633BC7  F6 C4 41                  TEST AH,0x41
00633BCA  75 12                     JNZ 0x00633bde
00633BCC  D9 86 91 00 00 00         FLD float ptr [ESI + 0x91]
00633BD2  D8 66 75                  FSUB float ptr [ESI + 0x75]
00633BD5  D8 46 65                  FADD float ptr [ESI + 0x65]
00633BD8  D9 9E 91 00 00 00         FSTP float ptr [ESI + 0x91]
LAB_00633bde:
00633BDE  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633BE1  33 DB                     XOR EBX,EBX
00633BE3  85 C0                     TEST EAX,EAX
00633BE5  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00633BE8  0F 8E FE 00 00 00         JLE 0x00633cec
00633BEE  8D 4E 21                  LEA ECX,[ESI + 0x21]
00633BF1  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00633BF4  EB 03                     JMP 0x00633bf9
LAB_00633bf6:
00633BF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00633bf9:
00633BF9  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00633BFC  D8 4E 7D                  FMUL float ptr [ESI + 0x7d]
00633BFF  D9 5D E0                  FSTP float ptr [EBP + -0x20]
00633C02  D9 86 91 00 00 00         FLD float ptr [ESI + 0x91]
00633C08  D8 65 E0                  FSUB float ptr [EBP + -0x20]
00633C0B  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
00633C11  D9 01                     FLD float ptr [ECX]
00633C13  DF E0                     FNSTSW AX
00633C15  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00633C1B  F6 C4 01                  TEST AH,0x1
00633C1E  DF E0                     FNSTSW AX
00633C20  75 4A                     JNZ 0x00633c6c
00633C22  F6 C4 41                  TEST AH,0x41
00633C25  0F 84 A7 00 00 00         JZ 0x00633cd2
00633C2B  8B 4E 19                  MOV ECX,dword ptr [ESI + 0x19]
00633C2E  8B C1                     MOV EAX,ECX
00633C30  0F AF C3                  IMUL EAX,EBX
00633C33  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
00633C36  8B 0E                     MOV ECX,dword ptr [ESI]
00633C38  85 C9                     TEST ECX,ECX
00633C3A  0F 84 92 00 00 00         JZ 0x00633cd2
00633C40  3B C7                     CMP EAX,EDI
00633C42  8B D0                     MOV EDX,EAX
00633C44  0F 8D 88 00 00 00         JGE 0x00633cd2
LAB_00633c4a:
00633C4A  8B 0E                     MOV ECX,dword ptr [ESI]
00633C4C  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633C4F  73 14                     JNC 0x00633c65
00633C51  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633C54  0F AF C2                  IMUL EAX,EDX
00633C57  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633C5A  85 C0                     TEST EAX,EAX
00633C5C  74 07                     JZ 0x00633c65
00633C5E  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
LAB_00633c65:
00633C65  42                        INC EDX
00633C66  3B D7                     CMP EDX,EDI
00633C68  7C E0                     JL 0x00633c4a
00633C6A  EB 66                     JMP 0x00633cd2
LAB_00633c6c:
00633C6C  F6 C4 41                  TEST AH,0x41
00633C6F  75 61                     JNZ 0x00633cd2
00633C71  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00633C74  D9 01                     FLD float ptr [ECX]
00633C76  D8 5E 75                  FCOMP float ptr [ESI + 0x75]
00633C79  DF E0                     FNSTSW AX
00633C7B  F6 C4 01                  TEST AH,0x1
00633C7E  74 0E                     JZ 0x00633c8e
00633C80  DD D8                     FSTP ST0
00633C82  D9 46 75                  FLD float ptr [ESI + 0x75]
00633C85  D8 86 91 00 00 00         FADD float ptr [ESI + 0x91]
00633C8B  D8 65 E0                  FSUB float ptr [EBP + -0x20]
LAB_00633c8e:
00633C8E  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
00633C94  DF E0                     FNSTSW AX
00633C96  F6 C4 01                  TEST AH,0x1
00633C99  74 37                     JZ 0x00633cd2
00633C9B  8B 4E 19                  MOV ECX,dword ptr [ESI + 0x19]
00633C9E  8B C1                     MOV EAX,ECX
00633CA0  0F AF C3                  IMUL EAX,EBX
00633CA3  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
00633CA6  8B 0E                     MOV ECX,dword ptr [ESI]
00633CA8  85 C9                     TEST ECX,ECX
00633CAA  74 26                     JZ 0x00633cd2
00633CAC  3B C7                     CMP EAX,EDI
00633CAE  8B D0                     MOV EDX,EAX
00633CB0  7D 20                     JGE 0x00633cd2
LAB_00633cb2:
00633CB2  8B 0E                     MOV ECX,dword ptr [ESI]
00633CB4  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633CB7  73 14                     JNC 0x00633ccd
00633CB9  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633CBC  0F AF C2                  IMUL EAX,EDX
00633CBF  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633CC2  85 C0                     TEST EAX,EAX
00633CC4  74 07                     JZ 0x00633ccd
00633CC6  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
LAB_00633ccd:
00633CCD  42                        INC EDX
00633CCE  3B D7                     CMP EDX,EDI
00633CD0  7C E0                     JL 0x00633cb2
LAB_00633cd2:
00633CD2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00633CD5  43                        INC EBX
00633CD6  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00633CD9  D9 18                     FSTP float ptr [EAX]
00633CDB  83 C0 04                  ADD EAX,0x4
00633CDE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00633CE1  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633CE4  3B D8                     CMP EBX,EAX
00633CE6  0F 8C 0A FF FF FF         JL 0x00633bf6
LAB_00633cec:
00633CEC  8B 06                     MOV EAX,dword ptr [ESI]
00633CEE  85 C0                     TEST EAX,EAX
00633CF0  0F 84 C2 00 00 00         JZ 0x00633db8
00633CF6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00633CF9  33 DB                     XOR EBX,EBX
00633CFB  85 C9                     TEST ECX,ECX
00633CFD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00633D00  0F 8E B2 00 00 00         JLE 0x00633db8
LAB_00633d06:
00633D06  8B 7E 19                  MOV EDI,dword ptr [ESI + 0x19]
00633D09  85 FF                     TEST EDI,EDI
00633D0B  74 0B                     JZ 0x00633d18
00633D0D  8B C3                     MOV EAX,EBX
00633D0F  99                        CDQ
00633D10  DD D8                     FSTP ST0
00633D12  F7 FF                     IDIV EDI
00633D14  D9 44 86 21               FLD float ptr [ESI + EAX*0x4 + 0x21]
LAB_00633d18:
00633D18  8B 06                     MOV EAX,dword ptr [ESI]
00633D1A  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00633D1D  0F 83 8C 00 00 00         JNC 0x00633daf
00633D23  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00633D26  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00633D29  0F AF FB                  IMUL EDI,EBX
00633D2C  03 FA                     ADD EDI,EDX
00633D2E  85 FF                     TEST EDI,EDI
00633D30  74 7D                     JZ 0x00633daf
00633D32  D9 47 21                  FLD float ptr [EDI + 0x21]
00633D35  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00633D3B  D9 C1                     FLD ST1
00633D3D  D9 FE                     FSIN
00633D3F  D9 C1                     FLD ST1
00633D41  D9 FF                     FCOS
00633D43  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00633D49  D8 C9                     FMUL ST1
00633D4B  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00633D4E  D9 C9                     FXCH
00633D50  D9 FE                     FSIN
00633D52  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00633D58  D8 C9                     FMUL ST1
00633D5A  D9 C9                     FXCH
00633D5C  DD D8                     FSTP ST0
00633D5E  D9 C0                     FLD ST0
00633D60  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00633D63  D9 45 08                  FLD float ptr [EBP + 0x8]
00633D66  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00633D69  DE C1                     FADDP
00633D6B  E8 18 A5 0F 00            CALL 0x0072e288
00633D70  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00633D73  D9 45 08                  FLD float ptr [EBP + 0x8]
00633D76  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00633D79  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00633D7F  DE E9                     FSUBP
00633D81  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00633D84  E8 FF A4 0F 00            CALL 0x0072e288
00633D89  D9 C0                     FLD ST0
00633D8B  D9 FF                     FCOS
00633D8D  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
00633D93  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00633D96  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
00633D9C  E8 E7 A4 0F 00            CALL 0x0072e288
00633DA1  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
00633DA7  03 C1                     ADD EAX,ECX
00633DA9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00633DAC  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00633daf:
00633DAF  43                        INC EBX
00633DB0  3B D9                     CMP EBX,ECX
00633DB2  0F 8C 4E FF FF FF         JL 0x00633d06
LAB_00633db8:
00633DB8  DD D8                     FSTP ST0
00633DBA  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00633DBD  5F                        POP EDI
00633DBE  D8 8E 89 00 00 00         FMUL float ptr [ESI + 0x89]
00633DC4  D8 0D 78 D0 79 00         FMUL float ptr [0x0079d078]
00633DCA  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00633DD0  D9 9E 8D 00 00 00         FSTP float ptr [ESI + 0x8d]
00633DD6  D9 86 85 00 00 00         FLD float ptr [ESI + 0x85]
00633DDC  D8 86 91 00 00 00         FADD float ptr [ESI + 0x91]
00633DE2  D9 9E 91 00 00 00         FSTP float ptr [ESI + 0x91]
00633DE8  5E                        POP ESI
00633DE9  5B                        POP EBX
00633DEA  8B E5                     MOV ESP,EBP
00633DEC  5D                        POP EBP
00633DED  C2 08 00                  RET 0x8
switchD_00633787::caseD_3:
00633DF0  DB 45 08                  FILD dword ptr [EBP + 0x8]
00633DF3  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
00633DF6  33 D2                     XOR EDX,EDX
00633DF8  83 F8 06                  CMP EAX,0x6
00633DFB  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00633DFE  D8 0D C4 D1 79 00         FMUL float ptr [0x0079d1c4]
00633E04  D9 C0                     FLD ST0
00633E06  D9 FF                     FCOS
00633E08  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00633E0B  D9 FE                     FSIN
00633E0D  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00633E10  0F 87 13 0F 00 00         JA 0x00634d29
switchD_00633e16::switchD:
00633E16  FF 24 85 1C 53 63 00      JMP dword ptr [EAX*0x4 + 0x63531c]
switchD_00633e16::caseD_0:
00633E1D  8B 0E                     MOV ECX,dword ptr [ESI]
00633E1F  3B CA                     CMP ECX,EDX
00633E21  0F 84 02 0F 00 00         JZ 0x00634d29
00633E27  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00633E2D  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00633E34  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00633E37  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00633E3D  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
00633E40  2B C2                     SUB EAX,EDX
00633E42  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
00633E45  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00633E48  DF 6D E4                  FILD qword ptr [EBP + -0x1c]
00633E4B  D8 8E 81 00 00 00         FMUL float ptr [ESI + 0x81]
00633E51  D8 56 71                  FCOM float ptr [ESI + 0x71]
00633E54  DF E0                     FNSTSW AX
00633E56  F6 C4 01                  TEST AH,0x1
00633E59  0F 85 ED 00 00 00         JNZ 0x00633f4c
00633E5F  33 C9                     XOR ECX,ECX
00633E61  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00633E68  85 FF                     TEST EDI,EDI
00633E6A  DD D8                     FSTP ST0
00633E6C  7E 22                     JLE 0x00633e90
LAB_00633e6e:
00633E6E  8B 16                     MOV EDX,dword ptr [ESI]
00633E70  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
00633E73  73 0D                     JNC 0x00633e82
00633E75  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00633E78  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
00633E7B  0F AF C1                  IMUL EAX,ECX
00633E7E  03 C3                     ADD EAX,EBX
00633E80  EB 02                     JMP 0x00633e84
LAB_00633e82:
00633E82  33 C0                     XOR EAX,EAX
LAB_00633e84:
00633E84  41                        INC ECX
00633E85  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
00633E8C  3B CF                     CMP ECX,EDI
00633E8E  7C DE                     JL 0x00633e6e
LAB_00633e90:
00633E90  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633E93  33 D2                     XOR EDX,EDX
00633E95  85 C0                     TEST EAX,EAX
00633E97  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00633E9A  0F 8E 77 02 00 00         JLE 0x00634117
00633EA0  BB 02 00 00 00            MOV EBX,0x2
00633EA5  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_00633ea8:
00633EA8  8B 0E                     MOV ECX,dword ptr [ESI]
00633EAA  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633EAD  73 0D                     JNC 0x00633ebc
00633EAF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633EB2  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00633EB5  0F AF C2                  IMUL EAX,EDX
00633EB8  03 C7                     ADD EAX,EDI
00633EBA  EB 02                     JMP 0x00633ebe
LAB_00633ebc:
00633EBC  33 C0                     XOR EAX,EAX
LAB_00633ebe:
00633EBE  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00633EC1  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00633EC4  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
00633ECB  D8 0D FC 04 79 00         FMUL float ptr [0x007904fc]
00633ED1  D9 58 21                  FSTP float ptr [EAX + 0x21]
00633ED4  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00633ED7  8B 3E                     MOV EDI,dword ptr [ESI]
00633ED9  03 C2                     ADD EAX,EDX
00633EDB  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00633EDE  D1 E0                     SHL EAX,0x1
00633EE0  3B C1                     CMP EAX,ECX
00633EE2  73 0B                     JNC 0x00633eef
00633EE4  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00633EE7  0F AF C8                  IMUL ECX,EAX
00633EEA  03 4F 1C                  ADD ECX,dword ptr [EDI + 0x1c]
00633EED  EB 02                     JMP 0x00633ef1
LAB_00633eef:
00633EEF  33 C9                     XOR ECX,ECX
LAB_00633ef1:
00633EF1  8D 43 FF                  LEA EAX,[EBX + -0x1]
00633EF4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00633EF7  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00633EFA  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00633EFD  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
00633F04  D9 59 21                  FSTP float ptr [ECX + 0x21]
00633F07  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00633F0A  03 CA                     ADD ECX,EDX
00633F0C  8D 7C 09 01               LEA EDI,[ECX + ECX*0x1 + 0x1]
00633F10  8B 0E                     MOV ECX,dword ptr [ESI]
00633F12  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00633F15  73 0B                     JNC 0x00633f22
00633F17  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633F1A  0F AF C7                  IMUL EAX,EDI
00633F1D  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633F20  EB 02                     JMP 0x00633f24
LAB_00633f22:
00633F22  33 C0                     XOR EAX,EAX
LAB_00633f24:
00633F24  DB 45 08                  FILD dword ptr [EBP + 0x8]
00633F27  42                        INC EDX
00633F28  83 C3 03                  ADD EBX,0x3
00633F2B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00633F2E  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00633F31  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00633F34  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
00633F3B  D9 58 21                  FSTP float ptr [EAX + 0x21]
00633F3E  3B 56 1D                  CMP EDX,dword ptr [ESI + 0x1d]
00633F41  0F 8C 61 FF FF FF         JL 0x00633ea8
00633F47  E9 CB 01 00 00            JMP 0x00634117
LAB_00633f4c:
00633F4C  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
00633F52  BB 01 00 00 00            MOV EBX,0x1
00633F57  DF E0                     FNSTSW AX
00633F59  F6 C4 41                  TEST AH,0x41
00633F5C  75 45                     JNZ 0x00633fa3
00633F5E  8B 56 1D                  MOV EDX,dword ptr [ESI + 0x1d]
00633F61  8D 54 12 FF               LEA EDX,[EDX + EDX*0x1 + -0x1]
00633F65  3B D7                     CMP EDX,EDI
00633F67  73 0B                     JNC 0x00633f74
00633F69  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633F6C  0F AF C2                  IMUL EAX,EDX
00633F6F  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633F72  EB 02                     JMP 0x00633f76
LAB_00633f74:
00633F74  33 C0                     XOR EAX,EAX
LAB_00633f76:
00633F76  D9 C0                     FLD ST0
00633F78  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00633F7B  8D 57 FF                  LEA EDX,[EDI + -0x1]
00633F7E  D8 46 41                  FADD float ptr [ESI + 0x41]
00633F81  D9 58 21                  FSTP float ptr [EAX + 0x21]
00633F84  8B 0E                     MOV ECX,dword ptr [ESI]
00633F86  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00633F89  73 0B                     JNC 0x00633f96
00633F8B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00633F8E  0F AF C2                  IMUL EAX,EDX
00633F91  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00633F94  EB 02                     JMP 0x00633f98
LAB_00633f96:
00633F96  33 C0                     XOR EAX,EAX
LAB_00633f98:
00633F98  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00633F9B  D9 46 41                  FLD float ptr [ESI + 0x41]
00633F9E  D8 E1                     FSUB ST0,ST1
00633FA0  D9 58 21                  FSTP float ptr [EAX + 0x21]
LAB_00633fa3:
00633FA3  D9 C0                     FLD ST0
00633FA5  D8 76 75                  FDIV float ptr [ESI + 0x75]
00633FA8  E8 DB A2 0F 00            CALL 0x0072e288
00633FAD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00633FB0  DB 45 08                  FILD dword ptr [EBP + 0x8]
00633FB3  85 C0                     TEST EAX,EAX
00633FB5  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00633FB8  D8 E9                     FSUBR ST0,ST1
00633FBA  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00633FBD  DD D8                     FSTP ST0
00633FBF  0F 8E 39 01 00 00         JLE 0x006340fe
00633FC5  BB 01 00 00 00            MOV EBX,0x1
00633FCA  3B C3                     CMP EAX,EBX
00633FCC  0F 8C 45 01 00 00         JL 0x00634117
00633FD2  48                        DEC EAX
00633FD3  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_00633fd6:
00633FD6  8B C3                     MOV EAX,EBX
00633FD8  B9 03 00 00 00            MOV ECX,0x3
00633FDD  99                        CDQ
00633FDE  F7 F9                     IDIV ECX
00633FE0  B8 56 55 55 55            MOV EAX,0x55555556
00633FE5  8B CA                     MOV ECX,EDX
00633FE7  85 C9                     TEST ECX,ECX
00633FE9  75 7E                     JNZ 0x00634069
00633FEB  F7 EB                     IMUL EBX
00633FED  8B 0E                     MOV ECX,dword ptr [ESI]
00633FEF  8B C2                     MOV EAX,EDX
00633FF1  C1 E8 1F                  SHR EAX,0x1f
00633FF4  03 D0                     ADD EDX,EAX
00633FF6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00633FF9  8B FA                     MOV EDI,EDX
00633FFB  3B F8                     CMP EDI,EAX
00633FFD  73 0D                     JNC 0x0063400c
00633FFF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634002  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00634005  0F AF C7                  IMUL EAX,EDI
00634008  03 C2                     ADD EAX,EDX
0063400A  EB 02                     JMP 0x0063400e
LAB_0063400c:
0063400C  33 C0                     XOR EAX,EAX
LAB_0063400e:
0063400E  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00634011  C7 40 08 01 00 00 00      MOV dword ptr [EAX + 0x8],0x1
00634018  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063401B  D9 C0                     FLD ST0
0063401D  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00634020  D8 46 41                  FADD float ptr [ESI + 0x41]
00634023  D8 45 F0                  FADD float ptr [EBP + -0x10]
00634026  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634029  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063402C  3B C8                     CMP ECX,EAX
0063402E  0F 84 B3 00 00 00         JZ 0x006340e7
00634034  99                        CDQ
00634035  2B C2                     SUB EAX,EDX
00634037  8B 16                     MOV EDX,dword ptr [ESI]
00634039  D1 F8                     SAR EAX,0x1
0063403B  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
0063403E  03 C7                     ADD EAX,EDI
00634040  3B C1                     CMP EAX,ECX
00634042  73 0B                     JNC 0x0063404f
00634044  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00634047  0F AF C8                  IMUL ECX,EAX
0063404A  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0063404D  EB 02                     JMP 0x00634051
LAB_0063404f:
0063404F  33 C9                     XOR ECX,ECX
LAB_00634051:
00634051  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
00634058  D8 4E 75                  FMUL float ptr [ESI + 0x75]
0063405B  D8 45 F0                  FADD float ptr [EBP + -0x10]
0063405E  D8 6E 41                  FSUBR float ptr [ESI + 0x41]
00634061  D9 59 21                  FSTP float ptr [ECX + 0x21]
00634064  E9 80 00 00 00            JMP 0x006340e9
LAB_00634069:
00634069  F7 EB                     IMUL EBX
0063406B  8B C2                     MOV EAX,EDX
0063406D  C1 E8 1F                  SHR EAX,0x1f
00634070  03 D0                     ADD EDX,EAX
00634072  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
00634075  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634078  8D 3C 4A                  LEA EDI,[EDX + ECX*0x2]
0063407B  8B 0E                     MOV ECX,dword ptr [ESI]
0063407D  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00634080  73 0B                     JNC 0x0063408d
00634082  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634085  0F AF C7                  IMUL EAX,EDI
00634088  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0063408B  EB 02                     JMP 0x0063408f
LAB_0063408d:
0063408D  33 C0                     XOR EAX,EAX
LAB_0063408f:
0063408F  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00634092  BF 01 00 00 00            MOV EDI,0x1
00634097  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
0063409A  D9 C0                     FLD ST0
0063409C  D8 4E 75                  FMUL float ptr [ESI + 0x75]
0063409F  D8 46 41                  FADD float ptr [ESI + 0x41]
006340A2  D8 45 F0                  FADD float ptr [EBP + -0x10]
006340A5  D9 58 21                  FSTP float ptr [EAX + 0x21]
006340A8  8B 86 99 00 00 00         MOV EAX,dword ptr [ESI + 0x99]
006340AE  03 C2                     ADD EAX,EDX
006340B0  8B 16                     MOV EDX,dword ptr [ESI]
006340B2  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
006340B5  73 1D                     JNC 0x006340d4
006340B7  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006340BA  0F AF C8                  IMUL ECX,EAX
006340BD  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
006340C0  89 7C 01 08               MOV dword ptr [ECX + EAX*0x1 + 0x8],EDI
006340C4  D8 4E 75                  FMUL float ptr [ESI + 0x75]
006340C7  03 C8                     ADD ECX,EAX
006340C9  D8 45 F0                  FADD float ptr [EBP + -0x10]
006340CC  D8 6E 41                  FSUBR float ptr [ESI + 0x41]
006340CF  D9 59 21                  FSTP float ptr [ECX + 0x21]
006340D2  EB 15                     JMP 0x006340e9
LAB_006340d4:
006340D4  33 C9                     XOR ECX,ECX
006340D6  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
006340D9  D8 4E 75                  FMUL float ptr [ESI + 0x75]
006340DC  D8 45 F0                  FADD float ptr [EBP + -0x10]
006340DF  D8 6E 41                  FSUBR float ptr [ESI + 0x41]
006340E2  D9 59 21                  FSTP float ptr [ECX + 0x21]
006340E5  EB 02                     JMP 0x006340e9
LAB_006340e7:
006340E7  DD D8                     FSTP ST0
LAB_006340e9:
006340E9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006340EC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006340EF  43                        INC EBX
006340F0  49                        DEC ECX
006340F1  3B D8                     CMP EBX,EAX
006340F3  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006340F6  0F 8E DA FE FF FF         JLE 0x00633fd6
006340FC  EB 19                     JMP 0x00634117
LAB_006340fe:
006340FE  8B 06                     MOV EAX,dword ptr [ESI]
00634100  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00634103  85 C9                     TEST ECX,ECX
00634105  76 05                     JBE 0x0063410c
00634107  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0063410A  EB 02                     JMP 0x0063410e
LAB_0063410c:
0063410C  33 C0                     XOR EAX,EAX
LAB_0063410e:
0063410E  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634111  8B 56 41                  MOV EDX,dword ptr [ESI + 0x41]
00634114  89 50 21                  MOV dword ptr [EAX + 0x21],EDX
LAB_00634117:
00634117  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0063411A  33 DB                     XOR EBX,EBX
0063411C  85 C0                     TEST EAX,EAX
0063411E  0F 8E AD 00 00 00         JLE 0x006341d1
LAB_00634124:
00634124  8B 06                     MOV EAX,dword ptr [ESI]
00634126  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634129  0F 83 96 00 00 00         JNC 0x006341c5
0063412F  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634132  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00634135  0F AF FB                  IMUL EDI,EBX
00634138  03 F9                     ADD EDI,ECX
0063413A  85 FF                     TEST EDI,EDI
0063413C  0F 84 83 00 00 00         JZ 0x006341c5
00634142  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00634146  75 7D                     JNZ 0x006341c5
00634148  D9 47 21                  FLD float ptr [EDI + 0x21]
0063414B  8B 46 45                  MOV EAX,dword ptr [ESI + 0x45]
0063414E  D8 46 41                  FADD float ptr [ESI + 0x41]
00634151  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00634154  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634157  D9 FE                     FSIN
00634159  D9 C1                     FLD ST1
0063415B  D9 FF                     FCOS
0063415D  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
00634163  D8 C9                     FMUL ST1
00634165  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634168  D9 C9                     FXCH
0063416A  D9 FE                     FSIN
0063416C  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00634172  D8 C9                     FMUL ST1
00634174  D9 C9                     FXCH
00634176  DD D8                     FSTP ST0
00634178  D9 C0                     FLD ST0
0063417A  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063417D  D9 45 08                  FLD float ptr [EBP + 0x8]
00634180  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634183  DE C1                     FADDP
00634185  E8 FE A0 0F 00            CALL 0x0072e288
0063418A  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063418D  D9 45 08                  FLD float ptr [EBP + 0x8]
00634190  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634193  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00634199  DE E9                     FSUBP
0063419B  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
0063419E  E8 E5 A0 0F 00            CALL 0x0072e288
006341A3  D9 45 0C                  FLD float ptr [EBP + 0xc]
006341A6  D9 FF                     FCOS
006341A8  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
006341AE  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
006341B1  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
006341B7  E8 CC A0 0F 00            CALL 0x0072e288
006341BC  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
006341C2  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_006341c5:
006341C5  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006341C8  43                        INC EBX
006341C9  3B D8                     CMP EBX,EAX
006341CB  0F 8C 53 FF FF FF         JL 0x00634124
LAB_006341d1:
006341D1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006341D4  85 C0                     TEST EAX,EAX
006341D6  0F 84 4D 0B 00 00         JZ 0x00634d29
006341DC  C7 46 2D 01 00 00 00      MOV dword ptr [ESI + 0x2d],0x1
006341E3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006341E9  5F                        POP EDI
006341EA  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
006341F0  C7 46 09 0F 00 00 00      MOV dword ptr [ESI + 0x9],0xf
006341F7  89 56 05                  MOV dword ptr [ESI + 0x5],EDX
006341FA  5E                        POP ESI
006341FB  5B                        POP EBX
006341FC  8B E5                     MOV ESP,EBP
006341FE  5D                        POP EBP
006341FF  C2 08 00                  RET 0x8
switchD_00633e16::caseD_1:
00634202  8B 0E                     MOV ECX,dword ptr [ESI]
00634204  3B CA                     CMP ECX,EDX
00634206  0F 84 1D 0B 00 00         JZ 0x00634d29
0063420C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00634211  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
00634214  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00634217  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0063421A  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00634220  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00634223  2B C7                     SUB EAX,EDI
00634225  8B 4E 09                  MOV ECX,dword ptr [ESI + 0x9]
00634228  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0063422B  3B C1                     CMP EAX,ECX
0063422D  DF 6D DC                  FILD qword ptr [EBP + -0x24]
00634230  D8 4E 61                  FMUL float ptr [ESI + 0x61]
00634233  D8 46 79                  FADD float ptr [ESI + 0x79]
00634236  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00634239  0F 82 58 01 00 00         JC 0x00634397
0063423F  8B 7E 1D                  MOV EDI,dword ptr [ESI + 0x1d]
00634242  33 C0                     XOR EAX,EAX
00634244  85 FF                     TEST EDI,EDI
00634246  0F 8E CC 00 00 00         JLE 0x00634318
LAB_0063424c:
0063424C  8B 16                     MOV EDX,dword ptr [ESI]
0063424E  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
00634251  3B C3                     CMP EAX,EBX
00634253  73 0B                     JNC 0x00634260
00634255  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00634258  0F AF C8                  IMUL ECX,EAX
0063425B  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
0063425E  EB 02                     JMP 0x00634262
LAB_00634260:
00634260  33 C9                     XOR ECX,ECX
LAB_00634262:
00634262  D9 41 21                  FLD float ptr [ECX + 0x21]
00634265  03 F8                     ADD EDI,EAX
00634267  3B FB                     CMP EDI,EBX
00634269  73 0B                     JNC 0x00634276
0063426B  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0063426E  0F AF CF                  IMUL ECX,EDI
00634271  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
00634274  EB 02                     JMP 0x00634278
LAB_00634276:
00634276  33 C9                     XOR ECX,ECX
LAB_00634278:
00634278  D9 59 21                  FSTP float ptr [ECX + 0x21]
0063427B  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
00634282  8B 5E 1D                  MOV EBX,dword ptr [ESI + 0x1d]
00634285  8B 16                     MOV EDX,dword ptr [ESI]
00634287  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
0063428A  8B 7A 0C                  MOV EDI,dword ptr [EDX + 0xc]
0063428D  D1 E1                     SHL ECX,0x1
0063428F  3B CF                     CMP ECX,EDI
00634291  73 0B                     JNC 0x0063429e
00634293  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
00634296  0F AF F9                  IMUL EDI,ECX
00634299  03 7A 1C                  ADD EDI,dword ptr [EDX + 0x1c]
0063429C  EB 02                     JMP 0x006342a0
LAB_0063429e:
0063429E  33 FF                     XOR EDI,EDI
LAB_006342a0:
006342A0  D9 47 21                  FLD float ptr [EDI + 0x21]
006342A3  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
006342A6  8D 3C 58                  LEA EDI,[EAX + EBX*0x2]
006342A9  D1 E7                     SHL EDI,0x1
006342AB  3B F9                     CMP EDI,ECX
006342AD  73 0B                     JNC 0x006342ba
006342AF  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006342B2  0F AF CF                  IMUL ECX,EDI
006342B5  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006342B8  EB 02                     JMP 0x006342bc
LAB_006342ba:
006342BA  33 C9                     XOR ECX,ECX
LAB_006342bc:
006342BC  D9 59 21                  FSTP float ptr [ECX + 0x21]
006342BF  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
006342C6  8B 5E 1D                  MOV EBX,dword ptr [ESI + 0x1d]
006342C9  8D 14 03                  LEA EDX,[EBX + EAX*0x1]
006342CC  8D 7C 12 01               LEA EDI,[EDX + EDX*0x1 + 0x1]
006342D0  8B 16                     MOV EDX,dword ptr [ESI]
006342D2  3B 7A 0C                  CMP EDI,dword ptr [EDX + 0xc]
006342D5  73 0B                     JNC 0x006342e2
006342D7  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006342DA  0F AF CF                  IMUL ECX,EDI
006342DD  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006342E0  EB 02                     JMP 0x006342e4
LAB_006342e2:
006342E2  33 C9                     XOR ECX,ECX
LAB_006342e4:
006342E4  D9 41 21                  FLD float ptr [ECX + 0x21]
006342E7  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006342EA  8D 7C 09 01               LEA EDI,[ECX + ECX*0x1 + 0x1]
006342EE  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
006342F1  3B F9                     CMP EDI,ECX
006342F3  73 0B                     JNC 0x00634300
006342F5  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006342F8  0F AF CF                  IMUL ECX,EDI
006342FB  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006342FE  EB 02                     JMP 0x00634302
LAB_00634300:
00634300  33 C9                     XOR ECX,ECX
LAB_00634302:
00634302  D9 59 21                  FSTP float ptr [ECX + 0x21]
00634305  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
0063430C  8B 7E 1D                  MOV EDI,dword ptr [ESI + 0x1d]
0063430F  40                        INC EAX
00634310  3B C7                     CMP EAX,EDI
00634312  0F 8C 34 FF FF FF         JL 0x0063424c
LAB_00634318:
00634318  D9 46 75                  FLD float ptr [ESI + 0x75]
0063431B  D8 0D FC 04 79 00         FMUL float ptr [0x007904fc]
00634321  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
00634327  D9 56 7D                  FST float ptr [ESI + 0x7d]
0063432A  D9 C0                     FLD ST0
0063432C  D8 B6 81 00 00 00         FDIV float ptr [ESI + 0x81]
00634332  E8 51 9F 0F 00            CALL 0x0072e288
00634337  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0063433A  C7 46 2D 02 00 00 00      MOV dword ptr [ESI + 0x2d],0x2
00634341  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634344  D8 F9                     FDIVR ST0,ST1
00634346  D9 9E 81 00 00 00         FSTP float ptr [ESI + 0x81]
0063434C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00634352  DD D8                     FSTP ST0
00634354  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634357  D8 1D A4 C5 79 00         FCOMP float ptr [0x0079c5a4]
0063435D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00634363  89 46 05                  MOV dword ptr [ESI + 0x5],EAX
00634366  DF E0                     FNSTSW AX
00634368  F6 C4 41                  TEST AH,0x41
0063436B  75 24                     JNZ 0x00634391
0063436D  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634370  D8 0D C0 D1 79 00         FMUL float ptr [0x0079d1c0]
00634376  E8 0D 9F 0F 00            CALL 0x0072e288
0063437B  D1 E0                     SHL EAX,0x1
0063437D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634380  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634383  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00634389  D8 6D F0                  FSUBR float ptr [EBP + -0x10]
0063438C  D9 5E 79                  FSTP float ptr [ESI + 0x79]
0063438F  EB 06                     JMP 0x00634397
LAB_00634391:
00634391  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00634394  89 4E 79                  MOV dword ptr [ESI + 0x79],ECX
LAB_00634397:
00634397  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063439A  33 DB                     XOR EBX,EBX
0063439C  85 C0                     TEST EAX,EAX
0063439E  0F 8E 85 09 00 00         JLE 0x00634d29
LAB_006343a4:
006343A4  8B 06                     MOV EAX,dword ptr [ESI]
006343A6  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
006343A9  0F 83 96 00 00 00         JNC 0x00634445
006343AF  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006343B2  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006343B5  0F AF FB                  IMUL EDI,EBX
006343B8  03 F9                     ADD EDI,ECX
006343BA  85 FF                     TEST EDI,EDI
006343BC  0F 84 83 00 00 00         JZ 0x00634445
006343C2  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
006343C6  75 7D                     JNZ 0x00634445
006343C8  D9 45 F0                  FLD float ptr [EBP + -0x10]
006343CB  8B 56 45                  MOV EDX,dword ptr [ESI + 0x45]
006343CE  D8 47 21                  FADD float ptr [EDI + 0x21]
006343D1  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006343D4  D9 45 0C                  FLD float ptr [EBP + 0xc]
006343D7  D9 FE                     FSIN
006343D9  D9 C1                     FLD ST1
006343DB  D9 FF                     FCOS
006343DD  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
006343E3  D8 C9                     FMUL ST1
006343E5  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006343E8  D9 C9                     FXCH
006343EA  D9 FE                     FSIN
006343EC  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
006343F2  D8 C9                     FMUL ST1
006343F4  D9 C9                     FXCH
006343F6  DD D8                     FSTP ST0
006343F8  D9 C0                     FLD ST0
006343FA  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006343FD  D9 45 08                  FLD float ptr [EBP + 0x8]
00634400  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634403  DE C1                     FADDP
00634405  E8 7E 9E 0F 00            CALL 0x0072e288
0063440A  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063440D  D9 45 08                  FLD float ptr [EBP + 0x8]
00634410  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634413  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00634419  DE E9                     FSUBP
0063441B  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
0063441E  E8 65 9E 0F 00            CALL 0x0072e288
00634423  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634426  D9 FF                     FCOS
00634428  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
0063442E  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00634431  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00634437  E8 4C 9E 0F 00            CALL 0x0072e288
0063443C  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00634442  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00634445:
00634445  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634448  43                        INC EBX
00634449  3B D8                     CMP EBX,EAX
0063444B  0F 8C 53 FF FF FF         JL 0x006343a4
00634451  5F                        POP EDI
00634452  5E                        POP ESI
00634453  5B                        POP EBX
00634454  8B E5                     MOV ESP,EBP
00634456  5D                        POP EBP
00634457  C2 08 00                  RET 0x8
switchD_00633e16::caseD_2:
0063445A  8B 0E                     MOV ECX,dword ptr [ESI]
0063445C  3B CA                     CMP ECX,EDX
0063445E  0F 84 C5 08 00 00         JZ 0x00634d29
00634464  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00634469  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
0063446C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0063446F  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00634472  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00634478  BB 01 00 00 00            MOV EBX,0x1
0063447D  2B C7                     SUB EAX,EDI
0063447F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00634482  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00634485  DF 6D DC                  FILD qword ptr [EBP + -0x24]
00634488  D9 C0                     FLD ST0
0063448A  D8 4E 61                  FMUL float ptr [ESI + 0x61]
0063448D  D8 46 79                  FADD float ptr [ESI + 0x79]
00634490  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00634493  D8 8E 81 00 00 00         FMUL float ptr [ESI + 0x81]
00634499  D8 56 7D                  FCOM float ptr [ESI + 0x7d]
0063449C  DF E0                     FNSTSW AX
0063449E  84 E3                     TEST BL,AH
006344A0  74 15                     JZ 0x006344b7
006344A2  D9 46 7D                  FLD float ptr [ESI + 0x7d]
006344A5  D8 E1                     FSUB ST0,ST1
006344A7  D8 1D BC D1 79 00         FCOMP float ptr [0x0079d1bc]
006344AD  DF E0                     FNSTSW AX
006344AF  84 E3                     TEST BL,AH
006344B1  DD D8                     FSTP ST0
006344B3  74 07                     JZ 0x006344bc
006344B5  EB 02                     JMP 0x006344b9
LAB_006344b7:
006344B7  DD D8                     FSTP ST0
LAB_006344b9:
006344B9  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_006344bc:
006344BC  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006344BF  3B C2                     CMP EAX,EDX
006344C1  0F 8E 8E 00 00 00         JLE 0x00634555
LAB_006344c7:
006344C7  8B 0E                     MOV ECX,dword ptr [ESI]
006344C9  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
006344CC  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
006344CF  73 0B                     JNC 0x006344dc
006344D1  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006344D4  0F AF C7                  IMUL EAX,EDI
006344D7  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006344DA  EB 02                     JMP 0x006344de
LAB_006344dc:
006344DC  33 C0                     XOR EAX,EAX
LAB_006344de:
006344DE  D9 40 21                  FLD float ptr [EAX + 0x21]
006344E1  D8 86 81 00 00 00         FADD float ptr [ESI + 0x81]
006344E7  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
006344EA  D9 58 21                  FSTP float ptr [EAX + 0x21]
006344ED  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
006344F0  8B 3E                     MOV EDI,dword ptr [ESI]
006344F2  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
006344F5  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006344F8  D1 E1                     SHL ECX,0x1
006344FA  3B C8                     CMP ECX,EAX
006344FC  73 0B                     JNC 0x00634509
006344FE  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00634501  0F AF C1                  IMUL EAX,ECX
00634504  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00634507  EB 02                     JMP 0x0063450b
LAB_00634509:
00634509  33 C0                     XOR EAX,EAX
LAB_0063450b:
0063450B  D9 40 21                  FLD float ptr [EAX + 0x21]
0063450E  D8 86 81 00 00 00         FADD float ptr [ESI + 0x81]
00634514  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634517  D9 58 21                  FSTP float ptr [EAX + 0x21]
0063451A  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
0063451D  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
00634520  8B 0E                     MOV ECX,dword ptr [ESI]
00634522  8D 7C 00 01               LEA EDI,[EAX + EAX*0x1 + 0x1]
00634526  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00634529  3B F8                     CMP EDI,EAX
0063452B  73 0B                     JNC 0x00634538
0063452D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634530  0F AF C7                  IMUL EAX,EDI
00634533  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00634536  EB 02                     JMP 0x0063453a
LAB_00634538:
00634538  33 C0                     XOR EAX,EAX
LAB_0063453a:
0063453A  D9 40 21                  FLD float ptr [EAX + 0x21]
0063453D  D8 86 81 00 00 00         FADD float ptr [ESI + 0x81]
00634543  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634546  42                        INC EDX
00634547  D9 58 21                  FSTP float ptr [EAX + 0x21]
0063454A  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063454D  3B D0                     CMP EDX,EAX
0063454F  0F 8C 72 FF FF FF         JL 0x006344c7
LAB_00634555:
00634555  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634558  33 DB                     XOR EBX,EBX
0063455A  85 C0                     TEST EAX,EAX
0063455C  0F 8E AD 00 00 00         JLE 0x0063460f
LAB_00634562:
00634562  8B 06                     MOV EAX,dword ptr [ESI]
00634564  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634567  0F 83 96 00 00 00         JNC 0x00634603
0063456D  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634570  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00634573  0F AF FB                  IMUL EDI,EBX
00634576  03 F9                     ADD EDI,ECX
00634578  85 FF                     TEST EDI,EDI
0063457A  0F 84 83 00 00 00         JZ 0x00634603
00634580  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00634584  75 7D                     JNZ 0x00634603
00634586  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634589  8B 4E 45                  MOV ECX,dword ptr [ESI + 0x45]
0063458C  D8 47 21                  FADD float ptr [EDI + 0x21]
0063458F  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00634592  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634595  D9 FE                     FSIN
00634597  D9 C1                     FLD ST1
00634599  D9 FF                     FCOS
0063459B  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
006345A1  D8 C9                     FMUL ST1
006345A3  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006345A6  D9 C9                     FXCH
006345A8  D9 FE                     FSIN
006345AA  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
006345B0  D8 C9                     FMUL ST1
006345B2  D9 C9                     FXCH
006345B4  DD D8                     FSTP ST0
006345B6  D9 C0                     FLD ST0
006345B8  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006345BB  D9 45 08                  FLD float ptr [EBP + 0x8]
006345BE  D8 4D FC                  FMUL float ptr [EBP + -0x4]
006345C1  DE C1                     FADDP
006345C3  E8 C0 9C 0F 00            CALL 0x0072e288
006345C8  D8 4D FC                  FMUL float ptr [EBP + -0x4]
006345CB  D9 45 08                  FLD float ptr [EBP + 0x8]
006345CE  D8 4D F8                  FMUL float ptr [EBP + -0x8]
006345D1  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
006345D7  DE E9                     FSUBP
006345D9  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
006345DC  E8 A7 9C 0F 00            CALL 0x0072e288
006345E1  D9 45 0C                  FLD float ptr [EBP + 0xc]
006345E4  D9 FF                     FCOS
006345E6  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
006345EC  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
006345EF  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
006345F5  E8 8E 9C 0F 00            CALL 0x0072e288
006345FA  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00634600  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00634603:
00634603  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634606  43                        INC EBX
00634607  3B D8                     CMP EBX,EAX
00634609  0F 8C 53 FF FF FF         JL 0x00634562
LAB_0063460f:
0063460F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00634612  85 C0                     TEST EAX,EAX
00634614  0F 84 0F 07 00 00         JZ 0x00634d29
0063461A  D9 45 F0                  FLD float ptr [EBP + -0x10]
0063461D  D8 1D A4 C5 79 00         FCOMP float ptr [0x0079c5a4]
00634623  C7 46 2D 03 00 00 00      MOV dword ptr [ESI + 0x2d],0x3
0063462A  DF E0                     FNSTSW AX
0063462C  F6 C4 41                  TEST AH,0x41
0063462F  75 24                     JNZ 0x00634655
00634631  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634634  D8 0D C0 D1 79 00         FMUL float ptr [0x0079d1c0]
0063463A  E8 49 9C 0F 00            CALL 0x0072e288
0063463F  D1 E0                     SHL EAX,0x1
00634641  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634644  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634647  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
0063464D  D8 6D F0                  FSUBR float ptr [EBP + -0x10]
00634650  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00634653  EB 06                     JMP 0x0063465b
LAB_00634655:
00634655  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00634658  89 56 79                  MOV dword ptr [ESI + 0x79],EDX
LAB_0063465b:
0063465B  D9 46 65                  FLD float ptr [ESI + 0x65]
0063465E  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00634664  DF E0                     FNSTSW AX
00634666  F6 C4 40                  TEST AH,0x40
00634669  0F 85 BA 06 00 00         JNZ 0x00634d29
0063466F  D9 46 6D                  FLD float ptr [ESI + 0x6d]
00634672  D8 66 69                  FSUB float ptr [ESI + 0x69]
00634675  D8 76 65                  FDIV float ptr [ESI + 0x65]
00634678  E8 0B 9C 0F 00            CALL 0x0072e288
0063467D  99                        CDQ
0063467E  33 C2                     XOR EAX,EDX
00634680  2B C2                     SUB EAX,EDX
00634682  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634685  75 07                     JNZ 0x0063468e
00634687  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_0063468e:
0063468E  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634691  D9 46 69                  FLD float ptr [ESI + 0x69]
00634694  D8 66 45                  FSUB float ptr [ESI + 0x45]
00634697  8B 3E                     MOV EDI,dword ptr [ESI]
00634699  D8 F1                     FDIV ST0,ST1
0063469B  D9 5E 51                  FSTP float ptr [ESI + 0x51]
0063469E  D9 46 6D                  FLD float ptr [ESI + 0x6d]
006346A1  D8 66 45                  FSUB float ptr [ESI + 0x45]
006346A4  D8 F1                     FDIV ST0,ST1
006346A6  D9 5E 55                  FSTP float ptr [ESI + 0x55]
006346A9  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006346AC  85 C0                     TEST EAX,EAX
006346AE  76 05                     JBE 0x006346b5
006346B0  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
006346B3  EB 02                     JMP 0x006346b7
LAB_006346b5:
006346B5  33 C0                     XOR EAX,EAX
LAB_006346b7:
006346B7  8B 5E 19                  MOV EBX,dword ptr [ESI + 0x19]
006346BA  8B 4E 39                  MOV ECX,dword ptr [ESI + 0x39]
006346BD  D9 04 99                  FLD float ptr [ECX + EBX*0x4]
006346C0  D8 60 21                  FSUB float ptr [EAX + 0x21]
006346C3  D9 E1                     FABS
006346C5  D8 96 89 00 00 00         FCOM float ptr [ESI + 0x89]
006346CB  D9 56 49                  FST float ptr [ESI + 0x49]
006346CE  DF E0                     FNSTSW AX
006346D0  F6 C4 41                  TEST AH,0x41
006346D3  75 2E                     JNZ 0x00634703
006346D5  D9 C0                     FLD ST0
006346D7  E8 AC 9B 0F 00            CALL 0x0072e288
006346DC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006346DF  DB 45 08                  FILD dword ptr [EBP + 0x8]
006346E2  D8 B6 89 00 00 00         FDIV float ptr [ESI + 0x89]
006346E8  E8 9B 9B 0F 00            CALL 0x0072e288
006346ED  99                        CDQ
006346EE  33 C2                     XOR EAX,EDX
006346F0  2B C2                     SUB EAX,EDX
006346F2  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006346F5  DB 45 08                  FILD dword ptr [EBP + 0x8]
006346F8  D8 8E 89 00 00 00         FMUL float ptr [ESI + 0x89]
006346FE  D8 E9                     FSUBR ST0,ST1
00634700  D9 5E 49                  FSTP float ptr [ESI + 0x49]
LAB_00634703:
00634703  DD D8                     FSTP ST0
00634705  D9 46 49                  FLD float ptr [ESI + 0x49]
00634708  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0063470E  DF E0                     FNSTSW AX
00634710  F6 C4 41                  TEST AH,0x41
00634713  75 0C                     JNZ 0x00634721
00634715  D9 46 49                  FLD float ptr [ESI + 0x49]
00634718  D8 A6 89 00 00 00         FSUB float ptr [ESI + 0x89]
0063471E  D9 5E 49                  FSTP float ptr [ESI + 0x49]
LAB_00634721:
00634721  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634724  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00634727  3B C8                     CMP ECX,EAX
00634729  73 0B                     JNC 0x00634736
0063472B  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0063472E  0F AF C1                  IMUL EAX,ECX
00634731  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00634734  EB 02                     JMP 0x00634738
LAB_00634736:
00634736  33 C0                     XOR EAX,EAX
LAB_00634738:
00634738  8B 4E 39                  MOV ECX,dword ptr [ESI + 0x39]
0063473B  D9 44 D9 FC               FLD float ptr [ECX + EBX*0x8 + -0x4]
0063473F  D8 60 21                  FSUB float ptr [EAX + 0x21]
00634742  D9 E1                     FABS
00634744  D8 96 89 00 00 00         FCOM float ptr [ESI + 0x89]
0063474A  D9 56 4D                  FST float ptr [ESI + 0x4d]
0063474D  DF E0                     FNSTSW AX
0063474F  F6 C4 41                  TEST AH,0x41
00634752  75 2E                     JNZ 0x00634782
00634754  D9 C0                     FLD ST0
00634756  E8 2D 9B 0F 00            CALL 0x0072e288
0063475B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0063475E  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634761  D8 B6 89 00 00 00         FDIV float ptr [ESI + 0x89]
00634767  E8 1C 9B 0F 00            CALL 0x0072e288
0063476C  99                        CDQ
0063476D  33 C2                     XOR EAX,EDX
0063476F  2B C2                     SUB EAX,EDX
00634771  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634774  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634777  D8 8E 89 00 00 00         FMUL float ptr [ESI + 0x89]
0063477D  D8 E9                     FSUBR ST0,ST1
0063477F  D9 5E 4D                  FSTP float ptr [ESI + 0x4d]
LAB_00634782:
00634782  DD D8                     FSTP ST0
00634784  D9 46 49                  FLD float ptr [ESI + 0x49]
00634787  D8 F1                     FDIV ST0,ST1
00634789  5F                        POP EDI
0063478A  D9 5E 59                  FSTP float ptr [ESI + 0x59]
0063478D  D9 46 4D                  FLD float ptr [ESI + 0x4d]
00634790  D8 F1                     FDIV ST0,ST1
00634792  D9 5E 5D                  FSTP float ptr [ESI + 0x5d]
00634795  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063479A  DD D8                     FSTP ST0
0063479C  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006347A2  89 4E 05                  MOV dword ptr [ESI + 0x5],ECX
006347A5  5E                        POP ESI
006347A6  5B                        POP EBX
006347A7  8B E5                     MOV ESP,EBP
006347A9  5D                        POP EBP
006347AA  C2 08 00                  RET 0x8
switchD_00633e16::caseD_3:
006347AD  8B 0E                     MOV ECX,dword ptr [ESI]
006347AF  3B CA                     CMP ECX,EDX
006347B1  0F 84 72 05 00 00         JZ 0x00634d29
006347B7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006347BC  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
006347BF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006347C2  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006347C5  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
006347CB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006347CE  2B C7                     SUB EAX,EDI
006347D0  BB 01 00 00 00            MOV EBX,0x1
006347D5  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006347D8  DF 6D DC                  FILD qword ptr [EBP + -0x24]
006347DB  D9 C0                     FLD ST0
006347DD  D8 4E 61                  FMUL float ptr [ESI + 0x61]
006347E0  D8 46 79                  FADD float ptr [ESI + 0x79]
006347E3  D9 5D F0                  FSTP float ptr [EBP + -0x10]
006347E6  D9 C0                     FLD ST0
006347E8  D8 4E 51                  FMUL float ptr [ESI + 0x51]
006347EB  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
006347EE  D8 4E 55                  FMUL float ptr [ESI + 0x55]
006347F1  D9 5D 08                  FSTP float ptr [EBP + 0x8]
006347F4  D9 45 0C                  FLD float ptr [EBP + 0xc]
006347F7  D8 46 45                  FADD float ptr [ESI + 0x45]
006347FA  D8 5E 69                  FCOMP float ptr [ESI + 0x69]
006347FD  DF E0                     FNSTSW AX
006347FF  F6 C4 41                  TEST AH,0x41
00634802  75 15                     JNZ 0x00634819
00634804  D9 46 45                  FLD float ptr [ESI + 0x45]
00634807  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0063480A  D8 46 69                  FADD float ptr [ESI + 0x69]
0063480D  DC 1D B0 D1 79 00         FCOMP double ptr [0x0079d1b0]
00634813  DF E0                     FNSTSW AX
00634815  84 E3                     TEST BL,AH
00634817  74 03                     JZ 0x0063481c
LAB_00634819:
00634819  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
LAB_0063481c:
0063481C  39 56 1D                  CMP dword ptr [ESI + 0x1d],EDX
0063481F  0F 8E 2F 01 00 00         JLE 0x00634954
LAB_00634825:
00634825  8B 0E                     MOV ECX,dword ptr [ESI]
00634827  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0063482A  73 0D                     JNC 0x00634839
0063482C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063482F  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00634832  0F AF C2                  IMUL EAX,EDX
00634835  03 C7                     ADD EAX,EDI
00634837  EB 02                     JMP 0x0063483b
LAB_00634839:
00634839  33 C0                     XOR EAX,EAX
LAB_0063483b:
0063483B  D9 40 21                  FLD float ptr [EAX + 0x21]
0063483E  D8 46 59                  FADD float ptr [ESI + 0x59]
00634841  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634844  D9 40 25                  FLD float ptr [EAX + 0x25]
00634847  D8 46 51                  FADD float ptr [ESI + 0x51]
0063484A  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
0063484D  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634850  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634853  8B 3E                     MOV EDI,dword ptr [ESI]
00634855  03 CA                     ADD ECX,EDX
00634857  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0063485A  D1 E1                     SHL ECX,0x1
0063485C  3B C8                     CMP ECX,EAX
0063485E  73 0B                     JNC 0x0063486b
00634860  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00634863  0F AF C1                  IMUL EAX,ECX
00634866  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00634869  EB 02                     JMP 0x0063486d
LAB_0063486b:
0063486B  33 C0                     XOR EAX,EAX
LAB_0063486d:
0063486D  D9 40 21                  FLD float ptr [EAX + 0x21]
00634870  D8 46 59                  FADD float ptr [ESI + 0x59]
00634873  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634876  D9 40 25                  FLD float ptr [EAX + 0x25]
00634879  D8 46 51                  FADD float ptr [ESI + 0x51]
0063487C  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
0063487F  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634882  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00634885  8B 0E                     MOV ECX,dword ptr [ESI]
00634887  03 C2                     ADD EAX,EDX
00634889  8D 7C 00 01               LEA EDI,[EAX + EAX*0x1 + 0x1]
0063488D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00634890  3B F8                     CMP EDI,EAX
00634892  73 0B                     JNC 0x0063489f
00634894  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634897  0F AF C7                  IMUL EAX,EDI
0063489A  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0063489D  EB 02                     JMP 0x006348a1
LAB_0063489f:
0063489F  33 C0                     XOR EAX,EAX
LAB_006348a1:
006348A1  D9 40 21                  FLD float ptr [EAX + 0x21]
006348A4  D8 46 59                  FADD float ptr [ESI + 0x59]
006348A7  D9 58 21                  FSTP float ptr [EAX + 0x21]
006348AA  D9 40 25                  FLD float ptr [EAX + 0x25]
006348AD  D8 46 51                  FADD float ptr [ESI + 0x51]
006348B0  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
006348B3  D9 58 25                  FSTP float ptr [EAX + 0x25]
006348B6  8B 3E                     MOV EDI,dword ptr [ESI]
006348B8  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
006348BB  03 CA                     ADD ECX,EDX
006348BD  3B 4F 0C                  CMP ECX,dword ptr [EDI + 0xc]
006348C0  73 0B                     JNC 0x006348cd
006348C2  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006348C5  0F AF C1                  IMUL EAX,ECX
006348C8  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
006348CB  EB 02                     JMP 0x006348cf
LAB_006348cd:
006348CD  33 C0                     XOR EAX,EAX
LAB_006348cf:
006348CF  D9 40 21                  FLD float ptr [EAX + 0x21]
006348D2  D8 46 5D                  FADD float ptr [ESI + 0x5d]
006348D5  D9 58 21                  FSTP float ptr [EAX + 0x21]
006348D8  D9 46 55                  FLD float ptr [ESI + 0x55]
006348DB  D8 40 25                  FADD float ptr [EAX + 0x25]
006348DE  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
006348E1  D9 58 25                  FSTP float ptr [EAX + 0x25]
006348E4  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
006348E7  8B 3E                     MOV EDI,dword ptr [ESI]
006348E9  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006348EC  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006348EF  D1 E1                     SHL ECX,0x1
006348F1  3B C8                     CMP ECX,EAX
006348F3  73 0B                     JNC 0x00634900
006348F5  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006348F8  0F AF C1                  IMUL EAX,ECX
006348FB  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
006348FE  EB 02                     JMP 0x00634902
LAB_00634900:
00634900  33 C0                     XOR EAX,EAX
LAB_00634902:
00634902  D9 40 21                  FLD float ptr [EAX + 0x21]
00634905  D8 46 5D                  FADD float ptr [ESI + 0x5d]
00634908  D9 58 21                  FSTP float ptr [EAX + 0x21]
0063490B  D9 46 55                  FLD float ptr [ESI + 0x55]
0063490E  D8 40 25                  FADD float ptr [EAX + 0x25]
00634911  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634914  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634917  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
0063491A  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
0063491D  8D 7C 09 01               LEA EDI,[ECX + ECX*0x1 + 0x1]
00634921  8B 0E                     MOV ECX,dword ptr [ESI]
00634923  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00634926  73 0B                     JNC 0x00634933
00634928  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063492B  0F AF C7                  IMUL EAX,EDI
0063492E  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00634931  EB 02                     JMP 0x00634935
LAB_00634933:
00634933  33 C0                     XOR EAX,EAX
LAB_00634935:
00634935  D9 40 21                  FLD float ptr [EAX + 0x21]
00634938  D8 46 5D                  FADD float ptr [ESI + 0x5d]
0063493B  42                        INC EDX
0063493C  D9 58 21                  FSTP float ptr [EAX + 0x21]
0063493F  D9 46 55                  FLD float ptr [ESI + 0x55]
00634942  D8 40 25                  FADD float ptr [EAX + 0x25]
00634945  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634948  D9 58 25                  FSTP float ptr [EAX + 0x25]
0063494B  3B 56 1D                  CMP EDX,dword ptr [ESI + 0x1d]
0063494E  0F 8C D1 FE FF FF         JL 0x00634825
LAB_00634954:
00634954  8B 4E 35                  MOV ECX,dword ptr [ESI + 0x35]
00634957  85 C9                     TEST ECX,ECX
00634959  0F 8E 95 00 00 00         JLE 0x006349f4
0063495F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00634962  85 C0                     TEST EAX,EAX
00634964  0F 85 8A 00 00 00         JNZ 0x006349f4
0063496A  8B 7E 19                  MOV EDI,dword ptr [ESI + 0x19]
0063496D  8B 5E 39                  MOV EBX,dword ptr [ESI + 0x39]
00634970  8B D7                     MOV EDX,EDI
00634972  2B D1                     SUB EDX,ECX
00634974  D9 04 93                  FLD float ptr [EBX + EDX*0x4]
00634977  D9 45 08                  FLD float ptr [EBP + 0x8]
0063497A  D8 46 45                  FADD float ptr [ESI + 0x45]
0063497D  D8 D9                     FCOMP
0063497F  DF E0                     FNSTSW AX
00634981  F6 C4 01                  TEST AH,0x1
00634984  75 6C                     JNZ 0x006349f2
00634986  D8 66 45                  FSUB float ptr [ESI + 0x45]
00634989  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
0063498C  33 FF                     XOR EDI,EDI
0063498E  2B C1                     SUB EAX,ECX
00634990  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634993  3B CF                     CMP ECX,EDI
00634995  D9 5D E8                  FSTP float ptr [EBP + -0x18]
00634998  D9 04 83                  FLD float ptr [EBX + EAX*0x4]
0063499B  D9 5D E0                  FSTP float ptr [EBP + -0x20]
0063499E  7E 4D                     JLE 0x006349ed
006349A0  8D 5A 05                  LEA EBX,[EDX + 0x5]
006349A3  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006349a6:
006349A6  8B C3                     MOV EAX,EBX
006349A8  8B 16                     MOV EDX,dword ptr [ESI]
006349AA  0F AF C1                  IMUL EAX,ECX
006349AD  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
006349B0  03 C7                     ADD EAX,EDI
006349B2  3B C1                     CMP EAX,ECX
006349B4  73 26                     JNC 0x006349dc
006349B6  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006349B9  0F AF C8                  IMUL ECX,EAX
006349BC  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
006349BF  85 C9                     TEST ECX,ECX
006349C1  74 19                     JZ 0x006349dc
006349C3  DB 45 08                  FILD dword ptr [EBP + 0x8]
006349C6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006349C9  89 51 25                  MOV dword ptr [ECX + 0x25],EDX
006349CC  D8 4E 75                  FMUL float ptr [ESI + 0x75]
006349CF  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
006349D6  D8 45 E0                  FADD float ptr [EBP + -0x20]
006349D9  D9 59 21                  FSTP float ptr [ECX + 0x21]
LAB_006349dc:
006349DC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006349DF  47                        INC EDI
006349E0  83 C1 03                  ADD ECX,0x3
006349E3  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006349E6  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
006349E9  3B F9                     CMP EDI,ECX
006349EB  7C B9                     JL 0x006349a6
LAB_006349ed:
006349ED  FF 4E 35                  DEC dword ptr [ESI + 0x35]
006349F0  EB 02                     JMP 0x006349f4
LAB_006349f2:
006349F2  DD D8                     FSTP ST0
LAB_006349f4:
006349F4  8B 56 31                  MOV EDX,dword ptr [ESI + 0x31]
006349F7  85 D2                     TEST EDX,EDX
006349F9  0F 8E 8F 00 00 00         JLE 0x00634a8e
006349FF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00634A02  85 C0                     TEST EAX,EAX
00634A04  0F 85 84 00 00 00         JNZ 0x00634a8e
00634A0A  8B 4E 39                  MOV ECX,dword ptr [ESI + 0x39]
00634A0D  4A                        DEC EDX
00634A0E  D9 04 91                  FLD float ptr [ECX + EDX*0x4]
00634A11  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634A14  D8 46 45                  FADD float ptr [ESI + 0x45]
00634A17  D8 D9                     FCOMP
00634A19  DF E0                     FNSTSW AX
00634A1B  F6 C4 41                  TEST AH,0x41
00634A1E  74 6C                     JZ 0x00634a8c
00634A20  D8 66 45                  FSUB float ptr [ESI + 0x45]
00634A23  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
00634A26  33 FF                     XOR EDI,EDI
00634A28  03 C2                     ADD EAX,EDX
00634A2A  D9 5D E8                  FSTP float ptr [EBP + -0x18]
00634A2D  D9 04 81                  FLD float ptr [ECX + EAX*0x4]
00634A30  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634A33  D9 5D E0                  FSTP float ptr [EBP + -0x20]
00634A36  85 C9                     TEST ECX,ECX
00634A38  7E 4D                     JLE 0x00634a87
00634A3A  8D 5A 05                  LEA EBX,[EDX + 0x5]
00634A3D  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_00634a40:
00634A40  8B C3                     MOV EAX,EBX
00634A42  8B 16                     MOV EDX,dword ptr [ESI]
00634A44  0F AF C1                  IMUL EAX,ECX
00634A47  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00634A4A  03 C7                     ADD EAX,EDI
00634A4C  3B C1                     CMP EAX,ECX
00634A4E  73 26                     JNC 0x00634a76
00634A50  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00634A53  0F AF C8                  IMUL ECX,EAX
00634A56  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
00634A59  85 C9                     TEST ECX,ECX
00634A5B  74 19                     JZ 0x00634a76
00634A5D  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634A60  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00634A63  89 51 25                  MOV dword ptr [ECX + 0x25],EDX
00634A66  D8 4E 75                  FMUL float ptr [ESI + 0x75]
00634A69  C7 41 08 01 00 00 00      MOV dword ptr [ECX + 0x8],0x1
00634A70  D8 45 E0                  FADD float ptr [EBP + -0x20]
00634A73  D9 59 21                  FSTP float ptr [ECX + 0x21]
LAB_00634a76:
00634A76  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00634A79  47                        INC EDI
00634A7A  83 C1 03                  ADD ECX,0x3
00634A7D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00634A80  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634A83  3B F9                     CMP EDI,ECX
00634A85  7C B9                     JL 0x00634a40
LAB_00634a87:
00634A87  FF 4E 31                  DEC dword ptr [ESI + 0x31]
00634A8A  EB 02                     JMP 0x00634a8e
LAB_00634a8c:
00634A8C  DD D8                     FSTP ST0
LAB_00634a8e:
00634A8E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634A91  33 DB                     XOR EBX,EBX
00634A93  85 C0                     TEST EAX,EAX
00634A95  0F 8E AD 00 00 00         JLE 0x00634b48
LAB_00634a9b:
00634A9B  8B 06                     MOV EAX,dword ptr [ESI]
00634A9D  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634AA0  0F 83 96 00 00 00         JNC 0x00634b3c
00634AA6  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634AA9  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00634AAC  0F AF FB                  IMUL EDI,EBX
00634AAF  03 F9                     ADD EDI,ECX
00634AB1  85 FF                     TEST EDI,EDI
00634AB3  0F 84 83 00 00 00         JZ 0x00634b3c
00634AB9  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00634ABD  75 7D                     JNZ 0x00634b3c
00634ABF  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634AC2  D8 47 21                  FADD float ptr [EDI + 0x21]
00634AC5  D9 47 25                  FLD float ptr [EDI + 0x25]
00634AC8  D8 46 45                  FADD float ptr [ESI + 0x45]
00634ACB  D9 55 0C                  FST float ptr [EBP + 0xc]
00634ACE  D9 FE                     FSIN
00634AD0  D9 C1                     FLD ST1
00634AD2  D9 FF                     FCOS
00634AD4  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
00634ADA  D8 C9                     FMUL ST1
00634ADC  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634ADF  D9 C9                     FXCH
00634AE1  D9 FE                     FSIN
00634AE3  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00634AE9  D8 C9                     FMUL ST1
00634AEB  D9 C9                     FXCH
00634AED  DD D8                     FSTP ST0
00634AEF  D9 C0                     FLD ST0
00634AF1  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634AF4  D9 45 08                  FLD float ptr [EBP + 0x8]
00634AF7  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634AFA  DE C1                     FADDP
00634AFC  E8 87 97 0F 00            CALL 0x0072e288
00634B01  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634B04  D9 45 08                  FLD float ptr [EBP + 0x8]
00634B07  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634B0A  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00634B10  DE E9                     FSUBP
00634B12  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00634B15  E8 6E 97 0F 00            CALL 0x0072e288
00634B1A  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634B1D  D9 FF                     FCOS
00634B1F  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
00634B25  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00634B28  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00634B2E  E8 55 97 0F 00            CALL 0x0072e288
00634B33  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00634B39  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00634b3c:
00634B3C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634B3F  43                        INC EBX
00634B40  3B D8                     CMP EBX,EAX
00634B42  0F 8C 53 FF FF FF         JL 0x00634a9b
LAB_00634b48:
00634B48  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00634B4B  85 C0                     TEST EAX,EAX
00634B4D  0F 84 D6 01 00 00         JZ 0x00634d29
00634B53  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634B56  D8 1D A4 C5 79 00         FCOMP float ptr [0x0079c5a4]
00634B5C  DF E0                     FNSTSW AX
00634B5E  F6 C4 41                  TEST AH,0x41
00634B61  75 24                     JNZ 0x00634b87
00634B63  D9 45 F0                  FLD float ptr [EBP + -0x10]
00634B66  D8 0D C0 D1 79 00         FMUL float ptr [0x0079d1c0]
00634B6C  E8 17 97 0F 00            CALL 0x0072e288
00634B71  D1 E0                     SHL EAX,0x1
00634B73  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634B76  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634B79  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00634B7F  D8 6D F0                  FSUBR float ptr [EBP + -0x10]
00634B82  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00634B85  EB 06                     JMP 0x00634b8d
LAB_00634b87:
00634B87  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00634B8A  89 46 79                  MOV dword ptr [ESI + 0x79],EAX
LAB_00634b8d:
00634B8D  C7 46 2D 04 00 00 00      MOV dword ptr [ESI + 0x2d],0x4
00634B94  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00634B9A  5F                        POP EDI
00634B9B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00634BA1  C7 46 09 14 00 00 00      MOV dword ptr [ESI + 0x9],0x14
00634BA8  89 56 05                  MOV dword ptr [ESI + 0x5],EDX
00634BAB  5E                        POP ESI
00634BAC  5B                        POP EBX
00634BAD  8B E5                     MOV ESP,EBP
00634BAF  5D                        POP EBP
00634BB0  C2 08 00                  RET 0x8
switchD_00633e16::caseD_4:
00634BB3  8B 06                     MOV EAX,dword ptr [ESI]
00634BB5  3B C2                     CMP EAX,EDX
00634BB7  0F 84 6C 01 00 00         JZ 0x00634d29
00634BBD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00634BC3  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
00634BC6  33 DB                     XOR EBX,EBX
00634BC8  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
00634BCE  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00634BD1  2B CA                     SUB ECX,EDX
00634BD3  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00634BD6  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00634BD9  3B D3                     CMP EDX,EBX
00634BDB  DF 6D DC                  FILD qword ptr [EBP + -0x24]
00634BDE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00634BE1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00634BE4  D8 4E 61                  FMUL float ptr [ESI + 0x61]
00634BE7  D8 46 79                  FADD float ptr [ESI + 0x79]
00634BEA  0F 8E B3 00 00 00         JLE 0x00634ca3
LAB_00634bf0:
00634BF0  8B 06                     MOV EAX,dword ptr [ESI]
00634BF2  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634BF5  0F 83 9F 00 00 00         JNC 0x00634c9a
00634BFB  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634BFE  0F AF FB                  IMUL EDI,EBX
00634C01  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
00634C04  85 FF                     TEST EDI,EDI
00634C06  0F 84 8E 00 00 00         JZ 0x00634c9a
00634C0C  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00634C10  0F 85 84 00 00 00         JNZ 0x00634c9a
00634C16  D9 C0                     FLD ST0
00634C18  D8 47 21                  FADD float ptr [EDI + 0x21]
00634C1B  D9 47 25                  FLD float ptr [EDI + 0x25]
00634C1E  D8 46 45                  FADD float ptr [ESI + 0x45]
00634C21  D9 55 0C                  FST float ptr [EBP + 0xc]
00634C24  D9 FE                     FSIN
00634C26  D9 C1                     FLD ST1
00634C28  D9 FF                     FCOS
00634C2A  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
00634C30  D8 C9                     FMUL ST1
00634C32  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634C35  D9 C9                     FXCH
00634C37  D9 FE                     FSIN
00634C39  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00634C3F  D8 C9                     FMUL ST1
00634C41  D9 C9                     FXCH
00634C43  DD D8                     FSTP ST0
00634C45  D9 C0                     FLD ST0
00634C47  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634C4A  D9 45 08                  FLD float ptr [EBP + 0x8]
00634C4D  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634C50  DE C1                     FADDP
00634C52  E8 31 96 0F 00            CALL 0x0072e288
00634C57  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634C5A  D9 45 08                  FLD float ptr [EBP + 0x8]
00634C5D  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634C60  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00634C66  DE E9                     FSUBP
00634C68  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00634C6B  E8 18 96 0F 00            CALL 0x0072e288
00634C70  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634C73  D9 FF                     FCOS
00634C75  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
00634C7B  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00634C7E  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00634C84  E8 FF 95 0F 00            CALL 0x0072e288
00634C89  8B 8E 95 00 00 00         MOV ECX,dword ptr [ESI + 0x95]
00634C8F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00634C92  03 C1                     ADD EAX,ECX
00634C94  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00634C97  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00634c9a:
00634C9A  43                        INC EBX
00634C9B  3B DA                     CMP EBX,EDX
00634C9D  0F 8C 4D FF FF FF         JL 0x00634bf0
LAB_00634ca3:
00634CA3  3B 4E 09                  CMP ECX,dword ptr [ESI + 0x9]
00634CA6  72 7F                     JC 0x00634d27
00634CA8  D9 46 6D                  FLD float ptr [ESI + 0x6d]
00634CAB  D8 66 69                  FSUB float ptr [ESI + 0x69]
00634CAE  D9 C0                     FLD ST0
00634CB0  D8 B6 85 00 00 00         FDIV float ptr [ESI + 0x85]
00634CB6  E8 CD 95 0F 00            CALL 0x0072e288
00634CBB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634CBE  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
00634CC5  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634CC8  C7 46 2D 05 00 00 00      MOV dword ptr [ESI + 0x2d],0x5
00634CCF  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634CD2  D8 75 08                  FDIV float ptr [EBP + 0x8]
00634CD5  D9 E0                     FCHS
00634CD7  D9 5E 55                  FSTP float ptr [ESI + 0x55]
00634CDA  D9 86 89 00 00 00         FLD float ptr [ESI + 0x89]
00634CE0  D8 75 08                  FDIV float ptr [EBP + 0x8]
00634CE3  D9 E0                     FCHS
00634CE5  D9 5E 5D                  FSTP float ptr [ESI + 0x5d]
00634CE8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00634CEE  D8 15 A4 C5 79 00         FCOM float ptr [0x0079c5a4]
00634CF4  8B 8A E4 00 00 00         MOV ECX,dword ptr [EDX + 0xe4]
00634CFA  89 46 09                  MOV dword ptr [ESI + 0x9],EAX
00634CFD  89 4E 05                  MOV dword ptr [ESI + 0x5],ECX
00634D00  DF E0                     FNSTSW AX
00634D02  F6 C4 41                  TEST AH,0x41
00634D05  75 2B                     JNZ 0x00634d32
00634D07  D9 C0                     FLD ST0
00634D09  D8 0D C0 D1 79 00         FMUL float ptr [0x0079d1c0]
00634D0F  E8 74 95 0F 00            CALL 0x0072e288
00634D14  D1 E0                     SHL EAX,0x1
00634D16  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634D19  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634D1C  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00634D22  D8 E9                     FSUBR ST0,ST1
00634D24  D9 5E 79                  FSTP float ptr [ESI + 0x79]
LAB_00634d27:
00634D27  DD D8                     FSTP ST0
switchD_00633787::default:
00634D29  5F                        POP EDI
00634D2A  5E                        POP ESI
00634D2B  5B                        POP EBX
00634D2C  8B E5                     MOV ESP,EBP
00634D2E  5D                        POP EBP
00634D2F  C2 08 00                  RET 0x8
LAB_00634d32:
00634D32  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00634D35  5F                        POP EDI
00634D36  5E                        POP ESI
00634D37  5B                        POP EBX
00634D38  8B E5                     MOV ESP,EBP
00634D3A  5D                        POP EBP
00634D3B  C2 08 00                  RET 0x8
switchD_00633e16::caseD_5:
00634D3E  8B 0E                     MOV ECX,dword ptr [ESI]
00634D40  3B CA                     CMP ECX,EDX
00634D42  74 E5                     JZ 0x00634d29
00634D44  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00634D49  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
00634D4C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00634D4F  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00634D52  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00634D58  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00634D5B  2B C7                     SUB EAX,EDI
00634D5D  BB 01 00 00 00            MOV EBX,0x1
00634D62  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00634D65  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00634D68  DF 6D DC                  FILD qword ptr [EBP + -0x24]
00634D6B  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00634D6E  3B C2                     CMP EAX,EDX
00634D70  D9 C0                     FLD ST0
00634D72  D8 4E 55                  FMUL float ptr [ESI + 0x55]
00634D75  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634D78  D8 4E 61                  FMUL float ptr [ESI + 0x61]
00634D7B  D8 6E 79                  FSUBR float ptr [ESI + 0x79]
00634D7E  0F 8E A0 00 00 00         JLE 0x00634e24
LAB_00634d84:
00634D84  8B 0E                     MOV ECX,dword ptr [ESI]
00634D86  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
00634D89  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
00634D8C  73 0B                     JNC 0x00634d99
00634D8E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634D91  0F AF C7                  IMUL EAX,EDI
00634D94  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00634D97  EB 02                     JMP 0x00634d9b
LAB_00634d99:
00634D99  33 C0                     XOR EAX,EAX
LAB_00634d9b:
00634D9B  D9 40 21                  FLD float ptr [EAX + 0x21]
00634D9E  D8 46 5D                  FADD float ptr [ESI + 0x5d]
00634DA1  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634DA4  D9 46 55                  FLD float ptr [ESI + 0x55]
00634DA7  D8 40 25                  FADD float ptr [EAX + 0x25]
00634DAA  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634DAD  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634DB0  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00634DB3  8B 3E                     MOV EDI,dword ptr [ESI]
00634DB5  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
00634DB8  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00634DBB  D1 E1                     SHL ECX,0x1
00634DBD  3B C8                     CMP ECX,EAX
00634DBF  73 0B                     JNC 0x00634dcc
00634DC1  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00634DC4  0F AF C1                  IMUL EAX,ECX
00634DC7  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
00634DCA  EB 02                     JMP 0x00634dce
LAB_00634dcc:
00634DCC  33 C0                     XOR EAX,EAX
LAB_00634dce:
00634DCE  D9 40 21                  FLD float ptr [EAX + 0x21]
00634DD1  D8 46 5D                  FADD float ptr [ESI + 0x5d]
00634DD4  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634DD7  D9 46 55                  FLD float ptr [ESI + 0x55]
00634DDA  D8 40 25                  FADD float ptr [EAX + 0x25]
00634DDD  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634DE0  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634DE3  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634DE6  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
00634DE9  8B 0E                     MOV ECX,dword ptr [ESI]
00634DEB  8D 7C 00 01               LEA EDI,[EAX + EAX*0x1 + 0x1]
00634DEF  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00634DF2  3B F8                     CMP EDI,EAX
00634DF4  73 0B                     JNC 0x00634e01
00634DF6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00634DF9  0F AF C7                  IMUL EAX,EDI
00634DFC  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00634DFF  EB 02                     JMP 0x00634e03
LAB_00634e01:
00634E01  33 C0                     XOR EAX,EAX
LAB_00634e03:
00634E03  D9 40 21                  FLD float ptr [EAX + 0x21]
00634E06  D8 46 5D                  FADD float ptr [ESI + 0x5d]
00634E09  42                        INC EDX
00634E0A  D9 58 21                  FSTP float ptr [EAX + 0x21]
00634E0D  D9 46 55                  FLD float ptr [ESI + 0x55]
00634E10  D8 40 25                  FADD float ptr [EAX + 0x25]
00634E13  89 58 08                  MOV dword ptr [EAX + 0x8],EBX
00634E16  D9 58 25                  FSTP float ptr [EAX + 0x25]
00634E19  8B 46 1D                  MOV EAX,dword ptr [ESI + 0x1d]
00634E1C  3B D0                     CMP EDX,EAX
00634E1E  0F 8C 60 FF FF FF         JL 0x00634d84
LAB_00634e24:
00634E24  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
00634E27  8B 4E 35                  MOV ECX,dword ptr [ESI + 0x35]
00634E2A  8D 50 FE                  LEA EDX,[EAX + -0x2]
00634E2D  3B CA                     CMP ECX,EDX
00634E2F  7D 57                     JGE 0x00634e88
00634E31  D9 45 08                  FLD float ptr [EBP + 0x8]
00634E34  D8 46 6D                  FADD float ptr [ESI + 0x6d]
00634E37  2B C1                     SUB EAX,ECX
00634E39  83 E8 02                  SUB EAX,0x2
00634E3C  8B D0                     MOV EDX,EAX
00634E3E  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
00634E41  D9 04 90                  FLD float ptr [EAX + EDX*0x4]
00634E44  DE D9                     FCOMPP
00634E46  DF E0                     FNSTSW AX
00634E48  F6 C4 01                  TEST AH,0x1
00634E4B  75 3B                     JNZ 0x00634e88
00634E4D  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634E50  33 FF                     XOR EDI,EDI
00634E52  85 C9                     TEST ECX,ECX
00634E54  7E 2F                     JLE 0x00634e85
00634E56  8D 5A 05                  LEA EBX,[EDX + 0x5]
LAB_00634e59:
00634E59  8B C3                     MOV EAX,EBX
00634E5B  8B 16                     MOV EDX,dword ptr [ESI]
00634E5D  0F AF C1                  IMUL EAX,ECX
00634E60  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00634E63  03 C7                     ADD EAX,EDI
00634E65  3B C1                     CMP EAX,ECX
00634E67  73 0B                     JNC 0x00634e74
00634E69  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
00634E6C  0F AF C8                  IMUL ECX,EAX
00634E6F  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
00634E72  EB 02                     JMP 0x00634e76
LAB_00634e74:
00634E74  33 C9                     XOR ECX,ECX
LAB_00634e76:
00634E76  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
00634E7D  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00634E80  47                        INC EDI
00634E81  3B F9                     CMP EDI,ECX
00634E83  7C D4                     JL 0x00634e59
LAB_00634e85:
00634E85  FF 46 35                  INC dword ptr [ESI + 0x35]
LAB_00634e88:
00634E88  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634E8B  33 DB                     XOR EBX,EBX
00634E8D  85 C0                     TEST EAX,EAX
00634E8F  0F 8E AC 00 00 00         JLE 0x00634f41
LAB_00634e95:
00634E95  8B 06                     MOV EAX,dword ptr [ESI]
00634E97  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634E9A  0F 83 95 00 00 00         JNC 0x00634f35
00634EA0  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634EA3  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00634EA6  0F AF FB                  IMUL EDI,EBX
00634EA9  03 F9                     ADD EDI,ECX
00634EAB  85 FF                     TEST EDI,EDI
00634EAD  0F 84 82 00 00 00         JZ 0x00634f35
00634EB3  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00634EB7  75 7C                     JNZ 0x00634f35
00634EB9  D9 C0                     FLD ST0
00634EBB  D8 47 21                  FADD float ptr [EDI + 0x21]
00634EBE  D9 47 25                  FLD float ptr [EDI + 0x25]
00634EC1  D8 46 45                  FADD float ptr [ESI + 0x45]
00634EC4  D9 55 0C                  FST float ptr [EBP + 0xc]
00634EC7  D9 FE                     FSIN
00634EC9  D9 C1                     FLD ST1
00634ECB  D9 FF                     FCOS
00634ECD  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
00634ED3  D8 C9                     FMUL ST1
00634ED5  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00634ED8  D9 C9                     FXCH
00634EDA  D9 FE                     FSIN
00634EDC  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00634EE2  D8 C9                     FMUL ST1
00634EE4  D9 C9                     FXCH
00634EE6  DD D8                     FSTP ST0
00634EE8  D9 C0                     FLD ST0
00634EEA  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634EED  D9 45 08                  FLD float ptr [EBP + 0x8]
00634EF0  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634EF3  DE C1                     FADDP
00634EF5  E8 8E 93 0F 00            CALL 0x0072e288
00634EFA  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00634EFD  D9 45 08                  FLD float ptr [EBP + 0x8]
00634F00  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00634F03  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00634F09  DE E9                     FSUBP
00634F0B  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00634F0E  E8 75 93 0F 00            CALL 0x0072e288
00634F13  D9 45 0C                  FLD float ptr [EBP + 0xc]
00634F16  D9 FF                     FCOS
00634F18  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
00634F1E  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00634F21  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00634F27  E8 5C 93 0F 00            CALL 0x0072e288
00634F2C  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00634F32  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00634f35:
00634F35  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00634F38  43                        INC EBX
00634F39  3B D8                     CMP EBX,EAX
00634F3B  0F 8C 54 FF FF FF         JL 0x00634e95
LAB_00634f41:
00634F41  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00634F44  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00634F47  3B C8                     CMP ECX,EAX
00634F49  0F 82 D8 FD FF FF         JC 0x00634d27
00634F4F  D8 15 A4 C5 79 00         FCOM float ptr [0x0079c5a4]
00634F55  DF E0                     FNSTSW AX
00634F57  F6 C4 41                  TEST AH,0x41
00634F5A  75 24                     JNZ 0x00634f80
00634F5C  D9 C0                     FLD ST0
00634F5E  D8 0D C0 D1 79 00         FMUL float ptr [0x0079d1c0]
00634F64  E8 1F 93 0F 00            CALL 0x0072e288
00634F69  D1 E0                     SHL EAX,0x1
00634F6B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00634F6E  DB 45 08                  FILD dword ptr [EBP + 0x8]
00634F71  D8 0D A4 D1 79 00         FMUL float ptr [0x0079d1a4]
00634F77  D8 E9                     FSUBR ST0,ST1
00634F79  D9 5E 79                  FSTP float ptr [ESI + 0x79]
00634F7C  DD D8                     FSTP ST0
00634F7E  EB 03                     JMP 0x00634f83
LAB_00634f80:
00634F80  D9 5E 79                  FSTP float ptr [ESI + 0x79]
LAB_00634f83:
00634F83  C7 46 2D 06 00 00 00      MOV dword ptr [ESI + 0x2d],0x6
00634F8A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00634F90  5F                        POP EDI
00634F91  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00634F97  C7 46 09 4F 01 00 00      MOV dword ptr [ESI + 0x9],0x14f
00634F9E  89 46 05                  MOV dword ptr [ESI + 0x5],EAX
00634FA1  5E                        POP ESI
00634FA2  5B                        POP EBX
00634FA3  8B E5                     MOV ESP,EBP
00634FA5  5D                        POP EBP
00634FA6  C2 08 00                  RET 0x8
switchD_00633e16::caseD_6:
00634FA9  8B 06                     MOV EAX,dword ptr [ESI]
00634FAB  3B C2                     CMP EAX,EDX
00634FAD  0F 84 76 FD FF FF         JZ 0x00634d29
00634FB3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00634FB9  8B 56 05                  MOV EDX,dword ptr [ESI + 0x5]
00634FBC  33 DB                     XOR EBX,EBX
00634FBE  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
00634FC4  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00634FC7  2B CA                     SUB ECX,EDX
00634FC9  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00634FCC  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00634FCF  3B D3                     CMP EDX,EBX
00634FD1  DF 6D DC                  FILD qword ptr [EBP + -0x24]
00634FD4  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00634FD7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00634FDA  D8 4E 61                  FMUL float ptr [ESI + 0x61]
00634FDD  D8 46 79                  FADD float ptr [ESI + 0x79]
00634FE0  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00634FE3  0F 8E B4 00 00 00         JLE 0x0063509d
LAB_00634fe9:
00634FE9  8B 06                     MOV EAX,dword ptr [ESI]
00634FEB  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00634FEE  0F 83 A0 00 00 00         JNC 0x00635094
00634FF4  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00634FF7  0F AF FB                  IMUL EDI,EBX
00634FFA  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
00634FFD  85 FF                     TEST EDI,EDI
00634FFF  0F 84 8F 00 00 00         JZ 0x00635094
00635005  83 7F 08 01               CMP dword ptr [EDI + 0x8],0x1
00635009  0F 85 85 00 00 00         JNZ 0x00635094
0063500F  D9 45 F0                  FLD float ptr [EBP + -0x10]
00635012  D8 47 21                  FADD float ptr [EDI + 0x21]
00635015  D9 47 25                  FLD float ptr [EDI + 0x25]
00635018  D8 46 45                  FADD float ptr [ESI + 0x45]
0063501B  D9 55 0C                  FST float ptr [EBP + 0xc]
0063501E  D9 FE                     FSIN
00635020  D9 C1                     FLD ST1
00635022  D9 FF                     FCOS
00635024  DA 8E 9D 00 00 00         FIMUL dword ptr [ESI + 0x9d]
0063502A  D8 C9                     FMUL ST1
0063502C  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0063502F  D9 C9                     FXCH
00635031  D9 FE                     FSIN
00635033  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00635039  D8 C9                     FMUL ST1
0063503B  D9 C9                     FXCH
0063503D  DD D8                     FSTP ST0
0063503F  D9 C0                     FLD ST0
00635041  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00635044  D9 45 08                  FLD float ptr [EBP + 0x8]
00635047  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063504A  DE C1                     FADDP
0063504C  E8 37 92 0F 00            CALL 0x0072e288
00635051  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00635054  D9 45 08                  FLD float ptr [EBP + 0x8]
00635057  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063505A  03 86 8D 00 00 00         ADD EAX,dword ptr [ESI + 0x8d]
00635060  DE E9                     FSUBP
00635062  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00635065  E8 1E 92 0F 00            CALL 0x0072e288
0063506A  D9 45 0C                  FLD float ptr [EBP + 0xc]
0063506D  D9 FF                     FCOS
0063506F  03 86 91 00 00 00         ADD EAX,dword ptr [ESI + 0x91]
00635075  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00635078  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
0063507E  E8 05 92 0F 00            CALL 0x0072e288
00635083  8B 8E 95 00 00 00         MOV ECX,dword ptr [ESI + 0x95]
00635089  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063508C  03 C1                     ADD EAX,ECX
0063508E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00635091  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00635094:
00635094  43                        INC EBX
00635095  3B DA                     CMP EBX,EDX
00635097  0F 8C 4C FF FF FF         JL 0x00634fe9
LAB_0063509d:
0063509D  3B 4E 09                  CMP ECX,dword ptr [ESI + 0x9]
006350A0  0F 82 83 FC FF FF         JC 0x00634d29
006350A6  C7 46 2D 00 00 00 00      MOV dword ptr [ESI + 0x2d],0x0
006350AD  5F                        POP EDI
006350AE  5E                        POP ESI
006350AF  5B                        POP EBX
006350B0  8B E5                     MOV ESP,EBP
006350B2  5D                        POP EBP
006350B3  C2 08 00                  RET 0x8
switchD_00633787::caseD_4:
006350B6  DB 45 08                  FILD dword ptr [EBP + 0x8]
006350B9  8B 06                     MOV EAX,dword ptr [ESI]
006350BB  33 D2                     XOR EDX,EDX
006350BD  3B C2                     CMP EAX,EDX
006350BF  D8 0D C4 D1 79 00         FMUL float ptr [0x0079d1c4]
006350C5  D9 C0                     FLD ST0
006350C7  D9 FF                     FCOS
006350C9  D9 5D FC                  FSTP float ptr [EBP + -0x4]
006350CC  D9 FE                     FSIN
006350CE  D9 5D F8                  FSTP float ptr [EBP + -0x8]
006350D1  0F 84 52 FC FF FF         JZ 0x00634d29
006350D7  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006350DA  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
006350DD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006350E0  33 DB                     XOR EBX,EBX
006350E2  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
006350E5  85 C0                     TEST EAX,EAX
006350E7  0F 8E B2 00 00 00         JLE 0x0063519f
LAB_006350ed:
006350ED  8B 06                     MOV EAX,dword ptr [ESI]
006350EF  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
006350F2  0F 83 98 00 00 00         JNC 0x00635190
006350F8  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006350FB  0F AF FB                  IMUL EDI,EBX
006350FE  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
00635101  3B FA                     CMP EDI,EDX
00635103  0F 84 87 00 00 00         JZ 0x00635190
00635109  D9 47 21                  FLD float ptr [EDI + 0x21]
0063510C  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
00635112  3B D9                     CMP EBX,ECX
00635114  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
00635117  7D 05                     JGE 0x0063511e
00635119  D9 47 25                  FLD float ptr [EDI + 0x25]
0063511C  EB 03                     JMP 0x00635121
LAB_0063511e:
0063511E  D9 46 71                  FLD float ptr [ESI + 0x71]
LAB_00635121:
00635121  D9 C0                     FLD ST0
00635123  D9 FE                     FSIN
00635125  D9 45 0C                  FLD float ptr [EBP + 0xc]
00635128  D9 FF                     FCOS
0063512A  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
00635130  D8 C9                     FMUL ST1
00635132  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00635135  D9 45 0C                  FLD float ptr [EBP + 0xc]
00635138  D9 FE                     FSIN
0063513A  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
00635140  DE C9                     FMULP
00635142  D9 C0                     FLD ST0
00635144  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00635147  D9 45 08                  FLD float ptr [EBP + 0x8]
0063514A  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063514D  DE C1                     FADDP
0063514F  E8 34 91 0F 00            CALL 0x0072e288
00635154  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00635157  D9 45 08                  FLD float ptr [EBP + 0x8]
0063515A  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063515D  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00635163  DE E9                     FSUBP
00635165  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00635168  E8 1B 91 0F 00            CALL 0x0072e288
0063516D  D9 FF                     FCOS
0063516F  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
00635175  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
00635178  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
0063517E  E8 05 91 0F 00            CALL 0x0072e288
00635183  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
00635189  03 C1                     ADD EAX,ECX
0063518B  33 D2                     XOR EDX,EDX
0063518D  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_00635190:
00635190  8B 4E 1D                  MOV ECX,dword ptr [ESI + 0x1d]
00635193  43                        INC EBX
00635194  8D 04 09                  LEA EAX,[ECX + ECX*0x1]
00635197  3B D8                     CMP EBX,EAX
00635199  0F 8C 4E FF FF FF         JL 0x006350ed
LAB_0063519f:
0063519F  8B 5E 1D                  MOV EBX,dword ptr [ESI + 0x1d]
006351A2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006351A5  D1 E3                     SHL EBX,0x1
006351A7  3B D8                     CMP EBX,EAX
006351A9  0F 8D 21 01 00 00         JGE 0x006352d0
LAB_006351af:
006351AF  8B 06                     MOV EAX,dword ptr [ESI]
006351B1  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
006351B4  0F 83 0A 01 00 00         JNC 0x006352c4
006351BA  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
006351BD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006351C0  0F AF FB                  IMUL EDI,EBX
006351C3  03 F9                     ADD EDI,ECX
006351C5  3B FA                     CMP EDI,EDX
006351C7  0F 84 F7 00 00 00         JZ 0x006352c4
006351CD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006351D3  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006351D6  D9 47 21                  FLD float ptr [EDI + 0x21]
006351D9  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006351DF  8B 4F 35                  MOV ECX,dword ptr [EDI + 0x35]
006351E2  2B C1                     SUB EAX,ECX
006351E4  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006351E7  8B C8                     MOV ECX,EAX
006351E9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006351EC  0F AF C8                  IMUL ECX,EAX
006351EF  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
006351F5  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006351F8  DF 6D DC                  FILD qword ptr [EBP + -0x24]
006351FB  D8 8E 89 00 00 00         FMUL float ptr [ESI + 0x89]
00635201  D8 0D AC D1 79 00         FMUL float ptr [0x0079d1ac]
00635207  DF 6D E4                  FILD qword ptr [EBP + -0x1c]
0063520A  D8 8E 85 00 00 00         FMUL float ptr [ESI + 0x85]
00635210  DE C1                     FADDP
00635212  D8 47 25                  FADD float ptr [EDI + 0x25]
00635215  D9 55 0C                  FST float ptr [EBP + 0xc]
00635218  D8 5E 71                  FCOMP float ptr [ESI + 0x71]
0063521B  DF E0                     FNSTSW AX
0063521D  F6 C4 41                  TEST AH,0x41
00635220  75 05                     JNZ 0x00635227
00635222  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
00635225  EB 07                     JMP 0x0063522e
LAB_00635227:
00635227  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
LAB_0063522e:
0063522E  D9 45 0C                  FLD float ptr [EBP + 0xc]
00635231  D8 5E 79                  FCOMP float ptr [ESI + 0x79]
00635234  DF E0                     FNSTSW AX
00635236  F6 C4 41                  TEST AH,0x41
00635239  75 14                     JNZ 0x0063524f
0063523B  8B 56 65                  MOV EDX,dword ptr [ESI + 0x65]
0063523E  89 57 25                  MOV dword ptr [EDI + 0x25],EDX
00635241  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00635246  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0063524C  89 4F 35                  MOV dword ptr [EDI + 0x35],ECX
LAB_0063524f:
0063524F  D9 45 0C                  FLD float ptr [EBP + 0xc]
00635252  D9 FE                     FSIN
00635254  D9 C1                     FLD ST1
00635256  D9 FF                     FCOS
00635258  DA 8E A1 00 00 00         FIMUL dword ptr [ESI + 0xa1]
0063525E  D8 C9                     FMUL ST1
00635260  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00635263  D9 C9                     FXCH
00635265  D9 FE                     FSIN
00635267  DA 8E A5 00 00 00         FIMUL dword ptr [ESI + 0xa5]
0063526D  D8 C9                     FMUL ST1
0063526F  D9 C9                     FXCH
00635271  DD D8                     FSTP ST0
00635273  D9 C0                     FLD ST0
00635275  D8 4D F8                  FMUL float ptr [EBP + -0x8]
00635278  D9 45 08                  FLD float ptr [EBP + 0x8]
0063527B  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0063527E  DE C1                     FADDP
00635280  E8 03 90 0F 00            CALL 0x0072e288
00635285  D8 4D FC                  FMUL float ptr [EBP + -0x4]
00635288  D9 45 08                  FLD float ptr [EBP + 0x8]
0063528B  D8 4D F8                  FMUL float ptr [EBP + -0x8]
0063528E  03 86 95 00 00 00         ADD EAX,dword ptr [ESI + 0x95]
00635294  DE E9                     FSUBP
00635296  89 47 0D                  MOV dword ptr [EDI + 0xd],EAX
00635299  E8 EA 8F 0F 00            CALL 0x0072e288
0063529E  D9 45 0C                  FLD float ptr [EBP + 0xc]
006352A1  D9 FF                     FCOS
006352A3  03 86 99 00 00 00         ADD EAX,dword ptr [ESI + 0x99]
006352A9  89 47 11                  MOV dword ptr [EDI + 0x11],EAX
006352AC  DA 8E A9 00 00 00         FIMUL dword ptr [ESI + 0xa9]
006352B2  E8 D1 8F 0F 00            CALL 0x0072e288
006352B7  8B 8E 9D 00 00 00         MOV ECX,dword ptr [ESI + 0x9d]
006352BD  03 C1                     ADD EAX,ECX
006352BF  33 D2                     XOR EDX,EDX
006352C1  89 47 15                  MOV dword ptr [EDI + 0x15],EAX
LAB_006352c4:
006352C4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006352C7  43                        INC EBX
006352C8  3B D8                     CMP EBX,EAX
006352CA  0F 8C DF FE FF FF         JL 0x006351af
LAB_006352d0:
006352D0  D9 46 71                  FLD float ptr [ESI + 0x71]
006352D3  D8 5E 79                  FCOMP float ptr [ESI + 0x79]
006352D6  DF E0                     FNSTSW AX
006352D8  F6 C4 01                  TEST AH,0x1
006352DB  74 0E                     JZ 0x006352eb
006352DD  D9 86 89 00 00 00         FLD float ptr [ESI + 0x89]
006352E3  DC C0                     FADD ST0,ST0
006352E5  D8 46 71                  FADD float ptr [ESI + 0x71]
006352E8  D9 5E 71                  FSTP float ptr [ESI + 0x71]
LAB_006352eb:
006352EB  D9 86 89 00 00 00         FLD float ptr [ESI + 0x89]
006352F1  D8 86 8D 00 00 00         FADD float ptr [ESI + 0x8d]
006352F7  5F                        POP EDI
006352F8  D9 9E 8D 00 00 00         FSTP float ptr [ESI + 0x8d]
006352FE  5E                        POP ESI
006352FF  5B                        POP EBX
00635300  8B E5                     MOV ESP,EBP
00635302  5D                        POP EBP
00635303  C2 08 00                  RET 0x8
