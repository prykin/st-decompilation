FUN_006f7d10:
006F7D10  55                        PUSH EBP
006F7D11  8B EC                     MOV EBP,ESP
006F7D13  51                        PUSH ECX
006F7D14  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F7D17  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F7D21  48                        DEC EAX
006F7D22  0F 88 8B 02 00 00         JS 0x006f7fb3
006F7D28  53                        PUSH EBX
006F7D29  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F7D2C  56                        PUSH ESI
006F7D2D  40                        INC EAX
006F7D2E  57                        PUSH EDI
006F7D2F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F7D32  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f7d35:
006F7D35  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7D38  33 C9                     XOR ECX,ECX
006F7D3A  8A 0A                     MOV CL,byte ptr [EDX]
006F7D3C  42                        INC EDX
006F7D3D  85 C9                     TEST ECX,ECX
006F7D3F  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006F7D42  0F 84 46 02 00 00         JZ 0x006f7f8e
006F7D48  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
LAB_006f7d4b:
006F7D4B  F6 C1 80                  TEST CL,0x80
006F7D4E  8B C1                     MOV EAX,ECX
006F7D50  74 21                     JZ 0x006f7d73
006F7D52  83 E0 3F                  AND EAX,0x3f
006F7D55  3B C6                     CMP EAX,ESI
006F7D57  7F 2A                     JG 0x006f7d83
006F7D59  F6 C1 40                  TEST CL,0x40
006F7D5C  74 0A                     JZ 0x006f7d68
006F7D5E  42                        INC EDX
006F7D5F  33 C9                     XOR ECX,ECX
006F7D61  2B F0                     SUB ESI,EAX
006F7D63  8A 0A                     MOV CL,byte ptr [EDX]
006F7D65  42                        INC EDX
006F7D66  EB E3                     JMP 0x006f7d4b
LAB_006f7d68:
006F7D68  03 D0                     ADD EDX,EAX
006F7D6A  33 C9                     XOR ECX,ECX
006F7D6C  2B F0                     SUB ESI,EAX
006F7D6E  8A 0A                     MOV CL,byte ptr [EDX]
006F7D70  42                        INC EDX
006F7D71  EB D8                     JMP 0x006f7d4b
LAB_006f7d73:
006F7D73  83 E0 7F                  AND EAX,0x7f
006F7D76  3B C6                     CMP EAX,ESI
006F7D78  7F 09                     JG 0x006f7d83
006F7D7A  33 C9                     XOR ECX,ECX
006F7D7C  2B F0                     SUB ESI,EAX
006F7D7E  8A 0A                     MOV CL,byte ptr [EDX]
006F7D80  42                        INC EDX
006F7D81  EB C8                     JMP 0x006f7d4b
LAB_006f7d83:
006F7D83  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006F7D86  8B D1                     MOV EDX,ECX
006F7D88  81 E2 C0 00 00 00         AND EDX,0xc0
006F7D8E  2B C6                     SUB EAX,ESI
006F7D90  80 FA 80                  CMP DL,0x80
006F7D93  75 03                     JNZ 0x006f7d98
006F7D95  01 75 24                  ADD dword ptr [EBP + 0x24],ESI
LAB_006f7d98:
006F7D98  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F7D9B  3B C6                     CMP EAX,ESI
006F7D9D  0F 8F CC 00 00 00         JG 0x006f7e6f
006F7DA3  8B D1                     MOV EDX,ECX
006F7DA5  81 E2 80 00 00 00         AND EDX,0x80
LAB_006f7dab:
006F7DAB  2B F0                     SUB ESI,EAX
006F7DAD  85 D2                     TEST EDX,EDX
006F7DAF  89 75 34                  MOV dword ptr [EBP + 0x34],ESI
006F7DB2  74 7A                     JZ 0x006f7e2e
006F7DB4  F6 C1 40                  TEST CL,0x40
006F7DB7  74 3B                     JZ 0x006f7df4
006F7DB9  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7DBC  42                        INC EDX
006F7DBD  48                        DEC EAX
006F7DBE  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006F7DC1  78 78                     JS 0x006f7e3b
006F7DC3  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f7dc6:
006F7DC6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F7DC9  33 C0                     XOR EAX,EAX
006F7DCB  66 8B 02                  MOV AX,word ptr [EDX]
006F7DCE  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F7DD1  3B D0                     CMP EDX,EAX
006F7DD3  77 0C                     JA 0x006f7de1
006F7DD5  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F7DD8  33 C0                     XOR EAX,EAX
006F7DDA  8A 03                     MOV AL,byte ptr [EBX]
006F7DDC  8A 04 10                  MOV AL,byte ptr [EAX + EDX*0x1]
006F7DDF  88 07                     MOV byte ptr [EDI],AL
LAB_006f7de1:
006F7DE1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F7DE4  83 C2 02                  ADD EDX,0x2
006F7DE7  47                        INC EDI
006F7DE8  43                        INC EBX
006F7DE9  4E                        DEC ESI
006F7DEA  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006F7DED  75 D7                     JNZ 0x006f7dc6
006F7DEF  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006F7DF2  EB 47                     JMP 0x006f7e3b
LAB_006f7df4:
006F7DF4  48                        DEC EAX
006F7DF5  78 44                     JS 0x006f7e3b
006F7DF7  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7DFA  40                        INC EAX
006F7DFB  03 D0                     ADD EDX,EAX
006F7DFD  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
LAB_006f7e00:
006F7E00  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7E03  33 D2                     XOR EDX,EDX
006F7E05  66 8B 16                  MOV DX,word ptr [ESI]
006F7E08  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F7E0B  3B F2                     CMP ESI,EDX
006F7E0D  77 0C                     JA 0x006f7e1b
006F7E0F  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F7E12  33 D2                     XOR EDX,EDX
006F7E14  8A 13                     MOV DL,byte ptr [EBX]
006F7E16  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F7E19  88 17                     MOV byte ptr [EDI],DL
LAB_006f7e1b:
006F7E1B  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7E1E  83 C6 02                  ADD ESI,0x2
006F7E21  47                        INC EDI
006F7E22  43                        INC EBX
006F7E23  48                        DEC EAX
006F7E24  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006F7E27  75 D7                     JNZ 0x006f7e00
006F7E29  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006F7E2C  EB 0D                     JMP 0x006f7e3b
LAB_006f7e2e:
006F7E2E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F7E31  03 F8                     ADD EDI,EAX
006F7E33  03 D8                     ADD EBX,EAX
006F7E35  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006F7E38  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006f7e3b:
006F7E3B  85 F6                     TEST ESI,ESI
006F7E3D  7E 2E                     JLE 0x006f7e6d
006F7E3F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7E42  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F7E45  33 C9                     XOR ECX,ECX
006F7E47  8A 0A                     MOV CL,byte ptr [EDX]
006F7E49  8B D1                     MOV EDX,ECX
006F7E4B  81 E2 80 00 00 00         AND EDX,0x80
006F7E51  40                        INC EAX
006F7E52  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006F7E55  8B C1                     MOV EAX,ECX
006F7E57  85 D2                     TEST EDX,EDX
006F7E59  74 05                     JZ 0x006f7e60
006F7E5B  83 E0 3F                  AND EAX,0x3f
006F7E5E  EB 03                     JMP 0x006f7e63
LAB_006f7e60:
006F7E60  83 E0 7F                  AND EAX,0x7f
LAB_006f7e63:
006F7E63  3B C6                     CMP EAX,ESI
006F7E65  0F 8E 40 FF FF FF         JLE 0x006f7dab
006F7E6B  EB 02                     JMP 0x006f7e6f
LAB_006f7e6d:
006F7E6D  33 C0                     XOR EAX,EAX
LAB_006f7e6f:
006F7E6F  2B C6                     SUB EAX,ESI
006F7E71  F6 C1 80                  TEST CL,0x80
006F7E74  0F 84 90 00 00 00         JZ 0x006f7f0a
006F7E7A  F6 C1 40                  TEST CL,0x40
006F7E7D  74 4B                     JZ 0x006f7eca
006F7E7F  85 F6                     TEST ESI,ESI
006F7E81  0F 8E 90 00 00 00         JLE 0x006f7f17
006F7E87  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7E8A  42                        INC EDX
006F7E8B  4E                        DEC ESI
006F7E8C  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006F7E8F  0F 88 82 00 00 00         JS 0x006f7f17
006F7E95  46                        INC ESI
006F7E96  89 75 34                  MOV dword ptr [EBP + 0x34],ESI
LAB_006f7e99:
006F7E99  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7E9C  33 D2                     XOR EDX,EDX
006F7E9E  66 8B 16                  MOV DX,word ptr [ESI]
006F7EA1  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F7EA4  3B F2                     CMP ESI,EDX
006F7EA6  77 0C                     JA 0x006f7eb4
006F7EA8  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F7EAB  33 D2                     XOR EDX,EDX
006F7EAD  8A 13                     MOV DL,byte ptr [EBX]
006F7EAF  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F7EB2  88 17                     MOV byte ptr [EDI],DL
LAB_006f7eb4:
006F7EB4  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7EB7  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F7EBA  83 C6 02                  ADD ESI,0x2
006F7EBD  47                        INC EDI
006F7EBE  43                        INC EBX
006F7EBF  4A                        DEC EDX
006F7EC0  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006F7EC3  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F7EC6  75 D1                     JNZ 0x006f7e99
006F7EC8  EB 4D                     JMP 0x006f7f17
LAB_006f7eca:
006F7ECA  4E                        DEC ESI
006F7ECB  78 4A                     JS 0x006f7f17
006F7ECD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006F7ED0  46                        INC ESI
006F7ED1  03 D6                     ADD EDX,ESI
006F7ED3  89 75 34                  MOV dword ptr [EBP + 0x34],ESI
006F7ED6  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
LAB_006f7ed9:
006F7ED9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7EDC  33 D2                     XOR EDX,EDX
006F7EDE  66 8B 16                  MOV DX,word ptr [ESI]
006F7EE1  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006F7EE4  3B F2                     CMP ESI,EDX
006F7EE6  77 0C                     JA 0x006f7ef4
006F7EE8  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F7EEB  33 D2                     XOR EDX,EDX
006F7EED  8A 13                     MOV DL,byte ptr [EBX]
006F7EEF  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F7EF2  88 17                     MOV byte ptr [EDI],DL
LAB_006f7ef4:
006F7EF4  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7EF7  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F7EFA  83 C6 02                  ADD ESI,0x2
006F7EFD  47                        INC EDI
006F7EFE  43                        INC EBX
006F7EFF  4A                        DEC EDX
006F7F00  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006F7F03  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006F7F06  75 D1                     JNZ 0x006f7ed9
006F7F08  EB 0D                     JMP 0x006f7f17
LAB_006f7f0a:
006F7F0A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F7F0D  03 FE                     ADD EDI,ESI
006F7F0F  03 DE                     ADD EBX,ESI
006F7F11  8D 14 72                  LEA EDX,[EDX + ESI*0x2]
006F7F14  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_006f7f17:
006F7F17  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F7F1A  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F7F1D  2B D6                     SUB EDX,ESI
006F7F1F  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006F7F22  2B D6                     SUB EDX,ESI
006F7F24  3B C2                     CMP EAX,EDX
006F7F26  7D 3B                     JGE 0x006f7f63
LAB_006f7f28:
006F7F28  81 E1 C0 00 00 00         AND ECX,0xc0
006F7F2E  2B D0                     SUB EDX,EAX
006F7F30  80 F9 80                  CMP CL,0x80
006F7F33  75 03                     JNZ 0x006f7f38
006F7F35  01 45 24                  ADD dword ptr [EBP + 0x24],EAX
LAB_006f7f38:
006F7F38  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006F7F3B  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F7F3E  33 C9                     XOR ECX,ECX
006F7F40  8A 08                     MOV CL,byte ptr [EAX]
006F7F42  8B C1                     MOV EAX,ECX
006F7F44  24 80                     AND AL,0x80
006F7F46  46                        INC ESI
006F7F47  84 C0                     TEST AL,AL
006F7F49  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
006F7F4C  8B C1                     MOV EAX,ECX
006F7F4E  74 0C                     JZ 0x006f7f5c
006F7F50  83 E0 3F                  AND EAX,0x3f
006F7F53  F6 C1 40                  TEST CL,0x40
006F7F56  74 04                     JZ 0x006f7f5c
006F7F58  46                        INC ESI
006F7F59  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
LAB_006f7f5c:
006F7F5C  3B C2                     CMP EAX,EDX
006F7F5E  7C C8                     JL 0x006f7f28
006F7F60  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
LAB_006f7f63:
006F7F63  81 E1 C0 00 00 00         AND ECX,0xc0
006F7F69  80 F9 80                  CMP CL,0x80
006F7F6C  75 03                     JNZ 0x006f7f71
006F7F6E  01 55 24                  ADD dword ptr [EBP + 0x24],EDX
LAB_006f7f71:
006F7F71  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F7F74  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F7F77  2B CE                     SUB ECX,ESI
006F7F79  8D 04 36                  LEA EAX,[ESI + ESI*0x1]
006F7F7C  03 F9                     ADD EDI,ECX
006F7F7E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F7F81  2B D6                     SUB EDX,ESI
006F7F83  2B C8                     SUB ECX,EAX
006F7F85  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F7F88  03 DA                     ADD EBX,EDX
006F7F8A  03 C1                     ADD EAX,ECX
006F7F8C  EB 12                     JMP 0x006f7fa0
LAB_006f7f8e:
006F7F8E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F7F91  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F7F94  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006F7F97  03 FA                     ADD EDI,EDX
006F7F99  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F7F9C  03 D9                     ADD EBX,ECX
006F7F9E  03 C2                     ADD EAX,EDX
LAB_006f7fa0:
006F7FA0  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006F7FA3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F7FA6  48                        DEC EAX
006F7FA7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F7FAA  0F 85 85 FD FF FF         JNZ 0x006f7d35
006F7FB0  5F                        POP EDI
006F7FB1  5E                        POP ESI
006F7FB2  5B                        POP EBX
LAB_006f7fb3:
006F7FB3  8B E5                     MOV ESP,EBP
006F7FB5  5D                        POP EBP
006F7FB6  C2 34 00                  RET 0x34
