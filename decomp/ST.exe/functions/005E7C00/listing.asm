FUN_005e7c00:
005E7C00  55                        PUSH EBP
005E7C01  8B EC                     MOV EBP,ESP
005E7C03  83 EC 50                  SUB ESP,0x50
005E7C06  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E7C09  53                        PUSH EBX
005E7C0A  56                        PUSH ESI
005E7C0B  57                        PUSH EDI
005E7C0C  85 C0                     TEST EAX,EAX
005E7C0E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E7C11  0F 84 EC 02 00 00         JZ 0x005e7f03
005E7C17  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E7C1C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005E7C1F  8D 4D B0                  LEA ECX,[EBP + -0x50]
005E7C22  6A 00                     PUSH 0x0
005E7C24  52                        PUSH EDX
005E7C25  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005E7C28  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E7C2E  E8 BD 5B 14 00            CALL 0x0072d7f0
005E7C33  8B F0                     MOV ESI,EAX
005E7C35  83 C4 08                  ADD ESP,0x8
005E7C38  85 F6                     TEST ESI,ESI
005E7C3A  0F 85 85 02 00 00         JNZ 0x005e7ec5
005E7C40  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005E7C43  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005E7C46  85 C0                     TEST EAX,EAX
005E7C48  74 5A                     JZ 0x005e7ca4
005E7C4A  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7C50  8B 8E F4 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af4]
005E7C56  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
005E7C59  7E 18                     JLE 0x005e7c73
LAB_005e7c5b:
005E7C5B  51                        PUSH ECX
005E7C5C  50                        PUSH EAX
005E7C5D  E8 CE FB 0C 00            CALL 0x006b7830
005E7C62  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7C68  8B 8E F4 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af4]
005E7C6E  39 48 08                  CMP dword ptr [EAX + 0x8],ECX
005E7C71  7F E8                     JG 0x005e7c5b
LAB_005e7c73:
005E7C73  8B 8E F4 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af4]
005E7C79  8B 96 EC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1aec]
005E7C7F  B8 16 00 00 00            MOV EAX,0x16
005E7C84  6A 00                     PUSH 0x0
005E7C86  2B C1                     SUB EAX,ECX
005E7C88  8D 3C C0                  LEA EDI,[EAX + EAX*0x8]
005E7C8B  8D 04 78                  LEA EAX,[EAX + EDI*0x2]
005E7C8E  50                        PUSH EAX
005E7C8F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005E7C92  50                        PUSH EAX
005E7C93  8D 04 C9                  LEA EAX,[ECX + ECX*0x8]
005E7C96  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
005E7C99  51                        PUSH ECX
005E7C9A  6A 00                     PUSH 0x0
005E7C9C  6A 00                     PUSH 0x0
005E7C9E  52                        PUSH EDX
005E7C9F  E8 CC C4 0C 00            CALL 0x006b4170
LAB_005e7ca4:
005E7CA4  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E7CA9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005E7CAC  52                        PUSH EDX
005E7CAD  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005E7CB0  E8 CB B2 12 00            CALL 0x00712f80
005E7CB5  8B F8                     MOV EDI,EAX
005E7CB7  85 FF                     TEST EDI,EDI
005E7CB9  74 2C                     JZ 0x005e7ce7
005E7CBB  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7CC1  6A 01                     PUSH 0x1
005E7CC3  6A FF                     PUSH -0x1
005E7CC5  6A 00                     PUSH 0x0
005E7CC7  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005E7CCA  68 E4 01 00 00            PUSH 0x1e4
005E7CCF  68 D8 21 7C 00            PUSH 0x7c21d8
005E7CD4  57                        PUSH EDI
005E7CD5  E8 16 A5 12 00            CALL 0x007121f0
005E7CDA  8B D8                     MOV EBX,EAX
005E7CDC  57                        PUSH EDI
005E7CDD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005E7CE0  E8 8B D8 0C 00            CALL 0x006b5570
005E7CE5  EB 03                     JMP 0x005e7cea
LAB_005e7ce7:
005E7CE7  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_005e7cea:
005E7CEA  8B 96 F0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1af0]
005E7CF0  85 DB                     TEST EBX,EBX
005E7CF2  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005E7CF5  89 86 F4 1A 00 00         MOV dword ptr [ESI + 0x1af4],EAX
005E7CFB  74 32                     JZ 0x005e7d2f
005E7CFD  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E7D00  33 FF                     XOR EDI,EDI
005E7D02  85 C0                     TEST EAX,EAX
005E7D04  7E 23                     JLE 0x005e7d29
005E7D06  3B F8                     CMP EDI,EAX
005E7D08  7D 08                     JGE 0x005e7d12
LAB_005e7d0a:
005E7D0A  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005E7D0D  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
005E7D10  EB 02                     JMP 0x005e7d14
LAB_005e7d12:
005E7D12  33 C0                     XOR EAX,EAX
LAB_005e7d14:
005E7D14  8B 96 F0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1af0]
005E7D1A  50                        PUSH EAX
005E7D1B  52                        PUSH EDX
005E7D1C  E8 7F DD 0C 00            CALL 0x006b5aa0
005E7D21  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E7D24  47                        INC EDI
005E7D25  3B F8                     CMP EDI,EAX
005E7D27  7C E1                     JL 0x005e7d0a
LAB_005e7d29:
005E7D29  53                        PUSH EBX
005E7D2A  E8 41 D8 0C 00            CALL 0x006b5570
LAB_005e7d2f:
005E7D2F  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7D35  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005E7D38  83 F8 16                  CMP EAX,0x16
005E7D3B  0F 8C 83 00 00 00         JL 0x005e7dc4
005E7D41  83 F8 2C                  CMP EAX,0x2c
005E7D44  7C 47                     JL 0x005e7d8d
005E7D46  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005E7D4C  33 DB                     XOR EBX,EBX
005E7D4E  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E7D51  85 C9                     TEST ECX,ECX
005E7D53  75 18                     JNZ 0x005e7d6d
005E7D55  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005E7D59  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
005E7D5D  83 C1 1F                  ADD ECX,0x1f
005E7D60  C1 E9 03                  SHR ECX,0x3
005E7D63  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
005E7D69  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_005e7d6d:
005E7D6D  50                        PUSH EAX
005E7D6E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E7D71  E8 2A D2 0C 00            CALL 0x006b4fa0
005E7D76  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E7D79  8B F8                     MOV EDI,EAX
005E7D7B  8B D1                     MOV EDX,ECX
005E7D7D  33 C0                     XOR EAX,EAX
005E7D7F  C1 E9 02                  SHR ECX,0x2
005E7D82  F3 AB                     STOSD.REP ES:EDI
005E7D84  8B CA                     MOV ECX,EDX
005E7D86  83 E1 03                  AND ECX,0x3
005E7D89  F3 AA                     STOSB.REP ES:EDI
005E7D8B  EB 3A                     JMP 0x005e7dc7
LAB_005e7d8d:
005E7D8D  BB 2C 00 00 00            MOV EBX,0x2c
005E7D92  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
005E7D98  2B D8                     SUB EBX,EAX
005E7D9A  8D 14 DB                  LEA EDX,[EBX + EBX*0x8]
005E7D9D  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
005E7DA0  52                        PUSH EDX
005E7DA1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005E7DA4  52                        PUSH EDX
005E7DA5  8D 94 C0 3A FF FF FF      LEA EDX,[EAX + EAX*0x8 + 0xffffff3a]
005E7DAC  8D 44 50 EA               LEA EAX,[EAX + EDX*0x2 + -0x16]
005E7DB0  50                        PUSH EAX
005E7DB1  6A 00                     PUSH 0x0
005E7DB3  6A 00                     PUSH 0x0
005E7DB5  51                        PUSH ECX
005E7DB6  6A 00                     PUSH 0x0
005E7DB8  6A 00                     PUSH 0x0
005E7DBA  6A 00                     PUSH 0x0
005E7DBC  51                        PUSH ECX
005E7DBD  E8 2E D8 0C 00            CALL 0x006b55f0
005E7DC2  EB 03                     JMP 0x005e7dc7
LAB_005e7dc4:
005E7DC4  8D 58 FF                  LEA EBX,[EAX + -0x1]
LAB_005e7dc7:
005E7DC7  8B 8E F0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af0]
005E7DCD  BF 16 00 00 00            MOV EDI,0x16
005E7DD2  39 79 08                  CMP dword ptr [ECX + 0x8],EDI
005E7DD5  7C 24                     JL 0x005e7dfb
LAB_005e7dd7:
005E7DD7  8B 96 F0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1af0]
005E7DDD  6A 00                     PUSH 0x0
005E7DDF  52                        PUSH EDX
005E7DE0  E8 4B FA 0C 00            CALL 0x006b7830
005E7DE5  8B 96 F0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1af0]
005E7DEB  83 C2 E8                  ADD EDX,-0x18
005E7DEE  8B C2                     MOV EAX,EDX
005E7DF0  89 96 F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EDX
005E7DF6  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005E7DF9  7D DC                     JGE 0x005e7dd7
LAB_005e7dfb:
005E7DFB  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7E01  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E7E04  49                        DEC ECX
005E7E05  3B D9                     CMP EBX,ECX
005E7E07  0F 8F A6 00 00 00         JG 0x005e7eb3
005E7E0D  8D 14 DB                  LEA EDX,[EBX + EBX*0x8]
005E7E10  8D 84 9E 94 1A 00 00      LEA EAX,[ESI + EBX*0x4 + 0x1a94]
005E7E17  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E7E1A  8D 3C 53                  LEA EDI,[EBX + EDX*0x2]
LAB_005e7e1d:
005E7E1D  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005E7E23  6A 00                     PUSH 0x0
005E7E25  6A 13                     PUSH 0x13
005E7E27  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005E7E2A  51                        PUSH ECX
005E7E2B  57                        PUSH EDI
005E7E2C  6A 00                     PUSH 0x0
005E7E2E  6A 00                     PUSH 0x0
005E7E30  50                        PUSH EAX
005E7E31  E8 3A C3 0C 00            CALL 0x006b4170
005E7E36  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005E7E3C  6A 13                     PUSH 0x13
005E7E3E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005E7E41  83 EA 04                  SUB EDX,0x4
005E7E44  52                        PUSH EDX
005E7E45  57                        PUSH EDI
005E7E46  6A 02                     PUSH 0x2
005E7E48  6A 00                     PUSH 0x0
005E7E4A  50                        PUSH EAX
005E7E4B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E7E50  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005E7E53  E8 38 8C 12 00            CALL 0x00710a90
005E7E58  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7E5E  3B 58 08                  CMP EBX,dword ptr [EAX + 0x8]
005E7E61  7D 08                     JGE 0x005e7e6b
005E7E63  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E7E66  8B 04 99                  MOV EAX,dword ptr [ECX + EBX*0x4]
005E7E69  EB 02                     JMP 0x005e7e6d
LAB_005e7e6b:
005E7E6B  33 C0                     XOR EAX,EAX
LAB_005e7e6d:
005E7E6D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E7E73  6A 01                     PUSH 0x1
005E7E75  6A FF                     PUSH -0x1
005E7E77  6A 00                     PUSH 0x0
005E7E79  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005E7E7C  50                        PUSH EAX
005E7E7D  E8 3E 9B 12 00            CALL 0x007119c0
005E7E82  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E7E85  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E7E8B  8B 08                     MOV ECX,dword ptr [EAX]
005E7E8D  51                        PUSH ECX
005E7E8E  52                        PUSH EDX
005E7E8F  E8 3C B7 0C 00            CALL 0x006b35d0
005E7E94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E7E97  43                        INC EBX
005E7E98  83 C0 04                  ADD EAX,0x4
005E7E9B  83 C7 13                  ADD EDI,0x13
005E7E9E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E7EA1  8B 86 F0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af0]
005E7EA7  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E7EAA  49                        DEC ECX
005E7EAB  3B D9                     CMP EBX,ECX
005E7EAD  0F 8E 6A FF FF FF         JLE 0x005e7e1d
LAB_005e7eb3:
005E7EB3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005E7EB6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E7EBC  5F                        POP EDI
005E7EBD  5E                        POP ESI
005E7EBE  5B                        POP EBX
005E7EBF  8B E5                     MOV ESP,EBP
005E7EC1  5D                        POP EBP
005E7EC2  C2 08 00                  RET 0x8
LAB_005e7ec5:
005E7EC5  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005E7EC8  68 C4 DD 7C 00            PUSH 0x7cddc4
005E7ECD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E7ED2  56                        PUSH ESI
005E7ED3  6A 00                     PUSH 0x0
005E7ED5  68 20 01 00 00            PUSH 0x120
005E7EDA  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7EDF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E7EE4  E8 E7 55 0C 00            CALL 0x006ad4d0
005E7EE9  83 C4 18                  ADD ESP,0x18
005E7EEC  85 C0                     TEST EAX,EAX
005E7EEE  74 01                     JZ 0x005e7ef1
005E7EF0  CC                        INT3
LAB_005e7ef1:
005E7EF1  68 20 01 00 00            PUSH 0x120
005E7EF6  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7EFB  6A 00                     PUSH 0x0
005E7EFD  56                        PUSH ESI
005E7EFE  E8 3D DF 0B 00            CALL 0x006a5e40
LAB_005e7f03:
005E7F03  5F                        POP EDI
005E7F04  5E                        POP ESI
005E7F05  5B                        POP EBX
005E7F06  8B E5                     MOV ESP,EBP
005E7F08  5D                        POP EBP
005E7F09  C2 08 00                  RET 0x8
