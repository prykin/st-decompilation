FUN_006d3d80:
006D3D80  55                        PUSH EBP
006D3D81  8B EC                     MOV EBP,ESP
006D3D83  83 EC 54                  SUB ESP,0x54
006D3D86  8B 45 4C                  MOV EAX,dword ptr [EBP + 0x4c]
006D3D89  53                        PUSH EBX
006D3D8A  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006D3D8D  56                        PUSH ESI
006D3D8E  99                        CDQ
006D3D8F  F7 FB                     IDIV EBX
006D3D91  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006D3D94  57                        PUSH EDI
006D3D95  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D3D98  8B 45 50                  MOV EAX,dword ptr [EBP + 0x50]
006D3D9B  99                        CDQ
006D3D9C  F7 7D 40                  IDIV dword ptr [EBP + 0x40]
006D3D9F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006D3DA2  8D 43 07                  LEA EAX,[EBX + 0x7]
006D3DA5  99                        CDQ
006D3DA6  83 E2 07                  AND EDX,0x7
006D3DA9  03 C2                     ADD EAX,EDX
006D3DAB  C1 F8 03                  SAR EAX,0x3
006D3DAE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006D3DB1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D3DB4  83 C0 07                  ADD EAX,0x7
006D3DB7  99                        CDQ
006D3DB8  83 E2 07                  AND EDX,0x7
006D3DBB  03 C2                     ADD EAX,EDX
006D3DBD  8B 55 54                  MOV EDX,dword ptr [EBP + 0x54]
006D3DC0  C1 F8 03                  SAR EAX,0x3
006D3DC3  85 D2                     TEST EDX,EDX
006D3DC5  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006D3DC8  74 14                     JZ 0x006d3dde
006D3DCA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D3DCD  0F AF C6                  IMUL EAX,ESI
006D3DD0  8B F9                     MOV EDI,ECX
006D3DD2  C1 FF 03                  SAR EDI,0x3
006D3DD5  03 FA                     ADD EDI,EDX
006D3DD7  03 F8                     ADD EDI,EAX
006D3DD9  89 7D 54                  MOV dword ptr [EBP + 0x54],EDI
006D3DDC  EB 03                     JMP 0x006d3de1
LAB_006d3dde:
006D3DDE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
LAB_006d3de1:
006D3DE1  8B 45 58                  MOV EAX,dword ptr [EBP + 0x58]
006D3DE4  85 C0                     TEST EAX,EAX
006D3DE6  74 12                     JZ 0x006d3dfa
006D3DE8  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006D3DEB  8B F9                     MOV EDI,ECX
006D3DED  0F AF D6                  IMUL EDX,ESI
006D3DF0  C1 FF 03                  SAR EDI,0x3
006D3DF3  03 F8                     ADD EDI,EAX
006D3DF5  03 FA                     ADD EDI,EDX
006D3DF7  89 7D 58                  MOV dword ptr [EBP + 0x58],EDI
LAB_006d3dfa:
006D3DFA  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006D3DFD  85 FF                     TEST EDI,EDI
006D3DFF  0F 8E 12 04 00 00         JLE 0x006d4217
006D3E05  83 E1 07                  AND ECX,0x7
006D3E08  BA 80 00 00 00            MOV EDX,0x80
006D3E0D  D3 FA                     SAR EDX,CL
006D3E0F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D3E12  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006D3E15  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D3E18  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006D3E1B  2B F1                     SUB ESI,ECX
006D3E1D  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006D3E20  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006D3E23  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
LAB_006d3e26:
006D3E26  8B 45 54                  MOV EAX,dword ptr [EBP + 0x54]
006D3E29  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D3E2C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D3E2F  8B 45 58                  MOV EAX,dword ptr [EBP + 0x58]
006D3E32  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D3E35  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
006D3E38  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D3E3B  33 C0                     XOR EAX,EAX
006D3E3D  85 FF                     TEST EDI,EDI
006D3E3F  88 55 4F                  MOV byte ptr [EBP + 0x4f],DL
006D3E42  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006D3E45  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D3E48  0F 8E 7A 03 00 00         JLE 0x006d41c8
LAB_006d3e4e:
006D3E4E  8B F8                     MOV EDI,EAX
006D3E50  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D3E53  0F AF FB                  IMUL EDI,EBX
006D3E56  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3E59  03 FA                     ADD EDI,EDX
006D3E5B  85 C9                     TEST ECX,ECX
006D3E5D  89 7D 28                  MOV dword ptr [EBP + 0x28],EDI
006D3E60  0F 84 EB 01 00 00         JZ 0x006d4051
006D3E66  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D3E69  85 C9                     TEST ECX,ECX
006D3E6B  0F 84 E0 01 00 00         JZ 0x006d4051
006D3E71  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D3E74  33 C9                     XOR ECX,ECX
006D3E76  8A 0A                     MOV CL,byte ptr [EDX]
006D3E78  85 C9                     TEST ECX,ECX
006D3E7A  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006D3E7D  0F 85 CE 01 00 00         JNZ 0x006d4051
006D3E83  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D3E86  33 F6                     XOR ESI,ESI
006D3E88  3B C1                     CMP EAX,ECX
006D3E8A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006D3E8D  0F 8D ED 02 00 00         JGE 0x006d4180
LAB_006d3e93:
006D3E93  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D3E96  33 C9                     XOR ECX,ECX
006D3E98  8A 0A                     MOV CL,byte ptr [EDX]
006D3E9A  85 C9                     TEST ECX,ECX
006D3E9C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006D3E9F  75 44                     JNZ 0x006d3ee5
006D3EA1  8B 4D 54                  MOV ECX,dword ptr [EBP + 0x54]
006D3EA4  85 C9                     TEST ECX,ECX
006D3EA6  74 0A                     JZ 0x006d3eb2
006D3EA8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D3EAB  8A 55 4F                  MOV DL,byte ptr [EBP + 0x4f]
006D3EAE  84 11                     TEST byte ptr [ECX],DL
006D3EB0  74 33                     JZ 0x006d3ee5
LAB_006d3eb2:
006D3EB2  8A 4D 4F                  MOV CL,byte ptr [EBP + 0x4f]
006D3EB5  D0 E9                     SHR CL,0x1
006D3EB7  88 4D 4F                  MOV byte ptr [EBP + 0x4f],CL
006D3EBA  75 12                     JNZ 0x006d3ece
006D3EBC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D3EBF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D3EC2  42                        INC EDX
006D3EC3  41                        INC ECX
006D3EC4  C6 45 4F 80               MOV byte ptr [EBP + 0x4f],0x80
006D3EC8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D3ECB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006d3ece:
006D3ECE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D3ED1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D3ED4  46                        INC ESI
006D3ED5  42                        INC EDX
006D3ED6  41                        INC ECX
006D3ED7  40                        INC EAX
006D3ED8  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006D3EDB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006D3EDE  3B C1                     CMP EAX,ECX
006D3EE0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D3EE3  7C AE                     JL 0x006d3e93
LAB_006d3ee5:
006D3EE5  85 F6                     TEST ESI,ESI
006D3EE7  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D3EEA  0F 84 90 02 00 00         JZ 0x006d4180
006D3EF0  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006D3EF3  85 C9                     TEST ECX,ECX
006D3EF5  0F 84 13 01 00 00         JZ 0x006d400e
006D3EFB  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006D3EFE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D3F01  03 C1                     ADD EAX,ECX
006D3F03  99                        CDQ
006D3F04  F7 7D E8                  IDIV dword ptr [EBP + -0x18]
006D3F07  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D3F0A  8B FA                     MOV EDI,EDX
006D3F0C  99                        CDQ
006D3F0D  F7 7D CC                  IDIV dword ptr [EBP + -0x34]
006D3F10  8B 45 50                  MOV EAX,dword ptr [EBP + 0x50]
006D3F13  8B CF                     MOV ECX,EDI
006D3F15  0F AF CB                  IMUL ECX,EBX
006D3F18  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006D3F1B  0F AF 55 40               IMUL EDX,dword ptr [EBP + 0x40]
006D3F1F  2B C2                     SUB EAX,EDX
006D3F21  48                        DEC EAX
006D3F22  0F AF 45 48               IMUL EAX,dword ptr [EBP + 0x48]
006D3F26  2B D8                     SUB EBX,EAX
006D3F28  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
LAB_006d3f2b:
006D3F2B  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D3F2E  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
006D3F31  03 D9                     ADD EBX,ECX
006D3F33  3B 55 E8                  CMP EDX,dword ptr [EBP + -0x18]
006D3F36  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006D3F39  8B CE                     MOV ECX,ESI
006D3F3B  7E 05                     JLE 0x006d3f42
006D3F3D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D3F40  2B CF                     SUB ECX,EDI
LAB_006d3f42:
006D3F42  8B 55 3C                  MOV EDX,dword ptr [EBP + 0x3c]
006D3F45  2B F1                     SUB ESI,ECX
006D3F47  33 FF                     XOR EDI,EDI
006D3F49  83 FA 08                  CMP EDX,0x8
006D3F4C  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006D3F4F  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
006D3F52  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
006D3F55  75 59                     JNZ 0x006d3fb0
006D3F57  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006D3F5A  03 C9                     ADD ECX,ECX
006D3F5C  3B D7                     CMP EDX,EDI
006D3F5E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006D3F61  7E 48                     JLE 0x006d3fab
006D3F63  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
LAB_006d3f66:
006D3F66  85 C9                     TEST ECX,ECX
006D3F68  7E 2B                     JLE 0x006d3f95
006D3F6A  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006D3F6D  8B FB                     MOV EDI,EBX
006D3F6F  83 C0 04                  ADD EAX,0x4
006D3F72  2B FE                     SUB EDI,ESI
006D3F74  41                        INC ECX
006D3F75  8B D3                     MOV EDX,EBX
006D3F77  D1 E9                     SHR ECX,0x1
LAB_006d3f79:
006D3F79  8B 32                     MOV ESI,dword ptr [EDX]
006D3F7B  83 C2 08                  ADD EDX,0x8
006D3F7E  89 70 FC                  MOV dword ptr [EAX + -0x4],ESI
006D3F81  8B 34 07                  MOV ESI,dword ptr [EDI + EAX*0x1]
006D3F84  89 30                     MOV dword ptr [EAX],ESI
006D3F86  83 C0 08                  ADD EAX,0x8
006D3F89  49                        DEC ECX
006D3F8A  75 ED                     JNZ 0x006d3f79
006D3F8C  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D3F8F  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
006D3F92  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006d3f95:
006D3F95  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D3F98  8B 7D 48                  MOV EDI,dword ptr [EBP + 0x48]
006D3F9B  03 C2                     ADD EAX,EDX
006D3F9D  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006D3FA0  03 DF                     ADD EBX,EDI
006D3FA2  4A                        DEC EDX
006D3FA3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006D3FA6  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006D3FA9  75 BB                     JNZ 0x006d3f66
LAB_006d3fab:
006D3FAB  C1 E1 02                  SHL ECX,0x2
006D3FAE  EB 40                     JMP 0x006d3ff0
LAB_006d3fb0:
006D3FB0  0F AF CA                  IMUL ECX,EDX
006D3FB3  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006D3FB6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006D3FB9  3B D7                     CMP EDX,EDI
006D3FBB  7E 33                     JLE 0x006d3ff0
006D3FBD  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006D3FC0  EB 03                     JMP 0x006d3fc5
LAB_006d3fc2:
006D3FC2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006d3fc5:
006D3FC5  8B D1                     MOV EDX,ECX
006D3FC7  8B F3                     MOV ESI,EBX
006D3FC9  8B F8                     MOV EDI,EAX
006D3FCB  C1 E9 02                  SHR ECX,0x2
006D3FCE  F3 A5                     MOVSD.REP ES:EDI,ESI
006D3FD0  8B CA                     MOV ECX,EDX
006D3FD2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D3FD5  83 E1 03                  AND ECX,0x3
006D3FD8  03 C2                     ADD EAX,EDX
006D3FDA  F3 A4                     MOVSB.REP ES:EDI,ESI
006D3FDC  8B 75 48                  MOV ESI,dword ptr [EBP + 0x48]
006D3FDF  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006D3FE2  03 DE                     ADD EBX,ESI
006D3FE4  49                        DEC ECX
006D3FE5  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006D3FE8  75 D8                     JNZ 0x006d3fc2
006D3FEA  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
006D3FED  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006d3ff0:
006D3FF0  85 F6                     TEST ESI,ESI
006D3FF2  0F 8E B8 01 00 00         JLE 0x006d41b0
006D3FF8  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D3FFB  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006D3FFE  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
006D4001  03 C1                     ADD EAX,ECX
006D4003  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006D4006  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006D4009  E9 1D FF FF FF            JMP 0x006d3f2b
LAB_006d400e:
006D400E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D4011  0F AF F3                  IMUL ESI,EBX
006D4014  85 C9                     TEST ECX,ECX
006D4016  0F 8E 9A 01 00 00         JLE 0x006d41b6
006D401C  8B C1                     MOV EAX,ECX
006D401E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006D4021  EB 03                     JMP 0x006d4026
LAB_006d4023:
006D4023  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
LAB_006d4026:
006D4026  8B CE                     MOV ECX,ESI
006D4028  33 C0                     XOR EAX,EAX
006D402A  8B D1                     MOV EDX,ECX
006D402C  C1 E9 02                  SHR ECX,0x2
006D402F  F3 AB                     STOSD.REP ES:EDI
006D4031  8B CA                     MOV ECX,EDX
006D4033  83 E1 03                  AND ECX,0x3
006D4036  F3 AA                     STOSB.REP ES:EDI
006D4038  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D403B  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D403E  03 C8                     ADD ECX,EAX
006D4040  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006D4043  48                        DEC EAX
006D4044  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006D4047  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006D404A  75 D7                     JNZ 0x006d4023
006D404C  E9 62 01 00 00            JMP 0x006d41b3
LAB_006d4051:
006D4051  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D4054  85 C9                     TEST ECX,ECX
006D4056  74 47                     JZ 0x006d409f
006D4058  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006D405B  85 C9                     TEST ECX,ECX
006D405D  74 40                     JZ 0x006d409f
006D405F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D4062  33 C9                     XOR ECX,ECX
006D4064  8A 0A                     MOV CL,byte ptr [EDX]
006D4066  8B F1                     MOV ESI,ECX
006D4068  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006D406B  49                        DEC ECX
006D406C  3B F1                     CMP ESI,ECX
006D406E  74 2F                     JZ 0x006d409f
006D4070  8B 4D 58                  MOV ECX,dword ptr [EBP + 0x58]
006D4073  85 C9                     TEST ECX,ECX
006D4075  74 0A                     JZ 0x006d4081
006D4077  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006D407A  8A 4D 4F                  MOV CL,byte ptr [EBP + 0x4f]
006D407D  84 0A                     TEST byte ptr [EDX],CL
006D407F  74 1E                     JZ 0x006d409f
LAB_006d4081:
006D4081  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006D4084  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006D4087  6A 00                     PUSH 0x0
006D4089  52                        PUSH EDX
006D408A  8B 0C B0                  MOV ECX,dword ptr [EAX + ESI*0x4]
006D408D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D4090  53                        PUSH EBX
006D4091  6A 00                     PUSH 0x0
006D4093  53                        PUSH EBX
006D4094  51                        PUSH ECX
006D4095  52                        PUSH EDX
006D4096  57                        PUSH EDI
006D4097  E8 D4 6B 00 00            CALL 0x006dac70
006D409C  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
LAB_006d409f:
006D409F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D40A2  85 C9                     TEST ECX,ECX
006D40A4  0F 84 D6 00 00 00         JZ 0x006d4180
006D40AA  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006D40AD  85 F6                     TEST ESI,ESI
006D40AF  0F 84 CB 00 00 00         JZ 0x006d4180
006D40B5  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D40B8  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006D40BB  49                        DEC ECX
006D40BC  3B D1                     CMP EDX,ECX
006D40BE  0F 84 BC 00 00 00         JZ 0x006d4180
006D40C4  8B 4D 54                  MOV ECX,dword ptr [EBP + 0x54]
006D40C7  85 C9                     TEST ECX,ECX
006D40C9  74 0E                     JZ 0x006d40d9
006D40CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006D40CE  8A 55 4F                  MOV DL,byte ptr [EBP + 0x4f]
006D40D1  84 11                     TEST byte ptr [ECX],DL
006D40D3  0F 84 A7 00 00 00         JZ 0x006d4180
LAB_006d40d9:
006D40D9  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006D40DC  8B 4D 44                  MOV ECX,dword ptr [EBP + 0x44]
006D40DF  85 C9                     TEST ECX,ECX
006D40E1  8B 04 96                  MOV EAX,dword ptr [ESI + EDX*0x4]
006D40E4  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006D40E7  74 7F                     JZ 0x006d4168
006D40E9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006D40EC  8B 75 50                  MOV ESI,dword ptr [EBP + 0x50]
006D40EF  99                        CDQ
006D40F0  F7 7D CC                  IDIV dword ptr [EBP + -0x34]
006D40F3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D40F6  B1 80                     MOV CL,0x80
006D40F8  0F AF 55 40               IMUL EDX,dword ptr [EBP + 0x40]
006D40FC  2B F2                     SUB ESI,EDX
006D40FE  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D4101  03 C2                     ADD EAX,EDX
006D4103  4E                        DEC ESI
006D4104  99                        CDQ
006D4105  0F AF 75 48               IMUL ESI,dword ptr [EBP + 0x48]
006D4109  F7 7D E8                  IDIV dword ptr [EBP + -0x18]
006D410C  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006D410F  0F AF D3                  IMUL EDX,EBX
006D4112  2B D6                     SUB EDX,ESI
006D4114  03 D0                     ADD EDX,EAX
006D4116  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006D4119  85 C0                     TEST EAX,EAX
006D411B  7E 60                     JLE 0x006d417d
006D411D  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_006d4120:
006D4120  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D4123  85 DB                     TEST EBX,EBX
006D4125  7E 1D                     JLE 0x006d4144
006D4127  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_006d412a:
006D412A  84 0E                     TEST byte ptr [ESI],CL
006D412C  74 04                     JZ 0x006d4132
006D412E  8A 02                     MOV AL,byte ptr [EDX]
006D4130  88 07                     MOV byte ptr [EDI],AL
LAB_006d4132:
006D4132  47                        INC EDI
006D4133  42                        INC EDX
006D4134  D0 E9                     SHR CL,0x1
006D4136  75 03                     JNZ 0x006d413b
006D4138  46                        INC ESI
006D4139  B1 80                     MOV CL,0x80
LAB_006d413b:
006D413B  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006D413E  48                        DEC EAX
006D413F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006D4142  75 E6                     JNZ 0x006d412a
LAB_006d4144:
006D4144  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006D4147  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D414A  03 F0                     ADD ESI,EAX
006D414C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D414F  2B C3                     SUB EAX,EBX
006D4151  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006D4154  03 F8                     ADD EDI,EAX
006D4156  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
006D4159  2B C3                     SUB EAX,EBX
006D415B  03 D0                     ADD EDX,EAX
006D415D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006D4160  48                        DEC EAX
006D4161  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006D4164  75 BA                     JNZ 0x006d4120
006D4166  EB 15                     JMP 0x006d417d
LAB_006d4168:
006D4168  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006D416B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D416E  6A 00                     PUSH 0x0
006D4170  51                        PUSH ECX
006D4171  53                        PUSH EBX
006D4172  6A 00                     PUSH 0x0
006D4174  53                        PUSH EBX
006D4175  50                        PUSH EAX
006D4176  52                        PUSH EDX
006D4177  57                        PUSH EDI
006D4178  E8 F3 6A 00 00            CALL 0x006dac70
LAB_006d417d:
006D417D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
LAB_006d4180:
006D4180  8A 4D 4F                  MOV CL,byte ptr [EBP + 0x4f]
006D4183  D0 E9                     SHR CL,0x1
006D4185  88 4D 4F                  MOV byte ptr [EBP + 0x4f],CL
006D4188  75 12                     JNZ 0x006d419c
006D418A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D418D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D4190  42                        INC EDX
006D4191  41                        INC ECX
006D4192  C6 45 4F 80               MOV byte ptr [EBP + 0x4f],0x80
006D4196  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006D4199  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006d419c:
006D419C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D419F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006D41A2  46                        INC ESI
006D41A3  42                        INC EDX
006D41A4  40                        INC EAX
006D41A5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006D41A8  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006D41AB  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D41AE  EB 06                     JMP 0x006d41b6
LAB_006d41b0:
006D41B0  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
LAB_006d41b3:
006D41B3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
LAB_006d41b6:
006D41B6  3B 45 24                  CMP EAX,dword ptr [EBP + 0x24]
006D41B9  0F 8C 8F FC FF FF         JL 0x006d3e4e
006D41BF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006D41C2  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006D41C5  8B 75 AC                  MOV ESI,dword ptr [EBP + -0x54]
LAB_006d41c8:
006D41C8  8B 45 54                  MOV EAX,dword ptr [EBP + 0x54]
006D41CB  85 C0                     TEST EAX,EAX
006D41CD  74 0B                     JZ 0x006d41da
006D41CF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006D41D2  8B 7D 54                  MOV EDI,dword ptr [EBP + 0x54]
006D41D5  03 F8                     ADD EDI,EAX
006D41D7  89 7D 54                  MOV dword ptr [EBP + 0x54],EDI
LAB_006d41da:
006D41DA  8B 45 58                  MOV EAX,dword ptr [EBP + 0x58]
006D41DD  85 C0                     TEST EAX,EAX
006D41DF  74 0B                     JZ 0x006d41ec
006D41E1  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006D41E4  8B 7D 58                  MOV EDI,dword ptr [EBP + 0x58]
006D41E7  03 F8                     ADD EDI,EAX
006D41E9  89 7D 58                  MOV dword ptr [EBP + 0x58],EDI
LAB_006d41ec:
006D41EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D41EF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D41F2  0F AF 45 40               IMUL EAX,dword ptr [EBP + 0x40]
006D41F6  03 F8                     ADD EDI,EAX
006D41F8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D41FB  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D41FE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006D4201  03 C8                     ADD ECX,EAX
006D4203  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006D4206  47                        INC EDI
006D4207  48                        DEC EAX
006D4208  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006D420B  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006D420E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006D4211  0F 85 0F FC FF FF         JNZ 0x006d3e26
LAB_006d4217:
006D4217  5F                        POP EDI
006D4218  5E                        POP ESI
006D4219  5B                        POP EBX
006D421A  8B E5                     MOV ESP,EBP
006D421C  5D                        POP EBP
006D421D  C2 54 00                  RET 0x54
