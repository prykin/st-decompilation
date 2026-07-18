FUN_004a8fc0:
004A8FC0  55                        PUSH EBP
004A8FC1  8B EC                     MOV EBP,ESP
004A8FC3  83 EC 58                  SUB ESP,0x58
004A8FC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A8FCB  53                        PUSH EBX
004A8FCC  56                        PUSH ESI
004A8FCD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004A8FD0  33 DB                     XOR EBX,EBX
004A8FD2  57                        PUSH EDI
004A8FD3  8D 55 AC                  LEA EDX,[EBP + -0x54]
004A8FD6  8D 4D A8                  LEA ECX,[EBP + -0x58]
004A8FD9  53                        PUSH EBX
004A8FDA  52                        PUSH EDX
004A8FDB  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004A8FDE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A8FE4  E8 07 48 28 00            CALL 0x0072d7f0
004A8FE9  8B F0                     MOV ESI,EAX
004A8FEB  83 C4 08                  ADD ESP,0x8
004A8FEE  3B F3                     CMP ESI,EBX
004A8FF0  0F 85 E2 03 00 00         JNZ 0x004a93d8
004A8FF6  A1 54 67 80 00            MOV EAX,[0x00806754]
004A8FFB  3B C3                     CMP EAX,EBX
004A8FFD  74 15                     JZ 0x004a9014
004A8FFF  53                        PUSH EBX
004A9000  53                        PUSH EBX
004A9001  68 D4 C5 7A 00            PUSH 0x7ac5d4
004A9006  50                        PUSH EAX
004A9007  E8 84 9D 24 00            CALL 0x006f2d90
004A900C  83 C4 10                  ADD ESP,0x10
004A900F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A9012  EB 03                     JMP 0x004a9017
LAB_004a9014:
004A9014  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004a9017:
004A9017  3B C3                     CMP EAX,EBX
004A9019  0F 84 0B 01 00 00         JZ 0x004a912a
004A901F  B9 63 00 00 00            MOV ECX,0x63
004A9024  8B F0                     MOV ESI,EAX
004A9026  BF D0 73 80 00            MOV EDI,0x8073d0
004A902B  68 CC CC 3C 40            PUSH 0x403ccccc
004A9030  F3 A5                     MOVSD.REP ES:EDI,ESI
004A9032  66 A5                     MOVSW ES:EDI,ESI
004A9034  68 00 00 00 C0            PUSH 0xc0000000
004A9039  A4                        MOVSB ES:EDI,ESI
004A903A  E8 11 51 28 00            CALL 0x0072e150
004A903F  83 C4 08                  ADD ESP,0x8
004A9042  E8 41 52 28 00            CALL 0x0072e288
004A9047  D9 05 24 74 80 00         FLD float ptr [0x00807424]
004A904D  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9053  50                        PUSH EAX
004A9054  68 97 EE 23 40            PUSH 0x4023ee97
004A9059  68 40 35 5E 86            PUSH 0x865e3540
004A905E  68 00 00 24 40            PUSH 0x40240000
004A9063  53                        PUSH EBX
004A9064  A1 74 75 80 00            MOV EAX,[0x00807574]
004A9069  83 EC 08                  SUB ESP,0x8
004A906C  8B 0D 70 75 80 00         MOV ECX,dword ptr [0x00807570]
004A9072  8B 15 6C 75 80 00         MOV EDX,dword ptr [0x0080756c]
004A9078  DD 1C 24                  FSTP double ptr [ESP]
004A907B  D9 05 24 74 80 00         FLD float ptr [0x00807424]
004A9081  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A9087  83 EC 08                  SUB ESP,0x8
004A908A  83 EC 08                  SUB ESP,0x8
004A908D  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A9091  D9 05 20 74 80 00         FLD float ptr [0x00807420]
004A9097  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A909D  83 EC 08                  SUB ESP,0x8
004A90A0  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A90A4  D9 05 20 74 80 00         FLD float ptr [0x00807420]
004A90AA  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A90B0  DD 1C 24                  FSTP double ptr [ESP]
004A90B3  50                        PUSH EAX
004A90B4  A1 68 75 80 00            MOV EAX,[0x00807568]
004A90B9  51                        PUSH ECX
004A90BA  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
004A90C0  52                        PUSH EDX
004A90C1  50                        PUSH EAX
004A90C2  51                        PUSH ECX
004A90C3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A90C9  E8 82 2F 23 00            CALL 0x006dc050
004A90CE  8B 15 1C 74 80 00         MOV EDX,dword ptr [0x0080741c]
004A90D4  A1 18 74 80 00            MOV EAX,[0x00807418]
004A90D9  8B 0D 14 74 80 00         MOV ECX,dword ptr [0x00807414]
004A90DF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004A90E2  52                        PUSH EDX
004A90E3  8B 15 10 74 80 00         MOV EDX,dword ptr [0x00807410]
004A90E9  50                        PUSH EAX
004A90EA  51                        PUSH ECX
004A90EB  52                        PUSH EDX
004A90EC  8B CE                     MOV ECX,ESI
004A90EE  E8 7A 8A F5 FF            CALL 0x00401b6d
004A90F3  6A 01                     PUSH 0x1
004A90F5  8B CE                     MOV ECX,ESI
004A90F7  E8 4B C4 F5 FF            CALL 0x00405547
004A90FC  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
004A9102  8D 45 F8                  LEA EAX,[EBP + -0x8]
004A9105  50                        PUSH EAX
004A9106  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004A9110  89 1D 5D 74 80 00         MOV dword ptr [0x0080745d],EBX
004A9116  E8 C5 8F 24 00            CALL 0x006f20e0
004A911B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004A911E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A9123  5F                        POP EDI
004A9124  5E                        POP ESI
004A9125  5B                        POP EBX
004A9126  8B E5                     MOV ESP,EBP
004A9128  5D                        POP EBP
004A9129  C3                        RET
LAB_004a912a:
004A912A  DB 05 68 75 80 00         FILD dword ptr [0x00807568]
004A9130  A1 68 75 80 00            MOV EAX,[0x00807568]
004A9135  8B 0D 6C 75 80 00         MOV ECX,dword ptr [0x0080756c]
004A913B  8B 15 70 75 80 00         MOV EDX,dword ptr [0x00807570]
004A9141  8B 35 74 75 80 00         MOV ESI,dword ptr [0x00807574]
004A9147  D9 C0                     FLD ST0
004A9149  D8 0D 80 C5 7A 00         FMUL float ptr [0x007ac580]
004A914F  83 EC 08                  SUB ESP,0x8
004A9152  A3 00 74 80 00            MOV [0x00807400],EAX
004A9157  89 0D 04 74 80 00         MOV dword ptr [0x00807404],ECX
004A915D  89 15 08 74 80 00         MOV dword ptr [0x00807408],EDX
004A9163  D8 F1                     FDIV ST0,ST1
004A9165  89 35 0C 74 80 00         MOV dword ptr [0x0080740c],ESI
004A916B  A3 10 74 80 00            MOV [0x00807410],EAX
004A9170  89 0D 14 74 80 00         MOV dword ptr [0x00807414],ECX
004A9176  89 15 18 74 80 00         MOV dword ptr [0x00807418],EDX
004A917C  89 35 1C 74 80 00         MOV dword ptr [0x0080741c],ESI
004A9182  89 1D 5D 74 80 00         MOV dword ptr [0x0080745d],EBX
004A9188  C7 05 D0 73 80 00 00 00 A0 40  MOV dword ptr [0x008073d0],0x40a00000
004A9192  C7 05 D4 73 80 00 00 00 A0 40  MOV dword ptr [0x008073d4],0x40a00000
004A919C  89 1D D8 73 80 00         MOV dword ptr [0x008073d8],EBX
004A91A2  89 1D DC 73 80 00         MOV dword ptr [0x008073dc],EBX
004A91A8  C7 05 30 74 80 00 00 00 20 40  MOV dword ptr [0x00807430],0x40200000
004A91B2  C7 05 34 74 80 00 00 00 80 3F  MOV dword ptr [0x00807434],0x3f800000
004A91BC  C7 05 38 74 80 00 00 00 80 3F  MOV dword ptr [0x00807438],0x3f800000
004A91C6  88 1D 3C 74 80 00         MOV byte ptr [0x0080743c],BL
004A91CC  D9 1D 20 74 80 00         FSTP float ptr [0x00807420]
004A91D2  DD D8                     FSTP ST0
004A91D4  DB 05 70 75 80 00         FILD dword ptr [0x00807570]
004A91DA  D8 3D 80 C5 7A 00         FDIVR float ptr [0x007ac580]
004A91E0  D8 3D F8 04 79 00         FDIVR float ptr [0x007904f8]
004A91E6  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
004A91EC  DD 1C 24                  FSTP double ptr [ESP]
004A91EF  E8 5C 4F 28 00            CALL 0x0072e150
004A91F4  DC 3D 80 05 79 00         FDIVR double ptr [0x00790580]
004A91FA  8B 0D 20 74 80 00         MOV ECX,dword ptr [0x00807420]
004A9200  68 CC CC 3C 40            PUSH 0x403ccccc
004A9205  68 00 00 00 C0            PUSH 0xc0000000
004A920A  89 0D 28 74 80 00         MOV dword ptr [0x00807428],ECX
004A9210  C7 05 3D 74 80 00 00 00 00 00  MOV dword ptr [0x0080743d],0x0
004A921A  C7 05 41 74 80 00 00 00 00 00  MOV dword ptr [0x00807441],0x0
004A9224  C7 05 45 74 80 00 00 00 00 00  MOV dword ptr [0x00807445],0x0
004A922E  C7 05 49 74 80 00 00 00 00 00  MOV dword ptr [0x00807449],0x0
004A9238  C7 05 4D 74 80 00 00 00 00 00  MOV dword ptr [0x0080744d],0x0
004A9242  C7 05 51 74 80 00 00 00 00 00  MOV dword ptr [0x00807451],0x0
004A924C  C7 05 55 74 80 00 00 00 00 00  MOV dword ptr [0x00807455],0x0
004A9256  C7 05 59 74 80 00 00 00 00 00  MOV dword ptr [0x00807459],0x0
004A9260  DA 0D 74 75 80 00         FIMUL dword ptr [0x00807574]
004A9266  D9 15 24 74 80 00         FST float ptr [0x00807424]
004A926C  D9 1D 2C 74 80 00         FSTP float ptr [0x0080742c]
004A9272  E8 D9 4E 28 00            CALL 0x0072e150
004A9277  83 C4 10                  ADD ESP,0x10
004A927A  E8 09 50 28 00            CALL 0x0072e288
004A927F  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9285  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A928B  50                        PUSH EAX
004A928C  68 97 EE 23 40            PUSH 0x4023ee97
004A9291  68 40 35 5E 86            PUSH 0x865e3540
004A9296  68 00 00 24 40            PUSH 0x40240000
004A929B  53                        PUSH EBX
004A929C  8B 15 74 75 80 00         MOV EDX,dword ptr [0x00807574]
004A92A2  83 EC 08                  SUB ESP,0x8
004A92A5  A1 70 75 80 00            MOV EAX,[0x00807570]
004A92AA  8B 0D 6C 75 80 00         MOV ECX,dword ptr [0x0080756c]
004A92B0  DD 1C 24                  FSTP double ptr [ESP]
004A92B3  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A92B9  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A92BF  83 EC 08                  SUB ESP,0x8
004A92C2  83 EC 08                  SUB ESP,0x8
004A92C5  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A92C9  D9 05 28 74 80 00         FLD float ptr [0x00807428]
004A92CF  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A92D5  83 EC 08                  SUB ESP,0x8
004A92D8  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A92DC  D9 05 28 74 80 00         FLD float ptr [0x00807428]
004A92E2  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A92E8  DD 1C 24                  FSTP double ptr [ESP]
004A92EB  52                        PUSH EDX
004A92EC  50                        PUSH EAX
004A92ED  51                        PUSH ECX
004A92EE  8B 15 68 75 80 00         MOV EDX,dword ptr [0x00807568]
004A92F4  A1 9C 75 80 00            MOV EAX,[0x0080759c]
004A92F9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A92FF  52                        PUSH EDX
004A9300  50                        PUSH EAX
004A9301  E8 4A 2D 23 00            CALL 0x006dc050
004A9306  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A9309  8D 55 F0                  LEA EDX,[EBP + -0x10]
004A930C  51                        PUSH ECX
004A930D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9313  8D 45 EC                  LEA EAX,[EBP + -0x14]
004A9316  52                        PUSH EDX
004A9317  50                        PUSH EAX
004A9318  E8 13 42 23 00            CALL 0x006dd530
004A931D  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9320  D8 25 7C 07 79 00         FSUB float ptr [0x0079077c]
004A9326  51                        PUSH ECX
004A9327  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A932D  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9333  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9339  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A933F  DE E9                     FSUBP
004A9341  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9347  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A934D  DE E9                     FSUBP
004A934F  D9 1C 24                  FSTP float ptr [ESP]
004A9352  E8 39 44 23 00            CALL 0x006dd790
004A9357  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A935A  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9360  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9366  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A936C  51                        PUSH ECX
004A936D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9373  DE C1                     FADDP
004A9375  DC 05 60 07 79 00         FADD double ptr [0x00790760]
004A937B  D9 1C 24                  FSTP float ptr [ESP]
004A937E  E8 7D 44 23 00            CALL 0x006dd800
004A9383  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004A9389  33 C9                     XOR ECX,ECX
004A938B  B8 E9 87 80 00            MOV EAX,0x8087e9
LAB_004a9390:
004A9390  38 10                     CMP byte ptr [EAX],DL
004A9392  74 1A                     JZ 0x004a93ae
004A9394  83 C0 51                  ADD EAX,0x51
004A9397  41                        INC ECX
004A9398  3D 71 8A 80 00            CMP EAX,0x808a71
004A939D  7C F1                     JL 0x004a9390
004A939F  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004A93A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A93A7  5F                        POP EDI
004A93A8  5E                        POP ESI
004A93A9  5B                        POP EBX
004A93AA  8B E5                     MOV ESP,EBP
004A93AC  5D                        POP EBP
004A93AD  C3                        RET
LAB_004a93ae:
004A93AE  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
004A93B1  8B 8C C0 EF 87 80 00      MOV ECX,dword ptr [EAX + EAX*0x8 + 0x8087ef]
004A93B8  8B 94 C0 EB 87 80 00      MOV EDX,dword ptr [EAX + EAX*0x8 + 0x8087eb]
004A93BF  51                        PUSH ECX
004A93C0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A93C3  52                        PUSH EDX
004A93C4  E8 57 93 F5 FF            CALL 0x00402720
004A93C9  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004A93CC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A93D1  5F                        POP EDI
004A93D2  5E                        POP ESI
004A93D3  5B                        POP EBX
004A93D4  8B E5                     MOV ESP,EBP
004A93D6  5D                        POP EBP
004A93D7  C3                        RET
LAB_004a93d8:
004A93D8  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004A93DB  68 E0 C5 7A 00            PUSH 0x7ac5e0
004A93E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A93E5  56                        PUSH ESI
004A93E6  53                        PUSH EBX
004A93E7  68 07 01 00 00            PUSH 0x107
004A93EC  68 94 C5 7A 00            PUSH 0x7ac594
004A93F1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A93F7  E8 D4 40 20 00            CALL 0x006ad4d0
004A93FC  83 C4 18                  ADD ESP,0x18
004A93FF  85 C0                     TEST EAX,EAX
004A9401  74 01                     JZ 0x004a9404
004A9403  CC                        INT3
LAB_004a9404:
004A9404  68 08 01 00 00            PUSH 0x108
004A9409  68 94 C5 7A 00            PUSH 0x7ac594
004A940E  53                        PUSH EBX
004A940F  56                        PUSH ESI
004A9410  E8 2B CA 1F 00            CALL 0x006a5e40
004A9415  5F                        POP EDI
004A9416  5E                        POP ESI
004A9417  5B                        POP EBX
004A9418  8B E5                     MOV ESP,EBP
004A941A  5D                        POP EBP
004A941B  C3                        RET
