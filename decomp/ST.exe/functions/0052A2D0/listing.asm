FUN_0052a2d0:
0052A2D0  55                        PUSH EBP
0052A2D1  8B EC                     MOV EBP,ESP
0052A2D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A2D6  B8 01 00 00 00            MOV EAX,0x1
0052A2DB  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A2DE  83 F9 03                  CMP ECX,0x3
0052A2E1  77 10                     JA 0x0052a2f3
switchD_0052a2e3::switchD:
0052A2E3  FF 24 8D F8 A2 52 00      JMP dword ptr [ECX*0x4 + 0x52a2f8]
switchD_0052a2e3::caseD_2:
0052A2EA  33 C0                     XOR EAX,EAX
0052A2EC  5D                        POP EBP
0052A2ED  C3                        RET
switchD_0052a2e3::caseD_0:
0052A2EE  B8 01 00 00 00            MOV EAX,0x1
switchD_0052a2e3::default:
0052A2F3  5D                        POP EBP
0052A2F4  C3                        RET
