FUN_004a9d60:
004A9D60  55                        PUSH EBP
004A9D61  8B EC                     MOV EBP,ESP
004A9D63  83 EC 0C                  SUB ESP,0xc
004A9D66  A1 50 67 80 00            MOV EAX,[0x00806750]
004A9D6B  56                        PUSH ESI
004A9D6C  57                        PUSH EDI
004A9D6D  8B F9                     MOV EDI,ECX
004A9D6F  0F BF 08                  MOVSX ECX,word ptr [EAX]
004A9D72  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004A9D76  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004A9D79  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004A9D7E  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004A9D81  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004A9D84  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004A9D87  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A9D8C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A9D92  83 F8 03                  CMP EAX,0x3
004A9D95  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004A9D98  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004A9D9B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A9DA1  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004A9DA4  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004A9DAA  77 37                     JA 0x004a9de3
switchD_004a9dac::switchD:
004A9DAC  FF 24 85 20 9F 4A 00      JMP dword ptr [EAX*0x4 + 0x4a9f20]
switchD_004a9dac::caseD_0:
004A9DB3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DB6  D8 65 08                  FSUB float ptr [EBP + 0x8]
004A9DB9  EB 22                     JMP 0x004a9ddd
switchD_004a9dac::caseD_1:
004A9DBB  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DBE  D8 65 08                  FSUB float ptr [EBP + 0x8]
004A9DC1  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004A9DC4  D8 65 08                  FSUB float ptr [EBP + 0x8]
004A9DC7  EB 1A                     JMP 0x004a9de3
switchD_004a9dac::caseD_2:
004A9DC9  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DCC  D8 45 08                  FADD float ptr [EBP + 0x8]
004A9DCF  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004A9DD2  D8 65 08                  FSUB float ptr [EBP + 0x8]
004A9DD5  EB 0C                     JMP 0x004a9de3
switchD_004a9dac::caseD_3:
004A9DD7  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DDA  D8 45 08                  FADD float ptr [EBP + 0x8]
LAB_004a9ddd:
004A9DDD  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004A9DE0  D8 45 08                  FADD float ptr [EBP + 0x8]
switchD_004a9dac::default:
004A9DE3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DE6  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004A9DEC  DF E0                     FNSTSW AX
004A9DEE  F6 C4 01                  TEST AH,0x1
004A9DF1  74 07                     JZ 0x004a9dfa
004A9DF3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004a9dfa:
004A9DFA  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9DFD  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004A9E00  DF E0                     FNSTSW AX
004A9E02  F6 C4 41                  TEST AH,0x41
004A9E05  75 06                     JNZ 0x004a9e0d
004A9E07  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A9E0A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004a9e0d:
004A9E0D  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004A9E13  DF E0                     FNSTSW AX
004A9E15  F6 C4 01                  TEST AH,0x1
004A9E18  74 08                     JZ 0x004a9e22
004A9E1A  DD D8                     FSTP ST0
004A9E1C  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004a9e22:
004A9E22  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004A9E25  DF E0                     FNSTSW AX
004A9E27  F6 C4 41                  TEST AH,0x41
004A9E2A  75 05                     JNZ 0x004a9e31
004A9E2C  DD D8                     FSTP ST0
004A9E2E  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004a9e31:
004A9E31  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004A9E37  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004A9E3D  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004A9E43  DF E0                     FNSTSW AX
004A9E45  F6 C4 41                  TEST AH,0x41
004A9E48  75 08                     JNZ 0x004a9e52
004A9E4A  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004A9E50  EB 06                     JMP 0x004a9e58
LAB_004a9e52:
004A9E52  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004a9e58:
004A9E58  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9E5B  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004A9E61  E8 22 44 28 00            CALL 0x0072e288
004A9E66  99                        CDQ
004A9E67  33 C2                     XOR EAX,EDX
004A9E69  2B C2                     SUB EAX,EDX
004A9E6B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004A9E6E  DB 45 08                  FILD dword ptr [EBP + 0x8]
004A9E71  D9 C9                     FXCH
004A9E73  DE D9                     FCOMPP
004A9E75  DF E0                     FNSTSW AX
004A9E77  F6 C4 41                  TEST AH,0x41
004A9E7A  75 50                     JNZ 0x004a9ecc
004A9E7C  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004A9E82  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004A9E88  DF E0                     FNSTSW AX
004A9E8A  F6 C4 41                  TEST AH,0x41
004A9E8D  75 08                     JNZ 0x004a9e97
004A9E8F  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004A9E95  EB 06                     JMP 0x004a9e9d
LAB_004a9e97:
004A9E97  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004a9e9d:
004A9E9D  D9 C1                     FLD ST1
004A9E9F  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004A9EA5  E8 DE 43 28 00            CALL 0x0072e288
004A9EAA  99                        CDQ
004A9EAB  33 C2                     XOR EAX,EDX
004A9EAD  2B C2                     SUB EAX,EDX
004A9EAF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004A9EB2  DB 45 08                  FILD dword ptr [EBP + 0x8]
004A9EB5  D9 C9                     FXCH
004A9EB7  DE D9                     FCOMPP
004A9EB9  DF E0                     FNSTSW AX
004A9EBB  F6 C4 41                  TEST AH,0x41
004A9EBE  75 0C                     JNZ 0x004a9ecc
004A9EC0  5F                        POP EDI
004A9EC1  33 C0                     XOR EAX,EAX
004A9EC3  DD D8                     FSTP ST0
004A9EC5  5E                        POP ESI
004A9EC6  8B E5                     MOV ESP,EBP
004A9EC8  5D                        POP EBP
004A9EC9  C2 04 00                  RET 0x4
LAB_004a9ecc:
004A9ECC  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004A9ED2  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9ED5  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A9EDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A9EDE  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004A9EE4  E8 9F 43 28 00            CALL 0x0072e288
004A9EE9  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A9EEF  A3 D8 73 80 00            MOV [0x008073d8],EAX
004A9EF4  E8 8F 43 28 00            CALL 0x0072e288
004A9EF9  6A 00                     PUSH 0x0
004A9EFB  8B CF                     MOV ECX,EDI
004A9EFD  A3 DC 73 80 00            MOV [0x008073dc],EAX
004A9F02  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004A9F0C  E8 36 B6 F5 FF            CALL 0x00405547
004A9F11  5F                        POP EDI
004A9F12  B8 01 00 00 00            MOV EAX,0x1
004A9F17  5E                        POP ESI
004A9F18  8B E5                     MOV ESP,EBP
004A9F1A  5D                        POP EBP
004A9F1B  C2 04 00                  RET 0x4
