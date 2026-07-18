FUN_0052a320:
0052A320  55                        PUSH EBP
0052A321  8B EC                     MOV EBP,ESP
0052A323  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052A326  33 C9                     XOR ECX,ECX
0052A328  B8 01 00 00 00            MOV EAX,0x1
0052A32D  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
0052A331  83 F9 03                  CMP ECX,0x3
0052A334  77 1E                     JA 0x0052a354
switchD_0052a336::switchD:
0052A336  FF 24 8D 58 A3 52 00      JMP dword ptr [ECX*0x4 + 0x52a358]
switchD_0052a336::caseD_3:
0052A33D  B8 03 00 00 00            MOV EAX,0x3
0052A342  5D                        POP EBP
0052A343  C3                        RET
switchD_0052a336::caseD_0:
0052A344  33 C0                     XOR EAX,EAX
0052A346  5D                        POP EBP
0052A347  C3                        RET
switchD_0052a336::caseD_1:
0052A348  B8 01 00 00 00            MOV EAX,0x1
0052A34D  5D                        POP EBP
0052A34E  C3                        RET
switchD_0052a336::caseD_2:
0052A34F  B8 02 00 00 00            MOV EAX,0x2
switchD_0052a336::default:
0052A354  5D                        POP EBP
0052A355  C3                        RET
