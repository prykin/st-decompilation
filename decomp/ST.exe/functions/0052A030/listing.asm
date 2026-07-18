FUN_0052a030:
0052A030  55                        PUSH EBP
0052A031  8B EC                     MOV EBP,ESP
0052A033  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A036  33 C0                     XOR EAX,EAX
0052A038  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A03B  83 F9 03                  CMP ECX,0x3
0052A03E  77 17                     JA 0x0052a057
switchD_0052a040::switchD:
0052A040  FF 24 8D 5C A0 52 00      JMP dword ptr [ECX*0x4 + 0x52a05c]
switchD_0052a040::caseD_2:
0052A047  33 C0                     XOR EAX,EAX
0052A049  5D                        POP EBP
0052A04A  C3                        RET
switchD_0052a040::caseD_0:
0052A04B  B8 02 00 00 00            MOV EAX,0x2
0052A050  5D                        POP EBP
0052A051  C3                        RET
switchD_0052a040::caseD_1:
0052A052  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a040::default:
0052A057  5D                        POP EBP
0052A058  C3                        RET
