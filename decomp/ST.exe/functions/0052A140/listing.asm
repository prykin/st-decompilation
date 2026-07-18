FUN_0052a140:
0052A140  55                        PUSH EBP
0052A141  8B EC                     MOV EBP,ESP
0052A143  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A146  B8 01 00 00 00            MOV EAX,0x1
0052A14B  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A14E  83 F9 03                  CMP ECX,0x3
0052A151  77 10                     JA 0x0052a163
switchD_0052a153::switchD:
0052A153  FF 24 8D 68 A1 52 00      JMP dword ptr [ECX*0x4 + 0x52a168]
switchD_0052a153::caseD_0:
0052A15A  33 C0                     XOR EAX,EAX
0052A15C  5D                        POP EBP
0052A15D  C3                        RET
switchD_0052a153::caseD_2:
0052A15E  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a153::default:
0052A163  5D                        POP EBP
0052A164  C3                        RET
