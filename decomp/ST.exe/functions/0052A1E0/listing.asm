FUN_0052a1e0:
0052A1E0  55                        PUSH EBP
0052A1E1  8B EC                     MOV EBP,ESP
0052A1E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A1E6  33 C0                     XOR EAX,EAX
0052A1E8  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A1EB  83 F9 03                  CMP ECX,0x3
0052A1EE  77 17                     JA 0x0052a207
switchD_0052a1f0::switchD:
0052A1F0  FF 24 8D 0C A2 52 00      JMP dword ptr [ECX*0x4 + 0x52a20c]
switchD_0052a1f0::caseD_2:
0052A1F7  B8 01 00 00 00            MOV EAX,0x1
0052A1FC  5D                        POP EBP
0052A1FD  C3                        RET
switchD_0052a1f0::caseD_0:
0052A1FE  B8 02 00 00 00            MOV EAX,0x2
0052A203  5D                        POP EBP
0052A204  C3                        RET
switchD_0052a1f0::caseD_1:
0052A205  33 C0                     XOR EAX,EAX
switchD_0052a1f0::default:
0052A207  5D                        POP EBP
0052A208  C3                        RET
