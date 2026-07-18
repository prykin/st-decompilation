FUN_00718130:
00718130  55                        PUSH EBP
00718131  8B EC                     MOV EBP,ESP
00718133  83 EC 10                  SUB ESP,0x10
00718136  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00718139  33 C9                     XOR ECX,ECX
0071813B  33 D2                     XOR EDX,EDX
0071813D  8A 08                     MOV CL,byte ptr [EAX]
0071813F  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00718142  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00718145  33 C9                     XOR ECX,ECX
00718147  DB 45 08                  FILD dword ptr [EBP + 0x8]
0071814A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0071814D  8A 48 02                  MOV CL,byte ptr [EAX + 0x2]
00718150  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00718153  D8 0D 5C E2 79 00         FMUL float ptr [0x0079e25c]
00718159  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0071815C  DB 45 08                  FILD dword ptr [EBP + 0x8]
0071815F  D8 0D 5C E2 79 00         FMUL float ptr [0x0079e25c]
00718165  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00718168  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0071816B  D8 0D 5C E2 79 00         FMUL float ptr [0x0079e25c]
00718171  D9 5D FC                  FSTP float ptr [EBP + -0x4]
00718174  D9 45 08                  FLD float ptr [EBP + 0x8]
00718177  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0071817A  DF E0                     FNSTSW AX
0071817C  F6 C4 41                  TEST AH,0x41
0071817F  75 05                     JNZ 0x00718186
00718181  D9 45 08                  FLD float ptr [EBP + 0x8]
00718184  EB 03                     JMP 0x00718189
LAB_00718186:
00718186  D9 45 FC                  FLD float ptr [EBP + -0x4]
LAB_00718189:
00718189  D9 45 F8                  FLD float ptr [EBP + -0x8]
0071818C  D8 D9                     FCOMP
0071818E  DF E0                     FNSTSW AX
00718190  F6 C4 41                  TEST AH,0x41
00718193  DD D8                     FSTP ST0
00718195  75 05                     JNZ 0x0071819c
00718197  D9 45 F8                  FLD float ptr [EBP + -0x8]
0071819A  EB 15                     JMP 0x007181b1
LAB_0071819c:
0071819C  D9 45 08                  FLD float ptr [EBP + 0x8]
0071819F  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
007181A2  DF E0                     FNSTSW AX
007181A4  F6 C4 41                  TEST AH,0x41
007181A7  75 05                     JNZ 0x007181ae
007181A9  D9 45 08                  FLD float ptr [EBP + 0x8]
007181AC  EB 03                     JMP 0x007181b1
LAB_007181ae:
007181AE  D9 45 FC                  FLD float ptr [EBP + -0x4]
LAB_007181b1:
007181B1  D9 45 08                  FLD float ptr [EBP + 0x8]
007181B4  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
007181B7  DF E0                     FNSTSW AX
007181B9  F6 C4 01                  TEST AH,0x1
007181BC  74 05                     JZ 0x007181c3
007181BE  D9 45 08                  FLD float ptr [EBP + 0x8]
007181C1  EB 03                     JMP 0x007181c6
LAB_007181c3:
007181C3  D9 45 FC                  FLD float ptr [EBP + -0x4]
LAB_007181c6:
007181C6  D9 45 F8                  FLD float ptr [EBP + -0x8]
007181C9  D8 D9                     FCOMP
007181CB  DF E0                     FNSTSW AX
007181CD  F6 C4 01                  TEST AH,0x1
007181D0  DD D8                     FSTP ST0
007181D2  74 05                     JZ 0x007181d9
007181D4  D9 45 F8                  FLD float ptr [EBP + -0x8]
007181D7  EB 15                     JMP 0x007181ee
LAB_007181d9:
007181D9  D9 45 08                  FLD float ptr [EBP + 0x8]
007181DC  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
007181DF  DF E0                     FNSTSW AX
007181E1  F6 C4 01                  TEST AH,0x1
007181E4  74 05                     JZ 0x007181eb
007181E6  D9 45 08                  FLD float ptr [EBP + 0x8]
007181E9  EB 03                     JMP 0x007181ee
LAB_007181eb:
007181EB  D9 45 FC                  FLD float ptr [EBP + -0x4]
LAB_007181ee:
007181EE  D9 C0                     FLD ST0
007181F0  D8 C2                     FADD ST0,ST2
007181F2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007181F5  D9 55 F4                  FST float ptr [EBP + -0xc]
007181F8  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
007181FE  D9 C0                     FLD ST0
00718200  D9 59 04                  FSTP float ptr [ECX + 0x4]
00718203  D9 C2                     FLD ST2
00718205  D8 DA                     FCOMP ST2
00718207  DF E0                     FNSTSW AX
00718209  F6 C4 40                  TEST AH,0x40
0071820C  74 17                     JZ 0x00718225
0071820E  DD D8                     FSTP ST0
00718210  DD D8                     FSTP ST0
00718212  DD D8                     FSTP ST0
00718214  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
0071821B  C7 01 00 C0 79 44         MOV dword ptr [ECX],0x4479c000
00718221  8B E5                     MOV ESP,EBP
00718223  5D                        POP EBP
00718224  C3                        RET
LAB_00718225:
00718225  DC 1D C0 01 79 00         FCOMP double ptr [0x007901c0]
0071822B  D9 C1                     FLD ST1
0071822D  D8 E1                     FSUB ST0,ST1
0071822F  DF E0                     FNSTSW AX
00718231  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
00718234  F6 C4 41                  TEST AH,0x41
00718237  74 0D                     JZ 0x00718246
00718239  DD D8                     FSTP ST0
0071823B  D9 45 0C                  FLD float ptr [EBP + 0xc]
0071823E  D8 75 F4                  FDIV float ptr [EBP + -0xc]
00718241  D9 59 08                  FSTP float ptr [ECX + 0x8]
00718244  EB 12                     JMP 0x00718258
LAB_00718246:
00718246  D9 05 58 E2 79 00         FLD float ptr [0x0079e258]
0071824C  D8 E2                     FSUB ST0,ST2
0071824E  D8 E1                     FSUB ST0,ST1
00718250  D8 7D 0C                  FDIVR float ptr [EBP + 0xc]
00718253  D9 59 08                  FSTP float ptr [ECX + 0x8]
00718256  DD D8                     FSTP ST0
LAB_00718258:
00718258  D9 C0                     FLD ST0
0071825A  D8 65 F8                  FSUB float ptr [EBP + -0x8]
0071825D  D8 75 0C                  FDIV float ptr [EBP + 0xc]
00718260  D9 5D F0                  FSTP float ptr [EBP + -0x10]
00718263  D9 C0                     FLD ST0
00718265  D8 65 08                  FSUB float ptr [EBP + 0x8]
00718268  D8 75 0C                  FDIV float ptr [EBP + 0xc]
0071826B  D9 5D F4                  FSTP float ptr [EBP + -0xc]
0071826E  D9 C0                     FLD ST0
00718270  D8 65 FC                  FSUB float ptr [EBP + -0x4]
00718273  D8 75 0C                  FDIV float ptr [EBP + 0xc]
00718276  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
00718279  D9 45 F8                  FLD float ptr [EBP + -0x8]
0071827C  D8 D9                     FCOMP
0071827E  DF E0                     FNSTSW AX
00718280  F6 C4 40                  TEST AH,0x40
00718283  74 0A                     JZ 0x0071828f
00718285  DD D8                     FSTP ST0
00718287  D9 45 0C                  FLD float ptr [EBP + 0xc]
0071828A  D8 65 F4                  FSUB float ptr [EBP + -0xc]
0071828D  EB 36                     JMP 0x007182c5
LAB_0071828f:
0071828F  D9 45 08                  FLD float ptr [EBP + 0x8]
00718292  D8 D9                     FCOMP
00718294  DF E0                     FNSTSW AX
00718296  F6 C4 40                  TEST AH,0x40
00718299  74 10                     JZ 0x007182ab
0071829B  DD D8                     FSTP ST0
0071829D  D9 45 F0                  FLD float ptr [EBP + -0x10]
007182A0  D8 05 58 E2 79 00         FADD float ptr [0x0079e258]
007182A6  D8 65 0C                  FSUB float ptr [EBP + 0xc]
007182A9  EB 1A                     JMP 0x007182c5
LAB_007182ab:
007182AB  D9 45 FC                  FLD float ptr [EBP + -0x4]
007182AE  D8 D9                     FCOMP
007182B0  DF E0                     FNSTSW AX
007182B2  F6 C4 40                  TEST AH,0x40
007182B5  DD D8                     FSTP ST0
007182B7  74 0E                     JZ 0x007182c7
007182B9  D9 45 F4                  FLD float ptr [EBP + -0xc]
007182BC  D8 05 74 D0 79 00         FADD float ptr [0x0079d074]
007182C2  D8 65 F0                  FSUB float ptr [EBP + -0x10]
LAB_007182c5:
007182C5  D9 19                     FSTP float ptr [ECX]
LAB_007182c7:
007182C7  D9 01                     FLD float ptr [ECX]
007182C9  D8 0D 54 E2 79 00         FMUL float ptr [0x0079e254]
007182CF  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
007182D5  D9 11                     FST float ptr [ECX]
007182D7  DF E0                     FNSTSW AX
007182D9  F6 C4 01                  TEST AH,0x1
007182DC  74 0C                     JZ 0x007182ea
007182DE  D8 05 50 E2 79 00         FADD float ptr [0x0079e250]
007182E4  D9 19                     FSTP float ptr [ECX]
007182E6  8B E5                     MOV ESP,EBP
007182E8  5D                        POP EBP
007182E9  C3                        RET
LAB_007182ea:
007182EA  DD D8                     FSTP ST0
007182EC  8B E5                     MOV ESP,EBP
007182EE  5D                        POP EBP
007182EF  C3                        RET
