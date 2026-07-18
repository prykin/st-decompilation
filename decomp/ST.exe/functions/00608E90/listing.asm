FUN_00608e90:
00608E90  55                        PUSH EBP
00608E91  8B EC                     MOV EBP,ESP
00608E93  83 EC 08                  SUB ESP,0x8
00608E96  53                        PUSH EBX
00608E97  56                        PUSH ESI
00608E98  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00608E9B  57                        PUSH EDI
00608E9C  8B D9                     MOV EBX,ECX
00608E9E  56                        PUSH ESI
00608E9F  E8 19 B0 DF FF            CALL 0x00403ebd
00608EA4  3D FF FF 00 00            CMP EAX,0xffff
00608EA9  75 09                     JNZ 0x00608eb4
00608EAB  5F                        POP EDI
00608EAC  5E                        POP ESI
00608EAD  5B                        POP EBX
00608EAE  8B E5                     MOV ESP,EBP
00608EB0  5D                        POP EBP
00608EB1  C2 04 00                  RET 0x4
LAB_00608eb4:
00608EB4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00608EB7  83 F8 03                  CMP EAX,0x3
00608EBA  0F 87 31 07 00 00         JA 0x006095f1
00608EC0  0F 84 5F 06 00 00         JZ 0x00609525
00608EC6  83 E8 00                  SUB EAX,0x0
00608EC9  0F 84 90 04 00 00         JZ 0x0060935f
00608ECF  83 E8 02                  SUB EAX,0x2
00608ED2  0F 85 66 07 00 00         JNZ 0x0060963e
00608ED8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00608EDB  B9 14 00 00 00            MOV ECX,0x14
00608EE0  8D BB D5 01 00 00         LEA EDI,[EBX + 0x1d5]
00608EE6  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00608EE9  F3 A5                     MOVSD.REP ES:EDI,ESI
00608EEB  83 BB E1 01 00 00 02      CMP dword ptr [EBX + 0x1e1],0x2
00608EF2  0F 84 4E 04 00 00         JZ 0x00609346
00608EF8  8B BB F9 01 00 00         MOV EDI,dword ptr [EBX + 0x1f9]
00608EFE  B8 79 19 8C 02            MOV EAX,0x28c1979
00608F03  F7 EF                     IMUL EDI
00608F05  8B 83 F5 01 00 00         MOV EAX,dword ptr [EBX + 0x1f5]
00608F0B  D1 FA                     SAR EDX,0x1
00608F0D  8B CA                     MOV ECX,EDX
00608F0F  83 C0 C3                  ADD EAX,-0x3d
00608F12  C1 E9 1F                  SHR ECX,0x1f
00608F15  03 D1                     ADD EDX,ECX
00608F17  83 F8 36                  CMP EAX,0x36
00608F1A  8B F2                     MOV ESI,EDX
00608F1C  B9 01 00 00 00            MOV ECX,0x1
00608F21  89 B3 4C 02 00 00         MOV dword ptr [EBX + 0x24c],ESI
00608F27  0F 87 DC 02 00 00         JA 0x00609209
00608F2D  33 D2                     XOR EDX,EDX
00608F2F  8A 90 74 96 60 00         MOV DL,byte ptr [EAX + 0x609674]
switchD_00608f35::switchD:
00608F35  FF 24 95 4C 96 60 00      JMP dword ptr [EDX*0x4 + 0x60964c]
switchD_00608f35::caseD_3d:
00608F3C  C7 83 0D 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x20d],0x3
00608F46  C7 83 19 02 00 00 19 00 00 00  MOV dword ptr [EBX + 0x219],0x19
00608F50  C7 83 11 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x211],0x0
00608F5A  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
00608F60  C6 83 25 02 00 00 00      MOV byte ptr [EBX + 0x225],0x0
00608F67  E9 9D 02 00 00            JMP 0x00609209
switchD_00608f35::caseD_41:
00608F6C  C7 83 0D 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x20d],0x3
00608F76  C7 83 19 02 00 00 19 00 00 00  MOV dword ptr [EBX + 0x219],0x19
00608F80  C7 83 11 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x211],0x0
00608F8A  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
00608F90  C6 83 25 02 00 00 00      MOV byte ptr [EBX + 0x225],0x0
00608F97  C6 83 2E 02 00 00 00      MOV byte ptr [EBX + 0x22e],0x0
00608F9E  E9 66 02 00 00            JMP 0x00609209
switchD_00608f35::caseD_43:
00608FA3  8B 93 E9 01 00 00         MOV EDX,dword ptr [EBX + 0x1e9]
00608FA9  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
00608FAF  B8 01 00 00 00            MOV EAX,0x1
00608FB4  C7 83 0D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x20d],0x0
00608FBE  89 83 11 02 00 00         MOV dword ptr [EBX + 0x211],EAX
00608FC4  89 83 15 02 00 00         MOV dword ptr [EBX + 0x215],EAX
00608FCA  B8 64 00 00 00            MOV EAX,0x64
00608FCF  C7 83 19 02 00 00 19 00 00 00  MOV dword ptr [EBX + 0x219],0x19
00608FD9  03 D0                     ADD EDX,EAX
00608FDB  03 C8                     ADD ECX,EAX
00608FDD  89 93 E9 01 00 00         MOV dword ptr [EBX + 0x1e9],EDX
00608FE3  89 8B ED 01 00 00         MOV dword ptr [EBX + 0x1ed],ECX
00608FE9  E9 07 02 00 00            JMP 0x006091f5
switchD_00608f35::caseD_73:
00608FEE  8B B3 E9 01 00 00         MOV ESI,dword ptr [EBX + 0x1e9]
00608FF4  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00608FFA  B8 64 00 00 00            MOV EAX,0x64
00608FFF  C7 83 0D 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x20d],0x3
00609009  03 F0                     ADD ESI,EAX
0060900B  03 D0                     ADD EDX,EAX
0060900D  89 B3 E9 01 00 00         MOV dword ptr [EBX + 0x1e9],ESI
00609013  89 93 ED 01 00 00         MOV dword ptr [EBX + 0x1ed],EDX
00609019  C7 83 19 02 00 00 24 00 00 00  MOV dword ptr [EBX + 0x219],0x24
00609023  C7 83 11 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x211],0x4
0060902D  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
00609033  C6 83 25 02 00 00 00      MOV byte ptr [EBX + 0x225],0x0
0060903A  E9 C3 01 00 00            JMP 0x00609202
switchD_00608f35::caseD_4c:
0060903F  C7 83 0D 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x20d],0x3
00609049  C7 83 19 02 00 00 4B 00 00 00  MOV dword ptr [EBX + 0x219],0x4b
00609053  C7 83 11 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x211],0x0
0060905D  89 8B 15 02 00 00         MOV dword ptr [EBX + 0x215],ECX
00609063  C6 83 25 02 00 00 00      MOV byte ptr [EBX + 0x225],0x0
0060906A  E9 93 01 00 00            JMP 0x00609202
switchD_00608f35::caseD_4d:
0060906F  8B 83 09 02 00 00         MOV EAX,dword ptr [EBX + 0x209]
00609075  C7 83 0D 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x20d],0x3
0060907F  85 C0                     TEST EAX,EAX
00609081  C7 83 1D 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x21d],0x2
0060908B  C7 83 19 02 00 00 6E 00 00 00  MOV dword ptr [EBX + 0x219],0x6e
00609095  C7 83 11 02 00 00 07 00 00 00  MOV dword ptr [EBX + 0x211],0x7
0060909F  C7 83 15 02 00 00 06 00 00 00  MOV dword ptr [EBX + 0x215],0x6
006090A9  C6 83 2E 02 00 00 01      MOV byte ptr [EBX + 0x22e],0x1
006090B0  C6 83 25 02 00 00 00      MOV byte ptr [EBX + 0x225],0x0
006090B7  0F 86 A7 00 00 00         JBE 0x00609164
006090BD  85 FF                     TEST EDI,EDI
006090BF  0F BF F6                  MOVSX ESI,SI
006090C2  7D 01                     JGE 0x006090c5
006090C4  4E                        DEC ESI
LAB_006090c5:
006090C5  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
006090CB  B8 79 19 8C 02            MOV EAX,0x28c1979
006090D0  85 C9                     TEST ECX,ECX
006090D2  7C 10                     JL 0x006090e4
006090D4  F7 E9                     IMUL ECX
006090D6  D1 FA                     SAR EDX,0x1
006090D8  8B C2                     MOV EAX,EDX
006090DA  C1 E8 1F                  SHR EAX,0x1f
006090DD  03 D0                     ADD EDX,EAX
006090DF  0F BF CA                  MOVSX ECX,DX
006090E2  EB 0F                     JMP 0x006090f3
LAB_006090e4:
006090E4  F7 E9                     IMUL ECX
006090E6  D1 FA                     SAR EDX,0x1
006090E8  8B CA                     MOV ECX,EDX
006090EA  C1 E9 1F                  SHR ECX,0x1f
006090ED  03 D1                     ADD EDX,ECX
006090EF  0F BF CA                  MOVSX ECX,DX
006090F2  49                        DEC ECX
LAB_006090f3:
006090F3  8B 93 E9 01 00 00         MOV EDX,dword ptr [EBX + 0x1e9]
006090F9  B8 79 19 8C 02            MOV EAX,0x28c1979
006090FE  85 D2                     TEST EDX,EDX
00609100  7C 10                     JL 0x00609112
00609102  F7 EA                     IMUL EDX
00609104  D1 FA                     SAR EDX,0x1
00609106  8B C2                     MOV EAX,EDX
00609108  C1 E8 1F                  SHR EAX,0x1f
0060910B  03 D0                     ADD EDX,EAX
0060910D  0F BF C2                  MOVSX EAX,DX
00609110  EB 0F                     JMP 0x00609121
LAB_00609112:
00609112  F7 EA                     IMUL EDX
00609114  D1 FA                     SAR EDX,0x1
00609116  8B C2                     MOV EAX,EDX
00609118  C1 E8 1F                  SHR EAX,0x1f
0060911B  03 D0                     ADD EDX,EAX
0060911D  0F BF C2                  MOVSX EAX,DX
00609120  48                        DEC EAX
LAB_00609121:
00609121  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00609124  53                        PUSH EBX
00609125  52                        PUSH EDX
00609126  8B 93 D9 01 00 00         MOV EDX,dword ptr [EBX + 0x1d9]
0060912C  56                        PUSH ESI
0060912D  52                        PUSH EDX
0060912E  51                        PUSH ECX
0060912F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00609135  50                        PUSH EAX
00609136  E8 AD 9B DF FF            CALL 0x00402ce8
0060913B  8B 83 09 02 00 00         MOV EAX,dword ptr [EBX + 0x209]
00609141  85 C0                     TEST EAX,EAX
00609143  0F 86 C0 00 00 00         JBE 0x00609209
00609149  8B 83 21 02 00 00         MOV EAX,dword ptr [EBX + 0x221]
0060914F  85 C0                     TEST EAX,EAX
00609151  75 1D                     JNZ 0x00609170
00609153  8B CB                     MOV ECX,EBX
00609155  E8 75 96 DF FF            CALL 0x004027cf
0060915A  8B 83 21 02 00 00         MOV EAX,dword ptr [EBX + 0x221]
00609160  85 C0                     TEST EAX,EAX
00609162  75 0C                     JNZ 0x00609170
LAB_00609164:
00609164  8B CB                     MOV ECX,EBX
00609166  E8 56 8B DF FF            CALL 0x00401cc1
0060916B  E9 99 00 00 00            JMP 0x00609209
LAB_00609170:
00609170  8B CB                     MOV ECX,EBX
00609172  E8 DD AC DF FF            CALL 0x00403e54
00609177  E9 8D 00 00 00            JMP 0x00609209
switchD_00608f35::caseD_42:
0060917C  C7 83 0D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x20d],0x0
00609186  C7 83 19 02 00 00 19 00 00 00  MOV dword ptr [EBX + 0x219],0x19
00609190  C7 83 11 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x211],0x2
0060919A  C7 83 15 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x215],0x1
006091A4  EB 4F                     JMP 0x006091f5
switchD_00608f35::caseD_65:
006091A6  B8 01 00 00 00            MOV EAX,0x1
006091AB  C7 83 0D 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x20d],0x5
006091B5  89 83 19 02 00 00         MOV dword ptr [EBX + 0x219],EAX
006091BB  C7 83 11 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x211],0x2
006091C5  89 83 15 02 00 00         MOV dword ptr [EBX + 0x215],EAX
006091CB  EB 28                     JMP 0x006091f5
switchD_00608f35::caseD_58:
006091CD  C7 83 0D 02 00 00 06 00 00 00  MOV dword ptr [EBX + 0x20d],0x6
006091D7  C7 83 19 02 00 00 64 00 00 00  MOV dword ptr [EBX + 0x219],0x64
006091E1  C7 83 11 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x211],0x4
006091EB  C7 83 15 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x215],0x0
LAB_006091f5:
006091F5  8B CB                     MOV ECX,EBX
006091F7  E8 40 C4 DF FF            CALL 0x0040563c
006091FC  88 83 25 02 00 00         MOV byte ptr [EBX + 0x225],AL
LAB_00609202:
00609202  C6 83 2E 02 00 00 01      MOV byte ptr [EBX + 0x22e],0x1
switchD_00608f35::caseD_3e:
00609209  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
0060920F  83 C0 FE                  ADD EAX,-0x2
00609212  83 F8 04                  CMP EAX,0x4
00609215  0F 87 8C 00 00 00         JA 0x006092a7
switchD_0060921b::switchD:
0060921B  FF 24 85 AC 96 60 00      JMP dword ptr [EAX*0x4 + 0x6096ac]
switchD_0060921b::caseD_2:
00609222  8B 83 19 02 00 00         MOV EAX,dword ptr [EBX + 0x219]
00609228  D1 E0                     SHL EAX,0x1
0060922A  89 83 19 02 00 00         MOV dword ptr [EBX + 0x219],EAX
00609230  EB 75                     JMP 0x006092a7
switchD_0060921b::caseD_4:
00609232  8B 8B 19 02 00 00         MOV ECX,dword ptr [EBX + 0x219]
00609238  85 C9                     TEST ECX,ECX
0060923A  74 1D                     JZ 0x00609259
0060923C  8B 83 F9 01 00 00         MOV EAX,dword ptr [EBX + 0x1f9]
00609242  8B 93 FD 01 00 00         MOV EDX,dword ptr [EBX + 0x1fd]
00609248  2B C2                     SUB EAX,EDX
0060924A  99                        CDQ
0060924B  F7 F9                     IDIV ECX
0060924D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00609250  DB 45 08                  FILD dword ptr [EBP + 0x8]
00609253  D9 9B 2A 02 00 00         FSTP float ptr [EBX + 0x22a]
LAB_00609259:
00609259  03 C9                     ADD ECX,ECX
0060925B  C6 83 2E 02 00 00 01      MOV byte ptr [EBX + 0x22e],0x1
00609262  89 8B 19 02 00 00         MOV dword ptr [EBX + 0x219],ECX
00609268  EB 3D                     JMP 0x006092a7
switchD_0060921b::caseD_5:
0060926A  6A 06                     PUSH 0x6
0060926C  8B CB                     MOV ECX,EBX
0060926E  E8 FA C4 DF FF            CALL 0x0040576d
00609273  85 C0                     TEST EAX,EAX
00609275  74 29                     JZ 0x006092a0
00609277  8B CB                     MOV ECX,EBX
00609279  E8 AE 8D DF FF            CALL 0x0040202c
0060927E  85 C0                     TEST EAX,EAX
00609280  75 25                     JNZ 0x006092a7
00609282  EB 1C                     JMP 0x006092a0
switchD_0060921b::caseD_6:
00609284  6A 05                     PUSH 0x5
00609286  8B CB                     MOV ECX,EBX
00609288  E8 E0 C4 DF FF            CALL 0x0040576d
0060928D  85 C0                     TEST EAX,EAX
0060928F  74 0F                     JZ 0x006092a0
00609291  6A 14                     PUSH 0x14
00609293  6A 05                     PUSH 0x5
00609295  8B CB                     MOV ECX,EBX
00609297  E8 99 8E DF FF            CALL 0x00402135
0060929C  85 C0                     TEST EAX,EAX
0060929E  75 07                     JNZ 0x006092a7
LAB_006092a0:
006092A0  8B CB                     MOV ECX,EBX
006092A2  E8 1A 8A DF FF            CALL 0x00401cc1
switchD_0060921b::caseD_3:
006092A7  8B 93 19 02 00 00         MOV EDX,dword ptr [EBX + 0x219]
006092AD  8B CB                     MOV ECX,EBX
006092AF  52                        PUSH EDX
006092B0  E8 02 85 DF FF            CALL 0x004017b7
006092B5  85 C0                     TEST EAX,EAX
006092B7  7F 0E                     JG 0x006092c7
006092B9  5F                        POP EDI
006092BA  5E                        POP ESI
006092BB  B8 FF FF 00 00            MOV EAX,0xffff
006092C0  5B                        POP EBX
006092C1  8B E5                     MOV ESP,EBP
006092C3  5D                        POP EBP
006092C4  C2 04 00                  RET 0x4
LAB_006092c7:
006092C7  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
006092CD  83 F8 06                  CMP EAX,0x6
006092D0  77 54                     JA 0x00609326
switchD_006092d2::switchD:
006092D2  FF 24 85 C0 96 60 00      JMP dword ptr [EAX*0x4 + 0x6096c0]
switchD_006092d2::caseD_0:
006092D9  8B CB                     MOV ECX,EBX
006092DB  E8 FB A6 DF FF            CALL 0x004039db
006092E0  83 BB F5 01 00 00 4D      CMP dword ptr [EBX + 0x1f5],0x4d
006092E7  75 33                     JNZ 0x0060931c
006092E9  C7 83 48 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x248],0x2
006092F3  EB 31                     JMP 0x00609326
switchD_006092d2::caseD_5:
006092F5  8B CB                     MOV ECX,EBX
006092F7  E8 DF A6 DF FF            CALL 0x004039db
006092FC  C7 83 48 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x248],0x2
00609306  EB 1E                     JMP 0x00609326
switchD_006092d2::caseD_6:
00609308  8B CB                     MOV ECX,EBX
0060930A  E8 8F 84 DF FF            CALL 0x0040179e
0060930F  85 C0                     TEST EAX,EAX
00609311  75 09                     JNZ 0x0060931c
00609313  8B CB                     MOV ECX,EBX
00609315  E8 A7 89 DF FF            CALL 0x00401cc1
0060931A  EB 0A                     JMP 0x00609326
LAB_0060931c:
0060931C  C7 83 48 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x248],0x1
switchD_006092d2::default:
00609326  8A 83 25 02 00 00         MOV AL,byte ptr [EBX + 0x225]
0060932C  84 C0                     TEST AL,AL
0060932E  0F 84 0A 03 00 00         JZ 0x0060963e
00609334  8B CB                     MOV ECX,EBX
00609336  E8 BA 7D DF FF            CALL 0x004010f5
0060933B  5F                        POP EDI
0060933C  5E                        POP ESI
0060933D  33 C0                     XOR EAX,EAX
0060933F  5B                        POP EBX
00609340  8B E5                     MOV ESP,EBP
00609342  5D                        POP EBP
00609343  C2 04 00                  RET 0x4
LAB_00609346:
00609346  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00609349  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0060934C  51                        PUSH ECX
0060934D  8B CB                     MOV ECX,EBX
0060934F  E8 B0 96 DF FF            CALL 0x00402a04
00609354  5F                        POP EDI
00609355  5E                        POP ESI
00609356  33 C0                     XOR EAX,EAX
00609358  5B                        POP EBX
00609359  8B E5                     MOV ESP,EBP
0060935B  5D                        POP EBP
0060935C  C2 04 00                  RET 0x4
LAB_0060935f:
0060935F  8B 83 21 02 00 00         MOV EAX,dword ptr [EBX + 0x221]
00609365  85 C0                     TEST EAX,EAX
00609367  75 23                     JNZ 0x0060938c
00609369  8B CB                     MOV ECX,EBX
0060936B  E8 5F 94 DF FF            CALL 0x004027cf
00609370  8B 83 21 02 00 00         MOV EAX,dword ptr [EBX + 0x221]
00609376  85 C0                     TEST EAX,EAX
00609378  75 12                     JNZ 0x0060938c
0060937A  8B CB                     MOV ECX,EBX
0060937C  E8 40 89 DF FF            CALL 0x00401cc1
00609381  5F                        POP EDI
00609382  5E                        POP ESI
00609383  33 C0                     XOR EAX,EAX
00609385  5B                        POP EBX
00609386  8B E5                     MOV ESP,EBP
00609388  5D                        POP EBP
00609389  C2 04 00                  RET 0x4
LAB_0060938c:
0060938C  8B 83 48 02 00 00         MOV EAX,dword ptr [EBX + 0x248]
00609392  48                        DEC EAX
00609393  0F 84 32 01 00 00         JZ 0x006094cb
00609399  48                        DEC EAX
0060939A  0F 85 6D 01 00 00         JNZ 0x0060950d
006093A0  8B 83 0D 02 00 00         MOV EAX,dword ptr [EBX + 0x20d]
006093A6  83 F8 06                  CMP EAX,0x6
006093A9  0F 87 AF 00 00 00         JA 0x0060945e
switchD_006093af::switchD:
006093AF  FF 24 85 DC 96 60 00      JMP dword ptr [EAX*0x4 + 0x6096dc]
switchD_006093af::caseD_0:
006093B6  8B CB                     MOV ECX,EBX
006093B8  E8 83 7D DF FF            CALL 0x00401140
006093BD  83 BB F5 01 00 00 4D      CMP dword ptr [EBX + 0x1f5],0x4d
006093C4  75 25                     JNZ 0x006093eb
006093C6  F6 83 54 02 00 00 1F      TEST byte ptr [EBX + 0x254],0x1f
006093CD  75 1C                     JNZ 0x006093eb
006093CF  8B 83 09 02 00 00         MOV EAX,dword ptr [EBX + 0x209]
006093D5  85 C0                     TEST EAX,EAX
006093D7  76 09                     JBE 0x006093e2
006093D9  8B CB                     MOV ECX,EBX
006093DB  E8 74 AA DF FF            CALL 0x00403e54
006093E0  EB 09                     JMP 0x006093eb
LAB_006093e2:
006093E2  6A 00                     PUSH 0x0
006093E4  8B CB                     MOV ECX,EBX
006093E6  E8 FD 93 DF FF            CALL 0x004027e8
LAB_006093eb:
006093EB  83 BB F5 01 00 00 4C      CMP dword ptr [EBX + 0x1f5],0x4c
006093F2  75 6A                     JNZ 0x0060945e
006093F4  F6 83 54 02 00 00 3F      TEST byte ptr [EBX + 0x254],0x3f
006093FB  75 61                     JNZ 0x0060945e
006093FD  8B CB                     MOV ECX,EBX
006093FF  E8 E2 A4 DF FF            CALL 0x004038e6
00609404  EB 58                     JMP 0x0060945e
switchD_006093af::caseD_5:
00609406  8B CB                     MOV ECX,EBX
00609408  E8 44 8F DF FF            CALL 0x00402351
0060940D  85 C0                     TEST EAX,EAX
0060940F  7E 4D                     JLE 0x0060945e
00609411  83 E8 02                  SUB EAX,0x2
00609414  75 48                     JNZ 0x0060945e
00609416  8B CB                     MOV ECX,EBX
00609418  E8 3A BB DF FF            CALL 0x00404f57
0060941D  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00609423  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00609429  C7 83 48 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x248],0x1
00609433  05 C8 00 00 00            ADD EAX,0xc8
00609438  89 83 50 02 00 00         MOV dword ptr [EBX + 0x250],EAX
0060943E  EB 1E                     JMP 0x0060945e
switchD_006093af::caseD_6:
00609440  8B CB                     MOV ECX,EBX
00609442  E8 00 99 DF FF            CALL 0x00402d47
00609447  85 C0                     TEST EAX,EAX
00609449  7E 13                     JLE 0x0060945e
0060944B  83 E8 02                  SUB EAX,0x2
0060944E  75 0E                     JNZ 0x0060945e
00609450  8B CB                     MOV ECX,EBX
00609452  E8 4F B7 DF FF            CALL 0x00404ba6
00609457  8B CB                     MOV ECX,EBX
00609459  E8 63 88 DF FF            CALL 0x00401cc1
switchD_006093af::default:
0060945E  8A 83 2E 02 00 00         MOV AL,byte ptr [EBX + 0x22e]
00609464  84 C0                     TEST AL,AL
00609466  0F 84 A1 00 00 00         JZ 0x0060950d
0060946C  8A 83 25 02 00 00         MOV AL,byte ptr [EBX + 0x225]
00609472  8B CB                     MOV ECX,EBX
00609474  84 C0                     TEST AL,AL
00609476  74 23                     JZ 0x0060949b
00609478  E8 85 B5 DF FF            CALL 0x00404a02
0060947D  88 83 25 02 00 00         MOV byte ptr [EBX + 0x225],AL
00609483  8B 83 54 02 00 00         MOV EAX,dword ptr [EBX + 0x254]
00609489  40                        INC EAX
0060948A  5F                        POP EDI
0060948B  89 83 54 02 00 00         MOV dword ptr [EBX + 0x254],EAX
00609491  5E                        POP ESI
00609492  33 C0                     XOR EAX,EAX
00609494  5B                        POP EBX
00609495  8B E5                     MOV ESP,EBP
00609497  5D                        POP EBP
00609498  C2 04 00                  RET 0x4
LAB_0060949b:
0060949B  E8 9C C1 DF FF            CALL 0x0040563c
006094A0  84 C0                     TEST AL,AL
006094A2  88 83 25 02 00 00         MOV byte ptr [EBX + 0x225],AL
006094A8  74 63                     JZ 0x0060950d
006094AA  6A 00                     PUSH 0x0
006094AC  8B CB                     MOV ECX,EBX
006094AE  E8 CD A0 DF FF            CALL 0x00403580
006094B3  8B 83 54 02 00 00         MOV EAX,dword ptr [EBX + 0x254]
006094B9  5F                        POP EDI
006094BA  40                        INC EAX
006094BB  5E                        POP ESI
006094BC  89 83 54 02 00 00         MOV dword ptr [EBX + 0x254],EAX
006094C2  33 C0                     XOR EAX,EAX
006094C4  5B                        POP EBX
006094C5  8B E5                     MOV ESP,EBP
006094C7  5D                        POP EBP
006094C8  C2 04 00                  RET 0x4
LAB_006094cb:
006094CB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006094D1  8B 83 50 02 00 00         MOV EAX,dword ptr [EBX + 0x250]
006094D7  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
006094DD  3B D0                     CMP EDX,EAX
006094DF  72 2C                     JC 0x0060950d
006094E1  83 BB 0D 02 00 00 05      CMP dword ptr [EBX + 0x20d],0x5
006094E8  75 12                     JNZ 0x006094fc
006094EA  8B CB                     MOV ECX,EBX
006094EC  E8 3B 8B DF FF            CALL 0x0040202c
006094F1  85 C0                     TEST EAX,EAX
006094F3  75 07                     JNZ 0x006094fc
006094F5  8B CB                     MOV ECX,EBX
006094F7  E8 C5 87 DF FF            CALL 0x00401cc1
LAB_006094fc:
006094FC  C6 83 2F 02 00 00 00      MOV byte ptr [EBX + 0x22f],0x0
00609503  C7 83 48 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x248],0x2
LAB_0060950d:
0060950D  8B 83 54 02 00 00         MOV EAX,dword ptr [EBX + 0x254]
00609513  5F                        POP EDI
00609514  40                        INC EAX
00609515  5E                        POP ESI
00609516  89 83 54 02 00 00         MOV dword ptr [EBX + 0x254],EAX
0060951C  33 C0                     XOR EAX,EAX
0060951E  5B                        POP EBX
0060951F  8B E5                     MOV ESP,EBP
00609521  5D                        POP EBP
00609522  C2 04 00                  RET 0x4
LAB_00609525:
00609525  83 BB F5 01 00 00 4D      CMP dword ptr [EBX + 0x1f5],0x4d
0060952C  0F 85 9C 00 00 00         JNZ 0x006095ce
00609532  8B 8B F9 01 00 00         MOV ECX,dword ptr [EBX + 0x1f9]
00609538  B8 79 19 8C 02            MOV EAX,0x28c1979
0060953D  85 C9                     TEST ECX,ECX
0060953F  7C 10                     JL 0x00609551
00609541  F7 E9                     IMUL ECX
00609543  D1 FA                     SAR EDX,0x1
00609545  8B C2                     MOV EAX,EDX
00609547  C1 E8 1F                  SHR EAX,0x1f
0060954A  03 D0                     ADD EDX,EAX
0060954C  0F BF F2                  MOVSX ESI,DX
0060954F  EB 0F                     JMP 0x00609560
LAB_00609551:
00609551  F7 E9                     IMUL ECX
00609553  D1 FA                     SAR EDX,0x1
00609555  8B CA                     MOV ECX,EDX
00609557  C1 E9 1F                  SHR ECX,0x1f
0060955A  03 D1                     ADD EDX,ECX
0060955C  0F BF F2                  MOVSX ESI,DX
0060955F  4E                        DEC ESI
LAB_00609560:
00609560  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
00609566  B8 79 19 8C 02            MOV EAX,0x28c1979
0060956B  85 C9                     TEST ECX,ECX
0060956D  7C 10                     JL 0x0060957f
0060956F  F7 E9                     IMUL ECX
00609571  D1 FA                     SAR EDX,0x1
00609573  8B C2                     MOV EAX,EDX
00609575  C1 E8 1F                  SHR EAX,0x1f
00609578  03 D0                     ADD EDX,EAX
0060957A  0F BF CA                  MOVSX ECX,DX
0060957D  EB 0F                     JMP 0x0060958e
LAB_0060957f:
0060957F  F7 E9                     IMUL ECX
00609581  D1 FA                     SAR EDX,0x1
00609583  8B CA                     MOV ECX,EDX
00609585  C1 E9 1F                  SHR ECX,0x1f
00609588  03 D1                     ADD EDX,ECX
0060958A  0F BF CA                  MOVSX ECX,DX
0060958D  49                        DEC ECX
LAB_0060958e:
0060958E  8B 93 E9 01 00 00         MOV EDX,dword ptr [EBX + 0x1e9]
00609594  B8 79 19 8C 02            MOV EAX,0x28c1979
00609599  85 D2                     TEST EDX,EDX
0060959B  7C 10                     JL 0x006095ad
0060959D  F7 EA                     IMUL EDX
0060959F  D1 FA                     SAR EDX,0x1
006095A1  8B C2                     MOV EAX,EDX
006095A3  C1 E8 1F                  SHR EAX,0x1f
006095A6  03 D0                     ADD EDX,EAX
006095A8  0F BF C2                  MOVSX EAX,DX
006095AB  EB 0F                     JMP 0x006095bc
LAB_006095ad:
006095AD  F7 EA                     IMUL EDX
006095AF  D1 FA                     SAR EDX,0x1
006095B1  8B C2                     MOV EAX,EDX
006095B3  C1 E8 1F                  SHR EAX,0x1f
006095B6  03 D0                     ADD EDX,EAX
006095B8  0F BF C2                  MOVSX EAX,DX
006095BB  48                        DEC EAX
LAB_006095bc:
006095BC  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
006095BF  52                        PUSH EDX
006095C0  56                        PUSH ESI
006095C1  51                        PUSH ECX
006095C2  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006095C8  50                        PUSH EAX
006095C9  E8 86 8F DF FF            CALL 0x00402554
LAB_006095ce:
006095CE  8B 83 3C 02 00 00         MOV EAX,dword ptr [EBX + 0x23c]
006095D4  85 C0                     TEST EAX,EAX
006095D6  74 07                     JZ 0x006095df
006095D8  8B CB                     MOV ECX,EBX
006095DA  E8 C7 B5 DF FF            CALL 0x00404ba6
LAB_006095df:
006095DF  8B CB                     MOV ECX,EBX
006095E1  E8 17 7D DF FF            CALL 0x004012fd
006095E6  5F                        POP EDI
006095E7  5E                        POP ESI
006095E8  33 C0                     XOR EAX,EAX
006095EA  5B                        POP EBX
006095EB  8B E5                     MOV ESP,EBP
006095ED  5D                        POP EBP
006095EE  C2 04 00                  RET 0x4
LAB_006095f1:
006095F1  2D 0F 01 00 00            SUB EAX,0x10f
006095F6  74 17                     JZ 0x0060960f
006095F8  83 E8 02                  SUB EAX,0x2
006095FB  75 41                     JNZ 0x0060963e
006095FD  8B CB                     MOV ECX,EBX
006095FF  E8 CB 91 DF FF            CALL 0x004027cf
00609604  5F                        POP EDI
00609605  5E                        POP ESI
00609606  33 C0                     XOR EAX,EAX
00609608  5B                        POP EBX
00609609  8B E5                     MOV ESP,EBP
0060960B  5D                        POP EBP
0060960C  C2 04 00                  RET 0x4
LAB_0060960f:
0060960F  8D 45 FC                  LEA EAX,[EBP + -0x4]
00609612  8B CB                     MOV ECX,EBX
00609614  50                        PUSH EAX
00609615  E8 54 89 DF FF            CALL 0x00401f6e
0060961A  85 C0                     TEST EAX,EAX
0060961C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060961F  74 1D                     JZ 0x0060963e
00609621  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00609624  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00609627  51                        PUSH ECX
00609628  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060962E  50                        PUSH EAX
0060962F  52                        PUSH EDX
00609630  E8 C4 8F DF FF            CALL 0x004025f9
00609635  8D 45 F8                  LEA EAX,[EBP + -0x8]
00609638  50                        PUSH EAX
00609639  E8 22 1A 0A 00            CALL 0x006ab060
LAB_0060963e:
0060963E  5F                        POP EDI
0060963F  5E                        POP ESI
00609640  33 C0                     XOR EAX,EAX
00609642  5B                        POP EBX
00609643  8B E5                     MOV ESP,EBP
00609645  5D                        POP EBP
00609646  C2 04 00                  RET 0x4
