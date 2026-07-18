FUN_0072de40:
0072DE40  55                        PUSH EBP
0072DE41  8B EC                     MOV EBP,ESP
0072DE43  51                        PUSH ECX
0072DE44  A1 40 71 85 00            MOV EAX,[0x00857140]
0072DE49  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072DE4C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072DE4F  89 0D 40 71 85 00         MOV dword ptr [0x00857140],ECX
0072DE55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072DE58  8B E5                     MOV ESP,EBP
0072DE5A  5D                        POP EBP
0072DE5B  C3                        RET
