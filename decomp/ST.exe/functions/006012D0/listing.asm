FUN_006012d0:
006012D0  55                        PUSH EBP
006012D1  8B EC                     MOV EBP,ESP
006012D3  83 EC 18                  SUB ESP,0x18
006012D6  53                        PUSH EBX
006012D7  56                        PUSH ESI
006012D8  57                        PUSH EDI
006012D9  8B D9                     MOV EBX,ECX
006012DB  6A 3D                     PUSH 0x3d
006012DD  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006012E4  E8 87 99 0A 00            CALL 0x006aac70
006012E9  B9 0F 00 00 00            MOV ECX,0xf
006012EE  8D B3 06 02 00 00         LEA ESI,[EBX + 0x206]
006012F4  8B F8                     MOV EDI,EAX
006012F6  C7 83 12 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x212],0x2
00601300  F3 A5                     MOVSD.REP ES:EDI,ESI
00601302  A4                        MOVSB ES:EDI,ESI
00601303  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
00601309  33 FF                     XOR EDI,EDI
0060130B  85 C9                     TEST ECX,ECX
0060130D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00601310  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00601313  74 43                     JZ 0x00601358
00601315  8B 93 26 02 00 00         MOV EDX,dword ptr [EBX + 0x226]
0060131B  33 C0                     XOR EAX,EAX
0060131D  85 D2                     TEST EDX,EDX
0060131F  7E 37                     JLE 0x00601358
00601321  33 F6                     XOR ESI,ESI
LAB_00601323:
00601323  8B 54 0E 4E               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x4e]
00601327  85 D2                     TEST EDX,EDX
00601329  75 08                     JNZ 0x00601333
0060132B  C7 44 0E 46 00 00 00 00   MOV dword ptr [ESI + ECX*0x1 + 0x46],0x0
LAB_00601333:
00601333  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
00601339  40                        INC EAX
0060133A  8B 54 0E 46               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x46]
0060133E  83 C6 52                  ADD ESI,0x52
00601341  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00601344  8D 54 57 56               LEA EDX,[EDI + EDX*0x2 + 0x56]
00601348  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0060134B  8B 93 26 02 00 00         MOV EDX,dword ptr [EBX + 0x226]
00601351  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00601354  3B C2                     CMP EAX,EDX
00601356  7C CB                     JL 0x00601323
LAB_00601358:
00601358  8B 83 37 02 00 00         MOV EAX,dword ptr [EBX + 0x237]
0060135E  85 C0                     TEST EAX,EAX
00601360  74 13                     JZ 0x00601375
00601362  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
00601369  2B C8                     SUB ECX,EAX
0060136B  8D 14 8D 04 00 00 00      LEA EDX,[ECX*0x4 + 0x4]
00601372  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00601375:
00601375  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00601378  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0060137B  85 C9                     TEST ECX,ECX
0060137D  0F 84 F5 00 00 00         JZ 0x00601478
00601383  8D 54 07 3D               LEA EDX,[EDI + EAX*0x1 + 0x3d]
00601387  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060138A  52                        PUSH EDX
0060138B  50                        PUSH EAX
0060138C  E8 BF BB 0A 00            CALL 0x006acf50
00601391  8B 8B 26 02 00 00         MOV ECX,dword ptr [EBX + 0x226]
00601397  33 D2                     XOR EDX,EDX
00601399  33 F6                     XOR ESI,ESI
0060139B  3B CA                     CMP ECX,EDX
0060139D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006013A0  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006013A3  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006013A6  0F 8E 81 00 00 00         JLE 0x0060142d
006013AC  EB 06                     JMP 0x006013b4
LAB_006013ae:
006013AE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006013B1  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006013b4:
006013B4  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
006013BA  8B 4C 11 46               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x46]
006013BE  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006013C1  8D 4C 09 56               LEA ECX,[ECX + ECX*0x1 + 0x56]
006013C5  89 4C 30 3D               MOV dword ptr [EAX + ESI*0x1 + 0x3d],ECX
006013C9  8D 44 30 41               LEA EAX,[EAX + ESI*0x1 + 0x41]
006013CD  8B B3 33 02 00 00         MOV ESI,dword ptr [EBX + 0x233]
006013D3  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006013D6  B9 14 00 00 00            MOV ECX,0x14
006013DB  03 F2                     ADD ESI,EDX
006013DD  8B F8                     MOV EDI,EAX
006013DF  F3 A5                     MOVSD.REP ES:EDI,ESI
006013E1  66 A5                     MOVSW ES:EDI,ESI
006013E3  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
006013E9  03 CA                     ADD ECX,EDX
006013EB  8B 71 4E                  MOV ESI,dword ptr [ECX + 0x4e]
006013EE  85 F6                     TEST ESI,ESI
006013F0  74 19                     JZ 0x0060140b
006013F2  8B 49 46                  MOV ECX,dword ptr [ECX + 0x46]
006013F5  8D 78 52                  LEA EDI,[EAX + 0x52]
006013F8  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006013FB  D1 E1                     SHL ECX,0x1
006013FD  8B C1                     MOV EAX,ECX
006013FF  C1 E9 02                  SHR ECX,0x2
00601402  F3 A5                     MOVSD.REP ES:EDI,ESI
00601404  8B C8                     MOV ECX,EAX
00601406  83 E1 03                  AND ECX,0x3
00601409  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0060140b:
0060140B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0060140E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00601411  03 C1                     ADD EAX,ECX
00601413  8B 8B 26 02 00 00         MOV ECX,dword ptr [EBX + 0x226]
00601419  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0060141C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0060141F  40                        INC EAX
00601420  83 C2 52                  ADD EDX,0x52
00601423  3B C1                     CMP EAX,ECX
00601425  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00601428  7C 84                     JL 0x006013ae
0060142A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0060142d:
0060142D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00601430  85 C9                     TEST ECX,ECX
00601432  74 44                     JZ 0x00601478
00601434  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601437  89 4C 07 3D               MOV dword ptr [EDI + EAX*0x1 + 0x3d],ECX
0060143B  8B 8B 37 02 00 00         MOV ECX,dword ptr [EBX + 0x237]
00601441  8B B3 3B 02 00 00         MOV ESI,dword ptr [EBX + 0x23b]
00601447  8D 44 07 41               LEA EAX,[EDI + EAX*0x1 + 0x41]
0060144B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0060144E  8B F8                     MOV EDI,EAX
00601450  C1 E1 03                  SHL ECX,0x3
00601453  8B D1                     MOV EDX,ECX
00601455  C1 E9 02                  SHR ECX,0x2
00601458  F3 A5                     MOVSD.REP ES:EDI,ESI
0060145A  8B CA                     MOV ECX,EDX
0060145C  83 E1 03                  AND ECX,0x3
0060145F  F3 A4                     MOVSB.REP ES:EDI,ESI
00601461  8B 8B 37 02 00 00         MOV ECX,dword ptr [EBX + 0x237]
00601467  8B B3 3F 02 00 00         MOV ESI,dword ptr [EBX + 0x23f]
0060146D  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00601470  8D 3C D0                  LEA EDI,[EAX + EDX*0x8]
00601473  F3 A5                     MOVSD.REP ES:EDI,ESI
00601475  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_00601478:
00601478  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060147B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060147E  8D 4C 07 3D               LEA ECX,[EDI + EAX*0x1 + 0x3d]
00601482  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00601485  5F                        POP EDI
00601486  5E                        POP ESI
00601487  89 0A                     MOV dword ptr [EDX],ECX
00601489  5B                        POP EBX
0060148A  8B E5                     MOV ESP,EBP
0060148C  5D                        POP EBP
0060148D  C2 04 00                  RET 0x4
