FUN_0062bbc0:
0062BBC0  55                        PUSH EBP
0062BBC1  8B EC                     MOV EBP,ESP
0062BBC3  83 EC 28                  SUB ESP,0x28
0062BBC6  56                        PUSH ESI
0062BBC7  57                        PUSH EDI
0062BBC8  6A 6D                     PUSH 0x6d
0062BBCA  33 F6                     XOR ESI,ESI
0062BBCC  E8 9F F0 07 00            CALL 0x006aac70
0062BBD1  8B F8                     MOV EDI,EAX
0062BBD3  B9 1B 00 00 00            MOV ECX,0x1b
0062BBD8  33 C0                     XOR EAX,EAX
0062BBDA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0062BBDD  F3 AB                     STOSD.REP ES:EDI
0062BBDF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062BBE2  AA                        STOSB ES:EDI
0062BBE3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062BBE6  89 08                     MOV dword ptr [EAX],ECX
0062BBE8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062BBEB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062BBEE  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0062BBF1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062BBF4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062BBF7  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0062BBFA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062BBFD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0062BC00  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
0062BC03  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062BC06  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062BC09  89 42 34                  MOV dword ptr [EDX + 0x34],EAX
0062BC0C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062BC0F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0062BC12  89 51 38                  MOV dword ptr [ECX + 0x38],EDX
0062BC15  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062BC18  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0062BC1B  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0062BC1E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062BC21  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0062BC24  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
0062BC27  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062BC2A  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0062BC2D  C6 41 3C 03               MOV byte ptr [ECX + 0x3c],0x3
0062BC31  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062BC34  89 42 3D                  MOV dword ptr [EDX + 0x3d],EAX
0062BC37  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062BC3A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0062BC3D  89 51 41                  MOV dword ptr [ECX + 0x41],EDX
0062BC40  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062BC43  89 70 45                  MOV dword ptr [EAX + 0x45],ESI
0062BC46  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062BC49  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0062BC4C  8B 39                     MOV EDI,dword ptr [ECX]
0062BC4E  2B D7                     SUB EDX,EDI
0062BC50  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0062BC53  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062BC56  D9 5D D8                  FSTP float ptr [EBP + -0x28]
0062BC59  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
0062BC5C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0062BC5F  2B C2                     SUB EAX,EDX
0062BC61  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062BC64  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062BC67  D9 5D DC                  FSTP float ptr [EBP + -0x24]
0062BC6A  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0062BC6D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0062BC70  2B D0                     SUB EDX,EAX
0062BC72  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0062BC75  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062BC78  D9 C0                     FLD ST0
0062BC7A  D8 C9                     FMUL ST1
0062BC7C  D9 45 DC                  FLD float ptr [EBP + -0x24]
0062BC7F  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BC82  DE C1                     FADDP
0062BC84  D9 45 D8                  FLD float ptr [EBP + -0x28]
0062BC87  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BC8A  DE C1                     FADDP
0062BC8C  D9 FA                     FSQRT
0062BC8E  D9 45 D8                  FLD float ptr [EBP + -0x28]
0062BC91  D8 F1                     FDIV ST0,ST1
0062BC93  D9 5D D8                  FSTP float ptr [EBP + -0x28]
0062BC96  D9 45 DC                  FLD float ptr [EBP + -0x24]
0062BC99  D8 F1                     FDIV ST0,ST1
0062BC9B  D9 5D DC                  FSTP float ptr [EBP + -0x24]
0062BC9E  D9 C9                     FXCH
0062BCA0  D8 F1                     FDIV ST0,ST1
0062BCA2  D9 5D E0                  FSTP float ptr [EBP + -0x20]
0062BCA5  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0062BCA8  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0062BCAB  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0062BCAE  2B C2                     SUB EAX,EDX
0062BCB0  DD D8                     FSTP ST0
0062BCB2  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
0062BCB5  75 12                     JNZ 0x0062bcc9
0062BCB7  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0062BCBA  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0062BCBD  C7 45 F8 00 00 80 3F      MOV dword ptr [EBP + -0x8],0x3f800000
0062BCC4  E9 EC 00 00 00            JMP 0x0062bdb5
LAB_0062bcc9:
0062BCC9  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0062BCCC  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
0062BCCF  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
0062BCD2  2B C2                     SUB EAX,EDX
0062BCD4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062BCD7  8B 01                     MOV EAX,dword ptr [ECX]
0062BCD9  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062BCDC  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0062BCDF  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0062BCE2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0062BCE5  2B C2                     SUB EAX,EDX
0062BCE7  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
0062BCEA  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0062BCED  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0062BCF0  DB 45 08                  FILD dword ptr [EBP + 0x8]
0062BCF3  D9 C0                     FLD ST0
0062BCF5  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BCF8  D9 45 0C                  FLD float ptr [EBP + 0xc]
0062BCFB  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BCFE  DE C1                     FADDP
0062BD00  D9 55 08                  FST float ptr [EBP + 0x8]
0062BD03  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
0062BD09  DF E0                     FNSTSW AX
0062BD0B  F6 C4 40                  TEST AH,0x40
0062BD0E  0F 85 F1 00 00 00         JNZ 0x0062be05
0062BD14  DB 45 10                  FILD dword ptr [EBP + 0x10]
0062BD17  DB 45 14                  FILD dword ptr [EBP + 0x14]
0062BD1A  DB 45 18                  FILD dword ptr [EBP + 0x18]
0062BD1D  DB 45 1C                  FILD dword ptr [EBP + 0x1c]
0062BD20  D9 5D 10                  FSTP float ptr [EBP + 0x10]
0062BD23  DB 45 24                  FILD dword ptr [EBP + 0x24]
0062BD26  D8 4D E0                  FMUL float ptr [EBP + -0x20]
0062BD29  DB 45 20                  FILD dword ptr [EBP + 0x20]
0062BD2C  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BD2F  DE C1                     FADDP
0062BD31  D9 C3                     FLD ST3
0062BD33  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BD36  DE C1                     FADDP
0062BD38  D9 E0                     FCHS
0062BD3A  D9 E0                     FCHS
0062BD3C  D9 45 10                  FLD float ptr [EBP + 0x10]
0062BD3F  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BD42  D9 C2                     FLD ST2
0062BD44  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BD47  DE C1                     FADDP
0062BD49  D9 C3                     FLD ST3
0062BD4B  D8 4D E0                  FMUL float ptr [EBP + -0x20]
0062BD4E  DE C1                     FADDP
0062BD50  DE E9                     FSUBP
0062BD52  D8 75 08                  FDIV float ptr [EBP + 0x8]
0062BD55  D9 5D 08                  FSTP float ptr [EBP + 0x8]
0062BD58  D9 45 0C                  FLD float ptr [EBP + 0xc]
0062BD5B  D8 4D 08                  FMUL float ptr [EBP + 0x8]
0062BD5E  D8 C1                     FADD ST0,ST1
0062BD60  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
0062BD63  DD D8                     FSTP ST0
0062BD65  D9 5D 14                  FSTP float ptr [EBP + 0x14]
0062BD68  D9 C9                     FXCH
0062BD6A  D8 4D 08                  FMUL float ptr [EBP + 0x8]
0062BD6D  D8 45 10                  FADD float ptr [EBP + 0x10]
0062BD70  D8 E1                     FSUB ST0,ST1
0062BD72  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0062BD75  DD D8                     FSTP ST0
0062BD77  DB 41 04                  FILD dword ptr [ECX + 0x4]
0062BD7A  D8 6D 0C                  FSUBR float ptr [EBP + 0xc]
0062BD7D  D9 5D F4                  FSTP float ptr [EBP + -0xc]
0062BD80  DB 41 08                  FILD dword ptr [ECX + 0x8]
0062BD83  D8 6D 14                  FSUBR float ptr [EBP + 0x14]
0062BD86  D9 C0                     FLD ST0
0062BD88  D8 C9                     FMUL ST1
0062BD8A  D9 45 F4                  FLD float ptr [EBP + -0xc]
0062BD8D  D8 4D F4                  FMUL float ptr [EBP + -0xc]
0062BD90  DE C1                     FADDP
0062BD92  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062BD95  D8 4D F0                  FMUL float ptr [EBP + -0x10]
0062BD98  DE C1                     FADDP
0062BD9A  D9 FA                     FSQRT
0062BD9C  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062BD9F  D8 F1                     FDIV ST0,ST1
0062BDA1  D9 5D F0                  FSTP float ptr [EBP + -0x10]
0062BDA4  D9 45 F4                  FLD float ptr [EBP + -0xc]
0062BDA7  D8 F1                     FDIV ST0,ST1
0062BDA9  D9 5D F4                  FSTP float ptr [EBP + -0xc]
0062BDAC  D9 C9                     FXCH
0062BDAE  D8 F1                     FDIV ST0,ST1
0062BDB0  D9 5D F8                  FSTP float ptr [EBP + -0x8]
0062BDB3  DD D8                     FSTP ST0
LAB_0062bdb5:
0062BDB5  D9 45 F4                  FLD float ptr [EBP + -0xc]
0062BDB8  D8 4D E0                  FMUL float ptr [EBP + -0x20]
0062BDBB  D9 45 F8                  FLD float ptr [EBP + -0x8]
0062BDBE  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BDC1  83 C1 49                  ADD ECX,0x49
0062BDC4  8D 45 D8                  LEA EAX,[EBP + -0x28]
0062BDC7  51                        PUSH ECX
0062BDC8  50                        PUSH EAX
0062BDC9  DE E9                     FSUBP
0062BDCB  D9 5D E4                  FSTP float ptr [EBP + -0x1c]
0062BDCE  D9 45 F8                  FLD float ptr [EBP + -0x8]
0062BDD1  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BDD4  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062BDD7  D8 4D E0                  FMUL float ptr [EBP + -0x20]
0062BDDA  DE E9                     FSUBP
0062BDDC  D9 5D E8                  FSTP float ptr [EBP + -0x18]
0062BDDF  D9 45 F0                  FLD float ptr [EBP + -0x10]
0062BDE2  D8 4D DC                  FMUL float ptr [EBP + -0x24]
0062BDE5  D9 45 F4                  FLD float ptr [EBP + -0xc]
0062BDE8  D8 4D D8                  FMUL float ptr [EBP + -0x28]
0062BDEB  DE E9                     FSUBP
0062BDED  D9 5D EC                  FSTP float ptr [EBP + -0x14]
0062BDF0  E8 D2 7B DD FF            CALL 0x004039c7
0062BDF5  83 C4 08                  ADD ESP,0x8
0062BDF8  85 C0                     TEST EAX,EAX
0062BDFA  74 14                     JZ 0x0062be10
0062BDFC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0062BDFF  5F                        POP EDI
0062BE00  5E                        POP ESI
0062BE01  8B E5                     MOV ESP,EBP
0062BE03  5D                        POP EBP
0062BE04  C3                        RET
LAB_0062be05:
0062BE05  8D 4D FC                  LEA ECX,[EBP + -0x4]
0062BE08  51                        PUSH ECX
0062BE09  DD D8                     FSTP ST0
0062BE0B  E8 50 F2 07 00            CALL 0x006ab060
LAB_0062be10:
0062BE10  8B C6                     MOV EAX,ESI
0062BE12  5F                        POP EDI
0062BE13  5E                        POP ESI
0062BE14  8B E5                     MOV ESP,EBP
0062BE16  5D                        POP EBP
0062BE17  C3                        RET
