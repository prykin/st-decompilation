FUN_004aa200:
004AA200  55                        PUSH EBP
004AA201  8B EC                     MOV EBP,ESP
004AA203  83 EC 0C                  SUB ESP,0xc
004AA206  A1 50 67 80 00            MOV EAX,[0x00806750]
004AA20B  56                        PUSH ESI
004AA20C  57                        PUSH EDI
004AA20D  8B F9                     MOV EDI,ECX
004AA20F  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AA212  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AA216  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AA219  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AA21E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA221  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AA224  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AA227  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AA22C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA232  83 F8 03                  CMP EAX,0x3
004AA235  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AA238  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA23B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA241  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AA244  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AA24A  77 37                     JA 0x004aa283
switchD_004aa24c::switchD:
004AA24C  FF 24 85 C0 A3 4A 00      JMP dword ptr [EAX*0x4 + 0x4aa3c0]
switchD_004aa24c::caseD_0:
004AA253  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA256  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA259  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA25C  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA25F  EB 22                     JMP 0x004aa283
switchD_004aa24c::caseD_1:
004AA261  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA264  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA267  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA26A  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA26D  EB 14                     JMP 0x004aa283
switchD_004aa24c::caseD_2:
004AA26F  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA272  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA275  EB 06                     JMP 0x004aa27d
switchD_004aa24c::caseD_3:
004AA277  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA27A  D8 65 08                  FSUB float ptr [EBP + 0x8]
LAB_004aa27d:
004AA27D  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA280  D8 45 08                  FADD float ptr [EBP + 0x8]
switchD_004aa24c::default:
004AA283  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA286  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AA28C  DF E0                     FNSTSW AX
004AA28E  F6 C4 01                  TEST AH,0x1
004AA291  74 07                     JZ 0x004aa29a
004AA293  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aa29a:
004AA29A  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA29D  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AA2A0  DF E0                     FNSTSW AX
004AA2A2  F6 C4 41                  TEST AH,0x41
004AA2A5  75 06                     JNZ 0x004aa2ad
004AA2A7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AA2AA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aa2ad:
004AA2AD  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AA2B3  DF E0                     FNSTSW AX
004AA2B5  F6 C4 01                  TEST AH,0x1
004AA2B8  74 08                     JZ 0x004aa2c2
004AA2BA  DD D8                     FSTP ST0
004AA2BC  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aa2c2:
004AA2C2  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AA2C5  DF E0                     FNSTSW AX
004AA2C7  F6 C4 41                  TEST AH,0x41
004AA2CA  75 05                     JNZ 0x004aa2d1
004AA2CC  DD D8                     FSTP ST0
004AA2CE  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aa2d1:
004AA2D1  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AA2D7  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA2DD  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA2E3  DF E0                     FNSTSW AX
004AA2E5  F6 C4 41                  TEST AH,0x41
004AA2E8  75 08                     JNZ 0x004aa2f2
004AA2EA  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA2F0  EB 06                     JMP 0x004aa2f8
LAB_004aa2f2:
004AA2F2  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa2f8:
004AA2F8  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA2FB  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AA301  E8 82 3F 28 00            CALL 0x0072e288
004AA306  99                        CDQ
004AA307  33 C2                     XOR EAX,EDX
004AA309  2B C2                     SUB EAX,EDX
004AA30B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA30E  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA311  D9 C9                     FXCH
004AA313  DE D9                     FCOMPP
004AA315  DF E0                     FNSTSW AX
004AA317  F6 C4 41                  TEST AH,0x41
004AA31A  75 50                     JNZ 0x004aa36c
004AA31C  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA322  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA328  DF E0                     FNSTSW AX
004AA32A  F6 C4 41                  TEST AH,0x41
004AA32D  75 08                     JNZ 0x004aa337
004AA32F  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA335  EB 06                     JMP 0x004aa33d
LAB_004aa337:
004AA337  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa33d:
004AA33D  D9 C1                     FLD ST1
004AA33F  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AA345  E8 3E 3F 28 00            CALL 0x0072e288
004AA34A  99                        CDQ
004AA34B  33 C2                     XOR EAX,EDX
004AA34D  2B C2                     SUB EAX,EDX
004AA34F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA352  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA355  D9 C9                     FXCH
004AA357  DE D9                     FCOMPP
004AA359  DF E0                     FNSTSW AX
004AA35B  F6 C4 41                  TEST AH,0x41
004AA35E  75 0C                     JNZ 0x004aa36c
004AA360  5F                        POP EDI
004AA361  33 C0                     XOR EAX,EAX
004AA363  DD D8                     FSTP ST0
004AA365  5E                        POP ESI
004AA366  8B E5                     MOV ESP,EBP
004AA368  5D                        POP EBP
004AA369  C2 04 00                  RET 0x4
LAB_004aa36c:
004AA36C  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AA372  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA375  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA37B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AA37E  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AA384  E8 FF 3E 28 00            CALL 0x0072e288
004AA389  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA38F  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AA394  E8 EF 3E 28 00            CALL 0x0072e288
004AA399  6A 00                     PUSH 0x0
004AA39B  8B CF                     MOV ECX,EDI
004AA39D  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AA3A2  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AA3AC  E8 96 B1 F5 FF            CALL 0x00405547
004AA3B1  5F                        POP EDI
004AA3B2  B8 01 00 00 00            MOV EAX,0x1
004AA3B7  5E                        POP ESI
004AA3B8  8B E5                     MOV ESP,EBP
004AA3BA  5D                        POP EBP
004AA3BB  C2 04 00                  RET 0x4
