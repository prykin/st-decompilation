SIDTy::PrepFiles:
005D8BF0  55                        PUSH EBP
005D8BF1  8B EC                     MOV EBP,ESP
005D8BF3  81 EC 18 02 00 00         SUB ESP,0x218
005D8BF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D8BFE  53                        PUSH EBX
005D8BFF  56                        PUSH ESI
005D8C00  57                        PUSH EDI
005D8C01  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005D8C04  33 FF                     XOR EDI,EDI
005D8C06  8D 55 B0                  LEA EDX,[EBP + -0x50]
005D8C09  8D 4D AC                  LEA ECX,[EBP + -0x54]
005D8C0C  57                        PUSH EDI
005D8C0D  52                        PUSH EDX
005D8C0E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005D8C11  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005D8C14  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8C1A  E8 D1 4B 15 00            CALL 0x0072d7f0
005D8C1F  8B F0                     MOV ESI,EAX
005D8C21  83 C4 08                  ADD ESP,0x8
005D8C24  3B F7                     CMP ESI,EDI
005D8C26  0F 85 88 04 00 00         JNZ 0x005d90b4
005D8C2C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005D8C2F  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D8C35  3B C7                     CMP EAX,EDI
005D8C37  74 0C                     JZ 0x005d8c45
005D8C39  50                        PUSH EAX
005D8C3A  E8 31 C9 0D 00            CALL 0x006b5570
005D8C3F  89 BB CC 1C 00 00         MOV dword ptr [EBX + 0x1ccc],EDI
LAB_005d8c45:
005D8C45  6A 0A                     PUSH 0xa
005D8C47  6A 0A                     PUSH 0xa
005D8C49  57                        PUSH EDI
005D8C4A  E8 A1 C8 0D 00            CALL 0x006b54f0
005D8C4F  89 83 CC 1C 00 00         MOV dword ptr [EBX + 0x1ccc],EAX
005D8C55  8B 83 F1 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af1]
005D8C5B  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005D8C5E  8B CB                     MOV ECX,EBX
005D8C60  56                        PUSH ESI
005D8C61  50                        PUSH EAX
005D8C62  6A 02                     PUSH 0x2
005D8C64  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005D8C6B  89 7B 31                  MOV dword ptr [EBX + 0x31],EDI
005D8C6E  E8 0D D4 10 00            CALL 0x006e6080
005D8C73  8B 8B F5 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af5]
005D8C79  56                        PUSH ESI
005D8C7A  51                        PUSH ECX
005D8C7B  6A 02                     PUSH 0x2
005D8C7D  8B CB                     MOV ECX,EBX
005D8C7F  C7 43 2D 29 00 00 00      MOV dword ptr [EBX + 0x2d],0x29
005D8C86  C7 43 31 19 00 00 00      MOV dword ptr [EBX + 0x31],0x19
005D8C8D  E8 EE D3 10 00            CALL 0x006e6080
005D8C92  8B 93 B8 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb8]
005D8C98  68 FF 00 00 00            PUSH 0xff
005D8C9D  6A 62                     PUSH 0x62
005D8C9F  68 42 01 00 00            PUSH 0x142
005D8CA4  6A 15                     PUSH 0x15
005D8CA6  6A 03                     PUSH 0x3
005D8CA8  57                        PUSH EDI
005D8CA9  52                        PUSH EDX
005D8CAA  E8 C1 B4 0D 00            CALL 0x006b4170
005D8CAF  8B 83 B4 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cb4]
005D8CB5  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005D8CBB  50                        PUSH EAX
005D8CBC  51                        PUSH ECX
005D8CBD  E8 0E A9 0D 00            CALL 0x006b35d0
005D8CC2  8B 15 9C C1 79 00         MOV EDX,dword ptr [0x0079c19c]
005D8CC8  8D 83 D4 1C 00 00         LEA EAX,[EBX + 0x1cd4]
005D8CCE  52                        PUSH EDX
005D8CCF  68 80 76 80 00            PUSH 0x807680
005D8CD4  68 E4 6E 7C 00            PUSH 0x7c6ee4
005D8CD9  50                        PUSH EAX
005D8CDA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D8CE0  BF BC C8 7C 00            MOV EDI,0x7cc8bc
005D8CE5  83 C9 FF                  OR ECX,0xffffffff
005D8CE8  33 C0                     XOR EAX,EAX
005D8CEA  83 C4 10                  ADD ESP,0x10
005D8CED  F2 AE                     SCASB.REPNE ES:EDI
005D8CEF  F7 D1                     NOT ECX
005D8CF1  2B F9                     SUB EDI,ECX
005D8CF3  8B F7                     MOV ESI,EDI
005D8CF5  8B D1                     MOV EDX,ECX
005D8CF7  8D BB D4 1C 00 00         LEA EDI,[EBX + 0x1cd4]
005D8CFD  83 C9 FF                  OR ECX,0xffffffff
005D8D00  F2 AE                     SCASB.REPNE ES:EDI
005D8D02  8B CA                     MOV ECX,EDX
005D8D04  4F                        DEC EDI
005D8D05  C1 E9 02                  SHR ECX,0x2
005D8D08  F3 A5                     MOVSD.REP ES:EDI,ESI
005D8D0A  8D 85 E8 FD FF FF         LEA EAX,[EBP + 0xfffffde8]
005D8D10  8B CA                     MOV ECX,EDX
005D8D12  50                        PUSH EAX
005D8D13  83 E1 03                  AND ECX,0x3
005D8D16  8D 83 D4 1C 00 00         LEA EAX,[EBX + 0x1cd4]
005D8D1C  F3 A4                     MOVSB.REP ES:EDI,ESI
005D8D1E  50                        PUSH EAX
005D8D1F  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
005D8D25  8B F0                     MOV ESI,EAX
005D8D27  33 C0                     XOR EAX,EAX
005D8D29  83 FE FF                  CMP ESI,-0x1
005D8D2C  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005D8D2F  0F 95 C0                  SETNZ AL
005D8D32  85 C0                     TEST EAX,EAX
005D8D34  0F 84 83 01 00 00         JZ 0x005d8ebd
LAB_005d8d3a:
005D8D3A  F6 85 E8 FD FF FF 10      TEST byte ptr [EBP + 0xfffffde8],0x10
005D8D41  0F 84 5D 01 00 00         JZ 0x005d8ea4
005D8D47  BF B8 C8 7C 00            MOV EDI,0x7cc8b8
005D8D4C  8D B5 14 FE FF FF         LEA ESI,[EBP + 0xfffffe14]
LAB_005d8d52:
005D8D52  8A 0E                     MOV CL,byte ptr [ESI]
005D8D54  8A 17                     MOV DL,byte ptr [EDI]
005D8D56  8A C1                     MOV AL,CL
005D8D58  3A CA                     CMP CL,DL
005D8D5A  75 1E                     JNZ 0x005d8d7a
005D8D5C  84 C0                     TEST AL,AL
005D8D5E  74 16                     JZ 0x005d8d76
005D8D60  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005D8D63  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005D8D66  8A C2                     MOV AL,DL
005D8D68  3A D1                     CMP DL,CL
005D8D6A  75 0E                     JNZ 0x005d8d7a
005D8D6C  83 C6 02                  ADD ESI,0x2
005D8D6F  83 C7 02                  ADD EDI,0x2
005D8D72  84 C0                     TEST AL,AL
005D8D74  75 DC                     JNZ 0x005d8d52
LAB_005d8d76:
005D8D76  33 C0                     XOR EAX,EAX
005D8D78  EB 05                     JMP 0x005d8d7f
LAB_005d8d7a:
005D8D7A  1B C0                     SBB EAX,EAX
005D8D7C  83 D8 FF                  SBB EAX,-0x1
LAB_005d8d7f:
005D8D7F  85 C0                     TEST EAX,EAX
005D8D81  0F 84 1D 01 00 00         JZ 0x005d8ea4
005D8D87  BE B4 C8 7C 00            MOV ESI,0x7cc8b4
005D8D8C  8D BD 14 FE FF FF         LEA EDI,[EBP + 0xfffffe14]
LAB_005d8d92:
005D8D92  8A 0F                     MOV CL,byte ptr [EDI]
005D8D94  8A 16                     MOV DL,byte ptr [ESI]
005D8D96  8A C1                     MOV AL,CL
005D8D98  3A CA                     CMP CL,DL
005D8D9A  75 1E                     JNZ 0x005d8dba
005D8D9C  84 C0                     TEST AL,AL
005D8D9E  74 16                     JZ 0x005d8db6
005D8DA0  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005D8DA3  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
005D8DA6  8A C2                     MOV AL,DL
005D8DA8  3A D1                     CMP DL,CL
005D8DAA  75 0E                     JNZ 0x005d8dba
005D8DAC  83 C7 02                  ADD EDI,0x2
005D8DAF  83 C6 02                  ADD ESI,0x2
005D8DB2  84 C0                     TEST AL,AL
005D8DB4  75 DC                     JNZ 0x005d8d92
LAB_005d8db6:
005D8DB6  33 C0                     XOR EAX,EAX
005D8DB8  EB 05                     JMP 0x005d8dbf
LAB_005d8dba:
005D8DBA  1B C0                     SBB EAX,EAX
005D8DBC  83 D8 FF                  SBB EAX,-0x1
LAB_005d8dbf:
005D8DBF  85 C0                     TEST EAX,EAX
005D8DC1  0F 84 DD 00 00 00         JZ 0x005d8ea4
005D8DC7  8D BD 14 FE FF FF         LEA EDI,[EBP + 0xfffffe14]
005D8DCD  83 C9 FF                  OR ECX,0xffffffff
005D8DD0  33 C0                     XOR EAX,EAX
005D8DD2  F2 AE                     SCASB.REPNE ES:EDI
005D8DD4  F7 D1                     NOT ECX
005D8DD6  49                        DEC ECX
005D8DD7  83 F9 40                  CMP ECX,0x40
005D8DDA  0F 83 C4 00 00 00         JNC 0x005d8ea4
005D8DE0  A1 A0 C1 79 00            MOV EAX,[0x0079c1a0]
005D8DE5  8B 15 9C C1 79 00         MOV EDX,dword ptr [0x0079c19c]
005D8DEB  8D 8D 14 FE FF FF         LEA ECX,[EBP + 0xfffffe14]
005D8DF1  50                        PUSH EAX
005D8DF2  51                        PUSH ECX
005D8DF3  52                        PUSH EDX
005D8DF4  68 80 76 80 00            PUSH 0x807680
005D8DF9  81 C3 D4 1C 00 00         ADD EBX,0x1cd4
005D8DFF  68 EC A1 7C 00            PUSH 0x7ca1ec
005D8E04  53                        PUSH EBX
005D8E05  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D8E0B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D8E10  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
005D8E16  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
005D8E1C  6A 00                     PUSH 0x0
005D8E1E  52                        PUSH EDX
005D8E1F  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
005D8E25  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8E2B  E8 C0 49 15 00            CALL 0x0072d7f0
005D8E30  83 C4 20                  ADD ESP,0x20
005D8E33  85 C0                     TEST EAX,EAX
005D8E35  75 5E                     JNZ 0x005d8e95
005D8E37  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005D8E3A  50                        PUSH EAX
005D8E3B  50                        PUSH EAX
005D8E3C  50                        PUSH EAX
005D8E3D  8D 83 D4 1C 00 00         LEA EAX,[EBX + 0x1cd4]
005D8E43  50                        PUSH EAX
005D8E44  68 45 03 00 00            PUSH 0x345
005D8E49  E8 72 80 11 00            CALL 0x006f0ec0
005D8E4E  8B F0                     MOV ESI,EAX
005D8E50  83 C4 14                  ADD ESP,0x14
005D8E53  85 F6                     TEST ESI,ESI
005D8E55  74 30                     JZ 0x005d8e87
005D8E57  8B 0D A4 C1 79 00         MOV ECX,dword ptr [0x0079c1a4]
005D8E5D  51                        PUSH ECX
005D8E5E  6A 0C                     PUSH 0xc
005D8E60  8B CE                     MOV ECX,ESI
005D8E62  E8 59 93 11 00            CALL 0x006f21c0
005D8E67  85 C0                     TEST EAX,EAX
005D8E69  75 13                     JNZ 0x005d8e7e
005D8E6B  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D8E71  8D 95 14 FE FF FF         LEA EDX,[EBP + 0xfffffe14]
005D8E77  52                        PUSH EDX
005D8E78  50                        PUSH EAX
005D8E79  E8 22 CC 0D 00            CALL 0x006b5aa0
LAB_005d8e7e:
005D8E7E  56                        PUSH ESI
005D8E7F  E8 EC 82 11 00            CALL 0x006f1170
005D8E84  83 C4 04                  ADD ESP,0x4
LAB_005d8e87:
005D8E87  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
005D8E8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8E93  EB 0F                     JMP 0x005d8ea4
LAB_005d8e95:
005D8E95  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
005D8E9B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005D8E9E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005d8ea4:
005D8EA4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005D8EA7  8D 85 E8 FD FF FF         LEA EAX,[EBP + 0xfffffde8]
005D8EAD  50                        PUSH EAX
005D8EAE  56                        PUSH ESI
005D8EAF  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
005D8EB5  85 C0                     TEST EAX,EAX
005D8EB7  0F 85 7D FE FF FF         JNZ 0x005d8d3a
LAB_005d8ebd:
005D8EBD  83 FE FF                  CMP ESI,-0x1
005D8EC0  74 07                     JZ 0x005d8ec9
005D8EC2  56                        PUSH ESI
005D8EC3  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_005d8ec9:
005D8EC9  BF DD 7D 80 00            MOV EDI,0x807ddd
005D8ECE  83 C9 FF                  OR ECX,0xffffffff
005D8ED1  33 C0                     XOR EAX,EAX
005D8ED3  8D 95 28 FF FF FF         LEA EDX,[EBP + 0xffffff28]
005D8ED9  F2 AE                     SCASB.REPNE ES:EDI
005D8EDB  F7 D1                     NOT ECX
005D8EDD  2B F9                     SUB EDI,ECX
005D8EDF  8B C1                     MOV EAX,ECX
005D8EE1  8B F7                     MOV ESI,EDI
005D8EE3  8B FA                     MOV EDI,EDX
005D8EE5  C1 E9 02                  SHR ECX,0x2
005D8EE8  F3 A5                     MOVSD.REP ES:EDI,ESI
005D8EEA  8B C8                     MOV ECX,EAX
005D8EEC  8B 83 F1 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af1]
005D8EF2  83 E1 03                  AND ECX,0x3
005D8EF5  F3 A4                     MOVSB.REP ES:EDI,ESI
005D8EF7  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D8EFD  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005D8F00  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005D8F07  56                        PUSH ESI
005D8F08  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005D8F0B  50                        PUSH EAX
005D8F0C  6A 02                     PUSH 0x2
005D8F0E  8B CB                     MOV ECX,EBX
005D8F10  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005D8F13  E8 68 D1 10 00            CALL 0x006e6080
005D8F18  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D8F1E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D8F21  85 C0                     TEST EAX,EAX
005D8F23  0F 8E 13 01 00 00         JLE 0x005d903c
005D8F29  83 F8 01                  CMP EAX,0x1
005D8F2C  7E 6C                     JLE 0x005d8f9a
LAB_005d8f2e:
005D8F2E  8D 50 FF                  LEA EDX,[EAX + -0x1]
005D8F31  33 F6                     XOR ESI,ESI
005D8F33  85 D2                     TEST EDX,EDX
005D8F35  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005D8F3C  7E 55                     JLE 0x005d8f93
LAB_005d8f3e:
005D8F3E  8D 7E 01                  LEA EDI,[ESI + 0x1]
005D8F41  3B F8                     CMP EDI,EAX
005D8F43  7D 09                     JGE 0x005d8f4e
005D8F45  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005D8F48  8B 54 B2 04               MOV EDX,dword ptr [EDX + ESI*0x4 + 0x4]
005D8F4C  EB 02                     JMP 0x005d8f50
LAB_005d8f4e:
005D8F4E  33 D2                     XOR EDX,EDX
LAB_005d8f50:
005D8F50  3B F0                     CMP ESI,EAX
005D8F52  7D 08                     JGE 0x005d8f5c
005D8F54  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
005D8F57  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
005D8F5A  EB 02                     JMP 0x005d8f5e
LAB_005d8f5c:
005D8F5C  33 C0                     XOR EAX,EAX
LAB_005d8f5e:
005D8F5E  52                        PUSH EDX
005D8F5F  50                        PUSH EAX
005D8F60  E8 BB 56 15 00            CALL 0x0072e620
005D8F65  83 C4 08                  ADD ESP,0x8
005D8F68  85 C0                     TEST EAX,EAX
005D8F6A  7E 15                     JLE 0x005d8f81
005D8F6C  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D8F72  57                        PUSH EDI
005D8F73  56                        PUSH ESI
005D8F74  51                        PUSH ECX
005D8F75  E8 86 F2 0D 00            CALL 0x006b8200
005D8F7A  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005d8f81:
005D8F81  8B 8B CC 1C 00 00         MOV ECX,dword ptr [EBX + 0x1ccc]
005D8F87  8B F7                     MOV ESI,EDI
005D8F89  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D8F8C  8D 50 FF                  LEA EDX,[EAX + -0x1]
005D8F8F  3B F2                     CMP ESI,EDX
005D8F91  7C AB                     JL 0x005d8f3e
LAB_005d8f93:
005D8F93  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D8F96  85 D2                     TEST EDX,EDX
005D8F98  75 94                     JNZ 0x005d8f2e
LAB_005d8f9a:
005D8F9A  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005D8F9D  8B CB                     MOV ECX,EBX
005D8F9F  50                        PUSH EAX
005D8FA0  8B 83 F1 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af1]
005D8FA6  50                        PUSH EAX
005D8FA7  6A 02                     PUSH 0x2
005D8FA9  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005D8FB0  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005D8FB7  E8 C4 D0 10 00            CALL 0x006e6080
005D8FBC  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D8FC2  33 C9                     XOR ECX,ECX
005D8FC4  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005D8FC7  85 C0                     TEST EAX,EAX
005D8FC9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D8FCC  7E 54                     JLE 0x005d9022
005D8FCE  3B C8                     CMP ECX,EAX
005D8FD0  7D 0E                     JGE 0x005d8fe0
LAB_005d8fd2:
005D8FD2  8B 83 CC 1C 00 00         MOV EAX,dword ptr [EBX + 0x1ccc]
005D8FD8  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005D8FDB  8B 34 8A                  MOV ESI,dword ptr [EDX + ECX*0x4]
005D8FDE  EB 02                     JMP 0x005d8fe2
LAB_005d8fe0:
005D8FE0  33 F6                     XOR ESI,ESI
LAB_005d8fe2:
005D8FE2  8D BD 28 FF FF FF         LEA EDI,[EBP + 0xffffff28]
LAB_005d8fe8:
005D8FE8  8A 16                     MOV DL,byte ptr [ESI]
005D8FEA  8A C2                     MOV AL,DL
005D8FEC  3A 17                     CMP DL,byte ptr [EDI]
005D8FEE  75 1C                     JNZ 0x005d900c
005D8FF0  84 C0                     TEST AL,AL
005D8FF2  74 14                     JZ 0x005d9008
005D8FF4  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005D8FF7  8A C2                     MOV AL,DL
005D8FF9  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005D8FFC  75 0E                     JNZ 0x005d900c
005D8FFE  83 C6 02                  ADD ESI,0x2
005D9001  83 C7 02                  ADD EDI,0x2
005D9004  84 C0                     TEST AL,AL
005D9006  75 E0                     JNZ 0x005d8fe8
LAB_005d9008:
005D9008  33 C0                     XOR EAX,EAX
005D900A  EB 05                     JMP 0x005d9011
LAB_005d900c:
005D900C  1B C0                     SBB EAX,EAX
005D900E  83 D8 FF                  SBB EAX,-0x1
LAB_005d9011:
005D9011  85 C0                     TEST EAX,EAX
005D9013  74 0A                     JZ 0x005d901f
005D9015  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D9018  41                        INC ECX
005D9019  3B C8                     CMP ECX,EAX
005D901B  7C B5                     JL 0x005d8fd2
005D901D  EB 03                     JMP 0x005d9022
LAB_005d901f:
005D901F  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005d9022:
005D9022  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005D9025  8B 8B F1 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af1]
005D902B  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005D902E  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005D9035  56                        PUSH ESI
005D9036  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005D9039  51                        PUSH ECX
005D903A  EB 2E                     JMP 0x005d906a
LAB_005d903c:
005D903C  8B 93 F1 1A 00 00         MOV EDX,dword ptr [EBX + 0x1af1]
005D9042  56                        PUSH ESI
005D9043  52                        PUSH EDX
005D9044  6A 02                     PUSH 0x2
005D9046  8B CB                     MOV ECX,EBX
005D9048  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005D904F  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005D9056  E8 25 D0 10 00            CALL 0x006e6080
005D905B  8B 83 F1 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af1]
005D9061  56                        PUSH ESI
005D9062  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005D9069  50                        PUSH EAX
LAB_005d906a:
005D906A  6A 02                     PUSH 0x2
005D906C  8B CB                     MOV ECX,EBX
005D906E  E8 0D D0 10 00            CALL 0x006e6080
005D9073  8B 8B F5 1A 00 00         MOV ECX,dword ptr [EBX + 0x1af5]
005D9079  56                        PUSH ESI
005D907A  51                        PUSH ECX
005D907B  6A 02                     PUSH 0x2
005D907D  8B CB                     MOV ECX,EBX
005D907F  C7 43 2D 29 00 00 00      MOV dword ptr [EBX + 0x2d],0x29
005D9086  C7 43 31 09 00 00 00      MOV dword ptr [EBX + 0x31],0x9
005D908D  E8 EE CF 10 00            CALL 0x006e6080
005D9092  8B 93 B4 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cb4]
005D9098  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D909D  52                        PUSH EDX
005D909E  50                        PUSH EAX
005D909F  E8 2C A5 0D 00            CALL 0x006b35d0
005D90A4  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005D90A7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D90AD  5F                        POP EDI
005D90AE  5E                        POP ESI
005D90AF  5B                        POP EBX
005D90B0  8B E5                     MOV ESP,EBP
005D90B2  5D                        POP EBP
005D90B3  C3                        RET
LAB_005d90b4:
005D90B4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005D90B7  68 94 D6 7C 00            PUSH 0x7cd694
005D90BC  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D90C1  56                        PUSH ESI
005D90C2  57                        PUSH EDI
005D90C3  68 67 01 00 00            PUSH 0x167
005D90C8  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D90CD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D90D3  E8 F8 43 0D 00            CALL 0x006ad4d0
005D90D8  83 C4 18                  ADD ESP,0x18
005D90DB  85 C0                     TEST EAX,EAX
005D90DD  74 01                     JZ 0x005d90e0
005D90DF  CC                        INT3
LAB_005d90e0:
005D90E0  68 67 01 00 00            PUSH 0x167
005D90E5  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D90EA  57                        PUSH EDI
005D90EB  56                        PUSH ESI
005D90EC  E8 4F CD 0C 00            CALL 0x006a5e40
005D90F1  5F                        POP EDI
005D90F2  5E                        POP ESI
005D90F3  5B                        POP EBX
005D90F4  8B E5                     MOV ESP,EBP
005D90F6  5D                        POP EBP
005D90F7  C3                        RET
