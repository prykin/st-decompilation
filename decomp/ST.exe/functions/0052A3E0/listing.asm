FUN_0052a3e0:
0052A3E0  55                        PUSH EBP
0052A3E1  8B EC                     MOV EBP,ESP
0052A3E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A3E6  B8 01 00 00 00            MOV EAX,0x1
0052A3EB  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A3EE  83 F9 03                  CMP ECX,0x3
0052A3F1  77 10                     JA 0x0052a403
switchD_0052a3f3::switchD:
0052A3F3  FF 24 8D 08 A4 52 00      JMP dword ptr [ECX*0x4 + 0x52a408]
switchD_0052a3f3::caseD_2:
0052A3FA  33 C0                     XOR EAX,EAX
0052A3FC  5D                        POP EBP
0052A3FD  C3                        RET
switchD_0052a3f3::caseD_0:
0052A3FE  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a3f3::default:
0052A403  5D                        POP EBP
0052A404  C3                        RET
