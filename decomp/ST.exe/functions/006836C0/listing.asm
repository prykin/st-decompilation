FUN_006836c0:
006836C0  55                        PUSH EBP
006836C1  8B EC                     MOV EBP,ESP
006836C3  53                        PUSH EBX
006836C4  56                        PUSH ESI
006836C5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006836C8  57                        PUSH EDI
006836C9  85 F6                     TEST ESI,ESI
006836CB  74 07                     JZ 0x006836d4
006836CD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006836D0  85 C0                     TEST EAX,EAX
006836D2  75 17                     JNZ 0x006836eb
LAB_006836d4:
006836D4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006836D9  68 8A 03 00 00            PUSH 0x38a
006836DE  68 04 56 7D 00            PUSH 0x7d5604
006836E3  50                        PUSH EAX
006836E4  6A CC                     PUSH -0x34
006836E6  E8 55 27 02 00            CALL 0x006a5e40
LAB_006836eb:
006836EB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006836EE  33 FF                     XOR EDI,EDI
006836F0  85 C0                     TEST EAX,EAX
006836F2  7E 46                     JLE 0x0068373a
LAB_006836f4:
006836F4  3B F8                     CMP EDI,EAX
006836F6  7D 08                     JGE 0x00683700
006836F8  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006836FB  8B 0C B9                  MOV ECX,dword ptr [ECX + EDI*0x4]
006836FE  EB 02                     JMP 0x00683702
LAB_00683700:
00683700  33 C9                     XOR ECX,ECX
LAB_00683702:
00683702  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_00683705:
00683705  8A 19                     MOV BL,byte ptr [ECX]
00683707  8A D3                     MOV DL,BL
00683709  3A 1E                     CMP BL,byte ptr [ESI]
0068370B  75 1C                     JNZ 0x00683729
0068370D  84 D2                     TEST DL,DL
0068370F  74 14                     JZ 0x00683725
00683711  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
00683714  8A D3                     MOV DL,BL
00683716  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
00683719  75 0E                     JNZ 0x00683729
0068371B  83 C1 02                  ADD ECX,0x2
0068371E  83 C6 02                  ADD ESI,0x2
00683721  84 D2                     TEST DL,DL
00683723  75 E0                     JNZ 0x00683705
LAB_00683725:
00683725  33 C9                     XOR ECX,ECX
00683727  EB 05                     JMP 0x0068372e
LAB_00683729:
00683729  1B C9                     SBB ECX,ECX
0068372B  83 D9 FF                  SBB ECX,-0x1
LAB_0068372e:
0068372E  85 C9                     TEST ECX,ECX
00683730  74 17                     JZ 0x00683749
00683732  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00683735  47                        INC EDI
00683736  3B F8                     CMP EDI,EAX
00683738  7C BA                     JL 0x006836f4
LAB_0068373a:
0068373A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0068373D  52                        PUSH EDX
0068373E  56                        PUSH ESI
0068373F  E8 5C 23 03 00            CALL 0x006b5aa0
00683744  5F                        POP EDI
00683745  5E                        POP ESI
00683746  5B                        POP EBX
00683747  5D                        POP EBP
00683748  C3                        RET
LAB_00683749:
00683749  8B C7                     MOV EAX,EDI
0068374B  5F                        POP EDI
0068374C  5E                        POP ESI
0068374D  5B                        POP EBX
0068374E  5D                        POP EBP
0068374F  C3                        RET
