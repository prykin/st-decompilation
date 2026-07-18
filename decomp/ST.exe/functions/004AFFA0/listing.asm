FUN_004affa0:
004AFFA0  55                        PUSH EBP
004AFFA1  8B EC                     MOV EBP,ESP
004AFFA3  83 EC 14                  SUB ESP,0x14
004AFFA6  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004AFFAB  56                        PUSH ESI
004AFFAC  33 F6                     XOR ESI,ESI
004AFFAE  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
004AFFB5  85 C0                     TEST EAX,EAX
004AFFB7  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004AFFBA  0F 84 AF 01 00 00         JZ 0x004b016f
004AFFC0  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
004AFFC3  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004AFFC9  8D 55 F4                  LEA EDX,[EBP + -0xc]
004AFFCC  E8 BF 11 20 00            CALL 0x006b1190
004AFFD1  85 C0                     TEST EAX,EAX
004AFFD3  0F 8C 96 01 00 00         JL 0x004b016f
004AFFD9  53                        PUSH EBX
004AFFDA  57                        PUSH EDI
LAB_004affdb:
004AFFDB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004AFFDE  85 C9                     TEST ECX,ECX
004AFFE0  0F 84 6A 01 00 00         JZ 0x004b0150
004AFFE6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AFFE9  83 C0 C8                  ADD EAX,-0x38
004AFFEC  83 F8 29                  CMP EAX,0x29
004AFFEF  0F 87 5B 01 00 00         JA 0x004b0150
004AFFF5  33 D2                     XOR EDX,EDX
004AFFF7  8A 90 8C 01 4B 00         MOV DL,byte ptr [EAX + 0x4b018c]
switchD_004afffd::switchD:
004AFFFD  FF 24 95 78 01 4B 00      JMP dword ptr [EDX*0x4 + 0x4b0178]
switchD_004afffd::caseD_38:
004B0004  8B 01                     MOV EAX,dword ptr [ECX]
004B0006  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B0009  3D DC 00 00 00            CMP EAX,0xdc
004B000E  0F 85 3C 01 00 00         JNZ 0x004b0150
004B0014  EB 34                     JMP 0x004b004a
switchD_004afffd::caseD_39:
004B0016  8B 11                     MOV EDX,dword ptr [ECX]
004B0018  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B001B  3D DD 00 00 00            CMP EAX,0xdd
004B0020  0F 85 2A 01 00 00         JNZ 0x004b0150
004B0026  EB 22                     JMP 0x004b004a
switchD_004afffd::caseD_4f:
004B0028  8B 01                     MOV EAX,dword ptr [ECX]
004B002A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B002D  3D DE 00 00 00            CMP EAX,0xde
004B0032  0F 85 18 01 00 00         JNZ 0x004b0150
004B0038  EB 10                     JMP 0x004b004a
switchD_004afffd::caseD_61:
004B003A  8B 11                     MOV EDX,dword ptr [ECX]
004B003C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B003F  3D DE 00 00 00            CMP EAX,0xde
004B0044  0F 85 06 01 00 00         JNZ 0x004b0150
LAB_004b004a:
004B004A  8D 45 FA                  LEA EAX,[EBP + -0x6]
004B004D  8D 4D FC                  LEA ECX,[EBP + -0x4]
004B0050  50                        PUSH EAX
004B0051  8D 55 FE                  LEA EDX,[EBP + -0x2]
004B0054  51                        PUSH ECX
004B0055  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004B0058  52                        PUSH EDX
004B0059  E8 67 18 F5 FF            CALL 0x004018c5
004B005E  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
004B0062  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
004B0069  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
004B006D  0F AF F2                  IMUL ESI,EDX
004B0070  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
004B0077  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004B007B  0F AF F8                  IMUL EDI,EAX
004B007E  8B D9                     MOV EBX,ECX
004B0080  03 DE                     ADD EBX,ESI
004B0082  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
004B0088  03 FB                     ADD EDI,EBX
004B008A  83 3C FE 00               CMP dword ptr [ESI + EDI*0x8],0x0
004B008E  0F 85 B9 00 00 00         JNZ 0x004b014d
004B0094  66 8B 75 FE               MOV SI,word ptr [EBP + -0x2]
004B0098  66 85 F6                  TEST SI,SI
004B009B  0F 8C AC 00 00 00         JL 0x004b014d
004B00A1  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
004B00A8  0F 8D 9F 00 00 00         JGE 0x004b014d
004B00AE  66 8B 75 FC               MOV SI,word ptr [EBP + -0x4]
004B00B2  66 85 F6                  TEST SI,SI
004B00B5  0F 8C 92 00 00 00         JL 0x004b014d
004B00BB  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
004B00C2  0F 8D 85 00 00 00         JGE 0x004b014d
004B00C8  66 8B 75 FA               MOV SI,word ptr [EBP + -0x6]
004B00CC  66 85 F6                  TEST SI,SI
004B00CF  7C 7C                     JL 0x004b014d
004B00D1  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
004B00D8  7D 73                     JGE 0x004b014d
004B00DA  0F BF 3D 7E B2 7F 00      MOVSX EDI,word ptr [0x007fb27e]
004B00E1  0F AF FA                  IMUL EDI,EDX
004B00E4  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
004B00EB  0F AF D0                  IMUL EDX,EAX
004B00EE  8B D9                     MOV EBX,ECX
004B00F0  03 DF                     ADD EBX,EDI
004B00F2  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
004B00F8  03 D3                     ADD EDX,EBX
004B00FA  0F BF 14 57               MOVSX EDX,word ptr [EDI + EDX*0x2]
004B00FE  85 D2                     TEST EDX,EDX
004B0100  75 4B                     JNZ 0x004b014d
004B0102  66 83 FE 04               CMP SI,0x4
004B0106  7D 45                     JGE 0x004b014d
004B0108  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004B010B  52                        PUSH EDX
004B010C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B010F  52                        PUSH EDX
004B0110  50                        PUSH EAX
004B0111  51                        PUSH ECX
004B0112  E8 C1 CD 1F 00            CALL 0x006aced8
004B0117  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B011A  83 C4 10                  ADD ESP,0x10
004B011D  85 C9                     TEST ECX,ECX
004B011F  7C 04                     JL 0x004b0125
004B0121  3B C1                     CMP EAX,ECX
004B0123  7D 28                     JGE 0x004b014d
LAB_004b0125:
004B0125  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B0128  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B012B  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004B012F  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004B0133  89 01                     MOV dword ptr [ECX],EAX
004B0135  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B0138  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
004B013C  89 10                     MOV dword ptr [EAX],EDX
004B013E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004B0141  BE 01 00 00 00            MOV ESI,0x1
004B0146  89 0A                     MOV dword ptr [EDX],ECX
004B0148  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004B014B  EB 03                     JMP 0x004b0150
LAB_004b014d:
004B014D  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
switchD_004afffd::caseD_3a:
004B0150  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B0156  8D 55 F4                  LEA EDX,[EBP + -0xc]
004B0159  E8 32 10 20 00            CALL 0x006b1190
004B015E  85 C0                     TEST EAX,EAX
004B0160  0F 8D 75 FE FF FF         JGE 0x004affdb
004B0166  5F                        POP EDI
004B0167  8B C6                     MOV EAX,ESI
004B0169  5B                        POP EBX
004B016A  5E                        POP ESI
004B016B  8B E5                     MOV ESP,EBP
004B016D  5D                        POP EBP
004B016E  C3                        RET
LAB_004b016f:
004B016F  8B C6                     MOV EAX,ESI
004B0171  5E                        POP ESI
004B0172  8B E5                     MOV ESP,EBP
004B0174  5D                        POP EBP
004B0175  C3                        RET
