FUN_00682df0:
00682DF0  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00682DF6  8D 41 DE                  LEA EAX,[ECX + -0x22]
00682DF9  83 F8 1A                  CMP EAX,0x1a
00682DFC  77 3A                     JA 0x00682e38
00682DFE  33 D2                     XOR EDX,EDX
00682E00  8A 90 70 2E 68 00         MOV DL,byte ptr [EAX + 0x682e70]
switchD_00682e06::switchD:
00682E06  FF 24 95 58 2E 68 00      JMP dword ptr [EDX*0x4 + 0x682e58]
switchD_00682e06::caseD_22:
00682E0D  E9 AF 1B D8 FF            JMP 0x004049c1
switchD_00682e06::caseD_29:
00682E12  6A 29                     PUSH 0x29
00682E14  E8 A4 24 D8 FF            CALL 0x004052bd
00682E19  E8 08 20 D8 FF            CALL 0x00404e26
00682E1E  6A 39                     PUSH 0x39
00682E20  E8 98 24 D8 FF            CALL 0x004052bd
00682E25  83 C4 08                  ADD ESP,0x8
00682E28  C3                        RET
switchD_00682e06::caseD_25:
00682E29  E9 85 1F D8 FF            JMP 0x00404db3
switchD_00682e06::caseD_37:
00682E2E  E9 A6 0D D8 FF            JMP 0x00403bd9
switchD_00682e06::caseD_3c:
00682E33  E9 F3 F7 D7 FF            JMP 0x0040262b
switchD_00682e06::caseD_23:
00682E38  51                        PUSH ECX
00682E39  E8 71 0A D8 FF            CALL 0x004038af
00682E3E  83 C4 04                  ADD ESP,0x4
00682E41  85 C0                     TEST EAX,EAX
00682E43  7C 05                     JL 0x00682e4a
00682E45  E9 ED 13 D8 FF            JMP 0x00404237
LAB_00682e4a:
00682E4A  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00682E4F  50                        PUSH EAX
00682E50  E8 89 2B D8 FF            CALL 0x004059de
00682E55  59                        POP ECX
00682E56  C3                        RET
