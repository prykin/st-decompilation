FUN_00673110:
00673110  55                        PUSH EBP
00673111  8B EC                     MOV EBP,ESP
00673113  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00673116  53                        PUSH EBX
00673117  56                        PUSH ESI
00673118  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_0067311b:
0067311B  8A 10                     MOV DL,byte ptr [EAX]
0067311D  8A 1E                     MOV BL,byte ptr [ESI]
0067311F  8A CA                     MOV CL,DL
00673121  3A D3                     CMP DL,BL
00673123  75 20                     JNZ 0x00673145
00673125  84 C9                     TEST CL,CL
00673127  74 16                     JZ 0x0067313f
00673129  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0067312C  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0067312F  8A CA                     MOV CL,DL
00673131  3A D3                     CMP DL,BL
00673133  75 10                     JNZ 0x00673145
00673135  83 C0 02                  ADD EAX,0x2
00673138  83 C6 02                  ADD ESI,0x2
0067313B  84 C9                     TEST CL,CL
0067313D  75 DC                     JNZ 0x0067311b
LAB_0067313f:
0067313F  5E                        POP ESI
00673140  33 C0                     XOR EAX,EAX
00673142  5B                        POP EBX
00673143  5D                        POP EBP
00673144  C3                        RET
LAB_00673145:
00673145  1B C0                     SBB EAX,EAX
00673147  5E                        POP ESI
00673148  83 D8 FF                  SBB EAX,-0x1
0067314B  5B                        POP EBX
0067314C  5D                        POP EBP
0067314D  C3                        RET
