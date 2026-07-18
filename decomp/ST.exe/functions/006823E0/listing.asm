FUN_006823e0:
006823E0  55                        PUSH EBP
006823E1  8B EC                     MOV EBP,ESP
006823E3  83 EC 0C                  SUB ESP,0xc
006823E6  A1 14 8A 84 00            MOV EAX,[0x00848a14]
006823EB  53                        PUSH EBX
006823EC  56                        PUSH ESI
006823ED  57                        PUSH EDI
006823EE  85 C0                     TEST EAX,EAX
006823F0  0F 84 13 02 00 00         JZ 0x00682609
006823F6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006823F9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006823FC  56                        PUSH ESI
006823FD  50                        PUSH EAX
006823FE  E8 8C 0C D8 FF            CALL 0x0040308f
00682403  A1 14 8A 84 00            MOV EAX,[0x00848a14]
00682408  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
0068240B  2B DE                     SUB EBX,ESI
0068240D  4B                        DEC EBX
0068240E  53                        PUSH EBX
0068240F  50                        PUSH EAX
00682410  E8 64 13 D8 FF            CALL 0x00403779
00682415  8B F8                     MOV EDI,EAX
00682417  83 C4 10                  ADD ESP,0x10
0068241A  85 FF                     TEST EDI,EDI
0068241C  0F 84 CF 01 00 00         JZ 0x006825f1
00682422  8A 0F                     MOV CL,byte ptr [EDI]
00682424  33 C0                     XOR EAX,EAX
00682426  80 F9 07                  CMP CL,0x7
00682429  74 12                     JZ 0x0068243d
0068242B  8B CF                     MOV ECX,EDI
LAB_0068242d:
0068242D  3B C6                     CMP EAX,ESI
0068242F  7D 0E                     JGE 0x0068243f
00682431  8A 51 05                  MOV DL,byte ptr [ECX + 0x5]
00682434  83 C1 05                  ADD ECX,0x5
00682437  40                        INC EAX
00682438  80 FA 07                  CMP DL,0x7
0068243B  75 F0                     JNZ 0x0068242d
LAB_0068243d:
0068243D  3B C6                     CMP EAX,ESI
LAB_0068243f:
0068243F  0F 85 C4 01 00 00         JNZ 0x00682609
00682445  8D 0C B7                  LEA ECX,[EDI + ESI*0x4]
00682448  0F BF 54 0E 01            MOVSX EDX,word ptr [ESI + ECX*0x1 + 0x1]
0068244D  8D 44 0E 01               LEA EAX,[ESI + ECX*0x1 + 0x1]
00682451  52                        PUSH EDX
00682452  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00682455  E8 55 14 D8 FF            CALL 0x004038af
0068245A  83 C4 04                  ADD ESP,0x4
0068245D  85 C0                     TEST EAX,EAX
0068245F  7C 17                     JL 0x00682478
00682461  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00682464  0F BF 08                  MOVSX ECX,word ptr [EAX]
00682467  51                        PUSH ECX
00682468  E8 46 F2 D7 FF            CALL 0x004016b3
0068246D  83 C4 04                  ADD ESP,0x4
00682470  85 C0                     TEST EAX,EAX
00682472  0F 84 91 01 00 00         JZ 0x00682609
LAB_00682478:
00682478  8D 55 08                  LEA EDX,[EBP + 0x8]
0068247B  B9 20 78 84 00            MOV ECX,0x847820
00682480  52                        PUSH EDX
00682481  56                        PUSH ESI
00682482  57                        PUSH EDI
00682483  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0068248A  E8 75 F1 D7 FF            CALL 0x00401604
0068248F  85 C0                     TEST EAX,EAX
00682491  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00682494  0F 84 3F 01 00 00         JZ 0x006825d9
0068249A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068249D  48                        DEC EAX
0068249E  0F 84 E2 00 00 00         JZ 0x00682586
006824A4  48                        DEC EAX
006824A5  0F 84 9D 00 00 00         JZ 0x00682548
006824AB  48                        DEC EAX
006824AC  74 31                     JZ 0x006824df
006824AE  8D 45 0C                  LEA EAX,[EBP + 0xc]
006824B1  50                        PUSH EAX
006824B2  E8 A9 8B 02 00            CALL 0x006ab060
006824B7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006824BD  68 95 01 00 00            PUSH 0x195
006824C2  68 04 56 7D 00            PUSH 0x7d5604
006824C7  51                        PUSH ECX
006824C8  6A 95                     PUSH -0x6b
006824CA  E8 71 39 02 00            CALL 0x006a5e40
006824CF  8D 55 0C                  LEA EDX,[EBP + 0xc]
006824D2  52                        PUSH EDX
006824D3  E8 88 8B 02 00            CALL 0x006ab060
006824D8  5F                        POP EDI
006824D9  5E                        POP ESI
006824DA  5B                        POP EBX
006824DB  8B E5                     MOV ESP,EBP
006824DD  5D                        POP EBP
006824DE  C3                        RET
LAB_006824df:
006824DF  8B 15 14 8A 84 00         MOV EDX,dword ptr [0x00848a14]
006824E5  53                        PUSH EBX
006824E6  52                        PUSH EDX
006824E7  E8 2B 38 D8 FF            CALL 0x00405d17
006824EC  83 C4 08                  ADD ESP,0x8
006824EF  85 C0                     TEST EAX,EAX
006824F1  75 17                     JNZ 0x0068250a
006824F3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006824F8  68 8A 01 00 00            PUSH 0x18a
006824FD  68 04 56 7D 00            PUSH 0x7d5604
00682502  50                        PUSH EAX
00682503  6A 95                     PUSH -0x6b
00682505  E8 36 39 02 00            CALL 0x006a5e40
LAB_0068250a:
0068250A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0068250D  51                        PUSH ECX
0068250E  E8 64 F1 D7 FF            CALL 0x00401677
00682513  50                        PUSH EAX
00682514  E8 7F 39 D8 FF            CALL 0x00405e98
00682519  8B F0                     MOV ESI,EAX
0068251B  83 C4 08                  ADD ESP,0x8
0068251E  85 F6                     TEST ESI,ESI
00682520  7D 18                     JGE 0x0068253a
00682522  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00682528  68 8C 01 00 00            PUSH 0x18c
0068252D  68 04 56 7D 00            PUSH 0x7d5604
00682532  52                        PUSH EDX
00682533  6A FE                     PUSH -0x2
00682535  E8 06 39 02 00            CALL 0x006a5e40
LAB_0068253a:
0068253A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0068253D  C6 45 F4 03               MOV byte ptr [EBP + -0xc],0x3
00682541  66 89 75 F5               MOV word ptr [EBP + -0xb],SI
00682545  50                        PUSH EAX
00682546  EB 79                     JMP 0x006825c1
LAB_00682548:
00682548  8B 0D 14 8A 84 00         MOV ECX,dword ptr [0x00848a14]
0068254E  53                        PUSH EBX
0068254F  51                        PUSH ECX
00682550  E8 C2 37 D8 FF            CALL 0x00405d17
00682555  83 C4 08                  ADD ESP,0x8
00682558  85 C0                     TEST EAX,EAX
0068255A  75 18                     JNZ 0x00682574
0068255C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00682562  68 82 01 00 00            PUSH 0x182
00682567  68 04 56 7D 00            PUSH 0x7d5604
0068256C  52                        PUSH EDX
0068256D  6A 95                     PUSH -0x6b
0068256F  E8 CC 38 02 00            CALL 0x006a5e40
LAB_00682574:
00682574  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00682577  C6 45 F4 02               MOV byte ptr [EBP + -0xc],0x2
0068257B  8D 55 F4                  LEA EDX,[EBP + -0xc]
0068257E  8B 08                     MOV ECX,dword ptr [EAX]
00682580  52                        PUSH EDX
00682581  89 4D F5                  MOV dword ptr [EBP + -0xb],ECX
00682584  EB 3B                     JMP 0x006825c1
LAB_00682586:
00682586  A1 14 8A 84 00            MOV EAX,[0x00848a14]
0068258B  53                        PUSH EBX
0068258C  50                        PUSH EAX
0068258D  E8 85 37 D8 FF            CALL 0x00405d17
00682592  83 C4 08                  ADD ESP,0x8
00682595  85 C0                     TEST EAX,EAX
00682597  75 18                     JNZ 0x006825b1
00682599  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068259F  68 7A 01 00 00            PUSH 0x17a
006825A4  68 04 56 7D 00            PUSH 0x7d5604
006825A9  51                        PUSH ECX
006825AA  6A 95                     PUSH -0x6b
006825AC  E8 8F 38 02 00            CALL 0x006a5e40
LAB_006825b1:
006825B1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006825B4  C6 45 F4 01               MOV byte ptr [EBP + -0xc],0x1
006825B8  8D 4D F4                  LEA ECX,[EBP + -0xc]
006825BB  8B 02                     MOV EAX,dword ptr [EDX]
006825BD  51                        PUSH ECX
006825BE  89 45 F5                  MOV dword ptr [EBP + -0xb],EAX
LAB_006825c1:
006825C1  E8 4E EA D7 FF            CALL 0x00401014
006825C6  83 C4 04                  ADD ESP,0x4
006825C9  8D 55 0C                  LEA EDX,[EBP + 0xc]
006825CC  52                        PUSH EDX
006825CD  E8 8E 8A 02 00            CALL 0x006ab060
006825D2  5F                        POP EDI
006825D3  5E                        POP ESI
006825D4  5B                        POP EBX
006825D5  8B E5                     MOV ESP,EBP
006825D7  5D                        POP EBP
006825D8  C3                        RET
LAB_006825d9:
006825D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006825DC  68 24 78 84 00            PUSH 0x847824
006825E1  50                        PUSH EAX
006825E2  E8 2A 2E D8 FF            CALL 0x00405411
006825E7  83 C4 08                  ADD ESP,0x8
006825EA  5F                        POP EDI
006825EB  5E                        POP ESI
006825EC  5B                        POP EBX
006825ED  8B E5                     MOV ESP,EBP
006825EF  5D                        POP EBP
006825F0  C3                        RET
LAB_006825f1:
006825F1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006825F7  68 9C 01 00 00            PUSH 0x19c
006825FC  68 04 56 7D 00            PUSH 0x7d5604
00682601  51                        PUSH ECX
00682602  6A 95                     PUSH -0x6b
00682604  E8 37 38 02 00            CALL 0x006a5e40
LAB_00682609:
00682609  5F                        POP EDI
0068260A  5E                        POP ESI
0068260B  5B                        POP EBX
0068260C  8B E5                     MOV ESP,EBP
0068260E  5D                        POP EBP
0068260F  C3                        RET
