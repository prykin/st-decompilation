FUN_00553480:
00553480  55                        PUSH EBP
00553481  8B EC                     MOV EBP,ESP
00553483  83 EC 14                  SUB ESP,0x14
00553486  53                        PUSH EBX
00553487  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055348A  33 C0                     XOR EAX,EAX
0055348C  56                        PUSH ESI
0055348D  57                        PUSH EDI
0055348E  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00553491  3B D8                     CMP EBX,EAX
00553493  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00553496  7C 19                     JL 0x005534b1
00553498  3B DF                     CMP EBX,EDI
0055349A  7D 15                     JGE 0x005534b1
0055349C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055349F  3B D0                     CMP EDX,EAX
005534A1  7C 11                     JL 0x005534b4
005534A3  3B 55 18                  CMP EDX,dword ptr [EBP + 0x18]
005534A6  7D 0C                     JGE 0x005534b4
005534A8  8B CA                     MOV ECX,EDX
005534AA  0F AF CF                  IMUL ECX,EDI
005534AD  03 CB                     ADD ECX,EBX
005534AF  EB 06                     JMP 0x005534b7
LAB_005534b1:
005534B1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_005534b4:
005534B4  83 C9 FF                  OR ECX,0xffffffff
LAB_005534b7:
005534B7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005534BA  3B D8                     CMP EBX,EAX
005534BC  0F 8E AD 00 00 00         JLE 0x0055356f
005534C2  85 D2                     TEST EDX,EDX
005534C4  7E 22                     JLE 0x005534e8
005534C6  8B D1                     MOV EDX,ECX
005534C8  2B D7                     SUB EDX,EDI
005534CA  8A 54 32 FF               MOV DL,byte ptr [EDX + ESI*0x1 + -0x1]
005534CE  80 FA 0F                  CMP DL,0xf
005534D1  88 55 14                  MOV byte ptr [EBP + 0x14],DL
005534D4  73 12                     JNC 0x005534e8
005534D6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005534D9  25 FF 00 00 00            AND EAX,0xff
005534DE  C1 E0 04                  SHL EAX,0x4
005534E1  66 8B 80 F4 88 7C 00      MOV AX,word ptr [EAX + 0x7c88f4]
LAB_005534e8:
005534E8  8A 54 31 FF               MOV DL,byte ptr [ECX + ESI*0x1 + -0x1]
005534EC  80 FA 0F                  CMP DL,0xf
005534EF  88 55 14                  MOV byte ptr [EBP + 0x14],DL
005534F2  73 15                     JNC 0x00553509
005534F4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005534F7  81 E2 FF 00 00 00         AND EDX,0xff
005534FD  C1 E2 04                  SHL EDX,0x4
00553500  66 8B 92 F6 88 7C 00      MOV DX,word ptr [EDX + 0x7c88f6]
00553507  0B C2                     OR EAX,EDX
LAB_00553509:
00553509  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_0055350c:
0055350C  85 DB                     TEST EBX,EBX
0055350E  7E 2C                     JLE 0x0055353c
00553510  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00553513  4B                        DEC EBX
00553514  3B D3                     CMP EDX,EBX
00553516  7D 24                     JGE 0x0055353c
00553518  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
0055351B  8A 54 3A FF               MOV DL,byte ptr [EDX + EDI*0x1 + -0x1]
0055351F  80 FA 0F                  CMP DL,0xf
00553522  88 55 14                  MOV byte ptr [EBP + 0x14],DL
00553525  73 15                     JNC 0x0055353c
00553527  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055352A  81 E2 FF 00 00 00         AND EDX,0xff
00553530  C1 E2 04                  SHL EDX,0x4
00553533  66 8B 92 F8 88 7C 00      MOV DX,word ptr [EDX + 0x7c88f8]
0055353A  0B C2                     OR EAX,EDX
LAB_0055353c:
0055353C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055353F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00553542  4A                        DEC EDX
00553543  3B DA                     CMP EBX,EDX
00553545  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00553548  7D 35                     JGE 0x0055357f
0055354A  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
0055354D  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
00553550  80 FA 0F                  CMP DL,0xf
00553553  88 55 14                  MOV byte ptr [EBP + 0x14],DL
00553556  73 36                     JNC 0x0055358e
00553558  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055355B  81 E2 FF 00 00 00         AND EDX,0xff
00553561  C1 E2 04                  SHL EDX,0x4
00553564  66 8B 92 FA 88 7C 00      MOV DX,word ptr [EDX + 0x7c88fa]
0055356B  0B C2                     OR EAX,EDX
0055356D  EB 1F                     JMP 0x0055358e
LAB_0055356f:
0055356F  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00553576  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0055357D  EB 8D                     JMP 0x0055350c
LAB_0055357f:
0055357F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00553582  C7 44 95 EC 03 00 00 00   MOV dword ptr [EBP + EDX*0x4 + -0x14],0x3
0055358A  42                        INC EDX
0055358B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0055358e:
0055358E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00553591  8D 57 FF                  LEA EDX,[EDI + -0x1]
00553594  3B DA                     CMP EBX,EDX
00553596  7D 2E                     JGE 0x005535c6
00553598  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055359B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0055359E  3B DA                     CMP EBX,EDX
005535A0  7D 24                     JGE 0x005535c6
005535A2  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
005535A5  8A 54 3A 01               MOV DL,byte ptr [EDX + EDI*0x1 + 0x1]
005535A9  80 FA 0F                  CMP DL,0xf
005535AC  88 55 14                  MOV byte ptr [EBP + 0x14],DL
005535AF  73 15                     JNC 0x005535c6
005535B1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005535B4  81 E2 FF 00 00 00         AND EDX,0xff
005535BA  C1 E2 04                  SHL EDX,0x4
005535BD  66 8B 92 FC 88 7C 00      MOV DX,word ptr [EDX + 0x7c88fc]
005535C4  0B C2                     OR EAX,EDX
LAB_005535c6:
005535C6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005535C9  8D 5F FF                  LEA EBX,[EDI + -0x1]
005535CC  3B D3                     CMP EDX,EBX
005535CE  7D 23                     JGE 0x005535f3
005535D0  8A 54 31 01               MOV DL,byte ptr [ECX + ESI*0x1 + 0x1]
005535D4  80 FA 0F                  CMP DL,0xf
005535D7  88 55 14                  MOV byte ptr [EBP + 0x14],DL
005535DA  73 26                     JNC 0x00553602
005535DC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005535DF  81 E2 FF 00 00 00         AND EDX,0xff
005535E5  C1 E2 04                  SHL EDX,0x4
005535E8  66 8B 92 FE 88 7C 00      MOV DX,word ptr [EDX + 0x7c88fe]
005535EF  0B C2                     OR EAX,EDX
005535F1  EB 0F                     JMP 0x00553602
LAB_005535f3:
005535F3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005535F6  C7 44 95 EC 05 00 00 00   MOV dword ptr [EBP + EDX*0x4 + -0x14],0x5
005535FE  42                        INC EDX
005535FF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00553602:
00553602  39 5D 08                  CMP dword ptr [EBP + 0x8],EBX
00553605  7D 30                     JGE 0x00553637
00553607  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055360A  85 D2                     TEST EDX,EDX
0055360C  0F 8E 87 00 00 00         JLE 0x00553699
00553612  8B D1                     MOV EDX,ECX
00553614  2B D7                     SUB EDX,EDI
00553616  8A 54 32 01               MOV DL,byte ptr [EDX + ESI*0x1 + 0x1]
0055361A  80 FA 0F                  CMP DL,0xf
0055361D  88 55 14                  MOV byte ptr [EBP + 0x14],DL
00553620  73 15                     JNC 0x00553637
00553622  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00553625  81 E2 FF 00 00 00         AND EDX,0xff
0055362B  C1 E2 04                  SHL EDX,0x4
0055362E  66 8B 92 00 89 7C 00      MOV DX,word ptr [EDX + 0x7c8900]
00553635  0B C2                     OR EAX,EDX
LAB_00553637:
00553637  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055363A  85 D2                     TEST EDX,EDX
0055363C  7E 5B                     JLE 0x00553699
0055363E  2B CF                     SUB ECX,EDI
00553640  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00553643  80 F9 0F                  CMP CL,0xf
00553646  88 4D 14                  MOV byte ptr [EBP + 0x14],CL
00553649  73 15                     JNC 0x00553660
0055364B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055364E  81 E1 FF 00 00 00         AND ECX,0xff
00553654  C1 E1 04                  SHL ECX,0x4
00553657  66 8B 91 02 89 7C 00      MOV DX,word ptr [ECX + 0x7c8902]
0055365E  0B C2                     OR EAX,EDX
LAB_00553660:
00553660  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00553663:
00553663  85 C9                     TEST ECX,ECX
00553665  0F 8E 92 00 00 00         JLE 0x005536fd
0055366B  8D 55 EC                  LEA EDX,[EBP + -0x14]
0055366E  8B F1                     MOV ESI,ECX
LAB_00553670:
00553670  8B 0A                     MOV ECX,dword ptr [EDX]
00553672  49                        DEC ECX
00553673  83 F9 06                  CMP ECX,0x6
00553676  77 7B                     JA 0x005536f3
switchD_00553678::switchD:
00553678  FF 24 8D 04 37 55 00      JMP dword ptr [ECX*0x4 + 0x553704]
switchD_00553678::caseD_1:
0055367F  F6 C4 04                  TEST AH,0x4
00553682  74 0C                     JZ 0x00553690
00553684  F6 C4 08                  TEST AH,0x8
00553687  75 02                     JNZ 0x0055368b
00553689  0C 20                     OR AL,0x20
LAB_0055368b:
0055368B  F6 C4 04                  TEST AH,0x4
0055368E  75 63                     JNZ 0x005536f3
LAB_00553690:
00553690  F6 C4 08                  TEST AH,0x8
00553693  74 5E                     JZ 0x005536f3
00553695  0C 10                     OR AL,0x10
00553697  EB 5A                     JMP 0x005536f3
LAB_00553699:
00553699  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055369C  C7 44 8D EC 07 00 00 00   MOV dword ptr [EBP + ECX*0x4 + -0x14],0x7
005536A4  41                        INC ECX
005536A5  EB BC                     JMP 0x00553663
switchD_00553678::caseD_3:
005536A7  F6 C4 08                  TEST AH,0x8
005536AA  74 0C                     JZ 0x005536b8
005536AC  F6 C4 01                  TEST AH,0x1
005536AF  75 02                     JNZ 0x005536b3
005536B1  0C 80                     OR AL,0x80
LAB_005536b3:
005536B3  F6 C4 08                  TEST AH,0x8
005536B6  75 3B                     JNZ 0x005536f3
LAB_005536b8:
005536B8  F6 C4 01                  TEST AH,0x1
005536BB  74 36                     JZ 0x005536f3
005536BD  0C 40                     OR AL,0x40
005536BF  EB 32                     JMP 0x005536f3
switchD_00553678::caseD_5:
005536C1  F6 C4 01                  TEST AH,0x1
005536C4  74 0C                     JZ 0x005536d2
005536C6  F6 C4 02                  TEST AH,0x2
005536C9  75 02                     JNZ 0x005536cd
005536CB  0C 02                     OR AL,0x2
LAB_005536cd:
005536CD  F6 C4 01                  TEST AH,0x1
005536D0  75 21                     JNZ 0x005536f3
LAB_005536d2:
005536D2  F6 C4 02                  TEST AH,0x2
005536D5  74 1C                     JZ 0x005536f3
005536D7  0C 01                     OR AL,0x1
005536D9  EB 18                     JMP 0x005536f3
switchD_00553678::caseD_7:
005536DB  F6 C4 02                  TEST AH,0x2
005536DE  74 0C                     JZ 0x005536ec
005536E0  F6 C4 04                  TEST AH,0x4
005536E3  75 02                     JNZ 0x005536e7
005536E5  0C 08                     OR AL,0x8
LAB_005536e7:
005536E7  F6 C4 02                  TEST AH,0x2
005536EA  75 07                     JNZ 0x005536f3
LAB_005536ec:
005536EC  F6 C4 04                  TEST AH,0x4
005536EF  74 02                     JZ 0x005536f3
005536F1  0C 04                     OR AL,0x4
switchD_00553678::caseD_2:
005536F3  83 C2 04                  ADD EDX,0x4
005536F6  4E                        DEC ESI
005536F7  0F 85 73 FF FF FF         JNZ 0x00553670
LAB_005536fd:
005536FD  5F                        POP EDI
005536FE  5E                        POP ESI
005536FF  5B                        POP EBX
00553700  8B E5                     MOV ESP,EBP
00553702  5D                        POP EBP
00553703  C3                        RET
