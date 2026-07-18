FUN_005fb030:
005FB030  8B 81 DD 02 00 00         MOV EAX,dword ptr [ECX + 0x2dd]
005FB036  8D 50 FF                  LEA EDX,[EAX + -0x1]
005FB039  83 FA 0B                  CMP EDX,0xb
005FB03C  77 52                     JA 0x005fb090
005FB03E  B8 01 00 00 00            MOV EAX,0x1
switchD_005fb043::switchD:
005FB043  FF 24 95 94 B0 5F 00      JMP dword ptr [EDX*0x4 + 0x5fb094]
switchD_005fb043::caseD_1:
005FB04A  C7 81 EA 02 00 00 01 00 00 00  MOV dword ptr [ECX + 0x2ea],0x1
005FB054  C6 81 EE 02 00 00 00      MOV byte ptr [ECX + 0x2ee],0x0
005FB05B  C3                        RET
switchD_005fb043::caseD_3:
005FB05C  C7 81 EF 02 00 00 00 00 00 00  MOV dword ptr [ECX + 0x2ef],0x0
switchD_005fb043::caseD_2:
005FB066  B8 01 00 00 00            MOV EAX,0x1
005FB06B  89 81 EA 02 00 00         MOV dword ptr [ECX + 0x2ea],EAX
005FB071  88 81 EE 02 00 00         MOV byte ptr [ECX + 0x2ee],AL
005FB077  C3                        RET
switchD_005fb043::caseD_5:
005FB078  89 81 EA 02 00 00         MOV dword ptr [ECX + 0x2ea],EAX
005FB07E  88 81 EE 02 00 00         MOV byte ptr [ECX + 0x2ee],AL
switchD_005fb043::caseD_8:
005FB084  89 81 EA 02 00 00         MOV dword ptr [ECX + 0x2ea],EAX
005FB08A  88 81 EE 02 00 00         MOV byte ptr [ECX + 0x2ee],AL
switchD_005fb043::caseD_7:
005FB090  C3                        RET
