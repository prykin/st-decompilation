FUN_00627670:
00627670  33 D2                     XOR EDX,EDX
00627672  33 C0                     XOR EAX,EAX
00627674  8A 91 AD 02 00 00         MOV DL,byte ptr [ECX + 0x2ad]
0062767A  83 FA 03                  CMP EDX,0x3
0062767D  77 26                     JA 0x006276a5
switchD_0062767f::switchD:
0062767F  FF 24 95 A8 76 62 00      JMP dword ptr [EDX*0x4 + 0x6276a8]
switchD_0062767f::caseD_0:
00627686  A1 A8 65 7E 00            MOV EAX,[0x007e65a8]
0062768B  C3                        RET
switchD_0062767f::caseD_1:
0062768C  A1 BC 65 7E 00            MOV EAX,[0x007e65bc]
00627691  C3                        RET
switchD_0062767f::caseD_2:
00627692  A1 74 67 7E 00            MOV EAX,[0x007e6774]
00627697  C3                        RET
switchD_0062767f::caseD_3:
00627698  8B 81 4E 03 00 00         MOV EAX,dword ptr [ECX + 0x34e]
0062769E  8B 04 85 84 02 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d0284]
switchD_0062767f::default:
006276A5  C3                        RET
