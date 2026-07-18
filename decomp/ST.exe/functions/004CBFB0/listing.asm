FUN_004cbfb0:
004CBFB0  8B 81 AC 05 00 00         MOV EAX,dword ptr [ECX + 0x5ac]
004CBFB6  56                        PUSH ESI
004CBFB7  33 F6                     XOR ESI,ESI
004CBFB9  8D 50 CE                  LEA EDX,[EAX + -0x32]
004CBFBC  83 FA 2D                  CMP EDX,0x2d
004CBFBF  77 1F                     JA 0x004cbfe0
004CBFC1  33 C0                     XOR EAX,EAX
004CBFC3  8A 82 F0 BF 4C 00         MOV AL,byte ptr [EDX + 0x4cbff0]
switchD_004cbfc9::switchD:
004CBFC9  FF 24 85 E4 BF 4C 00      JMP dword ptr [EAX*0x4 + 0x4cbfe4]
switchD_004cbfc9::caseD_32:
004CBFD0  E8 EE 91 F3 FF            CALL 0x004051c3
004CBFD5  8B F0                     MOV ESI,EAX
004CBFD7  5E                        POP ESI
004CBFD8  C3                        RET
switchD_004cbfc9::caseD_52:
004CBFD9  E8 1C 88 F3 FF            CALL 0x004047fa
004CBFDE  8B F0                     MOV ESI,EAX
switchD_004cbfc9::caseD_33:
004CBFE0  8B C6                     MOV EAX,ESI
004CBFE2  5E                        POP ESI
004CBFE3  C3                        RET
