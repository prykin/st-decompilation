FUN_005d7a50:
005D7A50  55                        PUSH EBP
005D7A51  8B EC                     MOV EBP,ESP
005D7A53  83 EC 48                  SUB ESP,0x48
005D7A56  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D7A5B  53                        PUSH EBX
005D7A5C  56                        PUSH ESI
005D7A5D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D7A60  57                        PUSH EDI
005D7A61  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D7A64  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D7A67  6A 00                     PUSH 0x0
005D7A69  52                        PUSH EDX
005D7A6A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D7A6D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D7A73  E8 78 5D 15 00            CALL 0x0072d7f0
005D7A78  8B F0                     MOV ESI,EAX
005D7A7A  83 C4 08                  ADD ESP,0x8
005D7A7D  85 F6                     TEST ESI,ESI
005D7A7F  0F 85 AB 03 00 00         JNZ 0x005d7e30
005D7A85  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D7A88  50                        PUSH EAX
005D7A89  50                        PUSH EAX
005D7A8A  50                        PUSH EAX
005D7A8B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D7A90  8D BE 60 1A 00 00         LEA EDI,[ESI + 0x1a60]
005D7A96  6A 07                     PUSH 0x7
005D7A98  6A 2F                     PUSH 0x2f
005D7A9A  50                        PUSH EAX
005D7A9B  8B CF                     MOV ECX,EDI
005D7A9D  E8 FE DD 13 00            CALL 0x007158a0
005D7AA2  A1 84 67 80 00            MOV EAX,[0x00806784]
005D7AA7  8B 17                     MOV EDX,dword ptr [EDI]
005D7AA9  6A FF                     PUSH -0x1
005D7AAB  68 20 D6 7C 00            PUSH 0x7cd620
005D7AB0  6A 00                     PUSH 0x0
005D7AB2  6A 07                     PUSH 0x7
005D7AB4  50                        PUSH EAX
005D7AB5  8B CF                     MOV ECX,EDI
005D7AB7  FF 52 04                  CALL dword ptr [EDX + 0x4]
005D7ABA  C7 86 7C 1A 00 00 2E 00 00 00  MOV dword ptr [ESI + 0x1a7c],0x2e
005D7AC4  C7 86 80 1A 00 00 93 01 00 00  MOV dword ptr [ESI + 0x1a80],0x193
005D7ACE  C7 86 68 1A 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a68],0x0
005D7AD8  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005D7ADB  83 F8 FF                  CMP EAX,-0x1
005D7ADE  74 16                     JZ 0x005d7af6
005D7AE0  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
005D7AE3  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005D7AE6  51                        PUSH ECX
005D7AE7  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005D7AEA  52                        PUSH EDX
005D7AEB  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005D7AEE  51                        PUSH ECX
005D7AEF  50                        PUSH EAX
005D7AF0  52                        PUSH EDX
005D7AF1  E8 3A BC 0D 00            CALL 0x006b3730
LAB_005d7af6:
005D7AF6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D7AFB  6A 01                     PUSH 0x1
005D7AFD  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
005D7B00  8D 48 28                  LEA ECX,[EAX + 0x28]
005D7B03  51                        PUSH ECX
005D7B04  50                        PUSH EAX
005D7B05  E8 D6 D4 0D 00            CALL 0x006b4fe0
005D7B0A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D7B10  50                        PUSH EAX
005D7B11  33 C9                     XOR ECX,ECX
005D7B13  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005D7B16  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005D7B1A  51                        PUSH ECX
005D7B1B  68 A5 00 00 00            PUSH 0xa5
005D7B20  68 5E 01 00 00            PUSH 0x15e
005D7B25  E8 96 D5 0D 00            CALL 0x006b50c0
005D7B2A  89 86 B8 1C 00 00         MOV dword ptr [ESI + 0x1cb8],EAX
005D7B30  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005D7B33  85 DB                     TEST EBX,EBX
005D7B35  75 18                     JNZ 0x005d7b4f
005D7B37  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005D7B3B  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005D7B3F  83 C3 1F                  ADD EBX,0x1f
005D7B42  C1 EB 03                  SHR EBX,0x3
005D7B45  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005D7B4B  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005d7b4f:
005D7B4F  50                        PUSH EAX
005D7B50  E8 4B D4 0D 00            CALL 0x006b4fa0
005D7B55  8B CB                     MOV ECX,EBX
005D7B57  8B F8                     MOV EDI,EAX
005D7B59  8B D1                     MOV EDX,ECX
005D7B5B  83 C8 FF                  OR EAX,0xffffffff
005D7B5E  C1 E9 02                  SHR ECX,0x2
005D7B61  F3 AB                     STOSD.REP ES:EDI
005D7B63  8B CA                     MOV ECX,EDX
005D7B65  6A 01                     PUSH 0x1
005D7B67  83 E1 03                  AND ECX,0x3
005D7B6A  F3 AA                     STOSB.REP ES:EDI
005D7B6C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D7B71  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
005D7B74  8D 48 28                  LEA ECX,[EAX + 0x28]
005D7B77  51                        PUSH ECX
005D7B78  50                        PUSH EAX
005D7B79  E8 62 D4 0D 00            CALL 0x006b4fe0
005D7B7E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D7B84  50                        PUSH EAX
005D7B85  33 C9                     XOR ECX,ECX
005D7B87  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005D7B8A  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005D7B8E  51                        PUSH ECX
005D7B8F  6A 0E                     PUSH 0xe
005D7B91  68 3E 01 00 00            PUSH 0x13e
005D7B96  E8 25 D5 0D 00            CALL 0x006b50c0
005D7B9B  89 86 BC 1C 00 00         MOV dword ptr [ESI + 0x1cbc],EAX
005D7BA1  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005D7BA4  85 DB                     TEST EBX,EBX
005D7BA6  75 18                     JNZ 0x005d7bc0
005D7BA8  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005D7BAC  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005D7BB0  83 C3 1F                  ADD EBX,0x1f
005D7BB3  C1 EB 03                  SHR EBX,0x3
005D7BB6  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005D7BBC  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005d7bc0:
005D7BC0  50                        PUSH EAX
005D7BC1  E8 DA D3 0D 00            CALL 0x006b4fa0
005D7BC6  8B CB                     MOV ECX,EBX
005D7BC8  8B F8                     MOV EDI,EAX
005D7BCA  8B D1                     MOV EDX,ECX
005D7BCC  83 C8 FF                  OR EAX,0xffffffff
005D7BCF  C1 E9 02                  SHR ECX,0x2
005D7BD2  F3 AB                     STOSD.REP ES:EDI
005D7BD4  8B CA                     MOV ECX,EDX
005D7BD6  6A 01                     PUSH 0x1
005D7BD8  83 E1 03                  AND ECX,0x3
005D7BDB  F3 AA                     STOSB.REP ES:EDI
005D7BDD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D7BE2  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
005D7BE5  8D 48 28                  LEA ECX,[EAX + 0x28]
005D7BE8  51                        PUSH ECX
005D7BE9  50                        PUSH EAX
005D7BEA  E8 F1 D3 0D 00            CALL 0x006b4fe0
005D7BEF  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D7BF5  50                        PUSH EAX
005D7BF6  33 C9                     XOR ECX,ECX
005D7BF8  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005D7BFB  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005D7BFF  51                        PUSH ECX
005D7C00  6A 28                     PUSH 0x28
005D7C02  68 04 01 00 00            PUSH 0x104
005D7C07  E8 B4 D4 0D 00            CALL 0x006b50c0
005D7C0C  89 86 C0 1C 00 00         MOV dword ptr [ESI + 0x1cc0],EAX
005D7C12  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005D7C15  85 DB                     TEST EBX,EBX
005D7C17  75 18                     JNZ 0x005d7c31
005D7C19  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005D7C1D  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005D7C21  83 C3 1F                  ADD EBX,0x1f
005D7C24  C1 EB 03                  SHR EBX,0x3
005D7C27  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005D7C2D  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005d7c31:
005D7C31  50                        PUSH EAX
005D7C32  E8 69 D3 0D 00            CALL 0x006b4fa0
005D7C37  8B CB                     MOV ECX,EBX
005D7C39  8B F8                     MOV EDI,EAX
005D7C3B  8B D1                     MOV EDX,ECX
005D7C3D  83 C8 FF                  OR EAX,0xffffffff
005D7C40  C1 E9 02                  SHR ECX,0x2
005D7C43  F3 AB                     STOSD.REP ES:EDI
005D7C45  8B CA                     MOV ECX,EDX
005D7C47  83 E1 03                  AND ECX,0x3
005D7C4A  F3 AA                     STOSB.REP ES:EDI
005D7C4C  8B CE                     MOV ECX,ESI
005D7C4E  E8 EA B0 E2 FF            CALL 0x00402d3d
005D7C53  8B 86 B8 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cb8]
005D7C59  8D BE B4 1C 00 00         LEA EDI,[ESI + 0x1cb4]
005D7C5F  50                        PUSH EAX
005D7C60  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D7C63  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005D7C66  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D7C6B  51                        PUSH ECX
005D7C6C  52                        PUSH EDX
005D7C6D  68 F6 23 40 00            PUSH 0x4023f6
005D7C72  6A 2E                     PUSH 0x2e
005D7C74  57                        PUSH EDI
005D7C75  50                        PUSH EAX
005D7C76  E8 B5 A6 0D 00            CALL 0x006b2330
005D7C7B  8B 0F                     MOV ECX,dword ptr [EDI]
005D7C7D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005D7C83  68 A9 01 00 00            PUSH 0x1a9
005D7C88  68 E1 00 00 00            PUSH 0xe1
005D7C8D  6A FF                     PUSH -0x1
005D7C8F  51                        PUSH ECX
005D7C90  52                        PUSH EDX
005D7C91  E8 AA B9 0D 00            CALL 0x006b3640
005D7C96  8B 07                     MOV EAX,dword ptr [EDI]
005D7C98  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005D7C9E  50                        PUSH EAX
005D7C9F  51                        PUSH ECX
005D7CA0  E8 4B BE 0D 00            CALL 0x006b3af0
005D7CA5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005D7CAB  33 DB                     XOR EBX,EBX
005D7CAD  53                        PUSH EBX
005D7CAE  53                        PUSH EBX
005D7CAF  53                        PUSH EBX
005D7CB0  8D BE 01 1B 00 00         LEA EDI,[ESI + 0x1b01]
005D7CB6  6A 07                     PUSH 0x7
005D7CB8  6A 2D                     PUSH 0x2d
005D7CBA  52                        PUSH EDX
005D7CBB  8B CF                     MOV ECX,EDI
005D7CBD  E8 DE DB 13 00            CALL 0x007158a0
005D7CC2  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005D7CC8  8B 07                     MOV EAX,dword ptr [EDI]
005D7CCA  6A FF                     PUSH -0x1
005D7CCC  68 14 D6 7C 00            PUSH 0x7cd614
005D7CD1  53                        PUSH EBX
005D7CD2  6A 07                     PUSH 0x7
005D7CD4  51                        PUSH ECX
005D7CD5  8B CF                     MOV ECX,EDI
005D7CD7  FF 50 04                  CALL dword ptr [EAX + 0x4]
005D7CDA  C7 86 1D 1B 00 00 2B 02 00 00  MOV dword ptr [ESI + 0x1b1d],0x22b
005D7CE4  C7 86 21 1B 00 00 BE 01 00 00  MOV dword ptr [ESI + 0x1b21],0x1be
005D7CEE  89 9E 09 1B 00 00         MOV dword ptr [ESI + 0x1b09],EBX
005D7CF4  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005D7CF7  83 F8 FF                  CMP EAX,-0x1
005D7CFA  74 0A                     JZ 0x005d7d06
005D7CFC  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005D7CFF  50                        PUSH EAX
005D7D00  52                        PUSH EDX
005D7D01  E8 EA BD 0D 00            CALL 0x006b3af0
LAB_005d7d06:
005D7D06  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D7D0B  53                        PUSH EBX
005D7D0C  53                        PUSH EBX
005D7D0D  53                        PUSH EBX
005D7D0E  8D BE 92 1B 00 00         LEA EDI,[ESI + 0x1b92]
005D7D14  6A 07                     PUSH 0x7
005D7D16  6A 2D                     PUSH 0x2d
005D7D18  50                        PUSH EAX
005D7D19  8B CF                     MOV ECX,EDI
005D7D1B  E8 80 DB 13 00            CALL 0x007158a0
005D7D20  A1 84 67 80 00            MOV EAX,[0x00806784]
005D7D25  8B 17                     MOV EDX,dword ptr [EDI]
005D7D27  6A FF                     PUSH -0x1
005D7D29  68 08 D6 7C 00            PUSH 0x7cd608
005D7D2E  53                        PUSH EBX
005D7D2F  6A 07                     PUSH 0x7
005D7D31  50                        PUSH EAX
005D7D32  8B CF                     MOV ECX,EDI
005D7D34  FF 52 04                  CALL dword ptr [EDX + 0x4]
005D7D37  C7 86 AE 1B 00 00 2B 02 00 00  MOV dword ptr [ESI + 0x1bae],0x22b
005D7D41  C7 86 B2 1B 00 00 11 02 00 00  MOV dword ptr [ESI + 0x1bb2],0x211
005D7D4B  89 9E 9A 1B 00 00         MOV dword ptr [ESI + 0x1b9a],EBX
005D7D51  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005D7D54  83 F8 FF                  CMP EAX,-0x1
005D7D57  74 0A                     JZ 0x005d7d63
005D7D59  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005D7D5C  50                        PUSH EAX
005D7D5D  51                        PUSH ECX
005D7D5E  E8 8D BD 0D 00            CALL 0x006b3af0
LAB_005d7d63:
005D7D63  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005D7D69  53                        PUSH EBX
005D7D6A  53                        PUSH EBX
005D7D6B  53                        PUSH EBX
005D7D6C  8D BE 23 1C 00 00         LEA EDI,[ESI + 0x1c23]
005D7D72  6A 07                     PUSH 0x7
005D7D74  6A 2D                     PUSH 0x2d
005D7D76  52                        PUSH EDX
005D7D77  8B CF                     MOV ECX,EDI
005D7D79  E8 22 DB 13 00            CALL 0x007158a0
005D7D7E  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005D7D84  8B 07                     MOV EAX,dword ptr [EDI]
005D7D86  6A FF                     PUSH -0x1
005D7D88  68 FC D5 7C 00            PUSH 0x7cd5fc
005D7D8D  53                        PUSH EBX
005D7D8E  6A 07                     PUSH 0x7
005D7D90  51                        PUSH ECX
005D7D91  8B CF                     MOV ECX,EDI
005D7D93  FF 50 04                  CALL dword ptr [EAX + 0x4]
005D7D96  C7 86 3F 1C 00 00 2F 02 00 00  MOV dword ptr [ESI + 0x1c3f],0x22f
005D7DA0  C7 86 43 1C 00 00 D3 01 00 00  MOV dword ptr [ESI + 0x1c43],0x1d3
005D7DAA  89 9E 2B 1C 00 00         MOV dword ptr [ESI + 0x1c2b],EBX
005D7DB0  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005D7DB3  83 F8 FF                  CMP EAX,-0x1
005D7DB6  74 0A                     JZ 0x005d7dc2
005D7DB8  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005D7DBB  50                        PUSH EAX
005D7DBC  52                        PUSH EDX
005D7DBD  E8 2E BD 0D 00            CALL 0x006b3af0
LAB_005d7dc2:
005D7DC2  6A 01                     PUSH 0x1
005D7DC4  6A 01                     PUSH 0x1
005D7DC6  53                        PUSH EBX
005D7DC7  E8 24 D7 0D 00            CALL 0x006b54f0
005D7DCC  68 A0 16 80 00            PUSH 0x8016a0
005D7DD1  53                        PUSH EBX
005D7DD2  50                        PUSH EAX
005D7DD3  89 86 D0 1C 00 00         MOV dword ptr [ESI + 0x1cd0],EAX
005D7DD9  E8 42 E2 0D 00            CALL 0x006b6020
005D7DDE  8B 86 B8 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cb8]
005D7DE4  6A 01                     PUSH 0x1
005D7DE6  8D 48 28                  LEA ECX,[EAX + 0x28]
005D7DE9  51                        PUSH ECX
005D7DEA  50                        PUSH EAX
005D7DEB  E8 F0 D1 0D 00            CALL 0x006b4fe0
005D7DF0  8B 96 B8 1C 00 00         MOV EDX,dword ptr [ESI + 0x1cb8]
005D7DF6  50                        PUSH EAX
005D7DF7  33 C0                     XOR EAX,EAX
005D7DF9  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005D7DFD  50                        PUSH EAX
005D7DFE  6A 0E                     PUSH 0xe
005D7E00  68 56 01 00 00            PUSH 0x156
005D7E05  E8 B6 D2 0D 00            CALL 0x006b50c0
005D7E0A  6A FF                     PUSH -0x1
005D7E0C  53                        PUSH EBX
005D7E0D  6A 01                     PUSH 0x1
005D7E0F  8B CE                     MOV ECX,ESI
005D7E11  89 86 C8 1C 00 00         MOV dword ptr [ESI + 0x1cc8],EAX
005D7E17  C6 46 65 03               MOV byte ptr [ESI + 0x65],0x3
005D7E1B  E8 D1 CD E2 FF            CALL 0x00404bf1
005D7E20  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D7E23  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D7E29  5F                        POP EDI
005D7E2A  5E                        POP ESI
005D7E2B  5B                        POP EBX
005D7E2C  8B E5                     MOV ESP,EBP
005D7E2E  5D                        POP EBP
005D7E2F  C3                        RET
LAB_005d7e30:
005D7E30  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D7E33  68 E8 D5 7C 00            PUSH 0x7cd5e8
005D7E38  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D7E3D  56                        PUSH ESI
005D7E3E  6A 00                     PUSH 0x0
005D7E40  6A 49                     PUSH 0x49
005D7E42  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D7E47  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D7E4D  E8 7E 56 0D 00            CALL 0x006ad4d0
005D7E52  83 C4 18                  ADD ESP,0x18
005D7E55  85 C0                     TEST EAX,EAX
005D7E57  74 01                     JZ 0x005d7e5a
005D7E59  CC                        INT3
LAB_005d7e5a:
005D7E5A  6A 49                     PUSH 0x49
005D7E5C  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D7E61  6A 00                     PUSH 0x0
005D7E63  56                        PUSH ESI
005D7E64  E8 D7 DF 0C 00            CALL 0x006a5e40
005D7E69  5F                        POP EDI
005D7E6A  5E                        POP ESI
005D7E6B  5B                        POP EBX
005D7E6C  8B E5                     MOV ESP,EBP
005D7E6E  5D                        POP EBP
005D7E6F  C3                        RET
