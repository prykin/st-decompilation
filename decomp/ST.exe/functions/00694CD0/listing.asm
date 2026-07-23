CGenerate::sub_00694CD0:
00694CD0  55                        PUSH EBP
00694CD1  8B EC                     MOV EBP,ESP
00694CD3  83 EC 14                  SUB ESP,0x14
00694CD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694CD9  53                        PUSH EBX
00694CDA  8B D9                     MOV EBX,ECX
00694CDC  33 D2                     XOR EDX,EDX
00694CDE  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00694CE1  56                        PUSH ESI
00694CE2  57                        PUSH EDI
00694CE3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00694CE6  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00694CE9  85 C0                     TEST EAX,EAX
00694CEB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00694CEE  0F 8E 90 00 00 00         JLE 0x00694d84
00694CF4  EB 03                     JMP 0x00694cf9
LAB_00694cf6:
00694CF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_00694cf9:
00694CF9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694CFC  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
00694CFF  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
00694D02  73 0B                     JNC 0x00694d0f
00694D04  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00694D07  0F AF CA                  IMUL ECX,EDX
00694D0A  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00694D0D  EB 02                     JMP 0x00694d11
LAB_00694d0f:
00694D0F  33 C9                     XOR ECX,ECX
LAB_00694d11:
00694D11  8B 01                     MOV EAX,dword ptr [ECX]
00694D13  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00694D16  C1 E8 10                  SHR EAX,0x10
00694D19  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00694D1C  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
00694D1F  2B C2                     SUB EAX,EDX
00694D21  33 FF                     XOR EDI,EDI
00694D23  99                        CDQ
00694D24  2B C2                     SUB EAX,EDX
00694D26  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
00694D29  8B F0                     MOV ESI,EAX
00694D2B  8B 41 3C                  MOV EAX,dword ptr [ECX + 0x3c]
00694D2E  D1 FE                     SAR ESI,0x1
00694D30  03 F2                     ADD ESI,EDX
00694D32  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00694D35  66 8B 39                  MOV DI,word ptr [ECX]
00694D38  2B C2                     SUB EAX,EDX
00694D3A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00694D3D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00694D40  99                        CDQ
00694D41  2B C2                     SUB EAX,EDX
00694D43  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00694D46  D1 F8                     SAR EAX,0x1
00694D48  03 C2                     ADD EAX,EDX
00694D4A  6A 00                     PUSH 0x0
00694D4C  85 C9                     TEST ECX,ECX
00694D4E  75 0C                     JNZ 0x00694d5c
00694D50  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00694D53  6A 00                     PUSH 0x0
00694D55  6A 04                     PUSH 0x4
00694D57  50                        PUSH EAX
00694D58  56                        PUSH ESI
00694D59  51                        PUSH ECX
00694D5A  EB 0A                     JMP 0x00694d66
LAB_00694d5c:
00694D5C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00694D5F  6A 01                     PUSH 0x1
00694D61  6A 04                     PUSH 0x4
00694D63  50                        PUSH EAX
00694D64  56                        PUSH ESI
00694D65  52                        PUSH EDX
LAB_00694d66:
00694D66  57                        PUSH EDI
00694D67  8D 8B 4E 02 00 00         LEA ECX,[EBX + 0x24e]
00694D6D  E8 3F DF D6 FF            CALL 0x00402cb1
00694D72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00694D75  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00694D78  40                        INC EAX
00694D79  3B C1                     CMP EAX,ECX
00694D7B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00694D7E  0F 8C 72 FF FF FF         JL 0x00694cf6
LAB_00694d84:
00694D84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694D87  33 D2                     XOR EDX,EDX
00694D89  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00694D8C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00694D8F  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
00694D92  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00694D95  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00694D98  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00694D9B  0F AF 01                  IMUL EAX,dword ptr [ECX]
00694D9E  C1 E0 02                  SHL EAX,0x2
00694DA1  85 F6                     TEST ESI,ESI
00694DA3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00694DA6  0F 8E 9F 01 00 00         JLE 0x00694f4b
LAB_00694dac:
00694DAC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00694DAF  8B 49 1C                  MOV ECX,dword ptr [ECX + 0x1c]
00694DB2  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00694DB5  73 0D                     JNC 0x00694dc4
00694DB7  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00694DBA  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00694DBD  0F AF F2                  IMUL ESI,EDX
00694DC0  03 F7                     ADD ESI,EDI
00694DC2  EB 02                     JMP 0x00694dc6
LAB_00694dc4:
00694DC4  33 F6                     XOR ESI,ESI
LAB_00694dc6:
00694DC6  0F BF 4E 02               MOVSX ECX,word ptr [ESI + 0x2]
00694DCA  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
00694DCD  0F AF 0F                  IMUL ECX,dword ptr [EDI]
00694DD0  0F BF 7E 04               MOVSX EDI,word ptr [ESI + 0x4]
00694DD4  0F AF F8                  IMUL EDI,EAX
00694DD7  8D 0C 4F                  LEA ECX,[EDI + ECX*0x2]
00694DDA  0F BF 3E                  MOVSX EDI,word ptr [ESI]
00694DDD  03 CF                     ADD ECX,EDI
00694DDF  8B 3D D4 3D 85 00         MOV EDI,dword ptr [0x00853dd4]
00694DE5  66 83 3C 4F 00            CMP word ptr [EDI + ECX*0x2],0x0
00694DEA  0F 85 4C 01 00 00         JNZ 0x00694f3c
00694DF0  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00694DF7  8B 4E 0A                  MOV ECX,dword ptr [ESI + 0xa]
00694DFA  0F BF 56 04               MOVSX EDX,word ptr [ESI + 0x4]
00694DFE  6A 00                     PUSH 0x0
00694E00  8D 45 F4                  LEA EAX,[EBP + -0xc]
00694E03  52                        PUSH EDX
00694E04  50                        PUSH EAX
00694E05  51                        PUSH ECX
00694E06  6A 5A                     PUSH 0x5a
00694E08  E8 49 0C D7 FF            CALL 0x00405a56
00694E0D  0F BF 16                  MOVSX EDX,word ptr [ESI]
00694E10  8B F8                     MOV EDI,EAX
00694E12  83 C4 14                  ADD ESP,0x14
00694E15  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
00694E18  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00694E1C  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
00694E1F  33 C0                     XOR EAX,EAX
00694E21  8A 46 0E                  MOV AL,byte ptr [ESI + 0xe]
00694E24  83 E8 00                  SUB EAX,0x0
00694E27  0F 84 DD 00 00 00         JZ 0x00694f0a
00694E2D  48                        DEC EAX
00694E2E  0F 84 92 00 00 00         JZ 0x00694ec6
00694E34  48                        DEC EAX
00694E35  74 4B                     JZ 0x00694e82
00694E37  E8 84 98 09 00            CALL 0x0072e6c0
00694E3C  99                        CDQ
00694E3D  B9 18 00 00 00            MOV ECX,0x18
00694E42  8B 76 0A                  MOV ESI,dword ptr [ESI + 0xa]
00694E45  F7 F9                     IDIV ECX
00694E47  81 EE DD 00 00 00         SUB ESI,0xdd
00694E4D  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
00694E50  8B CA                     MOV ECX,EDX
00694E52  33 D2                     XOR EDX,EDX
00694E54  8A 93 49 02 00 00         MOV DL,byte ptr [EBX + 0x249]
00694E5A  83 C1 0F                  ADD ECX,0xf
00694E5D  03 D0                     ADD EDX,EAX
00694E5F  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00694E64  0F AF 0C 95 E0 59 7D 00   IMUL ECX,dword ptr [EDX*0x4 + 0x7d59e0]
00694E6C  F7 E9                     IMUL ECX
00694E6E  03 D1                     ADD EDX,ECX
00694E70  C1 FA 06                  SAR EDX,0x6
00694E73  8B CA                     MOV ECX,EDX
00694E75  C1 E9 1F                  SHR ECX,0x1f
00694E78  03 D1                     ADD EDX,ECX
00694E7A  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
00694E7D  E9 A8 00 00 00            JMP 0x00694f2a
LAB_00694e82:
00694E82  E8 39 98 09 00            CALL 0x0072e6c0
00694E87  99                        CDQ
00694E88  B9 15 00 00 00            MOV ECX,0x15
00694E8D  8B 76 0A                  MOV ESI,dword ptr [ESI + 0xa]
00694E90  F7 F9                     IDIV ECX
00694E92  81 EE DD 00 00 00         SUB ESI,0xdd
00694E98  33 C0                     XOR EAX,EAX
00694E9A  8A 83 49 02 00 00         MOV AL,byte ptr [EBX + 0x249]
00694EA0  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
00694EA3  03 C1                     ADD EAX,ECX
00694EA5  83 C2 1E                  ADD EDX,0x1e
00694EA8  0F AF 14 85 E0 59 7D 00   IMUL EDX,dword ptr [EAX*0x4 + 0x7d59e0]
00694EB0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00694EB5  F7 EA                     IMUL EDX
00694EB7  C1 FA 05                  SAR EDX,0x5
00694EBA  8B C2                     MOV EAX,EDX
00694EBC  C1 E8 1F                  SHR EAX,0x1f
00694EBF  03 D0                     ADD EDX,EAX
00694EC1  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
00694EC4  EB 64                     JMP 0x00694f2a
LAB_00694ec6:
00694EC6  E8 F5 97 09 00            CALL 0x0072e6c0
00694ECB  99                        CDQ
00694ECC  B9 1A 00 00 00            MOV ECX,0x1a
00694ED1  8B 76 0A                  MOV ESI,dword ptr [ESI + 0xa]
00694ED4  F7 F9                     IDIV ECX
00694ED6  81 EE DD 00 00 00         SUB ESI,0xdd
00694EDC  33 C0                     XOR EAX,EAX
00694EDE  8A 83 49 02 00 00         MOV AL,byte ptr [EBX + 0x249]
00694EE4  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
00694EE7  03 C1                     ADD EAX,ECX
00694EE9  83 C2 32                  ADD EDX,0x32
00694EEC  0F AF 14 85 E0 59 7D 00   IMUL EDX,dword ptr [EAX*0x4 + 0x7d59e0]
00694EF4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00694EF9  F7 EA                     IMUL EDX
00694EFB  C1 FA 05                  SAR EDX,0x5
00694EFE  8B C2                     MOV EAX,EDX
00694F00  C1 E8 1F                  SHR EAX,0x1f
00694F03  03 D0                     ADD EDX,EAX
00694F05  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
00694F08  EB 20                     JMP 0x00694f2a
LAB_00694f0a:
00694F0A  8B 76 0A                  MOV ESI,dword ptr [ESI + 0xa]
00694F0D  33 C9                     XOR ECX,ECX
00694F0F  8A 8B 49 02 00 00         MOV CL,byte ptr [EBX + 0x249]
00694F15  81 EE DD 00 00 00         SUB ESI,0xdd
00694F1B  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
00694F1E  03 CA                     ADD ECX,EDX
00694F20  8B 04 8D E0 59 7D 00      MOV EAX,dword ptr [ECX*0x4 + 0x7d59e0]
00694F27  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
LAB_00694f2a:
00694F2A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00694F2D  51                        PUSH ECX
00694F2E  57                        PUSH EDI
00694F2F  8B CB                     MOV ECX,EBX
00694F31  E8 EC F8 D6 FF            CALL 0x00404822
00694F36  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00694F39  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_00694f3c:
00694F3C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00694F3F  42                        INC EDX
00694F40  3B D1                     CMP EDX,ECX
00694F42  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00694F45  0F 8C 61 FE FF FF         JL 0x00694dac
LAB_00694f4b:
00694F4B  5F                        POP EDI
00694F4C  5E                        POP ESI
00694F4D  5B                        POP EBX
00694F4E  8B E5                     MOV ESP,EBP
00694F50  5D                        POP EBP
00694F51  C2 04 00                  RET 0x4
