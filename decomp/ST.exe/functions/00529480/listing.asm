FUN_00529480:
00529480  55                        PUSH EBP
00529481  8B EC                     MOV EBP,ESP
00529483  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00529486  B8 10 27 00 00            MOV EAX,0x2710
0052948B  81 E1 FF 00 00 00         AND ECX,0xff
00529491  83 F9 04                  CMP ECX,0x4
00529494  77 28                     JA 0x005294be
switchD_00529496::switchD:
00529496  FF 24 8D C0 94 52 00      JMP dword ptr [ECX*0x4 + 0x5294c0]
switchD_00529496::caseD_0:
0052949D  B8 1D 27 00 00            MOV EAX,0x271d
005294A2  5D                        POP EBP
005294A3  C3                        RET
switchD_00529496::caseD_1:
005294A4  B8 1E 27 00 00            MOV EAX,0x271e
005294A9  5D                        POP EBP
005294AA  C3                        RET
switchD_00529496::caseD_2:
005294AB  B8 1F 27 00 00            MOV EAX,0x271f
005294B0  5D                        POP EBP
005294B1  C3                        RET
switchD_00529496::caseD_3:
005294B2  B8 31 27 00 00            MOV EAX,0x2731
005294B7  5D                        POP EBP
005294B8  C3                        RET
switchD_00529496::caseD_4:
005294B9  B8 30 27 00 00            MOV EAX,0x2730
switchD_00529496::default:
005294BE  5D                        POP EBP
005294BF  C3                        RET
