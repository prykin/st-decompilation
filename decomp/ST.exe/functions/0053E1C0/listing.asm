UPanelTy::CreateTab:
0053E1C0  55                        PUSH EBP
0053E1C1  8B EC                     MOV EBP,ESP
0053E1C3  81 EC 0C 05 00 00         SUB ESP,0x50c
0053E1C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053E1CE  53                        PUSH EBX
0053E1CF  56                        PUSH ESI
0053E1D0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0053E1D3  57                        PUSH EDI
0053E1D4  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0053E1DA  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
0053E1E0  6A 00                     PUSH 0x0
0053E1E2  52                        PUSH EDX
0053E1E3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0053E1EA  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0053E1F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E1F6  E8 F5 F5 1E 00            CALL 0x0072d7f0
0053E1FB  8B F0                     MOV ESI,EAX
0053E1FD  83 C4 08                  ADD ESP,0x8
0053E200  85 F6                     TEST ESI,ESI
0053E202  0F 85 22 01 00 00         JNZ 0x0053e32a
0053E208  B9 16 00 00 00            MOV ECX,0x16
0053E20D  8D 7D 98                  LEA EDI,[EBP + -0x68]
0053E210  F3 AB                     STOSD.REP ES:EDI
0053E212  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0053E215  B9 18 01 00 00            MOV ECX,0x118
0053E21A  8D BD F4 FA FF FF         LEA EDI,[EBP + 0xfffffaf4]
0053E220  BE 01 00 00 00            MOV ESI,0x1
0053E225  F3 AB                     STOSD.REP ES:EDI
0053E227  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0053E22A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0053E22D  32 C0                     XOR AL,AL
0053E22F  84 C9                     TEST CL,CL
0053E231  0F 86 82 00 00 00         JBE 0x0053e2b9
0053E237  8B 4F 5C                  MOV ECX,dword ptr [EDI + 0x5c]
0053E23A  8B 7F 3C                  MOV EDI,dword ptr [EDI + 0x3c]
0053E23D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0053E240  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053E243  33 C9                     XOR ECX,ECX
0053E245  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0053E248  8D B5 F8 FA FF FF         LEA ESI,[EBP + 0xfffffaf8]
0053E24E  03 FB                     ADD EDI,EBX
0053E250  EB 03                     JMP 0x0053e255
LAB_0053e252:
0053E252  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_0053e255:
0053E255  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0053E258  89 5E FC                  MOV dword ptr [ESI + -0x4],EBX
0053E25B  33 DB                     XOR EBX,EBX
0053E25D  3A C2                     CMP AL,DL
0053E25F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0053E262  0F 94 C3                  SETZ BL
0053E265  89 1E                     MOV dword ptr [ESI],EBX
0053E267  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
0053E26A  85 D2                     TEST EDX,EDX
0053E26C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053E26F  75 07                     JNZ 0x0053e278
0053E271  8B 52 48                  MOV EDX,dword ptr [EDX + 0x48]
0053E274  F7 DA                     NEG EDX
0053E276  EB 03                     JMP 0x0053e27b
LAB_0053e278:
0053E278  8B 52 44                  MOV EDX,dword ptr [EDX + 0x44]
LAB_0053e27b:
0053E27B  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0053E27E  03 D1                     ADD EDX,ECX
0053E280  03 D3                     ADD EDX,EBX
0053E282  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0053E285  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
0053E288  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0053E28B  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
0053E28E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0053E291  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
0053E294  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0053E297  FE C0                     INC AL
0053E299  42                        INC EDX
0053E29A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053E29D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0053E2A0  03 CA                     ADD ECX,EDX
0053E2A2  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
0053E2A5  03 FB                     ADD EDI,EBX
0053E2A7  83 C6 70                  ADD ESI,0x70
0053E2AA  3A C2                     CMP AL,DL
0053E2AC  72 A4                     JC 0x0053e252
0053E2AE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0053E2B1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0053E2B4  BE 01 00 00 00            MOV ESI,0x1
LAB_0053e2b9:
0053E2B9  8D 85 F4 FA FF FF         LEA EAX,[EBP + 0xfffffaf4]
0053E2BF  81 E2 FF 00 00 00         AND EDX,0xff
0053E2C5  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0053E2C8  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0053E2CB  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0053E2CE  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0053E2D1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0053E2D4  42                        INC EDX
0053E2D5  B9 02 00 00 00            MOV ECX,0x2
0053E2DA  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0053E2DD  8D 45 98                  LEA EAX,[EBP + -0x68]
0053E2E0  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0053E2E3  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0053E2E6  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0053E2E9  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0053E2EC  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0053E2EF  6A 00                     PUSH 0x0
0053E2F1  50                        PUSH EAX
0053E2F2  8D 45 FC                  LEA EAX,[EBP + -0x4]
0053E2F5  89 75 98                  MOV dword ptr [EBP + -0x68],ESI
0053E2F8  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
0053E2FF  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0053E302  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0053E305  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0053E308  8B 11                     MOV EDX,dword ptr [ECX]
0053E30A  6A 00                     PUSH 0x0
0053E30C  50                        PUSH EAX
0053E30D  6A 05                     PUSH 0x5
0053E30F  FF 52 08                  CALL dword ptr [EDX + 0x8]
0053E312  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0053E318  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053E31B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E321  5F                        POP EDI
0053E322  5E                        POP ESI
0053E323  5B                        POP EBX
0053E324  8B E5                     MOV ESP,EBP
0053E326  5D                        POP EBP
0053E327  C2 28 00                  RET 0x28
LAB_0053e32a:
0053E32A  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0053E330  68 14 79 7C 00            PUSH 0x7c7914
0053E335  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E33A  56                        PUSH ESI
0053E33B  6A 00                     PUSH 0x0
0053E33D  68 D1 00 00 00            PUSH 0xd1
0053E342  68 70 78 7C 00            PUSH 0x7c7870
0053E347  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053E34D  E8 7E F1 16 00            CALL 0x006ad4d0
0053E352  83 C4 18                  ADD ESP,0x18
0053E355  85 C0                     TEST EAX,EAX
0053E357  74 01                     JZ 0x0053e35a
0053E359  CC                        INT3
LAB_0053e35a:
0053E35A  68 D1 00 00 00            PUSH 0xd1
0053E35F  68 70 78 7C 00            PUSH 0x7c7870
0053E364  6A 00                     PUSH 0x0
0053E366  56                        PUSH ESI
0053E367  E8 D4 7A 16 00            CALL 0x006a5e40
0053E36C  5F                        POP EDI
0053E36D  5E                        POP ESI
0053E36E  83 C8 FF                  OR EAX,0xffffffff
0053E371  5B                        POP EBX
0053E372  8B E5                     MOV ESP,EBP
0053E374  5D                        POP EBP
0053E375  C2 28 00                  RET 0x28
