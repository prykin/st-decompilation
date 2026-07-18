FUN_006dd050:
006DD050  55                        PUSH EBP
006DD051  8B EC                     MOV EBP,ESP
006DD053  83 EC 08                  SUB ESP,0x8
006DD056  53                        PUSH EBX
006DD057  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006DD05A  56                        PUSH ESI
006DD05B  8B F1                     MOV ESI,ECX
006DD05D  85 DB                     TEST EBX,EBX
006DD05F  0F 8C 88 04 00 00         JL 0x006dd4ed
006DD065  83 FB 0C                  CMP EBX,0xc
006DD068  0F 8F 7F 04 00 00         JG 0x006dd4ed
006DD06E  83 FB 04                  CMP EBX,0x4
006DD071  75 05                     JNZ 0x006dd078
006DD073  BB 0C 00 00 00            MOV EBX,0xc
LAB_006dd078:
006DD078  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006DD07B  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006DD07E  DD 46 68                  FLD double ptr [ESI + 0x68]
006DD081  DC 66 60                  FSUB double ptr [ESI + 0x60]
006DD084  2B C1                     SUB EAX,ECX
006DD086  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006DD089  DB 45 08                  FILD dword ptr [EBP + 0x8]
006DD08C  F6 C3 08                  TEST BL,0x8
006DD08F  DE F9                     FDIVP
006DD091  DD 9E E8 00 00 00         FSTP double ptr [ESI + 0xe8]
006DD097  DD 46 78                  FLD double ptr [ESI + 0x78]
006DD09A  DC 66 70                  FSUB double ptr [ESI + 0x70]
006DD09D  74 10                     JZ 0x006dd0af
006DD09F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006DD0A2  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DD0A5  2B C8                     SUB ECX,EAX
006DD0A7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006DD0AA  DB 45 08                  FILD dword ptr [EBP + 0x8]
006DD0AD  EB 14                     JMP 0x006dd0c3
LAB_006dd0af:
006DD0AF  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006DD0B2  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DD0B5  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DD0BB  2B D0                     SUB EDX,EAX
006DD0BD  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006DD0C0  DB 45 08                  FILD dword ptr [EBP + 0x8]
LAB_006dd0c3:
006DD0C3  DE F9                     FDIVP
006DD0C5  39 9E A8 00 00 00         CMP dword ptr [ESI + 0xa8],EBX
006DD0CB  DD 9E F0 00 00 00         FSTP double ptr [ESI + 0xf0]
006DD0D1  74 07                     JZ 0x006dd0da
006DD0D3  8B CE                     MOV ECX,ESI
006DD0D5  E8 86 FC FF FF            CALL 0x006dcd60
LAB_006dd0da:
006DD0DA  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DD0E0  89 9E A8 00 00 00         MOV dword ptr [ESI + 0xa8],EBX
006DD0E6  85 C0                     TEST EAX,EAX
006DD0E8  74 06                     JZ 0x006dd0f0
006DD0EA  89 98 5C 03 00 00         MOV dword ptr [EAX + 0x35c],EBX
LAB_006dd0f0:
006DD0F0  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DD0F6  A8 08                     TEST AL,0x8
006DD0F8  74 07                     JZ 0x006dd101
006DD0FA  BA 10 00 00 00            MOV EDX,0x10
006DD0FF  EB 0C                     JMP 0x006dd10d
LAB_006dd101:
006DD101  8B C8                     MOV ECX,EAX
006DD103  BA 01 00 00 00            MOV EDX,0x1
006DD108  83 E1 F7                  AND ECX,0xfffffff7
006DD10B  D3 E2                     SHL EDX,CL
LAB_006dd10d:
006DD10D  24 F7                     AND AL,0xf7
006DD10F  89 96 AC 00 00 00         MOV dword ptr [ESI + 0xac],EDX
006DD115  83 F8 03                  CMP EAX,0x3
006DD118  0F 87 10 02 00 00         JA 0x006dd32e
switchD_006dd11e::switchD:
006DD11E  FF 24 85 0C D5 6D 00      JMP dword ptr [EAX*0x4 + 0x6dd50c]
switchD_006dd11e::caseD_0:
006DD125  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD128  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD12E  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD131  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD137  83 EC 08                  SUB ESP,0x8
006DD13A  DE E9                     FSUBP
006DD13C  DC B6 E8 00 00 00         FDIV double ptr [ESI + 0xe8]
006DD142  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD148  DD 1C 24                  FSTP double ptr [ESP]
006DD14B  E8 00 10 05 00            CALL 0x0072e150
006DD150  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006DD156  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006DD159  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD15C  DC 45 14                  FADD double ptr [EBP + 0x14]
006DD15F  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD165  DC B6 F0 00 00 00         FDIV double ptr [ESI + 0xf0]
006DD16B  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD171  DD 1C 24                  FSTP double ptr [ESP]
006DD174  E8 D7 0F 05 00            CALL 0x0072e150
006DD179  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006DD17F  83 C4 08                  ADD ESP,0x8
006DD182  D9 C0                     FLD ST0
006DD184  DC 45 F8                  FADD double ptr [EBP + -0x8]
006DD187  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD18D  DD 5D 0C                  FSTP double ptr [EBP + 0xc]
006DD190  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD196  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD199  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD19F  DE E9                     FSUBP
006DD1A1  E9 CB 01 00 00            JMP 0x006dd371
switchD_006dd11e::caseD_1:
006DD1A6  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD1A9  DC 45 14                  FADD double ptr [EBP + 0x14]
006DD1AC  83 EC 08                  SUB ESP,0x8
006DD1AF  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD1B5  DC B6 E8 00 00 00         FDIV double ptr [ESI + 0xe8]
006DD1BB  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD1C1  DD 1C 24                  FSTP double ptr [ESP]
006DD1C4  E8 87 0F 05 00            CALL 0x0072e150
006DD1C9  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006DD1CF  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006DD1D2  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD1D5  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD1DB  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD1DE  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD1E4  DE E9                     FSUBP
006DD1E6  DC B6 F0 00 00 00         FDIV double ptr [ESI + 0xf0]
006DD1EC  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD1F2  DD 1C 24                  FSTP double ptr [ESP]
006DD1F5  E8 56 0F 05 00            CALL 0x0072e150
006DD1FA  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006DD200  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD203  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD209  D9 C1                     FLD ST1
006DD20B  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD211  83 C4 08                  ADD ESP,0x8
006DD214  DE E9                     FSUBP
006DD216  DD 5D 0C                  FSTP double ptr [EBP + 0xc]
006DD219  DC 45 F8                  FADD double ptr [EBP + -0x8]
006DD21C  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD222  E9 4A 01 00 00            JMP 0x006dd371
switchD_006dd11e::caseD_2:
006DD227  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD22A  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD230  83 EC 08                  SUB ESP,0x8
006DD233  DD 5D 14                  FSTP double ptr [EBP + 0x14]
006DD236  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD239  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD23F  DC 6D 14                  FSUBR double ptr [EBP + 0x14]
006DD242  DC B6 E8 00 00 00         FDIV double ptr [ESI + 0xe8]
006DD248  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD24E  DD 1C 24                  FSTP double ptr [ESP]
006DD251  E8 FA 0E 05 00            CALL 0x0072e150
006DD256  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006DD25C  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006DD25F  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD262  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD268  DC 65 14                  FSUB double ptr [EBP + 0x14]
006DD26B  DC B6 F0 00 00 00         FDIV double ptr [ESI + 0xf0]
006DD271  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD277  DD 1C 24                  FSTP double ptr [ESP]
006DD27A  E8 D1 0E 05 00            CALL 0x0072e150
006DD27F  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006DD285  83 C4 08                  ADD ESP,0x8
006DD288  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD28E  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD291  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD297  D8 E1                     FSUB ST0,ST1
006DD299  DD 5D 0C                  FSTP double ptr [EBP + 0xc]
006DD29C  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD29F  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD2A5  DE E1                     FSUBRP
006DD2A7  E9 C5 00 00 00            JMP 0x006dd371
switchD_006dd11e::caseD_3:
006DD2AC  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD2AF  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD2B5  83 EC 08                  SUB ESP,0x8
006DD2B8  DD 5D 14                  FSTP double ptr [EBP + 0x14]
006DD2BB  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD2BE  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD2C4  DC 65 14                  FSUB double ptr [EBP + 0x14]
006DD2C7  DC B6 E8 00 00 00         FDIV double ptr [ESI + 0xe8]
006DD2CD  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD2D3  DD 1C 24                  FSTP double ptr [ESP]
006DD2D6  E8 75 0E 05 00            CALL 0x0072e150
006DD2DB  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006DD2E1  DD 5D F8                  FSTP double ptr [EBP + -0x8]
006DD2E4  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD2E7  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD2ED  DC 65 14                  FSUB double ptr [EBP + 0x14]
006DD2F0  DC B6 F0 00 00 00         FDIV double ptr [ESI + 0xf0]
006DD2F6  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD2FC  DD 1C 24                  FSTP double ptr [ESP]
006DD2FF  E8 4C 0E 05 00            CALL 0x0072e150
006DD304  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006DD30A  83 C4 08                  ADD ESP,0x8
006DD30D  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD313  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD316  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD31C  D8 E9                     FSUBR ST0,ST1
006DD31E  DD 5D 0C                  FSTP double ptr [EBP + 0xc]
006DD321  DD 45 F8                  FLD double ptr [EBP + -0x8]
006DD324  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD32A  DE E1                     FSUBRP
006DD32C  EB 43                     JMP 0x006dd371
switchD_006dd11e::default:
006DD32E  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD331  DC B6 E8 00 00 00         FDIV double ptr [ESI + 0xe8]
006DD337  83 EC 08                  SUB ESP,0x8
006DD33A  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD340  DD 1C 24                  FSTP double ptr [ESP]
006DD343  E8 08 0E 05 00            CALL 0x0072e150
006DD348  DC 8E E8 00 00 00         FMUL double ptr [ESI + 0xe8]
006DD34E  DD 5D 0C                  FSTP double ptr [EBP + 0xc]
006DD351  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD354  DC B6 F0 00 00 00         FDIV double ptr [ESI + 0xf0]
006DD35A  DC 05 B0 D1 79 00         FADD double ptr [0x0079d1b0]
006DD360  DD 1C 24                  FSTP double ptr [ESP]
006DD363  E8 E8 0D 05 00            CALL 0x0072e150
006DD368  DC 8E F0 00 00 00         FMUL double ptr [ESI + 0xf0]
006DD36E  83 C4 08                  ADD ESP,0x8
LAB_006dd371:
006DD371  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD374  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DD377  DD 96 A0 00 00 00         FST double ptr [ESI + 0xa0]
006DD37D  89 86 98 00 00 00         MOV dword ptr [ESI + 0x98],EAX
006DD383  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DD389  C7 86 80 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x80],0x0
006DD393  89 8E 9C 00 00 00         MOV dword ptr [ESI + 0x9c],ECX
006DD399  A8 08                     TEST AL,0x8
006DD39B  C7 86 84 00 00 00 00 00 69 40  MOV dword ptr [ESI + 0x84],0x40690000
006DD3A5  74 36                     JZ 0x006dd3dd
006DD3A7  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD3AA  D9 E0                     FCHS
006DD3AC  DD 9E B0 00 00 00         FSTP double ptr [ESI + 0xb0]
006DD3B2  C7 86 C0 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xc0],0x0
006DD3BC  8B CE                     MOV ECX,ESI
006DD3BE  D9 E0                     FCHS
006DD3C0  DD 9E B8 00 00 00         FSTP double ptr [ESI + 0xb8]
006DD3C6  C7 86 C4 00 00 00 00 00 69 C0  MOV dword ptr [ESI + 0xc4],0xc0690000
006DD3D0  E8 4B EF FF FF            CALL 0x006dc320
006DD3D5  5E                        POP ESI
006DD3D6  5B                        POP EBX
006DD3D7  8B E5                     MOV ESP,EBP
006DD3D9  5D                        POP EBP
006DD3DA  C2 14 00                  RET 0x14
LAB_006dd3dd:
006DD3DD  83 F8 03                  CMP EAX,0x3
006DD3E0  0F 87 F6 00 00 00         JA 0x006dd4dc
switchD_006dd3e6::switchD:
006DD3E6  FF 24 85 1C D5 6D 00      JMP dword ptr [EAX*0x4 + 0x6dd51c]
switchD_006dd3e6::caseD_0:
006DD3ED  D9 C0                     FLD ST0
006DD3EF  DC 65 0C                  FSUB double ptr [EBP + 0xc]
006DD3F2  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD3F8  DD 5D 14                  FSTP double ptr [EBP + 0x14]
006DD3FB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006DD3FE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006DD401  DC 55 0C                  FCOM double ptr [EBP + 0xc]
006DD404  89 96 B0 00 00 00         MOV dword ptr [ESI + 0xb0],EDX
006DD40A  89 86 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EAX
006DD410  DF E0                     FNSTSW AX
006DD412  F6 C4 41                  TEST AH,0x41
006DD415  75 13                     JNZ 0x006dd42a
006DD417  DD D8                     FSTP ST0
006DD419  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD41C  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD422  DC 45 0C                  FADD double ptr [EBP + 0xc]
006DD425  E9 91 00 00 00            JMP 0x006dd4bb
LAB_006dd42a:
006DD42A  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD42D  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD433  DE E9                     FSUBP
006DD435  E9 81 00 00 00            JMP 0x006dd4bb
switchD_006dd3e6::caseD_1:
006DD43A  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD43D  D8 C1                     FADD ST0,ST1
006DD43F  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD445  DD 9E B0 00 00 00         FSTP double ptr [ESI + 0xb0]
006DD44B  DC 65 0C                  FSUB double ptr [EBP + 0xc]
006DD44E  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006DD454  EB 65                     JMP 0x006dd4bb
switchD_006dd3e6::caseD_2:
006DD456  D9 C0                     FLD ST0
006DD458  DC 65 0C                  FSUB double ptr [EBP + 0xc]
006DD45B  DC 0D C0 DF 79 00         FMUL double ptr [0x0079dfc0]
006DD461  DD 5D 14                  FSTP double ptr [EBP + 0x14]
006DD464  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006DD467  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006DD46A  DC 55 0C                  FCOM double ptr [EBP + 0xc]
006DD46D  89 8E B0 00 00 00         MOV dword ptr [ESI + 0xb0],ECX
006DD473  89 96 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EDX
006DD479  DF E0                     FNSTSW AX
006DD47B  F6 C4 41                  TEST AH,0x41
006DD47E  75 12                     JNZ 0x006dd492
006DD480  DD D8                     FSTP ST0
006DD482  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD485  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD48B  DC 6D 0C                  FSUBR double ptr [EBP + 0xc]
006DD48E  D9 E0                     FCHS
006DD490  EB 29                     JMP 0x006dd4bb
LAB_006dd492:
006DD492  DD 45 14                  FLD double ptr [EBP + 0x14]
006DD495  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD49B  DE C1                     FADDP
006DD49D  D9 E0                     FCHS
006DD49F  EB 1A                     JMP 0x006dd4bb
switchD_006dd3e6::caseD_3:
006DD4A1  DD 45 0C                  FLD double ptr [EBP + 0xc]
006DD4A4  D8 C1                     FADD ST0,ST1
006DD4A6  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DD4AC  DD 9E B0 00 00 00         FSTP double ptr [ESI + 0xb0]
006DD4B2  DC 65 0C                  FSUB double ptr [EBP + 0xc]
006DD4B5  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
LAB_006dd4bb:
006DD4BB  DD 96 B8 00 00 00         FST double ptr [ESI + 0xb8]
006DD4C1  DC 05 B8 DF 79 00         FADD double ptr [0x0079dfb8]
006DD4C7  8B CE                     MOV ECX,ESI
006DD4C9  DD 9E C0 00 00 00         FSTP double ptr [ESI + 0xc0]
006DD4CF  E8 4C EE FF FF            CALL 0x006dc320
006DD4D4  5E                        POP ESI
006DD4D5  5B                        POP EBX
006DD4D6  8B E5                     MOV ESP,EBP
006DD4D8  5D                        POP EBP
006DD4D9  C2 14 00                  RET 0x14
switchD_006dd3e6::default:
006DD4DC  8B CE                     MOV ECX,ESI
006DD4DE  DD D8                     FSTP ST0
006DD4E0  E8 3B EE FF FF            CALL 0x006dc320
006DD4E5  5E                        POP ESI
006DD4E6  5B                        POP EBX
006DD4E7  8B E5                     MOV ESP,EBP
006DD4E9  5D                        POP EBP
006DD4EA  C2 14 00                  RET 0x14
LAB_006dd4ed:
006DD4ED  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006DD4F2  68 2C 03 00 00            PUSH 0x32c
006DD4F7  68 58 E7 7E 00            PUSH 0x7ee758
006DD4FC  50                        PUSH EAX
006DD4FD  6A CC                     PUSH -0x34
006DD4FF  E8 3C 89 FC FF            CALL 0x006a5e40
006DD504  5E                        POP ESI
006DD505  5B                        POP EBX
006DD506  8B E5                     MOV ESP,EBP
006DD508  5D                        POP EBP
006DD509  C2 14 00                  RET 0x14
