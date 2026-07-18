FUN_004aa8d0:
004AA8D0  55                        PUSH EBP
004AA8D1  8B EC                     MOV EBP,ESP
004AA8D3  83 EC 0C                  SUB ESP,0xc
004AA8D6  A1 50 67 80 00            MOV EAX,[0x00806750]
004AA8DB  56                        PUSH ESI
004AA8DC  57                        PUSH EDI
004AA8DD  8B F9                     MOV EDI,ECX
004AA8DF  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AA8E2  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AA8E6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AA8E9  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AA8EE  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA8F1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AA8F4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AA8F7  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AA8FC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA902  83 F8 03                  CMP EAX,0x3
004AA905  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AA908  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA90B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA911  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AA914  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AA91A  77 22                     JA 0x004aa93e
switchD_004aa91c::switchD:
004AA91C  FF 24 85 7C AA 4A 00      JMP dword ptr [EAX*0x4 + 0x4aaa7c]
switchD_004aa91c::caseD_0:
004AA923  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA926  EB 16                     JMP 0x004aa93e
switchD_004aa91c::caseD_1:
004AA928  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA92B  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA92E  EB 0B                     JMP 0x004aa93b
switchD_004aa91c::caseD_2:
004AA930  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA933  EB 09                     JMP 0x004aa93e
switchD_004aa91c::caseD_3:
004AA935  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA938  D8 45 08                  FADD float ptr [EBP + 0x8]
LAB_004aa93b:
004AA93B  D9 5D FC                  FSTP float ptr [EBP + -0x4]
switchD_004aa91c::default:
004AA93E  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA941  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AA947  DF E0                     FNSTSW AX
004AA949  F6 C4 01                  TEST AH,0x1
004AA94C  74 07                     JZ 0x004aa955
004AA94E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aa955:
004AA955  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA958  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AA95B  DF E0                     FNSTSW AX
004AA95D  F6 C4 41                  TEST AH,0x41
004AA960  75 06                     JNZ 0x004aa968
004AA962  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AA965  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aa968:
004AA968  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AA96E  DF E0                     FNSTSW AX
004AA970  F6 C4 01                  TEST AH,0x1
004AA973  74 08                     JZ 0x004aa97d
004AA975  DD D8                     FSTP ST0
004AA977  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aa97d:
004AA97D  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AA980  DF E0                     FNSTSW AX
004AA982  F6 C4 41                  TEST AH,0x41
004AA985  75 05                     JNZ 0x004aa98c
004AA987  DD D8                     FSTP ST0
004AA989  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aa98c:
004AA98C  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AA992  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA998  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA99E  DF E0                     FNSTSW AX
004AA9A0  F6 C4 41                  TEST AH,0x41
004AA9A3  75 08                     JNZ 0x004aa9ad
004AA9A5  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA9AB  EB 06                     JMP 0x004aa9b3
LAB_004aa9ad:
004AA9AD  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa9b3:
004AA9B3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA9B6  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AA9BC  E8 C7 38 28 00            CALL 0x0072e288
004AA9C1  99                        CDQ
004AA9C2  33 C2                     XOR EAX,EDX
004AA9C4  2B C2                     SUB EAX,EDX
004AA9C6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA9C9  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA9CC  D9 C9                     FXCH
004AA9CE  DE D9                     FCOMPP
004AA9D0  DF E0                     FNSTSW AX
004AA9D2  F6 C4 41                  TEST AH,0x41
004AA9D5  75 50                     JNZ 0x004aaa27
004AA9D7  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA9DD  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA9E3  DF E0                     FNSTSW AX
004AA9E5  F6 C4 41                  TEST AH,0x41
004AA9E8  75 08                     JNZ 0x004aa9f2
004AA9EA  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA9F0  EB 06                     JMP 0x004aa9f8
LAB_004aa9f2:
004AA9F2  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa9f8:
004AA9F8  D9 C1                     FLD ST1
004AA9FA  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AAA00  E8 83 38 28 00            CALL 0x0072e288
004AAA05  99                        CDQ
004AAA06  33 C2                     XOR EAX,EDX
004AAA08  2B C2                     SUB EAX,EDX
004AAA0A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AAA0D  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AAA10  D9 C9                     FXCH
004AAA12  DE D9                     FCOMPP
004AAA14  DF E0                     FNSTSW AX
004AAA16  F6 C4 41                  TEST AH,0x41
004AAA19  75 0C                     JNZ 0x004aaa27
004AAA1B  5F                        POP EDI
004AAA1C  33 C0                     XOR EAX,EAX
004AAA1E  DD D8                     FSTP ST0
004AAA20  5E                        POP ESI
004AAA21  8B E5                     MOV ESP,EBP
004AAA23  5D                        POP EBP
004AAA24  C2 04 00                  RET 0x4
LAB_004aaa27:
004AAA27  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AAA2D  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAA30  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAA36  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AAA39  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AAA3F  E8 44 38 28 00            CALL 0x0072e288
004AAA44  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAA4A  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AAA4F  E8 34 38 28 00            CALL 0x0072e288
004AAA54  6A 00                     PUSH 0x0
004AAA56  8B CF                     MOV ECX,EDI
004AAA58  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AAA5D  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AAA67  E8 DB AA F5 FF            CALL 0x00405547
004AAA6C  5F                        POP EDI
004AAA6D  B8 01 00 00 00            MOV EAX,0x1
004AAA72  5E                        POP ESI
004AAA73  8B E5                     MOV ESP,EBP
004AAA75  5D                        POP EBP
004AAA76  C2 04 00                  RET 0x4
