FUN_006db1f0:
006DB1F0  55                        PUSH EBP
006DB1F1  8B EC                     MOV EBP,ESP
006DB1F3  53                        PUSH EBX
006DB1F4  56                        PUSH ESI
006DB1F5  57                        PUSH EDI
006DB1F6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DB1F9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DB1FC  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006DB1FF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB202  F7 C7 02 00 00 00         TEST EDI,0x2
006DB208  0F 84 94 00 00 00         JZ 0x006db2a2
LAB_006db20e:
006DB20E  2B C0                     SUB EAX,EAX
006DB210  8A 06                     MOV AL,byte ptr [ESI]
006DB212  66 8B 04 43               MOV AX,word ptr [EBX + EAX*0x2]
006DB216  8B D0                     MOV EDX,EAX
006DB218  46                        INC ESI
006DB219  66 89 07                  MOV word ptr [EDI],AX
006DB21C  83 C7 02                  ADD EDI,0x2
006DB21F  49                        DEC ECX
006DB220  7E 18                     JLE 0x006db23a
006DB222  C1 E0 10                  SHL EAX,0x10
LAB_006db225:
006DB225  2B D2                     SUB EDX,EDX
006DB227  8A 16                     MOV DL,byte ptr [ESI]
006DB229  66 8B 14 53               MOV DX,word ptr [EBX + EDX*0x2]
006DB22D  0F AC D0 10               SHRD EAX,EDX,0x10
006DB231  46                        INC ESI
006DB232  89 07                     MOV dword ptr [EDI],EAX
006DB234  83 C7 04                  ADD EDI,0x4
006DB237  49                        DEC ECX
006DB238  7F EB                     JG 0x006db225
LAB_006db23a:
006DB23A  66 89 17                  MOV word ptr [EDI],DX
006DB23D  83 C7 02                  ADD EDI,0x2
006DB240  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB243  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB246  2B F1                     SUB ESI,ECX
006DB248  F7 D9                     NEG ECX
006DB24A  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB24D  F7 D9                     NEG ECX
006DB24F  2B C0                     SUB EAX,EAX
006DB251  8A 06                     MOV AL,byte ptr [ESI]
006DB253  66 8B 04 43               MOV AX,word ptr [EBX + EAX*0x2]
006DB257  8B D0                     MOV EDX,EAX
006DB259  46                        INC ESI
006DB25A  66 89 07                  MOV word ptr [EDI],AX
006DB25D  83 C7 02                  ADD EDI,0x2
006DB260  49                        DEC ECX
006DB261  7E 18                     JLE 0x006db27b
006DB263  C1 E0 10                  SHL EAX,0x10
LAB_006db266:
006DB266  2B D2                     SUB EDX,EDX
006DB268  8A 16                     MOV DL,byte ptr [ESI]
006DB26A  66 8B 14 53               MOV DX,word ptr [EBX + EDX*0x2]
006DB26E  0F AC D0 10               SHRD EAX,EDX,0x10
006DB272  46                        INC ESI
006DB273  89 07                     MOV dword ptr [EDI],EAX
006DB275  83 C7 04                  ADD EDI,0x4
006DB278  49                        DEC ECX
006DB279  7F EB                     JG 0x006db266
LAB_006db27b:
006DB27B  66 89 17                  MOV word ptr [EDI],DX
006DB27E  83 C7 02                  ADD EDI,0x2
006DB281  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB284  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB287  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB28A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB28D  2B F1                     SUB ESI,ECX
006DB28F  F7 D9                     NEG ECX
006DB291  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB294  F7 D9                     NEG ECX
006DB296  48                        DEC EAX
006DB297  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB29A  0F 8F 6E FF FF FF         JG 0x006db20e
006DB2A0  EB 5A                     JMP 0x006db2fc
LAB_006db2a2:
006DB2A2  2B D2                     SUB EDX,EDX
006DB2A4  8A 16                     MOV DL,byte ptr [ESI]
006DB2A6  66 8B 04 53               MOV AX,word ptr [EBX + EDX*0x2]
006DB2AA  C1 E0 10                  SHL EAX,0x10
006DB2AD  66 8B 04 53               MOV AX,word ptr [EBX + EDX*0x2]
006DB2B1  46                        INC ESI
006DB2B2  89 07                     MOV dword ptr [EDI],EAX
006DB2B4  83 C7 04                  ADD EDI,0x4
006DB2B7  49                        DEC ECX
006DB2B8  7F E8                     JG 0x006db2a2
006DB2BA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB2BD  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB2C0  2B F1                     SUB ESI,ECX
006DB2C2  F7 D9                     NEG ECX
006DB2C4  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB2C7  F7 D9                     NEG ECX
LAB_006db2c9:
006DB2C9  2B D2                     SUB EDX,EDX
006DB2CB  8A 16                     MOV DL,byte ptr [ESI]
006DB2CD  66 8B 04 53               MOV AX,word ptr [EBX + EDX*0x2]
006DB2D1  C1 E0 10                  SHL EAX,0x10
006DB2D4  66 8B 04 53               MOV AX,word ptr [EBX + EDX*0x2]
006DB2D8  46                        INC ESI
006DB2D9  89 07                     MOV dword ptr [EDI],EAX
006DB2DB  83 C7 04                  ADD EDI,0x4
006DB2DE  49                        DEC ECX
006DB2DF  7F E8                     JG 0x006db2c9
006DB2E1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DB2E4  03 75 14                  ADD ESI,dword ptr [EBP + 0x14]
006DB2E7  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DB2EA  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DB2ED  2B F1                     SUB ESI,ECX
006DB2EF  F7 D9                     NEG ECX
006DB2F1  8D 3C 8F                  LEA EDI,[EDI + ECX*0x4]
006DB2F4  F7 D9                     NEG ECX
006DB2F6  48                        DEC EAX
006DB2F7  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006DB2FA  7F A6                     JG 0x006db2a2
LAB_006db2fc:
006DB2FC  5F                        POP EDI
006DB2FD  5E                        POP ESI
006DB2FE  5B                        POP EBX
006DB2FF  5D                        POP EBP
006DB300  C2 1C 00                  RET 0x1c
