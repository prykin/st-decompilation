STBoatC::Bring:
0047C050  55                        PUSH EBP
0047C051  8B EC                     MOV EBP,ESP
0047C053  83 EC 10                  SUB ESP,0x10
0047C056  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047C059  53                        PUSH EBX
0047C05A  33 DB                     XOR EBX,EBX
0047C05C  56                        PUSH ESI
0047C05D  3B C3                     CMP EAX,EBX
0047C05F  57                        PUSH EDI
0047C060  8B F1                     MOV ESI,ECX
0047C062  0F 84 08 0A 00 00         JZ 0x0047ca70
0047C068  83 F8 01                  CMP EAX,0x1
0047C06B  0F 84 FF 09 00 00         JZ 0x0047ca70
0047C071  8B 86 87 06 00 00         MOV EAX,dword ptr [ESI + 0x687]
0047C077  3B C3                     CMP EAX,EBX
0047C079  0F 85 59 02 00 00         JNZ 0x0047c2d8
0047C07F  6A 02                     PUSH 0x2
0047C081  E8 58 71 F8 FF            CALL 0x004031de
0047C086  40                        INC EAX
0047C087  83 F8 04                  CMP EAX,0x4
0047C08A  0F 87 7E 09 00 00         JA 0x0047ca0e
switchD_0047c090::switchD:
0047C090  FF 24 85 F4 CB 47 00      JMP dword ptr [EAX*0x4 + 0x47cbf4]
switchD_0047c090::caseD_ffffffff:
0047C097  68 DC B5 7A 00            PUSH 0x7ab5dc
0047C09C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047C0A1  53                        PUSH EBX
0047C0A2  53                        PUSH EBX
0047C0A3  68 9A 37 00 00            PUSH 0x379a
0047C0A8  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047C0AD  E8 1E 14 23 00            CALL 0x006ad4d0
0047C0B2  83 C4 18                  ADD ESP,0x18
0047C0B5  85 C0                     TEST EAX,EAX
0047C0B7  74 01                     JZ 0x0047c0ba
0047C0B9  CC                        INT3
LAB_0047c0ba:
0047C0BA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0047C0BF  68 9A 37 00 00            PUSH 0x379a
0047C0C4  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047C0C9  50                        PUSH EAX
0047C0CA  68 FF FF 00 00            PUSH 0xffff
0047C0CF  E8 6C 9D 22 00            CALL 0x006a5e40
0047C0D4  5F                        POP EDI
0047C0D5  5E                        POP ESI
0047C0D6  B8 FF FF 00 00            MOV EAX,0xffff
0047C0DB  5B                        POP EBX
0047C0DC  8B E5                     MOV ESP,EBP
0047C0DE  5D                        POP EBP
0047C0DF  C2 04 00                  RET 0x4
switchD_0047c090::caseD_0:
0047C0E2  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C0E9  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C0F0  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C0F7  66 3B C3                  CMP AX,BX
0047C0FA  89 9E B7 00 00 00         MOV dword ptr [ESI + 0xb7],EBX
0047C100  7C 50                     JL 0x0047c152
0047C102  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C109  66 3B C7                  CMP AX,DI
0047C10C  7D 44                     JGE 0x0047c152
0047C10E  66 3B D3                  CMP DX,BX
0047C111  7C 3F                     JL 0x0047c152
0047C113  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C11A  7D 36                     JGE 0x0047c152
0047C11C  66 3B CB                  CMP CX,BX
0047C11F  7C 31                     JL 0x0047c152
0047C121  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C128  7D 28                     JGE 0x0047c152
0047C12A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C131  0F BF C9                  MOVSX ECX,CX
0047C134  0F AF D9                  IMUL EBX,ECX
0047C137  0F BF CF                  MOVSX ECX,DI
0047C13A  0F BF D2                  MOVSX EDX,DX
0047C13D  0F AF CA                  IMUL ECX,EDX
0047C140  0F BF C0                  MOVSX EAX,AX
0047C143  03 D9                     ADD EBX,ECX
0047C145  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047C14B  03 D8                     ADD EBX,EAX
0047C14D  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047C150  EB 02                     JMP 0x0047c154
LAB_0047c152:
0047C152  33 C9                     XOR ECX,ECX
LAB_0047c154:
0047C154  85 C9                     TEST ECX,ECX
0047C156  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C159  0F 84 EE 05 00 00         JZ 0x0047c74d
0047C15F  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047C162  8B 86 79 06 00 00         MOV EAX,dword ptr [ESI + 0x679]
0047C168  3B D0                     CMP EDX,EAX
0047C16A  0F 85 DD 05 00 00         JNZ 0x0047c74d
0047C170  8B 01                     MOV EAX,dword ptr [ECX]
0047C172  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0047C178  85 C0                     TEST EAX,EAX
0047C17A  0F 84 CD 05 00 00         JZ 0x0047c74d
0047C180  8D BE 81 06 00 00         LEA EDI,[ESI + 0x681]
0047C186  8D 9E 7F 06 00 00         LEA EBX,[ESI + 0x67f]
0047C18C  8D 86 7D 06 00 00         LEA EAX,[ESI + 0x67d]
0047C192  57                        PUSH EDI
0047C193  53                        PUSH EBX
0047C194  50                        PUSH EAX
0047C195  8B CE                     MOV ECX,ESI
0047C197  E8 B2 5F F8 FF            CALL 0x0040214e
0047C19C  83 F8 01                  CMP EAX,0x1
0047C19F  0F 85 E7 04 00 00         JNZ 0x0047c68c
0047C1A5  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C1AC  75 1F                     JNZ 0x0047c1cd
0047C1AE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C1B1  56                        PUSH ESI
0047C1B2  E8 75 54 F8 FF            CALL 0x0040162c
0047C1B7  83 F8 01                  CMP EAX,0x1
0047C1BA  0F 84 7E 02 00 00         JZ 0x0047c43e
0047C1C0  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C1C7  0F 84 BF 04 00 00         JZ 0x0047c68c
LAB_0047c1cd:
0047C1CD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C1D0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047C1D3  E8 98 92 F8 FF            CALL 0x00405470
0047C1D8  85 C0                     TEST EAX,EAX
0047C1DA  0F 84 AC 04 00 00         JZ 0x0047c68c
0047C1E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047C1E3  8B 81 08 05 00 00         MOV EAX,dword ptr [ECX + 0x508]
0047C1E9  85 C0                     TEST EAX,EAX
0047C1EB  0F 85 9B 04 00 00         JNZ 0x0047c68c
0047C1F1  E9 48 02 00 00            JMP 0x0047c43e
switchD_0047c090::caseD_3:
0047C1F6  0F BF 96 73 06 00 00      MOVSX EDX,word ptr [ESI + 0x673]
0047C1FD  0F BF 86 71 06 00 00      MOVSX EAX,word ptr [ESI + 0x671]
0047C204  0F BF 8E 6F 06 00 00      MOVSX ECX,word ptr [ESI + 0x66f]
0047C20B  42                        INC EDX
0047C20C  52                        PUSH EDX
0047C20D  50                        PUSH EAX
0047C20E  51                        PUSH ECX
0047C20F  8B CE                     MOV ECX,ESI
0047C211  E8 55 8D F8 FF            CALL 0x00404f6b
0047C216  53                        PUSH EBX
0047C217  8B CE                     MOV ECX,ESI
0047C219  E8 C0 6F F8 FF            CALL 0x004031de
0047C21E  5F                        POP EDI
0047C21F  5E                        POP ESI
0047C220  B8 02 00 00 00            MOV EAX,0x2
0047C225  5B                        POP EBX
0047C226  8B E5                     MOV ESP,EBP
0047C228  5D                        POP EBP
0047C229  C2 04 00                  RET 0x4
switchD_0047c090::caseD_1:
0047C22C  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C233  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C23A  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C241  66 3B C3                  CMP AX,BX
0047C244  7C 50                     JL 0x0047c296
0047C246  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C24D  66 3B C7                  CMP AX,DI
0047C250  7D 44                     JGE 0x0047c296
0047C252  66 3B D3                  CMP DX,BX
0047C255  7C 3F                     JL 0x0047c296
0047C257  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C25E  7D 36                     JGE 0x0047c296
0047C260  66 3B CB                  CMP CX,BX
0047C263  7C 31                     JL 0x0047c296
0047C265  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C26C  7D 28                     JGE 0x0047c296
0047C26E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C275  0F BF C9                  MOVSX ECX,CX
0047C278  0F AF D9                  IMUL EBX,ECX
0047C27B  0F BF CF                  MOVSX ECX,DI
0047C27E  0F BF D2                  MOVSX EDX,DX
0047C281  0F AF CA                  IMUL ECX,EDX
0047C284  0F BF C0                  MOVSX EAX,AX
0047C287  03 D9                     ADD EBX,ECX
0047C289  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047C28F  03 D8                     ADD EBX,EAX
0047C291  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047C294  EB 02                     JMP 0x0047c298
LAB_0047c296:
0047C296  33 C9                     XOR ECX,ECX
LAB_0047c298:
0047C298  85 C9                     TEST ECX,ECX
0047C29A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C29D  74 1D                     JZ 0x0047c2bc
0047C29F  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047C2A2  8B 86 79 06 00 00         MOV EAX,dword ptr [ESI + 0x679]
0047C2A8  3B D0                     CMP EDX,EAX
0047C2AA  75 10                     JNZ 0x0047c2bc
0047C2AC  8B 01                     MOV EAX,dword ptr [ECX]
0047C2AE  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0047C2B4  85 C0                     TEST EAX,EAX
0047C2B6  0F 85 52 07 00 00         JNZ 0x0047ca0e
LAB_0047c2bc:
0047C2BC  8B CE                     MOV ECX,ESI
0047C2BE  E8 92 75 F8 FF            CALL 0x00403855
0047C2C3  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
LAB_0047c2cd:
0047C2CD  5F                        POP EDI
0047C2CE  5E                        POP ESI
0047C2CF  33 C0                     XOR EAX,EAX
0047C2D1  5B                        POP EBX
0047C2D2  8B E5                     MOV ESP,EBP
0047C2D4  5D                        POP EBP
0047C2D5  C2 04 00                  RET 0x4
LAB_0047c2d8:
0047C2D8  83 F8 01                  CMP EAX,0x1
0047C2DB  0F 85 7C 01 00 00         JNZ 0x0047c45d
0047C2E1  8B BE 83 06 00 00         MOV EDI,dword ptr [ESI + 0x683]
0047C2E7  6A 02                     PUSH 0x2
0047C2E9  47                        INC EDI
0047C2EA  8B CE                     MOV ECX,ESI
0047C2EC  89 BE 83 06 00 00         MOV dword ptr [ESI + 0x683],EDI
0047C2F2  E8 34 77 F8 FF            CALL 0x00403a2b
0047C2F7  83 F8 FF                  CMP EAX,-0x1
0047C2FA  75 0B                     JNZ 0x0047c307
0047C2FC  5F                        POP EDI
0047C2FD  5E                        POP ESI
0047C2FE  0B C0                     OR EAX,EAX
0047C300  5B                        POP EBX
0047C301  8B E5                     MOV ESP,EBP
0047C303  5D                        POP EBP
0047C304  C2 04 00                  RET 0x4
LAB_0047c307:
0047C307  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
0047C30D  0F 85 FB 06 00 00         JNZ 0x0047ca0e
0047C313  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
0047C31D  0F 85 EB 06 00 00         JNZ 0x0047ca0e
0047C323  8B 86 83 06 00 00         MOV EAX,dword ptr [ESI + 0x683]
0047C329  B9 32 00 00 00            MOV ECX,0x32
0047C32E  99                        CDQ
0047C32F  F7 F9                     IDIV ECX
0047C331  85 D2                     TEST EDX,EDX
0047C333  0F 85 D5 06 00 00         JNZ 0x0047ca0e
0047C339  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C340  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C347  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C34E  66 85 C0                  TEST AX,AX
0047C351  7C 50                     JL 0x0047c3a3
0047C353  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C35A  66 3B C7                  CMP AX,DI
0047C35D  7D 44                     JGE 0x0047c3a3
0047C35F  66 85 D2                  TEST DX,DX
0047C362  7C 3F                     JL 0x0047c3a3
0047C364  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C36B  7D 36                     JGE 0x0047c3a3
0047C36D  66 85 C9                  TEST CX,CX
0047C370  7C 31                     JL 0x0047c3a3
0047C372  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C379  7D 28                     JGE 0x0047c3a3
0047C37B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C382  0F BF C9                  MOVSX ECX,CX
0047C385  0F AF D9                  IMUL EBX,ECX
0047C388  0F BF CF                  MOVSX ECX,DI
0047C38B  0F BF D2                  MOVSX EDX,DX
0047C38E  0F AF CA                  IMUL ECX,EDX
0047C391  0F BF C0                  MOVSX EAX,AX
0047C394  03 D9                     ADD EBX,ECX
0047C396  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047C39C  03 D8                     ADD EBX,EAX
0047C39E  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0047C3A1  EB 02                     JMP 0x0047c3a5
LAB_0047c3a3:
0047C3A3  33 C9                     XOR ECX,ECX
LAB_0047c3a5:
0047C3A5  85 C9                     TEST ECX,ECX
0047C3A7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C3AA  0F 84 9D 03 00 00         JZ 0x0047c74d
0047C3B0  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0047C3B3  8B 86 79 06 00 00         MOV EAX,dword ptr [ESI + 0x679]
0047C3B9  3B D0                     CMP EDX,EAX
0047C3BB  0F 85 8C 03 00 00         JNZ 0x0047c74d
0047C3C1  8B 01                     MOV EAX,dword ptr [ECX]
0047C3C3  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0047C3C9  85 C0                     TEST EAX,EAX
0047C3CB  0F 84 7C 03 00 00         JZ 0x0047c74d
0047C3D1  8D BE 81 06 00 00         LEA EDI,[ESI + 0x681]
0047C3D7  8D 9E 7F 06 00 00         LEA EBX,[ESI + 0x67f]
0047C3DD  8D 86 7D 06 00 00         LEA EAX,[ESI + 0x67d]
0047C3E3  57                        PUSH EDI
0047C3E4  53                        PUSH EBX
0047C3E5  50                        PUSH EAX
0047C3E6  8B CE                     MOV ECX,ESI
0047C3E8  E8 61 5D F8 FF            CALL 0x0040214e
0047C3ED  83 F8 01                  CMP EAX,0x1
0047C3F0  0F 85 18 06 00 00         JNZ 0x0047ca0e
0047C3F6  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C3FD  75 1B                     JNZ 0x0047c41a
0047C3FF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C402  56                        PUSH ESI
0047C403  E8 24 52 F8 FF            CALL 0x0040162c
0047C408  83 F8 01                  CMP EAX,0x1
0047C40B  74 31                     JZ 0x0047c43e
0047C40D  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C414  0F 84 F4 05 00 00         JZ 0x0047ca0e
LAB_0047c41a:
0047C41A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C41D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047C420  E8 4B 90 F8 FF            CALL 0x00405470
0047C425  85 C0                     TEST EAX,EAX
0047C427  0F 84 E1 05 00 00         JZ 0x0047ca0e
0047C42D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047C430  8B 81 08 05 00 00         MOV EAX,dword ptr [ECX + 0x508]
0047C436  85 C0                     TEST EAX,EAX
0047C438  0F 85 D0 05 00 00         JNZ 0x0047ca0e
LAB_0047c43e:
0047C43E  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047C441  0F BF 03                  MOVSX EAX,word ptr [EBX]
0047C444  0F BF 8E 7D 06 00 00      MOVSX ECX,word ptr [ESI + 0x67d]
0047C44B  52                        PUSH EDX
0047C44C  50                        PUSH EAX
0047C44D  C7 86 87 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x687],0x2
0047C457  51                        PUSH ECX
0047C458  E9 A1 05 00 00            JMP 0x0047c9fe
LAB_0047c45d:
0047C45D  83 F8 02                  CMP EAX,0x2
0047C460  0F 85 F9 02 00 00         JNZ 0x0047c75f
0047C466  50                        PUSH EAX
0047C467  8B CE                     MOV ECX,ESI
0047C469  E8 70 6D F8 FF            CALL 0x004031de
0047C46E  40                        INC EAX
0047C46F  83 F8 04                  CMP EAX,0x4
0047C472  0F 87 96 05 00 00         JA 0x0047ca0e
switchD_0047c478::switchD:
0047C478  FF 24 85 08 CC 47 00      JMP dword ptr [EAX*0x4 + 0x47cc08]
switchD_0047c478::caseD_ffffffff:
0047C47F  68 B0 B5 7A 00            PUSH 0x7ab5b0
0047C484  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047C489  53                        PUSH EBX
0047C48A  53                        PUSH EBX
0047C48B  68 E9 37 00 00            PUSH 0x37e9
0047C490  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047C495  E8 36 10 23 00            CALL 0x006ad4d0
0047C49A  83 C4 18                  ADD ESP,0x18
0047C49D  85 C0                     TEST EAX,EAX
0047C49F  74 01                     JZ 0x0047c4a2
0047C4A1  CC                        INT3
LAB_0047c4a2:
0047C4A2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0047C4A8  68 E9 37 00 00            PUSH 0x37e9
0047C4AD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047C4B2  52                        PUSH EDX
0047C4B3  68 FF FF 00 00            PUSH 0xffff
0047C4B8  E8 83 99 22 00            CALL 0x006a5e40
0047C4BD  5F                        POP EDI
0047C4BE  5E                        POP ESI
0047C4BF  B8 FF FF 00 00            MOV EAX,0xffff
0047C4C4  5B                        POP EBX
0047C4C5  8B E5                     MOV ESP,EBP
0047C4C7  5D                        POP EBP
0047C4C8  C2 04 00                  RET 0x4
switchD_0047c478::caseD_0:
0047C4CB  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C4D2  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C4D9  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C4E0  66 3B C3                  CMP AX,BX
0047C4E3  7C 50                     JL 0x0047c535
0047C4E5  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C4EC  66 3B C7                  CMP AX,DI
0047C4EF  7D 44                     JGE 0x0047c535
0047C4F1  66 3B D3                  CMP DX,BX
0047C4F4  7C 3F                     JL 0x0047c535
0047C4F6  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C4FD  7D 36                     JGE 0x0047c535
0047C4FF  66 3B CB                  CMP CX,BX
0047C502  7C 31                     JL 0x0047c535
0047C504  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C50B  7D 28                     JGE 0x0047c535
0047C50D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C514  0F BF C9                  MOVSX ECX,CX
0047C517  0F BF D2                  MOVSX EDX,DX
0047C51A  0F AF CB                  IMUL ECX,EBX
0047C51D  0F BF FF                  MOVSX EDI,DI
0047C520  0F AF D7                  IMUL EDX,EDI
0047C523  0F BF C0                  MOVSX EAX,AX
0047C526  03 CA                     ADD ECX,EDX
0047C528  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047C52E  03 C8                     ADD ECX,EAX
0047C530  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047C533  EB 02                     JMP 0x0047c537
LAB_0047c535:
0047C535  33 C9                     XOR ECX,ECX
LAB_0047c537:
0047C537  85 C9                     TEST ECX,ECX
0047C539  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C53C  0F 84 0B 02 00 00         JZ 0x0047c74d
0047C542  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047C545  8B 96 79 06 00 00         MOV EDX,dword ptr [ESI + 0x679]
0047C54B  3B C2                     CMP EAX,EDX
0047C54D  0F 85 FA 01 00 00         JNZ 0x0047c74d
0047C553  8B 11                     MOV EDX,dword ptr [ECX]
0047C555  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047C55B  85 C0                     TEST EAX,EAX
0047C55D  0F 84 EA 01 00 00         JZ 0x0047c74d
0047C563  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047C566  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
0047C56D  75 1B                     JNZ 0x0047c58a
0047C56F  8B 88 B4 04 00 00         MOV ECX,dword ptr [EAX + 0x4b4]
0047C575  85 C9                     TEST ECX,ECX
0047C577  0F 85 D0 01 00 00         JNZ 0x0047c74d
0047C57D  83 B8 45 02 00 00 06      CMP dword ptr [EAX + 0x245],0x6
0047C584  0F 84 C3 01 00 00         JZ 0x0047c74d
LAB_0047c58a:
0047C58A  C7 86 D6 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5d6],0x0
0047C594  C7 86 87 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x687],0x3
0047C59E  5F                        POP EDI
0047C59F  5E                        POP ESI
0047C5A0  B8 02 00 00 00            MOV EAX,0x2
0047C5A5  5B                        POP EBX
0047C5A6  8B E5                     MOV ESP,EBP
0047C5A8  5D                        POP EBP
0047C5A9  C2 04 00                  RET 0x4
switchD_0047c478::caseD_3:
0047C5AC  8D BE 81 06 00 00         LEA EDI,[ESI + 0x681]
0047C5B2  8D 9E 7F 06 00 00         LEA EBX,[ESI + 0x67f]
0047C5B8  8D 86 7D 06 00 00         LEA EAX,[ESI + 0x67d]
0047C5BE  57                        PUSH EDI
0047C5BF  53                        PUSH EBX
0047C5C0  50                        PUSH EAX
0047C5C1  8B CE                     MOV ECX,ESI
0047C5C3  E8 86 5B F8 FF            CALL 0x0040214e
0047C5C8  83 F8 01                  CMP EAX,0x1
0047C5CB  75 15                     JNZ 0x0047c5e2
0047C5CD  0F BF 07                  MOVSX EAX,word ptr [EDI]
0047C5D0  0F BF 0B                  MOVSX ECX,word ptr [EBX]
0047C5D3  0F BF 96 7D 06 00 00      MOVSX EDX,word ptr [ESI + 0x67d]
0047C5DA  50                        PUSH EAX
0047C5DB  51                        PUSH ECX
0047C5DC  52                        PUSH EDX
0047C5DD  E9 1C 04 00 00            JMP 0x0047c9fe
LAB_0047c5e2:
0047C5E2  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C5E9  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C5F0  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C5F7  66 85 C0                  TEST AX,AX
0047C5FA  7C 50                     JL 0x0047c64c
0047C5FC  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C603  66 3B C7                  CMP AX,DI
0047C606  7D 44                     JGE 0x0047c64c
0047C608  66 85 D2                  TEST DX,DX
0047C60B  7C 3F                     JL 0x0047c64c
0047C60D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C614  7D 36                     JGE 0x0047c64c
0047C616  66 85 C9                  TEST CX,CX
0047C619  7C 31                     JL 0x0047c64c
0047C61B  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C622  7D 28                     JGE 0x0047c64c
0047C624  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C62B  0F BF C9                  MOVSX ECX,CX
0047C62E  0F BF D2                  MOVSX EDX,DX
0047C631  0F AF CB                  IMUL ECX,EBX
0047C634  0F BF FF                  MOVSX EDI,DI
0047C637  0F AF D7                  IMUL EDX,EDI
0047C63A  0F BF C0                  MOVSX EAX,AX
0047C63D  03 CA                     ADD ECX,EDX
0047C63F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047C645  03 C8                     ADD ECX,EAX
0047C647  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047C64A  EB 02                     JMP 0x0047c64e
LAB_0047c64c:
0047C64C  33 C9                     XOR ECX,ECX
LAB_0047c64e:
0047C64E  85 C9                     TEST ECX,ECX
0047C650  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C653  0F 84 F4 00 00 00         JZ 0x0047c74d
0047C659  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047C65C  8B 96 79 06 00 00         MOV EDX,dword ptr [ESI + 0x679]
0047C662  3B C2                     CMP EAX,EDX
0047C664  0F 85 E3 00 00 00         JNZ 0x0047c74d
0047C66A  8B 11                     MOV EDX,dword ptr [ECX]
0047C66C  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047C672  85 C0                     TEST EAX,EAX
0047C674  0F 84 D3 00 00 00         JZ 0x0047c74d
0047C67A  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C681  75 09                     JNZ 0x0047c68c
0047C683  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C686  56                        PUSH ESI
0047C687  E8 B7 60 F8 FF            CALL 0x00402743
LAB_0047c68c:
0047C68C  6A 00                     PUSH 0x0
0047C68E  8B CE                     MOV ECX,ESI
0047C690  C7 86 87 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x687],0x1
0047C69A  C7 86 83 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x683],0x0
0047C6A4  E8 82 73 F8 FF            CALL 0x00403a2b
0047C6A9  83 F8 FF                  CMP EAX,-0x1
0047C6AC  0F 85 5C 03 00 00         JNZ 0x0047ca0e
0047C6B2  5F                        POP EDI
0047C6B3  5E                        POP ESI
0047C6B4  0B C0                     OR EAX,EAX
0047C6B6  5B                        POP EBX
0047C6B7  8B E5                     MOV ESP,EBP
0047C6B9  5D                        POP EBP
0047C6BA  C2 04 00                  RET 0x4
switchD_0047c478::caseD_1:
0047C6BD  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C6C4  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C6CB  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C6D2  66 3B C3                  CMP AX,BX
0047C6D5  7C 50                     JL 0x0047c727
0047C6D7  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C6DE  66 3B C7                  CMP AX,DI
0047C6E1  7D 44                     JGE 0x0047c727
0047C6E3  66 3B D3                  CMP DX,BX
0047C6E6  7C 3F                     JL 0x0047c727
0047C6E8  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C6EF  7D 36                     JGE 0x0047c727
0047C6F1  66 3B CB                  CMP CX,BX
0047C6F4  7C 31                     JL 0x0047c727
0047C6F6  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C6FD  7D 28                     JGE 0x0047c727
0047C6FF  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C706  0F BF C9                  MOVSX ECX,CX
0047C709  0F BF D2                  MOVSX EDX,DX
0047C70C  0F AF CB                  IMUL ECX,EBX
0047C70F  0F BF FF                  MOVSX EDI,DI
0047C712  0F AF D7                  IMUL EDX,EDI
0047C715  0F BF C0                  MOVSX EAX,AX
0047C718  03 CA                     ADD ECX,EDX
0047C71A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047C720  03 C8                     ADD ECX,EAX
0047C722  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047C725  EB 02                     JMP 0x0047c729
LAB_0047c727:
0047C727  33 C9                     XOR ECX,ECX
LAB_0047c729:
0047C729  85 C9                     TEST ECX,ECX
0047C72B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C72E  74 1D                     JZ 0x0047c74d
0047C730  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047C733  8B 96 79 06 00 00         MOV EDX,dword ptr [ESI + 0x679]
0047C739  3B C2                     CMP EAX,EDX
0047C73B  75 10                     JNZ 0x0047c74d
0047C73D  8B 11                     MOV EDX,dword ptr [ECX]
0047C73F  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047C745  85 C0                     TEST EAX,EAX
0047C747  0F 85 C1 02 00 00         JNZ 0x0047ca0e
LAB_0047c74d:
0047C74D  8B CE                     MOV ECX,ESI
0047C74F  E8 01 71 F8 FF            CALL 0x00403855
0047C754  5F                        POP EDI
0047C755  5E                        POP ESI
0047C756  33 C0                     XOR EAX,EAX
0047C758  5B                        POP EBX
0047C759  8B E5                     MOV ESP,EBP
0047C75B  5D                        POP EBP
0047C75C  C2 04 00                  RET 0x4
LAB_0047c75f:
0047C75F  83 F8 03                  CMP EAX,0x3
0047C762  0F 85 B4 02 00 00         JNZ 0x0047ca1c
0047C768  6A 02                     PUSH 0x2
0047C76A  8B CE                     MOV ECX,ESI
0047C76C  E8 3D 4A F8 FF            CALL 0x004011ae
0047C771  8B 8E CA 07 00 00         MOV ECX,dword ptr [ESI + 0x7ca]
0047C777  3B CB                     CMP ECX,EBX
0047C779  74 20                     JZ 0x0047c79b
0047C77B  39 9E C6 07 00 00         CMP dword ptr [ESI + 0x7c6],EBX
0047C781  74 18                     JZ 0x0047c79b
0047C783  3B C3                     CMP EAX,EBX
0047C785  75 14                     JNZ 0x0047c79b
0047C787  89 9E D6 05 00 00         MOV dword ptr [ESI + 0x5d6],EBX
0047C78D  5F                        POP EDI
0047C78E  5E                        POP ESI
0047C78F  B8 02 00 00 00            MOV EAX,0x2
0047C794  5B                        POP EBX
0047C795  8B E5                     MOV ESP,EBP
0047C797  5D                        POP EBP
0047C798  C2 04 00                  RET 0x4
LAB_0047c79b:
0047C79B  83 BE D6 05 00 00 01      CMP dword ptr [ESI + 0x5d6],0x1
0047C7A2  0F 85 F1 01 00 00         JNZ 0x0047c999
0047C7A8  66 8B 86 6F 06 00 00      MOV AX,word ptr [ESI + 0x66f]
0047C7AF  66 8B 8E 73 06 00 00      MOV CX,word ptr [ESI + 0x673]
0047C7B6  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C7BD  66 3B C3                  CMP AX,BX
0047C7C0  7C 50                     JL 0x0047c812
0047C7C2  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C7C9  66 3B C7                  CMP AX,DI
0047C7CC  7D 44                     JGE 0x0047c812
0047C7CE  66 3B D3                  CMP DX,BX
0047C7D1  7C 3F                     JL 0x0047c812
0047C7D3  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C7DA  7D 36                     JGE 0x0047c812
0047C7DC  66 3B CB                  CMP CX,BX
0047C7DF  7C 31                     JL 0x0047c812
0047C7E1  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C7E8  7D 28                     JGE 0x0047c812
0047C7EA  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C7F1  0F BF C9                  MOVSX ECX,CX
0047C7F4  0F BF D2                  MOVSX EDX,DX
0047C7F7  0F AF CB                  IMUL ECX,EBX
0047C7FA  0F BF FF                  MOVSX EDI,DI
0047C7FD  0F AF D7                  IMUL EDX,EDI
0047C800  0F BF C0                  MOVSX EAX,AX
0047C803  03 CA                     ADD ECX,EDX
0047C805  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047C80B  03 C8                     ADD ECX,EAX
0047C80D  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047C810  EB 02                     JMP 0x0047c814
LAB_0047c812:
0047C812  33 C9                     XOR ECX,ECX
LAB_0047c814:
0047C814  85 C9                     TEST ECX,ECX
0047C816  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C819  0F 84 2E FF FF FF         JZ 0x0047c74d
0047C81F  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0047C822  8B 96 79 06 00 00         MOV EDX,dword ptr [ESI + 0x679]
0047C828  3B C2                     CMP EAX,EDX
0047C82A  0F 85 1D FF FF FF         JNZ 0x0047c74d
0047C830  8B 11                     MOV EDX,dword ptr [ECX]
0047C832  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0047C838  85 C0                     TEST EAX,EAX
0047C83A  0F 84 0D FF FF FF         JZ 0x0047c74d
0047C840  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C847  75 09                     JNZ 0x0047c852
0047C849  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0047C84C  56                        PUSH ESI
0047C84D  E8 F1 5E F8 FF            CALL 0x00402743
LAB_0047c852:
0047C852  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0047C856  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0047C85A  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
0047C85E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047C865  66 85 C0                  TEST AX,AX
0047C868  7C 49                     JL 0x0047c8b3
0047C86A  66 3B C7                  CMP AX,DI
0047C86D  7D 44                     JGE 0x0047c8b3
0047C86F  66 85 D2                  TEST DX,DX
0047C872  7C 3F                     JL 0x0047c8b3
0047C874  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C87B  7D 36                     JGE 0x0047c8b3
0047C87D  66 85 C9                  TEST CX,CX
0047C880  7C 31                     JL 0x0047c8b3
0047C882  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047C889  7D 28                     JGE 0x0047c8b3
0047C88B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C892  0F BF C9                  MOVSX ECX,CX
0047C895  0F AF CB                  IMUL ECX,EBX
0047C898  0F BF D2                  MOVSX EDX,DX
0047C89B  0F BF DF                  MOVSX EBX,DI
0047C89E  0F AF D3                  IMUL EDX,EBX
0047C8A1  0F BF C0                  MOVSX EAX,AX
0047C8A4  03 CA                     ADD ECX,EDX
0047C8A6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0047C8AC  03 C8                     ADD ECX,EAX
0047C8AE  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
0047C8B1  EB 02                     JMP 0x0047c8b5
LAB_0047c8b3:
0047C8B3  33 C9                     XOR ECX,ECX
LAB_0047c8b5:
0047C8B5  85 C9                     TEST ECX,ECX
0047C8B7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0047C8BA  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047C8BD  0F 84 C8 00 00 00         JZ 0x0047c98b
0047C8C3  83 BE 6B 06 00 00 14      CMP dword ptr [ESI + 0x66b],0x14
0047C8CA  0F 85 B4 00 00 00         JNZ 0x0047c984
0047C8D0  83 BE 75 06 00 00 63      CMP dword ptr [ESI + 0x675],0x63
0047C8D7  0F 85 AE 00 00 00         JNZ 0x0047c98b
0047C8DD  66 8B 86 73 06 00 00      MOV AX,word ptr [ESI + 0x673]
0047C8E4  66 8B 96 71 06 00 00      MOV DX,word ptr [ESI + 0x671]
0047C8EB  66 8B B6 6F 06 00 00      MOV SI,word ptr [ESI + 0x66f]
0047C8F2  66 85 F6                  TEST SI,SI
0047C8F5  7C 4C                     JL 0x0047c943
0047C8F7  66 3B F7                  CMP SI,DI
0047C8FA  7D 47                     JGE 0x0047c943
0047C8FC  66 85 D2                  TEST DX,DX
0047C8FF  7C 42                     JL 0x0047c943
0047C901  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047C908  7D 39                     JGE 0x0047c943
0047C90A  66 85 C0                  TEST AX,AX
0047C90D  7C 34                     JL 0x0047c943
0047C90F  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0047C916  7D 2B                     JGE 0x0047c943
0047C918  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047C91F  0F BF C8                  MOVSX ECX,AX
0047C922  0F AF CB                  IMUL ECX,EBX
0047C925  0F BF DA                  MOVSX EBX,DX
0047C928  0F BF FF                  MOVSX EDI,DI
0047C92B  0F AF DF                  IMUL EBX,EDI
0047C92E  0F BF FE                  MOVSX EDI,SI
0047C931  03 CB                     ADD ECX,EBX
0047C933  03 CF                     ADD ECX,EDI
0047C935  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
0047C93B  8B 3C CF                  MOV EDI,dword ptr [EDI + ECX*0x8]
0047C93E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047C941  EB 02                     JMP 0x0047c945
LAB_0047c943:
0047C943  33 FF                     XOR EDI,EDI
LAB_0047c945:
0047C945  8B 1D 38 2A 80 00         MOV EBX,dword ptr [0x00802a38]
0047C94B  8B 9B E4 00 00 00         MOV EBX,dword ptr [EBX + 0xe4]
0047C951  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
0047C955  8D 55 F0                  LEA EDX,[EBP + -0x10]
0047C958  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0047C95B  52                        PUSH EDX
0047C95C  6A 0B                     PUSH 0xb
0047C95E  66 89 75 F4               MOV word ptr [EBP + -0xc],SI
0047C962  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
0047C966  E8 BB 57 F8 FF            CALL 0x00402126
0047C96B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047C96E  8B CF                     MOV ECX,EDI
0047C970  50                        PUSH EAX
0047C971  E8 B6 4C F8 FF            CALL 0x0040162c
0047C976  5F                        POP EDI
0047C977  5E                        POP ESI
0047C978  B8 02 00 00 00            MOV EAX,0x2
0047C97D  5B                        POP EBX
0047C97E  8B E5                     MOV ESP,EBP
0047C980  5D                        POP EBP
0047C981  C2 04 00                  RET 0x4
LAB_0047c984:
0047C984  C6 81 17 03 00 00 01      MOV byte ptr [ECX + 0x317],0x1
LAB_0047c98b:
0047C98B  5F                        POP EDI
0047C98C  5E                        POP ESI
0047C98D  B8 02 00 00 00            MOV EAX,0x2
0047C992  5B                        POP EBX
0047C993  8B E5                     MOV ESP,EBP
0047C995  5D                        POP EBP
0047C996  C2 04 00                  RET 0x4
LAB_0047c999:
0047C999  3B CB                     CMP ECX,EBX
0047C99B  75 71                     JNZ 0x0047ca0e
0047C99D  39 9E C6 07 00 00         CMP dword ptr [ESI + 0x7c6],EBX
0047C9A3  75 69                     JNZ 0x0047ca0e
0047C9A5  3B C3                     CMP EAX,EBX
0047C9A7  75 65                     JNZ 0x0047ca0e
0047C9A9  C7 86 87 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x687],0x4
LAB_0047c9b3:
0047C9B3  66 8B 86 73 06 00 00      MOV AX,word ptr [ESI + 0x673]
0047C9BA  66 8B 8E 71 06 00 00      MOV CX,word ptr [ESI + 0x671]
0047C9C1  8D BE 81 06 00 00         LEA EDI,[ESI + 0x681]
0047C9C7  8D 9E 7F 06 00 00         LEA EBX,[ESI + 0x67f]
0047C9CD  57                        PUSH EDI
0047C9CE  8D 96 7D 06 00 00         LEA EDX,[ESI + 0x67d]
0047C9D4  53                        PUSH EBX
0047C9D5  66 40                     INC AX
0047C9D7  52                        PUSH EDX
0047C9D8  66 8B 96 6F 06 00 00      MOV DX,word ptr [ESI + 0x66f]
0047C9DF  6A 02                     PUSH 0x2
0047C9E1  50                        PUSH EAX
0047C9E2  51                        PUSH ECX
0047C9E3  52                        PUSH EDX
0047C9E4  50                        PUSH EAX
0047C9E5  51                        PUSH ECX
0047C9E6  52                        PUSH EDX
0047C9E7  8B CE                     MOV ECX,ESI
0047C9E9  E8 1A 7F F8 FF            CALL 0x00404908
0047C9EE  0F BF 0F                  MOVSX ECX,word ptr [EDI]
0047C9F1  0F BF 13                  MOVSX EDX,word ptr [EBX]
0047C9F4  0F BF 86 7D 06 00 00      MOVSX EAX,word ptr [ESI + 0x67d]
0047C9FB  51                        PUSH ECX
0047C9FC  52                        PUSH EDX
0047C9FD  50                        PUSH EAX
LAB_0047c9fe:
0047C9FE  8B CE                     MOV ECX,ESI
0047CA00  E8 66 85 F8 FF            CALL 0x00404f6b
0047CA05  6A 00                     PUSH 0x0
0047CA07  8B CE                     MOV ECX,ESI
0047CA09  E8 D0 67 F8 FF            CALL 0x004031de
switchD_0047c090::caseD_2:
0047CA0E  5F                        POP EDI
0047CA0F  5E                        POP ESI
0047CA10  B8 02 00 00 00            MOV EAX,0x2
0047CA15  5B                        POP EBX
0047CA16  8B E5                     MOV ESP,EBP
0047CA18  5D                        POP EBP
0047CA19  C2 04 00                  RET 0x4
LAB_0047ca1c:
0047CA1C  83 F8 04                  CMP EAX,0x4
0047CA1F  75 20                     JNZ 0x0047ca41
0047CA21  6A 02                     PUSH 0x2
0047CA23  8B CE                     MOV ECX,ESI
0047CA25  E8 B4 67 F8 FF            CALL 0x004031de
0047CA2A  83 F8 FF                  CMP EAX,-0x1
0047CA2D  74 35                     JZ 0x0047ca64
0047CA2F  3B C3                     CMP EAX,EBX
0047CA31  0F 84 96 F8 FF FF         JZ 0x0047c2cd
0047CA37  83 F8 03                  CMP EAX,0x3
0047CA3A  75 D2                     JNZ 0x0047ca0e
0047CA3C  E9 72 FF FF FF            JMP 0x0047c9b3
LAB_0047ca41:
0047CA41  68 88 B5 7A 00            PUSH 0x7ab588
0047CA46  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047CA4B  53                        PUSH EBX
0047CA4C  53                        PUSH EBX
0047CA4D  68 57 38 00 00            PUSH 0x3857
0047CA52  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047CA57  E8 74 0A 23 00            CALL 0x006ad4d0
0047CA5C  83 C4 18                  ADD ESP,0x18
0047CA5F  85 C0                     TEST EAX,EAX
0047CA61  74 01                     JZ 0x0047ca64
0047CA63  CC                        INT3
LAB_0047ca64:
0047CA64  5F                        POP EDI
0047CA65  5E                        POP ESI
0047CA66  83 C8 FF                  OR EAX,0xffffffff
0047CA69  5B                        POP EBX
0047CA6A  8B E5                     MOV ESP,EBP
0047CA6C  5D                        POP EBP
0047CA6D  C2 04 00                  RET 0x4
LAB_0047ca70:
0047CA70  B9 17 00 00 00            MOV ECX,0x17
0047CA75  33 C0                     XOR EAX,EAX
0047CA77  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0047CA7D  F3 AB                     STOSD.REP ES:EDI
0047CA7F  8B 86 F7 06 00 00         MOV EAX,dword ptr [ESI + 0x6f7]
0047CA85  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
0047CA8B  83 F8 07                  CMP EAX,0x7
0047CA8E  74 0E                     JZ 0x0047ca9e
0047CA90  83 F8 13                  CMP EAX,0x13
0047CA93  74 09                     JZ 0x0047ca9e
0047CA95  83 F8 1B                  CMP EAX,0x1b
0047CA98  0F 85 2F F8 FF FF         JNZ 0x0047c2cd
LAB_0047ca9e:
0047CA9E  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
0047CAA4  3B C3                     CMP EAX,EBX
0047CAA6  0F 84 21 F8 FF FF         JZ 0x0047c2cd
0047CAAC  8D 4D 08                  LEA ECX,[EBP + 0x8]
0047CAAF  51                        PUSH ECX
0047CAB0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0047CAB6  50                        PUSH EAX
0047CAB7  E8 14 98 26 00            CALL 0x006e62d0
0047CABC  83 F8 FC                  CMP EAX,-0x4
0047CABF  75 32                     JNZ 0x0047caf3
0047CAC1  68 5C B5 7A 00            PUSH 0x7ab55c
0047CAC6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047CACB  53                        PUSH EBX
0047CACC  53                        PUSH EBX
0047CACD  68 81 37 00 00            PUSH 0x3781
0047CAD2  68 3C 9D 7A 00            PUSH 0x7a9d3c
0047CAD7  E8 F4 09 23 00            CALL 0x006ad4d0
0047CADC  83 C4 18                  ADD ESP,0x18
0047CADF  85 C0                     TEST EAX,EAX
0047CAE1  0F 84 E6 F7 FF FF         JZ 0x0047c2cd
0047CAE7  CC                        INT3
LAB_0047caf3:
0047CAF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0047CAF6  66 8B 8E 1B 04 00 00      MOV CX,word ptr [ESI + 0x41b]
0047CAFD  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
0047CB00  66 8B 96 1D 04 00 00      MOV DX,word ptr [ESI + 0x41d]
0047CB07  89 86 6B 06 00 00         MOV dword ptr [ESI + 0x66b],EAX
0047CB0D  66 8B 86 19 04 00 00      MOV AX,word ptr [ESI + 0x419]
0047CB14  66 3B C3                  CMP AX,BX
0047CB17  66 89 86 6F 06 00 00      MOV word ptr [ESI + 0x66f],AX
0047CB1E  66 89 8E 71 06 00 00      MOV word ptr [ESI + 0x671],CX
0047CB25  66 89 96 73 06 00 00      MOV word ptr [ESI + 0x673],DX
0047CB2C  7C 4F                     JL 0x0047cb7d
0047CB2E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0047CB35  66 3B C7                  CMP AX,DI
0047CB38  7D 43                     JGE 0x0047cb7d
0047CB3A  66 3B CB                  CMP CX,BX
0047CB3D  7C 3E                     JL 0x0047cb7d
0047CB3F  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047CB46  7D 35                     JGE 0x0047cb7d
0047CB48  66 3B D3                  CMP DX,BX
0047CB4B  7C 30                     JL 0x0047cb7d
0047CB4D  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0047CB54  7D 27                     JGE 0x0047cb7d
0047CB56  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047CB5D  0F BF D2                  MOVSX EDX,DX
0047CB60  0F AF DA                  IMUL EBX,EDX
0047CB63  0F BF D7                  MOVSX EDX,DI
0047CB66  0F BF C9                  MOVSX ECX,CX
0047CB69  0F AF D1                  IMUL EDX,ECX
0047CB6C  03 DA                     ADD EBX,EDX
0047CB6E  0F BF D0                  MOVSX EDX,AX
0047CB71  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0047CB76  03 DA                     ADD EBX,EDX
0047CB78  8B 0C D8                  MOV ECX,dword ptr [EAX + EBX*0x8]
0047CB7B  EB 02                     JMP 0x0047cb7f
LAB_0047cb7d:
0047CB7D  33 C9                     XOR ECX,ECX
LAB_0047cb7f:
0047CB7F  85 C9                     TEST ECX,ECX
0047CB81  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0047CB84  0F 84 43 F7 FF FF         JZ 0x0047c2cd
0047CB8A  8B 11                     MOV EDX,dword ptr [ECX]
0047CB8C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0047CB8F  83 F8 52                  CMP EAX,0x52
0047CB92  89 86 75 06 00 00         MOV dword ptr [ESI + 0x675],EAX
0047CB98  74 05                     JZ 0x0047cb9f
0047CB9A  83 F8 5F                  CMP EAX,0x5f
0047CB9D  75 0C                     JNZ 0x0047cbab
LAB_0047cb9f:
0047CB9F  81 BE 6B 06 00 00 A4 01 00 00  CMP dword ptr [ESI + 0x66b],0x1a4
0047CBA9  74 09                     JZ 0x0047cbb4
LAB_0047cbab:
0047CBAB  83 F8 63                  CMP EAX,0x63
0047CBAE  0F 85 19 F7 FF FF         JNZ 0x0047c2cd
LAB_0047cbb4:
0047CBB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0047CBB7  0F BF 96 73 06 00 00      MOVSX EDX,word ptr [ESI + 0x673]
0047CBBE  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0047CBC1  42                        INC EDX
0047CBC2  0F BF 86 71 06 00 00      MOVSX EAX,word ptr [ESI + 0x671]
0047CBC9  89 8E 79 06 00 00         MOV dword ptr [ESI + 0x679],ECX
0047CBCF  52                        PUSH EDX
0047CBD0  0F BF 8E 6F 06 00 00      MOVSX ECX,word ptr [ESI + 0x66f]
0047CBD7  50                        PUSH EAX
0047CBD8  C7 86 87 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x687],0x0
0047CBE2  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
0047CBEC  51                        PUSH ECX
0047CBED  E9 0C FE FF FF            JMP 0x0047c9fe
