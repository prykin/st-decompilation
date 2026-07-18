FUN_0061e110:
0061E110  55                        PUSH EBP
0061E111  8B EC                     MOV EBP,ESP
0061E113  83 EC 18                  SUB ESP,0x18
0061E116  66 8B 41 30               MOV AX,word ptr [ECX + 0x30]
0061E11A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0061E121  66 85 C0                  TEST AX,AX
0061E124  0F BF D0                  MOVSX EDX,AX
0061E127  B8 79 19 8C 02            MOV EAX,0x28c1979
0061E12C  7C 13                     JL 0x0061e141
0061E12E  F7 EA                     IMUL EDX
0061E130  D1 FA                     SAR EDX,0x1
0061E132  8B C2                     MOV EAX,EDX
0061E134  C1 E8 1F                  SHR EAX,0x1f
0061E137  03 D0                     ADD EDX,EAX
0061E139  0F BF D2                  MOVSX EDX,DX
0061E13C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061E13F  EB 12                     JMP 0x0061e153
LAB_0061e141:
0061E141  F7 EA                     IMUL EDX
0061E143  D1 FA                     SAR EDX,0x1
0061E145  8B C2                     MOV EAX,EDX
0061E147  C1 E8 1F                  SHR EAX,0x1f
0061E14A  03 D0                     ADD EDX,EAX
0061E14C  0F BF C2                  MOVSX EAX,DX
0061E14F  48                        DEC EAX
0061E150  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0061e153:
0061E153  66 8B 41 32               MOV AX,word ptr [ECX + 0x32]
0061E157  53                        PUSH EBX
0061E158  56                        PUSH ESI
0061E159  57                        PUSH EDI
0061E15A  66 85 C0                  TEST AX,AX
0061E15D  0F BF D0                  MOVSX EDX,AX
0061E160  B8 79 19 8C 02            MOV EAX,0x28c1979
0061E165  7C 10                     JL 0x0061e177
0061E167  F7 EA                     IMUL EDX
0061E169  D1 FA                     SAR EDX,0x1
0061E16B  8B C2                     MOV EAX,EDX
0061E16D  C1 E8 1F                  SHR EAX,0x1f
0061E170  03 D0                     ADD EDX,EAX
0061E172  0F BF DA                  MOVSX EBX,DX
0061E175  EB 0F                     JMP 0x0061e186
LAB_0061e177:
0061E177  F7 EA                     IMUL EDX
0061E179  D1 FA                     SAR EDX,0x1
0061E17B  8B C2                     MOV EAX,EDX
0061E17D  C1 E8 1F                  SHR EAX,0x1f
0061E180  03 D0                     ADD EDX,EAX
0061E182  0F BF DA                  MOVSX EBX,DX
0061E185  4B                        DEC EBX
LAB_0061e186:
0061E186  66 8B 41 34               MOV AX,word ptr [ECX + 0x34]
0061E18A  66 85 C0                  TEST AX,AX
0061E18D  0F BF D0                  MOVSX EDX,AX
0061E190  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061E195  7C 14                     JL 0x0061e1ab
0061E197  F7 EA                     IMUL EDX
0061E199  C1 FA 06                  SAR EDX,0x6
0061E19C  8B C2                     MOV EAX,EDX
0061E19E  C1 E8 1F                  SHR EAX,0x1f
0061E1A1  03 D0                     ADD EDX,EAX
0061E1A3  0F BF D2                  MOVSX EDX,DX
0061E1A6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0061E1A9  EB 13                     JMP 0x0061e1be
LAB_0061e1ab:
0061E1AB  F7 EA                     IMUL EDX
0061E1AD  C1 FA 06                  SAR EDX,0x6
0061E1B0  8B C2                     MOV EAX,EDX
0061E1B2  C1 E8 1F                  SHR EAX,0x1f
0061E1B5  03 D0                     ADD EDX,EAX
0061E1B7  0F BF C2                  MOVSX EAX,DX
0061E1BA  48                        DEC EAX
0061E1BB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0061e1be:
0061E1BE  66 8B 41 36               MOV AX,word ptr [ECX + 0x36]
0061E1C2  66 85 C0                  TEST AX,AX
0061E1C5  0F BF D0                  MOVSX EDX,AX
0061E1C8  B8 79 19 8C 02            MOV EAX,0x28c1979
0061E1CD  7C 10                     JL 0x0061e1df
0061E1CF  F7 EA                     IMUL EDX
0061E1D1  D1 FA                     SAR EDX,0x1
0061E1D3  8B C2                     MOV EAX,EDX
0061E1D5  C1 E8 1F                  SHR EAX,0x1f
0061E1D8  03 D0                     ADD EDX,EAX
0061E1DA  0F BF F2                  MOVSX ESI,DX
0061E1DD  EB 0F                     JMP 0x0061e1ee
LAB_0061e1df:
0061E1DF  F7 EA                     IMUL EDX
0061E1E1  D1 FA                     SAR EDX,0x1
0061E1E3  8B C2                     MOV EAX,EDX
0061E1E5  C1 E8 1F                  SHR EAX,0x1f
0061E1E8  03 D0                     ADD EDX,EAX
0061E1EA  0F BF F2                  MOVSX ESI,DX
0061E1ED  4E                        DEC ESI
LAB_0061e1ee:
0061E1EE  66 8B 41 38               MOV AX,word ptr [ECX + 0x38]
0061E1F2  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0061E1F5  66 85 C0                  TEST AX,AX
0061E1F8  0F BF D0                  MOVSX EDX,AX
0061E1FB  B8 79 19 8C 02            MOV EAX,0x28c1979
0061E200  7C 10                     JL 0x0061e212
0061E202  F7 EA                     IMUL EDX
0061E204  D1 FA                     SAR EDX,0x1
0061E206  8B C2                     MOV EAX,EDX
0061E208  C1 E8 1F                  SHR EAX,0x1f
0061E20B  03 D0                     ADD EDX,EAX
0061E20D  0F BF FA                  MOVSX EDI,DX
0061E210  EB 0F                     JMP 0x0061e221
LAB_0061e212:
0061E212  F7 EA                     IMUL EDX
0061E214  D1 FA                     SAR EDX,0x1
0061E216  8B C2                     MOV EAX,EDX
0061E218  C1 E8 1F                  SHR EAX,0x1f
0061E21B  03 D0                     ADD EDX,EAX
0061E21D  0F BF FA                  MOVSX EDI,DX
0061E220  4F                        DEC EDI
LAB_0061e221:
0061E221  66 8B 41 3A               MOV AX,word ptr [ECX + 0x3a]
0061E225  66 85 C0                  TEST AX,AX
0061E228  0F BF C8                  MOVSX ECX,AX
0061E22B  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061E230  7C 14                     JL 0x0061e246
0061E232  F7 E9                     IMUL ECX
0061E234  C1 FA 06                  SAR EDX,0x6
0061E237  8B CA                     MOV ECX,EDX
0061E239  C1 E9 1F                  SHR ECX,0x1f
0061E23C  03 D1                     ADD EDX,ECX
0061E23E  0F BF D2                  MOVSX EDX,DX
0061E241  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0061E244  EB 13                     JMP 0x0061e259
LAB_0061e246:
0061E246  F7 E9                     IMUL ECX
0061E248  C1 FA 06                  SAR EDX,0x6
0061E24B  8B C2                     MOV EAX,EDX
0061E24D  C1 E8 1F                  SHR EAX,0x1f
0061E250  03 D0                     ADD EDX,EAX
0061E252  0F BF C2                  MOVSX EAX,DX
0061E255  48                        DEC EAX
0061E256  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0061e259:
0061E259  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061E25C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061E262  8D 50 01                  LEA EDX,[EAX + 0x1]
0061E265  3B 51 48                  CMP EDX,dword ptr [ECX + 0x48]
0061E268  7C 2B                     JL 0x0061e295
0061E26A  8D 50 FF                  LEA EDX,[EAX + -0x1]
0061E26D  3B 51 58                  CMP EDX,dword ptr [ECX + 0x58]
0061E270  7F 23                     JG 0x0061e295
0061E272  8D 53 01                  LEA EDX,[EBX + 0x1]
0061E275  3B 51 44                  CMP EDX,dword ptr [ECX + 0x44]
0061E278  7C 1B                     JL 0x0061e295
0061E27A  8D 53 FF                  LEA EDX,[EBX + -0x1]
0061E27D  3B 51 54                  CMP EDX,dword ptr [ECX + 0x54]
0061E280  7F 13                     JG 0x0061e295
0061E282  6A 01                     PUSH 0x1
0061E284  53                        PUSH EBX
0061E285  50                        PUSH EAX
0061E286  E8 45 F9 0B 00            CALL 0x006ddbd0
0061E28B  85 C0                     TEST EAX,EAX
0061E28D  75 4F                     JNZ 0x0061e2de
0061E28F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
LAB_0061e295:
0061E295  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
0061E298  8D 46 01                  LEA EAX,[ESI + 0x1]
0061E29B  3B C2                     CMP EAX,EDX
0061E29D  0F 8C 65 01 00 00         JL 0x0061e408
0061E2A3  8B 41 58                  MOV EAX,dword ptr [ECX + 0x58]
0061E2A6  8D 56 FF                  LEA EDX,[ESI + -0x1]
0061E2A9  3B D0                     CMP EDX,EAX
0061E2AB  0F 8F 57 01 00 00         JG 0x0061e408
0061E2B1  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
0061E2B4  8D 47 01                  LEA EAX,[EDI + 0x1]
0061E2B7  3B C2                     CMP EAX,EDX
0061E2B9  0F 8C 49 01 00 00         JL 0x0061e408
0061E2BF  8B 41 54                  MOV EAX,dword ptr [ECX + 0x54]
0061E2C2  8D 57 FF                  LEA EDX,[EDI + -0x1]
0061E2C5  3B D0                     CMP EDX,EAX
0061E2C7  0F 8F 3B 01 00 00         JG 0x0061e408
0061E2CD  6A 01                     PUSH 0x1
0061E2CF  57                        PUSH EDI
0061E2D0  56                        PUSH ESI
0061E2D1  E8 FA F8 0B 00            CALL 0x006ddbd0
0061E2D6  85 C0                     TEST EAX,EAX
0061E2D8  0F 84 2A 01 00 00         JZ 0x0061e408
LAB_0061e2de:
0061E2DE  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0061E2E4  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0061E2EB  85 F6                     TEST ESI,ESI
0061E2ED  0F 84 15 01 00 00         JZ 0x0061e408
0061E2F3  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0061E2FA  0F 84 08 01 00 00         JZ 0x0061e408
0061E300  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0061E306  85 C0                     TEST EAX,EAX
0061E308  0F 84 FA 00 00 00         JZ 0x0061e408
0061E30E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061E311  8D 45 E8                  LEA EAX,[EBP + -0x18]
0061E314  8D 4D FC                  LEA ECX,[EBP + -0x4]
0061E317  50                        PUSH EAX
0061E318  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0061E31E  51                        PUSH ECX
0061E31F  53                        PUSH EBX
0061E320  52                        PUSH EDX
0061E321  50                        PUSH EAX
0061E322  8B CE                     MOV ECX,ESI
0061E324  E8 2A 5C DE FF            CALL 0x00403f53
0061E329  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061E32C  85 C0                     TEST EAX,EAX
0061E32E  0F 8C D4 00 00 00         JL 0x0061e408
0061E334  83 F8 05                  CMP EAX,0x5
0061E337  0F 8D CB 00 00 00         JGE 0x0061e408
0061E33D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061E340  85 D2                     TEST EDX,EDX
0061E342  0F 8C C0 00 00 00         JL 0x0061e408
0061E348  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0061E34B  3B D1                     CMP EDX,ECX
0061E34D  0F 8D B5 00 00 00         JGE 0x0061e408
0061E353  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0061E35A  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0061E35D  03 C3                     ADD EAX,EBX
0061E35F  85 C0                     TEST EAX,EAX
0061E361  0F 8C A1 00 00 00         JL 0x0061e408
0061E367  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0061E36A  0F 8D 98 00 00 00         JGE 0x0061e408
0061E370  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0061E373  85 F6                     TEST ESI,ESI
0061E375  0F 84 8D 00 00 00         JZ 0x0061e408
0061E37B  0F AF C1                  IMUL EAX,ECX
0061E37E  03 C6                     ADD EAX,ESI
0061E380  33 C9                     XOR ECX,ECX
0061E382  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061E385  8B C1                     MOV EAX,ECX
0061E387  85 C0                     TEST EAX,EAX
0061E389  75 7D                     JNZ 0x0061e408
0061E38B  A0 4D 87 80 00            MOV AL,[0x0080874d]
0061E390  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0061E396  3C FF                     CMP AL,0xff
0061E398  74 6E                     JZ 0x0061e408
0061E39A  8B 86 F8 00 00 00         MOV EAX,dword ptr [ESI + 0xf8]
0061E3A0  85 C0                     TEST EAX,EAX
0061E3A2  74 64                     JZ 0x0061e408
0061E3A4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0061E3A7  8D 55 F0                  LEA EDX,[EBP + -0x10]
0061E3AA  8D 45 E8                  LEA EAX,[EBP + -0x18]
0061E3AD  52                        PUSH EDX
0061E3AE  8B 96 0C 01 00 00         MOV EDX,dword ptr [ESI + 0x10c]
0061E3B4  50                        PUSH EAX
0061E3B5  57                        PUSH EDI
0061E3B6  51                        PUSH ECX
0061E3B7  52                        PUSH EDX
0061E3B8  8B CE                     MOV ECX,ESI
0061E3BA  E8 94 5B DE FF            CALL 0x00403f53
0061E3BF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061E3C2  85 C0                     TEST EAX,EAX
0061E3C4  7C 42                     JL 0x0061e408
0061E3C6  83 F8 05                  CMP EAX,0x5
0061E3C9  7D 3D                     JGE 0x0061e408
0061E3CB  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0061E3CE  85 D2                     TEST EDX,EDX
0061E3D0  7C 36                     JL 0x0061e408
0061E3D2  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0061E3D5  3B D1                     CMP EDX,ECX
0061E3D7  7D 2F                     JGE 0x0061e408
0061E3D9  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0061E3E0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0061E3E3  03 C7                     ADD EAX,EDI
0061E3E5  85 C0                     TEST EAX,EAX
0061E3E7  7C 1F                     JL 0x0061e408
0061E3E9  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0061E3EC  7D 1A                     JGE 0x0061e408
0061E3EE  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0061E3F1  85 F6                     TEST ESI,ESI
0061E3F3  74 13                     JZ 0x0061e408
0061E3F5  0F AF C1                  IMUL EAX,ECX
0061E3F8  03 C6                     ADD EAX,ESI
0061E3FA  33 C9                     XOR ECX,ECX
0061E3FC  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0061E3FF  8B C1                     MOV EAX,ECX
0061E401  85 C0                     TEST EAX,EAX
0061E403  75 03                     JNZ 0x0061e408
0061E405  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0061e408:
0061E408  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061E40B  5F                        POP EDI
0061E40C  5E                        POP ESI
0061E40D  5B                        POP EBX
0061E40E  8B E5                     MOV ESP,EBP
0061E410  5D                        POP EBP
0061E411  C3                        RET
