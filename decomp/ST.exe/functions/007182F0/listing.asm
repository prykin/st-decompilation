FUN_007182f0:
007182F0  55                        PUSH EBP
007182F1  8B EC                     MOV EBP,ESP
007182F3  D9 45 08                  FLD float ptr [EBP + 0x8]
007182F6  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
007182FC  DF E0                     FNSTSW AX
007182FE  F6 C4 01                  TEST AH,0x1
00718301  74 0C                     JZ 0x0071830f
00718303  D9 45 08                  FLD float ptr [EBP + 0x8]
00718306  D8 05 50 E2 79 00         FADD float ptr [0x0079e250]
0071830C  D9 5D 08                  FSTP float ptr [EBP + 0x8]
LAB_0071830f:
0071830F  D9 45 08                  FLD float ptr [EBP + 0x8]
00718312  D8 1D 50 E2 79 00         FCOMP float ptr [0x0079e250]
00718318  DF E0                     FNSTSW AX
0071831A  F6 C4 41                  TEST AH,0x41
0071831D  75 0C                     JNZ 0x0071832b
0071831F  D9 45 08                  FLD float ptr [EBP + 0x8]
00718322  D8 25 50 E2 79 00         FSUB float ptr [0x0079e250]
00718328  D9 5D 08                  FSTP float ptr [EBP + 0x8]
LAB_0071832b:
0071832B  D9 45 08                  FLD float ptr [EBP + 0x8]
0071832E  D8 1D 54 E2 79 00         FCOMP float ptr [0x0079e254]
00718334  DF E0                     FNSTSW AX
00718336  F6 C4 01                  TEST AH,0x1
00718339  74 14                     JZ 0x0071834f
0071833B  D9 45 10                  FLD float ptr [EBP + 0x10]
0071833E  D8 65 0C                  FSUB float ptr [EBP + 0xc]
00718341  D8 4D 08                  FMUL float ptr [EBP + 0x8]
00718344  D8 0D 68 E2 79 00         FMUL float ptr [0x0079e268]
0071834A  D8 45 0C                  FADD float ptr [EBP + 0xc]
0071834D  EB 13                     JMP 0x00718362
LAB_0071834f:
0071834F  D9 45 08                  FLD float ptr [EBP + 0x8]
00718352  D8 1D 64 E2 79 00         FCOMP float ptr [0x0079e264]
00718358  DF E0                     FNSTSW AX
0071835A  F6 C4 01                  TEST AH,0x1
0071835D  74 15                     JZ 0x00718374
0071835F  D9 45 10                  FLD float ptr [EBP + 0x10]
LAB_00718362:
00718362  D9 45 08                  FLD float ptr [EBP + 0x8]
00718365  D8 1D 64 E2 79 00         FCOMP float ptr [0x0079e264]
0071836B  DF E0                     FNSTSW AX
0071836D  F6 C4 01                  TEST AH,0x1
00718370  75 2C                     JNZ 0x0071839e
00718372  DD D8                     FSTP ST0
LAB_00718374:
00718374  D9 45 08                  FLD float ptr [EBP + 0x8]
00718377  D8 1D 60 E2 79 00         FCOMP float ptr [0x0079e260]
0071837D  DF E0                     FNSTSW AX
0071837F  F6 C4 01                  TEST AH,0x1
00718382  74 2C                     JZ 0x007183b0
00718384  D9 45 10                  FLD float ptr [EBP + 0x10]
00718387  D8 65 0C                  FSUB float ptr [EBP + 0xc]
0071838A  D9 05 60 E2 79 00         FLD float ptr [0x0079e260]
00718390  D8 65 08                  FSUB float ptr [EBP + 0x8]
00718393  DE C9                     FMULP
00718395  D8 0D 68 E2 79 00         FMUL float ptr [0x0079e268]
0071839B  D8 45 0C                  FADD float ptr [EBP + 0xc]
LAB_0071839e:
0071839E  D9 45 08                  FLD float ptr [EBP + 0x8]
007183A1  D8 1D 60 E2 79 00         FCOMP float ptr [0x0079e260]
007183A7  DF E0                     FNSTSW AX
007183A9  F6 C4 01                  TEST AH,0x1
007183AC  75 05                     JNZ 0x007183b3
007183AE  DD D8                     FSTP ST0
LAB_007183b0:
007183B0  D9 45 0C                  FLD float ptr [EBP + 0xc]
LAB_007183b3:
007183B3  5D                        POP EBP
007183B4  C3                        RET
