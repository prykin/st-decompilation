FUN_004aa450:
004AA450  55                        PUSH EBP
004AA451  8B EC                     MOV EBP,ESP
004AA453  83 EC 0C                  SUB ESP,0xc
004AA456  A1 50 67 80 00            MOV EAX,[0x00806750]
004AA45B  56                        PUSH ESI
004AA45C  57                        PUSH EDI
004AA45D  8B F9                     MOV EDI,ECX
004AA45F  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AA462  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AA466  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AA469  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AA46E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA471  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AA474  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AA477  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AA47C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA482  83 F8 03                  CMP EAX,0x3
004AA485  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AA488  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA48B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA491  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AA494  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AA49A  77 37                     JA 0x004aa4d3
switchD_004aa49c::switchD:
004AA49C  FF 24 85 10 A6 4A 00      JMP dword ptr [EAX*0x4 + 0x4aa610]
switchD_004aa49c::caseD_0:
004AA4A3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4A6  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA4A9  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA4AC  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA4AF  EB 22                     JMP 0x004aa4d3
switchD_004aa49c::caseD_1:
004AA4B1  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4B4  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA4B7  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA4BA  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA4BD  EB 14                     JMP 0x004aa4d3
switchD_004aa49c::caseD_2:
004AA4BF  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4C2  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA4C5  EB 06                     JMP 0x004aa4cd
switchD_004aa49c::caseD_3:
004AA4C7  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4CA  D8 45 08                  FADD float ptr [EBP + 0x8]
LAB_004aa4cd:
004AA4CD  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA4D0  D8 65 08                  FSUB float ptr [EBP + 0x8]
switchD_004aa49c::default:
004AA4D3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4D6  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AA4DC  DF E0                     FNSTSW AX
004AA4DE  F6 C4 01                  TEST AH,0x1
004AA4E1  74 07                     JZ 0x004aa4ea
004AA4E3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aa4ea:
004AA4EA  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA4ED  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AA4F0  DF E0                     FNSTSW AX
004AA4F2  F6 C4 41                  TEST AH,0x41
004AA4F5  75 06                     JNZ 0x004aa4fd
004AA4F7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AA4FA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aa4fd:
004AA4FD  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AA503  DF E0                     FNSTSW AX
004AA505  F6 C4 01                  TEST AH,0x1
004AA508  74 08                     JZ 0x004aa512
004AA50A  DD D8                     FSTP ST0
004AA50C  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aa512:
004AA512  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AA515  DF E0                     FNSTSW AX
004AA517  F6 C4 41                  TEST AH,0x41
004AA51A  75 05                     JNZ 0x004aa521
004AA51C  DD D8                     FSTP ST0
004AA51E  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aa521:
004AA521  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AA527  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA52D  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA533  DF E0                     FNSTSW AX
004AA535  F6 C4 41                  TEST AH,0x41
004AA538  75 08                     JNZ 0x004aa542
004AA53A  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA540  EB 06                     JMP 0x004aa548
LAB_004aa542:
004AA542  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa548:
004AA548  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA54B  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AA551  E8 32 3D 28 00            CALL 0x0072e288
004AA556  99                        CDQ
004AA557  33 C2                     XOR EAX,EDX
004AA559  2B C2                     SUB EAX,EDX
004AA55B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA55E  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA561  D9 C9                     FXCH
004AA563  DE D9                     FCOMPP
004AA565  DF E0                     FNSTSW AX
004AA567  F6 C4 41                  TEST AH,0x41
004AA56A  75 50                     JNZ 0x004aa5bc
004AA56C  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA572  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA578  DF E0                     FNSTSW AX
004AA57A  F6 C4 41                  TEST AH,0x41
004AA57D  75 08                     JNZ 0x004aa587
004AA57F  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA585  EB 06                     JMP 0x004aa58d
LAB_004aa587:
004AA587  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa58d:
004AA58D  D9 C1                     FLD ST1
004AA58F  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AA595  E8 EE 3C 28 00            CALL 0x0072e288
004AA59A  99                        CDQ
004AA59B  33 C2                     XOR EAX,EDX
004AA59D  2B C2                     SUB EAX,EDX
004AA59F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA5A2  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA5A5  D9 C9                     FXCH
004AA5A7  DE D9                     FCOMPP
004AA5A9  DF E0                     FNSTSW AX
004AA5AB  F6 C4 41                  TEST AH,0x41
004AA5AE  75 0C                     JNZ 0x004aa5bc
004AA5B0  5F                        POP EDI
004AA5B1  33 C0                     XOR EAX,EAX
004AA5B3  DD D8                     FSTP ST0
004AA5B5  5E                        POP ESI
004AA5B6  8B E5                     MOV ESP,EBP
004AA5B8  5D                        POP EBP
004AA5B9  C2 04 00                  RET 0x4
LAB_004aa5bc:
004AA5BC  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AA5C2  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA5C5  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA5CB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AA5CE  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AA5D4  E8 AF 3C 28 00            CALL 0x0072e288
004AA5D9  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA5DF  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AA5E4  E8 9F 3C 28 00            CALL 0x0072e288
004AA5E9  6A 00                     PUSH 0x0
004AA5EB  8B CF                     MOV ECX,EDI
004AA5ED  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AA5F2  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AA5FC  E8 46 AF F5 FF            CALL 0x00405547
004AA601  5F                        POP EDI
004AA602  B8 01 00 00 00            MOV EAX,0x1
004AA607  5E                        POP ESI
004AA608  8B E5                     MOV ESP,EBP
004AA60A  5D                        POP EBP
004AA60B  C2 04 00                  RET 0x4
