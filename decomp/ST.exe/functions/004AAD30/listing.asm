FUN_004aad30:
004AAD30  55                        PUSH EBP
004AAD31  8B EC                     MOV EBP,ESP
004AAD33  83 EC 0C                  SUB ESP,0xc
004AAD36  A1 50 67 80 00            MOV EAX,[0x00806750]
004AAD3B  56                        PUSH ESI
004AAD3C  57                        PUSH EDI
004AAD3D  8B F9                     MOV EDI,ECX
004AAD3F  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AAD42  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AAD46  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AAD49  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AAD4E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AAD51  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AAD54  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AAD57  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AAD5C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AAD62  83 F8 03                  CMP EAX,0x3
004AAD65  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AAD68  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AAD6B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AAD71  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AAD74  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AAD7A  77 25                     JA 0x004aada1
switchD_004aad7c::switchD:
004AAD7C  FF 24 85 DC AE 4A 00      JMP dword ptr [EAX*0x4 + 0x4aaedc]
switchD_004aad7c::caseD_0:
004AAD83  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAD86  D8 45 08                  FADD float ptr [EBP + 0x8]
004AAD89  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AAD8C  EB 13                     JMP 0x004aada1
switchD_004aad7c::caseD_1:
004AAD8E  D8 45 08                  FADD float ptr [EBP + 0x8]
004AAD91  EB 0E                     JMP 0x004aada1
switchD_004aad7c::caseD_2:
004AAD93  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAD96  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AAD99  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AAD9C  EB 03                     JMP 0x004aada1
switchD_004aad7c::caseD_3:
004AAD9E  D8 65 08                  FSUB float ptr [EBP + 0x8]
switchD_004aad7c::default:
004AADA1  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AADA4  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AADAA  DF E0                     FNSTSW AX
004AADAC  F6 C4 01                  TEST AH,0x1
004AADAF  74 07                     JZ 0x004aadb8
004AADB1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aadb8:
004AADB8  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AADBB  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AADBE  DF E0                     FNSTSW AX
004AADC0  F6 C4 41                  TEST AH,0x41
004AADC3  75 06                     JNZ 0x004aadcb
004AADC5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AADC8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aadcb:
004AADCB  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AADD1  DF E0                     FNSTSW AX
004AADD3  F6 C4 01                  TEST AH,0x1
004AADD6  74 08                     JZ 0x004aade0
004AADD8  DD D8                     FSTP ST0
004AADDA  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aade0:
004AADE0  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AADE3  DF E0                     FNSTSW AX
004AADE5  F6 C4 41                  TEST AH,0x41
004AADE8  75 05                     JNZ 0x004aadef
004AADEA  DD D8                     FSTP ST0
004AADEC  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aadef:
004AADEF  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AADF5  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AADFB  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AAE01  DF E0                     FNSTSW AX
004AAE03  F6 C4 41                  TEST AH,0x41
004AAE06  75 08                     JNZ 0x004aae10
004AAE08  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AAE0E  EB 06                     JMP 0x004aae16
LAB_004aae10:
004AAE10  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aae16:
004AAE16  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAE19  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AAE1F  E8 64 34 28 00            CALL 0x0072e288
004AAE24  99                        CDQ
004AAE25  33 C2                     XOR EAX,EDX
004AAE27  2B C2                     SUB EAX,EDX
004AAE29  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AAE2C  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AAE2F  D9 C9                     FXCH
004AAE31  DE D9                     FCOMPP
004AAE33  DF E0                     FNSTSW AX
004AAE35  F6 C4 41                  TEST AH,0x41
004AAE38  75 50                     JNZ 0x004aae8a
004AAE3A  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AAE40  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AAE46  DF E0                     FNSTSW AX
004AAE48  F6 C4 41                  TEST AH,0x41
004AAE4B  75 08                     JNZ 0x004aae55
004AAE4D  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AAE53  EB 06                     JMP 0x004aae5b
LAB_004aae55:
004AAE55  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aae5b:
004AAE5B  D9 C1                     FLD ST1
004AAE5D  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AAE63  E8 20 34 28 00            CALL 0x0072e288
004AAE68  99                        CDQ
004AAE69  33 C2                     XOR EAX,EDX
004AAE6B  2B C2                     SUB EAX,EDX
004AAE6D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AAE70  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AAE73  D9 C9                     FXCH
004AAE75  DE D9                     FCOMPP
004AAE77  DF E0                     FNSTSW AX
004AAE79  F6 C4 41                  TEST AH,0x41
004AAE7C  75 0C                     JNZ 0x004aae8a
004AAE7E  5F                        POP EDI
004AAE7F  33 C0                     XOR EAX,EAX
004AAE81  DD D8                     FSTP ST0
004AAE83  5E                        POP ESI
004AAE84  8B E5                     MOV ESP,EBP
004AAE86  5D                        POP EBP
004AAE87  C2 04 00                  RET 0x4
LAB_004aae8a:
004AAE8A  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AAE90  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AAE93  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAE99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AAE9C  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AAEA2  E8 E1 33 28 00            CALL 0x0072e288
004AAEA7  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AAEAD  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AAEB2  E8 D1 33 28 00            CALL 0x0072e288
004AAEB7  6A 00                     PUSH 0x0
004AAEB9  8B CF                     MOV ECX,EDI
004AAEBB  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AAEC0  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AAECA  E8 78 A6 F5 FF            CALL 0x00405547
004AAECF  5F                        POP EDI
004AAED0  B8 01 00 00 00            MOV EAX,0x1
004AAED5  5E                        POP ESI
004AAED6  8B E5                     MOV ESP,EBP
004AAED8  5D                        POP EBP
004AAED9  C2 04 00                  RET 0x4
