FUN_004a9fb0:
004A9FB0  55                        PUSH EBP
004A9FB1  8B EC                     MOV EBP,ESP
004A9FB3  83 EC 0C                  SUB ESP,0xc
004A9FB6  A1 50 67 80 00            MOV EAX,[0x00806750]
004A9FBB  56                        PUSH ESI
004A9FBC  57                        PUSH EDI
004A9FBD  8B F9                     MOV EDI,ECX
004A9FBF  0F BF 08                  MOVSX ECX,word ptr [EAX]
004A9FC2  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004A9FC6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004A9FC9  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004A9FCE  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004A9FD1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004A9FD4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A9FD7  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A9FDC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A9FE2  83 F8 03                  CMP EAX,0x3
004A9FE5  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004A9FE8  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004A9FEB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A9FF1  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004A9FF4  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A9FFA  77 37                     JA 0x004aa033
switchD_004a9ffc::switchD:
004A9FFC  FF 24 85 70 A1 4A 00      JMP dword ptr [EAX*0x4 + 0x4aa170]
switchD_004a9ffc::caseD_0:
004AA003  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA006  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA009  EB 22                     JMP 0x004aa02d
switchD_004a9ffc::caseD_1:
004AA00B  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA00E  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA011  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA014  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA017  EB 1A                     JMP 0x004aa033
switchD_004a9ffc::caseD_2:
004AA019  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA01C  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA01F  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA022  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA025  EB 0C                     JMP 0x004aa033
switchD_004a9ffc::caseD_3:
004AA027  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA02A  D8 65 08                  FSUB float ptr [EBP + 0x8]
LAB_004aa02d:
004AA02D  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA030  D8 65 08                  FSUB float ptr [EBP + 0x8]
switchD_004a9ffc::default:
004AA033  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA036  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AA03C  DF E0                     FNSTSW AX
004AA03E  F6 C4 01                  TEST AH,0x1
004AA041  74 07                     JZ 0x004aa04a
004AA043  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aa04a:
004AA04A  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA04D  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AA050  DF E0                     FNSTSW AX
004AA052  F6 C4 41                  TEST AH,0x41
004AA055  75 06                     JNZ 0x004aa05d
004AA057  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AA05A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aa05d:
004AA05D  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AA063  DF E0                     FNSTSW AX
004AA065  F6 C4 01                  TEST AH,0x1
004AA068  74 08                     JZ 0x004aa072
004AA06A  DD D8                     FSTP ST0
004AA06C  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aa072:
004AA072  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AA075  DF E0                     FNSTSW AX
004AA077  F6 C4 41                  TEST AH,0x41
004AA07A  75 05                     JNZ 0x004aa081
004AA07C  DD D8                     FSTP ST0
004AA07E  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aa081:
004AA081  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AA087  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA08D  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA093  DF E0                     FNSTSW AX
004AA095  F6 C4 41                  TEST AH,0x41
004AA098  75 08                     JNZ 0x004aa0a2
004AA09A  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA0A0  EB 06                     JMP 0x004aa0a8
LAB_004aa0a2:
004AA0A2  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa0a8:
004AA0A8  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA0AB  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AA0B1  E8 D2 41 28 00            CALL 0x0072e288
004AA0B6  99                        CDQ
004AA0B7  33 C2                     XOR EAX,EDX
004AA0B9  2B C2                     SUB EAX,EDX
004AA0BB  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA0BE  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA0C1  D9 C9                     FXCH
004AA0C3  DE D9                     FCOMPP
004AA0C5  DF E0                     FNSTSW AX
004AA0C7  F6 C4 41                  TEST AH,0x41
004AA0CA  75 50                     JNZ 0x004aa11c
004AA0CC  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA0D2  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA0D8  DF E0                     FNSTSW AX
004AA0DA  F6 C4 41                  TEST AH,0x41
004AA0DD  75 08                     JNZ 0x004aa0e7
004AA0DF  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA0E5  EB 06                     JMP 0x004aa0ed
LAB_004aa0e7:
004AA0E7  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa0ed:
004AA0ED  D9 C1                     FLD ST1
004AA0EF  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AA0F5  E8 8E 41 28 00            CALL 0x0072e288
004AA0FA  99                        CDQ
004AA0FB  33 C2                     XOR EAX,EDX
004AA0FD  2B C2                     SUB EAX,EDX
004AA0FF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA102  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA105  D9 C9                     FXCH
004AA107  DE D9                     FCOMPP
004AA109  DF E0                     FNSTSW AX
004AA10B  F6 C4 41                  TEST AH,0x41
004AA10E  75 0C                     JNZ 0x004aa11c
004AA110  5F                        POP EDI
004AA111  33 C0                     XOR EAX,EAX
004AA113  DD D8                     FSTP ST0
004AA115  5E                        POP ESI
004AA116  8B E5                     MOV ESP,EBP
004AA118  5D                        POP EBP
004AA119  C2 04 00                  RET 0x4
LAB_004aa11c:
004AA11C  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AA122  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA125  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA12B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AA12E  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AA134  E8 4F 41 28 00            CALL 0x0072e288
004AA139  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA13F  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AA144  E8 3F 41 28 00            CALL 0x0072e288
004AA149  6A 00                     PUSH 0x0
004AA14B  8B CF                     MOV ECX,EDI
004AA14D  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AA152  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AA15C  E8 E6 B3 F5 FF            CALL 0x00405547
004AA161  5F                        POP EDI
004AA162  B8 01 00 00 00            MOV EAX,0x1
004AA167  5E                        POP ESI
004AA168  8B E5                     MOV ESP,EBP
004AA16A  5D                        POP EBP
004AA16B  C2 04 00                  RET 0x4
