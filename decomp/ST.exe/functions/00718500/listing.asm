FUN_00718500:
00718500  55                        PUSH EBP
00718501  8B EC                     MOV EBP,ESP
00718503  B8 84 18 00 00            MOV EAX,0x1884
00718508  E8 33 55 01 00            CALL 0x0072da40
0071850D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00718512  53                        PUSH EBX
00718513  56                        PUSH ESI
00718514  57                        PUSH EDI
00718515  8D 55 80                  LEA EDX,[EBP + -0x80]
00718518  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
0071851E  6A 00                     PUSH 0x0
00718520  52                        PUSH EDX
00718521  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00718527  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071852D  E8 BE 52 01 00            CALL 0x0072d7f0
00718532  8B F0                     MOV ESI,EAX
00718534  83 C4 08                  ADD ESP,0x8
00718537  85 F6                     TEST ESI,ESI
00718539  0F 85 EF 01 00 00         JNZ 0x0071872e
0071853F  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00718542  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00718545  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00718548  85 C0                     TEST EAX,EAX
0071854A  75 0C                     JNZ 0x00718558
0071854C  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
0071854F  50                        PUSH EAX
00718550  E8 1B 27 F9 FF            CALL 0x006aac70
00718555  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_00718558:
00718558  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
0071855B  3B D8                     CMP EBX,EAX
0071855D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00718560  7D 5E                     JGE 0x007185c0
00718562  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00718565  8D 3C 5B                  LEA EDI,[EBX + EBX*0x2]
00718568  C1 E7 02                  SHL EDI,0x2
0071856B  2B C3                     SUB EAX,EBX
0071856D  8D 74 99 02               LEA ESI,[ECX + EBX*0x4 + 0x2]
00718571  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00718574:
00718574  8A 46 FF                  MOV AL,byte ptr [ESI + -0x1]
00718577  8A 56 FE                  MOV DL,byte ptr [ESI + -0x2]
0071857A  8A 0E                     MOV CL,byte ptr [ESI]
0071857C  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
0071857F  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00718582  8D 84 3D 7C E7 FF FF      LEA EAX,[EBP + EDI*0x1 + 0xffffe77c]
00718589  8D 55 F4                  LEA EDX,[EBP + -0xc]
0071858C  50                        PUSH EAX
0071858D  52                        PUSH EDX
0071858E  88 4D F6                  MOV byte ptr [EBP + -0xa],CL
00718591  E8 9A FB FF FF            CALL 0x00718130
00718596  8D 84 3D 7C F3 FF FF      LEA EAX,[EBP + EDI*0x1 + 0xfffff37c]
0071859D  50                        PUSH EAX
0071859E  8D 84 3D 7C E7 FF FF      LEA EAX,[EBP + EDI*0x1 + 0xffffe77c]
007185A5  50                        PUSH EAX
007185A6  E8 05 FF FF FF            CALL 0x007184b0
007185AB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007185AE  83 C4 10                  ADD ESP,0x10
007185B1  83 C6 04                  ADD ESI,0x4
007185B4  83 C7 0C                  ADD EDI,0xc
007185B7  48                        DEC EAX
007185B8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007185BB  75 B7                     JNZ 0x00718574
007185BD  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_007185c0:
007185C0  3B D8                     CMP EBX,EAX
007185C2  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
007185C5  0F 8D 4E 01 00 00         JGE 0x00718719
007185CB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007185CE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007185D1  81 E1 FF 00 00 00         AND ECX,0xff
007185D7  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
007185DA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007185DD  81 E2 FF 00 00 00         AND EDX,0xff
007185E3  DB 45 F8                  FILD dword ptr [EBP + -0x8]
007185E6  C1 E0 02                  SHL EAX,0x2
007185E9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007185EC  D9 5D C4                  FSTP float ptr [EBP + -0x3c]
007185EF  DB 45 F8                  FILD dword ptr [EBP + -0x8]
007185F2  8D 8C 05 84 F3 FF FF      LEA ECX,[EBP + EAX*0x1 + 0xfffff384]
007185F9  8D 94 05 80 F3 FF FF      LEA EDX,[EBP + EAX*0x1 + 0xfffff380]
00718600  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00718603  8D 8C 05 7C F3 FF FF      LEA ECX,[EBP + EAX*0x1 + 0xfffff37c]
0071860A  D9 5D D8                  FSTP float ptr [EBP + -0x28]
0071860D  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00718610  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00718613  8D B4 05 7C E7 FF FF      LEA ESI,[EBP + EAX*0x1 + 0xffffe77c]
LAB_0071861a:
0071861A  81 3E 00 C0 79 44         CMP dword ptr [ESI],0x4479c000
00718620  75 04                     JNZ 0x00718626
00718622  D9 06                     FLD float ptr [ESI]
00718624  EB 17                     JMP 0x0071863d
LAB_00718626:
00718626  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00718629  81 E2 FF 00 00 00         AND EDX,0xff
0071862F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00718632  DB 45 F8                  FILD dword ptr [EBP + -0x8]
00718635  D8 0E                     FMUL float ptr [ESI]
00718637  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
LAB_0071863d:
0071863D  D9 5D CC                  FSTP float ptr [EBP + -0x34]
00718640  D9 45 C4                  FLD float ptr [EBP + -0x3c]
00718643  D8 4E 04                  FMUL float ptr [ESI + 0x4]
00718646  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00718649  8D 4D CC                  LEA ECX,[EBP + -0x34]
0071864C  50                        PUSH EAX
0071864D  51                        PUSH ECX
0071864E  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718654  D9 5D D0                  FSTP float ptr [EBP + -0x30]
00718657  D9 45 D8                  FLD float ptr [EBP + -0x28]
0071865A  D8 4E 08                  FMUL float ptr [ESI + 0x8]
0071865D  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00718663  D9 5D D4                  FSTP float ptr [EBP + -0x2c]
00718666  E8 45 FE FF FF            CALL 0x007184b0
0071866B  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0071866E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00718671  D9 45 EC                  FLD float ptr [EBP + -0x14]
00718674  D8 22                     FSUB float ptr [EDX]
00718676  D9 45 E8                  FLD float ptr [EBP + -0x18]
00718679  D8 20                     FSUB float ptr [EAX]
0071867B  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0071867E  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00718681  D9 45 E4                  FLD float ptr [EBP + -0x1c]
00718684  D8 21                     FSUB float ptr [ECX]
00718686  D9 C0                     FLD ST0
00718688  D8 C9                     FMUL ST1
0071868A  D9 C2                     FLD ST2
0071868C  D8 CB                     FMUL ST3
0071868E  8D 4B 01                  LEA ECX,[EBX + 0x1]
00718691  83 C4 08                  ADD ESP,0x8
00718694  DE C1                     FADDP
00718696  D9 C3                     FLD ST3
00718698  D8 CC                     FMUL ST4
0071869A  3B CF                     CMP ECX,EDI
0071869C  88 5D FF                  MOV byte ptr [EBP + -0x1],BL
0071869F  DE C1                     FADDP
007186A1  D9 5D F8                  FSTP float ptr [EBP + -0x8]
007186A4  DD D8                     FSTP ST0
007186A6  DD D8                     FSTP ST0
007186A8  DD D8                     FSTP ST0
007186AA  7D 52                     JGE 0x007186fe
007186AC  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
007186AF  8D 94 95 80 F3 FF FF      LEA EDX,[EBP + EDX*0x4 + 0xfffff380]
LAB_007186b6:
007186B6  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
007186B9  74 3B                     JZ 0x007186f6
007186BB  D9 45 EC                  FLD float ptr [EBP + -0x14]
007186BE  D8 62 04                  FSUB float ptr [EDX + 0x4]
007186C1  D9 45 E8                  FLD float ptr [EBP + -0x18]
007186C4  D8 22                     FSUB float ptr [EDX]
007186C6  D9 45 E4                  FLD float ptr [EBP + -0x1c]
007186C9  D8 62 FC                  FSUB float ptr [EDX + -0x4]
007186CC  D9 C0                     FLD ST0
007186CE  D8 C9                     FMUL ST1
007186D0  D9 C3                     FLD ST3
007186D2  D8 CC                     FMUL ST4
007186D4  DE C1                     FADDP
007186D6  D9 C2                     FLD ST2
007186D8  D8 CB                     FMUL ST3
007186DA  DE C1                     FADDP
007186DC  DD DB                     FSTP ST3
007186DE  DD D8                     FSTP ST0
007186E0  DD D8                     FSTP ST0
007186E2  D8 55 F8                  FCOM float ptr [EBP + -0x8]
007186E5  DF E0                     FNSTSW AX
007186E7  F6 C4 41                  TEST AH,0x41
007186EA  74 08                     JZ 0x007186f4
007186EC  D9 5D F8                  FSTP float ptr [EBP + -0x8]
007186EF  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
007186F2  EB 02                     JMP 0x007186f6
LAB_007186f4:
007186F4  DD D8                     FSTP ST0
LAB_007186f6:
007186F6  41                        INC ECX
007186F7  83 C2 0C                  ADD EDX,0xc
007186FA  3B CF                     CMP ECX,EDI
007186FC  7C B8                     JL 0x007186b6
LAB_007186fe:
007186FE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00718701  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00718704  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00718707  83 C6 0C                  ADD ESI,0xc
0071870A  88 14 08                  MOV byte ptr [EAX + ECX*0x1],DL
0071870D  40                        INC EAX
0071870E  3B C7                     CMP EAX,EDI
00718710  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00718713  0F 8C 01 FF FF FF         JL 0x0071861a
LAB_00718719:
00718719  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
0071871F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00718724  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00718727  5F                        POP EDI
00718728  5E                        POP ESI
00718729  5B                        POP EBX
0071872A  8B E5                     MOV ESP,EBP
0071872C  5D                        POP EBP
0071872D  C3                        RET
LAB_0071872e:
0071872E  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00718734  68 30 07 7F 00            PUSH 0x7f0730
00718739  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071873E  56                        PUSH ESI
0071873F  6A 00                     PUSH 0x0
00718741  68 93 00 00 00            PUSH 0x93
00718746  68 18 07 7F 00            PUSH 0x7f0718
0071874B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00718751  E8 7A 4D F9 FF            CALL 0x006ad4d0
00718756  83 C4 18                  ADD ESP,0x18
00718759  85 C0                     TEST EAX,EAX
0071875B  74 01                     JZ 0x0071875e
0071875D  CC                        INT3
LAB_0071875e:
0071875E  68 94 00 00 00            PUSH 0x94
00718763  68 18 07 7F 00            PUSH 0x7f0718
00718768  6A 00                     PUSH 0x0
0071876A  56                        PUSH ESI
0071876B  E8 D0 D6 F8 FF            CALL 0x006a5e40
00718770  5F                        POP EDI
00718771  5E                        POP ESI
00718772  33 C0                     XOR EAX,EAX
00718774  5B                        POP EBX
00718775  8B E5                     MOV ESP,EBP
00718777  5D                        POP EBP
00718778  C3                        RET
