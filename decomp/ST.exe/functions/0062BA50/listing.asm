FUN_0062ba50:
0062BA50  55                        PUSH EBP
0062BA51  8B EC                     MOV EBP,ESP
0062BA53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062BA56  33 D2                     XOR EDX,EDX
0062BA58  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BA5B  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BA5E  D9 41 14                  FLD float ptr [ECX + 0x14]
0062BA61  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BA64  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BA67  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BA6A  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BA6D  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BA70  D8 49 08                  FMUL float ptr [ECX + 0x8]
0062BA73  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BA76  DE E9                     FSUBP
0062BA78  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BA7B  D8 49 14                  FMUL float ptr [ECX + 0x14]
0062BA7E  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BA81  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BA84  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BA87  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BA8A  DE E9                     FSUBP
0062BA8C  DE C1                     FADDP
0062BA8E  D9 C2                     FLD ST2
0062BA90  D8 09                     FMUL float ptr [ECX]
0062BA92  D9 C2                     FLD ST2
0062BA94  D8 09                     FMUL float ptr [ECX]
0062BA96  DE E9                     FSUBP
0062BA98  DE C1                     FADDP
0062BA9A  D9 55 08                  FST float ptr [EBP + 0x8]
0062BA9D  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0062BAA3  DF E0                     FNSTSW AX
0062BAA5  F6 C4 40                  TEST AH,0x40
0062BAA8  0F 85 B9 00 00 00         JNZ 0x0062bb67
0062BAAE  D9 C9                     FXCH
0062BAB0  D8 E1                     FSUB ST0,ST1
0062BAB2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062BAB5  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BAB8  D9 18                     FSTP float ptr [EAX]
0062BABA  DD D8                     FSTP ST0
0062BABC  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BABF  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BAC2  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BAC5  D8 49 14                  FMUL float ptr [ECX + 0x14]
0062BAC8  DE E9                     FSUBP
0062BACA  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BACD  D9 E0                     FCHS
0062BACF  D9 58 04                  FSTP float ptr [EAX + 0x4]
0062BAD2  D9 41 0C                  FLD float ptr [ECX + 0xc]
0062BAD5  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BAD8  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BADB  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BADE  DE E9                     FSUBP
0062BAE0  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BAE3  D9 58 08                  FSTP float ptr [EAX + 0x8]
0062BAE6  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BAE9  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BAEC  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BAEF  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BAF2  DE E9                     FSUBP
0062BAF4  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BAF7  D9 E0                     FCHS
0062BAF9  D9 58 0C                  FSTP float ptr [EAX + 0xc]
0062BAFC  D9 41 20                  FLD float ptr [ECX + 0x20]
0062BAFF  D8 09                     FMUL float ptr [ECX]
0062BB01  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BB04  D8 49 08                  FMUL float ptr [ECX + 0x8]
0062BB07  DE E9                     FSUBP
0062BB09  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BB0C  D9 58 10                  FSTP float ptr [EAX + 0x10]
0062BB0F  D9 01                     FLD float ptr [ECX]
0062BB11  D8 49 1C                  FMUL float ptr [ECX + 0x1c]
0062BB14  D9 41 18                  FLD float ptr [ECX + 0x18]
0062BB17  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BB1A  DE E9                     FSUBP
0062BB1C  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BB1F  D9 E0                     FCHS
0062BB21  D9 58 14                  FSTP float ptr [EAX + 0x14]
0062BB24  D9 41 14                  FLD float ptr [ECX + 0x14]
0062BB27  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BB2A  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BB2D  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BB30  DE E9                     FSUBP
0062BB32  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BB35  D9 58 18                  FSTP float ptr [EAX + 0x18]
0062BB38  D9 41 14                  FLD float ptr [ECX + 0x14]
0062BB3B  D8 09                     FMUL float ptr [ECX]
0062BB3D  D9 41 08                  FLD float ptr [ECX + 0x8]
0062BB40  D8 49 0C                  FMUL float ptr [ECX + 0xc]
0062BB43  DE E9                     FSUBP
0062BB45  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BB48  D9 E0                     FCHS
0062BB4A  D9 58 1C                  FSTP float ptr [EAX + 0x1c]
0062BB4D  D9 01                     FLD float ptr [ECX]
0062BB4F  D8 49 10                  FMUL float ptr [ECX + 0x10]
0062BB52  D9 41 0C                  FLD float ptr [ECX + 0xc]
0062BB55  D8 49 04                  FMUL float ptr [ECX + 0x4]
0062BB58  DE E9                     FSUBP
0062BB5A  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BB5D  D9 58 20                  FSTP float ptr [EAX + 0x20]
0062BB60  B8 01 00 00 00            MOV EAX,0x1
0062BB65  5D                        POP EBP
0062BB66  C3                        RET
LAB_0062bb67:
0062BB67  DD D8                     FSTP ST0
0062BB69  DD D8                     FSTP ST0
0062BB6B  8B C2                     MOV EAX,EDX
0062BB6D  5D                        POP EBP
0062BB6E  C3                        RET
