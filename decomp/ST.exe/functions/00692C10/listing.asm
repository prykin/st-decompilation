FUN_00692c10:
00692C10  55                        PUSH EBP
00692C11  8B EC                     MOV EBP,ESP
00692C13  81 EC 04 01 00 00         SUB ESP,0x104
00692C19  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00692C1C  57                        PUSH EDI
00692C1D  81 FA A4 01 00 00         CMP EDX,0x1a4
00692C23  0F 87 E0 03 00 00         JA 0x00693009
00692C29  0F 84 B4 03 00 00         JZ 0x00692fe3
00692C2F  81 FA E6 00 00 00         CMP EDX,0xe6
00692C35  0F 87 D4 02 00 00         JA 0x00692f0f
00692C3B  0F 84 B2 02 00 00         JZ 0x00692ef3
00692C41  8D 42 F6                  LEA EAX,[EDX + -0xa]
00692C44  3D 82 00 00 00            CMP EAX,0x82
00692C49  0F 87 F8 04 00 00         JA 0x00693147
00692C4F  33 C9                     XOR ECX,ECX
00692C51  8A 88 60 32 69 00         MOV CL,byte ptr [EAX + 0x693260]
switchD_00692c57::switchD:
00692C57  FF 24 8D 48 32 69 00      JMP dword ptr [ECX*0x4 + 0x693248]
switchD_00692c57::caseD_14:
00692C5E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692C61  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
00692C65  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00692C68  89 15 50 5C 7D 00         MOV dword ptr [0x007d5c50],EDX
00692C6E  66 A3 58 5C 7D 00         MOV [0x007d5c58],AX
00692C74  B8 38 5C 7D 00            MOV EAX,0x7d5c38
00692C79  C7 01 69 00 00 00         MOV dword ptr [ECX],0x69
00692C7F  5F                        POP EDI
00692C80  8B E5                     MOV ESP,EBP
00692C82  5D                        POP EBP
00692C83  C3                        RET
switchD_00692c57::caseD_a:
00692C84  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00692C87  B9 29 00 00 00            MOV ECX,0x29
00692C8C  BF D8 3C 85 00            MOV EDI,0x853cd8
00692C91  C7 00 A6 00 00 00         MOV dword ptr [EAX],0xa6
00692C97  33 C0                     XOR EAX,EAX
00692C99  F3 AB                     STOSD.REP ES:EDI
00692C9B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00692C9E  66 AB                     STOSW ES:EDI
00692CA0  33 FF                     XOR EDI,EDI
00692CA2  51                        PUSH ECX
00692CA3  89 15 D8 3C 85 00         MOV dword ptr [0x00853cd8],EDX
00692CA9  C7 05 DC 3C 85 00 FF 00 00 00  MOV dword ptr [0x00853cdc],0xff
00692CB3  C7 05 E0 3C 85 00 02 00 00 00  MOV dword ptr [0x00853ce0],0x2
00692CBD  89 3D E4 3C 85 00         MOV dword ptr [0x00853ce4],EDI
00692CC3  89 3D E8 3C 85 00         MOV dword ptr [0x00853ce8],EDI
00692CC9  66 89 3D F0 3C 85 00      MOV word ptr [0x00853cf0],DI
00692CD0  E8 5C E4 D6 FF            CALL 0x00401131
00692CD5  8B 0D 84 3D 85 00         MOV ECX,dword ptr [0x00853d84]
00692CDB  83 C4 04                  ADD ESP,0x4
00692CDE  3B C1                     CMP EAX,ECX
00692CE0  72 25                     JC 0x00692d07
00692CE2  68 3C 62 7D 00            PUSH 0x7d623c
00692CE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00692CEC  50                        PUSH EAX
00692CED  57                        PUSH EDI
00692CEE  68 BA 01 00 00            PUSH 0x1ba
00692CF3  68 18 62 7D 00            PUSH 0x7d6218
00692CF8  E8 D3 A7 01 00            CALL 0x006ad4d0
00692CFD  83 C4 18                  ADD ESP,0x18
00692D00  85 C0                     TEST EAX,EAX
00692D02  74 01                     JZ 0x00692d05
00692D04  CC                        INT3
LAB_00692d05:
00692D05  33 C0                     XOR EAX,EAX
LAB_00692d07:
00692D07  8B D0                     MOV EDX,EAX
00692D09  53                        PUSH EBX
00692D0A  C1 E2 05                  SHL EDX,0x5
00692D0D  03 D0                     ADD EDX,EAX
00692D0F  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00692D12  56                        PUSH ESI
00692D13  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
00692D16  A1 80 3D 85 00            MOV EAX,[0x00853d80]
00692D1B  C1 E6 03                  SHL ESI,0x3
00692D1E  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00692D21  3B 9C 06 0C 02 00 00      CMP EBX,dword ptr [ESI + EAX*0x1 + 0x20c]
00692D28  72 25                     JC 0x00692d4f
00692D2A  68 F4 61 7D 00            PUSH 0x7d61f4
00692D2F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00692D34  53                        PUSH EBX
00692D35  57                        PUSH EDI
00692D36  68 C0 01 00 00            PUSH 0x1c0
00692D3B  68 18 62 7D 00            PUSH 0x7d6218
00692D40  E8 8B A7 01 00            CALL 0x006ad4d0
00692D45  83 C4 18                  ADD ESP,0x18
00692D48  85 C0                     TEST EAX,EAX
00692D4A  74 01                     JZ 0x00692d4d
00692D4C  CC                        INT3
LAB_00692d4d:
00692D4D  33 DB                     XOR EBX,EBX
LAB_00692d4f:
00692D4F  8B 15 80 3D 85 00         MOV EDX,dword ptr [0x00853d80]
00692D55  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00692D58  03 D6                     ADD EDX,ESI
00692D5A  89 0D 7A 3D 85 00         MOV dword ptr [0x00853d7a],ECX
00692D60  8B 82 14 02 00 00         MOV EAX,dword ptr [EDX + 0x214]
00692D66  A3 76 3D 85 00            MOV [0x00853d76],EAX
00692D6B  8B 82 10 02 00 00         MOV EAX,dword ptr [EDX + 0x210]
00692D71  3B C7                     CMP EAX,EDI
00692D73  75 5A                     JNZ 0x00692dcf
00692D75  8B FA                     MOV EDI,EDX
00692D77  83 C9 FF                  OR ECX,0xffffffff
00692D7A  33 C0                     XOR EAX,EAX
00692D7C  F2 AE                     SCASB.REPNE ES:EDI
00692D7E  F7 D1                     NOT ECX
00692D80  2B F9                     SUB EDI,ECX
00692D82  8B C1                     MOV EAX,ECX
00692D84  8B F7                     MOV ESI,EDI
00692D86  BF F2 3C 85 00            MOV EDI,0x853cf2
00692D8B  C1 E9 02                  SHR ECX,0x2
00692D8E  F3 A5                     MOVSD.REP ES:EDI,ESI
00692D90  8B C8                     MOV ECX,EAX
00692D92  33 C0                     XOR EAX,EAX
00692D94  83 E1 03                  AND ECX,0x3
00692D97  F3 A4                     MOVSB.REP ES:EDI,ESI
00692D99  8D BA 04 01 00 00         LEA EDI,[EDX + 0x104]
00692D9F  83 C9 FF                  OR ECX,0xffffffff
00692DA2  F2 AE                     SCASB.REPNE ES:EDI
00692DA4  F7 D1                     NOT ECX
00692DA6  2B F9                     SUB EDI,ECX
00692DA8  B8 D8 3C 85 00            MOV EAX,0x853cd8
00692DAD  8B D1                     MOV EDX,ECX
00692DAF  8B F7                     MOV ESI,EDI
00692DB1  BF 32 3D 85 00            MOV EDI,0x853d32
00692DB6  C1 E9 02                  SHR ECX,0x2
00692DB9  F3 A5                     MOVSD.REP ES:EDI,ESI
00692DBB  8B CA                     MOV ECX,EDX
00692DBD  83 E1 03                  AND ECX,0x3
00692DC0  F3 A4                     MOVSB.REP ES:EDI,ESI
00692DC2  89 1D 72 3D 85 00         MOV dword ptr [0x00853d72],EBX
00692DC8  5E                        POP ESI
00692DC9  5B                        POP EBX
00692DCA  5F                        POP EDI
00692DCB  8B E5                     MOV ESP,EBP
00692DCD  5D                        POP EBP
00692DCE  C3                        RET
LAB_00692dcf:
00692DCF  53                        PUSH EBX
00692DD0  52                        PUSH EDX
00692DD1  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
00692DD7  68 60 59 7D 00            PUSH 0x7d5960
00692DDC  50                        PUSH EAX
00692DDD  C7 05 72 3D 85 00 FF FF FF FF  MOV dword ptr [0x00853d72],0xffffffff
00692DE7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00692DED  8D BD FC FE FF FF         LEA EDI,[EBP + 0xfffffefc]
00692DF3  83 C9 FF                  OR ECX,0xffffffff
00692DF6  33 C0                     XOR EAX,EAX
00692DF8  83 C4 10                  ADD ESP,0x10
00692DFB  F2 AE                     SCASB.REPNE ES:EDI
00692DFD  F7 D1                     NOT ECX
00692DFF  2B F9                     SUB EDI,ECX
00692E01  A1 80 3D 85 00            MOV EAX,[0x00853d80]
00692E06  8B D1                     MOV EDX,ECX
00692E08  8B F7                     MOV ESI,EDI
00692E0A  BF F2 3C 85 00            MOV EDI,0x853cf2
00692E0F  C1 E9 02                  SHR ECX,0x2
00692E12  F3 A5                     MOVSD.REP ES:EDI,ESI
00692E14  8B CA                     MOV ECX,EDX
00692E16  83 E1 03                  AND ECX,0x3
00692E19  F3 A4                     MOVSB.REP ES:EDI,ESI
00692E1B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00692E1E  8D 94 01 04 01 00 00      LEA EDX,[ECX + EAX*0x1 + 0x104]
00692E25  83 C9 FF                  OR ECX,0xffffffff
00692E28  8B FA                     MOV EDI,EDX
00692E2A  33 C0                     XOR EAX,EAX
00692E2C  F2 AE                     SCASB.REPNE ES:EDI
00692E2E  F7 D1                     NOT ECX
00692E30  49                        DEC ECX
00692E31  74 3D                     JZ 0x00692e70
00692E33  53                        PUSH EBX
00692E34  52                        PUSH EDX
00692E35  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
00692E3B  68 60 59 7D 00            PUSH 0x7d5960
00692E40  52                        PUSH EDX
00692E41  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00692E47  8D BD FC FE FF FF         LEA EDI,[EBP + 0xfffffefc]
00692E4D  83 C9 FF                  OR ECX,0xffffffff
00692E50  33 C0                     XOR EAX,EAX
00692E52  83 C4 10                  ADD ESP,0x10
00692E55  F2 AE                     SCASB.REPNE ES:EDI
00692E57  F7 D1                     NOT ECX
00692E59  2B F9                     SUB EDI,ECX
00692E5B  8B C1                     MOV EAX,ECX
00692E5D  8B F7                     MOV ESI,EDI
00692E5F  BF 32 3D 85 00            MOV EDI,0x853d32
00692E64  C1 E9 02                  SHR ECX,0x2
00692E67  F3 A5                     MOVSD.REP ES:EDI,ESI
00692E69  8B C8                     MOV ECX,EAX
00692E6B  83 E1 03                  AND ECX,0x3
00692E6E  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00692e70:
00692E70  5E                        POP ESI
00692E71  5B                        POP EBX
00692E72  B8 D8 3C 85 00            MOV EAX,0x853cd8
00692E77  5F                        POP EDI
00692E78  8B E5                     MOV ESP,EBP
00692E7A  5D                        POP EBP
00692E7B  C3                        RET
switchD_00692c57::caseD_5a:
00692E7C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00692E7F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692E82  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00692E85  5F                        POP EDI
00692E86  C7 01 28 00 00 00         MOV dword ptr [ECX],0x28
00692E8C  A3 1C 5A 7D 00            MOV [0x007d5a1c],EAX
00692E91  8D 84 40 69 FD FF FF      LEA EAX,[EAX + EAX*0x2 + 0xfffffd69]
00692E98  89 15 14 5A 7D 00         MOV dword ptr [0x007d5a14],EDX
00692E9E  8B 0C 85 E0 59 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d59e0]
00692EA5  B8 F8 59 7D 00            MOV EAX,0x7d59f8
00692EAA  89 0D 18 5A 7D 00         MOV dword ptr [0x007d5a18],ECX
00692EB0  8B E5                     MOV ESP,EBP
00692EB2  5D                        POP EBP
00692EB3  C3                        RET
switchD_00692c57::caseD_8c:
00692EB4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692EB7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00692EBA  5F                        POP EDI
00692EBB  C7 02 34 00 00 00         MOV dword ptr [EDX],0x34
00692EC1  A3 64 5A 7D 00            MOV [0x007d5a64],EAX
00692EC6  B8 48 5A 7D 00            MOV EAX,0x7d5a48
00692ECB  8B E5                     MOV ESP,EBP
00692ECD  5D                        POP EBP
00692ECE  C3                        RET
switchD_00692c57::caseD_32:
00692ECF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00692ED2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00692ED5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00692ED8  5F                        POP EDI
00692ED9  C7 01 28 00 00 00         MOV dword ptr [ECX],0x28
00692EDF  A3 3C 5A 7D 00            MOV [0x007d5a3c],EAX
00692EE4  89 15 44 5A 7D 00         MOV dword ptr [0x007d5a44],EDX
00692EEA  B8 20 5A 7D 00            MOV EAX,0x7d5a20
00692EEF  8B E5                     MOV ESP,EBP
00692EF1  5D                        POP EBP
00692EF2  C3                        RET
LAB_00692ef3:
00692EF3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00692EF6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692EF9  89 0D 2C 5B 7D 00         MOV dword ptr [0x007d5b2c],ECX
00692EFF  B8 F8 5A 7D 00            MOV EAX,0x7d5af8
00692F04  C7 02 38 00 00 00         MOV dword ptr [EDX],0x38
00692F0A  5F                        POP EDI
00692F0B  8B E5                     MOV ESP,EBP
00692F0D  5D                        POP EBP
00692F0E  C3                        RET
LAB_00692f0f:
00692F0F  8D 82 F2 FE FF FF         LEA EAX,[EDX + 0xfffffef2]
00692F15  83 F8 64                  CMP EAX,0x64
00692F18  0F 87 29 02 00 00         JA 0x00693147
00692F1E  33 C9                     XOR ECX,ECX
00692F20  8A 88 FC 32 69 00         MOV CL,byte ptr [EAX + 0x6932fc]
switchD_00692f26::switchD:
00692F26  FF 24 8D E4 32 69 00      JMP dword ptr [ECX*0x4 + 0x6932e4]
switchD_00692f26::caseD_10e:
00692F2D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692F30  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692F33  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00692F36  5F                        POP EDI
00692F37  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
00692F3D  A3 20 5D 7D 00            MOV [0x007d5d20],EAX
00692F42  89 0D 1C 5D 7D 00         MOV dword ptr [0x007d5d1c],ECX
00692F48  B8 00 5D 7D 00            MOV EAX,0x7d5d00
00692F4D  8B E5                     MOV ESP,EBP
00692F4F  5D                        POP EBP
00692F50  C3                        RET
switchD_00692f26::caseD_12c:
00692F51  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692F54  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692F57  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00692F5A  5F                        POP EDI
00692F5B  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
00692F61  A3 98 5D 7D 00            MOV [0x007d5d98],EAX
00692F66  89 0D 94 5D 7D 00         MOV dword ptr [0x007d5d94],ECX
00692F6C  B8 78 5D 7D 00            MOV EAX,0x7d5d78
00692F71  8B E5                     MOV ESP,EBP
00692F73  5D                        POP EBP
00692F74  C3                        RET
switchD_00692f26::caseD_118:
00692F75  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692F78  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692F7B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00692F7E  5F                        POP EDI
00692F7F  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
00692F85  A3 48 5D 7D 00            MOV [0x007d5d48],EAX
00692F8A  89 0D 44 5D 7D 00         MOV dword ptr [0x007d5d44],ECX
00692F90  B8 28 5D 7D 00            MOV EAX,0x7d5d28
00692F95  8B E5                     MOV ESP,EBP
00692F97  5D                        POP EBP
00692F98  C3                        RET
switchD_00692f26::caseD_122:
00692F99  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692F9C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692F9F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00692FA2  5F                        POP EDI
00692FA3  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
00692FA9  A3 70 5D 7D 00            MOV [0x007d5d70],EAX
00692FAE  89 0D 6C 5D 7D 00         MOV dword ptr [0x007d5d6c],ECX
00692FB4  B8 50 5D 7D 00            MOV EAX,0x7d5d50
00692FB9  8B E5                     MOV ESP,EBP
00692FBB  5D                        POP EBP
00692FBC  C3                        RET
switchD_00692f26::caseD_172:
00692FBD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692FC0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692FC3  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
00692FC7  5F                        POP EDI
00692FC8  C7 02 51 01 00 00         MOV dword ptr [EDX],0x151
00692FCE  A3 60 5F 7D 00            MOV [0x007d5f60],EAX
00692FD3  66 89 0D 70 5F 7D 00      MOV word ptr [0x007d5f70],CX
00692FDA  B8 48 5F 7D 00            MOV EAX,0x7d5f48
00692FDF  8B E5                     MOV ESP,EBP
00692FE1  5D                        POP EBP
00692FE2  C3                        RET
LAB_00692fe3:
00692FE3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00692FE6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00692FE9  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
00692FED  5F                        POP EDI
00692FEE  C7 02 55 01 00 00         MOV dword ptr [EDX],0x155
00692FF4  A3 08 5E 7D 00            MOV [0x007d5e08],EAX
00692FF9  66 89 0D 1C 5E 7D 00      MOV word ptr [0x007d5e1c],CX
00693000  B8 F0 5D 7D 00            MOV EAX,0x7d5df0
00693005  8B E5                     MOV ESP,EBP
00693007  5D                        POP EBP
00693008  C3                        RET
LAB_00693009:
00693009  81 FA BD 0B 00 00         CMP EDX,0xbbd
0069300F  0F 87 77 01 00 00         JA 0x0069318c
00693015  0F 84 5E 01 00 00         JZ 0x00693179
0069301B  81 FA B9 0B 00 00         CMP EDX,0xbb9
00693021  0F 87 0E 01 00 00         JA 0x00693135
00693027  0F 84 71 01 00 00         JZ 0x0069319e
0069302D  81 FA AE 01 00 00         CMP EDX,0x1ae
00693033  0F 84 D8 00 00 00         JZ 0x00693111
00693039  81 FA E8 03 00 00         CMP EDX,0x3e8
0069303F  0F 85 02 01 00 00         JNZ 0x00693147
00693045  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00693048  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0069304B  83 F8 3B                  CMP EAX,0x3b
0069304E  A3 BC 5C 7D 00            MOV [0x007d5cbc],EAX
00693053  89 15 C8 5C 7D 00         MOV dword ptr [0x007d5cc8],EDX
00693059  C7 05 B8 5C 7D 00 00 00 00 00  MOV dword ptr [0x007d5cb8],0x0
00693063  0F 84 8B 00 00 00         JZ 0x006930f4
00693069  83 F8 3C                  CMP EAX,0x3c
0069306C  0F 84 82 00 00 00         JZ 0x006930f4
00693072  83 F8 3D                  CMP EAX,0x3d
00693075  74 7D                     JZ 0x006930f4
00693077  83 F8 41                  CMP EAX,0x41
0069307A  74 78                     JZ 0x006930f4
0069307C  83 F8 43                  CMP EAX,0x43
0069307F  74 73                     JZ 0x006930f4
00693081  83 F8 48                  CMP EAX,0x48
00693084  74 6E                     JZ 0x006930f4
00693086  83 F8 32                  CMP EAX,0x32
00693089  74 69                     JZ 0x006930f4
0069308B  83 F8 33                  CMP EAX,0x33
0069308E  74 64                     JZ 0x006930f4
00693090  83 F8 34                  CMP EAX,0x34
00693093  74 5F                     JZ 0x006930f4
00693095  83 F8 35                  CMP EAX,0x35
00693098  74 5A                     JZ 0x006930f4
0069309A  83 F8 37                  CMP EAX,0x37
0069309D  74 55                     JZ 0x006930f4
0069309F  83 F8 4D                  CMP EAX,0x4d
006930A2  74 50                     JZ 0x006930f4
006930A4  83 F8 52                  CMP EAX,0x52
006930A7  74 4B                     JZ 0x006930f4
006930A9  83 F8 50                  CMP EAX,0x50
006930AC  74 46                     JZ 0x006930f4
006930AE  83 F8 5B                  CMP EAX,0x5b
006930B1  74 41                     JZ 0x006930f4
006930B3  83 F8 6C                  CMP EAX,0x6c
006930B6  74 3C                     JZ 0x006930f4
006930B8  83 F8 63                  CMP EAX,0x63
006930BB  74 37                     JZ 0x006930f4
006930BD  83 F8 60                  CMP EAX,0x60
006930C0  74 32                     JZ 0x006930f4
006930C2  83 F8 5F                  CMP EAX,0x5f
006930C5  74 2D                     JZ 0x006930f4
006930C7  83 F8 6E                  CMP EAX,0x6e
006930CA  74 28                     JZ 0x006930f4
006930CC  83 F8 5D                  CMP EAX,0x5d
006930CF  74 23                     JZ 0x006930f4
006930D1  83 F8 53                  CMP EAX,0x53
006930D4  74 1E                     JZ 0x006930f4
006930D6  83 F8 5C                  CMP EAX,0x5c
006930D9  74 19                     JZ 0x006930f4
006930DB  83 F8 6D                  CMP EAX,0x6d
006930DE  74 14                     JZ 0x006930f4
006930E0  83 F8 70                  CMP EAX,0x70
006930E3  74 0F                     JZ 0x006930f4
006930E5  83 F8 64                  CMP EAX,0x64
006930E8  74 0A                     JZ 0x006930f4
006930EA  83 F8 62                  CMP EAX,0x62
006930ED  74 05                     JZ 0x006930f4
006930EF  83 F8 73                  CMP EAX,0x73
006930F2  75 0A                     JNZ 0x006930fe
LAB_006930f4:
006930F4  C7 05 B8 5C 7D 00 01 00 00 00  MOV dword ptr [0x007d5cb8],0x1
LAB_006930fe:
006930FE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00693101  5F                        POP EDI
00693102  C7 00 57 00 00 00         MOV dword ptr [EAX],0x57
00693108  B8 A8 5C 7D 00            MOV EAX,0x7d5ca8
0069310D  8B E5                     MOV ESP,EBP
0069310F  5D                        POP EBP
00693110  C3                        RET
LAB_00693111:
00693111  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00693114  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00693117  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069311A  5F                        POP EDI
0069311B  C7 01 4F 00 00 00         MOV dword ptr [ECX],0x4f
00693121  A3 C0 5D 7D 00            MOV [0x007d5dc0],EAX
00693126  89 15 B4 5D 7D 00         MOV dword ptr [0x007d5db4],EDX
0069312C  B8 A0 5D 7D 00            MOV EAX,0x7d5da0
00693131  8B E5                     MOV ESP,EBP
00693133  5D                        POP EBP
00693134  C3                        RET
LAB_00693135:
00693135  8B C2                     MOV EAX,EDX
00693137  2D BA 0B 00 00            SUB EAX,0xbba
0069313C  74 10                     JZ 0x0069314e
0069313E  83 E8 02                  SUB EAX,0x2
00693141  0F 84 8A 00 00 00         JZ 0x006931d1
switchD_00692c57::caseD_b:
00693147  33 C0                     XOR EAX,EAX
00693149  5F                        POP EDI
0069314A  8B E5                     MOV ESP,EBP
0069314C  5D                        POP EBP
0069314D  C3                        RET
LAB_0069314e:
0069314E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00693151  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00693154  89 0D 70 5B 7D 00         MOV dword ptr [0x007d5b70],ECX
0069315A  B9 06 00 00 00            MOV ECX,0x6
0069315F  83 C8 FF                  OR EAX,0xffffffff
00693162  BF 7D 5B 7D 00            MOV EDI,0x7d5b7d
00693167  C7 02 65 00 00 00         MOV dword ptr [EDX],0x65
0069316D  F3 AB                     STOSD.REP ES:EDI
0069316F  B8 30 5B 7D 00            MOV EAX,0x7d5b30
00693174  5F                        POP EDI
00693175  8B E5                     MOV ESP,EBP
00693177  5D                        POP EBP
00693178  C3                        RET
LAB_00693179:
00693179  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069317C  5F                        POP EDI
0069317D  C7 00 2C 00 00 00         MOV dword ptr [EAX],0x2c
00693183  B8 98 5B 7D 00            MOV EAX,0x7d5b98
00693188  8B E5                     MOV ESP,EBP
0069318A  5D                        POP EBP
0069318B  C3                        RET
LAB_0069318c:
0069318C  8D 82 42 F4 FF FF         LEA EAX,[EDX + 0xfffff442]
00693192  83 F8 05                  CMP EAX,0x5
00693195  77 B0                     JA 0x00693147
switchD_00693197::switchD:
00693197  FF 24 85 64 33 69 00      JMP dword ptr [EAX*0x4 + 0x693364]
switchD_00693197::caseD_bc0:
0069319E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006931A1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006931A4  89 15 80 5A 7D 00         MOV dword ptr [0x007d5a80],EDX
006931AA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006931AD  89 0D 9C 5A 7D 00         MOV dword ptr [0x007d5a9c],ECX
006931B3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006931B6  89 15 A0 5A 7D 00         MOV dword ptr [0x007d5aa0],EDX
006931BC  A3 A4 5A 7D 00            MOV [0x007d5aa4],EAX
006931C1  C7 01 28 00 00 00         MOV dword ptr [ECX],0x28
006931C7  B8 80 5A 7D 00            MOV EAX,0x7d5a80
006931CC  5F                        POP EDI
006931CD  8B E5                     MOV ESP,EBP
006931CF  5D                        POP EBP
006931D0  C3                        RET
switchD_00693197::caseD_bbf:
006931D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006931D4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006931D7  89 15 A8 5A 7D 00         MOV dword ptr [0x007d5aa8],EDX
006931DD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006931E0  89 15 C4 5A 7D 00         MOV dword ptr [0x007d5ac4],EDX
006931E6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006931E9  A3 C8 5A 7D 00            MOV [0x007d5ac8],EAX
006931EE  89 0D CC 5A 7D 00         MOV dword ptr [0x007d5acc],ECX
006931F4  C7 02 28 00 00 00         MOV dword ptr [EDX],0x28
006931FA  B8 A8 5A 7D 00            MOV EAX,0x7d5aa8
006931FF  5F                        POP EDI
00693200  8B E5                     MOV ESP,EBP
00693202  5D                        POP EBP
00693203  C3                        RET
switchD_00693197::caseD_bbe:
00693204  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00693207  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0069320A  5F                        POP EDI
0069320B  C7 00 24 00 00 00         MOV dword ptr [EAX],0x24
00693211  89 0D F0 5A 7D 00         MOV dword ptr [0x007d5af0],ECX
00693217  B8 D0 5A 7D 00            MOV EAX,0x7d5ad0
0069321C  8B E5                     MOV ESP,EBP
0069321E  5D                        POP EBP
0069321F  C3                        RET
switchD_00693197::caseD_bc3:
00693220  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00693223  B8 C8 5B 7D 00            MOV EAX,0x7d5bc8
00693228  5F                        POP EDI
00693229  C7 02 3F 00 00 00         MOV dword ptr [EDX],0x3f
0069322F  8B E5                     MOV ESP,EBP
00693231  5D                        POP EBP
00693232  C3                        RET
switchD_00693197::caseD_bc1:
00693233  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00693236  5F                        POP EDI
00693237  C7 00 2C 00 00 00         MOV dword ptr [EAX],0x2c
0069323D  B8 08 5C 7D 00            MOV EAX,0x7d5c08
00693242  8B E5                     MOV ESP,EBP
00693244  5D                        POP EBP
00693245  C3                        RET
