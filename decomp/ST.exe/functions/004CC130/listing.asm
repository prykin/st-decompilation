FUN_004cc130:
004CC130  8B 91 AC 05 00 00         MOV EDX,dword ptr [ECX + 0x5ac]
004CC136  56                        PUSH ESI
004CC137  33 C0                     XOR EAX,EAX
004CC139  8D 72 CE                  LEA ESI,[EDX + -0x32]
004CC13C  83 FE 40                  CMP ESI,0x40
004CC13F  77 3E                     JA 0x004cc17f
004CC141  33 D2                     XOR EDX,EDX
004CC143  8A 96 A4 C1 4C 00         MOV DL,byte ptr [ESI + 0x4cc1a4]
switchD_004cc149::switchD:
004CC149  FF 24 95 84 C1 4C 00      JMP dword ptr [EDX*0x4 + 0x4cc184]
switchD_004cc149::caseD_45:
004CC150  E8 02 75 F3 FF            CALL 0x00403657
004CC155  5E                        POP ESI
004CC156  C3                        RET
switchD_004cc149::caseD_4e:
004CC157  E8 0F 75 F3 FF            CALL 0x0040366b
004CC15C  5E                        POP ESI
004CC15D  C3                        RET
switchD_004cc149::caseD_72:
004CC15E  E8 EA 51 F3 FF            CALL 0x0040134d
004CC163  5E                        POP ESI
004CC164  C3                        RET
switchD_004cc149::caseD_32:
004CC165  E8 45 7C F3 FF            CALL 0x00403daf
004CC16A  5E                        POP ESI
004CC16B  C3                        RET
switchD_004cc149::caseD_52:
004CC16C  E8 5B 5F F3 FF            CALL 0x004020cc
004CC171  5E                        POP ESI
004CC172  C3                        RET
switchD_004cc149::caseD_70:
004CC173  E8 70 89 F3 FF            CALL 0x00404ae8
004CC178  5E                        POP ESI
004CC179  C3                        RET
switchD_004cc149::caseD_69:
004CC17A  E8 53 90 F3 FF            CALL 0x004051d2
switchD_004cc149::caseD_33:
004CC17F  5E                        POP ESI
004CC180  C3                        RET
