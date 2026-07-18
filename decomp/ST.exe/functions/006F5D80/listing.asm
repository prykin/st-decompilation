FUN_006f5d80:
006F5D80  55                        PUSH EBP
006F5D81  8B EC                     MOV EBP,ESP
006F5D83  51                        PUSH ECX
006F5D84  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F5D87  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F5D91  48                        DEC EAX
006F5D92  0F 88 80 02 00 00         JS 0x006f6018
006F5D98  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F5D9B  53                        PUSH EBX
006F5D9C  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F5D9F  40                        INC EAX
006F5DA0  56                        PUSH ESI
006F5DA1  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F5DA4  57                        PUSH EDI
006F5DA5  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F5DA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F5DAB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_006f5dae:
006F5DAE  33 C9                     XOR ECX,ECX
006F5DB0  8A 0E                     MOV CL,byte ptr [ESI]
006F5DB2  46                        INC ESI
006F5DB3  85 C9                     TEST ECX,ECX
006F5DB5  0F 84 3D 02 00 00         JZ 0x006f5ff8
LAB_006f5dbb:
006F5DBB  F6 C1 80                  TEST CL,0x80
006F5DBE  8B C1                     MOV EAX,ECX
006F5DC0  74 21                     JZ 0x006f5de3
006F5DC2  83 E0 3F                  AND EAX,0x3f
006F5DC5  3B C7                     CMP EAX,EDI
006F5DC7  7F 2A                     JG 0x006f5df3
006F5DC9  F6 C1 40                  TEST CL,0x40
006F5DCC  74 0A                     JZ 0x006f5dd8
006F5DCE  46                        INC ESI
006F5DCF  33 C9                     XOR ECX,ECX
006F5DD1  2B F8                     SUB EDI,EAX
006F5DD3  8A 0E                     MOV CL,byte ptr [ESI]
006F5DD5  46                        INC ESI
006F5DD6  EB E3                     JMP 0x006f5dbb
LAB_006f5dd8:
006F5DD8  03 F0                     ADD ESI,EAX
006F5DDA  33 C9                     XOR ECX,ECX
006F5DDC  2B F8                     SUB EDI,EAX
006F5DDE  8A 0E                     MOV CL,byte ptr [ESI]
006F5DE0  46                        INC ESI
006F5DE1  EB D8                     JMP 0x006f5dbb
LAB_006f5de3:
006F5DE3  83 E0 7F                  AND EAX,0x7f
006F5DE6  3B C7                     CMP EAX,EDI
006F5DE8  7F 09                     JG 0x006f5df3
006F5DEA  33 C9                     XOR ECX,ECX
006F5DEC  2B F8                     SUB EDI,EAX
006F5DEE  8A 0E                     MOV CL,byte ptr [ESI]
006F5DF0  46                        INC ESI
006F5DF1  EB C8                     JMP 0x006f5dbb
LAB_006f5df3:
006F5DF3  8B D1                     MOV EDX,ECX
006F5DF5  2B C7                     SUB EAX,EDI
006F5DF7  81 E2 C0 00 00 00         AND EDX,0xc0
006F5DFD  80 FA 80                  CMP DL,0x80
006F5E00  75 02                     JNZ 0x006f5e04
006F5E02  03 F7                     ADD ESI,EDI
LAB_006f5e04:
006F5E04  8B FB                     MOV EDI,EBX
006F5E06  3B C3                     CMP EAX,EBX
006F5E08  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F5E0B  0F 8F CD 00 00 00         JG 0x006f5ede
006F5E11  8B D1                     MOV EDX,ECX
006F5E13  81 E2 80 00 00 00         AND EDX,0x80
LAB_006f5e19:
006F5E19  2B F8                     SUB EDI,EAX
006F5E1B  85 D2                     TEST EDX,EDX
006F5E1D  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F5E20  0F 84 96 00 00 00         JZ 0x006f5ebc
006F5E26  F6 C1 40                  TEST CL,0x40
006F5E29  74 59                     JZ 0x006f5e84
006F5E2B  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5E2E  33 D2                     XOR EDX,EDX
006F5E30  8A 16                     MOV DL,byte ptr [ESI]
006F5E32  8B FA                     MOV EDI,EDX
006F5E34  33 D2                     XOR EDX,EDX
006F5E36  46                        INC ESI
006F5E37  48                        DEC EAX
006F5E38  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006F5E3B  78 28                     JS 0x006f5e65
006F5E3D  40                        INC EAX
LAB_006f5e3e:
006F5E3E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5E41  33 FF                     XOR EDI,EDI
006F5E43  66 8B 3B                  MOV DI,word ptr [EBX]
006F5E46  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5E49  3B DF                     CMP EBX,EDI
006F5E4B  77 05                     JA 0x006f5e52
006F5E4D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5E50  88 17                     MOV byte ptr [EDI],DL
LAB_006f5e52:
006F5E52  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F5E55  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F5E58  83 C7 02                  ADD EDI,0x2
006F5E5B  43                        INC EBX
006F5E5C  48                        DEC EAX
006F5E5D  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F5E60  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006F5E63  75 D9                     JNZ 0x006f5e3e
LAB_006f5e65:
006F5E65  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
LAB_006f5e68:
006F5E68  85 FF                     TEST EDI,EDI
006F5E6A  7E 70                     JLE 0x006f5edc
006F5E6C  33 C9                     XOR ECX,ECX
006F5E6E  8A 0E                     MOV CL,byte ptr [ESI]
006F5E70  8B D1                     MOV EDX,ECX
006F5E72  8B C1                     MOV EAX,ECX
006F5E74  81 E2 80 00 00 00         AND EDX,0x80
006F5E7A  46                        INC ESI
006F5E7B  85 D2                     TEST EDX,EDX
006F5E7D  74 50                     JZ 0x006f5ecf
006F5E7F  83 E0 3F                  AND EAX,0x3f
006F5E82  EB 4E                     JMP 0x006f5ed2
LAB_006f5e84:
006F5E84  48                        DEC EAX
006F5E85  78 E1                     JS 0x006f5e68
006F5E87  40                        INC EAX
LAB_006f5e88:
006F5E88  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5E8B  33 D2                     XOR EDX,EDX
006F5E8D  66 8B 13                  MOV DX,word ptr [EBX]
006F5E90  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5E93  3B DA                     CMP EBX,EDX
006F5E95  77 0F                     JA 0x006f5ea6
006F5E97  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5E9A  33 D2                     XOR EDX,EDX
006F5E9C  8A 16                     MOV DL,byte ptr [ESI]
006F5E9E  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
006F5EA1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F5EA4  88 13                     MOV byte ptr [EBX],DL
LAB_006f5ea6:
006F5EA6  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5EA9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F5EAC  83 C3 02                  ADD EBX,0x2
006F5EAF  42                        INC EDX
006F5EB0  46                        INC ESI
006F5EB1  48                        DEC EAX
006F5EB2  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F5EB5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F5EB8  75 CE                     JNZ 0x006f5e88
006F5EBA  EB AC                     JMP 0x006f5e68
LAB_006f5ebc:
006F5EBC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F5EBF  03 D0                     ADD EDX,EAX
006F5EC1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F5EC4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F5EC7  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006F5ECA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F5ECD  EB 99                     JMP 0x006f5e68
LAB_006f5ecf:
006F5ECF  83 E0 7F                  AND EAX,0x7f
LAB_006f5ed2:
006F5ED2  3B C7                     CMP EAX,EDI
006F5ED4  0F 8E 3F FF FF FF         JLE 0x006f5e19
006F5EDA  EB 02                     JMP 0x006f5ede
LAB_006f5edc:
006F5EDC  33 C0                     XOR EAX,EAX
LAB_006f5ede:
006F5EDE  2B C7                     SUB EAX,EDI
006F5EE0  F6 C1 80                  TEST CL,0x80
006F5EE3  0F 84 8D 00 00 00         JZ 0x006f5f76
006F5EE9  F6 C1 40                  TEST CL,0x40
006F5EEC  74 50                     JZ 0x006f5f3e
006F5EEE  85 FF                     TEST EDI,EDI
006F5EF0  0F 8E 91 00 00 00         JLE 0x006f5f87
006F5EF6  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5EF9  33 D2                     XOR EDX,EDX
006F5EFB  8A 16                     MOV DL,byte ptr [ESI]
006F5EFD  8B FA                     MOV EDI,EDX
006F5EFF  33 D2                     XOR EDX,EDX
006F5F01  46                        INC ESI
006F5F02  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006F5F05  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F5F08  4F                        DEC EDI
006F5F09  78 7C                     JS 0x006f5f87
006F5F0B  47                        INC EDI
006F5F0C  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
LAB_006f5f0f:
006F5F0F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5F12  33 FF                     XOR EDI,EDI
006F5F14  66 8B 3B                  MOV DI,word ptr [EBX]
006F5F17  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5F1A  3B DF                     CMP EBX,EDI
006F5F1C  77 05                     JA 0x006f5f23
006F5F1E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5F21  88 17                     MOV byte ptr [EDI],DL
LAB_006f5f23:
006F5F23  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F5F26  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F5F29  83 C7 02                  ADD EDI,0x2
006F5F2C  43                        INC EBX
006F5F2D  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F5F30  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F5F33  4F                        DEC EDI
006F5F34  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006F5F37  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F5F3A  75 D3                     JNZ 0x006f5f0f
006F5F3C  EB 49                     JMP 0x006f5f87
LAB_006f5f3e:
006F5F3E  4F                        DEC EDI
006F5F3F  78 46                     JS 0x006f5f87
006F5F41  47                        INC EDI
LAB_006f5f42:
006F5F42  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5F45  33 D2                     XOR EDX,EDX
006F5F47  66 8B 13                  MOV DX,word ptr [EBX]
006F5F4A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F5F4D  3B DA                     CMP EBX,EDX
006F5F4F  77 0F                     JA 0x006f5f60
006F5F51  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F5F54  33 D2                     XOR EDX,EDX
006F5F56  8A 16                     MOV DL,byte ptr [ESI]
006F5F58  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
006F5F5B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F5F5E  88 13                     MOV byte ptr [EBX],DL
LAB_006f5f60:
006F5F60  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5F63  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F5F66  83 C3 02                  ADD EBX,0x2
006F5F69  42                        INC EDX
006F5F6A  46                        INC ESI
006F5F6B  4F                        DEC EDI
006F5F6C  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F5F6F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F5F72  75 CE                     JNZ 0x006f5f42
006F5F74  EB 11                     JMP 0x006f5f87
LAB_006f5f76:
006F5F76  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F5F79  03 D7                     ADD EDX,EDI
006F5F7B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F5F7E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F5F81  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006F5F84  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_006f5f87:
006F5F87  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F5F8A  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F5F8D  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F5F90  2B D7                     SUB EDX,EDI
006F5F92  2B D3                     SUB EDX,EBX
006F5F94  3B C2                     CMP EAX,EDX
006F5F96  7D 2B                     JGE 0x006f5fc3
LAB_006f5f98:
006F5F98  81 E1 C0 00 00 00         AND ECX,0xc0
006F5F9E  2B D0                     SUB EDX,EAX
006F5FA0  80 F9 80                  CMP CL,0x80
006F5FA3  75 02                     JNZ 0x006f5fa7
006F5FA5  03 F0                     ADD ESI,EAX
LAB_006f5fa7:
006F5FA7  33 C9                     XOR ECX,ECX
006F5FA9  8A 0E                     MOV CL,byte ptr [ESI]
006F5FAB  8B C1                     MOV EAX,ECX
006F5FAD  24 80                     AND AL,0x80
006F5FAF  46                        INC ESI
006F5FB0  84 C0                     TEST AL,AL
006F5FB2  8B C1                     MOV EAX,ECX
006F5FB4  74 09                     JZ 0x006f5fbf
006F5FB6  83 E0 3F                  AND EAX,0x3f
006F5FB9  F6 C1 40                  TEST CL,0x40
006F5FBC  74 01                     JZ 0x006f5fbf
006F5FBE  46                        INC ESI
LAB_006f5fbf:
006F5FBF  3B C2                     CMP EAX,EDX
006F5FC1  7C D5                     JL 0x006f5f98
LAB_006f5fc3:
006F5FC3  81 E1 C0 00 00 00         AND ECX,0xc0
006F5FC9  80 F9 80                  CMP CL,0x80
006F5FCC  75 02                     JNZ 0x006f5fd0
006F5FCE  03 F2                     ADD ESI,EDX
LAB_006f5fd0:
006F5FD0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F5FD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F5FD6  8B CA                     MOV ECX,EDX
006F5FD8  2B CB                     SUB ECX,EBX
006F5FDA  03 C1                     ADD EAX,ECX
006F5FDC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006F5FDF  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006F5FE2  8B C8                     MOV ECX,EAX
006F5FE4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F5FE7  8B D8                     MOV EBX,EAX
006F5FE9  2B D9                     SUB EBX,ECX
006F5FEB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F5FEE  03 CB                     ADD ECX,EBX
006F5FF0  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006F5FF3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F5FF6  EB 10                     JMP 0x006f6008
LAB_006f5ff8:
006F5FF8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F5FFB  03 CA                     ADD ECX,EDX
006F5FFD  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F6000  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F6003  03 C8                     ADD ECX,EAX
006F6005  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f6008:
006F6008  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F600B  49                        DEC ECX
006F600C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F600F  0F 85 99 FD FF FF         JNZ 0x006f5dae
006F6015  5F                        POP EDI
006F6016  5E                        POP ESI
006F6017  5B                        POP EBX
LAB_006f6018:
006F6018  8B E5                     MOV ESP,EBP
006F601A  5D                        POP EBP
006F601B  C2 2C 00                  RET 0x2c
