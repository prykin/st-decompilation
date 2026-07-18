FUN_0062bff0:
0062BFF0  55                        PUSH EBP
0062BFF1  8B EC                     MOV EBP,ESP
0062BFF3  83 EC 78                  SUB ESP,0x78
0062BFF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062BFF9  53                        PUSH EBX
0062BFFA  56                        PUSH ESI
0062BFFB  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0062BFFE  8B CE                     MOV ECX,ESI
0062C000  57                        PUSH EDI
0062C001  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0062C004  2B C8                     SUB ECX,EAX
0062C006  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062C009  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062C00C  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0062C00F  8B D7                     MOV EDX,EDI
0062C011  33 DB                     XOR EBX,EBX
0062C013  2B D1                     SUB EDX,ECX
0062C015  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062C018  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0062C01B  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0062C01E  2B 55 10                  SUB EDX,dword ptr [EBP + 0x10]
0062C021  D9 5D D4                  FSTP float ptr [EBP + -0x2c]
0062C024  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062C027  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0062C02A  D9 55 D8                  FST float ptr [EBP + -0x28]
0062C02D  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062C030  D9 45 D4                  FLD float ptr [EBP + -0x2c]
0062C033  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C036  DE C1                     FADDP
0062C038  D9 C1                     FLD ST1
0062C03A  D8 CA                     FMUL ST2
0062C03C  DE C1                     FADDP
0062C03E  D9 FA                     FSQRT
0062C040  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0062C043  D8 75 FC                  FDIV float ptr [EBP + -0x4]
0062C046  D9 5D D0                  FSTP float ptr [EBP + -0x30]
0062C049  D9 45 D4                  FLD float ptr [EBP + -0x2c]
0062C04C  D8 75 FC                  FDIV float ptr [EBP + -0x4]
0062C04F  D9 5D D4                  FSTP float ptr [EBP + -0x2c]
0062C052  D9 45 D8                  FLD float ptr [EBP + -0x28]
0062C055  D8 75 FC                  FDIV float ptr [EBP + -0x4]
0062C058  D9 5D D8                  FSTP float ptr [EBP + -0x28]
0062C05B  75 12                     JNZ 0x0062c06f
0062C05D  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0062C060  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0062C063  C7 45 F0 00 00 80 3F      MOV dword ptr [EBP + -0x10],0x3f800000
0062C06A  E9 D4 00 00 00            JMP 0x0062c143
LAB_0062c06f:
0062C06F  2B C6                     SUB EAX,ESI
0062C071  2B CF                     SUB ECX,EDI
0062C073  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062C076  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0062C079  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062C07C  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0062C07F  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0062C082  D9 55 F4                  FST float ptr [EBP + -0xc]
0062C085  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C088  D9 45 F8                  FLD float ptr [EBP + -0x8]
0062C08B  D8 4D D0                  FMUL float ptr [EBP + -0x30]
0062C08E  DE C1                     FADDP
0062C090  D9 55 FC                  FST float ptr [EBP + -0x4]
0062C093  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0062C099  DF E0                     FNSTSW AX
0062C09B  F6 C4 40                  TEST AH,0x40
0062C09E  0F 85 5B 01 00 00         JNZ 0x0062c1ff
0062C0A4  DB 45 10                  FILD dword ptr [EBP + 0x10]
0062C0A7  DB 45 0C                  FILD dword ptr [EBP + 0xc]
0062C0AA  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062C0AD  DB 45 1C                  FILD dword ptr [EBP + 0x1c]
0062C0B0  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
0062C0B3  DB 45 18                  FILD dword ptr [EBP + 0x18]
0062C0B6  D9 5D 10                  FSTP float ptr [EBP + 0x10]
0062C0B9  DB 45 14                  FILD dword ptr [EBP + 0x14]
0062C0BC  D9 C1                     FLD ST1
0062C0BE  D8 4D D0                  FMUL float ptr [EBP + -0x30]
0062C0C1  D9 C3                     FLD ST3
0062C0C3  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C0C6  DE C1                     FADDP
0062C0C8  D9 C4                     FLD ST4
0062C0CA  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062C0CD  DE C1                     FADDP
0062C0CF  D9 E0                     FCHS
0062C0D1  D9 E0                     FCHS
0062C0D3  D9 C1                     FLD ST1
0062C0D5  D8 4D D0                  FMUL float ptr [EBP + -0x30]
0062C0D8  D9 45 10                  FLD float ptr [EBP + 0x10]
0062C0DB  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C0DE  DE C1                     FADDP
0062C0E0  D9 45 0C                  FLD float ptr [EBP + 0xc]
0062C0E3  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062C0E6  DE C1                     FADDP
0062C0E8  DE E9                     FSUBP
0062C0EA  D8 75 FC                  FDIV float ptr [EBP + -0x4]
0062C0ED  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0062C0F0  D9 45 F8                  FLD float ptr [EBP + -0x8]
0062C0F3  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0062C0F6  D8 C1                     FADD ST0,ST1
0062C0F8  D8 E2                     FSUB ST0,ST2
0062C0FA  D9 5D E8                  FSTP float ptr [EBP + -0x18]
0062C0FD  DD D8                     FSTP ST0
0062C0FF  DD D8                     FSTP ST0
0062C101  D9 45 F4                  FLD float ptr [EBP + -0xc]
0062C104  D8 4D FC                  FMUL float ptr [EBP + -0x4]
0062C107  D8 45 10                  FADD float ptr [EBP + 0x10]
0062C10A  D8 E1                     FSUB ST0,ST1
0062C10C  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0062C10F  DD D8                     FSTP ST0
0062C111  D8 6D 0C                  FSUBR float ptr [EBP + 0xc]
0062C114  D9 C0                     FLD ST0
0062C116  D8 C9                     FMUL ST1
0062C118  D9 45 EC                  FLD float ptr [EBP + -0x14]
0062C11B  D8 4D EC                  FMUL float ptr [EBP + -0x14]
0062C11E  DE C1                     FADDP
0062C120  D9 45 E8                  FLD float ptr [EBP + -0x18]
0062C123  D8 4D E8                  FMUL float ptr [EBP + -0x18]
0062C126  DE C1                     FADDP
0062C128  D9 FA                     FSQRT
0062C12A  D9 45 E8                  FLD float ptr [EBP + -0x18]
0062C12D  D8 F1                     FDIV ST0,ST1
0062C12F  D9 5D E8                  FSTP float ptr [EBP + -0x18]
0062C132  D9 45 EC                  FLD float ptr [EBP + -0x14]
0062C135  D8 F1                     FDIV ST0,ST1
0062C137  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0062C13A  D9 C9                     FXCH
0062C13C  D8 F1                     FDIV ST0,ST1
0062C13E  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0062C141  DD D8                     FSTP ST0
LAB_0062c143:
0062C143  D9 45 EC                  FLD float ptr [EBP + -0x14]
0062C146  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062C149  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062C14C  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C14F  DE E9                     FSUBP
0062C151  D9 5D DC                  FSTP float ptr [EBP + -0x24]
0062C154  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062C157  D8 4D D0                  FMUL float ptr [EBP + -0x30]
0062C15A  D9 45 E8                  FLD float ptr [EBP + -0x18]
0062C15D  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062C160  DE E9                     FSUBP
0062C162  D9 5D E0                  FSTP float ptr [EBP + -0x20]
0062C165  D9 45 E8                  FLD float ptr [EBP + -0x18]
0062C168  D8 4D D4                  FMUL float ptr [EBP + -0x2c]
0062C16B  D9 45 EC                  FLD float ptr [EBP + -0x14]
0062C16E  D8 4D D0                  FMUL float ptr [EBP + -0x30]
0062C171  DE E9                     FSUBP
0062C173  D9 5D E4                  FSTP float ptr [EBP + -0x1c]
0062C176  D9 45 24                  FLD float ptr [EBP + 0x24]
0062C179  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0062C17F  DF E0                     FNSTSW AX
0062C181  F6 C4 40                  TEST AH,0x40
0062C184  75 60                     JNZ 0x0062c1e6
0062C186  D9 45 24                  FLD float ptr [EBP + 0x24]
0062C189  D9 FF                     FCOS
0062C18B  8D 45 88                  LEA EAX,[EBP + -0x78]
0062C18E  8D 4D D0                  LEA ECX,[EBP + -0x30]
0062C191  50                        PUSH EAX
0062C192  8D 55 AC                  LEA EDX,[EBP + -0x54]
0062C195  51                        PUSH ECX
0062C196  52                        PUSH EDX
0062C197  C7 45 AC 00 00 80 3F      MOV dword ptr [EBP + -0x54],0x3f800000
0062C19E  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
0062C1A5  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
0062C1AC  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
0062C1B3  C7 45 C4 00 00 00 00      MOV dword ptr [EBP + -0x3c],0x0
0062C1BA  D9 45 24                  FLD float ptr [EBP + 0x24]
0062C1BD  D9 FE                     FSIN
0062C1BF  D9 C1                     FLD ST1
0062C1C1  D9 5D BC                  FSTP float ptr [EBP + -0x44]
0062C1C4  D9 C0                     FLD ST0
0062C1C6  D9 E0                     FCHS
0062C1C8  D9 5D C0                  FSTP float ptr [EBP + -0x40]
0062C1CB  D9 5D C8                  FSTP float ptr [EBP + -0x38]
0062C1CE  D9 5D CC                  FSTP float ptr [EBP + -0x34]
0062C1D1  E8 A1 72 DD FF            CALL 0x00403477
0062C1D6  B9 09 00 00 00            MOV ECX,0x9
0062C1DB  8D 75 88                  LEA ESI,[EBP + -0x78]
0062C1DE  8D 7D D0                  LEA EDI,[EBP + -0x30]
0062C1E1  83 C4 0C                  ADD ESP,0xc
0062C1E4  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_0062c1e6:
0062C1E6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062C1E9  8D 4D D0                  LEA ECX,[EBP + -0x30]
0062C1EC  50                        PUSH EAX
0062C1ED  51                        PUSH ECX
0062C1EE  E8 D4 77 DD FF            CALL 0x004039c7
0062C1F3  83 C4 08                  ADD ESP,0x8
0062C1F6  85 C0                     TEST EAX,EAX
0062C1F8  B8 01 00 00 00            MOV EAX,0x1
0062C1FD  75 02                     JNZ 0x0062c201
LAB_0062c1ff:
0062C1FF  8B C3                     MOV EAX,EBX
LAB_0062c201:
0062C201  5F                        POP EDI
0062C202  5E                        POP ESI
0062C203  5B                        POP EBX
0062C204  8B E5                     MOV ESP,EBP
0062C206  5D                        POP EBP
0062C207  C3                        RET
