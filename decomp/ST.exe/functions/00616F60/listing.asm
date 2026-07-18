FUN_00616f60:
00616F60  55                        PUSH EBP
00616F61  8B EC                     MOV EBP,ESP
00616F63  83 EC 20                  SUB ESP,0x20
00616F66  56                        PUSH ESI
00616F67  8B F1                     MOV ESI,ECX
00616F69  8B 86 C1 02 00 00         MOV EAX,dword ptr [ESI + 0x2c1]
00616F6F  85 C0                     TEST EAX,EAX
00616F71  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00616F74  75 07                     JNZ 0x00616f7d
00616F76  5E                        POP ESI
00616F77  8B E5                     MOV ESP,EBP
00616F79  5D                        POP EBP
00616F7A  C2 0C 00                  RET 0xc
LAB_00616f7d:
00616F7D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00616F82  53                        PUSH EBX
00616F83  57                        PUSH EDI
00616F84  BB 01 00 00 00            MOV EBX,0x1
00616F89  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
00616F8F  8B 86 98 02 00 00         MOV EAX,dword ptr [ESI + 0x298]
00616F95  2B F8                     SUB EDI,EAX
00616F97  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00616F9A  0F AF BE 88 02 00 00      IMUL EDI,dword ptr [ESI + 0x288]
00616FA1  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00616FA4  DB 45 EC                  FILD dword ptr [EBP + -0x14]
00616FA7  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00616FAA  DE F9                     FDIVP
00616FAC  D9 55 FC                  FST float ptr [EBP + -0x4]
00616FAF  D8 1D B8 CE 79 00         FCOMP float ptr [0x0079ceb8]
00616FB5  DF E0                     FNSTSW AX
00616FB7  F6 C4 41                  TEST AH,0x41
00616FBA  74 0E                     JZ 0x00616fca
00616FBC  8A 86 9C 02 00 00         MOV AL,byte ptr [ESI + 0x29c]
00616FC2  84 C0                     TEST AL,AL
00616FC4  0F 84 57 02 00 00         JZ 0x00617221
LAB_00616fca:
00616FCA  D9 45 FC                  FLD float ptr [EBP + -0x4]
00616FCD  D8 1D B4 CE 79 00         FCOMP float ptr [0x0079ceb4]
00616FD3  DF E0                     FNSTSW AX
00616FD5  F6 C4 41                  TEST AH,0x41
00616FD8  75 4F                     JNZ 0x00617029
00616FDA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00616FDD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00616FE0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00616FE3  51                        PUSH ECX
00616FE4  52                        PUSH EDX
00616FE5  50                        PUSH EAX
00616FE6  57                        PUSH EDI
00616FE7  8B CE                     MOV ECX,ESI
00616FE9  E8 E6 B7 DE FF            CALL 0x004027d4
00616FEE  8B D8                     MOV EBX,EAX
00616FF0  85 DB                     TEST EBX,EBX
00616FF2  0F 8E 18 02 00 00         JLE 0x00617210
00616FF8  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00617002  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
0061700C  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
00617015  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00617018  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0061701E  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00617024  E9 B0 01 00 00            JMP 0x006171d9
LAB_00617029:
00617029  8D 55 F0                  LEA EDX,[EBP + -0x10]
0061702C  8D 45 F4                  LEA EAX,[EBP + -0xc]
0061702F  52                        PUSH EDX
00617030  8D 4D F8                  LEA ECX,[EBP + -0x8]
00617033  50                        PUSH EAX
00617034  51                        PUSH ECX
00617035  8B CE                     MOV ECX,ESI
00617037  E8 B2 AC DE FF            CALL 0x00401cee
0061703C  85 C0                     TEST EAX,EAX
0061703E  0F 8C 50 01 00 00         JL 0x00617194
00617044  0F BF 96 5E 02 00 00      MOVSX EDX,word ptr [ESI + 0x25e]
0061704B  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
00617052  0F BF 8E 5A 02 00 00      MOVSX ECX,word ptr [ESI + 0x25a]
00617059  52                        PUSH EDX
0061705A  50                        PUSH EAX
0061705B  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
00617062  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
00617069  51                        PUSH ECX
0061706A  52                        PUSH EDX
0061706B  0F BF 8E 60 02 00 00      MOVSX ECX,word ptr [ESI + 0x260]
00617072  50                        PUSH EAX
00617073  51                        PUSH ECX
00617074  E8 94 5E 09 00            CALL 0x006acf0d
00617079  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0061707C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061707F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00617082  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00617085  52                        PUSH EDX
00617086  50                        PUSH EAX
00617087  0F BF 96 64 02 00 00      MOVSX EDX,word ptr [ESI + 0x264]
0061708E  0F BF 86 62 02 00 00      MOVSX EAX,word ptr [ESI + 0x262]
00617095  51                        PUSH ECX
00617096  52                        PUSH EDX
00617097  0F BF 8E 60 02 00 00      MOVSX ECX,word ptr [ESI + 0x260]
0061709E  50                        PUSH EAX
0061709F  51                        PUSH ECX
006170A0  E8 68 5E 09 00            CALL 0x006acf0d
006170A5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006170A8  83 C4 30                  ADD ESP,0x30
006170AB  85 C9                     TEST ECX,ECX
006170AD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006170B0  0F 84 6B 01 00 00         JZ 0x00617221
006170B6  85 C0                     TEST EAX,EAX
006170B8  0F 84 63 01 00 00         JZ 0x00617221
006170BE  0F BF 86 60 02 00 00      MOVSX EAX,word ptr [ESI + 0x260]
006170C5  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
006170CC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006170CF  2B D0                     SUB EDX,EAX
006170D1  0F BF 8E 62 02 00 00      MOVSX ECX,word ptr [ESI + 0x262]
006170D8  2B D8                     SUB EBX,EAX
006170DA  0F BF 86 5C 02 00 00      MOVSX EAX,word ptr [ESI + 0x25c]
006170E1  0F AF D3                  IMUL EDX,EBX
006170E4  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006170E7  2B C1                     SUB EAX,ECX
006170E9  2B D9                     SUB EBX,ECX
006170EB  0F AF C3                  IMUL EAX,EBX
006170EE  0F BF 8E 5E 02 00 00      MOVSX ECX,word ptr [ESI + 0x25e]
006170F5  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006170F8  03 D0                     ADD EDX,EAX
006170FA  0F BF 86 64 02 00 00      MOVSX EAX,word ptr [ESI + 0x264]
00617101  2B C8                     SUB ECX,EAX
00617103  2B D8                     SUB EBX,EAX
00617105  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00617108  0F AF CB                  IMUL ECX,EBX
0061710B  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
0061710F  03 D1                     ADD EDX,ECX
00617111  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00617114  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00617117  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0061711A  DA 75 E4                  FIDIV dword ptr [EBP + -0x1c]
0061711D  D8 1D B0 CE 79 00         FCOMP float ptr [0x0079ceb0]
00617123  DF E0                     FNSTSW AX
00617125  F6 C4 41                  TEST AH,0x41
00617128  75 5B                     JNZ 0x00617185
0061712A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061712D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00617130  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00617133  52                        PUSH EDX
00617134  50                        PUSH EAX
00617135  51                        PUSH ECX
00617136  57                        PUSH EDI
00617137  8B CE                     MOV ECX,ESI
00617139  E8 96 B6 DE FF            CALL 0x004027d4
0061713E  8B D8                     MOV EBX,EAX
00617140  85 DB                     TEST EBX,EBX
00617142  0F 8E C8 00 00 00         JLE 0x00617210
00617148  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
00617152  C7 86 0C 02 00 00 03 00 00 00  MOV dword ptr [ESI + 0x20c],0x3
0061715C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00617162  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00617168  89 86 94 02 00 00         MOV dword ptr [ESI + 0x294],EAX
0061716E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00617174  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0061717A  89 96 98 02 00 00         MOV dword ptr [ESI + 0x298],EDX
00617180  E9 9C 00 00 00            JMP 0x00617221
LAB_00617185:
00617185  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00617188  C6 86 9C 02 00 00 01      MOV byte ptr [ESI + 0x29c],0x1
0061718F  E9 8D 00 00 00            JMP 0x00617221
LAB_00617194:
00617194  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00617197  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061719A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061719D  50                        PUSH EAX
0061719E  51                        PUSH ECX
0061719F  52                        PUSH EDX
006171A0  57                        PUSH EDI
006171A1  8B CE                     MOV ECX,ESI
006171A3  E8 2C B6 DE FF            CALL 0x004027d4
006171A8  8B D8                     MOV EBX,EAX
006171AA  85 DB                     TEST EBX,EBX
006171AC  7E 62                     JLE 0x00617210
006171AE  C7 86 56 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x256],0x2
006171B8  C7 86 0C 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x20c],0x4
006171C2  66 C7 86 70 02 00 00 FF FF  MOV word ptr [ESI + 0x270],0xffff
006171CB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
006171CE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
006171D4  05 39 30 00 00            ADD EAX,0x3039
LAB_006171d9:
006171D9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006171DC  33 D2                     XOR EDX,EDX
006171DE  C1 E8 10                  SHR EAX,0x10
006171E1  B9 0B 00 00 00            MOV ECX,0xb
006171E6  F7 F1                     DIV ECX
006171E8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006171ED  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
006171F3  8D 54 0A 0A               LEA EDX,[EDX + ECX*0x1 + 0xa]
006171F7  89 96 94 02 00 00         MOV dword ptr [ESI + 0x294],EDX
006171FD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00617202  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00617208  89 8E 98 02 00 00         MOV dword ptr [ESI + 0x298],ECX
0061720E  EB 11                     JMP 0x00617221
LAB_00617210:
00617210  8B CE                     MOV ECX,ESI
00617212  E8 26 D4 DE FF            CALL 0x0040463d
00617217  C7 86 0C 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x20c],0x9
LAB_00617221:
00617221  DB 86 C1 02 00 00         FILD dword ptr [ESI + 0x2c1]
00617227  D9 45 FC                  FLD float ptr [EBP + -0x4]
0061722A  D9 FF                     FCOS
0061722C  D8 C9                     FMUL ST1
0061722E  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00617231  D9 45 FC                  FLD float ptr [EBP + -0x4]
00617234  D9 FE                     FSIN
00617236  DE C9                     FMULP
00617238  D9 C0                     FLD ST0
0061723A  D8 8E AD 02 00 00         FMUL float ptr [ESI + 0x2ad]
00617240  D9 45 F8                  FLD float ptr [EBP + -0x8]
00617243  D8 8E A1 02 00 00         FMUL float ptr [ESI + 0x2a1]
00617249  DE C1                     FADDP
0061724B  D9 5D E0                  FSTP float ptr [EBP + -0x20]
0061724E  D9 C0                     FLD ST0
00617250  D8 8E B1 02 00 00         FMUL float ptr [ESI + 0x2b1]
00617256  D9 45 F8                  FLD float ptr [EBP + -0x8]
00617259  D8 8E A5 02 00 00         FMUL float ptr [ESI + 0x2a5]
0061725F  DE C1                     FADDP
00617261  D9 5D E4                  FSTP float ptr [EBP + -0x1c]
00617264  D8 8E A9 02 00 00         FMUL float ptr [ESI + 0x2a9]
0061726A  D9 45 F8                  FLD float ptr [EBP + -0x8]
0061726D  D8 8E 9D 02 00 00         FMUL float ptr [ESI + 0x29d]
00617273  DE C1                     FADDP
00617275  E8 0E 70 11 00            CALL 0x0072e288
0061727A  0F BF 96 72 02 00 00      MOVSX EDX,word ptr [ESI + 0x272]
00617281  D9 45 E0                  FLD float ptr [EBP + -0x20]
00617284  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00617287  03 C2                     ADD EAX,EDX
00617289  89 01                     MOV dword ptr [ECX],EAX
0061728B  0F BF BE 74 02 00 00      MOVSX EDI,word ptr [ESI + 0x274]
00617292  E8 F1 6F 11 00            CALL 0x0072e288
00617297  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061729A  03 F8                     ADD EDI,EAX
0061729C  D9 45 E4                  FLD float ptr [EBP + -0x1c]
0061729F  89 3A                     MOV dword ptr [EDX],EDI
006172A1  0F BF B6 76 02 00 00      MOVSX ESI,word ptr [ESI + 0x276]
006172A8  E8 DB 6F 11 00            CALL 0x0072e288
006172AD  03 F0                     ADD ESI,EAX
006172AF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006172B2  5F                        POP EDI
006172B3  89 30                     MOV dword ptr [EAX],ESI
006172B5  8B C3                     MOV EAX,EBX
006172B7  5B                        POP EBX
006172B8  5E                        POP ESI
006172B9  8B E5                     MOV ESP,EBP
006172BB  5D                        POP EBP
006172BC  C2 0C 00                  RET 0xc
