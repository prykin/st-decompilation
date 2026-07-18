FUN_004deeb0:
004DEEB0  55                        PUSH EBP
004DEEB1  8B EC                     MOV EBP,ESP
004DEEB3  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DEEB9  83 F8 03                  CMP EAX,0x3
004DEEBC  77 5B                     JA 0x004def19
switchD_004deebe::switchD:
004DEEBE  FF 24 85 20 EF 4D 00      JMP dword ptr [EAX*0x4 + 0x4def20]
switchD_004deebe::caseD_0:
004DEEC5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004DEEC8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DEECB  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004DEED1  C7 01 0E 00 00 00         MOV dword ptr [ECX],0xe
004DEED7  5D                        POP EBP
004DEED8  C2 10 00                  RET 0x10
switchD_004deebe::caseD_1:
004DEEDB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DEEDE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004DEEE1  C7 02 0F 00 00 00         MOV dword ptr [EDX],0xf
004DEEE7  C7 00 1D 00 00 00         MOV dword ptr [EAX],0x1d
004DEEED  5D                        POP EBP
004DEEEE  C2 10 00                  RET 0x10
switchD_004deebe::caseD_2:
004DEEF1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DEEF4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DEEF7  C7 01 2D 00 00 00         MOV dword ptr [ECX],0x2d
004DEEFD  C7 02 2D 00 00 00         MOV dword ptr [EDX],0x2d
004DEF03  5D                        POP EBP
004DEF04  C2 10 00                  RET 0x10
switchD_004deebe::caseD_3:
004DEF07  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004DEF0A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004DEF0D  C7 00 1E 00 00 00         MOV dword ptr [EAX],0x1e
004DEF13  C7 01 2D 00 00 00         MOV dword ptr [ECX],0x2d
switchD_004deebe::default:
004DEF19  5D                        POP EBP
004DEF1A  C2 10 00                  RET 0x10
