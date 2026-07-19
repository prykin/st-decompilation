FUN_00673d20:
00673D20  55                        PUSH EBP
00673D21  8B EC                     MOV EBP,ESP
00673D23  83 EC 20                  SUB ESP,0x20
00673D26  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00673D2B  83 F8 1D                  CMP EAX,0x1d
00673D2E  A3 54 19 81 00            MOV [0x00811954],EAX
00673D33  74 0A                     JZ 0x00673d3f
00673D35  C7 05 50 75 85 00 00 00 00 00  MOV dword ptr [0x00857550],0x0
LAB_00673d3f:
00673D3F  A1 20 2D 7D 00            MOV EAX,[0x007d2d20]
00673D44  53                        PUSH EBX
00673D45  56                        PUSH ESI
00673D46  83 F8 FF                  CMP EAX,-0x1
00673D49  57                        PUSH EDI
00673D4A  74 16                     JZ 0x00673d62
00673D4C  5F                        POP EDI
00673D4D  5E                        POP ESI
00673D4E  A3 18 2D 7D 00            MOV [0x007d2d18],EAX
00673D53  C7 05 20 2D 7D 00 FF FF FF FF  MOV dword ptr [0x007d2d20],0xffffffff
00673D5D  5B                        POP EBX
00673D5E  8B E5                     MOV ESP,EBP
00673D60  5D                        POP EBP
00673D61  C3                        RET
LAB_00673d62:
00673D62  6A 00                     PUSH 0x0
00673D64  E8 A7 F4 FF FF            CALL 0x00673210
00673D69  85 C0                     TEST EAX,EAX
00673D6B  0F 8C E8 07 00 00         JL 0x00674559
LAB_00673d71:
00673D71  A1 14 19 81 00            MOV EAX,[0x00811914]
00673D76  8B 3D 24 2D 7D 00         MOV EDI,dword ptr [0x007d2d24]
00673D7C  8B 0D 24 19 81 00         MOV ECX,dword ptr [0x00811924]
00673D82  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
00673D88  8B F0                     MOV ESI,EAX
00673D8A  83 E7 08                  AND EDI,0x8
00673D8D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00673D94  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
00673D9B  89 35 0C 19 81 00         MOV dword ptr [0x0081190c],ESI
00673DA1  A3 44 75 85 00            MOV [0x00857544],EAX
00673DA6  0F 84 BA 00 00 00         JZ 0x00673e66
00673DAC  83 3D 54 19 81 00 11      CMP dword ptr [0x00811954],0x11
00673DB3  75 08                     JNZ 0x00673dbd
00673DB5  85 C0                     TEST EAX,EAX
00673DB7  0F 84 A7 06 00 00         JZ 0x00674464
LAB_00673dbd:
00673DBD  0F BE 1C 02               MOVSX EBX,byte ptr [EDX + EAX*0x1]
00673DC1  F6 44 99 01 01            TEST byte ptr [ECX + EBX*0x4 + 0x1],0x1
00673DC6  75 19                     JNZ 0x00673de1
LAB_00673dc8:
00673DC8  3B 05 58 75 85 00         CMP EAX,dword ptr [0x00857558]
00673DCE  7D 11                     JGE 0x00673de1
00673DD0  40                        INC EAX
00673DD1  A3 14 19 81 00            MOV [0x00811914],EAX
00673DD6  0F BE 1C 02               MOVSX EBX,byte ptr [EDX + EAX*0x1]
00673DDA  F6 44 99 01 01            TEST byte ptr [ECX + EBX*0x4 + 0x1],0x1
00673DDF  74 E7                     JZ 0x00673dc8
LAB_00673de1:
00673DE1  8B 0D 54 19 81 00         MOV ECX,dword ptr [0x00811954]
00673DE7  83 C1 F9                  ADD ECX,-0x7
00673DEA  83 F9 16                  CMP ECX,0x16
00673DED  77 55                     JA 0x00673e44
00673DEF  33 DB                     XOR EBX,EBX
00673DF1  8A 99 74 45 67 00         MOV BL,byte ptr [ECX + 0x674574]
switchD_00673df7::switchD:
00673DF7  FF 24 9D 60 45 67 00      JMP dword ptr [EBX*0x4 + 0x674560]
switchD_00673df7::caseD_7:
00673DFE  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
00673E04  C7 05 18 2D 7D 00 11 00 00 00  MOV dword ptr [0x007d2d18],0x11
00673E0E  3B C1                     CMP EAX,ECX
00673E10  0F 84 24 06 00 00         JZ 0x0067443a
00673E16  EB 38                     JMP 0x00673e50
switchD_00673df7::caseD_11:
00673E18  3B C6                     CMP EAX,ESI
00673E1A  C7 05 18 2D 7D 00 11 00 00 00  MOV dword ptr [0x007d2d18],0x11
00673E24  0F 8F 8B 06 00 00         JG 0x006744b5
00673E2A  EB 51                     JMP 0x00673e7d
switchD_00673df7::caseD_1d:
00673E2C  3B 05 58 75 85 00         CMP EAX,dword ptr [0x00857558]
00673E32  0F 84 0A 06 00 00         JZ 0x00674442
00673E38  C7 05 18 2D 7D 00 11 00 00 00  MOV dword ptr [0x007d2d18],0x11
00673E42  EB 0C                     JMP 0x00673e50
switchD_00673df7::caseD_8:
00673E44  3B 05 58 75 85 00         CMP EAX,dword ptr [0x00857558]
00673E4A  0F 84 04 06 00 00         JZ 0x00674454
LAB_00673e50:
00673E50  3B C6                     CMP EAX,ESI
00673E52  7E 12                     JLE 0x00673e66
00673E54  F6 05 24 2D 7D 00 04      TEST byte ptr [0x007d2d24],0x4
00673E5B  75 09                     JNZ 0x00673e66
00673E5D  8D 70 FF                  LEA ESI,[EAX + -0x1]
00673E60  89 35 0C 19 81 00         MOV dword ptr [0x0081190c],ESI
LAB_00673e66:
00673E66  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00673E6C  81 F9 4E 08 00 00         CMP ECX,0x84e
00673E72  74 09                     JZ 0x00673e7d
00673E74  83 F9 11                  CMP ECX,0x11
00673E77  0F 85 79 05 00 00         JNZ 0x006743f6
LAB_00673e7d:
00673E7D  8D 46 01                  LEA EAX,[ESI + 0x1]
00673E80  A3 14 19 81 00            MOV [0x00811914],EAX
00673E85  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
00673E88  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00673E8B  8B 15 24 19 81 00         MOV EDX,dword ptr [0x00811924]
00673E91  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00673E94  81 E1 FF 00 00 00         AND ECX,0xff
00673E9A  85 FF                     TEST EDI,EDI
00673E9C  8B 1C 8A                  MOV EBX,dword ptr [EDX + ECX*0x4]
00673E9F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00673EA2  0F 85 FF 02 00 00         JNZ 0x006741a7
00673EA8  8B D3                     MOV EDX,EBX
00673EAA  83 E2 12                  AND EDX,0x12
00673EAD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00673EB0  75 16                     JNZ 0x00673ec8
00673EB2  85 F6                     TEST ESI,ESI
00673EB4  0F 85 B7 00 00 00         JNZ 0x00673f71
00673EBA  8B 15 30 19 81 00         MOV EDX,dword ptr [0x00811930]
00673EC0  85 D2                     TEST EDX,EDX
00673EC2  0F 84 A9 00 00 00         JZ 0x00673f71
LAB_00673ec8:
00673EC8  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
00673ECE  8B 15 24 19 81 00         MOV EDX,dword ptr [0x00811924]
00673ED4  0F BE 1C 07               MOVSX EBX,byte ptr [EDI + EAX*0x1]
00673ED8  F6 04 9A 04               TEST byte ptr [EDX + EBX*0x4],0x4
00673EDC  74 10                     JZ 0x00673eee
LAB_00673ede:
00673EDE  40                        INC EAX
00673EDF  A3 14 19 81 00            MOV [0x00811914],EAX
00673EE4  0F BE 1C 07               MOVSX EBX,byte ptr [EDI + EAX*0x1]
00673EE8  F6 04 9A 04               TEST byte ptr [EDX + EBX*0x4],0x4
00673EEC  75 F0                     JNZ 0x00673ede
LAB_00673eee:
00673EEE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00673EF1  F6 C3 10                  TEST BL,0x10
00673EF4  74 18                     JZ 0x00673f0e
00673EF6  0F BE 14 07               MOVSX EDX,byte ptr [EDI + EAX*0x1]
00673EFA  3B D1                     CMP EDX,ECX
00673EFC  75 10                     JNZ 0x00673f0e
00673EFE  40                        INC EAX
00673EFF  C7 05 18 2D 7D 00 22 00 00 00  MOV dword ptr [0x007d2d18],0x22
00673F09  A3 14 19 81 00            MOV [0x00811914],EAX
LAB_00673f0e:
00673F0E  85 F6                     TEST ESI,ESI
00673F10  75 27                     JNZ 0x00673f39
00673F12  8B 0D 30 19 81 00         MOV ECX,dword ptr [0x00811930]
00673F18  85 C9                     TEST ECX,ECX
00673F1A  74 1D                     JZ 0x00673f39
00673F1C  A1 20 19 81 00            MOV EAX,[0x00811920]
00673F21  50                        PUSH EAX
00673F22  51                        PUSH ECX
00673F23  E8 B8 08 00 00            CALL 0x006747e0
00673F28  8B 35 0C 19 81 00         MOV ESI,dword ptr [0x0081190c]
00673F2E  A1 14 19 81 00            MOV EAX,[0x00811914]
00673F33  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
LAB_00673f39:
00673F39  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
00673F3F  81 F9 4E 08 00 00         CMP ECX,0x84e
00673F45  74 05                     JZ 0x00673f4c
00673F47  83 F9 22                  CMP ECX,0x22
00673F4A  75 2B                     JNZ 0x00673f77
LAB_00673f4c:
00673F4C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00673F4F  85 C9                     TEST ECX,ECX
00673F51  74 24                     JZ 0x00673f77
00673F53  8B 0D 18 19 81 00         MOV ECX,dword ptr [0x00811918]
00673F59  8B 15 28 19 81 00         MOV EDX,dword ptr [0x00811928]
00673F5F  51                        PUSH ECX
00673F60  52                        PUSH EDX
00673F61  E8 7A 08 00 00            CALL 0x006747e0
00673F66  8B 35 0C 19 81 00         MOV ESI,dword ptr [0x0081190c]
00673F6C  A1 14 19 81 00            MOV EAX,[0x00811914]
LAB_00673f71:
00673F71  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
LAB_00673f77:
00673F77  81 3D 18 2D 7D 00 4E 08 00 00  CMP dword ptr [0x007d2d18],0x84e
00673F81  0F 85 2C 02 00 00         JNZ 0x006741b3
00673F87  F6 C3 02                  TEST BL,0x2
00673F8A  74 31                     JZ 0x00673fbd
00673F8C  F6 C7 01                  TEST BH,0x1
00673F8F  74 1D                     JZ 0x00673fae
00673F91  8B C8                     MOV ECX,EAX
00673F93  2B CE                     SUB ECX,ESI
00673F95  83 F9 01                  CMP ECX,0x1
00673F98  7E 23                     JLE 0x00673fbd
00673F9A  0F BE 54 37 01            MOVSX EDX,byte ptr [EDI + ESI*0x1 + 0x1]
00673F9F  8B 0D 24 19 81 00         MOV ECX,dword ptr [0x00811924]
00673FA5  F7 04 91 00 01 00 00      TEST dword ptr [ECX + EDX*0x4],0x100
00673FAC  75 0F                     JNZ 0x00673fbd
LAB_00673fae:
00673FAE  C7 05 18 2D 7D 00 22 00 00 00  MOV dword ptr [0x007d2d18],0x22
00673FB8  E9 39 04 00 00            JMP 0x006743f6
LAB_00673fbd:
00673FBD  8D 56 01                  LEA EDX,[ESI + 0x1]
00673FC0  F6 C3 20                  TEST BL,0x20
00673FC3  89 15 14 19 81 00         MOV dword ptr [0x00811914],EDX
00673FC9  0F 85 A1 04 00 00         JNZ 0x00674470
00673FCF  8B C3                     MOV EAX,EBX
00673FD1  25 00 10 00 00            AND EAX,0x1000
00673FD6  75 09                     JNZ 0x00673fe1
00673FD8  F6 C7 28                  TEST BH,0x28
00673FDB  0F 84 DF 01 00 00         JZ 0x006741c0
LAB_00673fe1:
00673FE1  85 C0                     TEST EAX,EAX
00673FE3  74 0C                     JZ 0x00673ff1
00673FE5  C7 05 18 2D 7D 00 3C 00 00 00  MOV dword ptr [0x007d2d18],0x3c
00673FEF  EB 16                     JMP 0x00674007
LAB_00673ff1:
00673FF1  81 E3 00 08 00 00         AND EBX,0x800
00673FF7  F7 DB                     NEG EBX
00673FF9  1B DB                     SBB EBX,EBX
00673FFB  83 E3 EC                  AND EBX,0xffffffec
00673FFE  83 C3 22                  ADD EBX,0x22
00674001  89 1D 18 2D 7D 00         MOV dword ptr [0x007d2d18],EBX
LAB_00674007:
00674007  A1 48 19 81 00            MOV EAX,[0x00811948]
0067400C  8A 5D F4                  MOV BL,byte ptr [EBP + -0xc]
0067400F  88 5D E4                  MOV byte ptr [EBP + -0x1c],BL
00674012  33 F6                     XOR ESI,ESI
00674014  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_00674017:
00674017  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
0067401D  A1 14 19 81 00            MOV EAX,[0x00811914]
00674022  8A 0C 02                  MOV CL,byte ptr [EDX + EAX*0x1]
00674025  3A CB                     CMP CL,BL
00674027  74 2F                     JZ 0x00674058
LAB_00674029:
00674029  80 F9 5C                  CMP CL,0x5c
0067402C  74 2A                     JZ 0x00674058
0067402E  3B 05 58 75 85 00         CMP EAX,dword ptr [0x00857558]
00674034  7F 32                     JG 0x00674068
00674036  8B 15 48 19 81 00         MOV EDX,dword ptr [0x00811948]
0067403C  40                        INC EAX
0067403D  A3 14 19 81 00            MOV [0x00811914],EAX
00674042  88 0C 32                  MOV byte ptr [EDX + ESI*0x1],CL
00674045  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
0067404B  A1 14 19 81 00            MOV EAX,[0x00811914]
00674050  46                        INC ESI
00674051  8A 0C 02                  MOV CL,byte ptr [EDX + EAX*0x1]
00674054  3A CB                     CMP CL,BL
00674056  75 D1                     JNZ 0x00674029
LAB_00674058:
00674058  3B 05 58 75 85 00         CMP EAX,dword ptr [0x00857558]
0067405E  7D 08                     JGE 0x00674068
00674060  40                        INC EAX
00674061  A3 14 19 81 00            MOV [0x00811914],EAX
00674066  EB 07                     JMP 0x0067406f
LAB_00674068:
00674068  C7 45 F0 2E FF FF FF      MOV dword ptr [EBP + -0x10],0xffffff2e
LAB_0067406f:
0067406F  80 F9 5C                  CMP CL,0x5c
00674072  0F 85 96 00 00 00         JNZ 0x0067410e
00674078  0F BE 14 02               MOVSX EDX,byte ptr [EDX + EAX*0x1]
0067407C  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0067407F  81 E7 FF 00 00 00         AND EDI,0xff
00674085  3B D7                     CMP EDX,EDI
00674087  75 15                     JNZ 0x0067409e
00674089  40                        INC EAX
0067408A  46                        INC ESI
0067408B  A3 14 19 81 00            MOV [0x00811914],EAX
00674090  A1 48 19 81 00            MOV EAX,[0x00811948]
00674095  88 5C 30 FF               MOV byte ptr [EAX + ESI*0x1 + -0x1],BL
00674099  E9 79 FF FF FF            JMP 0x00674017
LAB_0067409e:
0067409E  8D 7A 9A                  LEA EDI,[EDX + -0x66]
006740A1  83 FF 0E                  CMP EDI,0xe
006740A4  77 53                     JA 0x006740f9
006740A6  33 D2                     XOR EDX,EDX
006740A8  8A 97 A0 45 67 00         MOV DL,byte ptr [EDI + 0x6745a0]
switchD_006740ae::switchD:
006740AE  FF 24 95 8C 45 67 00      JMP dword ptr [EDX*0x4 + 0x67458c]
switchD_006740ae::caseD_6e:
006740B5  40                        INC EAX
006740B6  B1 0A                     MOV CL,0xa
006740B8  A3 14 19 81 00            MOV [0x00811914],EAX
006740BD  A1 48 19 81 00            MOV EAX,[0x00811948]
006740C2  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
006740C5  46                        INC ESI
006740C6  E9 4C FF FF FF            JMP 0x00674017
switchD_006740ae::caseD_74:
006740CB  40                        INC EAX
006740CC  B1 09                     MOV CL,0x9
006740CE  A3 14 19 81 00            MOV [0x00811914],EAX
006740D3  A1 48 19 81 00            MOV EAX,[0x00811948]
006740D8  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
006740DB  46                        INC ESI
006740DC  E9 36 FF FF FF            JMP 0x00674017
switchD_006740ae::caseD_66:
006740E1  40                        INC EAX
006740E2  B1 0C                     MOV CL,0xc
006740E4  A3 14 19 81 00            MOV [0x00811914],EAX
006740E9  A1 48 19 81 00            MOV EAX,[0x00811948]
006740EE  88 0C 30                  MOV byte ptr [EAX + ESI*0x1],CL
006740F1  46                        INC ESI
006740F2  E9 20 FF FF FF            JMP 0x00674017
switchD_006740ae::caseD_72:
006740F7  B1 0D                     MOV CL,0xd
switchD_006740ae::caseD_67:
006740F9  40                        INC EAX
006740FA  46                        INC ESI
006740FB  A3 14 19 81 00            MOV [0x00811914],EAX
00674100  A1 48 19 81 00            MOV EAX,[0x00811948]
00674105  88 4C 30 FF               MOV byte ptr [EAX + ESI*0x1 + -0x1],CL
00674109  E9 09 FF FF FF            JMP 0x00674017
LAB_0067410e:
0067410E  8A 4C 02 FF               MOV CL,byte ptr [EDX + EAX*0x1 + -0x1]
00674112  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
00674115  3A CB                     CMP CL,BL
00674117  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
0067411D  0F 85 5E 01 00 00         JNZ 0x00674281
00674123  83 F9 3C                  CMP ECX,0x3c
00674126  74 09                     JZ 0x00674131
00674128  83 F9 22                  CMP ECX,0x22
0067412B  0F 85 50 01 00 00         JNZ 0x00674281
LAB_00674131:
00674131  8B 0D 48 19 81 00         MOV ECX,dword ptr [0x00811948]
00674137  C6 04 31 00               MOV byte ptr [ECX + ESI*0x1],0x0
0067413B  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
00674140  8B 3D 48 19 81 00         MOV EDI,dword ptr [0x00811948]
00674146  83 F8 22                  CMP EAX,0x22
00674149  89 3D 48 75 85 00         MOV dword ptr [0x00857548],EDI
0067414F  75 48                     JNZ 0x00674199
00674151  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
00674156  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0067415D  F6 C4 01                  TEST AH,0x1
00674160  0F 84 09 01 00 00         JZ 0x0067426f
00674166  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
0067416C  85 D2                     TEST EDX,EDX
0067416E  0F 84 7D 02 00 00         JZ 0x006743f1
00674174  85 FF                     TEST EDI,EDI
00674176  0F 84 75 02 00 00         JZ 0x006743f1
0067417C  83 C9 FF                  OR ECX,0xffffffff
0067417F  33 C0                     XOR EAX,EAX
00674181  F2 AE                     SCASB.REPNE ES:EDI
00674183  F7 D1                     NOT ECX
00674185  2B F9                     SUB EDI,ECX
00674187  8B C1                     MOV EAX,ECX
00674189  8B F7                     MOV ESI,EDI
0067418B  8B FA                     MOV EDI,EDX
0067418D  C1 E9 02                  SHR ECX,0x2
00674190  F3 A5                     MOVSD.REP ES:EDI,ESI
00674192  8B C8                     MOV ECX,EAX
00674194  83 E1 03                  AND ECX,0x3
00674197  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00674199:
00674199  8B 35 0C 19 81 00         MOV ESI,dword ptr [0x0081190c]
0067419F  A1 14 19 81 00            MOV EAX,[0x00811914]
LAB_006741a4:
006741A4  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006741a7:
006741A7  81 3D 18 2D 7D 00 4E 08 00 00  CMP dword ptr [0x007d2d18],0x84e
006741B1  74 0D                     JZ 0x006741c0
LAB_006741b3:
006741B3  83 3D 18 2D 7D 00 11      CMP dword ptr [0x007d2d18],0x11
006741BA  0F 85 36 02 00 00         JNZ 0x006743f6
LAB_006741c0:
006741C0  8D 46 01                  LEA EAX,[ESI + 0x1]
006741C3  F6 C7 01                  TEST BH,0x1
006741C6  A3 14 19 81 00            MOV [0x00811914],EAX
006741CB  0F 84 63 01 00 00         JZ 0x00674334
006741D1  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
006741D7  8B 15 24 19 81 00         MOV EDX,dword ptr [0x00811924]
006741DD  8A 0C 07                  MOV CL,byte ptr [EDI + EAX*0x1]
006741E0  88 4D E0                  MOV byte ptr [EBP + -0x20],CL
006741E3  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
006741E6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006741E9  81 E1 FF 00 00 00         AND ECX,0xff
006741EF  8B 34 8A                  MOV ESI,dword ptr [EDX + ECX*0x4]
006741F2  F7 C6 00 01 00 00         TEST ESI,0x100
006741F8  0F 84 E3 00 00 00         JZ 0x006742e1
006741FE  0B F3                     OR ESI,EBX
00674200  F7 C6 00 02 00 00         TEST ESI,0x200
00674206  0F 85 D5 00 00 00         JNZ 0x006742e1
0067420C  8B 15 3C 19 81 00         MOV EDX,dword ptr [0x0081193c]
00674212  85 D2                     TEST EDX,EDX
00674214  75 0E                     JNZ 0x00674224
00674216  8B 35 38 19 81 00         MOV ESI,dword ptr [0x00811938]
0067421C  85 F6                     TEST ESI,ESI
0067421E  0F 84 BD 00 00 00         JZ 0x006742e1
LAB_00674224:
00674224  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00674227  C1 E1 08                  SHL ECX,0x8
0067422A  81 E6 FF 00 00 00         AND ESI,0xff
00674230  0B CE                     OR ECX,ESI
00674232  85 D2                     TEST EDX,EDX
00674234  8B F1                     MOV ESI,ECX
00674236  0F 84 87 00 00 00         JZ 0x006742c3
0067423C  8A 4C 07 01               MOV CL,byte ptr [EDI + EAX*0x1 + 0x1]
00674240  8B 1D 24 19 81 00         MOV EBX,dword ptr [0x00811924]
00674246  0F BE F9                  MOVSX EDI,CL
00674249  F6 44 BB 01 01            TEST byte ptr [EBX + EDI*0x4 + 0x1],0x1
0067424E  74 6D                     JZ 0x006742bd
00674250  80 3A 00                  CMP byte ptr [EDX],0x0
00674253  74 68                     JZ 0x006742bd
LAB_00674255:
00674255  33 FF                     XOR EDI,EDI
00674257  66 8B 3A                  MOV DI,word ptr [EDX]
0067425A  3B FE                     CMP EDI,ESI
0067425C  75 05                     JNZ 0x00674263
0067425E  38 4A 02                  CMP byte ptr [EDX + 0x2],CL
00674261  74 38                     JZ 0x0067429b
LAB_00674263:
00674263  8A 5A 08                  MOV BL,byte ptr [EDX + 0x8]
00674266  83 C2 08                  ADD EDX,0x8
00674269  84 DB                     TEST BL,BL
0067426B  75 E8                     JNZ 0x00674255
0067426D  EB 4E                     JMP 0x006742bd
LAB_0067426f:
0067426F  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00674275  57                        PUSH EDI
00674276  51                        PUSH ECX
00674277  E8 64 35 04 00            CALL 0x006b77e0
0067427C  E9 18 FF FF FF            JMP 0x00674199
LAB_00674281:
00674281  8B 15 48 19 81 00         MOV EDX,dword ptr [0x00811948]
00674287  8B 35 0C 19 81 00         MOV ESI,dword ptr [0x0081190c]
0067428D  0F BE 0A                  MOVSX ECX,byte ptr [EDX]
00674290  89 0D 48 75 85 00         MOV dword ptr [0x00857548],ECX
00674296  E9 09 FF FF FF            JMP 0x006741a4
LAB_0067429b:
0067429B  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
006742A1  83 C0 02                  ADD EAX,0x2
006742A4  83 F9 11                  CMP ECX,0x11
006742A7  A3 14 19 81 00            MOV [0x00811914],EAX
006742AC  0F 84 AE 00 00 00         JZ 0x00674360
006742B2  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006742B5  89 0D 18 2D 7D 00         MOV dword ptr [0x007d2d18],ECX
006742BB  EB 77                     JMP 0x00674334
LAB_006742bd:
006742BD  8B 3D 5C 75 85 00         MOV EDI,dword ptr [0x0085755c]
LAB_006742c3:
006742C3  8B 15 38 19 81 00         MOV EDX,dword ptr [0x00811938]
006742C9  80 3A 00                  CMP byte ptr [EDX],0x0
006742CC  74 13                     JZ 0x006742e1
LAB_006742ce:
006742CE  33 C9                     XOR ECX,ECX
006742D0  66 8B 0A                  MOV CX,word ptr [EDX]
006742D3  3B CE                     CMP ECX,ESI
006742D5  74 7A                     JZ 0x00674351
006742D7  8A 4A 08                  MOV CL,byte ptr [EDX + 0x8]
006742DA  83 C2 08                  ADD EDX,0x8
006742DD  84 C9                     TEST CL,CL
006742DF  75 ED                     JNZ 0x006742ce
LAB_006742e1:
006742E1  8B 15 34 19 81 00         MOV EDX,dword ptr [0x00811934]
006742E7  85 D2                     TEST EDX,EDX
006742E9  74 20                     JZ 0x0067430b
006742EB  8A 0A                     MOV CL,byte ptr [EDX]
006742ED  84 C9                     TEST CL,CL
006742EF  74 1A                     JZ 0x0067430b
006742F1  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006742F4  81 E6 FF 00 00 00         AND ESI,0xff
LAB_006742fa:
006742FA  0F BE C9                  MOVSX ECX,CL
006742FD  3B CE                     CMP ECX,ESI
006742FF  74 56                     JZ 0x00674357
00674301  8A 4A 08                  MOV CL,byte ptr [EDX + 0x8]
00674304  83 C2 08                  ADD EDX,0x8
00674307  84 C9                     TEST CL,CL
00674309  75 EF                     JNZ 0x006742fa
LAB_0067430b:
0067430B  0F BE 4D FF               MOVSX ECX,byte ptr [EBP + -0x1]
0067430F  8B 15 24 19 81 00         MOV EDX,dword ptr [0x00811924]
00674315  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
00674318  F6 C5 01                  TEST CH,0x1
0067431B  74 17                     JZ 0x00674334
LAB_0067431d:
0067431D  F6 C5 02                  TEST CH,0x2
00674320  75 12                     JNZ 0x00674334
00674322  40                        INC EAX
00674323  A3 14 19 81 00            MOV [0x00811914],EAX
00674328  0F BE 0C 07               MOVSX ECX,byte ptr [EDI + EAX*0x1]
0067432C  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
0067432F  F6 C5 01                  TEST CH,0x1
00674332  75 E9                     JNZ 0x0067431d
LAB_00674334:
00674334  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
0067433A  83 F9 11                  CMP ECX,0x11
0067433D  75 40                     JNZ 0x0067437f
LAB_0067433f:
0067433F  F6 05 24 2D 7D 00 04      TEST byte ptr [0x007d2d24],0x4
00674346  0F 85 58 01 00 00         JNZ 0x006744a4
0067434C  E9 A5 00 00 00            JMP 0x006743f6
LAB_00674351:
00674351  40                        INC EAX
00674352  A3 14 19 81 00            MOV [0x00811914],EAX
LAB_00674357:
00674357  83 3D 18 2D 7D 00 11      CMP dword ptr [0x007d2d18],0x11
0067435E  75 14                     JNZ 0x00674374
LAB_00674360:
00674360  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
00674363  B9 1B 00 00 00            MOV ECX,0x1b
00674368  3B F1                     CMP ESI,ECX
0067436A  75 D3                     JNZ 0x0067433f
0067436C  89 0D 18 2D 7D 00         MOV dword ptr [0x007d2d18],ECX
00674372  EB 59                     JMP 0x006743cd
LAB_00674374:
00674374  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
00674377  89 15 18 2D 7D 00         MOV dword ptr [0x007d2d18],EDX
0067437D  EB B5                     JMP 0x00674334
LAB_0067437f:
0067437F  83 F9 12                  CMP ECX,0x12
00674382  75 25                     JNZ 0x006743a9
00674384  F6 05 24 2D 7D 00 04      TEST byte ptr [0x007d2d24],0x4
0067438B  0F 85 0C 01 00 00         JNZ 0x0067449d
00674391  8B 15 58 75 85 00         MOV EDX,dword ptr [0x00857558]
00674397  C7 05 54 19 81 00 1D 00 00 00  MOV dword ptr [0x00811954],0x1d
006743A1  89 15 14 19 81 00         MOV dword ptr [0x00811914],EDX
006743A7  EB 56                     JMP 0x006743ff
LAB_006743a9:
006743A9  83 F9 07                  CMP ECX,0x7
006743AC  75 1A                     JNZ 0x006743c8
006743AE  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
006743B4  83 C9 08                  OR ECX,0x8
006743B7  F6 C1 04                  TEST CL,0x4
006743BA  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
006743C0  0F 85 DE 00 00 00         JNZ 0x006744a4
006743C6  EB 37                     JMP 0x006743ff
LAB_006743c8:
006743C8  83 F9 1B                  CMP ECX,0x1b
006743CB  75 29                     JNZ 0x006743f6
LAB_006743cd:
006743CD  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
006743D3  83 E1 F7                  AND ECX,0xfffffff7
006743D6  F6 C1 04                  TEST CL,0x4
006743D9  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
006743DF  0F 85 BF 00 00 00         JNZ 0x006744a4
006743E5  C7 05 54 19 81 00 1D 00 00 00  MOV dword ptr [0x00811954],0x1d
006743EF  EB 0E                     JMP 0x006743ff
LAB_006743f1:
006743F1  A1 14 19 81 00            MOV EAX,[0x00811914]
FUN_00673d20::cf_common_join_006743F6:
006743F6  F6 05 24 2D 7D 00 08      TEST byte ptr [0x007d2d24],0x8
006743FD  74 7E                     JZ 0x0067447d
FUN_00673d20::cf_continue_loop_006743FF:
006743FF  6A 00                     PUSH 0x0
00674401  E8 0A EE FF FF            CALL 0x00673210
00674406  85 C0                     TEST EAX,EAX
00674408  0F 8D 63 F9 FF FF         JGE 0x00673d71
0067440E  5F                        POP EDI
0067440F  5E                        POP ESI
00674410  5B                        POP EBX
00674411  8B E5                     MOV ESP,EBP
00674413  5D                        POP EBP
00674414  C3                        RET
switchD_00673df7::caseD_12:
00674415  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
0067441B  A1 58 75 85 00            MOV EAX,[0x00857558]
00674420  83 E1 F7                  AND ECX,0xfffffff7
00674423  C7 05 18 2D 7D 00 11 00 00 00  MOV dword ptr [0x007d2d18],0x11
0067442D  A3 14 19 81 00            MOV [0x00811914],EAX
00674432  89 0D 24 2D 7D 00         MOV dword ptr [0x007d2d24],ECX
00674438  EB 7B                     JMP 0x006744b5
LAB_0067443a:
0067443A  40                        INC EAX
0067443B  A3 14 19 81 00            MOV [0x00811914],EAX
00674440  EB 73                     JMP 0x006744b5
LAB_00674442:
00674442  40                        INC EAX
00674443  C7 05 18 2D 7D 00 1D 00 00 00  MOV dword ptr [0x007d2d18],0x1d
0067444D  A3 14 19 81 00            MOV [0x00811914],EAX
00674452  EB 32                     JMP 0x00674486
LAB_00674454:
00674454  40                        INC EAX
00674455  C7 05 54 19 81 00 11 00 00 00  MOV dword ptr [0x00811954],0x11
0067445F  A3 14 19 81 00            MOV [0x00811914],EAX
LAB_00674464:
00674464  C7 05 18 2D 7D 00 1D 00 00 00  MOV dword ptr [0x007d2d18],0x1d
0067446E  EB 16                     JMP 0x00674486
LAB_00674470:
00674470  E8 5B 04 00 00            CALL 0x006748d0
00674475  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00674478  A1 14 19 81 00            MOV EAX,[0x00811914]
LAB_0067447d:
0067447D  83 3D 18 2D 7D 00 1D      CMP dword ptr [0x007d2d18],0x1d
00674484  75 1E                     JNZ 0x006744a4
FUN_00673d20::cf_common_exit_00674486:
00674486  A1 28 75 85 00            MOV EAX,[0x00857528]
0067448B  C6 00 0A                  MOV byte ptr [EAX],0xa
0067448E  8B 0D 28 75 85 00         MOV ECX,dword ptr [0x00857528]
00674494  C6 41 01 00               MOV byte ptr [ECX + 0x1],0x0
00674498  E9 A3 00 00 00            JMP 0x00674540
LAB_0067449d:
0067449D  83 0D 24 2D 7D 00 08      OR dword ptr [0x007d2d24],0x8
FUN_00673d20::cf_break_loop_006744A4:
006744A4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006744A7  85 C9                     TEST ECX,ECX
006744A9  0F 84 91 00 00 00         JZ 0x00674540
006744AF  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
LAB_006744b5:
006744B5  8A 1C 02                  MOV BL,byte ptr [EDX + EAX*0x1]
006744B8  C6 04 02 00               MOV byte ptr [EDX + EAX*0x1],0x0
006744BC  A1 24 2D 7D 00            MOV EAX,[0x007d2d24]
006744C1  F6 C4 01                  TEST AH,0x1
006744C4  74 3B                     JZ 0x00674501
006744C6  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
006744CC  85 D2                     TEST EDX,EDX
006744CE  74 51                     JZ 0x00674521
006744D0  A1 5C 75 85 00            MOV EAX,[0x0085755c]
006744D5  8B 0D 0C 19 81 00         MOV ECX,dword ptr [0x0081190c]
006744DB  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
006744DE  85 FF                     TEST EDI,EDI
006744E0  74 3F                     JZ 0x00674521
006744E2  83 C9 FF                  OR ECX,0xffffffff
006744E5  33 C0                     XOR EAX,EAX
006744E7  F2 AE                     SCASB.REPNE ES:EDI
006744E9  F7 D1                     NOT ECX
006744EB  2B F9                     SUB EDI,ECX
006744ED  8B C1                     MOV EAX,ECX
006744EF  8B F7                     MOV ESI,EDI
006744F1  8B FA                     MOV EDI,EDX
006744F3  C1 E9 02                  SHR ECX,0x2
006744F6  F3 A5                     MOVSD.REP ES:EDI,ESI
006744F8  8B C8                     MOV ECX,EAX
006744FA  83 E1 03                  AND ECX,0x3
006744FD  F3 A4                     MOVSB.REP ES:EDI,ESI
006744FF  EB 1A                     JMP 0x0067451b
LAB_00674501:
00674501  8B 0D 0C 19 81 00         MOV ECX,dword ptr [0x0081190c]
00674507  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
0067450D  A1 28 75 85 00            MOV EAX,[0x00857528]
00674512  03 D1                     ADD EDX,ECX
00674514  52                        PUSH EDX
00674515  50                        PUSH EAX
00674516  E8 C5 32 04 00            CALL 0x006b77e0
LAB_0067451b:
0067451B  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
FUN_00673d20::cf_common_exit_00674521:
00674521  A1 0C 19 81 00            MOV EAX,[0x0081190c]
00674526  8B 0D 14 19 81 00         MOV ECX,dword ptr [0x00811914]
0067452C  2B D0                     SUB EDX,EAX
0067452E  C6 04 0A 00               MOV byte ptr [EDX + ECX*0x1],0x0
00674532  8B 15 14 19 81 00         MOV EDX,dword ptr [0x00811914]
00674538  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0067453D  88 1C 10                  MOV byte ptr [EAX + EDX*0x1],BL
FUN_00673d20::cf_common_exit_00674540:
00674540  8B 15 40 75 85 00         MOV EDX,dword ptr [0x00857540]
00674546  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00674549  42                        INC EDX
0067454A  85 C0                     TEST EAX,EAX
0067454C  89 15 40 75 85 00         MOV dword ptr [0x00857540],EDX
00674552  75 05                     JNZ 0x00674559
00674554  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
LAB_00674559:
00674559  5F                        POP EDI
0067455A  5E                        POP ESI
0067455B  5B                        POP EBX
0067455C  8B E5                     MOV ESP,EBP
0067455E  5D                        POP EBP
0067455F  C3                        RET
