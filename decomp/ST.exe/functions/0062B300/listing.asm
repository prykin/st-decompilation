FUN_0062b300:
0062B300  33 C0                     XOR EAX,EAX
0062B302  56                        PUSH ESI
0062B303  8A 41 15                  MOV AL,byte ptr [ECX + 0x15]
0062B306  33 F6                     XOR ESI,ESI
0062B308  8D 50 FF                  LEA EDX,[EAX + -0x1]
0062B30B  83 FA 7F                  CMP EDX,0x7f
0062B30E  77 39                     JA 0x0062b349
0062B310  33 C0                     XOR EAX,EAX
0062B312  8A 82 60 B3 62 00         MOV AL,byte ptr [EDX + 0x62b360]
switchD_0062b318::switchD:
0062B318  FF 24 85 50 B3 62 00      JMP dword ptr [EAX*0x4 + 0x62b350]
switchD_0062b318::caseD_1:
0062B31F  80 79 14 03               CMP byte ptr [ECX + 0x14],0x3
0062B323  77 24                     JA 0x0062b349
0062B325  BE 01 00 00 00            MOV ESI,0x1
0062B32A  8B C6                     MOV EAX,ESI
0062B32C  5E                        POP ESI
0062B32D  C3                        RET
switchD_0062b318::caseD_2:
0062B32E  80 79 14 06               CMP byte ptr [ECX + 0x14],0x6
0062B332  77 15                     JA 0x0062b349
0062B334  BE 01 00 00 00            MOV ESI,0x1
0062B339  8B C6                     MOV EAX,ESI
0062B33B  5E                        POP ESI
0062B33C  C3                        RET
switchD_0062b318::caseD_80:
0062B33D  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
0062B340  84 C0                     TEST AL,AL
0062B342  75 05                     JNZ 0x0062b349
0062B344  BE 01 00 00 00            MOV ESI,0x1
switchD_0062b318::caseD_3:
0062B349  8B C6                     MOV EAX,ESI
0062B34B  5E                        POP ESI
0062B34C  C3                        RET
