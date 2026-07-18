STAllPlayersC::CalibrateTmp:
0044B280  55                        PUSH EBP
0044B281  8B EC                     MOV EBP,ESP
0044B283  83 EC 58                  SUB ESP,0x58
0044B286  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0044B28B  53                        PUSH EBX
0044B28C  56                        PUSH ESI
0044B28D  57                        PUSH EDI
0044B28E  33 FF                     XOR EDI,EDI
0044B290  8D 55 AC                  LEA EDX,[EBP + -0x54]
0044B293  8D 4D A8                  LEA ECX,[EBP + -0x58]
0044B296  57                        PUSH EDI
0044B297  52                        PUSH EDX
0044B298  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0044B29B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0044B29E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0044B2A1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044B2A7  E8 44 25 2E 00            CALL 0x0072d7f0
0044B2AC  8B F0                     MOV ESI,EAX
0044B2AE  83 C4 08                  ADD ESP,0x8
0044B2B1  3B F7                     CMP ESI,EDI
0044B2B3  0F 85 2C 02 00 00         JNZ 0x0044b4e5
0044B2B9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0044B2BC  3B C7                     CMP EAX,EDI
0044B2BE  74 0A                     JZ 0x0044b2ca
0044B2C0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0044B2C3  3B C7                     CMP EAX,EDI
0044B2C5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0044B2C8  75 1A                     JNZ 0x0044b2e4
LAB_0044b2ca:
0044B2CA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044B2CF  68 75 30 00 00            PUSH 0x3075
0044B2D4  68 04 60 7A 00            PUSH 0x7a6004
0044B2D9  50                        PUSH EAX
0044B2DA  68 09 00 FE AF            PUSH 0xaffe0009
0044B2DF  E8 5C AB 25 00            CALL 0x006a5e40
LAB_0044b2e4:
0044B2E4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044B2E7  2B C7                     SUB EAX,EDI
0044B2E9  74 64                     JZ 0x0044b34f
0044B2EB  48                        DEC EAX
0044B2EC  74 40                     JZ 0x0044b32e
0044B2EE  68 50 89 7A 00            PUSH 0x7a8950
0044B2F3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044B2F8  57                        PUSH EDI
0044B2F9  57                        PUSH EDI
0044B2FA  68 79 30 00 00            PUSH 0x3079
0044B2FF  68 04 60 7A 00            PUSH 0x7a6004
0044B304  E8 C7 21 26 00            CALL 0x006ad4d0
0044B309  83 C4 18                  ADD ESP,0x18
0044B30C  85 C0                     TEST EAX,EAX
0044B30E  74 01                     JZ 0x0044b311
0044B310  CC                        INT3
LAB_0044b311:
0044B311  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0044B317  68 7A 30 00 00            PUSH 0x307a
0044B31C  68 04 60 7A 00            PUSH 0x7a6004
0044B321  51                        PUSH ECX
0044B322  68 09 00 FE AF            PUSH 0xaffe0009
0044B327  E8 14 AB 25 00            CALL 0x006a5e40
0044B32C  EB 43                     JMP 0x0044b371
LAB_0044b32e:
0044B32E  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044B332  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044B335  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0044B338  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0044B33B  C1 E2 04                  SHL EDX,0x4
0044B33E  03 D0                     ADD EDX,EAX
0044B340  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B343  C1 E0 04                  SHL EAX,0x4
0044B346  8B 8C 50 DD 4F 7F 00      MOV ECX,dword ptr [EAX + EDX*0x2 + 0x7f4fdd]
0044B34D  EB 1F                     JMP 0x0044b36e
LAB_0044b34f:
0044B34F  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0044B353  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0044B356  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0044B359  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0044B35C  C1 E2 04                  SHL EDX,0x4
0044B35F  03 D0                     ADD EDX,EAX
0044B361  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044B364  C1 E0 04                  SHL EAX,0x4
0044B367  8B 8C 50 8D 4F 7F 00      MOV ECX,dword ptr [EAX + EDX*0x2 + 0x7f4f8d]
LAB_0044b36e:
0044B36E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_0044b371:
0044B371  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0044B374  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0044B377  3B DF                     CMP EBX,EDI
0044B379  75 1A                     JNZ 0x0044b395
0044B37B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044B380  68 7C 30 00 00            PUSH 0x307c
0044B385  68 04 60 7A 00            PUSH 0x7a6004
0044B38A  50                        PUSH EAX
0044B38B  68 09 00 FE AF            PUSH 0xaffe0009
0044B390  E8 AB AA 25 00            CALL 0x006a5e40
LAB_0044b395:
0044B395  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0044B398  3B C7                     CMP EAX,EDI
0044B39A  74 14                     JZ 0x0044b3b0
0044B39C  39 38                     CMP dword ptr [EAX],EDI
0044B39E  75 10                     JNZ 0x0044b3b0
0044B3A0  6A 01                     PUSH 0x1
0044B3A2  6A 02                     PUSH 0x2
0044B3A4  57                        PUSH EDI
0044B3A5  57                        PUSH EDI
0044B3A6  E8 E5 2E 26 00            CALL 0x006ae290
0044B3AB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0044B3AE  89 01                     MOV dword ptr [ECX],EAX
LAB_0044b3b0:
0044B3B0  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0044B3B3  85 FF                     TEST EDI,EDI
0044B3B5  74 14                     JZ 0x0044b3cb
0044B3B7  83 3F 00                  CMP dword ptr [EDI],0x0
0044B3BA  75 0F                     JNZ 0x0044b3cb
0044B3BC  6A 01                     PUSH 0x1
0044B3BE  6A 02                     PUSH 0x2
0044B3C0  6A 00                     PUSH 0x0
0044B3C2  6A 00                     PUSH 0x0
0044B3C4  E8 C7 2E 26 00            CALL 0x006ae290
0044B3C9  89 07                     MOV dword ptr [EDI],EAX
LAB_0044b3cb:
0044B3CB  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0044B3CE  85 F6                     TEST ESI,ESI
0044B3D0  74 14                     JZ 0x0044b3e6
0044B3D2  83 3E 00                  CMP dword ptr [ESI],0x0
0044B3D5  75 0F                     JNZ 0x0044b3e6
0044B3D7  6A 01                     PUSH 0x1
0044B3D9  6A 02                     PUSH 0x2
0044B3DB  6A 00                     PUSH 0x0
0044B3DD  6A 00                     PUSH 0x0
0044B3DF  E8 AC 2E 26 00            CALL 0x006ae290
0044B3E4  89 06                     MOV dword ptr [ESI],EAX
LAB_0044b3e6:
0044B3E6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0044B3E9  85 C0                     TEST EAX,EAX
0044B3EB  75 23                     JNZ 0x0044b410
0044B3ED  85 FF                     TEST EDI,EDI
0044B3EF  75 1F                     JNZ 0x0044b410
0044B3F1  85 F6                     TEST ESI,ESI
0044B3F3  75 1B                     JNZ 0x0044b410
0044B3F5  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044B3FB  68 80 30 00 00            PUSH 0x3080
0044B400  68 04 60 7A 00            PUSH 0x7a6004
0044B405  52                        PUSH EDX
0044B406  68 09 00 FE AF            PUSH 0xaffe0009
0044B40B  E8 30 AA 25 00            CALL 0x006a5e40
LAB_0044b410:
0044B410  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0044B413  8D 4D F4                  LEA ECX,[EBP + -0xc]
0044B416  E8 25 4A 26 00            CALL 0x006afe40
0044B41B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0044B41E  8D 4D F8                  LEA ECX,[EBP + -0x8]
0044B421  E8 1A 4A 26 00            CALL 0x006afe40
0044B426  33 FF                     XOR EDI,EDI
0044B428  85 DB                     TEST EBX,EBX
0044B42A  7E 78                     JLE 0x0044b4a4
LAB_0044b42c:
0044B42C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0044B42F  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044B432  50                        PUSH EAX
0044B433  8B D7                     MOV EDX,EDI
0044B435  E8 36 18 26 00            CALL 0x006acc70
0044B43A  66 81 7D FC FF FF         CMP word ptr [EBP + -0x4],0xffff
0044B440  74 5D                     JZ 0x0044b49f
0044B442  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044B445  33 F6                     XOR ESI,ESI
0044B447  85 C0                     TEST EAX,EAX
0044B449  7E 51                     JLE 0x0044b49c
LAB_0044b44b:
0044B44B  8D 4D FE                  LEA ECX,[EBP + -0x2]
0044B44E  8B D6                     MOV EDX,ESI
0044B450  51                        PUSH ECX
0044B451  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044B454  E8 17 18 26 00            CALL 0x006acc70
0044B459  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0044B45D  66 3B 55 FE               CMP DX,word ptr [EBP + -0x2]
0044B461  75 31                     JNZ 0x0044b494
0044B463  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0044B466  85 C0                     TEST EAX,EAX
0044B468  74 0C                     JZ 0x0044b476
0044B46A  8B 10                     MOV EDX,dword ptr [EAX]
0044B46C  8D 4D FE                  LEA ECX,[EBP + -0x2]
0044B46F  51                        PUSH ECX
0044B470  52                        PUSH EDX
0044B471  E8 4A 2D 26 00            CALL 0x006ae1c0
LAB_0044b476:
0044B476  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0044B479  57                        PUSH EDI
0044B47A  50                        PUSH EAX
0044B47B  E8 F0 57 26 00            CALL 0x006b0c70
0044B480  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0044B483  56                        PUSH ESI
0044B484  4B                        DEC EBX
0044B485  51                        PUSH ECX
0044B486  4F                        DEC EDI
0044B487  E8 E4 57 26 00            CALL 0x006b0c70
0044B48C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0044B48F  49                        DEC ECX
0044B490  4E                        DEC ESI
0044B491  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0044b494:
0044B494  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0044B497  46                        INC ESI
0044B498  3B F0                     CMP ESI,EAX
0044B49A  7C AF                     JL 0x0044b44b
LAB_0044b49c:
0044B49C  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
LAB_0044b49f:
0044B49F  47                        INC EDI
0044B4A0  3B FB                     CMP EDI,EBX
0044B4A2  7C 88                     JL 0x0044b42c
LAB_0044b4a4:
0044B4A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0044B4A7  85 C9                     TEST ECX,ECX
0044B4A9  74 08                     JZ 0x0044b4b3
0044B4AB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044B4AE  E8 8D 49 26 00            CALL 0x006afe40
LAB_0044b4b3:
0044B4B3  85 F6                     TEST ESI,ESI
0044B4B5  74 0A                     JZ 0x0044b4c1
0044B4B7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044B4BA  8B CE                     MOV ECX,ESI
0044B4BC  E8 7F 49 26 00            CALL 0x006afe40
LAB_0044b4c1:
0044B4C1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044B4C4  52                        PUSH EDX
0044B4C5  E8 46 2C 26 00            CALL 0x006ae110
0044B4CA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0044B4CD  50                        PUSH EAX
0044B4CE  E8 3D 2C 26 00            CALL 0x006ae110
0044B4D3  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0044B4D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044B4DC  5F                        POP EDI
0044B4DD  5E                        POP ESI
0044B4DE  5B                        POP EBX
0044B4DF  8B E5                     MOV ESP,EBP
0044B4E1  5D                        POP EBP
0044B4E2  C2 1C 00                  RET 0x1c
LAB_0044b4e5:
0044B4E5  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0044B4E8  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0044B4EE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044B4F4  74 34                     JZ 0x0044b52a
0044B4F6  68 2C 89 7A 00            PUSH 0x7a892c
0044B4FB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044B500  56                        PUSH ESI
0044B501  57                        PUSH EDI
0044B502  68 95 30 00 00            PUSH 0x3095
0044B507  68 04 60 7A 00            PUSH 0x7a6004
0044B50C  E8 BF 1F 26 00            CALL 0x006ad4d0
0044B511  83 C4 18                  ADD ESP,0x18
0044B514  85 C0                     TEST EAX,EAX
0044B516  74 01                     JZ 0x0044b519
0044B518  CC                        INT3
LAB_0044b519:
0044B519  68 96 30 00 00            PUSH 0x3096
0044B51E  68 04 60 7A 00            PUSH 0x7a6004
0044B523  57                        PUSH EDI
0044B524  56                        PUSH ESI
0044B525  E8 16 A9 25 00            CALL 0x006a5e40
LAB_0044b52a:
0044B52A  5F                        POP EDI
0044B52B  5E                        POP ESI
0044B52C  5B                        POP EBX
0044B52D  8B E5                     MOV ESP,EBP
0044B52F  5D                        POP EBP
0044B530  C2 1C 00                  RET 0x1c
