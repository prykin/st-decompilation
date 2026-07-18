FUN_00575cb0:
00575CB0  55                        PUSH EBP
00575CB1  8B EC                     MOV EBP,ESP
00575CB3  81 EC E4 00 00 00         SUB ESP,0xe4
00575CB9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00575CBE  53                        PUSH EBX
00575CBF  56                        PUSH ESI
00575CC0  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00575CC3  57                        PUSH EDI
00575CC4  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
00575CCA  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
00575CD0  6A 00                     PUSH 0x0
00575CD2  52                        PUSH EDX
00575CD3  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
00575CD9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00575CDF  E8 0C 7B 1B 00            CALL 0x0072d7f0
00575CE4  8B F0                     MOV ESI,EAX
00575CE6  83 C4 08                  ADD ESP,0x8
00575CE9  85 F6                     TEST ESI,ESI
00575CEB  0F 85 5C 0A 00 00         JNZ 0x0057674d
00575CF1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00575CF4  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00575CF7  56                        PUSH ESI
00575CF8  8B CB                     MOV ECX,EBX
00575CFA  E8 D1 02 17 00            CALL 0x006e5fd0
00575CFF  3D FF FF 00 00            CMP EAX,0xffff
00575D04  75 17                     JNZ 0x00575d1d
00575D06  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00575D0B  6A 47                     PUSH 0x47
00575D0D  68 24 AB 7C 00            PUSH 0x7cab24
00575D12  50                        PUSH EAX
00575D13  68 08 00 FE AF            PUSH 0xaffe0008
00575D18  E8 23 01 13 00            CALL 0x006a5e40
LAB_00575d1d:
00575D1D  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00575D20  83 E8 02                  SUB EAX,0x2
00575D23  0F 84 46 03 00 00         JZ 0x0057606f
00575D29  48                        DEC EAX
00575D2A  0F 84 8A 02 00 00         JZ 0x00575fba
00575D30  2D 0C 01 00 00            SUB EAX,0x10c
00575D35  0F 85 FC 09 00 00         JNZ 0x00576737
00575D3B  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00575D3E  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
00575D41  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
00575D44  85 C0                     TEST EAX,EAX
00575D46  0F 8E EB 09 00 00         JLE 0x00576737
00575D4C  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00575D4F  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00575D52  8D 44 12 18               LEA EAX,[EDX + EDX*0x1 + 0x18]
00575D56  50                        PUSH EAX
00575D57  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00575D5A  E8 B1 4E 13 00            CALL 0x006aac10
00575D5F  B9 05 00 00 00            MOV ECX,0x5
00575D64  8D 73 1C                  LEA ESI,[EBX + 0x1c]
00575D67  8B F8                     MOV EDI,EAX
00575D69  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00575D6C  F3 A5                     MOVSD.REP ES:EDI,ESI
00575D6E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00575D71  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00575D78  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
00575D7F  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00575D82  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
00575D85  03 CA                     ADD ECX,EDX
00575D87  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00575D8A  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
00575D8D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00575D90  83 C0 18                  ADD EAX,0x18
00575D93  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00575D96  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00575D99  85 C0                     TEST EAX,EAX
00575D9B  0F 8E E7 00 00 00         JLE 0x00575e88
00575DA1  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_00575da8:
00575DA8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00575DAB  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00575DAE  03 F1                     ADD ESI,ECX
00575DB0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00575DB3  D9 46 04                  FLD float ptr [ESI + 0x4]
00575DB6  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
00575DBC  E8 C7 84 1B 00            CALL 0x0072e288
00575DC1  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00575DC4  66 89 07                  MOV word ptr [EDI],AX
00575DC7  D9 46 08                  FLD float ptr [ESI + 0x8]
00575DCA  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
00575DD0  E8 B3 84 1B 00            CALL 0x0072e288
00575DD5  66 89 47 02               MOV word ptr [EDI + 0x2],AX
00575DD9  D9 46 0C                  FLD float ptr [ESI + 0xc]
00575DDC  D8 25 84 B1 79 00         FSUB float ptr [0x0079b184]
00575DE2  DC 0D 78 B1 79 00         FMUL double ptr [0x0079b178]
00575DE8  E8 9B 84 1B 00            CALL 0x0072e288
00575DED  66 89 47 04               MOV word ptr [EDI + 0x4],AX
00575DF1  C7 87 8A 00 00 00 00 00 00 00  MOV dword ptr [EDI + 0x8a],0x0
00575DFB  8B 0E                     MOV ECX,dword ptr [ESI]
00575DFD  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00575E00  8D 57 06                  LEA EDX,[EDI + 0x6]
00575E03  8B 3C C8                  MOV EDI,dword ptr [EAX + ECX*0x8]
00575E06  83 C9 FF                  OR ECX,0xffffffff
00575E09  33 C0                     XOR EAX,EAX
00575E0B  F2 AE                     SCASB.REPNE ES:EDI
00575E0D  F7 D1                     NOT ECX
00575E0F  2B F9                     SUB EDI,ECX
00575E11  8B C1                     MOV EAX,ECX
00575E13  8B F7                     MOV ESI,EDI
00575E15  8B FA                     MOV EDI,EDX
00575E17  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00575E1A  C1 E9 02                  SHR ECX,0x2
00575E1D  F3 A5                     MOVSD.REP ES:EDI,ESI
00575E1F  8B C8                     MOV ECX,EAX
00575E21  83 E1 03                  AND ECX,0x3
00575E24  F3 A4                     MOVSB.REP ES:EDI,ESI
00575E26  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00575E29  8D 72 46                  LEA ESI,[EDX + 0x46]
00575E2C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00575E2F  81 C2 92 00 00 00         ADD EDX,0x92
00575E35  8B 01                     MOV EAX,dword ptr [ECX]
00575E37  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00575E3A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00575E3D  8B 7C C1 04               MOV EDI,dword ptr [ECX + EAX*0x8 + 0x4]
00575E41  83 C9 FF                  OR ECX,0xffffffff
00575E44  33 C0                     XOR EAX,EAX
00575E46  F2 AE                     SCASB.REPNE ES:EDI
00575E48  F7 D1                     NOT ECX
00575E4A  2B F9                     SUB EDI,ECX
00575E4C  8B C1                     MOV EAX,ECX
00575E4E  8B F7                     MOV ESI,EDI
00575E50  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00575E53  C1 E9 02                  SHR ECX,0x2
00575E56  F3 A5                     MOVSD.REP ES:EDI,ESI
00575E58  8B C8                     MOV ECX,EAX
00575E5A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00575E5D  83 E1 03                  AND ECX,0x3
00575E60  40                        INC EAX
00575E61  F3 A4                     MOVSB.REP ES:EDI,ESI
00575E63  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00575E66  C7 42 F4 FF FF FF FF      MOV dword ptr [EDX + -0xc],0xffffffff
00575E6D  C7 42 FC 00 00 00 00      MOV dword ptr [EDX + -0x4],0x0
00575E74  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
00575E77  83 C7 14                  ADD EDI,0x14
00575E7A  3B C1                     CMP EAX,ECX
00575E7C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00575E7F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00575E82  0F 8C 20 FF FF FF         JL 0x00575da8
LAB_00575e88:
00575E88  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00575E8B  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00575E92  85 C0                     TEST EAX,EAX
00575E94  0F 8E EA 00 00 00         JLE 0x00575f84
00575E9A  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_00575ea1:
00575EA1  8B 73 40                  MOV ESI,dword ptr [EBX + 0x40]
00575EA4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00575EA7  03 F1                     ADD ESI,ECX
00575EA9  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
00575EAC  D9 46 08                  FLD float ptr [ESI + 0x8]
00575EAF  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
00575EB5  E8 CE 83 1B 00            CALL 0x0072e288
00575EBA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00575EBD  66 89 07                  MOV word ptr [EDI],AX
00575EC0  D9 46 0C                  FLD float ptr [ESI + 0xc]
00575EC3  DC 0D 80 05 79 00         FMUL double ptr [0x00790580]
00575EC9  E8 BA 83 1B 00            CALL 0x0072e288
00575ECE  66 89 47 02               MOV word ptr [EDI + 0x2],AX
00575ED2  D9 46 10                  FLD float ptr [ESI + 0x10]
00575ED5  D8 25 FC 04 79 00         FSUB float ptr [0x007904fc]
00575EDB  DC 0D 78 B1 79 00         FMUL double ptr [0x0079b178]
00575EE1  E8 A2 83 1B 00            CALL 0x0072e288
00575EE6  66 89 47 04               MOV word ptr [EDI + 0x4],AX
00575EEA  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00575EED  89 8F 8A 00 00 00         MOV dword ptr [EDI + 0x8a],ECX
00575EF3  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00575EF6  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00575EF9  8D 57 06                  LEA EDX,[EDI + 0x6]
00575EFC  8B 3C C8                  MOV EDI,dword ptr [EAX + ECX*0x8]
00575EFF  83 C9 FF                  OR ECX,0xffffffff
00575F02  33 C0                     XOR EAX,EAX
00575F04  F2 AE                     SCASB.REPNE ES:EDI
00575F06  F7 D1                     NOT ECX
00575F08  2B F9                     SUB EDI,ECX
00575F0A  8B C1                     MOV EAX,ECX
00575F0C  8B F7                     MOV ESI,EDI
00575F0E  8B FA                     MOV EDI,EDX
00575F10  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00575F13  C1 E9 02                  SHR ECX,0x2
00575F16  F3 A5                     MOVSD.REP ES:EDI,ESI
00575F18  8B C8                     MOV ECX,EAX
00575F1A  83 E1 03                  AND ECX,0x3
00575F1D  F3 A4                     MOVSB.REP ES:EDI,ESI
00575F1F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00575F22  8D 72 46                  LEA ESI,[EDX + 0x46]
00575F25  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00575F28  81 C2 92 00 00 00         ADD EDX,0x92
00575F2E  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00575F31  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00575F34  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00575F37  8B 7C C1 04               MOV EDI,dword ptr [ECX + EAX*0x8 + 0x4]
00575F3B  83 C9 FF                  OR ECX,0xffffffff
00575F3E  33 C0                     XOR EAX,EAX
00575F40  F2 AE                     SCASB.REPNE ES:EDI
00575F42  F7 D1                     NOT ECX
00575F44  2B F9                     SUB EDI,ECX
00575F46  8B C1                     MOV EAX,ECX
00575F48  8B F7                     MOV ESI,EDI
00575F4A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00575F4D  C1 E9 02                  SHR ECX,0x2
00575F50  F3 A5                     MOVSD.REP ES:EDI,ESI
00575F52  8B C8                     MOV ECX,EAX
00575F54  83 E1 03                  AND ECX,0x3
00575F57  F3 A4                     MOVSB.REP ES:EDI,ESI
00575F59  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00575F5C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00575F5F  83 C7 2C                  ADD EDI,0x2c
00575F62  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
00575F65  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00575F68  89 42 F4                  MOV dword ptr [EDX + -0xc],EAX
00575F6B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00575F6E  C7 42 FC 00 00 00 00      MOV dword ptr [EDX + -0x4],0x0
00575F75  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00575F78  40                        INC EAX
00575F79  3B C1                     CMP EAX,ECX
00575F7B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00575F7E  0F 8C 1D FF FF FF         JL 0x00575ea1
LAB_00575f84:
00575F84  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00575F87  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00575F8A  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00575F8D  51                        PUSH ECX
00575F8E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00575F94  52                        PUSH EDX
00575F95  50                        PUSH EAX
00575F96  E8 5E C6 E8 FF            CALL 0x004025f9
00575F9B  8D 4D E8                  LEA ECX,[EBP + -0x18]
00575F9E  51                        PUSH ECX
00575F9F  E8 BC 50 13 00            CALL 0x006ab060
00575FA4  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00575FAA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00575FAF  33 C0                     XOR EAX,EAX
00575FB1  5F                        POP EDI
00575FB2  5E                        POP ESI
00575FB3  5B                        POP EBX
00575FB4  8B E5                     MOV ESP,EBP
00575FB6  5D                        POP EBP
00575FB7  C2 04 00                  RET 0x4
LAB_00575fba:
00575FBA  A1 98 75 80 00            MOV EAX,[0x00807598]
00575FBF  85 C0                     TEST EAX,EAX
00575FC1  0F 84 70 07 00 00         JZ 0x00576737
00575FC7  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00575FCA  33 F6                     XOR ESI,ESI
00575FCC  85 C0                     TEST EAX,EAX
00575FCE  7E 21                     JLE 0x00575ff1
00575FD0  33 FF                     XOR EDI,EDI
LAB_00575fd2:
00575FD2  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00575FD5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00575FDB  0F BF 44 17 10            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x10]
00575FE0  50                        PUSH EAX
00575FE1  E8 BA 2B 17 00            CALL 0x006e8ba0
00575FE6  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00575FE9  46                        INC ESI
00575FEA  83 C7 14                  ADD EDI,0x14
00575FED  3B F0                     CMP ESI,EAX
00575FEF  7C E1                     JL 0x00575fd2
LAB_00575ff1:
00575FF1  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00575FF4  48                        DEC EAX
00575FF5  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
00575FF8  78 25                     JS 0x0057601f
LAB_00575ffa:
00575FFA  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00575FFD  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00576000  52                        PUSH EDX
00576001  E8 5A 50 13 00            CALL 0x006ab060
00576006  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00576009  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
0057600C  8D 54 C1 04               LEA EDX,[ECX + EAX*0x8 + 0x4]
00576010  52                        PUSH EDX
00576011  E8 4A 50 13 00            CALL 0x006ab060
00576016  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00576019  48                        DEC EAX
0057601A  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0057601D  79 DB                     JNS 0x00575ffa
LAB_0057601f:
0057601F  8D 43 38                  LEA EAX,[EBX + 0x38]
00576022  50                        PUSH EAX
00576023  E8 38 50 13 00            CALL 0x006ab060
00576028  33 F6                     XOR ESI,ESI
0057602A  8D 4B 40                  LEA ECX,[EBX + 0x40]
0057602D  89 73 34                  MOV dword ptr [EBX + 0x34],ESI
00576030  89 73 30                  MOV dword ptr [EBX + 0x30],ESI
00576033  A1 98 75 80 00            MOV EAX,[0x00807598]
00576038  51                        PUSH ECX
00576039  89 B0 90 02 00 00         MOV dword ptr [EAX + 0x290],ESI
0057603F  89 B0 8C 02 00 00         MOV dword ptr [EAX + 0x28c],ESI
00576045  E8 16 50 13 00            CALL 0x006ab060
0057604A  8D 53 48                  LEA EDX,[EBX + 0x48]
0057604D  52                        PUSH EDX
0057604E  E8 0D 50 13 00            CALL 0x006ab060
00576053  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00576059  89 73 3C                  MOV dword ptr [EBX + 0x3c],ESI
0057605C  89 73 44                  MOV dword ptr [EBX + 0x44],ESI
0057605F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576064  33 C0                     XOR EAX,EAX
00576066  5F                        POP EDI
00576067  5E                        POP ESI
00576068  5B                        POP EBX
00576069  8B E5                     MOV ESP,EBP
0057606B  5D                        POP EBP
0057606C  C2 04 00                  RET 0x4
LAB_0057606f:
0057606F  33 C0                     XOR EAX,EAX
00576071  B9 05 00 00 00            MOV ECX,0x5
00576076  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
00576079  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
0057607C  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
0057607F  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
00576082  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
00576085  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
00576088  89 43 48                  MOV dword ptr [EBX + 0x48],EAX
0057608B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0057608E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00576091  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00576094  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
00576097  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0057609A  F3 A5                     MOVSD.REP ES:EDI,ESI
0057609C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0057609F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
005760A2  83 C1 18                  ADD ECX,0x18
005760A5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005760A8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005760AB  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005760AE  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005760B1  D1 E0                     SHL EAX,0x1
005760B3  50                        PUSH EAX
005760B4  51                        PUSH ECX
005760B5  FF 15 B8 BB 85 00         CALL dword ptr [0x0085bbb8]
005760BB  85 C0                     TEST EAX,EAX
005760BD  74 1E                     JZ 0x005760dd
005760BF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005760C5  6A 66                     PUSH 0x66
005760C7  68 24 AB 7C 00            PUSH 0x7cab24
005760CC  51                        PUSH ECX
005760CD  6A CC                     PUSH -0x34
005760CF  E8 6C FD 12 00            CALL 0x006a5e40
005760D4  5F                        POP EDI
005760D5  5E                        POP ESI
005760D6  5B                        POP EBX
005760D7  8B E5                     MOV ESP,EBP
005760D9  5D                        POP EBP
005760DA  C2 04 00                  RET 0x4
LAB_005760dd:
005760DD  6A 0A                     PUSH 0xa
005760DF  6A 24                     PUSH 0x24
005760E1  6A 0A                     PUSH 0xa
005760E3  6A 00                     PUSH 0x0
005760E5  E8 A6 81 13 00            CALL 0x006ae290
005760EA  8B F8                     MOV EDI,EAX
005760EC  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005760EF  85 C0                     TEST EAX,EAX
005760F1  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005760F4  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005760FB  0F 8E 01 06 00 00         JLE 0x00576702
LAB_00576101:
00576101  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
LAB_00576108:
00576108  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0057610B  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0057610E  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00576111  3B C1                     CMP EAX,ECX
00576113  73 11                     JNC 0x00576126
00576115  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
00576118  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0057611B  0F AF F0                  IMUL ESI,EAX
0057611E  03 F1                     ADD ESI,ECX
00576120  40                        INC EAX
00576121  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00576124  EB 02                     JMP 0x00576128
LAB_00576126:
00576126  33 F6                     XOR ESI,ESI
LAB_00576128:
00576128  85 F6                     TEST ESI,ESI
0057612A  0F 84 89 00 00 00         JZ 0x005761b9
00576130  8B 16                     MOV EDX,dword ptr [ESI]
00576132  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00576135  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00576138  8B 3C D0                  MOV EDI,dword ptr [EAX + EDX*0x8]
0057613B  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0057613E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00576141  8D 41 06                  LEA EAX,[ECX + 0x6]
LAB_00576144:
00576144  8A 17                     MOV DL,byte ptr [EDI]
00576146  8A CA                     MOV CL,DL
00576148  3A 10                     CMP DL,byte ptr [EAX]
0057614A  75 1C                     JNZ 0x00576168
0057614C  84 C9                     TEST CL,CL
0057614E  74 14                     JZ 0x00576164
00576150  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
00576153  8A CA                     MOV CL,DL
00576155  3A 50 01                  CMP DL,byte ptr [EAX + 0x1]
00576158  75 0E                     JNZ 0x00576168
0057615A  83 C7 02                  ADD EDI,0x2
0057615D  83 C0 02                  ADD EAX,0x2
00576160  84 C9                     TEST CL,CL
00576162  75 E0                     JNZ 0x00576144
LAB_00576164:
00576164  33 C0                     XOR EAX,EAX
00576166  EB 05                     JMP 0x0057616d
LAB_00576168:
00576168  1B C0                     SBB EAX,EAX
0057616A  83 D8 FF                  SBB EAX,-0x1
LAB_0057616d:
0057616D  85 C0                     TEST EAX,EAX
0057616F  75 97                     JNZ 0x00576108
00576171  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00576174  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00576177  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0057617A  8D 41 46                  LEA EAX,[ECX + 0x46]
LAB_0057617d:
0057617D  8A 17                     MOV DL,byte ptr [EDI]
0057617F  8A CA                     MOV CL,DL
00576181  3A 10                     CMP DL,byte ptr [EAX]
00576183  75 1C                     JNZ 0x005761a1
00576185  84 C9                     TEST CL,CL
00576187  74 14                     JZ 0x0057619d
00576189  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
0057618C  8A CA                     MOV CL,DL
0057618E  3A 50 01                  CMP DL,byte ptr [EAX + 0x1]
00576191  75 0E                     JNZ 0x005761a1
00576193  83 C7 02                  ADD EDI,0x2
00576196  83 C0 02                  ADD EAX,0x2
00576199  84 C9                     TEST CL,CL
0057619B  75 E0                     JNZ 0x0057617d
LAB_0057619d:
0057619D  33 C0                     XOR EAX,EAX
0057619F  EB 05                     JMP 0x005761a6
LAB_005761a1:
005761A1  1B C0                     SBB EAX,EAX
005761A3  83 D8 FF                  SBB EAX,-0x1
LAB_005761a6:
005761A6  85 C0                     TEST EAX,EAX
005761A8  0F 85 5A FF FF FF         JNZ 0x00576108
005761AE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005761B1  85 F6                     TEST ESI,ESI
005761B3  0F 85 4F 01 00 00         JNZ 0x00576308
LAB_005761b9:
005761B9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005761BE  33 DB                     XOR EBX,EBX
005761C0  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
005761C6  8D 8D 1C FF FF FF         LEA ECX,[EBP + 0xffffff1c]
005761CC  53                        PUSH EBX
005761CD  52                        PUSH EDX
005761CE  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
005761D4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005761DA  E8 11 76 1B 00            CALL 0x0072d7f0
005761DF  83 C4 08                  ADD ESP,0x8
005761E2  3B C3                     CMP EAX,EBX
005761E4  0F 85 8D 03 00 00         JNZ 0x00576577
005761EA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005761ED  53                        PUSH EBX
005761EE  53                        PUSH EBX
005761EF  53                        PUSH EBX
005761F0  8D 47 06                  LEA EAX,[EDI + 0x6]
005761F3  53                        PUSH EBX
005761F4  6A FF                     PUSH -0x1
005761F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005761F9  50                        PUSH EAX
005761FA  A1 64 67 80 00            MOV EAX,[0x00806764]
005761FF  6A 1D                     PUSH 0x1d
00576201  50                        PUSH EAX
00576202  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
00576205  E8 E6 38 19 00            CALL 0x00709af0
0057620A  8B F0                     MOV ESI,EAX
0057620C  83 C4 20                  ADD ESP,0x20
0057620F  3B F3                     CMP ESI,EBX
00576211  75 18                     JNZ 0x0057622b
00576213  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00576219  68 9A 00 00 00            PUSH 0x9a
0057621E  68 24 AB 7C 00            PUSH 0x7cab24
00576223  51                        PUSH ECX
00576224  6A FC                     PUSH -0x4
00576226  E8 15 FC 12 00            CALL 0x006a5e40
LAB_0057622b:
0057622B  8B 16                     MOV EDX,dword ptr [ESI]
0057622D  83 C7 46                  ADD EDI,0x46
00576230  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
00576233  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00576236  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00576239  C7 45 B8 5A 00 00 00      MOV dword ptr [EBP + -0x48],0x5a
00576240  C7 45 BC 4B 00 00 00      MOV dword ptr [EBP + -0x44],0x4b
00576247  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
0057624A  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0057624D  8A 07                     MOV AL,byte ptr [EDI]
0057624F  84 C0                     TEST AL,AL
00576251  74 42                     JZ 0x00576295
00576253  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
00576259  53                        PUSH EBX
0057625A  53                        PUSH EBX
0057625B  53                        PUSH EBX
0057625C  53                        PUSH EBX
0057625D  6A FF                     PUSH -0x1
0057625F  57                        PUSH EDI
00576260  6A 1D                     PUSH 0x1d
00576262  52                        PUSH EDX
00576263  E8 88 38 19 00            CALL 0x00709af0
00576268  8B F0                     MOV ESI,EAX
0057626A  83 C4 20                  ADD ESP,0x20
0057626D  3B F3                     CMP ESI,EBX
0057626F  75 17                     JNZ 0x00576288
00576271  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00576276  68 A3 00 00 00            PUSH 0xa3
0057627B  68 24 AB 7C 00            PUSH 0x7cab24
00576280  50                        PUSH EAX
00576281  6A FC                     PUSH -0x4
00576283  E8 B8 FB 12 00            CALL 0x006a5e40
LAB_00576288:
00576288  8B 0E                     MOV ECX,dword ptr [ESI]
0057628A  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0057628D  8B 56 21                  MOV EDX,dword ptr [ESI + 0x21]
00576290  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00576293  EB 06                     JMP 0x0057629b
LAB_00576295:
00576295  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00576298  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
LAB_0057629b:
0057629B  8B 85 1C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff1c]
005762A1  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
005762A4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005762A9  8D 75 A4                  LEA ESI,[EBP + -0x5c]
005762AC  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
005762AF  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
005762B2  3B C1                     CMP EAX,ECX
005762B4  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005762B7  7C 1D                     JL 0x005762d6
005762B9  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
005762BC  8D 0C CD 50 00 00 00      LEA ECX,[ECX*0x8 + 0x50]
005762C3  51                        PUSH ECX
005762C4  52                        PUSH EDX
005762C5  E8 86 6C 13 00            CALL 0x006acf50
005762CA  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
005762CD  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
005762D0  83 C0 0A                  ADD EAX,0xa
005762D3  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
LAB_005762d6:
005762D6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005762D9  50                        PUSH EAX
005762DA  E8 D1 E6 14 00            CALL 0x006c49b0
005762DF  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
005762E2  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
005762E5  57                        PUSH EDI
005762E6  89 04 CA                  MOV dword ptr [EDX + ECX*0x8],EAX
005762E9  E8 C2 E6 14 00            CALL 0x006c49b0
005762EE  8B 4B 30                  MOV ECX,dword ptr [EBX + 0x30]
005762F1  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
005762F4  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005762F7  89 44 CA 04               MOV dword ptr [EDX + ECX*0x8 + 0x4],EAX
005762FB  8D 45 A4                  LEA EAX,[EBP + -0x5c]
005762FE  50                        PUSH EAX
005762FF  57                        PUSH EDI
00576300  E8 BB 7E 13 00            CALL 0x006ae1c0
00576305  FF 43 30                  INC dword ptr [EBX + 0x30]
LAB_00576308:
00576308  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057630B  8B 82 86 00 00 00         MOV EAX,dword ptr [EDX + 0x86]
00576311  85 C0                     TEST EAX,EAX
00576313  0F 8D 72 02 00 00         JGE 0x0057658b
00576319  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0057631C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0057631F  3B C1                     CMP EAX,ECX
00576321  7C 1C                     JL 0x0057633f
00576323  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00576326  8B F9                     MOV EDI,ECX
00576328  8D 4C BF 32               LEA ECX,[EDI + EDI*0x4 + 0x32]
0057632C  C1 E1 02                  SHL ECX,0x2
0057632F  51                        PUSH ECX
00576330  52                        PUSH EDX
00576331  E8 1A 6C 13 00            CALL 0x006acf50
00576336  83 C7 0A                  ADD EDI,0xa
00576339  89 43 48                  MOV dword ptr [EBX + 0x48],EAX
0057633C  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
LAB_0057633f:
0057633F  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00576342  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00576345  8B 16                     MOV EDX,dword ptr [ESI]
00576347  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057634A  8D 3C 81                  LEA EDI,[ECX + EAX*0x4]
0057634D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00576350  89 17                     MOV dword ptr [EDI],EDX
00576352  0F BF 08                  MOVSX ECX,word ptr [EAX]
00576355  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00576358  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0057635B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00576361  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576367  D9 5F 04                  FSTP float ptr [EDI + 0x4]
0057636A  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
0057636E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00576371  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00576374  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057637A  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576380  D9 5F 08                  FSTP float ptr [EDI + 0x8]
00576383  0F BF 40 04               MOVSX EAX,word ptr [EAX + 0x4]
00576387  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057638A  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0057638D  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
00576393  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576399  DC 05 58 B1 79 00         FADD double ptr [0x0079b158]
0057639F  D9 5F 0C                  FSTP float ptr [EDI + 0xc]
005763A2  66 8B 4E 1C               MOV CX,word ptr [ESI + 0x1c]
005763A6  66 89 4F 12               MOV word ptr [EDI + 0x12],CX
005763AA  E8 11 83 1B 00            CALL 0x0072e6c0
005763AF  99                        CDQ
005763B0  F7 7E 04                  IDIV dword ptr [ESI + 0x4]
005763B3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005763B9  6A 00                     PUSH 0x0
005763BB  DB 81 08 01 00 00         FILD dword ptr [ECX + 0x108]
005763C1  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
005763C7  DC 0D 38 B1 79 00         FMUL double ptr [0x0079b138]
005763CD  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005763D0  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005763D3  8B 02                     MOV EAX,dword ptr [EDX]
005763D5  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005763D8  E8 AB 7E 1B 00            CALL 0x0072e288
005763DD  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005763E0  2B D0                     SUB EDX,EAX
005763E2  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005763E5  52                        PUSH EDX
005763E6  50                        PUSH EAX
005763E7  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
005763EA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005763ED  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005763F0  51                        PUSH ECX
005763F1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005763F4  33 C0                     XOR EAX,EAX
005763F6  52                        PUSH EDX
005763F7  85 C9                     TEST ECX,ECX
005763F9  0F 95 C0                  SETNZ AL
005763FC  40                        INC EAX
005763FD  6A 00                     PUSH 0x0
005763FF  8D 4D F8                  LEA ECX,[EBP + -0x8]
00576402  50                        PUSH EAX
00576403  51                        PUSH ECX
00576404  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057640A  E8 51 22 17 00            CALL 0x006e8660
0057640F  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
00576413  6A 01                     PUSH 0x1
00576415  66 89 57 10               MOV word ptr [EDI + 0x10],DX
00576419  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0057641C  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0057641F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00576422  50                        PUSH EAX
00576423  51                        PUSH ECX
00576424  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057642A  6A 00                     PUSH 0x0
0057642C  52                        PUSH EDX
0057642D  E8 AE 34 17 00            CALL 0x006e98e0
00576432  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
00576436  68 30 75 00 00            PUSH 0x7530
0057643B  6A 00                     PUSH 0x0
0057643D  50                        PUSH EAX
0057643E  6A 01                     PUSH 0x1
00576440  6A 00                     PUSH 0x0
00576442  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00576445  51                        PUSH ECX
00576446  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057644C  E8 9F 3A 17 00            CALL 0x006e9ef0
00576451  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00576454  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00576457  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057645D  52                        PUSH EDX
0057645E  6A 00                     PUSH 0x0
00576460  50                        PUSH EAX
00576461  E8 0A 3E 17 00            CALL 0x006ea270
00576466  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00576469  85 C0                     TEST EAX,EAX
0057646B  74 78                     JZ 0x005764e5
0057646D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00576470  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00576473  6A 01                     PUSH 0x1
00576475  50                        PUSH EAX
00576476  51                        PUSH ECX
00576477  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057647D  6A 01                     PUSH 0x1
0057647F  52                        PUSH EDX
00576480  E8 5B 34 17 00            CALL 0x006e98e0
00576485  0F BF 47 12               MOVSX EAX,word ptr [EDI + 0x12]
00576489  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057648C  68 30 75 00 00            PUSH 0x7530
00576491  6A 00                     PUSH 0x0
00576493  50                        PUSH EAX
00576494  6A 01                     PUSH 0x1
00576496  6A 01                     PUSH 0x1
00576498  51                        PUSH ECX
00576499  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057649F  E8 4C 3A 17 00            CALL 0x006e9ef0
005764A4  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
005764A7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005764AD  99                        CDQ
005764AE  F7 7E 0C                  IDIV dword ptr [ESI + 0xc]
005764B1  52                        PUSH EDX
005764B2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005764B5  6A 01                     PUSH 0x1
005764B7  52                        PUSH EDX
005764B8  E8 B3 3D 17 00            CALL 0x006ea270
005764BD  A1 C0 32 80 00            MOV EAX,[0x008032c0]
005764C2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005764C5  50                        PUSH EAX
005764C6  51                        PUSH ECX
005764C7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005764CD  E8 AE 41 17 00            CALL 0x006ea680
005764D2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005764D5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005764DB  6A 01                     PUSH 0x1
005764DD  6A 01                     PUSH 0x1
005764DF  52                        PUSH EDX
005764E0  E8 EB 41 17 00            CALL 0x006ea6d0
LAB_005764e5:
005764E5  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
005764E8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005764EB  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005764EE  2B C2                     SUB EAX,EDX
005764F0  83 F8 0E                  CMP EAX,0xe
005764F3  7C 3D                     JL 0x00576532
005764F5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005764FB  C1 E0 10                  SHL EAX,0x10
005764FE  8B 91 08 01 00 00         MOV EDX,dword ptr [ECX + 0x108]
00576504  F7 DA                     NEG EDX
00576506  52                        PUSH EDX
00576507  50                        PUSH EAX
00576508  E8 03 51 16 00            CALL 0x006db610
0057650D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00576510  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00576513  DB 45 E0                  FILD dword ptr [EBP + -0x20]
00576516  51                        PUSH ECX
00576517  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057651D  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
00576523  D9 1C 24                  FSTP float ptr [ESP]
00576526  6A 00                     PUSH 0x0
00576528  6A 00                     PUSH 0x0
0057652A  6A 00                     PUSH 0x0
0057652C  50                        PUSH EAX
0057652D  E8 DE 2C 17 00            CALL 0x006e9210
LAB_00576532:
00576532  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00576535  6A FF                     PUSH -0x1
00576537  51                        PUSH ECX
00576538  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0057653E  E8 9D 3E 17 00            CALL 0x006ea3e0
00576543  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
00576546  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00576549  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0057654C  52                        PUSH EDX
0057654D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00576550  50                        PUSH EAX
00576551  51                        PUSH ECX
00576552  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00576558  52                        PUSH EDX
00576559  E8 02 44 17 00            CALL 0x006ea960
0057655E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00576561  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00576567  6A 00                     PUSH 0x0
00576569  50                        PUSH EAX
0057656A  E8 31 45 17 00            CALL 0x006eaaa0
0057656F  FF 43 44                  INC dword ptr [EBX + 0x44]
00576572  E9 6A 01 00 00            JMP 0x005766e1
LAB_00576577:
00576577  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0057657D  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00576580  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576586  E9 56 01 00 00            JMP 0x005766e1
LAB_0057658b:
0057658B  3B 46 04                  CMP EAX,dword ptr [ESI + 0x4]
0057658E  0F 8D 50 01 00 00         JGE 0x005766e4
00576594  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00576597  85 C9                     TEST ECX,ECX
00576599  74 09                     JZ 0x005765a4
0057659B  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
0057659E  0F 8D 40 01 00 00         JGE 0x005766e4
LAB_005765a4:
005765A4  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005765A7  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005765AA  3B C1                     CMP EAX,ECX
005765AC  7C 20                     JL 0x005765ce
005765AE  8B F9                     MOV EDI,ECX
005765B0  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
005765B3  8D 54 BF 32               LEA EDX,[EDI + EDI*0x4 + 0x32]
005765B7  8D 44 57 0A               LEA EAX,[EDI + EDX*0x2 + 0xa]
005765BB  C1 E0 02                  SHL EAX,0x2
005765BE  50                        PUSH EAX
005765BF  51                        PUSH ECX
005765C0  E8 8B 69 13 00            CALL 0x006acf50
005765C5  83 C7 0A                  ADD EDI,0xa
005765C8  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
005765CB  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_005765ce:
005765CE  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005765D1  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
005765D4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005765D7  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
005765DA  8D 3C 81                  LEA EDI,[ECX + EAX*0x4]
005765DD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005765E0  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
005765E6  8B 16                     MOV EDX,dword ptr [ESI]
005765E8  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
005765EB  0F BF 08                  MOVSX ECX,word ptr [EAX]
005765EE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005765F1  DB 45 FC                  FILD dword ptr [EBP + -0x4]
005765F4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005765FA  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576600  D9 5F 08                  FSTP float ptr [EDI + 0x8]
00576603  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00576607  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0057660A  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0057660D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00576613  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576619  D9 5F 0C                  FSTP float ptr [EDI + 0xc]
0057661C  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00576620  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00576623  DB 45 FC                  FILD dword ptr [EBP + -0x4]
00576626  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057662C  DC 0D 68 B1 79 00         FMUL double ptr [0x0079b168]
00576632  DC 05 28 B1 79 00         FADD double ptr [0x0079b128]
00576638  D9 5F 10                  FSTP float ptr [EDI + 0x10]
0057663B  8B 90 8A 00 00 00         MOV EDX,dword ptr [EAX + 0x8a]
00576641  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
00576644  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
00576648  66 89 4F 1C               MOV word ptr [EDI + 0x1c],CX
0057664C  8B 90 86 00 00 00         MOV EDX,dword ptr [EAX + 0x86]
00576652  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00576655  8B 14 91                  MOV EDX,dword ptr [ECX + EDX*0x4]
00576658  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
0057665B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0057665E  85 C9                     TEST ECX,ECX
00576660  74 0B                     JZ 0x0057666d
00576662  8B 90 86 00 00 00         MOV EDX,dword ptr [EAX + 0x86]
00576668  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
0057666B  EB 02                     JMP 0x0057666f
LAB_0057666d:
0057666D  33 C9                     XOR ECX,ECX
LAB_0057666f:
0057666F  89 4F 24                  MOV dword ptr [EDI + 0x24],ECX
00576672  8B 80 86 00 00 00         MOV EAX,dword ptr [EAX + 0x86]
00576678  89 47 28                  MOV dword ptr [EDI + 0x28],EAX
0057667B  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
0057667F  66 83 E9 0E               SUB CX,0xe
00576683  66 89 4F 1E               MOV word ptr [EDI + 0x1e],CX
00576687  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0057668A  0F BF 41 14               MOVSX EAX,word ptr [ECX + 0x14]
0057668E  0F BF 51 10               MOVSX EDX,word ptr [ECX + 0x10]
00576692  03 C2                     ADD EAX,EDX
00576694  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00576697  2B C2                     SUB EAX,EDX
00576699  83 F8 0E                  CMP EAX,0xe
0057669C  7C 39                     JL 0x005766d7
0057669E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005766A4  C1 E0 10                  SHL EAX,0x10
005766A7  8B 91 08 01 00 00         MOV EDX,dword ptr [ECX + 0x108]
005766AD  F7 DA                     NEG EDX
005766AF  52                        PUSH EDX
005766B0  50                        PUSH EAX
005766B1  E8 5A 4F 16 00            CALL 0x006db610
005766B6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005766B9  A1 98 75 80 00            MOV EAX,[0x00807598]
005766BE  DB 45 E0                  FILD dword ptr [EBP + -0x20]
005766C1  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
005766C7  DC 88 08 03 00 00         FMUL double ptr [EAX + 0x308]
005766CD  E8 B6 7B 1B 00            CALL 0x0072e288
005766D2  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
005766D5  EB 07                     JMP 0x005766de
LAB_005766d7:
005766D7  C7 47 18 00 00 00 00      MOV dword ptr [EDI + 0x18],0x0
LAB_005766de:
005766DE  FF 43 3C                  INC dword ptr [EBX + 0x3c]
LAB_005766e1:
005766E1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_005766e4:
005766E4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005766E7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005766EA  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005766ED  40                        INC EAX
005766EE  81 C2 92 00 00 00         ADD EDX,0x92
005766F4  3B C1                     CMP EAX,ECX
005766F6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005766F9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005766FC  0F 8C FF F9 FF FF         JL 0x00576101
LAB_00576702:
00576702  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00576705  85 C0                     TEST EAX,EAX
00576707  7E 28                     JLE 0x00576731
00576709  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
0057670C  68 C6 3A 40 00            PUSH 0x403ac6
00576711  6A 2C                     PUSH 0x2c
00576713  50                        PUSH EAX
00576714  51                        PUSH ECX
00576715  E8 B6 65 13 00            CALL 0x006accd0
0057671A  A1 98 75 80 00            MOV EAX,[0x00807598]
0057671F  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00576722  8B 53 40                  MOV EDX,dword ptr [EBX + 0x40]
00576725  89 90 90 02 00 00         MOV dword ptr [EAX + 0x290],EDX
0057672B  89 88 8C 02 00 00         MOV dword ptr [EAX + 0x28c],ECX
LAB_00576731:
00576731  57                        PUSH EDI
00576732  E8 D9 79 13 00            CALL 0x006ae110
LAB_00576737:
00576737  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0057673D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576742  33 C0                     XOR EAX,EAX
00576744  5F                        POP EDI
00576745  5E                        POP ESI
00576746  5B                        POP EBX
00576747  8B E5                     MOV ESP,EBP
00576749  5D                        POP EBP
0057674A  C2 04 00                  RET 0x4
LAB_0057674d:
0057674D  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00576753  68 0C AB 7C 00            PUSH 0x7cab0c
00576758  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057675D  56                        PUSH ESI
0057675E  6A 00                     PUSH 0x0
00576760  68 96 01 00 00            PUSH 0x196
00576765  68 24 AB 7C 00            PUSH 0x7cab24
0057676A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576770  E8 5B 6D 13 00            CALL 0x006ad4d0
00576775  83 C4 18                  ADD ESP,0x18
00576778  85 C0                     TEST EAX,EAX
0057677A  74 01                     JZ 0x0057677d
0057677C  CC                        INT3
LAB_0057677d:
0057677D  68 97 01 00 00            PUSH 0x197
00576782  68 24 AB 7C 00            PUSH 0x7cab24
00576787  6A 00                     PUSH 0x0
00576789  56                        PUSH ESI
0057678A  E8 B1 F6 12 00            CALL 0x006a5e40
0057678F  8B C6                     MOV EAX,ESI
00576791  5F                        POP EDI
00576792  5E                        POP ESI
00576793  5B                        POP EBX
00576794  8B E5                     MOV ESP,EBP
00576796  5D                        POP EBP
00576797  C2 04 00                  RET 0x4
