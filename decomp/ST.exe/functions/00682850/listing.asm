FUN_00682850:
00682850  55                        PUSH EBP
00682851  8B EC                     MOV EBP,ESP
00682853  81 EC 88 00 00 00         SUB ESP,0x88
00682859  53                        PUSH EBX
0068285A  56                        PUSH ESI
0068285B  57                        PUSH EDI
0068285C  8B 1D 18 2D 7D 00         MOV EBX,dword ptr [0x007d2d18]
00682862  B9 20 00 00 00            MOV ECX,0x20
00682867  33 C0                     XOR EAX,EAX
00682869  8D BD 78 FF FF FF         LEA EDI,[EBP + 0xffffff78]
0068286F  6A 7F                     PUSH 0x7f
00682871  F3 AB                     STOSD.REP ES:EDI
00682873  A1 28 75 85 00            MOV EAX,[0x00857528]
00682878  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
0068287E  50                        PUSH EAX
0068287F  51                        PUSH ECX
00682880  E8 BB BA 0A 00            CALL 0x0072e340
00682885  53                        PUSH EBX
00682886  E8 24 10 D8 FF            CALL 0x004038af
0068288B  8B F8                     MOV EDI,EAX
0068288D  33 F6                     XOR ESI,ESI
0068288F  E8 D5 FB D7 FF            CALL 0x00402469
00682894  6A 29                     PUSH 0x29
00682896  E8 22 2A D8 FF            CALL 0x004052bd
0068289B  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006828A0  83 C4 14                  ADD ESP,0x14
006828A3  83 F8 39                  CMP EAX,0x39
006828A6  74 3D                     JZ 0x006828e5
LAB_006828a8:
006828A8  E8 79 25 D8 FF            CALL 0x00404e26
006828AD  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
006828B2  46                        INC ESI
006828B3  83 F8 10                  CMP EAX,0x10
006828B6  74 1F                     JZ 0x006828d7
006828B8  83 F8 39                  CMP EAX,0x39
006828BB  74 1F                     JZ 0x006828dc
006828BD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006828C3  68 D0 01 00 00            PUSH 0x1d0
006828C8  68 04 56 7D 00            PUSH 0x7d5604
006828CD  52                        PUSH EDX
006828CE  6A 8F                     PUSH -0x71
006828D0  E8 6B 35 02 00            CALL 0x006a5e40
006828D5  EB 05                     JMP 0x006828dc
LAB_006828d7:
006828D7  E8 8D FB D7 FF            CALL 0x00402469
LAB_006828dc:
006828DC  83 3D 18 2D 7D 00 39      CMP dword ptr [0x007d2d18],0x39
006828E3  75 C3                     JNZ 0x006828a8
LAB_006828e5:
006828E5  3B F7                     CMP ESI,EDI
006828E7  7E 20                     JLE 0x00682909
006828E9  53                        PUSH EBX
006828EA  E8 3B EA D7 FF            CALL 0x0040132a
006828EF  83 C4 04                  ADD ESP,0x4
006828F2  85 C0                     TEST EAX,EAX
006828F4  75 11                     JNZ 0x00682907
006828F6  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
006828FC  50                        PUSH EAX
006828FD  6A 87                     PUSH -0x79
006828FF  E8 0D 2B D8 FF            CALL 0x00405411
00682904  83 C4 08                  ADD ESP,0x8
LAB_00682907:
00682907  3B F7                     CMP ESI,EDI
LAB_00682909:
00682909  7D 38                     JGE 0x00682943
LAB_0068290b:
0068290B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0068290E  51                        PUSH ECX
0068290F  56                        PUSH ESI
00682910  53                        PUSH EBX
00682911  E8 17 F1 D7 FF            CALL 0x00401a2d
00682916  83 C4 0C                  ADD ESP,0xc
00682919  85 C0                     TEST EAX,EAX
0068291B  74 0E                     JZ 0x0068292b
0068291D  8D 55 F8                  LEA EDX,[EBP + -0x8]
00682920  52                        PUSH EDX
00682921  E8 EE E6 D7 FF            CALL 0x00401014
00682926  83 C4 04                  ADD ESP,0x4
00682929  EB 11                     JMP 0x0068293c
LAB_0068292b:
0068292B  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
00682931  50                        PUSH EAX
00682932  6A 86                     PUSH -0x7a
00682934  E8 D8 2A D8 FF            CALL 0x00405411
00682939  83 C4 08                  ADD ESP,0x8
LAB_0068293c:
0068293C  46                        INC ESI
0068293D  3B F7                     CMP ESI,EDI
0068293F  7C CA                     JL 0x0068290b
00682941  8B F7                     MOV ESI,EDI
LAB_00682943:
00682943  56                        PUSH ESI
00682944  53                        PUSH EBX
00682945  E8 23 33 D8 FF            CALL 0x00405c6d
0068294A  83 C4 08                  ADD ESP,0x8
0068294D  E8 17 FB D7 FF            CALL 0x00402469
00682952  5F                        POP EDI
00682953  5E                        POP ESI
00682954  5B                        POP EBX
00682955  8B E5                     MOV ESP,EBP
00682957  5D                        POP EBP
00682958  C3                        RET
