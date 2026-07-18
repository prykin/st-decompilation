FUN_006f6ea0:
006F6EA0  55                        PUSH EBP
006F6EA1  8B EC                     MOV EBP,ESP
006F6EA3  83 EC 0C                  SUB ESP,0xc
006F6EA6  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6EA9  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006F6EAC  03 C8                     ADD ECX,EAX
006F6EAE  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F6EB1  8B D1                     MOV EDX,ECX
006F6EB3  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F6EBD  C1 FA 03                  SAR EDX,0x3
006F6EC0  03 C2                     ADD EAX,EDX
006F6EC2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006F6EC5  4A                        DEC EDX
006F6EC6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006F6EC9  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006F6ECC  0F 88 0F 04 00 00         JS 0x006f72e1
006F6ED2  53                        PUSH EBX
006F6ED3  56                        PUSH ESI
006F6ED4  42                        INC EDX
006F6ED5  57                        PUSH EDI
006F6ED6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6ED9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006f6edc:
006F6EDC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F6EDF  33 DB                     XOR EBX,EBX
006F6EE1  8A 1A                     MOV BL,byte ptr [EDX]
006F6EE3  42                        INC EDX
006F6EE4  85 DB                     TEST EBX,EBX
006F6EE6  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F6EE9  0F 84 BC 03 00 00         JZ 0x006f72ab
006F6EEF  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F6EF2  83 E1 07                  AND ECX,0x7
006F6EF5  BA 80 00 00 00            MOV EDX,0x80
006F6EFA  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006F6EFD  D3 FA                     SAR EDX,CL
LAB_006f6eff:
006F6EFF  F6 C3 80                  TEST BL,0x80
006F6F02  8B C3                     MOV EAX,EBX
006F6F04  74 34                     JZ 0x006f6f3a
006F6F06  83 E0 3F                  AND EAX,0x3f
006F6F09  3B C6                     CMP EAX,ESI
006F6F0B  7F 43                     JG 0x006f6f50
006F6F0D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F6F10  F6 C3 40                  TEST BL,0x40
006F6F13  74 12                     JZ 0x006f6f27
006F6F15  41                        INC ECX
006F6F16  2B F0                     SUB ESI,EAX
006F6F18  8B C1                     MOV EAX,ECX
006F6F1A  33 DB                     XOR EBX,EBX
006F6F1C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6F1F  8A 18                     MOV BL,byte ptr [EAX]
006F6F21  40                        INC EAX
006F6F22  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6F25  EB D8                     JMP 0x006f6eff
LAB_006f6f27:
006F6F27  03 C8                     ADD ECX,EAX
006F6F29  2B F0                     SUB ESI,EAX
006F6F2B  8B C1                     MOV EAX,ECX
006F6F2D  33 DB                     XOR EBX,EBX
006F6F2F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F6F32  8A 18                     MOV BL,byte ptr [EAX]
006F6F34  40                        INC EAX
006F6F35  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6F38  EB C5                     JMP 0x006f6eff
LAB_006f6f3a:
006F6F3A  83 E0 7F                  AND EAX,0x7f
006F6F3D  3B C6                     CMP EAX,ESI
006F6F3F  7F 0F                     JG 0x006f6f50
006F6F41  2B F0                     SUB ESI,EAX
006F6F43  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F6F46  33 DB                     XOR EBX,EBX
006F6F48  8A 18                     MOV BL,byte ptr [EAX]
006F6F4A  40                        INC EAX
006F6F4B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F6F4E  EB AF                     JMP 0x006f6eff
LAB_006f6f50:
006F6F50  8B CB                     MOV ECX,EBX
006F6F52  2B C6                     SUB EAX,ESI
006F6F54  81 E1 C0 00 00 00         AND ECX,0xc0
006F6F5A  80 F9 80                  CMP CL,0x80
006F6F5D  75 03                     JNZ 0x006f6f62
006F6F5F  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006f6f62:
006F6F62  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F6F65  3B C6                     CMP EAX,ESI
006F6F67  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F6F6A  0F 8F 90 01 00 00         JG 0x006f7100
006F6F70  8B CB                     MOV ECX,EBX
006F6F72  81 E1 80 00 00 00         AND ECX,0x80
LAB_006f6f78:
006F6F78  2B F0                     SUB ESI,EAX
006F6F7A  85 C9                     TEST ECX,ECX
006F6F7C  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
006F6F7F  0F 84 F0 00 00 00         JZ 0x006f7075
006F6F85  F6 C3 40                  TEST BL,0x40
006F6F88  74 7E                     JZ 0x006f7008
006F6F8A  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F6F8D  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F6F90  33 C9                     XOR ECX,ECX
006F6F92  8A 0E                     MOV CL,byte ptr [ESI]
006F6F94  8B F1                     MOV ESI,ECX
006F6F96  33 C9                     XOR ECX,ECX
006F6F98  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006F6F9B  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F6F9E  47                        INC EDI
006F6F9F  48                        DEC EAX
006F6FA0  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F6FA3  0F 88 20 01 00 00         JS 0x006f70c9
006F6FA9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F6FAC  40                        INC EAX
006F6FAD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f6fb0:
006F6FB0  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6FB3  84 10                     TEST byte ptr [EAX],DL
006F6FB5  75 22                     JNZ 0x006f6fd9
006F6FB7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6FBA  33 C0                     XOR EAX,EAX
006F6FBC  66 8B 06                  MOV AX,word ptr [ESI]
006F6FBF  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F6FC2  3B F0                     CMP ESI,EAX
006F6FC4  77 04                     JA 0x006f6fca
006F6FC6  88 0F                     MOV byte ptr [EDI],CL
006F6FC8  EB 0F                     JMP 0x006f6fd9
LAB_006f6fca:
006F6FCA  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F6FCD  33 C0                     XOR EAX,EAX
006F6FCF  8A 06                     MOV AL,byte ptr [ESI]
006F6FD1  8B 75 48                  MOV ESI,dword ptr [EBP + 0x48]
006F6FD4  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006F6FD7  88 07                     MOV byte ptr [EDI],AL
LAB_006f6fd9:
006F6FD9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F6FDC  83 C6 02                  ADD ESI,0x2
006F6FDF  47                        INC EDI
006F6FE0  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F6FE3  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F6FE6  46                        INC ESI
006F6FE7  D0 EA                     SHR DL,0x1
006F6FE9  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
006F6FEC  75 09                     JNZ 0x006f6ff7
006F6FEE  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F6FF1  B2 80                     MOV DL,0x80
006F6FF3  40                        INC EAX
006F6FF4  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f6ff7:
006F6FF7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F6FFA  48                        DEC EAX
006F6FFB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F6FFE  75 B0                     JNZ 0x006f6fb0
006F7000  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F7003  E9 C4 00 00 00            JMP 0x006f70cc
LAB_006f7008:
006F7008  48                        DEC EAX
006F7009  0F 88 C0 00 00 00         JS 0x006f70cf
006F700F  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006f7012:
006F7012  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F7015  84 11                     TEST byte ptr [ECX],DL
006F7017  75 2F                     JNZ 0x006f7048
006F7019  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F701C  33 C0                     XOR EAX,EAX
006F701E  66 8B 01                  MOV AX,word ptr [ECX]
006F7021  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006F7024  3B C8                     CMP ECX,EAX
006F7026  77 11                     JA 0x006f7039
006F7028  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F702B  33 C0                     XOR EAX,EAX
006F702D  8A 01                     MOV AL,byte ptr [ECX]
006F702F  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006F7032  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
006F7035  88 07                     MOV byte ptr [EDI],AL
006F7037  EB 0F                     JMP 0x006f7048
LAB_006f7039:
006F7039  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006F703C  33 C9                     XOR ECX,ECX
006F703E  8A 08                     MOV CL,byte ptr [EAX]
006F7040  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
006F7043  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006F7046  88 0F                     MOV byte ptr [EDI],CL
LAB_006f7048:
006F7048  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F704B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006F704E  83 C0 02                  ADD EAX,0x2
006F7051  47                        INC EDI
006F7052  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F7055  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006F7058  40                        INC EAX
006F7059  41                        INC ECX
006F705A  D0 EA                     SHR DL,0x1
006F705C  89 45 40                  MOV dword ptr [EBP + 0x40],EAX
006F705F  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006F7062  75 09                     JNZ 0x006f706d
006F7064  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006F7067  B2 80                     MOV DL,0x80
006F7069  40                        INC EAX
006F706A  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
LAB_006f706d:
006F706D  4E                        DEC ESI
006F706E  75 A2                     JNZ 0x006f7012
006F7070  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F7073  EB 57                     JMP 0x006f70cc
LAB_006f7075:
006F7075  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006F7078  03 F8                     ADD EDI,EAX
006F707A  03 C8                     ADD ECX,EAX
006F707C  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F707F  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006F7082  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F7085  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006F7088  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F708B  33 C9                     XOR ECX,ECX
006F708D  8A EA                     MOV CH,DL
006F708F  8B D1                     MOV EDX,ECX
006F7091  8B C8                     MOV ECX,EAX
006F7093  83 E1 07                  AND ECX,0x7
006F7096  D3 EA                     SHR EDX,CL
006F7098  8B CA                     MOV ECX,EDX
006F709A  81 F9 80 00 00 00         CMP ECX,0x80
006F70A0  77 16                     JA 0x006f70b8
006F70A2  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F70A5  42                        INC EDX
006F70A6  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
006F70A9  8A D1                     MOV DL,CL
006F70AB  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F70AE  C1 F8 03                  SAR EAX,0x3
006F70B1  03 C8                     ADD ECX,EAX
006F70B3  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F70B6  EB 17                     JMP 0x006f70cf
LAB_006f70b8:
006F70B8  33 D2                     XOR EDX,EDX
006F70BA  8A D5                     MOV DL,CH
006F70BC  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F70BF  C1 F8 03                  SAR EAX,0x3
006F70C2  03 C8                     ADD ECX,EAX
006F70C4  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006F70C7  EB 06                     JMP 0x006f70cf
LAB_006f70c9:
006F70C9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f70cc:
006F70CC  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
LAB_006f70cf:
006F70CF  85 F6                     TEST ESI,ESI
006F70D1  7E 2B                     JLE 0x006f70fe
006F70D3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F70D6  33 DB                     XOR EBX,EBX
006F70D8  8A 18                     MOV BL,byte ptr [EAX]
006F70DA  8B CB                     MOV ECX,EBX
006F70DC  81 E1 80 00 00 00         AND ECX,0x80
006F70E2  40                        INC EAX
006F70E3  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F70E6  8B C3                     MOV EAX,EBX
006F70E8  85 C9                     TEST ECX,ECX
006F70EA  74 05                     JZ 0x006f70f1
006F70EC  83 E0 3F                  AND EAX,0x3f
006F70EF  EB 03                     JMP 0x006f70f4
LAB_006f70f1:
006F70F1  83 E0 7F                  AND EAX,0x7f
LAB_006f70f4:
006F70F4  3B C6                     CMP EAX,ESI
006F70F6  0F 8E 7C FE FF FF         JLE 0x006f6f78
006F70FC  EB 02                     JMP 0x006f7100
LAB_006f70fe:
006F70FE  33 C0                     XOR EAX,EAX
LAB_006f7100:
006F7100  2B C6                     SUB EAX,ESI
006F7102  F6 C3 80                  TEST BL,0x80
006F7105  0F 84 05 01 00 00         JZ 0x006f7210
006F710B  F6 C3 40                  TEST BL,0x40
006F710E  0F 84 94 00 00 00         JZ 0x006f71a8
006F7114  85 F6                     TEST ESI,ESI
006F7116  0F 8E 0C 01 00 00         JLE 0x006f7228
006F711C  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F711F  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F7122  33 C9                     XOR ECX,ECX
006F7124  8A 0E                     MOV CL,byte ptr [ESI]
006F7126  8B F1                     MOV ESI,ECX
006F7128  33 C9                     XOR ECX,ECX
006F712A  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006F712D  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F7130  46                        INC ESI
006F7131  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006F7134  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F7137  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006F713A  4E                        DEC ESI
006F713B  0F 88 E4 00 00 00         JS 0x006f7225
006F7141  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F7144  46                        INC ESI
006F7145  89 75 2C                  MOV dword ptr [EBP + 0x2c],ESI
LAB_006f7148:
006F7148  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F714B  84 11                     TEST byte ptr [ECX],DL
006F714D  75 2A                     JNZ 0x006f7179
006F714F  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F7152  33 C9                     XOR ECX,ECX
006F7154  66 8B 0E                  MOV CX,word ptr [ESI]
006F7157  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F715A  3B F1                     CMP ESI,ECX
006F715C  77 0C                     JA 0x006f716a
006F715E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7161  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
006F7164  8B FE                     MOV EDI,ESI
006F7166  88 0E                     MOV byte ptr [ESI],CL
006F7168  EB 0F                     JMP 0x006f7179
LAB_006f716a:
006F716A  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F716D  33 C9                     XOR ECX,ECX
006F716F  8A 0E                     MOV CL,byte ptr [ESI]
006F7171  8B 75 48                  MOV ESI,dword ptr [EBP + 0x48]
006F7174  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006F7177  88 0F                     MOV byte ptr [EDI],CL
LAB_006f7179:
006F7179  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F717C  83 C6 02                  ADD ESI,0x2
006F717F  47                        INC EDI
006F7180  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F7183  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F7186  46                        INC ESI
006F7187  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F718A  D0 EA                     SHR DL,0x1
006F718C  89 75 40                  MOV dword ptr [EBP + 0x40],ESI
006F718F  75 09                     JNZ 0x006f719a
006F7191  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F7194  B2 80                     MOV DL,0x80
006F7196  41                        INC ECX
006F7197  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f719a:
006F719A  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006F719D  49                        DEC ECX
006F719E  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006F71A1  75 A5                     JNZ 0x006f7148
006F71A3  E9 80 00 00 00            JMP 0x006f7228
LAB_006f71a8:
006F71A8  4E                        DEC ESI
006F71A9  78 7D                     JS 0x006f7228
006F71AB  46                        INC ESI
006F71AC  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_006f71af:
006F71AF  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F71B2  84 11                     TEST byte ptr [ECX],DL
006F71B4  75 2A                     JNZ 0x006f71e0
006F71B6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F71B9  33 C9                     XOR ECX,ECX
006F71BB  66 8B 0E                  MOV CX,word ptr [ESI]
006F71BE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F71C1  3B F1                     CMP ESI,ECX
006F71C3  77 0C                     JA 0x006f71d1
006F71C5  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F71C8  33 C9                     XOR ECX,ECX
006F71CA  8A 0E                     MOV CL,byte ptr [ESI]
006F71CC  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F71CF  EB 0A                     JMP 0x006f71db
LAB_006f71d1:
006F71D1  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
006F71D4  33 C9                     XOR ECX,ECX
006F71D6  8A 0E                     MOV CL,byte ptr [ESI]
006F71D8  8B 75 48                  MOV ESI,dword ptr [EBP + 0x48]
LAB_006f71db:
006F71DB  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006F71DE  88 0F                     MOV byte ptr [EDI],CL
LAB_006f71e0:
006F71E0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F71E3  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F71E6  83 C1 02                  ADD ECX,0x2
006F71E9  47                        INC EDI
006F71EA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F71ED  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006F71F0  41                        INC ECX
006F71F1  46                        INC ESI
006F71F2  D0 EA                     SHR DL,0x1
006F71F4  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006F71F7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F71FA  75 09                     JNZ 0x006f7205
006F71FC  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006F71FF  B2 80                     MOV DL,0x80
006F7201  41                        INC ECX
006F7202  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006f7205:
006F7205  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006F7208  49                        DEC ECX
006F7209  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006F720C  75 A1                     JNZ 0x006f71af
006F720E  EB 18                     JMP 0x006f7228
LAB_006f7210:
006F7210  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006F7213  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F7216  03 FE                     ADD EDI,ESI
006F7218  03 CE                     ADD ECX,ESI
006F721A  89 4D 40                  MOV dword ptr [EBP + 0x40],ECX
006F721D  8D 0C 72                  LEA ECX,[EDX + ESI*0x2]
006F7220  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F7223  EB 03                     JMP 0x006f7228
LAB_006f7225:
006F7225  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006f7228:
006F7228  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F722B  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006F722E  2B CE                     SUB ECX,ESI
006F7230  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006F7233  2B CE                     SUB ECX,ESI
006F7235  3B C1                     CMP EAX,ECX
006F7237  7D 35                     JGE 0x006f726e
LAB_006f7239:
006F7239  81 E3 C0 00 00 00         AND EBX,0xc0
006F723F  2B C8                     SUB ECX,EAX
006F7241  80 FB 80                  CMP BL,0x80
006F7244  75 03                     JNZ 0x006f7249
006F7246  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
LAB_006f7249:
006F7249  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F724C  33 DB                     XOR EBX,EBX
006F724E  8A 18                     MOV BL,byte ptr [EAX]
006F7250  8B D3                     MOV EDX,EBX
006F7252  80 E2 80                  AND DL,0x80
006F7255  40                        INC EAX
006F7256  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F7259  8B C3                     MOV EAX,EBX
006F725B  84 D2                     TEST DL,DL
006F725D  74 0B                     JZ 0x006f726a
006F725F  83 E0 3F                  AND EAX,0x3f
006F7262  F6 C3 40                  TEST BL,0x40
006F7265  74 03                     JZ 0x006f726a
006F7267  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_006f726a:
006F726A  3B C1                     CMP EAX,ECX
006F726C  7C CB                     JL 0x006f7239
LAB_006f726e:
006F726E  81 E3 C0 00 00 00         AND EBX,0xc0
006F7274  80 FB 80                  CMP BL,0x80
006F7277  75 03                     JNZ 0x006f727c
006F7279  01 4D 1C                  ADD dword ptr [EBP + 0x1c],ECX
LAB_006f727c:
006F727C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006F727F  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006F7282  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F7285  2B C6                     SUB EAX,ESI
006F7287  03 F8                     ADD EDI,EAX
006F7289  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F728C  2B CE                     SUB ECX,ESI
006F728E  8D 14 36                  LEA EDX,[ESI + ESI*0x1]
006F7291  03 D9                     ADD EBX,ECX
006F7293  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F7296  2B C2                     SUB EAX,EDX
006F7298  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F729B  03 C8                     ADD ECX,EAX
006F729D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F72A0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F72A3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006F72A6  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006F72A9  EB 1E                     JMP 0x006f72c9
LAB_006f72ab:
006F72AB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F72AE  8B 5D 40                  MOV EBX,dword ptr [EBP + 0x40]
006F72B1  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F72B4  03 FA                     ADD EDI,EDX
006F72B6  8B 55 44                  MOV EDX,dword ptr [EBP + 0x44]
006F72B9  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F72BC  03 DA                     ADD EBX,EDX
006F72BE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006F72C1  03 F2                     ADD ESI,EDX
006F72C3  89 5D 40                  MOV dword ptr [EBP + 0x40],EBX
006F72C6  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
LAB_006f72c9:
006F72C9  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006F72CC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F72CF  03 C6                     ADD EAX,ESI
006F72D1  4A                        DEC EDX
006F72D2  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006F72D5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F72D8  0F 85 FE FB FF FF         JNZ 0x006f6edc
006F72DE  5F                        POP EDI
006F72DF  5E                        POP ESI
006F72E0  5B                        POP EBX
LAB_006f72e1:
006F72E1  8B E5                     MOV ESP,EBP
006F72E3  5D                        POP EBP
006F72E4  C2 44 00                  RET 0x44
