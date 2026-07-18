FUN_0052a280:
0052A280  55                        PUSH EBP
0052A281  8B EC                     MOV EBP,ESP
0052A283  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A286  B8 05 00 00 00            MOV EAX,0x5
0052A28B  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A28E  83 F9 03                  CMP ECX,0x3
0052A291  77 1A                     JA 0x0052a2ad
switchD_0052a293::switchD:
0052A293  FF 24 8D B0 A2 52 00      JMP dword ptr [ECX*0x4 + 0x52a2b0]
switchD_0052a293::caseD_2:
0052A29A  B8 04 00 00 00            MOV EAX,0x4
0052A29F  5D                        POP EBP
0052A2A0  C3                        RET
switchD_0052a293::caseD_0:
0052A2A1  B8 06 00 00 00            MOV EAX,0x6
0052A2A6  5D                        POP EBP
0052A2A7  C3                        RET
switchD_0052a293::caseD_1:
0052A2A8  B8 05 00 00 00            MOV EAX,0x5
switchD_0052a293::default:
0052A2AD  5D                        POP EBP
0052A2AE  C3                        RET
