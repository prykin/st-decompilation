FUN_0052a080:
0052A080  55                        PUSH EBP
0052A081  8B EC                     MOV EBP,ESP
0052A083  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052A086  33 C0                     XOR EAX,EAX
0052A088  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052A08B  83 F9 03                  CMP ECX,0x3
0052A08E  77 10                     JA 0x0052a0a0
switchD_0052a090::switchD:
0052A090  FF 24 8D A4 A0 52 00      JMP dword ptr [ECX*0x4 + 0x52a0a4]
switchD_0052a090::caseD_2:
0052A097  B8 01 00 00 00            MOV EAX,0x1
0052A09C  5D                        POP EBP
0052A09D  C3                        RET
switchD_0052a090::caseD_0:
0052A09E  33 C0                     XOR EAX,EAX
switchD_0052a090::default:
0052A0A0  5D                        POP EBP
0052A0A1  C3                        RET
