FUN_0052a0d0:
0052A0D0  55                        PUSH EBP
0052A0D1  8B EC                     MOV EBP,ESP
0052A0D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A0D6  B8 01 00 00 00            MOV EAX,0x1
0052A0DB  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A0DE  83 F9 03                  CMP ECX,0x3
0052A0E1  77 1E                     JA 0x0052a101
switchD_0052a0e3::switchD:
0052A0E3  FF 24 8D 04 A1 52 00      JMP dword ptr [ECX*0x4 + 0x52a104]
switchD_0052a0e3::caseD_3:
0052A0EA  B8 03 00 00 00            MOV EAX,0x3
0052A0EF  5D                        POP EBP
0052A0F0  C3                        RET
switchD_0052a0e3::caseD_0:
0052A0F1  33 C0                     XOR EAX,EAX
0052A0F3  5D                        POP EBP
0052A0F4  C3                        RET
switchD_0052a0e3::caseD_1:
0052A0F5  B8 01 00 00 00            MOV EAX,0x1
0052A0FA  5D                        POP EBP
0052A0FB  C3                        RET
switchD_0052a0e3::caseD_2:
0052A0FC  B8 02 00 00 00            MOV EAX,0x2
switchD_0052a0e3::default:
0052A101  5D                        POP EBP
0052A102  C3                        RET
