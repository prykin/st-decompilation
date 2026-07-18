FUN_004aab00:
004AAB00  55                        PUSH EBP
004AAB01  8B EC                     MOV EBP,ESP
004AAB03  83 EC 0C                  SUB ESP,0xc
004AAB06  A1 50 67 80 00            MOV EAX,[0x00806750]
004AAB0B  56                        PUSH ESI
004AAB0C  57                        PUSH EDI
004AAB0D  8B F9                     MOV EDI,ECX
004AAB0F  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AAB12  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AAB16  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AAB19  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AAB1E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AAB21  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AAB24  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AAB27  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AAB2C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AAB32  83 F8 03                  CMP EAX,0x3
004AAB35  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AAB38  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AAB3B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AAB41  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AAB44  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AAB4A  77 22                     JA 0x004aab6e
switchD_004aab4c::switchD:
004AAB4C  FF 24 85 AC AC 4A 00      JMP dword ptr [EAX*0x4 + 0x4aacac]
switchD_004aab4c::caseD_0:
004AAB53  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AAB56  EB 16                     JMP 0x004aab6e
switchD_004aab4c::caseD_1:
004AAB58  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAB5B  D8 45 08                  FADD float ptr [EBP + 0x8]
004AAB5E  EB 0B                     JMP 0x004aab6b
switchD_004aab4c::caseD_2:
004AAB60  D8 45 08                  FADD float ptr [EBP + 0x8]
004AAB63  EB 09                     JMP 0x004aab6e
switchD_004aab4c::caseD_3:
004AAB65  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAB68  D8 65 08                  FSUB float ptr [EBP + 0x8]
LAB_004aab6b:
004AAB6B  D9 5D FC                  FSTP float ptr [EBP + -0x4]
switchD_004aab4c::default:
004AAB6E  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAB71  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AAB77  DF E0                     FNSTSW AX
004AAB79  F6 C4 01                  TEST AH,0x1
004AAB7C  74 07                     JZ 0x004aab85
004AAB7E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aab85:
004AAB85  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAB88  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AAB8B  DF E0                     FNSTSW AX
004AAB8D  F6 C4 41                  TEST AH,0x41
004AAB90  75 06                     JNZ 0x004aab98
004AAB92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AAB95  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aab98:
004AAB98  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AAB9E  DF E0                     FNSTSW AX
004AABA0  F6 C4 01                  TEST AH,0x1
004AABA3  74 08                     JZ 0x004aabad
004AABA5  DD D8                     FSTP ST0
004AABA7  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aabad:
004AABAD  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AABB0  DF E0                     FNSTSW AX
004AABB2  F6 C4 41                  TEST AH,0x41
004AABB5  75 05                     JNZ 0x004aabbc
004AABB7  DD D8                     FSTP ST0
004AABB9  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aabbc:
004AABBC  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AABC2  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AABC8  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AABCE  DF E0                     FNSTSW AX
004AABD0  F6 C4 41                  TEST AH,0x41
004AABD3  75 08                     JNZ 0x004aabdd
004AABD5  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AABDB  EB 06                     JMP 0x004aabe3
LAB_004aabdd:
004AABDD  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aabe3:
004AABE3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AABE6  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AABEC  E8 97 36 28 00            CALL 0x0072e288
004AABF1  99                        CDQ
004AABF2  33 C2                     XOR EAX,EDX
004AABF4  2B C2                     SUB EAX,EDX
004AABF6  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AABF9  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AABFC  D9 C9                     FXCH
004AABFE  DE D9                     FCOMPP
004AAC00  DF E0                     FNSTSW AX
004AAC02  F6 C4 41                  TEST AH,0x41
004AAC05  75 50                     JNZ 0x004aac57
004AAC07  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AAC0D  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AAC13  DF E0                     FNSTSW AX
004AAC15  F6 C4 41                  TEST AH,0x41
004AAC18  75 08                     JNZ 0x004aac22
004AAC1A  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AAC20  EB 06                     JMP 0x004aac28
LAB_004aac22:
004AAC22  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aac28:
004AAC28  D9 C1                     FLD ST1
004AAC2A  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AAC30  E8 53 36 28 00            CALL 0x0072e288
004AAC35  99                        CDQ
004AAC36  33 C2                     XOR EAX,EDX
004AAC38  2B C2                     SUB EAX,EDX
004AAC3A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AAC3D  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AAC40  D9 C9                     FXCH
004AAC42  DE D9                     FCOMPP
004AAC44  DF E0                     FNSTSW AX
004AAC46  F6 C4 41                  TEST AH,0x41
004AAC49  75 0C                     JNZ 0x004aac57
004AAC4B  5F                        POP EDI
004AAC4C  33 C0                     XOR EAX,EAX
004AAC4E  DD D8                     FSTP ST0
004AAC50  5E                        POP ESI
004AAC51  8B E5                     MOV ESP,EBP
004AAC53  5D                        POP EBP
004AAC54  C2 04 00                  RET 0x4
LAB_004aac57:
004AAC57  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AAC5D  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAC60  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAC66  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AAC69  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AAC6F  E8 14 36 28 00            CALL 0x0072e288
004AAC74  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAC7A  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AAC7F  E8 04 36 28 00            CALL 0x0072e288
004AAC84  6A 00                     PUSH 0x0
004AAC86  8B CF                     MOV ECX,EDI
004AAC88  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AAC8D  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AAC97  E8 AB A8 F5 FF            CALL 0x00405547
004AAC9C  5F                        POP EDI
004AAC9D  B8 01 00 00 00            MOV EAX,0x1
004AACA2  5E                        POP ESI
004AACA3  8B E5                     MOV ESP,EBP
004AACA5  5D                        POP EBP
004AACA6  C2 04 00                  RET 0x4
