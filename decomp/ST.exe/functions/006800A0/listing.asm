FUN_006800a0:
006800A0  55                        PUSH EBP
006800A1  8B EC                     MOV EBP,ESP
006800A3  53                        PUSH EBX
006800A4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006800A7  56                        PUSH ESI
006800A8  57                        PUSH EDI
006800A9  53                        PUSH EBX
006800AA  E8 99 44 D8 FF            CALL 0x00404548
006800AF  83 C4 04                  ADD ESP,0x4
006800B2  85 C0                     TEST EAX,EAX
006800B4  7C 0A                     JL 0x006800c0
006800B6  5F                        POP EDI
006800B7  5E                        POP ESI
006800B8  B8 05 00 00 00            MOV EAX,0x5
006800BD  5B                        POP EBX
006800BE  5D                        POP EBP
006800BF  C3                        RET
LAB_006800c0:
006800C0  53                        PUSH EBX
006800C1  E8 35 46 D8 FF            CALL 0x004046fb
006800C6  83 C4 04                  ADD ESP,0x4
006800C9  85 C0                     TEST EAX,EAX
006800CB  7C 0A                     JL 0x006800d7
006800CD  5F                        POP EDI
006800CE  5E                        POP ESI
006800CF  B8 06 00 00 00            MOV EAX,0x6
006800D4  5B                        POP EBX
006800D5  5D                        POP EBP
006800D6  C3                        RET
LAB_006800d7:
006800D7  53                        PUSH EBX
006800D8  E8 CC 3D D8 FF            CALL 0x00403ea9
006800DD  83 C4 04                  ADD ESP,0x4
006800E0  85 C0                     TEST EAX,EAX
006800E2  7C 0A                     JL 0x006800ee
006800E4  5F                        POP EDI
006800E5  5E                        POP ESI
006800E6  B8 07 00 00 00            MOV EAX,0x7
006800EB  5B                        POP EBX
006800EC  5D                        POP EBP
006800ED  C3                        RET
LAB_006800ee:
006800EE  53                        PUSH EBX
006800EF  E8 CE 3D D8 FF            CALL 0x00403ec2
006800F4  83 C4 04                  ADD ESP,0x4
006800F7  85 C0                     TEST EAX,EAX
006800F9  7C 0A                     JL 0x00680105
006800FB  5F                        POP EDI
006800FC  5E                        POP ESI
006800FD  B8 08 00 00 00            MOV EAX,0x8
00680102  5B                        POP EBX
00680103  5D                        POP EBP
00680104  C3                        RET
LAB_00680105:
00680105  53                        PUSH EBX
00680106  E8 2B 3D D8 FF            CALL 0x00403e36
0068010B  85 C0                     TEST EAX,EAX
0068010D  74 0A                     JZ 0x00680119
0068010F  5F                        POP EDI
00680110  5E                        POP ESI
00680111  B8 01 00 00 00            MOV EAX,0x1
00680116  5B                        POP EBX
00680117  5D                        POP EBP
00680118  C3                        RET
LAB_00680119:
00680119  A1 2C 8A 84 00            MOV EAX,[0x00848a2c]
0068011E  33 FF                     XOR EDI,EDI
00680120  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00680123  85 D2                     TEST EDX,EDX
00680125  7E 5E                     JLE 0x00680185
LAB_00680127:
00680127  3B FA                     CMP EDI,EDX
00680129  7D 0E                     JGE 0x00680139
0068012B  8B 0D 2C 8A 84 00         MOV ECX,dword ptr [0x00848a2c]
00680131  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00680134  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
00680137  EB 02                     JMP 0x0068013b
LAB_00680139:
00680139  33 F6                     XOR ESI,ESI
LAB_0068013b:
0068013B  8B C3                     MOV EAX,EBX
LAB_0068013d:
0068013D  8A 18                     MOV BL,byte ptr [EAX]
0068013F  8A CB                     MOV CL,BL
00680141  3A 1E                     CMP BL,byte ptr [ESI]
00680143  75 1C                     JNZ 0x00680161
00680145  84 C9                     TEST CL,CL
00680147  74 14                     JZ 0x0068015d
00680149  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0068014C  8A CB                     MOV CL,BL
0068014E  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
00680151  75 0E                     JNZ 0x00680161
00680153  83 C0 02                  ADD EAX,0x2
00680156  83 C6 02                  ADD ESI,0x2
00680159  84 C9                     TEST CL,CL
0068015B  75 E0                     JNZ 0x0068013d
LAB_0068015d:
0068015D  33 C0                     XOR EAX,EAX
0068015F  EB 05                     JMP 0x00680166
LAB_00680161:
00680161  1B C0                     SBB EAX,EAX
00680163  83 D8 FF                  SBB EAX,-0x1
LAB_00680166:
00680166  85 C0                     TEST EAX,EAX
00680168  74 0A                     JZ 0x00680174
0068016A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0068016D  47                        INC EDI
0068016E  3B FA                     CMP EDI,EDX
00680170  7C B5                     JL 0x00680127
00680172  EB 11                     JMP 0x00680185
LAB_00680174:
00680174  85 FF                     TEST EDI,EDI
00680176  7C 0A                     JL 0x00680182
00680178  5F                        POP EDI
00680179  5E                        POP ESI
0068017A  B8 02 00 00 00            MOV EAX,0x2
0068017F  5B                        POP EBX
00680180  5D                        POP EBP
00680181  C3                        RET
LAB_00680182:
00680182  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00680185:
00680185  8B 0D 34 8A 84 00         MOV ECX,dword ptr [0x00848a34]
0068018B  33 FF                     XOR EDI,EDI
0068018D  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00680190  85 D2                     TEST EDX,EDX
00680192  7E 5D                     JLE 0x006801f1
LAB_00680194:
00680194  3B FA                     CMP EDI,EDX
00680196  7D 0D                     JGE 0x006801a5
00680198  A1 34 8A 84 00            MOV EAX,[0x00848a34]
0068019D  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006801A0  8B 34 B9                  MOV ESI,dword ptr [ECX + EDI*0x4]
006801A3  EB 02                     JMP 0x006801a7
LAB_006801a5:
006801A5  33 F6                     XOR ESI,ESI
LAB_006801a7:
006801A7  8B C3                     MOV EAX,EBX
LAB_006801a9:
006801A9  8A 18                     MOV BL,byte ptr [EAX]
006801AB  8A CB                     MOV CL,BL
006801AD  3A 1E                     CMP BL,byte ptr [ESI]
006801AF  75 1C                     JNZ 0x006801cd
006801B1  84 C9                     TEST CL,CL
006801B3  74 14                     JZ 0x006801c9
006801B5  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
006801B8  8A CB                     MOV CL,BL
006801BA  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
006801BD  75 0E                     JNZ 0x006801cd
006801BF  83 C0 02                  ADD EAX,0x2
006801C2  83 C6 02                  ADD ESI,0x2
006801C5  84 C9                     TEST CL,CL
006801C7  75 E0                     JNZ 0x006801a9
LAB_006801c9:
006801C9  33 C0                     XOR EAX,EAX
006801CB  EB 05                     JMP 0x006801d2
LAB_006801cd:
006801CD  1B C0                     SBB EAX,EAX
006801CF  83 D8 FF                  SBB EAX,-0x1
LAB_006801d2:
006801D2  85 C0                     TEST EAX,EAX
006801D4  74 0A                     JZ 0x006801e0
006801D6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006801D9  47                        INC EDI
006801DA  3B FA                     CMP EDI,EDX
006801DC  7C B6                     JL 0x00680194
006801DE  EB 11                     JMP 0x006801f1
LAB_006801e0:
006801E0  85 FF                     TEST EDI,EDI
006801E2  7C 0A                     JL 0x006801ee
006801E4  5F                        POP EDI
006801E5  5E                        POP ESI
006801E6  B8 03 00 00 00            MOV EAX,0x3
006801EB  5B                        POP EBX
006801EC  5D                        POP EBP
006801ED  C3                        RET
LAB_006801ee:
006801EE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006801f1:
006801F1  53                        PUSH EBX
006801F2  E8 AE 54 D8 FF            CALL 0x004056a5
006801F7  83 C4 04                  ADD ESP,0x4
006801FA  33 D2                     XOR EDX,EDX
006801FC  85 C0                     TEST EAX,EAX
006801FE  0F 9C C2                  SETL DL
00680201  4A                        DEC EDX
00680202  5F                        POP EDI
00680203  83 E2 04                  AND EDX,0x4
00680206  5E                        POP ESI
00680207  8B C2                     MOV EAX,EDX
00680209  5B                        POP EBX
0068020A  5D                        POP EBP
0068020B  C3                        RET
