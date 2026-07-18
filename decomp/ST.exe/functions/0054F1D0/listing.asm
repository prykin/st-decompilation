FUN_0054f1d0:
0054F1D0  55                        PUSH EBP
0054F1D1  8B EC                     MOV EBP,ESP
0054F1D3  81 EC 78 01 00 00         SUB ESP,0x178
0054F1D9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054F1DE  53                        PUSH EBX
0054F1DF  56                        PUSH ESI
0054F1E0  57                        PUSH EDI
0054F1E1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054F1E4  33 FF                     XOR EDI,EDI
0054F1E6  8D 55 90                  LEA EDX,[EBP + -0x70]
0054F1E9  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0054F1EC  57                        PUSH EDI
0054F1ED  52                        PUSH EDX
0054F1EE  C7 45 D0 07 00 00 00      MOV dword ptr [EBP + -0x30],0x7
0054F1F5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0054F1F8  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0054F1FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F201  E8 EA E5 1D 00            CALL 0x0072d7f0
0054F206  8B F0                     MOV ESI,EAX
0054F208  83 C4 08                  ADD ESP,0x8
0054F20B  3B F7                     CMP ESI,EDI
0054F20D  0F 85 F5 0A 00 00         JNZ 0x0054fd08
0054F213  A0 7E 87 80 00            MOV AL,[0x0080877e]
0054F218  84 C0                     TEST AL,AL
0054F21A  0F 84 FA 04 00 00         JZ 0x0054f71a
0054F220  A0 83 87 80 00            MOV AL,[0x00808783]
0054F225  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F228  3C 03                     CMP AL,0x3
0054F22A  0F 85 18 03 00 00         JNZ 0x0054f548
0054F230  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054F236  57                        PUSH EDI
0054F237  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0054F23A  6A FF                     PUSH -0x1
0054F23C  50                        PUSH EAX
0054F23D  6A FF                     PUSH -0x1
0054F23F  51                        PUSH ECX
0054F240  E8 CB 82 16 00            CALL 0x006b7510
0054F245  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0054F248  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0054F24B  3B C7                     CMP EAX,EDI
0054F24D  0F 8E F5 02 00 00         JLE 0x0054f548
LAB_0054f253:
0054F253  6A 00                     PUSH 0x0
0054F255  6A FF                     PUSH -0x1
0054F257  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054F25A  6A 00                     PUSH 0x0
0054F25C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
0054F25F  52                        PUSH EDX
0054F260  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054F266  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054F269  50                        PUSH EAX
0054F26A  51                        PUSH ECX
0054F26B  6A FF                     PUSH -0x1
0054F26D  52                        PUSH EDX
0054F26E  E8 BD 63 1C 00            CALL 0x00715630
0054F273  83 C4 20                  ADD ESP,0x20
0054F276  83 F8 B3                  CMP EAX,-0x4d
0054F279  0F 84 F2 02 00 00         JZ 0x0054f571
0054F27F  83 F8 01                  CMP EAX,0x1
0054F282  0F 85 A9 02 00 00         JNZ 0x0054f531
0054F288  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0054F28B  8B F0                     MOV ESI,EAX
0054F28D  33 C0                     XOR EAX,EAX
0054F28F  33 FF                     XOR EDI,EDI
0054F291  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054F296  3B C7                     CMP EAX,EDI
0054F298  7E 14                     JLE 0x0054f2ae
0054F29A  B9 F0 8A 80 00            MOV ECX,0x808af0
LAB_0054f29f:
0054F29F  39 11                     CMP dword ptr [ECX],EDX
0054F2A1  75 02                     JNZ 0x0054f2a5
0054F2A3  33 F6                     XOR ESI,ESI
LAB_0054f2a5:
0054F2A5  81 C1 9C 00 00 00         ADD ECX,0x9c
0054F2AB  48                        DEC EAX
0054F2AC  75 F1                     JNZ 0x0054f29f
LAB_0054f2ae:
0054F2AE  3B F7                     CMP ESI,EDI
0054F2B0  74 0E                     JZ 0x0054f2c0
0054F2B2  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F2B5  0F 84 76 02 00 00         JZ 0x0054f531
0054F2BB  E9 68 02 00 00            JMP 0x0054f528
LAB_0054f2c0:
0054F2C0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0054F2C3  8D 41 EF                  LEA EAX,[ECX + -0x11]
0054F2C6  83 F8 31                  CMP EAX,0x31
0054F2C9  0F 87 54 02 00 00         JA 0x0054f523
0054F2CF  33 C9                     XOR ECX,ECX
0054F2D1  8A 88 70 FD 54 00         MOV CL,byte ptr [EAX + 0x54fd70]
switchD_0054f2d7::switchD:
0054F2D7  FF 24 8D 4C FD 54 00      JMP dword ptr [ECX*0x4 + 0x54fd4c]
switchD_0054f2d7::caseD_36:
0054F2DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054F2E1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054F2E4  50                        PUSH EAX
0054F2E5  52                        PUSH EDX
0054F2E6  E8 6B 21 EB FF            CALL 0x00401456
0054F2EB  E9 B4 00 00 00            JMP 0x0054f3a4
switchD_0054f2d7::caseD_30:
0054F2F0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0054F2F3  39 BA E8 00 00 00         CMP dword ptr [EDX + 0xe8],EDI
0054F2F9  0F 85 32 02 00 00         JNZ 0x0054f531
0054F2FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054F302  8B CA                     MOV ECX,EDX
0054F304  83 C1 39                  ADD ECX,0x39
0054F307  50                        PUSH EAX
0054F308  51                        PUSH ECX
0054F309  E8 02 A6 16 00            CALL 0x006b9910
0054F30E  E9 1E 02 00 00            JMP 0x0054f531
switchD_0054f2d7::caseD_38:
0054F313  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0054F316  39 BA E8 00 00 00         CMP dword ptr [EDX + 0xe8],EDI
0054F31C  0F 85 0F 02 00 00         JNZ 0x0054f531
0054F322  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0054F325  85 DB                     TEST EBX,EBX
0054F327  0F 84 04 02 00 00         JZ 0x0054f531
0054F32D  8B 03                     MOV EAX,dword ptr [EBX]
0054F32F  85 C0                     TEST EAX,EAX
0054F331  0F 84 FA 01 00 00         JZ 0x0054f531
0054F337  83 C3 04                  ADD EBX,0x4
0054F33A  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0054F341  85 C0                     TEST EAX,EAX
0054F343  0F 86 DF 01 00 00         JBE 0x0054f528
LAB_0054f349:
0054F349  8B 43 13                  MOV EAX,dword ptr [EBX + 0x13]
0054F34C  8B 4B 0F                  MOV ECX,dword ptr [EBX + 0xf]
0054F34F  03 C1                     ADD EAX,ECX
0054F351  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0054F354  8D 70 1B                  LEA ESI,[EAX + 0x1b]
0054F357  56                        PUSH ESI
0054F358  E8 B3 B8 15 00            CALL 0x006aac10
0054F35D  8B CE                     MOV ECX,ESI
0054F35F  8B F3                     MOV ESI,EBX
0054F361  8B D1                     MOV EDX,ECX
0054F363  8B F8                     MOV EDI,EAX
0054F365  C1 E9 02                  SHR ECX,0x2
0054F368  F3 A5                     MOVSD.REP ES:EDI,ESI
0054F36A  50                        PUSH EAX
0054F36B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0054F36E  8B CA                     MOV ECX,EDX
0054F370  83 C0 39                  ADD EAX,0x39
0054F373  83 E1 03                  AND ECX,0x3
0054F376  50                        PUSH EAX
0054F377  F3 A4                     MOVSB.REP ES:EDI,ESI
0054F379  E8 92 A5 16 00            CALL 0x006b9910
0054F37E  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0054F381  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054F384  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0054F387  8D 5C 0B 1B               LEA EBX,[EBX + ECX*0x1 + 0x1b]
0054F38B  8B 0A                     MOV ECX,dword ptr [EDX]
0054F38D  40                        INC EAX
0054F38E  3B C1                     CMP EAX,ECX
0054F390  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0054F393  72 B4                     JC 0x0054f349
0054F395  E9 8E 01 00 00            JMP 0x0054f528
switchD_0054f2d7::caseD_1a:
0054F39A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054F39D  57                        PUSH EDI
0054F39E  52                        PUSH EDX
0054F39F  E8 E0 1F EB FF            CALL 0x00401384
LAB_0054f3a4:
0054F3A4  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F3A7  0F 84 84 01 00 00         JZ 0x0054f531
0054F3AD  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054F3B0  51                        PUSH ECX
0054F3B1  E9 76 01 00 00            JMP 0x0054f52c
switchD_0054f2d7::caseD_33:
0054F3B6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054F3B9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054F3BC  52                        PUSH EDX
0054F3BD  E8 21 52 EB FF            CALL 0x004045e3
0054F3C2  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F3C5  0F 84 66 01 00 00         JZ 0x0054f531
0054F3CB  E9 58 01 00 00            JMP 0x0054f528
switchD_0054f2d7::caseD_11:
0054F3D0  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F3D3  6A 01                     PUSH 0x1
0054F3D5  68 6F 42 00 00            PUSH 0x426f
0054F3DA  52                        PUSH EDX
0054F3DB  8B CE                     MOV ECX,ESI
0054F3DD  E8 A5 2B EB FF            CALL 0x00401f87
0054F3E2  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0054F3E5  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
0054F3E8  3B C8                     CMP ECX,EAX
0054F3EA  75 03                     JNZ 0x0054f3ef
0054F3EC  89 7E 59                  MOV dword ptr [ESI + 0x59],EDI
LAB_0054f3ef:
0054F3EF  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F3F2  0F 84 39 01 00 00         JZ 0x0054f531
0054F3F8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054F3FB  52                        PUSH EDX
0054F3FC  E9 2B 01 00 00            JMP 0x0054f52c
switchD_0054f2d7::caseD_13:
0054F401  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F404  3B 56 61                  CMP EDX,dword ptr [ESI + 0x61]
0054F407  75 03                     JNZ 0x0054f40c
0054F409  89 7E 59                  MOV dword ptr [ESI + 0x59],EDI
LAB_0054f40c:
0054F40C  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F40F  74 0C                     JZ 0x0054f41d
0054F411  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054F414  50                        PUSH EAX
0054F415  E8 46 BC 15 00            CALL 0x006ab060
0054F41A  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
LAB_0054f41d:
0054F41D  39 BE EC 00 00 00         CMP dword ptr [ESI + 0xec],EDI
0054F423  0F 84 08 01 00 00         JZ 0x0054f531
0054F429  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F42C  6A 00                     PUSH 0x0
0054F42E  68 74 42 00 00            PUSH 0x4274
0054F433  52                        PUSH EDX
0054F434  8B CE                     MOV ECX,ESI
0054F436  E8 4C 2B EB FF            CALL 0x00401f87
0054F43B  C7 86 E8 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xe8],0x1
0054F445  E9 E7 00 00 00            JMP 0x0054f531
switchD_0054f2d7::caseD_42:
0054F44A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0054F450  51                        PUSH ECX
0054F451  68 6A 42 00 00            PUSH 0x426a
0054F456  E8 E5 0C 16 00            CALL 0x006b0140
0054F45B  8B F8                     MOV EDI,EAX
0054F45D  83 C9 FF                  OR ECX,0xffffffff
0054F460  33 C0                     XOR EAX,EAX
0054F462  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
0054F468  F2 AE                     SCASB.REPNE ES:EDI
0054F46A  F7 D1                     NOT ECX
0054F46C  2B F9                     SUB EDI,ECX
0054F46E  8B C1                     MOV EAX,ECX
0054F470  8B F7                     MOV ESI,EDI
0054F472  8B FA                     MOV EDI,EDX
0054F474  C1 E9 02                  SHR ECX,0x2
0054F477  F3 A5                     MOVSD.REP ES:EDI,ESI
0054F479  8B C8                     MOV ECX,EAX
0054F47B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054F47E  83 E1 03                  AND ECX,0x3
0054F481  85 C0                     TEST EAX,EAX
0054F483  F3 A4                     MOVSB.REP ES:EDI,ESI
0054F485  0F 84 A6 00 00 00         JZ 0x0054f531
0054F48B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F48E  8B 8E F0 00 00 00         MOV ECX,dword ptr [ESI + 0xf0]
0054F494  85 C9                     TEST ECX,ECX
0054F496  75 09                     JNZ 0x0054f4a1
0054F498  80 38 00                  CMP byte ptr [EAX],0x0
0054F49B  0F 84 90 00 00 00         JZ 0x0054f531
LAB_0054f4a1:
0054F4A1  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054F4A4  51                        PUSH ECX
0054F4A5  E8 B6 BB 15 00            CALL 0x006ab060
0054F4AA  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0054F4AD  33 D2                     XOR EDX,EDX
0054F4AF  C7 46 59 01 00 00 00      MOV dword ptr [ESI + 0x59],0x1
0054F4B6  C7 46 5D 00 00 00 00      MOV dword ptr [ESI + 0x5d],0x0
0054F4BD  89 7E 61                  MOV dword ptr [ESI + 0x61],EDI
0054F4C0  8A 15 AF 8A 80 00         MOV DL,byte ptr [0x00808aaf]
0054F4C6  33 C9                     XOR ECX,ECX
0054F4C8  85 D2                     TEST EDX,EDX
0054F4CA  76 3D                     JBE 0x0054f509
0054F4CC  B8 F6 8A 80 00            MOV EAX,0x808af6
LAB_0054f4d1:
0054F4D1  8B 58 FA                  MOV EBX,dword ptr [EAX + -0x6]
0054F4D4  8D 70 BA                  LEA ESI,[EAX + -0x46]
0054F4D7  3B DF                     CMP EBX,EDI
0054F4D9  75 05                     JNZ 0x0054f4e0
0054F4DB  80 38 00                  CMP byte ptr [EAX],0x0
0054F4DE  75 0C                     JNZ 0x0054f4ec
LAB_0054f4e0:
0054F4E0  41                        INC ECX
0054F4E1  05 9C 00 00 00            ADD EAX,0x9c
0054F4E6  3B CA                     CMP ECX,EDX
0054F4E8  72 E7                     JC 0x0054f4d1
0054F4EA  EB 1D                     JMP 0x0054f509
LAB_0054f4ec:
0054F4EC  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
0054F4F2  56                        PUSH ESI
0054F4F3  52                        PUSH EDX
0054F4F4  8D 85 88 FE FF FF         LEA EAX,[EBP + 0xfffffe88]
0054F4FA  68 FC 85 7C 00            PUSH 0x7c85fc
0054F4FF  50                        PUSH EAX
0054F500  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054F506  83 C4 10                  ADD ESP,0x10
LAB_0054f509:
0054F509  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054F50F  85 C9                     TEST ECX,ECX
0054F511  74 1E                     JZ 0x0054f531
0054F513  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
0054F519  6A 09                     PUSH 0x9
0054F51B  52                        PUSH EDX
0054F51C  E8 B7 1F EB FF            CALL 0x004014d8
0054F521  EB 0E                     JMP 0x0054f531
switchD_0054f2d7::caseD_12:
0054F523  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0054F526  74 09                     JZ 0x0054f531
LAB_0054f528:
0054F528  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054F52B  50                        PUSH EAX
LAB_0054f52c:
0054F52C  E8 2F BB 15 00            CALL 0x006ab060
LAB_0054f531:
0054F531  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0054F534  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0054F537  40                        INC EAX
0054F538  3B C1                     CMP EAX,ECX
0054F53A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0054F53D  0F 8C 10 FD FF FF         JL 0x0054f253
0054F543  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F546  33 FF                     XOR EDI,EDI
LAB_0054f548:
0054F548  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
0054F54B  8D 5E 39                  LEA EBX,[ESI + 0x39]
0054F54E  3B C7                     CMP EAX,EDI
0054F550  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0054F553  75 38                     JNZ 0x0054f58d
0054F555  39 7E 28                  CMP dword ptr [ESI + 0x28],EDI
0054F558  75 33                     JNZ 0x0054f58d
0054F55A  8B 4E 3D                  MOV ECX,dword ptr [ESI + 0x3d]
0054F55D  66 89 79 05               MOV word ptr [ECX + 0x5],DI
0054F561  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F564  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F56A  5F                        POP EDI
0054F56B  5E                        POP ESI
0054F56C  5B                        POP EBX
0054F56D  8B E5                     MOV ESP,EBP
0054F56F  5D                        POP EBP
0054F570  C3                        RET
LAB_0054f571:
0054F571  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054F574  6A 00                     PUSH 0x0
0054F576  6A 06                     PUSH 0x6
0054F578  E8 70 64 EB FF            CALL 0x004059ed
0054F57D  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F580  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F586  5F                        POP EDI
0054F587  5E                        POP ESI
0054F588  5B                        POP EBX
0054F589  8B E5                     MOV ESP,EBP
0054F58B  5D                        POP EBP
0054F58C  C3                        RET
LAB_0054f58d:
0054F58D  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F590  C6 42 04 00               MOV byte ptr [EDX + 0x4],0x0
0054F594  8B 4E 3D                  MOV ECX,dword ptr [ESI + 0x3d]
0054F597  33 D2                     XOR EDX,EDX
0054F599  66 89 79 05               MOV word ptr [ECX + 0x5],DI
0054F59D  8A 4E 4D                  MOV CL,byte ptr [ESI + 0x4d]
0054F5A0  8A 15 3B 73 80 00         MOV DL,byte ptr [0x0080733b]
0054F5A6  8B F9                     MOV EDI,ECX
0054F5A8  81 E7 FF 00 00 00         AND EDI,0xff
0054F5AE  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
0054F5B1  3B 3C D5 F8 2A 7C 00      CMP EDI,dword ptr [EDX*0x8 + 0x7c2af8]
0054F5B8  7D 1F                     JGE 0x0054f5d9
0054F5BA  8B 15 84 87 80 00         MOV EDX,dword ptr [0x00808784]
0054F5C0  85 D2                     TEST EDX,EDX
0054F5C2  75 15                     JNZ 0x0054f5d9
0054F5C4  FE C1                     INC CL
0054F5C6  88 4E 4D                  MOV byte ptr [ESI + 0x4d],CL
0054F5C9  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F5CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F5D2  5F                        POP EDI
0054F5D3  5E                        POP ESI
0054F5D4  5B                        POP EBX
0054F5D5  8B E5                     MOV ESP,EBP
0054F5D7  5D                        POP EBP
0054F5D8  C3                        RET
LAB_0054f5d9:
0054F5D9  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
0054F5DC  85 C0                     TEST EAX,EAX
0054F5DE  74 15                     JZ 0x0054f5f5
LAB_0054f5e0:
0054F5E0  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
0054F5E3  8B 50 0F                  MOV EDX,dword ptr [EAX + 0xf]
0054F5E6  8B 00                     MOV EAX,dword ptr [EAX]
0054F5E8  03 CA                     ADD ECX,EDX
0054F5EA  85 C0                     TEST EAX,EAX
0054F5EC  8D 7C 0F 1B               LEA EDI,[EDI + ECX*0x1 + 0x1b]
0054F5F0  75 EE                     JNZ 0x0054f5e0
0054F5F2  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
LAB_0054f5f5:
0054F5F5  3B 7E 45                  CMP EDI,dword ptr [ESI + 0x45]
0054F5F8  76 10                     JBE 0x0054f60a
0054F5FA  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F5FD  57                        PUSH EDI
0054F5FE  52                        PUSH EDX
0054F5FF  E8 4C D9 15 00            CALL 0x006acf50
0054F604  89 46 3D                  MOV dword ptr [ESI + 0x3d],EAX
0054F607  89 7E 45                  MOV dword ptr [ESI + 0x45],EDI
LAB_0054f60a:
0054F60A  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F60D  8B 03                     MOV EAX,dword ptr [EBX]
0054F60F  83 C2 07                  ADD EDX,0x7
0054F612  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0054F615  85 C0                     TEST EAX,EAX
0054F617  74 36                     JZ 0x0054f64f
LAB_0054f619:
0054F619  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
0054F61C  8B 70 0F                  MOV ESI,dword ptr [EAX + 0xf]
0054F61F  8B FA                     MOV EDI,EDX
0054F621  8D 4C 31 1B               LEA ECX,[ECX + ESI*0x1 + 0x1b]
0054F625  8B F0                     MOV ESI,EAX
0054F627  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0054F62A  8B D9                     MOV EBX,ECX
0054F62C  C1 E9 02                  SHR ECX,0x2
0054F62F  F3 A5                     MOVSD.REP ES:EDI,ESI
0054F631  8B CB                     MOV ECX,EBX
0054F633  83 E1 03                  AND ECX,0x3
0054F636  F3 A4                     MOVSB.REP ES:EDI,ESI
0054F638  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054F63B  8B F3                     MOV ESI,EBX
0054F63D  03 D6                     ADD EDX,ESI
0054F63F  8B 49 3D                  MOV ECX,dword ptr [ECX + 0x3d]
0054F642  66 FF 41 05               INC word ptr [ECX + 0x5]
0054F646  8B 00                     MOV EAX,dword ptr [EAX]
0054F648  85 C0                     TEST EAX,EAX
0054F64A  75 CD                     JNZ 0x0054f619
0054F64C  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
LAB_0054f64f:
0054F64F  83 3B 00                  CMP dword ptr [EBX],0x0
0054F652  74 06                     JZ 0x0054f65a
0054F654  53                        PUSH EBX
0054F655  E8 36 A2 16 00            CALL 0x006b9890
LAB_0054f65a:
0054F65A  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054F661  0F 85 0E 01 00 00         JNZ 0x0054f775
0054F667  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054F66A  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F66D  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
0054F670  66 83 7A 05 00            CMP word ptr [EDX + 0x5],0x0
0054F675  75 7A                     JNZ 0x0054f6f1
0054F677  FE C0                     INC AL
0054F679  33 C9                     XOR ECX,ECX
0054F67B  88 46 4D                  MOV byte ptr [ESI + 0x4d],AL
0054F67E  8A 0D 3B 73 80 00         MOV CL,byte ptr [0x0080733b]
0054F684  8B F8                     MOV EDI,EAX
0054F686  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0054F689  81 E7 FF 00 00 00         AND EDI,0xff
0054F68F  39 3C CD EC 2A 7C 00      CMP dword ptr [ECX*0x8 + 0x7c2aec],EDI
0054F696  0F 8F D9 00 00 00         JG 0x0054f775
0054F69C  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054F6A3  75 38                     JNZ 0x0054f6dd
0054F6A5  88 42 04                  MOV byte ptr [EDX + 0x4],AL
0054F6A8  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F6AB  6A 07                     PUSH 0x7
0054F6AD  8B CE                     MOV ECX,ESI
0054F6AF  66 C7 42 05 00 00         MOV word ptr [EDX + 0x5],0x0
0054F6B5  8B 46 3D                  MOV EAX,dword ptr [ESI + 0x3d]
0054F6B8  50                        PUSH EAX
0054F6B9  E8 85 5D EB FF            CALL 0x00405443
0054F6BE  85 C0                     TEST EAX,EAX
0054F6C0  74 1B                     JZ 0x0054f6dd
0054F6C2  6A 00                     PUSH 0x0
0054F6C4  6A 07                     PUSH 0x7
LAB_0054f6c6:
0054F6C6  8B CE                     MOV ECX,ESI
0054F6C8  E8 20 63 EB FF            CALL 0x004059ed
0054F6CD  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F6D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F6D6  5F                        POP EDI
0054F6D7  5E                        POP ESI
0054F6D8  5B                        POP EBX
0054F6D9  8B E5                     MOV ESP,EBP
0054F6DB  5D                        POP EBP
0054F6DC  C3                        RET
LAB_0054f6dd:
0054F6DD  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F6E0  C6 46 4D 00               MOV byte ptr [ESI + 0x4d],0x0
0054F6E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F6EA  5F                        POP EDI
0054F6EB  5E                        POP ESI
0054F6EC  5B                        POP EBX
0054F6ED  8B E5                     MOV ESP,EBP
0054F6EF  5D                        POP EBP
0054F6F0  C3                        RET
LAB_0054f6f1:
0054F6F1  84 C0                     TEST AL,AL
0054F6F3  74 03                     JZ 0x0054f6f8
0054F6F5  88 42 04                  MOV byte ptr [EDX + 0x4],AL
LAB_0054f6f8:
0054F6F8  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054F6FF  75 DC                     JNZ 0x0054f6dd
0054F701  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0054F704  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
0054F707  51                        PUSH ECX
0054F708  52                        PUSH EDX
0054F709  8B CE                     MOV ECX,ESI
0054F70B  E8 33 5D EB FF            CALL 0x00405443
0054F710  85 C0                     TEST EAX,EAX
0054F712  74 C9                     JZ 0x0054f6dd
0054F714  6A 00                     PUSH 0x0
0054F716  6A 08                     PUSH 0x8
0054F718  EB AC                     JMP 0x0054f6c6
LAB_0054f71a:
0054F71A  33 F6                     XOR ESI,ESI
0054F71C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0054F71F  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0054F725  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054F72B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0054F72E  56                        PUSH ESI
0054F72F  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0054F732  6A FF                     PUSH -0x1
0054F734  50                        PUSH EAX
0054F735  6A FF                     PUSH -0x1
0054F737  51                        PUSH ECX
0054F738  E8 D3 7D 16 00            CALL 0x006b7510
0054F73D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0054F740  BF 01 00 00 00            MOV EDI,0x1
0054F745  39 73 6D                  CMP dword ptr [EBX + 0x6d],ESI
0054F748  0F 84 80 02 00 00         JZ 0x0054f9ce
0054F74E  39 73 71                  CMP dword ptr [EBX + 0x71],ESI
0054F751  0F 85 40 02 00 00         JNZ 0x0054f997
0054F757  B9 20 76 80 00            MOV ECX,0x807620
0054F75C  E8 4F 5A 19 00            CALL 0x006e51b0
0054F761  2B 43 79                  SUB EAX,dword ptr [EBX + 0x79]
0054F764  3D 30 75 00 00            CMP EAX,0x7530
0054F769  7E 1A                     JLE 0x0054f785
0054F76B  56                        PUSH ESI
0054F76C  6A 0A                     PUSH 0xa
LAB_0054f76e:
0054F76E  8B CB                     MOV ECX,EBX
0054F770  E8 78 62 EB FF            CALL 0x004059ed
LAB_0054f775:
0054F775  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F778  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F77E  5F                        POP EDI
0054F77F  5E                        POP ESI
0054F780  5B                        POP EBX
0054F781  8B E5                     MOV ESP,EBP
0054F783  5D                        POP EBP
0054F784  C3                        RET
LAB_0054f785:
0054F785  B9 20 76 80 00            MOV ECX,0x807620
0054F78A  E8 21 5A 19 00            CALL 0x006e51b0
0054F78F  8B D0                     MOV EDX,EAX
0054F791  8B 43 79                  MOV EAX,dword ptr [EBX + 0x79]
0054F794  2B D0                     SUB EDX,EAX
0054F796  0F BF 43 7D               MOVSX EAX,word ptr [EBX + 0x7d]
0054F79A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0054F79D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0054F7A0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0054F7A3  C1 E0 05                  SHL EAX,0x5
0054F7A6  3B D0                     CMP EDX,EAX
0054F7A8  7E 3E                     JLE 0x0054f7e8
0054F7AA  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054F7B0  57                        PUSH EDI
0054F7B1  51                        PUSH ECX
0054F7B2  E8 49 6D 16 00            CALL 0x006b6500
0054F7B7  A1 64 17 81 00            MOV EAX,[0x00811764]
0054F7BC  6A FF                     PUSH -0x1
0054F7BE  56                        PUSH ESI
0054F7BF  8D 53 41                  LEA EDX,[EBX + 0x41]
0054F7C2  6A 04                     PUSH 0x4
0054F7C4  52                        PUSH EDX
0054F7C5  6A 36                     PUSH 0x36
0054F7C7  57                        PUSH EDI
0054F7C8  50                        PUSH EAX
0054F7C9  E8 92 5B 1C 00            CALL 0x00715360
0054F7CE  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
0054F7D4  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054F7DA  83 C4 1C                  ADD ESP,0x1c
0054F7DD  51                        PUSH ECX
0054F7DE  52                        PUSH EDX
0054F7DF  E8 1C 6D 16 00            CALL 0x006b6500
0054F7E4  66 FF 43 7D               INC word ptr [EBX + 0x7d]
LAB_0054f7e8:
0054F7E8  8B 43 41                  MOV EAX,dword ptr [EBX + 0x41]
0054F7EB  8D 7B 41                  LEA EDI,[EBX + 0x41]
0054F7EE  6A 00                     PUSH 0x0
0054F7F0  8D 4D EC                  LEA ECX,[EBP + -0x14]
0054F7F3  50                        PUSH EAX
0054F7F4  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054F7F7  51                        PUSH ECX
0054F7F8  8D 45 E0                  LEA EAX,[EBP + -0x20]
0054F7FB  52                        PUSH EDX
0054F7FC  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054F802  8D 4D F0                  LEA ECX,[EBP + -0x10]
0054F805  50                        PUSH EAX
0054F806  51                        PUSH ECX
0054F807  6A 31                     PUSH 0x31
0054F809  52                        PUSH EDX
0054F80A  E8 21 5E 1C 00            CALL 0x00715630
0054F80F  8B F0                     MOV ESI,EAX
0054F811  8B 43 75                  MOV EAX,dword ptr [EBX + 0x75]
0054F814  83 C4 20                  ADD ESP,0x20
0054F817  85 C0                     TEST EAX,EAX
0054F819  0F 84 36 01 00 00         JZ 0x0054f955
0054F81F  83 FE 01                  CMP ESI,0x1
0054F822  C7 43 75 00 00 00 00      MOV dword ptr [EBX + 0x75],0x0
0054F829  0F 84 2B 01 00 00         JZ 0x0054f95a
0054F82F  A1 64 17 81 00            MOV EAX,[0x00811764]
0054F834  6A 01                     PUSH 0x1
0054F836  50                        PUSH EAX
0054F837  E8 C4 6C 16 00            CALL 0x006b6500
0054F83C  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054F842  6A FF                     PUSH -0x1
0054F844  6A 00                     PUSH 0x0
0054F846  6A 04                     PUSH 0x4
0054F848  57                        PUSH EDI
0054F849  6A 36                     PUSH 0x36
0054F84B  6A 01                     PUSH 0x1
0054F84D  51                        PUSH ECX
0054F84E  E8 0D 5B 1C 00            CALL 0x00715360
0054F853  83 C4 1C                  ADD ESP,0x1c
0054F856  85 C0                     TEST EAX,EAX
0054F858  74 09                     JZ 0x0054f863
0054F85A  6A 00                     PUSH 0x0
0054F85C  6A 10                     PUSH 0x10
0054F85E  E9 0B FF FF FF            JMP 0x0054f76e
LAB_0054f863:
0054F863  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
0054F869  A1 64 17 81 00            MOV EAX,[0x00811764]
0054F86E  52                        PUSH EDX
0054F86F  50                        PUSH EAX
0054F870  E8 8B 6C 16 00            CALL 0x006b6500
0054F875  80 BB BB 00 00 00 05      CMP byte ptr [EBX + 0xbb],0x5
0054F87C  0F 82 9C 00 00 00         JC 0x0054f91e
0054F882  8D B3 A7 00 00 00         LEA ESI,[EBX + 0xa7]
0054F888  8D 8B AB 00 00 00         LEA ECX,[EBX + 0xab]
0054F88E  8B D6                     MOV EDX,ESI
0054F890  8B 01                     MOV EAX,dword ptr [ECX]
0054F892  89 02                     MOV dword ptr [EDX],EAX
0054F894  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0054F897  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0054F89A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0054F89D  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0054F8A0  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0054F8A3  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0054F8A6  B9 20 76 80 00            MOV ECX,0x807620
0054F8AB  E8 00 59 19 00            CALL 0x006e51b0
0054F8B0  8B C8                     MOV ECX,EAX
0054F8B2  89 8B B7 00 00 00         MOV dword ptr [EBX + 0xb7],ECX
0054F8B8  A0 5E 73 80 00            MOV AL,[0x0080735e]
0054F8BD  84 C0                     TEST AL,AL
0054F8BF  0F 84 B0 FE FF FF         JZ 0x0054f775
0054F8C5  8B 16                     MOV EDX,dword ptr [ESI]
0054F8C7  B8 CD CC CC CC            MOV EAX,0xcccccccd
0054F8CC  2B CA                     SUB ECX,EDX
0054F8CE  F7 E1                     MUL ECX
0054F8D0  C1 EA 02                  SHR EDX,0x2
0054F8D3  81 FA B8 0B 00 00         CMP EDX,0xbb8
0054F8D9  0F 8F 96 FE FF FF         JG 0x0054f775
0054F8DF  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0054F8E4  85 C0                     TEST EAX,EAX
0054F8E6  74 1F                     JZ 0x0054f907
0054F8E8  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0054F8EE  6A 09                     PUSH 0x9
0054F8F0  52                        PUSH EDX
0054F8F1  68 68 42 00 00            PUSH 0x4268
0054F8F6  E8 45 08 16 00            CALL 0x006b0140
0054F8FB  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054F901  50                        PUSH EAX
0054F902  E8 D1 1B EB FF            CALL 0x004014d8
LAB_0054f907:
0054F907  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F90A  C6 83 BB 00 00 00 00      MOV byte ptr [EBX + 0xbb],0x0
0054F911  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F917  5F                        POP EDI
0054F918  5E                        POP ESI
0054F919  5B                        POP EBX
0054F91A  8B E5                     MOV ESP,EBP
0054F91C  5D                        POP EBP
0054F91D  C3                        RET
LAB_0054f91e:
0054F91E  B9 20 76 80 00            MOV ECX,0x807620
0054F923  E8 88 58 19 00            CALL 0x006e51b0
0054F928  33 C9                     XOR ECX,ECX
0054F92A  8A 8B BB 00 00 00         MOV CL,byte ptr [EBX + 0xbb]
0054F930  89 84 8B A7 00 00 00      MOV dword ptr [EBX + ECX*0x4 + 0xa7],EAX
0054F937  8A 83 BB 00 00 00         MOV AL,byte ptr [EBX + 0xbb]
0054F93D  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0054F940  FE C0                     INC AL
0054F942  88 83 BB 00 00 00         MOV byte ptr [EBX + 0xbb],AL
0054F948  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054F94E  5F                        POP EDI
0054F94F  5E                        POP ESI
0054F950  5B                        POP EBX
0054F951  8B E5                     MOV ESP,EBP
0054F953  5D                        POP EBP
0054F954  C3                        RET
LAB_0054f955:
0054F955  83 FE 01                  CMP ESI,0x1
0054F958  75 31                     JNZ 0x0054f98b
LAB_0054f95a:
0054F95A  A0 5E 73 80 00            MOV AL,[0x0080735e]
0054F95F  84 C0                     TEST AL,AL
0054F961  74 28                     JZ 0x0054f98b
0054F963  A1 D8 16 80 00            MOV EAX,[0x008016d8]
0054F968  85 C0                     TEST EAX,EAX
0054F96A  74 1F                     JZ 0x0054f98b
0054F96C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0054F972  6A 08                     PUSH 0x8
0054F974  52                        PUSH EDX
0054F975  68 6C 42 00 00            PUSH 0x426c
0054F97A  E8 C1 07 16 00            CALL 0x006b0140
0054F97F  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0054F985  50                        PUSH EAX
0054F986  E8 4D 1B EB FF            CALL 0x004014d8
LAB_0054f98b:
0054F98B  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0054F992  E9 9F 01 00 00            JMP 0x0054fb36
LAB_0054f997:
0054F997  8B CB                     MOV ECX,EBX
0054F999  E8 E5 42 EB FF            CALL 0x00403c83
0054F99E  85 C0                     TEST EAX,EAX
0054F9A0  0F 85 CF FD FF FF         JNZ 0x0054f775
0054F9A6  8D 45 DC                  LEA EAX,[EBP + -0x24]
0054F9A9  8B CB                     MOV ECX,EBX
0054F9AB  50                        PUSH EAX
0054F9AC  E8 3E 2C EB FF            CALL 0x004025ef
0054F9B1  85 C0                     TEST EAX,EAX
0054F9B3  0F 84 9B 02 00 00         JZ 0x0054fc54
0054F9B9  89 73 71                  MOV dword ptr [EBX + 0x71],ESI
0054F9BC  89 73 6D                  MOV dword ptr [EBX + 0x6d],ESI
0054F9BF  89 73 79                  MOV dword ptr [EBX + 0x79],ESI
0054F9C2  C7 45 F0 31 00 00 00      MOV dword ptr [EBP + -0x10],0x31
0054F9C9  E9 E9 01 00 00            JMP 0x0054fbb7
LAB_0054f9ce:
0054F9CE  8B CB                     MOV ECX,EBX
0054F9D0  E8 AE 42 EB FF            CALL 0x00403c83
0054F9D5  85 C0                     TEST EAX,EAX
0054F9D7  0F 85 98 FD FF FF         JNZ 0x0054f775
0054F9DD  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0054F9E0  83 F9 02                  CMP ECX,0x2
0054F9E3  0F 8E 80 00 00 00         JLE 0x0054fa69
0054F9E9  A1 54 76 80 00            MOV EAX,[0x00807654]
0054F9EE  83 F8 05                  CMP EAX,0x5
0054F9F1  7E 0A                     JLE 0x0054f9fd
0054F9F3  3B C6                     CMP EAX,ESI
0054F9F5  7E 06                     JLE 0x0054f9fd
0054F9F7  48                        DEC EAX
0054F9F8  A3 54 76 80 00            MOV [0x00807654],EAX
LAB_0054f9fd:
0054F9FD  8A 43 38                  MOV AL,byte ptr [EBX + 0x38]
0054FA00  84 C0                     TEST AL,AL
0054FA02  0F 85 CD 00 00 00         JNZ 0x0054fad5
0054FA08  83 F9 32                  CMP ECX,0x32
0054FA0B  7E 05                     JLE 0x0054fa12
0054FA0D  39 73 59                  CMP dword ptr [EBX + 0x59],ESI
0054FA10  74 09                     JZ 0x0054fa1b
LAB_0054fa12:
0054FA12  83 F9 64                  CMP ECX,0x64
0054FA15  0F 8E BA 00 00 00         JLE 0x0054fad5
LAB_0054fa1b:
0054FA1B  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054FA21  57                        PUSH EDI
0054FA22  51                        PUSH ECX
0054FA23  E8 D8 6A 16 00            CALL 0x006b6500
0054FA28  A1 64 17 81 00            MOV EAX,[0x00811764]
0054FA2D  6A FF                     PUSH -0x1
0054FA2F  56                        PUSH ESI
0054FA30  8D 55 EB                  LEA EDX,[EBP + -0x15]
0054FA33  57                        PUSH EDI
0054FA34  52                        PUSH EDX
0054FA35  6A 42                     PUSH 0x42
0054FA37  57                        PUSH EDI
0054FA38  50                        PUSH EAX
0054FA39  C6 45 EB 01               MOV byte ptr [EBP + -0x15],0x1
0054FA3D  E8 1E 59 1C 00            CALL 0x00715360
0054FA42  83 C4 1C                  ADD ESP,0x1c
0054FA45  85 C0                     TEST EAX,EAX
0054FA47  74 08                     JZ 0x0054fa51
0054FA49  56                        PUSH ESI
0054FA4A  6A 0B                     PUSH 0xb
0054FA4C  E9 1D FD FF FF            JMP 0x0054f76e
LAB_0054fa51:
0054FA51  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
0054FA57  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054FA5D  51                        PUSH ECX
0054FA5E  52                        PUSH EDX
0054FA5F  E8 9C 6A 16 00            CALL 0x006b6500
0054FA64  89 7B 59                  MOV dword ptr [EBX + 0x59],EDI
0054FA67  EB 6C                     JMP 0x0054fad5
LAB_0054fa69:
0054FA69  39 73 59                  CMP dword ptr [EBX + 0x59],ESI
0054FA6C  74 46                     JZ 0x0054fab4
0054FA6E  A1 64 17 81 00            MOV EAX,[0x00811764]
0054FA73  57                        PUSH EDI
0054FA74  50                        PUSH EAX
0054FA75  E8 86 6A 16 00            CALL 0x006b6500
0054FA7A  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054FA80  6A FF                     PUSH -0x1
0054FA82  56                        PUSH ESI
0054FA83  56                        PUSH ESI
0054FA84  56                        PUSH ESI
0054FA85  6A 43                     PUSH 0x43
0054FA87  57                        PUSH EDI
0054FA88  51                        PUSH ECX
0054FA89  E8 D2 58 1C 00            CALL 0x00715360
0054FA8E  83 C4 1C                  ADD ESP,0x1c
0054FA91  85 C0                     TEST EAX,EAX
0054FA93  74 08                     JZ 0x0054fa9d
0054FA95  56                        PUSH ESI
0054FA96  6A 0C                     PUSH 0xc
0054FA98  E9 D1 FC FF FF            JMP 0x0054f76e
LAB_0054fa9d:
0054FA9D  8B 15 3C 73 80 00         MOV EDX,dword ptr [0x0080733c]
0054FAA3  A1 64 17 81 00            MOV EAX,[0x00811764]
0054FAA8  52                        PUSH EDX
0054FAA9  50                        PUSH EAX
0054FAAA  E8 51 6A 16 00            CALL 0x006b6500
0054FAAF  89 73 59                  MOV dword ptr [EBX + 0x59],ESI
0054FAB2  EB 21                     JMP 0x0054fad5
LAB_0054fab4:
0054FAB4  33 C0                     XOR EAX,EAX
0054FAB6  8B 15 54 76 80 00         MOV EDX,dword ptr [0x00807654]
0054FABC  A0 3B 73 80 00            MOV AL,[0x0080733b]
0054FAC1  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0054FAC4  3B 14 CD F4 2A 7C 00      CMP EDX,dword ptr [ECX*0x8 + 0x7c2af4]
0054FACB  7D 08                     JGE 0x0054fad5
0054FACD  8B C2                     MOV EAX,EDX
0054FACF  40                        INC EAX
0054FAD0  A3 54 76 80 00            MOV [0x00807654],EAX
LAB_0054fad5:
0054FAD5  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_0054fad8:
0054FAD8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054FADB  85 C0                     TEST EAX,EAX
0054FADD  0F 84 92 FC FF FF         JZ 0x0054f775
0054FAE3  8B 43 6D                  MOV EAX,dword ptr [EBX + 0x6d]
0054FAE6  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0054FAED  85 C0                     TEST EAX,EAX
0054FAEF  74 1F                     JZ 0x0054fb10
0054FAF1  6A 01                     PUSH 0x1
0054FAF3  8D 45 EC                  LEA EAX,[EBP + -0x14]
0054FAF6  6A FF                     PUSH -0x1
0054FAF8  8D 4D FC                  LEA ECX,[EBP + -0x4]
0054FAFB  50                        PUSH EAX
0054FAFC  8D 55 E0                  LEA EDX,[EBP + -0x20]
0054FAFF  51                        PUSH ECX
0054FB00  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054FB06  8D 45 F0                  LEA EAX,[EBP + -0x10]
0054FB09  52                        PUSH EDX
0054FB0A  50                        PUSH EAX
0054FB0B  6A 31                     PUSH 0x31
0054FB0D  51                        PUSH ECX
0054FB0E  EB 1C                     JMP 0x0054fb2c
LAB_0054fb10:
0054FB10  6A 00                     PUSH 0x0
0054FB12  8D 55 EC                  LEA EDX,[EBP + -0x14]
0054FB15  6A FF                     PUSH -0x1
0054FB17  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054FB1A  52                        PUSH EDX
0054FB1B  8D 4D E0                  LEA ECX,[EBP + -0x20]
0054FB1E  50                        PUSH EAX
0054FB1F  A1 64 17 81 00            MOV EAX,[0x00811764]
0054FB24  8D 55 F0                  LEA EDX,[EBP + -0x10]
0054FB27  51                        PUSH ECX
0054FB28  52                        PUSH EDX
0054FB29  6A FF                     PUSH -0x1
0054FB2B  50                        PUSH EAX
LAB_0054fb2c:
0054FB2C  E8 FF 5A 1C 00            CALL 0x00715630
0054FB31  83 C4 20                  ADD ESP,0x20
0054FB34  8B F0                     MOV ESI,EAX
LAB_0054fb36:
0054FB36  83 FE B3                  CMP ESI,-0x4d
0054FB39  0F 84 B9 01 00 00         JZ 0x0054fcf8
0054FB3F  85 F6                     TEST ESI,ESI
0054FB41  0F 84 8B 01 00 00         JZ 0x0054fcd2
0054FB47  83 FE 01                  CMP ESI,0x1
0054FB4A  75 8C                     JNZ 0x0054fad8
0054FB4C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0054FB4F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0054FB52  83 F8 31                  CMP EAX,0x31
0054FB55  89 8B 83 00 00 00         MOV dword ptr [EBX + 0x83],ECX
0054FB5B  75 04                     JNZ 0x0054fb61
0054FB5D  C6 43 38 00               MOV byte ptr [EBX + 0x38],0x0
LAB_0054fb61:
0054FB61  83 C0 F0                  ADD EAX,-0x10
0054FB64  83 F8 34                  CMP EAX,0x34
0054FB67  0F 87 45 01 00 00         JA 0x0054fcb2
0054FB6D  33 D2                     XOR EDX,EDX
0054FB6F  8A 90 C4 FD 54 00         MOV DL,byte ptr [EAX + 0x54fdc4]
switchD_0054fb75::switchD:
0054FB75  FF 24 95 A4 FD 54 00      JMP dword ptr [EDX*0x4 + 0x54fda4]
switchD_0054fb75::caseD_31:
0054FB7C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0054FB7F  8B 43 45                  MOV EAX,dword ptr [EBX + 0x45]
0054FB82  3B C8                     CMP ECX,EAX
0054FB84  7E 13                     JLE 0x0054fb99
0054FB86  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
0054FB89  51                        PUSH ECX
0054FB8A  50                        PUSH EAX
0054FB8B  E8 C0 D3 15 00            CALL 0x006acf50
0054FB90  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0054FB93  89 43 3D                  MOV dword ptr [EBX + 0x3d],EAX
0054FB96  89 4B 45                  MOV dword ptr [EBX + 0x45],ECX
LAB_0054fb99:
0054FB99  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0054FB9C  8B 7B 3D                  MOV EDI,dword ptr [EBX + 0x3d]
0054FB9F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0054FBA2  8B D1                     MOV EDX,ECX
0054FBA4  C1 E9 02                  SHR ECX,0x2
0054FBA7  F3 A5                     MOVSD.REP ES:EDI,ESI
0054FBA9  8B CA                     MOV ECX,EDX
0054FBAB  83 E1 03                  AND ECX,0x3
0054FBAE  F3 A4                     MOVSB.REP ES:EDI,ESI
0054FBB0  BF 01 00 00 00            MOV EDI,0x1
0054FBB5  33 F6                     XOR ESI,ESI
LAB_0054fbb7:
0054FBB7  8B 43 3D                  MOV EAX,dword ptr [EBX + 0x3d]
0054FBBA  8B 4B 41                  MOV ECX,dword ptr [EBX + 0x41]
0054FBBD  8B 10                     MOV EDX,dword ptr [EAX]
0054FBBF  3B D1                     CMP EDX,ECX
0054FBC1  73 09                     JNC 0x0054fbcc
0054FBC3  66 89 70 05               MOV word ptr [EAX + 0x5],SI
0054FBC7  E9 ED 00 00 00            JMP 0x0054fcb9
LAB_0054fbcc:
0054FBCC  76 46                     JBE 0x0054fc14
0054FBCE  39 73 6D                  CMP dword ptr [EBX + 0x6d],ESI
0054FBD1  74 0F                     JZ 0x0054fbe2
0054FBD3  56                        PUSH ESI
0054FBD4  6A 0F                     PUSH 0xf
0054FBD6  8B CB                     MOV ECX,EBX
0054FBD8  E8 10 5E EB FF            CALL 0x004059ed
0054FBDD  E9 D7 00 00 00            JMP 0x0054fcb9
LAB_0054fbe2:
0054FBE2  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0054FBE5  51                        PUSH ECX
0054FBE6  50                        PUSH EAX
0054FBE7  8B CB                     MOV ECX,EBX
0054FBE9  E8 0E 4A EB FF            CALL 0x004045fc
0054FBEE  8B 53 3D                  MOV EDX,dword ptr [EBX + 0x3d]
0054FBF1  B9 20 76 80 00            MOV ECX,0x807620
0054FBF6  66 89 72 05               MOV word ptr [EDX + 0x5],SI
0054FBFA  89 7B 6D                  MOV dword ptr [EBX + 0x6d],EDI
0054FBFD  89 73 71                  MOV dword ptr [EBX + 0x71],ESI
0054FC00  89 7B 75                  MOV dword ptr [EBX + 0x75],EDI
0054FC03  E8 A8 55 19 00            CALL 0x006e51b0
0054FC08  89 43 79                  MOV dword ptr [EBX + 0x79],EAX
0054FC0B  66 89 7B 7D               MOV word ptr [EBX + 0x7d],DI
0054FC0F  E9 A5 00 00 00            JMP 0x0054fcb9
LAB_0054fc14:
0054FC14  39 73 6D                  CMP dword ptr [EBX + 0x6d],ESI
0054FC17  74 03                     JZ 0x0054fc1c
0054FC19  89 7B 71                  MOV dword ptr [EBX + 0x71],EDI
LAB_0054fc1c:
0054FC1C  41                        INC ECX
0054FC1D  89 4B 41                  MOV dword ptr [EBX + 0x41],ECX
0054FC20  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0054FC23  84 C9                     TEST CL,CL
0054FC25  0F 84 8E 00 00 00         JZ 0x0054fcb9
0054FC2B  66 8B 48 05               MOV CX,word ptr [EAX + 0x5]
0054FC2F  66 89 4B 57               MOV word ptr [EBX + 0x57],CX
0054FC33  66 89 70 05               MOV word ptr [EAX + 0x5],SI
0054FC37  8B 53 3D                  MOV EDX,dword ptr [EBX + 0x3d]
0054FC3A  8D 43 49                  LEA EAX,[EBX + 0x49]
0054FC3D  8B 0A                     MOV ECX,dword ptr [EDX]
0054FC3F  89 08                     MOV dword ptr [EAX],ECX
0054FC41  8B CB                     MOV ECX,EBX
0054FC43  8A 52 04                  MOV DL,byte ptr [EDX + 0x4]
0054FC46  88 50 04                  MOV byte ptr [EAX + 0x4],DL
0054FC49  C6 43 4E 00               MOV byte ptr [EBX + 0x4e],0x0
0054FC4D  E8 31 40 EB FF            CALL 0x00403c83
0054FC52  EB 65                     JMP 0x0054fcb9
switchD_0054fb75::caseD_37:
0054FC54  6A 00                     PUSH 0x0
0054FC56  6A 11                     PUSH 0x11
0054FC58  8B CB                     MOV ECX,EBX
0054FC5A  E8 8E 5D EB FF            CALL 0x004059ed
0054FC5F  EB 58                     JMP 0x0054fcb9
switchD_0054fb75::caseD_33:
0054FC61  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054FC64  8B CB                     MOV ECX,EBX
0054FC66  50                        PUSH EAX
0054FC67  E8 77 49 EB FF            CALL 0x004045e3
0054FC6C  EB 44                     JMP 0x0054fcb2
switchD_0054fb75::caseD_11:
0054FC6E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0054FC71  6A 01                     PUSH 0x1
0054FC73  68 6F 42 00 00            PUSH 0x426f
0054FC78  51                        PUSH ECX
0054FC79  8B CB                     MOV ECX,EBX
0054FC7B  E8 07 23 EB FF            CALL 0x00401f87
0054FC80  EB 30                     JMP 0x0054fcb2
switchD_0054fb75::caseD_10:
0054FC82  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
0054FC88  C7 05 0A C5 80 00 00 00 00 00  MOV dword ptr [0x0080c50a],0x0
0054FC92  85 C9                     TEST ECX,ECX
0054FC94  C7 05 12 C5 80 00 01 00 00 00  MOV dword ptr [0x0080c512],0x1
0054FC9E  74 19                     JZ 0x0054fcb9
0054FCA0  6A 00                     PUSH 0x0
0054FCA2  6A 0B                     PUSH 0xb
0054FCA4  E8 4E 62 EB FF            CALL 0x00405ef7
0054FCA9  EB 0E                     JMP 0x0054fcb9
switchD_0054fb75::caseD_44:
0054FCAB  C7 43 59 00 00 00 00      MOV dword ptr [EBX + 0x59],0x0
switchD_0054fb75::caseD_12:
0054FCB2  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
switchD_0054fb75::caseD_34:
0054FCB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054FCBC  85 C0                     TEST EAX,EAX
0054FCBE  0F 84 14 FE FF FF         JZ 0x0054fad8
0054FCC4  8D 55 FC                  LEA EDX,[EBP + -0x4]
0054FCC7  52                        PUSH EDX
0054FCC8  E8 93 B3 15 00            CALL 0x006ab060
0054FCCD  E9 06 FE FF FF            JMP 0x0054fad8
LAB_0054fcd2:
0054FCD2  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0054FCD5  8B 93 83 00 00 00         MOV EDX,dword ptr [EBX + 0x83]
0054FCDB  2B C2                     SUB EAX,EDX
0054FCDD  3D 60 EA 00 00            CMP EAX,0xea60
0054FCE2  0F 8E F0 FD FF FF         JLE 0x0054fad8
0054FCE8  6A 00                     PUSH 0x0
0054FCEA  6A 0D                     PUSH 0xd
0054FCEC  8B CB                     MOV ECX,EBX
0054FCEE  E8 FA 5C EB FF            CALL 0x004059ed
0054FCF3  E9 E0 FD FF FF            JMP 0x0054fad8
LAB_0054fcf8:
0054FCF8  6A 00                     PUSH 0x0
0054FCFA  6A 0E                     PUSH 0xe
0054FCFC  8B CB                     MOV ECX,EBX
0054FCFE  E8 EA 5C EB FF            CALL 0x004059ed
0054FD03  E9 D0 FD FF FF            JMP 0x0054fad8
LAB_0054fd08:
0054FD08  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0054FD0B  68 DC 85 7C 00            PUSH 0x7c85dc
0054FD10  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054FD15  56                        PUSH ESI
0054FD16  57                        PUSH EDI
0054FD17  68 42 07 00 00            PUSH 0x742
0054FD1C  68 30 84 7C 00            PUSH 0x7c8430
0054FD21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054FD27  E8 A4 D7 15 00            CALL 0x006ad4d0
0054FD2C  83 C4 18                  ADD ESP,0x18
0054FD2F  85 C0                     TEST EAX,EAX
0054FD31  74 01                     JZ 0x0054fd34
0054FD33  CC                        INT3
LAB_0054fd34:
0054FD34  68 44 07 00 00            PUSH 0x744
0054FD39  68 30 84 7C 00            PUSH 0x7c8430
0054FD3E  57                        PUSH EDI
0054FD3F  56                        PUSH ESI
0054FD40  E8 FB 60 15 00            CALL 0x006a5e40
0054FD45  5F                        POP EDI
0054FD46  5E                        POP ESI
0054FD47  5B                        POP EBX
0054FD48  8B E5                     MOV ESP,EBP
0054FD4A  5D                        POP EBP
0054FD4B  C3                        RET
