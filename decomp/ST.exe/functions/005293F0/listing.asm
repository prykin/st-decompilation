FUN_005293f0:
005293F0  55                        PUSH EBP
005293F1  8B EC                     MOV EBP,ESP
005293F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005293F6  B8 10 27 00 00            MOV EAX,0x2710
005293FB  81 C1 24 FF FF FF         ADD ECX,0xffffff24
00529401  83 F9 07                  CMP ECX,0x7
00529404  77 2F                     JA 0x00529435
switchD_00529406::switchD:
00529406  FF 24 8D 38 94 52 00      JMP dword ptr [ECX*0x4 + 0x529438]
switchD_00529406::caseD_dd:
0052940D  B8 1D 27 00 00            MOV EAX,0x271d
00529412  5D                        POP EBP
00529413  C3                        RET
switchD_00529406::caseD_de:
00529414  B8 1E 27 00 00            MOV EAX,0x271e
00529419  5D                        POP EBP
0052941A  C3                        RET
switchD_00529406::caseD_e2:
0052941B  B8 31 27 00 00            MOV EAX,0x2731
00529420  5D                        POP EBP
00529421  C3                        RET
switchD_00529406::caseD_df:
00529422  B8 20 27 00 00            MOV EAX,0x2720
00529427  5D                        POP EBP
00529428  C3                        RET
switchD_00529406::caseD_e0:
00529429  B8 30 27 00 00            MOV EAX,0x2730
0052942E  5D                        POP EBP
0052942F  C3                        RET
switchD_00529406::caseD_dc:
00529430  B8 1F 27 00 00            MOV EAX,0x271f
switchD_00529406::default:
00529435  5D                        POP EBP
00529436  C3                        RET
