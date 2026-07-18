FUN_005f3b30:
005F3B30  55                        PUSH EBP
005F3B31  8B EC                     MOV EBP,ESP
005F3B33  83 EC 10                  SUB ESP,0x10
005F3B36  D9 45 08                  FLD float ptr [EBP + 0x8]
005F3B39  D8 4D 08                  FMUL float ptr [EBP + 0x8]
005F3B3C  33 C9                     XOR ECX,ECX
005F3B3E  D9 C0                     FLD ST0
005F3B40  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
005F3B46  D9 5D F0                  FSTP float ptr [EBP + -0x10]
005F3B49  D9 C0                     FLD ST0
005F3B4B  D8 4D 08                  FMUL float ptr [EBP + 0x8]
005F3B4E  D8 0D 88 C5 79 00         FMUL float ptr [0x0079c588]
005F3B54  D9 45 08                  FLD float ptr [EBP + 0x8]
005F3B57  D8 4D 0C                  FMUL float ptr [EBP + 0xc]
005F3B5A  D8 6D 10                  FSUBR float ptr [EBP + 0x10]
005F3B5D  D9 5D 10                  FSTP float ptr [EBP + 0x10]
005F3B60  D9 45 F0                  FLD float ptr [EBP + -0x10]
005F3B63  D8 CA                     FMUL ST2
005F3B65  D9 C1                     FLD ST1
005F3B67  D8 4D 08                  FMUL float ptr [EBP + 0x8]
005F3B6A  DE E9                     FSUBP
005F3B6C  D9 55 0C                  FST float ptr [EBP + 0xc]
005F3B6F  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
005F3B75  DF E0                     FNSTSW AX
005F3B77  F6 C4 40                  TEST AH,0x40
005F3B7A  75 35                     JNZ 0x005f3bb1
005F3B7C  D9 45 10                  FLD float ptr [EBP + 0x10]
005F3B7F  D8 CA                     FMUL ST2
005F3B81  D9 C9                     FXCH
005F3B83  D8 4D 14                  FMUL float ptr [EBP + 0x14]
005F3B86  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005F3B89  DE E9                     FSUBP
005F3B8B  D8 75 0C                  FDIV float ptr [EBP + 0xc]
005F3B8E  D9 18                     FSTP float ptr [EAX]
005F3B90  DD D8                     FSTP ST0
005F3B92  D9 45 F0                  FLD float ptr [EBP + -0x10]
005F3B95  D8 4D 14                  FMUL float ptr [EBP + 0x14]
005F3B98  D9 45 10                  FLD float ptr [EBP + 0x10]
005F3B9B  D8 4D 08                  FMUL float ptr [EBP + 0x8]
005F3B9E  DE E9                     FSUBP
005F3BA0  D8 75 0C                  FDIV float ptr [EBP + 0xc]
005F3BA3  D9 58 04                  FSTP float ptr [EAX + 0x4]
005F3BA6  B8 01 00 00 00            MOV EAX,0x1
005F3BAB  8B E5                     MOV ESP,EBP
005F3BAD  5D                        POP EBP
005F3BAE  C2 14 00                  RET 0x14
LAB_005f3bb1:
005F3BB1  DD D8                     FSTP ST0
005F3BB3  DD D8                     FSTP ST0
005F3BB5  8B C1                     MOV EAX,ECX
005F3BB7  8B E5                     MOV ESP,EBP
005F3BB9  5D                        POP EBP
005F3BBA  C2 14 00                  RET 0x14
