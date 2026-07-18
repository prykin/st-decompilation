FUN_00525ef0:
00525EF0  55                        PUSH EBP
00525EF1  8B EC                     MOV EBP,ESP
00525EF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00525EF6  33 C0                     XOR EAX,EAX
00525EF8  81 E1 FF 00 00 00         AND ECX,0xff
00525EFE  49                        DEC ECX
00525EFF  83 F9 03                  CMP ECX,0x3
00525F02  0F 87 DF 00 00 00         JA 0x00525fe7
switchD_00525f08::switchD:
00525F08  FF 24 8D EC 5F 52 00      JMP dword ptr [ECX*0x4 + 0x525fec]
switchD_00525f08::caseD_1:
00525F0F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00525F12  81 E1 FF 00 00 00         AND ECX,0xff
00525F18  83 F9 04                  CMP ECX,0x4
00525F1B  0F 87 C6 00 00 00         JA 0x00525fe7
switchD_00525f21::switchD:
00525F21  FF 24 8D FC 5F 52 00      JMP dword ptr [ECX*0x4 + 0x525ffc]
switchD_00525f21::caseD_1:
00525F28  B8 6B 31 00 00            MOV EAX,0x316b
00525F2D  5D                        POP EBP
00525F2E  C3                        RET
switchD_00525f21::caseD_2:
00525F2F  B8 6C 31 00 00            MOV EAX,0x316c
00525F34  5D                        POP EBP
00525F35  C3                        RET
switchD_00525f21::caseD_3:
00525F36  B8 6D 31 00 00            MOV EAX,0x316d
00525F3B  5D                        POP EBP
00525F3C  C3                        RET
switchD_00525f21::caseD_4:
00525F3D  B8 6E 31 00 00            MOV EAX,0x316e
00525F42  5D                        POP EBP
00525F43  C3                        RET
switchD_00525f08::caseD_2:
00525F44  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00525F47  81 E1 FF 00 00 00         AND ECX,0xff
00525F4D  83 F9 05                  CMP ECX,0x5
00525F50  0F 87 91 00 00 00         JA 0x00525fe7
switchD_00525f56::switchD:
00525F56  FF 24 8D 10 60 52 00      JMP dword ptr [ECX*0x4 + 0x526010]
switchD_00525f56::caseD_0:
00525F5D  B8 6A 31 00 00            MOV EAX,0x316a
00525F62  5D                        POP EBP
00525F63  C3                        RET
switchD_00525f56::caseD_1:
00525F64  B8 6F 31 00 00            MOV EAX,0x316f
00525F69  5D                        POP EBP
00525F6A  C3                        RET
switchD_00525f56::caseD_2:
00525F6B  B8 70 31 00 00            MOV EAX,0x3170
00525F70  5D                        POP EBP
00525F71  C3                        RET
switchD_00525f56::caseD_3:
00525F72  B8 71 31 00 00            MOV EAX,0x3171
00525F77  5D                        POP EBP
00525F78  C3                        RET
switchD_00525f56::caseD_4:
00525F79  B8 72 31 00 00            MOV EAX,0x3172
00525F7E  5D                        POP EBP
00525F7F  C3                        RET
switchD_00525f56::caseD_5:
00525F80  B8 73 31 00 00            MOV EAX,0x3173
00525F85  5D                        POP EBP
00525F86  C3                        RET
switchD_00525f08::caseD_4:
00525F87  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00525F8A  81 E1 FF 00 00 00         AND ECX,0xff
00525F90  83 F9 03                  CMP ECX,0x3
00525F93  77 52                     JA 0x00525fe7
switchD_00525f95::switchD:
00525F95  FF 24 8D 28 60 52 00      JMP dword ptr [ECX*0x4 + 0x526028]
switchD_00525f95::caseD_0:
00525F9C  B8 74 31 00 00            MOV EAX,0x3174
00525FA1  5D                        POP EBP
00525FA2  C3                        RET
switchD_00525f95::caseD_1:
00525FA3  B8 75 31 00 00            MOV EAX,0x3175
00525FA8  5D                        POP EBP
00525FA9  C3                        RET
switchD_00525f95::caseD_2:
00525FAA  B8 76 31 00 00            MOV EAX,0x3176
00525FAF  5D                        POP EBP
00525FB0  C3                        RET
switchD_00525f95::caseD_3:
00525FB1  B8 77 31 00 00            MOV EAX,0x3177
00525FB6  5D                        POP EBP
00525FB7  C3                        RET
switchD_00525f08::caseD_3:
00525FB8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00525FBB  81 E1 FF 00 00 00         AND ECX,0xff
00525FC1  83 F9 03                  CMP ECX,0x3
00525FC4  77 21                     JA 0x00525fe7
switchD_00525fc6::switchD:
00525FC6  FF 24 8D 38 60 52 00      JMP dword ptr [ECX*0x4 + 0x526038]
switchD_00525fc6::caseD_0:
00525FCD  B8 78 31 00 00            MOV EAX,0x3178
00525FD2  5D                        POP EBP
00525FD3  C3                        RET
switchD_00525fc6::caseD_1:
00525FD4  B8 79 31 00 00            MOV EAX,0x3179
00525FD9  5D                        POP EBP
00525FDA  C3                        RET
switchD_00525fc6::caseD_2:
00525FDB  B8 7A 31 00 00            MOV EAX,0x317a
00525FE0  5D                        POP EBP
00525FE1  C3                        RET
switchD_00525fc6::caseD_3:
00525FE2  B8 10 27 00 00            MOV EAX,0x2710
switchD_00525f08::default:
00525FE7  5D                        POP EBP
00525FE8  C3                        RET
