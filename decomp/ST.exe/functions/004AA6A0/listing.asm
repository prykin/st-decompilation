FUN_004aa6a0:
004AA6A0  55                        PUSH EBP
004AA6A1  8B EC                     MOV EBP,ESP
004AA6A3  83 EC 0C                  SUB ESP,0xc
004AA6A6  A1 50 67 80 00            MOV EAX,[0x00806750]
004AA6AB  56                        PUSH ESI
004AA6AC  57                        PUSH EDI
004AA6AD  8B F9                     MOV EDI,ECX
004AA6AF  0F BF 08                  MOVSX ECX,word ptr [EAX]
004AA6B2  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
004AA6B6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004AA6B9  A1 D0 73 80 00            MOV EAX,[0x008073d0]
004AA6BE  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA6C1  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004AA6C4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004AA6C7  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004AA6CC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA6D2  83 F8 03                  CMP EAX,0x3
004AA6D5  D9 5D F8                  FSTP float ptr [EBP + -0x8]
004AA6D8  DB 45 F4                  FILD dword ptr [EBP + -0xc]
004AA6DB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004AA6E1  D9 5D F4                  FSTP float ptr [EBP + -0xc]
004AA6E4  D9 05 D4 73 80 00         FLD float ptr [0x008073d4]
004AA6EA  77 25                     JA 0x004aa711
switchD_004aa6ec::switchD:
004AA6EC  FF 24 85 4C A8 4A 00      JMP dword ptr [EAX*0x4 + 0x4aa84c]
switchD_004aa6ec::caseD_0:
004AA6F3  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA6F6  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA6F9  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA6FC  EB 13                     JMP 0x004aa711
switchD_004aa6ec::caseD_1:
004AA6FE  D8 65 08                  FSUB float ptr [EBP + 0x8]
004AA701  EB 0E                     JMP 0x004aa711
switchD_004aa6ec::caseD_2:
004AA703  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA706  D8 45 08                  FADD float ptr [EBP + 0x8]
004AA709  D9 5D FC                  FSTP float ptr [EBP + -0x4]
004AA70C  EB 03                     JMP 0x004aa711
switchD_004aa6ec::caseD_3:
004AA70E  D8 45 08                  FADD float ptr [EBP + 0x8]
switchD_004aa6ec::default:
004AA711  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA714  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
004AA71A  DF E0                     FNSTSW AX
004AA71C  F6 C4 01                  TEST AH,0x1
004AA71F  74 07                     JZ 0x004aa728
004AA721  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004aa728:
004AA728  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA72B  D8 5D F8                  FCOMP float ptr [EBP + -0x8]
004AA72E  DF E0                     FNSTSW AX
004AA730  F6 C4 41                  TEST AH,0x41
004AA733  75 06                     JNZ 0x004aa73b
004AA735  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AA738  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_004aa73b:
004AA73B  D8 15 4C 03 79 00         FCOM float ptr [0x0079034c]
004AA741  DF E0                     FNSTSW AX
004AA743  F6 C4 01                  TEST AH,0x1
004AA746  74 08                     JZ 0x004aa750
004AA748  DD D8                     FSTP ST0
004AA74A  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
LAB_004aa750:
004AA750  D8 55 F4                  FCOM float ptr [EBP + -0xc]
004AA753  DF E0                     FNSTSW AX
004AA755  F6 C4 41                  TEST AH,0x41
004AA758  75 05                     JNZ 0x004aa75f
004AA75A  DD D8                     FSTP ST0
004AA75C  D9 45 F4                  FLD float ptr [EBP + -0xc]
LAB_004aa75f:
004AA75F  8B 35 98 75 80 00         MOV ESI,dword ptr [0x00807598]
004AA765  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA76B  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA771  DF E0                     FNSTSW AX
004AA773  F6 C4 41                  TEST AH,0x41
004AA776  75 08                     JNZ 0x004aa780
004AA778  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA77E  EB 06                     JMP 0x004aa786
LAB_004aa780:
004AA780  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa786:
004AA786  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA789  D8 25 D0 73 80 00         FSUB float ptr [0x008073d0]
004AA78F  E8 F4 3A 28 00            CALL 0x0072e288
004AA794  99                        CDQ
004AA795  33 C2                     XOR EAX,EDX
004AA797  2B C2                     SUB EAX,EDX
004AA799  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA79C  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA79F  D9 C9                     FXCH
004AA7A1  DE D9                     FCOMPP
004AA7A3  DF E0                     FNSTSW AX
004AA7A5  F6 C4 41                  TEST AH,0x41
004AA7A8  75 50                     JNZ 0x004aa7fa
004AA7AA  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA7B0  DC 9E F0 00 00 00         FCOMP double ptr [ESI + 0xf0]
004AA7B6  DF E0                     FNSTSW AX
004AA7B8  F6 C4 41                  TEST AH,0x41
004AA7BB  75 08                     JNZ 0x004aa7c5
004AA7BD  DD 86 E8 00 00 00         FLD double ptr [ESI + 0xe8]
004AA7C3  EB 06                     JMP 0x004aa7cb
LAB_004aa7c5:
004AA7C5  DD 86 F0 00 00 00         FLD double ptr [ESI + 0xf0]
LAB_004aa7cb:
004AA7CB  D9 C1                     FLD ST1
004AA7CD  D8 25 D4 73 80 00         FSUB float ptr [0x008073d4]
004AA7D3  E8 B0 3A 28 00            CALL 0x0072e288
004AA7D8  99                        CDQ
004AA7D9  33 C2                     XOR EAX,EDX
004AA7DB  2B C2                     SUB EAX,EDX
004AA7DD  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004AA7E0  DB 45 08                  FILD dword ptr [EBP + 0x8]
004AA7E3  D9 C9                     FXCH
004AA7E5  DE D9                     FCOMPP
004AA7E7  DF E0                     FNSTSW AX
004AA7E9  F6 C4 41                  TEST AH,0x41
004AA7EC  75 0C                     JNZ 0x004aa7fa
004AA7EE  5F                        POP EDI
004AA7EF  33 C0                     XOR EAX,EAX
004AA7F1  DD D8                     FSTP ST0
004AA7F3  5E                        POP ESI
004AA7F4  8B E5                     MOV ESP,EBP
004AA7F6  5D                        POP EBP
004AA7F7  C2 04 00                  RET 0x4
LAB_004aa7fa:
004AA7FA  D9 15 D4 73 80 00         FST float ptr [0x008073d4]
004AA800  D9 45 FC                  FLD float ptr [EBP + -0x4]
004AA803  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA809  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004AA80C  89 15 D0 73 80 00         MOV dword ptr [0x008073d0],EDX
004AA812  E8 71 3A 28 00            CALL 0x0072e288
004AA817  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004AA81D  A3 D8 73 80 00            MOV [0x008073d8],EAX
004AA822  E8 61 3A 28 00            CALL 0x0072e288
004AA827  6A 00                     PUSH 0x0
004AA829  8B CF                     MOV ECX,EDI
004AA82B  A3 DC 73 80 00            MOV [0x008073dc],EAX
004AA830  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004AA83A  E8 08 AD F5 FF            CALL 0x00405547
004AA83F  5F                        POP EDI
004AA840  B8 01 00 00 00            MOV EAX,0x1
004AA845  5E                        POP ESI
004AA846  8B E5                     MOV ESP,EBP
004AA848  5D                        POP EBP
004AA849  C2 04 00                  RET 0x4
