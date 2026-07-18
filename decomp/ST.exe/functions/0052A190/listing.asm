FUN_0052a190:
0052A190  55                        PUSH EBP
0052A191  8B EC                     MOV EBP,ESP
0052A193  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A196  B8 01 00 00 00            MOV EAX,0x1
0052A19B  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A19E  83 F9 03                  CMP ECX,0x3
0052A1A1  77 10                     JA 0x0052a1b3
switchD_0052a1a3::switchD:
0052A1A3  FF 24 8D B8 A1 52 00      JMP dword ptr [ECX*0x4 + 0x52a1b8]
switchD_0052a1a3::caseD_0:
0052A1AA  33 C0                     XOR EAX,EAX
0052A1AC  5D                        POP EBP
0052A1AD  C3                        RET
switchD_0052a1a3::caseD_2:
0052A1AE  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a1a3::default:
0052A1B3  5D                        POP EBP
0052A1B4  C3                        RET
