FUN_004d9000:
004D9000  55                        PUSH EBP
004D9001  8B EC                     MOV EBP,ESP
004D9003  51                        PUSH ECX
004D9004  56                        PUSH ESI
004D9005  8B F1                     MOV ESI,ECX
004D9007  57                        PUSH EDI
004D9008  33 FF                     XOR EDI,EDI
004D900A  39 BE FF 05 00 00         CMP dword ptr [ESI + 0x5ff],EDI
004D9010  75 56                     JNZ 0x004d9068
004D9012  6A 40                     PUSH 0x40
004D9014  E8 17 55 25 00            CALL 0x0072e530
004D9019  83 C4 04                  ADD ESP,0x4
004D901C  3B C7                     CMP EAX,EDI
004D901E  74 09                     JZ 0x004d9029
004D9020  8B C8                     MOV ECX,EAX
004D9022  E8 EF 82 F2 FF            CALL 0x00401316
004D9027  EB 02                     JMP 0x004d902b
LAB_004d9029:
004D9029  33 C0                     XOR EAX,EAX
LAB_004d902b:
004D902B  6A 11                     PUSH 0x11
004D902D  68 8C 00 00 00            PUSH 0x8c
004D9032  68 B4 00 00 00            PUSH 0xb4
004D9037  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004D903D  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D9043  57                        PUSH EDI
004D9044  6A 45                     PUSH 0x45
004D9046  6A 5A                     PUSH 0x5a
004D9048  51                        PUSH ECX
004D9049  8B C8                     MOV ECX,EAX
004D904B  E8 2B C3 F2 FF            CALL 0x0040537b
004D9050  3B C7                     CMP EAX,EDI
004D9052  74 14                     JZ 0x004d9068
004D9054  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D905A  6A 61                     PUSH 0x61
004D905C  68 B0 F5 7B 00            PUSH 0x7bf5b0
004D9061  52                        PUSH EDX
004D9062  50                        PUSH EAX
004D9063  E8 D8 CD 1C 00            CALL 0x006a5e40
LAB_004d9068:
004D9068  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D906E  B9 04 00 00 00            MOV ECX,0x4
004D9073  83 F8 06                  CMP EAX,0x6
004D9076  77 7F                     JA 0x004d90f7
switchD_004d9078::switchD:
004D9078  FF 24 85 80 92 4D 00      JMP dword ptr [EAX*0x4 + 0x4d9280]
switchD_004d9078::caseD_0:
004D907F  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004D9085  24 FD                     AND AL,0xfd
004D9087  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004D908D  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
004D9093  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9099  3B C1                     CMP EAX,ECX
004D909B  75 0C                     JNZ 0x004d90a9
004D909D  C7 86 D0 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d0],0x5
004D90A7  EB 4E                     JMP 0x004d90f7
LAB_004d90a9:
004D90A9  83 F8 05                  CMP EAX,0x5
004D90AC  75 49                     JNZ 0x004d90f7
switchD_004d9078::caseD_1:
004D90AE  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004D90B4  EB 41                     JMP 0x004d90f7
switchD_004d9078::caseD_5:
004D90B6  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D90BC  48                        DEC EAX
004D90BD  74 1A                     JZ 0x004d90d9
004D90BF  83 E8 02                  SUB EAX,0x2
004D90C2  74 0D                     JZ 0x004d90d1
004D90C4  83 E8 02                  SUB EAX,0x2
004D90C7  75 1A                     JNZ 0x004d90e3
004D90C9  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004D90CF  EB 12                     JMP 0x004d90e3
LAB_004d90d1:
004D90D1  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004D90D7  EB 0A                     JMP 0x004d90e3
LAB_004d90d9:
004D90D9  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
LAB_004d90e3:
004D90E3  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004D90E9  24 FD                     AND AL,0xfd
004D90EB  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004D90F1  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
switchD_004d9078::caseD_2:
004D90F7  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004D90FD  0F 85 6A 01 00 00         JNZ 0x004d926d
004D9103  A1 24 0C 79 00            MOV EAX,[0x00790c24]
004D9108  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
004D910E  6A 1D                     PUSH 0x1d
004D9110  50                        PUSH EAX
004D9111  51                        PUSH ECX
004D9112  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9118  6A 0E                     PUSH 0xe
004D911A  E8 64 B0 F2 FF            CALL 0x00404183
004D911F  3B C7                     CMP EAX,EDI
004D9121  74 14                     JZ 0x004d9137
004D9123  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D9129  6A 79                     PUSH 0x79
004D912B  68 B0 F5 7B 00            PUSH 0x7bf5b0
004D9130  52                        PUSH EDX
004D9131  50                        PUSH EAX
004D9132  E8 09 CD 1C 00            CALL 0x006a5e40
LAB_004d9137:
004D9137  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D913D  E8 4E 99 F2 FF            CALL 0x00402a90
004D9142  6A 0A                     PUSH 0xa
004D9144  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D914A  E8 7D C1 F2 FF            CALL 0x004052cc
004D914F  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9155  50                        PUSH EAX
004D9156  E8 71 C1 F2 FF            CALL 0x004052cc
004D915B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D9161  50                        PUSH EAX
004D9162  E8 D9 11 21 00            CALL 0x006ea340
004D9167  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D916D  57                        PUSH EDI
004D916E  57                        PUSH EDI
004D916F  57                        PUSH EDI
004D9170  6A 0E                     PUSH 0xe
004D9172  E8 43 8D F2 FF            CALL 0x00401eba
004D9177  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D917D  57                        PUSH EDI
004D917E  6A 0E                     PUSH 0xe
004D9180  E8 DF 7E F2 FF            CALL 0x00401064
004D9185  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D918A  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004D9190  51                        PUSH ECX
004D9191  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9197  6A 0E                     PUSH 0xe
004D9199  E8 A2 C0 F2 FF            CALL 0x00405240
004D919E  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004D91A4  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D91AA  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004D91AE  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D91B4  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004D91BE  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004D91C4  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D91CA  51                        PUSH ECX
004D91CB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D91CE  C1 E0 03                  SHL EAX,0x3
004D91D1  8B 90 F0 8D 79 00         MOV EDX,dword ptr [EAX + 0x798df0]
004D91D7  03 D1                     ADD EDX,ECX
004D91D9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D91DC  8B 90 EC 8D 79 00         MOV EDX,dword ptr [EAX + 0x798dec]
004D91E2  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D91E5  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004D91E9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D91EF  8B 80 E8 8D 79 00         MOV EAX,dword ptr [EAX + 0x798de8]
004D91F5  8D 4C 0A 64               LEA ECX,[EDX + ECX*0x1 + 0x64]
004D91F9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D91FF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004D9202  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004D9206  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004D920C  D9 1C 24                  FSTP float ptr [ESP]
004D920F  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D9212  51                        PUSH ECX
004D9213  8D 4C 10 64               LEA ECX,[EAX + EDX*0x1 + 0x64]
004D9217  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004D921A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9220  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D9226  D9 1C 24                  FSTP float ptr [ESP]
004D9229  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D922C  51                        PUSH ECX
004D922D  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9233  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9239  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D923F  D9 1C 24                  FSTP float ptr [ESP]
004D9242  E8 92 B3 F2 FF            CALL 0x004045d9
004D9247  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D924D  6A 01                     PUSH 0x1
004D924F  E8 2E 97 F2 FF            CALL 0x00402982
004D9254  8B 16                     MOV EDX,dword ptr [ESI]
004D9256  68 1D 04 00 00            PUSH 0x41d
004D925B  6A 03                     PUSH 0x3
004D925D  8B CE                     MOV ECX,ESI
004D925F  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004D9265  33 C0                     XOR EAX,EAX
004D9267  5F                        POP EDI
004D9268  5E                        POP ESI
004D9269  8B E5                     MOV ESP,EBP
004D926B  5D                        POP EBP
004D926C  C3                        RET
LAB_004d926d:
004D926D  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9273  E8 97 AA F2 FF            CALL 0x00403d0f
004D9278  5F                        POP EDI
004D9279  33 C0                     XOR EAX,EAX
004D927B  5E                        POP ESI
004D927C  8B E5                     MOV ESP,EBP
004D927E  5D                        POP EBP
004D927F  C3                        RET
