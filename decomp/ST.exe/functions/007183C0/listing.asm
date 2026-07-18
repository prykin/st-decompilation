FUN_007183c0:
007183C0  55                        PUSH EBP
007183C1  8B EC                     MOV EBP,ESP
007183C3  51                        PUSH ECX
007183C4  56                        PUSH ESI
007183C5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007183C8  D9 46 04                  FLD float ptr [ESI + 0x4]
007183CB  DC 1D C0 01 79 00         FCOMP double ptr [0x007901c0]
007183D1  D9 46 08                  FLD float ptr [ESI + 0x8]
007183D4  DF E0                     FNSTSW AX
007183D6  F6 C4 01                  TEST AH,0x1
007183D9  74 0B                     JZ 0x007183e6
007183DB  D8 05 D0 DF 79 00         FADD float ptr [0x0079dfd0]
007183E1  D8 4E 04                  FMUL float ptr [ESI + 0x4]
007183E4  EB 0B                     JMP 0x007183f1
LAB_007183e6:
007183E6  D8 46 04                  FADD float ptr [ESI + 0x4]
007183E9  D9 46 08                  FLD float ptr [ESI + 0x8]
007183EC  D8 4E 04                  FMUL float ptr [ESI + 0x4]
007183EF  DE E9                     FSUBP
LAB_007183f1:
007183F1  D9 5D 08                  FSTP float ptr [EBP + 0x8]
007183F4  D9 46 04                  FLD float ptr [ESI + 0x4]
007183F7  DC C0                     FADD ST0,ST0
007183F9  D8 65 08                  FSUB float ptr [EBP + 0x8]
007183FC  D9 5D FC                  FSTP float ptr [EBP + -0x4]
007183FF  D9 46 08                  FLD float ptr [ESI + 0x8]
00718402  D8 1D 4C 03 79 00         FCOMP float ptr [0x0079034c]
00718408  DF E0                     FNSTSW AX
0071840A  F6 C4 40                  TEST AH,0x40
0071840D  74 1C                     JZ 0x0071842b
0071840F  81 3E 00 C0 79 44         CMP dword ptr [ESI],0x4479c000
00718415  75 0A                     JNZ 0x00718421
00718417  D9 46 04                  FLD float ptr [ESI + 0x4]
0071841A  D9 55 08                  FST float ptr [EBP + 0x8]
0071841D  D9 C0                     FLD ST0
0071841F  EB 53                     JMP 0x00718474
LAB_00718421:
00718421  B8 FB FF FF FF            MOV EAX,0xfffffffb
00718426  5E                        POP ESI
00718427  8B E5                     MOV ESP,EBP
00718429  5D                        POP EBP
0071842A  C3                        RET
LAB_0071842b:
0071842B  D9 06                     FLD float ptr [ESI]
0071842D  D8 05 70 E2 79 00         FADD float ptr [0x0079e270]
00718433  53                        PUSH EBX
00718434  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00718437  57                        PUSH EDI
00718438  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071843B  57                        PUSH EDI
0071843C  53                        PUSH EBX
0071843D  51                        PUSH ECX
0071843E  D9 1C 24                  FSTP float ptr [ESP]
00718441  E8 AA FE FF FF            CALL 0x007182f0
00718446  8B 06                     MOV EAX,dword ptr [ESI]
00718448  57                        PUSH EDI
00718449  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0071844C  53                        PUSH EBX
0071844D  50                        PUSH EAX
0071844E  E8 9D FE FF FF            CALL 0x007182f0
00718453  D9 5D 08                  FSTP float ptr [EBP + 0x8]
00718456  D9 06                     FLD float ptr [ESI]
00718458  D8 25 70 E2 79 00         FSUB float ptr [0x0079e270]
0071845E  83 C4 18                  ADD ESP,0x18
00718461  57                        PUSH EDI
00718462  53                        PUSH EBX
00718463  51                        PUSH ECX
00718464  D9 1C 24                  FSTP float ptr [ESP]
00718467  E8 84 FE FF FF            CALL 0x007182f0
0071846C  D9 45 FC                  FLD float ptr [EBP + -0x4]
0071846F  83 C4 0C                  ADD ESP,0xc
00718472  5F                        POP EDI
00718473  5B                        POP EBX
LAB_00718474:
00718474  D8 0D 6C E2 79 00         FMUL float ptr [0x0079e26c]
0071847A  E8 09 5E 01 00            CALL 0x0072e288
0071847F  D9 45 08                  FLD float ptr [EBP + 0x8]
00718482  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00718485  D8 0D 6C E2 79 00         FMUL float ptr [0x0079e26c]
0071848B  88 06                     MOV byte ptr [ESI],AL
0071848D  E8 F6 5D 01 00            CALL 0x0072e288
00718492  D8 0D 6C E2 79 00         FMUL float ptr [0x0079e26c]
00718498  88 46 01                  MOV byte ptr [ESI + 0x1],AL
0071849B  E8 E8 5D 01 00            CALL 0x0072e288
007184A0  88 46 02                  MOV byte ptr [ESI + 0x2],AL
007184A3  33 C0                     XOR EAX,EAX
007184A5  5E                        POP ESI
007184A6  8B E5                     MOV ESP,EBP
007184A8  5D                        POP EBP
007184A9  C3                        RET
