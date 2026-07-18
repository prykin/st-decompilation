FUN_006141b0:
006141B0  55                        PUSH EBP
006141B1  8B EC                     MOV EBP,ESP
006141B3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006141B6  33 C0                     XOR EAX,EAX
006141B8  4A                        DEC EDX
006141B9  56                        PUSH ESI
006141BA  83 FA 07                  CMP EDX,0x7
006141BD  0F 87 95 01 00 00         JA 0x00614358
switchD_006141c3::switchD:
006141C3  FF 24 95 60 43 61 00      JMP dword ptr [EDX*0x4 + 0x614360]
switchD_006141c3::caseD_1:
006141CA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006141CD  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
006141D2  0F BF 0C B5 E0 F8 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cf8e0]
006141DA  F7 E9                     IMUL ECX
006141DC  03 D1                     ADD EDX,ECX
006141DE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006141E1  C1 FA 08                  SAR EDX,0x8
006141E4  8B C2                     MOV EAX,EDX
006141E6  C1 E8 1F                  SHR EAX,0x1f
006141E9  03 D0                     ADD EDX,EAX
006141EB  89 11                     MOV dword ptr [ECX],EDX
006141ED  0F BF 0C B5 E2 F8 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cf8e2]
006141F5  E9 15 01 00 00            JMP 0x0061430f
switchD_006141c3::caseD_2:
006141FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006141FD  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00614202  0F BF 0C B5 AC F9 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cf9ac]
0061420A  F7 E9                     IMUL ECX
0061420C  03 D1                     ADD EDX,ECX
0061420E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00614211  C1 FA 08                  SAR EDX,0x8
00614214  8B C2                     MOV EAX,EDX
00614216  C1 E8 1F                  SHR EAX,0x1f
00614219  03 D0                     ADD EDX,EAX
0061421B  89 11                     MOV dword ptr [ECX],EDX
0061421D  0F BF 0C B5 AE F9 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cf9ae]
00614225  E9 E5 00 00 00            JMP 0x0061430f
switchD_006141c3::caseD_3:
0061422A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061422D  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00614232  0F BF 0C B5 78 FA 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfa78]
0061423A  F7 E9                     IMUL ECX
0061423C  03 D1                     ADD EDX,ECX
0061423E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00614241  C1 FA 08                  SAR EDX,0x8
00614244  8B C2                     MOV EAX,EDX
00614246  C1 E8 1F                  SHR EAX,0x1f
00614249  03 D0                     ADD EDX,EAX
0061424B  89 11                     MOV dword ptr [ECX],EDX
0061424D  0F BF 0C B5 7A FA 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfa7a]
00614255  E9 B5 00 00 00            JMP 0x0061430f
switchD_006141c3::caseD_4:
0061425A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061425D  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00614262  0F BF 0C B5 44 FB 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfb44]
0061426A  F7 E9                     IMUL ECX
0061426C  03 D1                     ADD EDX,ECX
0061426E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00614271  C1 FA 08                  SAR EDX,0x8
00614274  8B C2                     MOV EAX,EDX
00614276  C1 E8 1F                  SHR EAX,0x1f
00614279  03 D0                     ADD EDX,EAX
0061427B  89 11                     MOV dword ptr [ECX],EDX
0061427D  0F BF 0C B5 46 FB 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfb46]
00614285  E9 85 00 00 00            JMP 0x0061430f
switchD_006141c3::caseD_5:
0061428A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061428D  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00614292  0F BF 0C B5 10 FC 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfc10]
0061429A  F7 E9                     IMUL ECX
0061429C  03 D1                     ADD EDX,ECX
0061429E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006142A1  C1 FA 08                  SAR EDX,0x8
006142A4  8B C2                     MOV EAX,EDX
006142A6  C1 E8 1F                  SHR EAX,0x1f
006142A9  03 D0                     ADD EDX,EAX
006142AB  89 11                     MOV dword ptr [ECX],EDX
006142AD  0F BF 0C B5 12 FC 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfc12]
006142B5  EB 58                     JMP 0x0061430f
switchD_006141c3::caseD_6:
006142B7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006142BA  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
006142BF  0F BF 0C B5 DC FC 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfcdc]
006142C7  F7 E9                     IMUL ECX
006142C9  03 D1                     ADD EDX,ECX
006142CB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006142CE  C1 FA 08                  SAR EDX,0x8
006142D1  8B C2                     MOV EAX,EDX
006142D3  C1 E8 1F                  SHR EAX,0x1f
006142D6  03 D0                     ADD EDX,EAX
006142D8  89 11                     MOV dword ptr [ECX],EDX
006142DA  0F BF 0C B5 DE FC 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfcde]
006142E2  EB 2B                     JMP 0x0061430f
switchD_006141c3::caseD_7:
006142E4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006142E7  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
006142EC  0F BF 0C B5 A8 FD 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfda8]
006142F4  F7 E9                     IMUL ECX
006142F6  03 D1                     ADD EDX,ECX
006142F8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006142FB  C1 FA 08                  SAR EDX,0x8
006142FE  8B C2                     MOV EAX,EDX
00614300  C1 E8 1F                  SHR EAX,0x1f
00614303  03 D0                     ADD EDX,EAX
00614305  89 11                     MOV dword ptr [ECX],EDX
00614307  0F BF 0C B5 AA FD 7C 00   MOVSX ECX,word ptr [ESI*0x4 + 0x7cfdaa]
LAB_0061430f:
0061430F  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00614314  5E                        POP ESI
00614315  F7 E9                     IMUL ECX
00614317  03 D1                     ADD EDX,ECX
00614319  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0061431C  C1 FA 08                  SAR EDX,0x8
0061431F  8B C2                     MOV EAX,EDX
00614321  C1 E8 1F                  SHR EAX,0x1f
00614324  03 D0                     ADD EDX,EAX
00614326  B8 01 00 00 00            MOV EAX,0x1
0061432B  89 11                     MOV dword ptr [ECX],EDX
0061432D  5D                        POP EBP
0061432E  C2 10 00                  RET 0x10
switchD_006141c3::caseD_8:
00614331  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00614334  8B 91 E5 02 00 00         MOV EDX,dword ptr [ECX + 0x2e5]
0061433A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0061433D  0F BF 14 82               MOVSX EDX,word ptr [EDX + EAX*0x4]
00614341  89 16                     MOV dword ptr [ESI],EDX
00614343  8B 89 E5 02 00 00         MOV ECX,dword ptr [ECX + 0x2e5]
00614349  0F BF 54 81 02            MOVSX EDX,word ptr [ECX + EAX*0x4 + 0x2]
0061434E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00614351  89 10                     MOV dword ptr [EAX],EDX
00614353  B8 01 00 00 00            MOV EAX,0x1
switchD_006141c3::default:
00614358  5E                        POP ESI
00614359  5D                        POP EBP
0061435A  C2 10 00                  RET 0x10
