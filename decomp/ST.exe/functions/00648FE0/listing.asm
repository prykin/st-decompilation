CreateAi:
00648FE0  55                        PUSH EBP
00648FE1  8B EC                     MOV EBP,ESP
00648FE3  83 EC 60                  SUB ESP,0x60
00648FE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00648FEB  53                        PUSH EBX
00648FEC  56                        PUSH ESI
00648FED  57                        PUSH EDI
00648FEE  33 FF                     XOR EDI,EDI
00648FF0  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00648FF3  8D 4D A0                  LEA ECX,[EBP + -0x60]
00648FF6  57                        PUSH EDI
00648FF7  52                        PUSH EDX
00648FF8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00648FFB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00648FFE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00649001  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00649004  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064900A  E8 E1 47 0E 00            CALL 0x0072d7f0
0064900F  8B F0                     MOV ESI,EAX
00649011  83 C4 08                  ADD ESP,0x8
00649014  3B F7                     CMP ESI,EDI
00649016  0F 85 0A 03 00 00         JNZ 0x00649326
0064901C  39 3D 38 2A 80 00         CMP dword ptr [0x00802a38],EDI
00649022  75 17                     JNZ 0x0064903b
00649024  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00649029  68 9D 00 00 00            PUSH 0x9d
0064902E  68 80 28 7D 00            PUSH 0x7d2880
00649033  50                        PUSH EAX
00649034  6A CC                     PUSH -0x34
00649036  E8 05 CE 05 00            CALL 0x006a5e40
LAB_0064903b:
0064903B  39 3D 9C 87 80 00         CMP dword ptr [0x0080879c],EDI
00649041  0F 85 63 01 00 00         JNZ 0x006491aa
00649047  8B 0D A0 87 80 00         MOV ECX,dword ptr [0x008087a0]
0064904D  81 E1 FF 00 00 00         AND ECX,0xff
00649053  8D 41 FF                  LEA EAX,[ECX + -0x1]
00649056  83 F8 12                  CMP EAX,0x12
00649059  0F 87 54 01 00 00         JA 0x006491b3
0064905F  33 D2                     XOR EDX,EDX
00649061  8A 90 88 93 64 00         MOV DL,byte ptr [EAX + 0x649388]
switchD_00649067::switchD:
00649067  FF 24 95 78 93 64 00      JMP dword ptr [EDX*0x4 + 0x649378]
switchD_00649067::caseD_3:
0064906E  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
00649073  3B C7                     CMP EAX,EDI
00649075  0F 84 0B 01 00 00         JZ 0x00649186
0064907B  8B 08                     MOV ECX,dword ptr [EAX]
0064907D  8D B0 04 04 00 00         LEA ESI,[EAX + 0x404]
00649083  33 C0                     XOR EAX,EAX
00649085  89 0D 2A C5 80 00         MOV dword ptr [0x0080c52a],ECX
0064908B  A0 4D 87 80 00            MOV AL,[0x0080874d]
00649090  B9 05 00 00 00            MOV ECX,0x5
00649095  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00649098  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0064909B  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0064909E  C1 E2 04                  SHL EDX,0x4
006490A1  03 D0                     ADD EDX,EAX
006490A3  8D 3C 55 0B 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f510b]
006490AA  F3 A5                     MOVSD.REP ES:EDI,ESI
006490AC  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
006490B1  B9 05 00 00 00            MOV ECX,0x5
006490B6  8D B0 18 04 00 00         LEA ESI,[EAX + 0x418]
006490BC  33 C0                     XOR EAX,EAX
006490BE  A0 4D 87 80 00            MOV AL,[0x0080874d]
006490C3  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006490C6  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006490C9  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006490CC  C1 E2 04                  SHL EDX,0x4
006490CF  03 D0                     ADD EDX,EAX
006490D1  8D 3C 55 1F 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f511f]
006490D8  F3 A5                     MOVSD.REP ES:EDI,ESI
006490DA  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
006490DF  B9 9B 00 00 00            MOV ECX,0x9b
006490E4  8D B0 2C 04 00 00         LEA ESI,[EAX + 0x42c]
006490EA  33 C0                     XOR EAX,EAX
006490EC  A0 4D 87 80 00            MOV AL,[0x0080874d]
006490F1  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006490F4  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
006490F7  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006490FA  C1 E2 04                  SHL EDX,0x4
006490FD  03 D0                     ADD EDX,EAX
006490FF  8D 3C 55 47 51 7F 00      LEA EDI,[EDX*0x2 + 0x7f5147]
00649106  F3 A5                     MOVSD.REP ES:EDI,ESI
00649108  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
0064910D  B9 6A 00 00 00            MOV ECX,0x6a
00649112  8D B0 98 06 00 00         LEA ESI,[EAX + 0x698]
00649118  33 C0                     XOR EAX,EAX
0064911A  A0 4D 87 80 00            MOV AL,[0x0080874d]
0064911F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00649122  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00649125  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00649128  C1 E2 04                  SHL EDX,0x4
0064912B  03 D0                     ADD EDX,EAX
0064912D  8D 3C 55 B3 53 7F 00      LEA EDI,[EDX*0x2 + 0x7f53b3]
00649134  F3 A5                     MOVSD.REP ES:EDI,ESI
00649136  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
0064913B  B9 26 00 00 00            MOV ECX,0x26
00649140  8D B0 40 08 00 00         LEA ESI,[EAX + 0x840]
00649146  33 C0                     XOR EAX,EAX
00649148  A0 4D 87 80 00            MOV AL,[0x0080874d]
0064914D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00649150  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00649153  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00649156  C1 E2 04                  SHL EDX,0x4
00649159  03 D0                     ADD EDX,EAX
0064915B  8D 3C 55 5B 55 7F 00      LEA EDI,[EDX*0x2 + 0x7f555b]
00649162  F3 A5                     MOVSD.REP ES:EDI,ESI
00649164  66 A5                     MOVSW ES:EDI,ESI
00649166  A4                        MOVSB ES:EDI,ESI
00649167  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
0064916C  85 C0                     TEST EAX,EAX
0064916E  74 23                     JZ 0x00649193
00649170  68 12 ED 80 00            PUSH 0x80ed12
00649175  E8 E6 1E 06 00            CALL 0x006ab060
0064917A  A1 54 67 80 00            MOV EAX,[0x00806754]
0064917F  33 FF                     XOR EDI,EDI
00649181  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00649184  EB 2D                     JMP 0x006491b3
LAB_00649186:
00649186  39 3D 2A C5 80 00         CMP dword ptr [0x0080c52a],EDI
0064918C  76 05                     JBE 0x00649193
0064918E  E8 01 86 DB FF            CALL 0x00401794
switchD_00649067::caseD_2:
00649193  A1 54 67 80 00            MOV EAX,[0x00806754]
00649198  33 FF                     XOR EDI,EDI
0064919A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064919D  EB 14                     JMP 0x006491b3
switchD_00649067::caseD_1:
0064919F  8B 0D 5C 67 80 00         MOV ECX,dword ptr [0x0080675c]
006491A5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006491A8  EB 09                     JMP 0x006491b3
LAB_006491aa:
006491AA  8B 15 54 67 80 00         MOV EDX,dword ptr [0x00806754]
006491B0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
switchD_00649067::caseD_9:
006491B3  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006491B6  3B DF                     CMP EBX,EDI
006491B8  0F 84 59 01 00 00         JZ 0x00649317
006491BE  68 60 99 80 00            PUSH 0x809960
006491C3  53                        PUSH EBX
006491C4  E8 62 AD DB FF            CALL 0x00403f2b
006491C9  83 C4 08                  ADD ESP,0x8
006491CC  33 F6                     XOR ESI,ESI
006491CE  BF C7 87 80 00            MOV EDI,0x8087c7
006491D3  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006491D6  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006491D9  EB 03                     JMP 0x006491de
LAB_006491db:
006491DB  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006491de:
006491DE  80 7F 22 FF               CMP byte ptr [EDI + 0x22],0xff
006491E2  0F 84 19 01 00 00         JZ 0x00649301
006491E8  8A 47 21                  MOV AL,byte ptr [EDI + 0x21]
006491EB  84 C0                     TEST AL,AL
006491ED  0F 84 0E 01 00 00         JZ 0x00649301
006491F3  80 3F 01                  CMP byte ptr [EDI],0x1
006491F6  74 0D                     JZ 0x00649205
006491F8  A1 9C 87 80 00            MOV EAX,[0x0080879c]
006491FD  85 C0                     TEST EAX,EAX
006491FF  0F 84 FC 00 00 00         JZ 0x00649301
LAB_00649205:
00649205  A1 9C 87 80 00            MOV EAX,[0x0080879c]
0064920A  85 C0                     TEST EAX,EAX
0064920C  75 3D                     JNZ 0x0064924b
0064920E  A1 A0 87 80 00            MOV EAX,[0x008087a0]
00649213  25 FF 00 00 00            AND EAX,0xff
00649218  48                        DEC EAX
00649219  83 F8 12                  CMP EAX,0x12
0064921C  77 42                     JA 0x00649260
0064921E  33 C9                     XOR ECX,ECX
00649220  8A 88 A8 93 64 00         MOV CL,byte ptr [EAX + 0x6493a8]
switchD_00649226::switchD:
00649226  FF 24 8D 9C 93 64 00      JMP dword ptr [ECX*0x4 + 0x64939c]
switchD_00649226::caseD_3:
0064922D  8B 15 68 D6 79 00         MOV EDX,dword ptr [0x0079d668]
00649233  6A 00                     PUSH 0x0
00649235  6A 03                     PUSH 0x3
00649237  56                        PUSH ESI
00649238  6A 01                     PUSH 0x1
0064923A  52                        PUSH EDX
0064923B  E8 C0 99 0A 00            CALL 0x006f2c00
00649240  83 C4 0C                  ADD ESP,0xc
00649243  50                        PUSH EAX
00649244  EB 0F                     JMP 0x00649255
switchD_00649226::caseD_1:
00649246  8D 47 01                  LEA EAX,[EDI + 0x1]
00649249  EB 12                     JMP 0x0064925d
LAB_0064924b:
0064924B  8B 0D 60 D6 79 00         MOV ECX,dword ptr [0x0079d660]
00649251  56                        PUSH ESI
00649252  6A 02                     PUSH 0x2
00649254  51                        PUSH ECX
LAB_00649255:
00649255  E8 A6 99 0A 00            CALL 0x006f2c00
0064925A  83 C4 0C                  ADD ESP,0xc
LAB_0064925d:
0064925D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
switchD_00649226::caseD_9:
00649260  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00649263  85 C0                     TEST EAX,EAX
00649265  0F 84 96 00 00 00         JZ 0x00649301
0064926B  6A 00                     PUSH 0x0
0064926D  6A 00                     PUSH 0x0
0064926F  50                        PUSH EAX
00649270  53                        PUSH EBX
00649271  E8 37 80 DB FF            CALL 0x004012ad
00649276  8B D8                     MOV EBX,EAX
00649278  83 C4 10                  ADD ESP,0x10
0064927B  85 DB                     TEST EBX,EBX
0064927D  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00649280  74 7F                     JZ 0x00649301
00649282  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00649287  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0064928E  84 C0                     TEST AL,AL
00649290  76 5C                     JBE 0x006492ee
00649292  BA F6 8A 80 00            MOV EDX,0x808af6
LAB_00649297:
00649297  8A 42 FE                  MOV AL,byte ptr [EDX + -0x2]
0064929A  8A 4F 22                  MOV CL,byte ptr [EDI + 0x22]
0064929D  3A C1                     CMP AL,CL
0064929F  75 2C                     JNZ 0x006492cd
006492A1  80 3A 00                  CMP byte ptr [EDX],0x0
006492A4  75 27                     JNZ 0x006492cd
006492A6  8D 7B 1B                  LEA EDI,[EBX + 0x1b]
006492A9  83 C9 FF                  OR ECX,0xffffffff
006492AC  33 C0                     XOR EAX,EAX
006492AE  8D 72 BA                  LEA ESI,[EDX + -0x46]
006492B1  F2 AE                     SCASB.REPNE ES:EDI
006492B3  F7 D1                     NOT ECX
006492B5  2B F9                     SUB EDI,ECX
006492B7  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006492BA  8B C1                     MOV EAX,ECX
006492BC  8B F7                     MOV ESI,EDI
006492BE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006492C1  C1 E9 02                  SHR ECX,0x2
006492C4  F3 A5                     MOVSD.REP ES:EDI,ESI
006492C6  8B C8                     MOV ECX,EAX
006492C8  83 E1 03                  AND ECX,0x3
006492CB  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006492cd:
006492CD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006492D0  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006492D3  46                        INC ESI
006492D4  33 C9                     XOR ECX,ECX
006492D6  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
006492DC  8B C6                     MOV EAX,ESI
006492DE  81 C2 9C 00 00 00         ADD EDX,0x9c
006492E4  3B C1                     CMP EAX,ECX
006492E6  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006492E9  7C AC                     JL 0x00649297
006492EB  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_006492ee:
006492EE  56                        PUSH ESI
006492EF  53                        PUSH EBX
006492F0  E8 B2 85 DB FF            CALL 0x004018a7
006492F5  83 C4 08                  ADD ESP,0x8
006492F8  8D 55 FC                  LEA EDX,[EBP + -0x4]
006492FB  52                        PUSH EDX
006492FC  E8 5F 1D 06 00            CALL 0x006ab060
LAB_00649301:
00649301  83 C7 51                  ADD EDI,0x51
00649304  46                        INC ESI
00649305  81 FF 4F 8A 80 00         CMP EDI,0x808a4f
0064930B  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0064930E  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00649311  0F 8C C4 FE FF FF         JL 0x006491db
LAB_00649317:
00649317  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0064931A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064931F  5F                        POP EDI
00649320  5E                        POP ESI
00649321  5B                        POP EBX
00649322  8B E5                     MOV ESP,EBP
00649324  5D                        POP EBP
00649325  C3                        RET
LAB_00649326:
00649326  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00649329  68 C4 28 7D 00            PUSH 0x7d28c4
0064932E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00649333  56                        PUSH ESI
00649334  57                        PUSH EDI
00649335  68 0A 01 00 00            PUSH 0x10a
0064933A  68 80 28 7D 00            PUSH 0x7d2880
0064933F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00649345  E8 86 41 06 00            CALL 0x006ad4d0
0064934A  83 C4 18                  ADD ESP,0x18
0064934D  85 C0                     TEST EAX,EAX
0064934F  74 01                     JZ 0x00649352
00649351  CC                        INT3
LAB_00649352:
00649352  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
00649355  74 09                     JZ 0x00649360
00649357  8D 55 FC                  LEA EDX,[EBP + -0x4]
0064935A  52                        PUSH EDX
0064935B  E8 00 1D 06 00            CALL 0x006ab060
LAB_00649360:
00649360  68 0C 01 00 00            PUSH 0x10c
00649365  68 80 28 7D 00            PUSH 0x7d2880
0064936A  57                        PUSH EDI
0064936B  56                        PUSH ESI
0064936C  E8 CF CA 05 00            CALL 0x006a5e40
00649371  5F                        POP EDI
00649372  5E                        POP ESI
00649373  5B                        POP EBX
00649374  8B E5                     MOV ESP,EBP
00649376  5D                        POP EBP
00649377  C3                        RET
