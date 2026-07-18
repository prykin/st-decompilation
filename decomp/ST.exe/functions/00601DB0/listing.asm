FUN_00601db0:
00601DB0  55                        PUSH EBP
00601DB1  8B EC                     MOV EBP,ESP
00601DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00601DB6  3D FE 00 00 00            CMP EAX,0xfe
00601DBB  77 39                     JA 0x00601df6
00601DBD  33 C9                     XOR ECX,ECX
00601DBF  8A 88 18 1E 60 00         MOV CL,byte ptr [EAX + 0x601e18]
switchD_00601dc5::switchD:
00601DC5  FF 24 8D 00 1E 60 00      JMP dword ptr [ECX*0x4 + 0x601e00]
switchD_00601dc5::caseD_0:
00601DCC  33 C0                     XOR EAX,EAX
00601DCE  5D                        POP EBP
00601DCF  C2 04 00                  RET 0x4
switchD_00601dc5::caseD_fe:
00601DD2  B8 05 00 00 00            MOV EAX,0x5
00601DD7  5D                        POP EBP
00601DD8  C2 04 00                  RET 0x4
switchD_00601dc5::caseD_fd:
00601DDB  B8 02 00 00 00            MOV EAX,0x2
00601DE0  5D                        POP EBP
00601DE1  C2 04 00                  RET 0x4
switchD_00601dc5::caseD_dc:
00601DE4  B8 04 00 00 00            MOV EAX,0x4
00601DE9  5D                        POP EBP
00601DEA  C2 04 00                  RET 0x4
switchD_00601dc5::caseD_a6:
00601DED  B8 03 00 00 00            MOV EAX,0x3
00601DF2  5D                        POP EBP
00601DF3  C2 04 00                  RET 0x4
switchD_00601dc5::caseD_1:
00601DF6  B8 01 00 00 00            MOV EAX,0x1
00601DFB  5D                        POP EBP
00601DFC  C2 04 00                  RET 0x4
