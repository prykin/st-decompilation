FUN_0052a390:
0052A390  55                        PUSH EBP
0052A391  8B EC                     MOV EBP,ESP
0052A393  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A396  B8 01 00 00 00            MOV EAX,0x1
0052A39B  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A39E  83 F9 03                  CMP ECX,0x3
0052A3A1  77 10                     JA 0x0052a3b3
switchD_0052a3a3::switchD:
0052A3A3  FF 24 8D B8 A3 52 00      JMP dword ptr [ECX*0x4 + 0x52a3b8]
switchD_0052a3a3::caseD_2:
0052A3AA  33 C0                     XOR EAX,EAX
0052A3AC  5D                        POP EBP
0052A3AD  C3                        RET
switchD_0052a3a3::caseD_0:
0052A3AE  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a3a3::default:
0052A3B3  5D                        POP EBP
0052A3B4  C3                        RET
