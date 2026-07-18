FUN_0052a230:
0052A230  55                        PUSH EBP
0052A231  8B EC                     MOV EBP,ESP
0052A233  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A236  33 C0                     XOR EAX,EAX
0052A238  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A23B  83 F9 03                  CMP ECX,0x3
0052A23E  77 1A                     JA 0x0052a25a
switchD_0052a240::switchD:
0052A240  FF 24 8D 5C A2 52 00      JMP dword ptr [ECX*0x4 + 0x52a25c]
switchD_0052a240::caseD_2:
0052A247  B8 08 00 00 00            MOV EAX,0x8
0052A24C  5D                        POP EBP
0052A24D  C3                        RET
switchD_0052a240::caseD_0:
0052A24E  B8 09 00 00 00            MOV EAX,0x9
0052A253  5D                        POP EBP
0052A254  C3                        RET
switchD_0052a240::caseD_1:
0052A255  B8 07 00 00 00            MOV EAX,0x7
switchD_0052a240::default:
0052A25A  5D                        POP EBP
0052A25B  C3                        RET
