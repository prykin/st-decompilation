FUN_004cc040:
004CC040  8B 91 AC 05 00 00         MOV EDX,dword ptr [ECX + 0x5ac]
004CC046  56                        PUSH ESI
004CC047  33 C0                     XOR EAX,EAX
004CC049  8D 72 CE                  LEA ESI,[EDX + -0x32]
004CC04C  83 FE 40                  CMP ESI,0x40
004CC04F  77 3E                     JA 0x004cc08f
004CC051  33 D2                     XOR EDX,EDX
004CC053  8A 96 B4 C0 4C 00         MOV DL,byte ptr [ESI + 0x4cc0b4]
switchD_004cc059::switchD:
004CC059  FF 24 95 94 C0 4C 00      JMP dword ptr [EDX*0x4 + 0x4cc094]
switchD_004cc059::caseD_45:
004CC060  E8 63 55 F3 FF            CALL 0x004015c8
004CC065  5E                        POP ESI
004CC066  C3                        RET
switchD_004cc059::caseD_4e:
004CC067  E8 A7 5F F3 FF            CALL 0x00402013
004CC06C  5E                        POP ESI
004CC06D  C3                        RET
switchD_004cc059::caseD_72:
004CC06E  E8 ED 94 F3 FF            CALL 0x00405560
004CC073  5E                        POP ESI
004CC074  C3                        RET
switchD_004cc059::caseD_32:
004CC075  E8 96 71 F3 FF            CALL 0x00403210
004CC07A  5E                        POP ESI
004CC07B  C3                        RET
switchD_004cc059::caseD_52:
004CC07C  E8 7E 55 F3 FF            CALL 0x004015ff
004CC081  5E                        POP ESI
004CC082  C3                        RET
switchD_004cc059::caseD_70:
004CC083  E8 9C 76 F3 FF            CALL 0x00403724
004CC088  5E                        POP ESI
004CC089  C3                        RET
switchD_004cc059::caseD_69:
004CC08A  E8 52 5A F3 FF            CALL 0x00401ae1
switchD_004cc059::caseD_33:
004CC08F  5E                        POP ESI
004CC090  C3                        RET
