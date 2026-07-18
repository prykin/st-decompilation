FUN_004a9540:
004A9540  55                        PUSH EBP
004A9541  8B EC                     MOV EBP,ESP
004A9543  83 EC 58                  SUB ESP,0x58
004A9546  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A954B  56                        PUSH ESI
004A954C  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004A954F  57                        PUSH EDI
004A9550  8D 55 AC                  LEA EDX,[EBP + -0x54]
004A9553  8D 4D A8                  LEA ECX,[EBP + -0x58]
004A9556  6A 00                     PUSH 0x0
004A9558  52                        PUSH EDX
004A9559  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004A955C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A9562  E8 89 42 28 00            CALL 0x0072d7f0
004A9567  8B F0                     MOV ESI,EAX
004A9569  83 C4 08                  ADD ESP,0x8
004A956C  85 F6                     TEST ESI,ESI
004A956E  0F 85 F2 02 00 00         JNZ 0x004a9866
004A9574  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004A9577  83 EC 08                  SUB ESP,0x8
004A957A  DB 05 70 75 80 00         FILD dword ptr [0x00807570]
004A9580  C1 E6 04                  SHL ESI,0x4
004A9583  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
004A958D  C7 05 30 74 80 00 00 00 20 40  MOV dword ptr [0x00807430],0x40200000
004A9597  8B 96 70 75 80 00         MOV EDX,dword ptr [ESI + 0x807570]
004A959D  8B BE 74 75 80 00         MOV EDI,dword ptr [ESI + 0x807574]
004A95A3  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004A95A6  8B 86 68 75 80 00         MOV EAX,dword ptr [ESI + 0x807568]
004A95AC  DB 45 F0                  FILD dword ptr [EBP + -0x10]
004A95AF  8B 8E 6C 75 80 00         MOV ECX,dword ptr [ESI + 0x80756c]
004A95B5  89 3D 0C 74 80 00         MOV dword ptr [0x0080740c],EDI
004A95BB  89 3D 1C 74 80 00         MOV dword ptr [0x0080741c],EDI
004A95C1  8B 3D 3C 74 80 00         MOV EDI,dword ptr [0x0080743c]
004A95C7  D8 0D 80 C5 7A 00         FMUL float ptr [0x007ac580]
004A95CD  A3 00 74 80 00            MOV [0x00807400],EAX
004A95D2  89 0D 04 74 80 00         MOV dword ptr [0x00807404],ECX
004A95D8  89 15 08 74 80 00         MOV dword ptr [0x00807408],EDX
004A95DE  A3 10 74 80 00            MOV [0x00807410],EAX
004A95E3  D8 F1                     FDIV ST0,ST1
004A95E5  89 0D 14 74 80 00         MOV dword ptr [0x00807414],ECX
004A95EB  89 15 18 74 80 00         MOV dword ptr [0x00807418],EDX
004A95F1  81 E7 FF 00 00 00         AND EDI,0xff
004A95F7  C7 05 34 74 80 00 00 00 80 3F  MOV dword ptr [0x00807434],0x3f800000
004A9601  C7 05 38 74 80 00 00 00 80 3F  MOV dword ptr [0x00807438],0x3f800000
004A960B  C6 05 3C 74 80 00 00      MOV byte ptr [0x0080743c],0x0
004A9612  D9 1D 20 74 80 00         FSTP float ptr [0x00807420]
004A9618  D9 05 80 C5 7A 00         FLD float ptr [0x007ac580]
004A961E  D8 F1                     FDIV ST0,ST1
004A9620  D8 3D F8 04 79 00         FDIVR float ptr [0x007904f8]
004A9626  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
004A962C  DD 1C 24                  FSTP double ptr [ESP]
004A962F  DD D8                     FSTP ST0
004A9631  E8 1A 4B 28 00            CALL 0x0072e150
004A9636  DC 3D 80 05 79 00         FDIVR double ptr [0x00790580]
004A963C  8B 86 74 75 80 00         MOV EAX,dword ptr [ESI + 0x807574]
004A9642  83 EC 08                  SUB ESP,0x8
004A9645  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004A9648  83 EC 08                  SUB ESP,0x8
004A964B  8B 0D 20 74 80 00         MOV ECX,dword ptr [0x00807420]
004A9651  83 EC 08                  SUB ESP,0x8
004A9654  89 0D 28 74 80 00         MOV dword ptr [0x00807428],ECX
004A965A  8B 8E 6C 75 80 00         MOV ECX,dword ptr [ESI + 0x80756c]
004A9660  C7 05 3D 74 80 00 00 00 00 00  MOV dword ptr [0x0080743d],0x0
004A966A  C7 05 41 74 80 00 00 00 00 00  MOV dword ptr [0x00807441],0x0
004A9674  C7 05 45 74 80 00 00 00 00 00  MOV dword ptr [0x00807445],0x0
004A967E  C7 05 49 74 80 00 00 00 00 00  MOV dword ptr [0x00807449],0x0
004A9688  C7 05 4D 74 80 00 00 00 00 00  MOV dword ptr [0x0080744d],0x0
004A9692  C7 05 51 74 80 00 00 00 00 00  MOV dword ptr [0x00807451],0x0
004A969C  C7 05 55 74 80 00 00 00 00 00  MOV dword ptr [0x00807455],0x0
004A96A6  C7 05 59 74 80 00 00 00 00 00  MOV dword ptr [0x00807459],0x0
004A96B0  DB 45 F0                  FILD dword ptr [EBP + -0x10]
004A96B3  D8 C9                     FMUL ST1
004A96B5  D9 1D 24 74 80 00         FSTP float ptr [0x00807424]
004A96BB  8B 15 24 74 80 00         MOV EDX,dword ptr [0x00807424]
004A96C1  DD D8                     FSTP ST0
004A96C3  D9 05 24 74 80 00         FLD float ptr [0x00807424]
004A96C9  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A96CF  89 15 2C 74 80 00         MOV dword ptr [0x0080742c],EDX
004A96D5  8B 96 68 75 80 00         MOV EDX,dword ptr [ESI + 0x807568]
004A96DB  DD 5C 24 18               FSTP double ptr [ESP + 0x18]
004A96DF  D9 05 24 74 80 00         FLD float ptr [0x00807424]
004A96E5  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A96EB  DD 5C 24 10               FSTP double ptr [ESP + 0x10]
004A96EF  D9 05 20 74 80 00         FLD float ptr [0x00807420]
004A96F5  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A96FB  DD 5C 24 08               FSTP double ptr [ESP + 0x8]
004A96FF  D9 05 20 74 80 00         FLD float ptr [0x00807420]
004A9705  D8 0D 80 07 79 00         FMUL float ptr [0x00790780]
004A970B  DD 1C 24                  FSTP double ptr [ESP]
004A970E  50                        PUSH EAX
004A970F  8B 86 70 75 80 00         MOV EAX,dword ptr [ESI + 0x807570]
004A9715  50                        PUSH EAX
004A9716  A1 9C 75 80 00            MOV EAX,[0x0080759c]
004A971B  51                        PUSH ECX
004A971C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9722  52                        PUSH EDX
004A9723  50                        PUSH EAX
004A9724  E8 F7 25 23 00            CALL 0x006dbd20
004A9729  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A972C  8D 55 F8                  LEA EDX,[EBP + -0x8]
004A972F  51                        PUSH ECX
004A9730  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9736  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A9739  52                        PUSH EDX
004A973A  50                        PUSH EAX
004A973B  E8 F0 3D 23 00            CALL 0x006dd530
004A9740  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A9743  D8 25 7C 07 79 00         FSUB float ptr [0x0079077c]
004A9749  51                        PUSH ECX
004A974A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9750  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9756  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A975C  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A9762  DE E9                     FSUBP
004A9764  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A976A  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
004A9770  DE E9                     FSUBP
004A9772  D9 1C 24                  FSTP float ptr [ESP]
004A9775  E8 16 40 23 00            CALL 0x006dd790
004A977A  D9 45 FC                  FLD float ptr [EBP + -0x4]
004A977D  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
004A9783  D9 05 2C 74 80 00         FLD float ptr [0x0080742c]
004A9789  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
004A978F  51                        PUSH ECX
004A9790  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004A9796  DE C1                     FADDP
004A9798  DC 05 60 07 79 00         FADD double ptr [0x00790760]
004A979E  D9 1C 24                  FSTP float ptr [ESP]
004A97A1  E8 5A 40 23 00            CALL 0x006dd800
004A97A6  8B 0D 1C 74 80 00         MOV ECX,dword ptr [0x0080741c]
004A97AC  8B 15 18 74 80 00         MOV EDX,dword ptr [0x00807418]
004A97B2  A1 14 74 80 00            MOV EAX,[0x00807414]
004A97B7  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004A97BA  51                        PUSH ECX
004A97BB  8B 0D 10 74 80 00         MOV ECX,dword ptr [0x00807410]
004A97C1  52                        PUSH EDX
004A97C2  50                        PUSH EAX
004A97C3  51                        PUSH ECX
004A97C4  8B CE                     MOV ECX,ESI
004A97C6  E8 A2 83 F5 FF            CALL 0x00401b6d
004A97CB  6A 01                     PUSH 0x1
004A97CD  8B CE                     MOV ECX,ESI
004A97CF  E8 73 BD F5 FF            CALL 0x00405547
004A97D4  4F                        DEC EDI
004A97D5  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
004A97DF  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
004A97E9  74 38                     JZ 0x004a9823
004A97EB  4F                        DEC EDI
004A97EC  75 67                     JNZ 0x004a9855
004A97EE  6A 01                     PUSH 0x1
004A97F0  8B CE                     MOV ECX,ESI
004A97F2  E8 50 A4 F5 FF            CALL 0x00403c47
004A97F7  6A 01                     PUSH 0x1
004A97F9  8B CE                     MOV ECX,ESI
004A97FB  E8 47 A4 F5 FF            CALL 0x00403c47
004A9800  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
004A9806  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A980B  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
004A9811  81 E2 FF 00 00 00         AND EDX,0xff
004A9817  52                        PUSH EDX
004A9818  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
004A981E  50                        PUSH EAX
004A981F  51                        PUSH ECX
004A9820  52                        PUSH EDX
004A9821  EB 28                     JMP 0x004a984b
LAB_004a9823:
004A9823  6A 01                     PUSH 0x1
004A9825  8B CE                     MOV ECX,ESI
004A9827  E8 1B A4 F5 FF            CALL 0x00403c47
004A982C  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004A9831  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004A9837  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004A983D  25 FF 00 00 00            AND EAX,0xff
004A9842  50                        PUSH EAX
004A9843  A1 D8 73 80 00            MOV EAX,[0x008073d8]
004A9848  51                        PUSH ECX
004A9849  52                        PUSH EDX
004A984A  50                        PUSH EAX
LAB_004a984b:
004A984B  B9 58 76 80 00            MOV ECX,0x807658
004A9850  E8 7F 9E F5 FF            CALL 0x004036d4
LAB_004a9855:
004A9855  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004A9858  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A985E  5F                        POP EDI
004A985F  5E                        POP ESI
004A9860  8B E5                     MOV ESP,EBP
004A9862  5D                        POP EBP
004A9863  C2 04 00                  RET 0x4
LAB_004a9866:
004A9866  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004A9869  68 FC C5 7A 00            PUSH 0x7ac5fc
004A986E  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A9873  56                        PUSH ESI
004A9874  6A 00                     PUSH 0x0
004A9876  68 3C 01 00 00            PUSH 0x13c
004A987B  68 94 C5 7A 00            PUSH 0x7ac594
004A9880  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A9886  E8 45 3C 20 00            CALL 0x006ad4d0
004A988B  83 C4 18                  ADD ESP,0x18
004A988E  85 C0                     TEST EAX,EAX
004A9890  74 01                     JZ 0x004a9893
004A9892  CC                        INT3
LAB_004a9893:
004A9893  68 3D 01 00 00            PUSH 0x13d
004A9898  68 94 C5 7A 00            PUSH 0x7ac594
004A989D  6A 00                     PUSH 0x0
004A989F  56                        PUSH ESI
004A98A0  E8 9B C5 1F 00            CALL 0x006a5e40
004A98A5  5F                        POP EDI
004A98A6  5E                        POP ESI
004A98A7  8B E5                     MOV ESP,EBP
004A98A9  5D                        POP EBP
004A98AA  C2 04 00                  RET 0x4
