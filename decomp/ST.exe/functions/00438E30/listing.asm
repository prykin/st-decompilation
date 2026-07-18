STAllPlayersC::SaveTmp:
00438E30  55                        PUSH EBP
00438E31  8B EC                     MOV EBP,ESP
00438E33  83 EC 4C                  SUB ESP,0x4c
00438E36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00438E3B  53                        PUSH EBX
00438E3C  56                        PUSH ESI
00438E3D  57                        PUSH EDI
00438E3E  8D 55 B8                  LEA EDX,[EBP + -0x48]
00438E41  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00438E44  6A 00                     PUSH 0x0
00438E46  52                        PUSH EDX
00438E47  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00438E4A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00438E50  E8 9B 49 2F 00            CALL 0x0072d7f0
00438E55  8B F0                     MOV ESI,EAX
00438E57  83 C4 08                  ADD ESP,0x8
00438E5A  85 F6                     TEST ESI,ESI
00438E5C  0F 85 B1 01 00 00         JNZ 0x00439013
00438E62  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00438E65  85 DB                     TEST EBX,EBX
00438E67  7C 05                     JL 0x00438e6e
00438E69  83 FB 09                  CMP EBX,0x9
00438E6C  7E 1A                     JLE 0x00438e88
LAB_00438e6e:
00438E6E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00438E73  68 D8 16 00 00            PUSH 0x16d8
00438E78  68 04 60 7A 00            PUSH 0x7a6004
00438E7D  50                        PUSH EAX
00438E7E  68 09 00 FE AF            PUSH 0xaffe0009
00438E83  E8 B8 CF 26 00            CALL 0x006a5e40
LAB_00438e88:
00438E88  33 C0                     XOR EAX,EAX
00438E8A  A0 4D 87 80 00            MOV AL,[0x0080874d]
00438E8F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00438E92  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00438E95  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
00438E98  C1 E6 04                  SHL ESI,0x4
00438E9B  03 F0                     ADD ESI,EAX
00438E9D  D1 E6                     SHL ESI,0x1
00438E9F  8B 86 23 50 7F 00         MOV EAX,dword ptr [ESI + 0x7f5023]
00438EA5  83 E8 00                  SUB EAX,0x0
00438EA8  74 4F                     JZ 0x00438ef9
00438EAA  48                        DEC EAX
00438EAB  74 44                     JZ 0x00438ef1
00438EAD  68 AC 74 7A 00            PUSH 0x7a74ac
00438EB2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00438EB7  6A 00                     PUSH 0x0
00438EB9  6A 00                     PUSH 0x0
00438EBB  68 DD 16 00 00            PUSH 0x16dd
00438EC0  68 04 60 7A 00            PUSH 0x7a6004
00438EC5  E8 06 46 27 00            CALL 0x006ad4d0
00438ECA  83 C4 18                  ADD ESP,0x18
00438ECD  85 C0                     TEST EAX,EAX
00438ECF  74 01                     JZ 0x00438ed2
00438ED1  CC                        INT3
LAB_00438ed2:
00438ED2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00438ED7  68 DE 16 00 00            PUSH 0x16de
00438EDC  68 04 60 7A 00            PUSH 0x7a6004
00438EE1  50                        PUSH EAX
00438EE2  68 09 00 FE AF            PUSH 0xaffe0009
00438EE7  E8 54 CF 26 00            CALL 0x006a5e40
00438EEC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00438EEF  EB 11                     JMP 0x00438f02
LAB_00438ef1:
00438EF1  8D BE D3 4F 7F 00         LEA EDI,[ESI + 0x7f4fd3]
00438EF7  EB 06                     JMP 0x00438eff
LAB_00438ef9:
00438EF9  8D BE 83 4F 7F 00         LEA EDI,[ESI + 0x7f4f83]
LAB_00438eff:
00438EFF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00438f02:
00438F02  83 3F 00                  CMP dword ptr [EDI],0x0
00438F05  74 2C                     JZ 0x00438f33
00438F07  8B CB                     MOV ECX,EBX
00438F09  C1 E1 04                  SHL ECX,0x4
00438F0C  8D 84 31 27 50 7F 00      LEA EAX,[ECX + ESI*0x1 + 0x7f5027]
00438F13  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00438F16  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
00438F19  85 C0                     TEST EAX,EAX
00438F1B  74 16                     JZ 0x00438f33
00438F1D  50                        PUSH EAX
00438F1E  E8 ED 51 27 00            CALL 0x006ae110
00438F23  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00438F26  C7 40 0A 00 00 00 00      MOV dword ptr [EAX + 0xa],0x0
00438F2D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_00438f33:
00438F33  8B 07                     MOV EAX,dword ptr [EDI]
00438F35  3D 9A 01 00 00            CMP EAX,0x19a
00438F3A  7F 60                     JG 0x00438f9c
00438F3C  74 27                     JZ 0x00438f65
00438F3E  83 F8 5A                  CMP EAX,0x5a
00438F41  7F 15                     JG 0x00438f58
00438F43  0F 84 9E 00 00 00         JZ 0x00438fe7
00438F49  85 C0                     TEST EAX,EAX
00438F4B  0F 84 B0 00 00 00         JZ 0x00439001
00438F51  83 F8 3C                  CMP EAX,0x3c
00438F54  74 0F                     JZ 0x00438f65
00438F56  EB 58                     JMP 0x00438fb0
LAB_00438f58:
00438F58  3D 72 01 00 00            CMP EAX,0x172
00438F5D  0F 84 84 00 00 00         JZ 0x00438fe7
00438F63  EB 4B                     JMP 0x00438fb0
LAB_00438f65:
00438F65  C1 E3 04                  SHL EBX,0x4
00438F68  8D 8C 33 27 50 7F 00      LEA ECX,[EBX + ESI*0x1 + 0x7f5027]
00438F6F  89 01                     MOV dword ptr [ECX],EAX
00438F71  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00438F74  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00438F77  66 8B 47 0E               MOV AX,word ptr [EDI + 0xe]
00438F7B  66 89 41 0E               MOV word ptr [ECX + 0xe],AX
00438F7F  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00438F82  83 C1 0A                  ADD ECX,0xa
00438F85  E8 B6 6E 27 00            CALL 0x006afe40
00438F8A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00438F8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00438F93  5F                        POP EDI
00438F94  5E                        POP ESI
00438F95  5B                        POP EBX
00438F96  8B E5                     MOV ESP,EBP
00438F98  5D                        POP EBP
00438F99  C2 04 00                  RET 0x4
LAB_00438f9c:
00438F9C  8B C8                     MOV ECX,EAX
00438F9E  81 E9 A4 01 00 00         SUB ECX,0x1a4
00438FA4  74 41                     JZ 0x00438fe7
00438FA6  83 E9 0A                  SUB ECX,0xa
00438FA9  74 3C                     JZ 0x00438fe7
00438FAB  83 E9 0A                  SUB ECX,0xa
00438FAE  74 37                     JZ 0x00438fe7
LAB_00438fb0:
00438FB0  68 78 74 7A 00            PUSH 0x7a7478
00438FB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00438FBA  6A 00                     PUSH 0x0
00438FBC  6A 00                     PUSH 0x0
00438FBE  68 F9 16 00 00            PUSH 0x16f9
00438FC3  68 04 60 7A 00            PUSH 0x7a6004
00438FC8  E8 03 45 27 00            CALL 0x006ad4d0
00438FCD  83 C4 18                  ADD ESP,0x18
00438FD0  85 C0                     TEST EAX,EAX
00438FD2  74 2D                     JZ 0x00439001
00438FD4  CC                        INT3
LAB_00438fe7:
00438FE7  C1 E3 04                  SHL EBX,0x4
00438FEA  8D 8C 33 27 50 7F 00      LEA ECX,[EBX + ESI*0x1 + 0x7f5027]
00438FF1  89 01                     MOV dword ptr [ECX],EAX
00438FF3  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00438FF6  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00438FF9  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
00438FFD  66 89 41 08               MOV word ptr [ECX + 0x8],AX
LAB_00439001:
00439001  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00439004  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043900A  5F                        POP EDI
0043900B  5E                        POP ESI
0043900C  5B                        POP EBX
0043900D  8B E5                     MOV ESP,EBP
0043900F  5D                        POP EBP
00439010  C2 04 00                  RET 0x4
LAB_00439013:
00439013  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00439016  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0043901C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00439022  74 37                     JZ 0x0043905b
00439024  68 5C 74 7A 00            PUSH 0x7a745c
00439029  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043902E  6A 00                     PUSH 0x0
00439030  6A 00                     PUSH 0x0
00439032  68 FD 16 00 00            PUSH 0x16fd
00439037  68 04 60 7A 00            PUSH 0x7a6004
0043903C  E8 8F 44 27 00            CALL 0x006ad4d0
00439041  83 C4 18                  ADD ESP,0x18
00439044  85 C0                     TEST EAX,EAX
00439046  74 01                     JZ 0x00439049
00439048  CC                        INT3
LAB_00439049:
00439049  68 FE 16 00 00            PUSH 0x16fe
0043904E  68 04 60 7A 00            PUSH 0x7a6004
00439053  6A 00                     PUSH 0x0
00439055  56                        PUSH ESI
00439056  E8 E5 CD 26 00            CALL 0x006a5e40
LAB_0043905b:
0043905B  5F                        POP EDI
0043905C  5E                        POP ESI
0043905D  5B                        POP EBX
0043905E  8B E5                     MOV ESP,EBP
00439060  5D                        POP EBP
00439061  C2 04 00                  RET 0x4
