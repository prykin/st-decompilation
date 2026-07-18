FUN_006d4cf0:
006D4CF0  55                        PUSH EBP
006D4CF1  8B EC                     MOV EBP,ESP
006D4CF3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D4CF6  56                        PUSH ESI
006D4CF7  57                        PUSH EDI
006D4CF8  B9 04 00 00 00            MOV ECX,0x4
006D4CFD  BF 58 13 7A 00            MOV EDI,0x7a1358
006D4D02  8D 70 2C                  LEA ESI,[EAX + 0x2c]
006D4D05  33 D2                     XOR EDX,EDX
006D4D07  F3 A7                     CMPSD.REPE ES:EDI,ESI
006D4D09  75 5F                     JNZ 0x006d4d6a
006D4D0B  83 78 40 58               CMP dword ptr [EAX + 0x40],0x58
006D4D0F  73 09                     JNC 0x006d4d1a
006D4D11  5F                        POP EDI
006D4D12  B8 05 40 00 80            MOV EAX,0x80004005
006D4D17  5E                        POP ESI
006D4D18  5D                        POP EBP
006D4D19  C3                        RET
LAB_006d4d1a:
006D4D1A  B9 04 00 00 00            MOV ECX,0x4
006D4D1F  BF 48 13 7A 00            MOV EDI,0x7a1348
006D4D24  8B F0                     MOV ESI,EAX
006D4D26  33 D2                     XOR EDX,EDX
006D4D28  F3 A7                     CMPSD.REPE ES:EDI,ESI
006D4D2A  75 3E                     JNZ 0x006d4d6a
006D4D2C  8B 70 44                  MOV ESI,dword ptr [EAX + 0x44]
006D4D2F  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006D4D32  8D 7E 30                  LEA EDI,[ESI + 0x30]
006D4D35  83 F9 28                  CMP ECX,0x28
006D4D38  75 30                     JNZ 0x006d4d6a
006D4D3A  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006D4D3D  85 C9                     TEST ECX,ECX
006D4D3F  7E 29                     JLE 0x006d4d6a
006D4D41  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006D4D44  85 C9                     TEST ECX,ECX
006D4D46  74 22                     JZ 0x006d4d6a
006D4D48  66 83 7E 3C 01            CMP word ptr [ESI + 0x3c],0x1
006D4D4D  75 1B                     JNZ 0x006d4d6a
006D4D4F  83 C0 10                  ADD EAX,0x10
006D4D52  50                        PUSH EAX
006D4D53  E8 31 4C 07 00            CALL 0x00749989
006D4D58  66 3D FF FF               CMP AX,0xffff
006D4D5C  74 0C                     JZ 0x006d4d6a
006D4D5E  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006D4D61  85 C0                     TEST EAX,EAX
006D4D63  74 0E                     JZ 0x006d4d73
006D4D65  83 F8 03                  CMP EAX,0x3
006D4D68  74 0E                     JZ 0x006d4d78
LAB_006d4d6a:
006D4D6A  5F                        POP EDI
006D4D6B  B8 57 00 07 80            MOV EAX,0x80070057
006D4D70  5E                        POP ESI
006D4D71  5D                        POP EBP
006D4D72  C3                        RET
LAB_006d4d73:
006D4D73  83 F8 03                  CMP EAX,0x3
006D4D76  75 10                     JNZ 0x006d4d88
LAB_006d4d78:
006D4D78  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
006D4D7C  66 3D 10 00               CMP AX,0x10
006D4D80  74 06                     JZ 0x006d4d88
006D4D82  66 3D 20 00               CMP AX,0x20
006D4D86  75 E2                     JNZ 0x006d4d6a
LAB_006d4d88:
006D4D88  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006D4D8B  85 C0                     TEST EAX,EAX
006D4D8D  74 0B                     JZ 0x006d4d9a
006D4D8F  57                        PUSH EDI
006D4D90  E8 AC 4A 07 00            CALL 0x00749841
006D4D95  39 46 44                  CMP dword ptr [ESI + 0x44],EAX
006D4D98  75 D0                     JNZ 0x006d4d6a
LAB_006d4d9a:
006D4D9A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D4D9D  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
006D4DA1  8B D0                     MOV EDX,EAX
006D4DA3  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
006D4DA6  81 E2 FF FF 00 00         AND EDX,0xffff
006D4DAC  39 51 20                  CMP dword ptr [ECX + 0x20],EDX
006D4DAF  0F 8C A3 00 00 00         JL 0x006d4e58
006D4DB5  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D4DB8  8B 16                     MOV EDX,dword ptr [ESI]
006D4DBA  2B C2                     SUB EAX,EDX
006D4DBC  89 87 90 00 00 00         MOV dword ptr [EDI + 0x90],EAX
006D4DC2  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006D4DC5  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006D4DC8  2B C2                     SUB EAX,EDX
006D4DCA  8B 97 90 00 00 00         MOV EDX,dword ptr [EDI + 0x90]
006D4DD0  85 D2                     TEST EDX,EDX
006D4DD2  89 87 94 00 00 00         MOV dword ptr [EDI + 0x94],EAX
006D4DD8  74 04                     JZ 0x006d4dde
006D4DDA  85 C0                     TEST EAX,EAX
006D4DDC  75 17                     JNZ 0x006d4df5
LAB_006d4dde:
006D4DDE  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006D4DE1  89 97 90 00 00 00         MOV dword ptr [EDI + 0x90],EDX
006D4DE7  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006D4DEA  99                        CDQ
006D4DEB  33 C2                     XOR EAX,EDX
006D4DED  2B C2                     SUB EAX,EDX
006D4DEF  89 87 94 00 00 00         MOV dword ptr [EDI + 0x94],EAX
LAB_006d4df5:
006D4DF5  F7 47 04 00 00 00 08      TEST dword ptr [EDI + 0x4],0x8000000
006D4DFC  75 20                     JNZ 0x006d4e1e
006D4DFE  8B 87 90 00 00 00         MOV EAX,dword ptr [EDI + 0x90]
006D4E04  8B 97 94 00 00 00         MOV EDX,dword ptr [EDI + 0x94]
006D4E0A  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
006D4E11  C7 47 0C 00 00 00 00      MOV dword ptr [EDI + 0xc],0x0
006D4E18  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
006D4E1B  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
LAB_006d4e1e:
006D4E1E  66 8B 46 3E               MOV AX,word ptr [ESI + 0x3e]
006D4E22  66 3D 08 00               CMP AX,0x8
006D4E26  75 30                     JNZ 0x006d4e58
006D4E28  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
006D4E2B  85 C9                     TEST ECX,ECX
006D4E2D  75 05                     JNZ 0x006d4e34
006D4E2F  B9 00 01 00 00            MOV ECX,0x100
LAB_006d4e34:
006D4E34  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D4E37  53                        PUSH EBX
006D4E38  8D 04 8D 58 00 00 00      LEA EAX,[ECX*0x4 + 0x58]
006D4E3F  8B 5A 40                  MOV EBX,dword ptr [EDX + 0x40]
006D4E42  3B D8                     CMP EBX,EAX
006D4E44  5B                        POP EBX
006D4E45  72 0B                     JC 0x006d4e52
006D4E47  83 C6 58                  ADD ESI,0x58
006D4E4A  81 C7 08 01 00 00         ADD EDI,0x108
006D4E50  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_006d4e52:
006D4E52  5F                        POP EDI
006D4E53  33 C0                     XOR EAX,EAX
006D4E55  5E                        POP ESI
006D4E56  5D                        POP EBP
006D4E57  C3                        RET
LAB_006d4e58:
006D4E58  8B 79 20                  MOV EDI,dword ptr [ECX + 0x20]
006D4E5B  8B D0                     MOV EDX,EAX
006D4E5D  81 E2 FF FF 00 00         AND EDX,0xffff
006D4E63  3B FA                     CMP EDI,EDX
006D4E65  0F 85 FF FE FF FF         JNZ 0x006d4d6a
006D4E6B  66 3D 10 00               CMP AX,0x10
006D4E6F  75 6B                     JNZ 0x006d4edc
006D4E71  83 7E 40 03               CMP dword ptr [ESI + 0x40],0x3
006D4E75  75 38                     JNZ 0x006d4eaf
006D4E77  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
006D4E7A  8B 91 C4 04 00 00         MOV EDX,dword ptr [ECX + 0x4c4]
006D4E80  3B C2                     CMP EAX,EDX
006D4E82  0F 85 E2 FE FF FF         JNZ 0x006d4d6a
006D4E88  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
006D4E8B  8B 81 C8 04 00 00         MOV EAX,dword ptr [ECX + 0x4c8]
006D4E91  3B D0                     CMP EDX,EAX
006D4E93  0F 85 D1 FE FF FF         JNZ 0x006d4d6a
006D4E99  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006D4E9C  8B 91 CC 04 00 00         MOV EDX,dword ptr [ECX + 0x4cc]
006D4EA2  3B C2                     CMP EAX,EDX
006D4EA4  74 36                     JZ 0x006d4edc
006D4EA6  5F                        POP EDI
006D4EA7  B8 57 00 07 80            MOV EAX,0x80070057
006D4EAC  5E                        POP ESI
006D4EAD  5D                        POP EBP
006D4EAE  C3                        RET
LAB_006d4eaf:
006D4EAF  81 B9 C4 04 00 00 00 7C 00 00  CMP dword ptr [ECX + 0x4c4],0x7c00
006D4EB9  0F 85 AB FE FF FF         JNZ 0x006d4d6a
006D4EBF  81 B9 C8 04 00 00 E0 03 00 00  CMP dword ptr [ECX + 0x4c8],0x3e0
006D4EC9  0F 85 9B FE FF FF         JNZ 0x006d4d6a
006D4ECF  83 B9 CC 04 00 00 1F      CMP dword ptr [ECX + 0x4cc],0x1f
006D4ED6  0F 85 8E FE FF FF         JNZ 0x006d4d6a
LAB_006d4edc:
006D4EDC  5F                        POP EDI
006D4EDD  33 C0                     XOR EAX,EAX
006D4EDF  5E                        POP ESI
006D4EE0  5D                        POP EBP
006D4EE1  C3                        RET
