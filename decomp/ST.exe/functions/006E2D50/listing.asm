FUN_006e2d50:
006E2D50  55                        PUSH EBP
006E2D51  8B EC                     MOV EBP,ESP
006E2D53  53                        PUSH EBX
006E2D54  56                        PUSH ESI
006E2D55  57                        PUSH EDI
006E2D56  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2D59  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006E2D5C  0F 82 EB 00 00 00         JC 0x006e2e4d
LAB_006e2d62:
006E2D62  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E2D65  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E2D68  83 EA 01                  SUB EDX,0x1
006E2D6B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006E2D6E  85 C9                     TEST ECX,ECX
006E2D70  0F 8E D2 00 00 00         JLE 0x006e2e48
006E2D76  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
006E2D7A  7E 5B                     JLE 0x006e2dd7
006E2D7C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006E2D7F  C1 E3 10                  SHL EBX,0x10
006E2D82  66 8B 5D 1C               MOV BX,word ptr [EBP + 0x1c]
006E2D86  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2D89  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E2D8C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E2D8F  F7 C7 02 00 00 00         TEST EDI,0x2
006E2D95  74 15                     JZ 0x006e2dac
006E2D97  66 8B 06                  MOV AX,word ptr [ESI]
006E2D9A  83 C6 02                  ADD ESI,0x2
006E2D9D  03 C3                     ADD EAX,EBX
006E2D9F  66 89 07                  MOV word ptr [EDI],AX
006E2DA2  83 C7 02                  ADD EDI,0x2
006E2DA5  49                        DEC ECX
006E2DA6  0F 8E 85 00 00 00         JLE 0x006e2e31
LAB_006e2dac:
006E2DAC  83 E9 02                  SUB ECX,0x2
006E2DAF  7C 11                     JL 0x006e2dc2
LAB_006e2db1:
006E2DB1  8B 06                     MOV EAX,dword ptr [ESI]
006E2DB3  83 C6 04                  ADD ESI,0x4
006E2DB6  03 C3                     ADD EAX,EBX
006E2DB8  89 07                     MOV dword ptr [EDI],EAX
006E2DBA  83 C7 04                  ADD EDI,0x4
006E2DBD  83 E9 02                  SUB ECX,0x2
006E2DC0  7D EF                     JGE 0x006e2db1
LAB_006e2dc2:
006E2DC2  83 F9 FF                  CMP ECX,-0x1
006E2DC5  75 6A                     JNZ 0x006e2e31
006E2DC7  66 8B 06                  MOV AX,word ptr [ESI]
006E2DCA  83 C6 02                  ADD ESI,0x2
006E2DCD  03 C3                     ADD EAX,EBX
006E2DCF  66 89 07                  MOV word ptr [EDI],AX
006E2DD2  83 C7 02                  ADD EDI,0x2
006E2DD5  EB 5A                     JMP 0x006e2e31
LAB_006e2dd7:
006E2DD7  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006E2DDA  F7 D8                     NEG EAX
006E2DDC  8B D8                     MOV EBX,EAX
006E2DDE  C1 E3 10                  SHL EBX,0x10
006E2DE1  66 8B D8                  MOV BX,AX
006E2DE4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2DE7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E2DEA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E2DED  F7 C7 02 00 00 00         TEST EDI,0x2
006E2DF3  74 12                     JZ 0x006e2e07
006E2DF5  66 8B 06                  MOV AX,word ptr [ESI]
006E2DF8  83 C6 02                  ADD ESI,0x2
006E2DFB  66 2B C3                  SUB AX,BX
006E2DFE  66 89 07                  MOV word ptr [EDI],AX
006E2E01  83 C7 02                  ADD EDI,0x2
006E2E04  49                        DEC ECX
006E2E05  7E 2A                     JLE 0x006e2e31
LAB_006e2e07:
006E2E07  83 E9 02                  SUB ECX,0x2
006E2E0A  7C 11                     JL 0x006e2e1d
LAB_006e2e0c:
006E2E0C  8B 06                     MOV EAX,dword ptr [ESI]
006E2E0E  83 C6 04                  ADD ESI,0x4
006E2E11  2B C3                     SUB EAX,EBX
006E2E13  89 07                     MOV dword ptr [EDI],EAX
006E2E15  83 C7 04                  ADD EDI,0x4
006E2E18  83 E9 02                  SUB ECX,0x2
006E2E1B  7D EF                     JGE 0x006e2e0c
LAB_006e2e1d:
006E2E1D  83 F9 FF                  CMP ECX,-0x1
006E2E20  75 0F                     JNZ 0x006e2e31
006E2E22  66 8B 06                  MOV AX,word ptr [ESI]
006E2E25  83 C6 02                  ADD ESI,0x2
006E2E28  66 2B C3                  SUB AX,BX
006E2E2B  66 89 07                  MOV word ptr [EDI],AX
006E2E2E  83 C7 02                  ADD EDI,0x2
LAB_006e2e31:
006E2E31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2E34  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006E2E37  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E2E3A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E2E3D  03 4D 10                  ADD ECX,dword ptr [EBP + 0x10]
006E2E40  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006E2E43  E9 1A FF FF FF            JMP 0x006e2d62
LAB_006e2e48:
006E2E48  E9 30 01 00 00            JMP 0x006e2f7d
LAB_006e2e4d:
006E2E4D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E2E50  83 EA 01                  SUB EDX,0x1
006E2E53  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
006E2E57  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2E5A  03 C2                     ADD EAX,EDX
006E2E5C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E2E5F  8D 54 48 FE               LEA EDX,[EAX + ECX*0x2 + -0x2]
006E2E63  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006E2E66  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E2E69  83 E8 01                  SUB EAX,0x1
006E2E6C  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006E2E70  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E2E73  03 C8                     ADD ECX,EAX
006E2E75  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E2E78  8D 44 51 FE               LEA EAX,[ECX + EDX*0x2 + -0x2]
006E2E7C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006e2e7f:
006E2E7F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E2E82  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006E2E85  83 EA 01                  SUB EDX,0x1
006E2E88  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006E2E8B  85 C9                     TEST ECX,ECX
006E2E8D  0F 8E EA 00 00 00         JLE 0x006e2f7d
006E2E93  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
006E2E97  7E 67                     JLE 0x006e2f00
006E2E99  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006E2E9C  C1 E3 10                  SHL EBX,0x10
006E2E9F  66 8B 5D 1C               MOV BX,word ptr [EBP + 0x1c]
006E2EA3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2EA6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E2EA9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E2EAC  F7 C7 02 00 00 00         TEST EDI,0x2
006E2EB2  74 15                     JZ 0x006e2ec9
006E2EB4  66 8B 06                  MOV AX,word ptr [ESI]
006E2EB7  83 EE 02                  SUB ESI,0x2
006E2EBA  03 C3                     ADD EAX,EBX
006E2EBC  66 89 07                  MOV word ptr [EDI],AX
006E2EBF  83 EF 02                  SUB EDI,0x2
006E2EC2  49                        DEC ECX
006E2EC3  0F 8E 9D 00 00 00         JLE 0x006e2f66
LAB_006e2ec9:
006E2EC9  83 EE 02                  SUB ESI,0x2
006E2ECC  83 EF 02                  SUB EDI,0x2
006E2ECF  83 E9 02                  SUB ECX,0x2
006E2ED2  7C 11                     JL 0x006e2ee5
LAB_006e2ed4:
006E2ED4  8B 06                     MOV EAX,dword ptr [ESI]
006E2ED6  83 EE 04                  SUB ESI,0x4
006E2ED9  03 C3                     ADD EAX,EBX
006E2EDB  89 07                     MOV dword ptr [EDI],EAX
006E2EDD  83 EF 04                  SUB EDI,0x4
006E2EE0  83 E9 02                  SUB ECX,0x2
006E2EE3  7D EF                     JGE 0x006e2ed4
LAB_006e2ee5:
006E2EE5  83 C6 02                  ADD ESI,0x2
006E2EE8  83 C7 02                  ADD EDI,0x2
006E2EEB  83 F9 FF                  CMP ECX,-0x1
006E2EEE  75 76                     JNZ 0x006e2f66
006E2EF0  66 8B 06                  MOV AX,word ptr [ESI]
006E2EF3  83 EE 02                  SUB ESI,0x2
006E2EF6  03 C3                     ADD EAX,EBX
006E2EF8  66 89 07                  MOV word ptr [EDI],AX
006E2EFB  83 EF 02                  SUB EDI,0x2
006E2EFE  EB 66                     JMP 0x006e2f66
LAB_006e2f00:
006E2F00  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006E2F03  F7 D8                     NEG EAX
006E2F05  8B D8                     MOV EBX,EAX
006E2F07  C1 E3 10                  SHL EBX,0x10
006E2F0A  66 8B D8                  MOV BX,AX
006E2F0D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E2F10  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E2F13  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E2F16  F7 C7 02 00 00 00         TEST EDI,0x2
006E2F1C  74 12                     JZ 0x006e2f30
006E2F1E  66 8B 06                  MOV AX,word ptr [ESI]
006E2F21  83 EE 02                  SUB ESI,0x2
006E2F24  66 2B C3                  SUB AX,BX
006E2F27  66 89 07                  MOV word ptr [EDI],AX
006E2F2A  83 EF 02                  SUB EDI,0x2
006E2F2D  49                        DEC ECX
006E2F2E  7E 36                     JLE 0x006e2f66
LAB_006e2f30:
006E2F30  83 EE 02                  SUB ESI,0x2
006E2F33  83 EF 02                  SUB EDI,0x2
006E2F36  83 E9 02                  SUB ECX,0x2
006E2F39  7C 11                     JL 0x006e2f4c
LAB_006e2f3b:
006E2F3B  8B 06                     MOV EAX,dword ptr [ESI]
006E2F3D  83 EE 04                  SUB ESI,0x4
006E2F40  2B C3                     SUB EAX,EBX
006E2F42  89 07                     MOV dword ptr [EDI],EAX
006E2F44  83 EF 04                  SUB EDI,0x4
006E2F47  83 E9 02                  SUB ECX,0x2
006E2F4A  7D EF                     JGE 0x006e2f3b
LAB_006e2f4c:
006E2F4C  83 C6 02                  ADD ESI,0x2
006E2F4F  83 C7 02                  ADD EDI,0x2
006E2F52  83 F9 FF                  CMP ECX,-0x1
006E2F55  75 0F                     JNZ 0x006e2f66
006E2F57  66 8B 06                  MOV AX,word ptr [ESI]
006E2F5A  83 EE 02                  SUB ESI,0x2
006E2F5D  66 2B C3                  SUB AX,BX
006E2F60  66 89 07                  MOV word ptr [EDI],AX
006E2F63  83 EF 02                  SUB EDI,0x2
LAB_006e2f66:
006E2F66  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E2F69  2B 45 10                  SUB EAX,dword ptr [EBP + 0x10]
006E2F6C  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006E2F6F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E2F72  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
006E2F75  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006E2F78  E9 02 FF FF FF            JMP 0x006e2e7f
LAB_006e2f7d:
006E2F7D  5F                        POP EDI
006E2F7E  5E                        POP ESI
006E2F7F  5B                        POP EBX
006E2F80  5D                        POP EBP
006E2F81  C2 18 00                  RET 0x18
