AppClassTy::LifeToAllSystem:
006E4D70  55                        PUSH EBP
006E4D71  8B EC                     MOV EBP,ESP
006E4D73  83 EC 48                  SUB ESP,0x48
006E4D76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E4D7B  53                        PUSH EBX
006E4D7C  56                        PUSH ESI
006E4D7D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E4D80  57                        PUSH EDI
006E4D81  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E4D84  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E4D87  6A 00                     PUSH 0x0
006E4D89  52                        PUSH EDX
006E4D8A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E4D8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4D93  E8 58 8A 04 00            CALL 0x0072d7f0
006E4D98  8B F0                     MOV ESI,EAX
006E4D9A  83 C4 08                  ADD ESP,0x8
006E4D9D  85 F6                     TEST ESI,ESI
006E4D9F  0F 85 E7 00 00 00         JNZ 0x006e4e8c
006E4DA5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E4DA8  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E4DAB  85 C9                     TEST ECX,ECX
006E4DAD  0F 8E C5 00 00 00         JLE 0x006e4e78
LAB_006e4db3:
006E4DB3  3B F1                     CMP ESI,ECX
006E4DB5  8B D9                     MOV EBX,ECX
006E4DB7  73 0D                     JNC 0x006e4dc6
006E4DB9  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4DBC  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
006E4DBF  0F AF C6                  IMUL EAX,ESI
006E4DC2  03 C2                     ADD EAX,EDX
006E4DC4  EB 02                     JMP 0x006e4dc8
LAB_006e4dc6:
006E4DC6  33 C0                     XOR EAX,EAX
LAB_006e4dc8:
006E4DC8  83 38 01                  CMP dword ptr [EAX],0x1
006E4DCB  0F 85 9B 00 00 00         JNZ 0x006e4e6c
006E4DD1  3B F1                     CMP ESI,ECX
006E4DD3  73 0D                     JNC 0x006e4de2
006E4DD5  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4DD8  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006E4DDB  0F AF C6                  IMUL EAX,ESI
006E4DDE  03 C1                     ADD EAX,ECX
006E4DE0  EB 02                     JMP 0x006e4de4
LAB_006e4de2:
006E4DE2  33 C0                     XOR EAX,EAX
LAB_006e4de4:
006E4DE4  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006E4DE7  8B C8                     MOV ECX,EAX
006E4DE9  8B 10                     MOV EDX,dword ptr [EAX]
006E4DEB  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
006E4DEE  85 C0                     TEST EAX,EAX
006E4DF0  74 17                     JZ 0x006e4e09
006E4DF2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E4DF8  68 8D 02 00 00            PUSH 0x28d
006E4DFD  68 8C E7 7E 00            PUSH 0x7ee78c
006E4E02  51                        PUSH ECX
006E4E03  50                        PUSH EAX
006E4E04  E8 37 10 FC FF            CALL 0x006a5e40
LAB_006e4e09:
006E4E09  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E4E0C  3B CB                     CMP ECX,EBX
006E4E0E  7D 08                     JGE 0x006e4e18
006E4E10  8B D1                     MOV EDX,ECX
006E4E12  2B D3                     SUB EDX,EBX
006E4E14  03 F2                     ADD ESI,EDX
006E4E16  78 60                     JS 0x006e4e78
LAB_006e4e18:
006E4E18  3B F1                     CMP ESI,ECX
006E4E1A  73 0D                     JNC 0x006e4e29
006E4E1C  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4E1F  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
006E4E22  0F AF C6                  IMUL EAX,ESI
006E4E25  03 C2                     ADD EAX,EDX
006E4E27  EB 02                     JMP 0x006e4e2b
LAB_006e4e29:
006E4E29  33 C0                     XOR EAX,EAX
LAB_006e4e2b:
006E4E2B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E4E2E  85 D2                     TEST EDX,EDX
006E4E30  74 3A                     JZ 0x006e4e6c
006E4E32  3B F1                     CMP ESI,ECX
006E4E34  73 0D                     JNC 0x006e4e43
006E4E36  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006E4E39  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006E4E3C  0F AF C6                  IMUL EAX,ESI
006E4E3F  03 C1                     ADD EAX,ECX
006E4E41  EB 02                     JMP 0x006e4e45
LAB_006e4e43:
006E4E43  33 C0                     XOR EAX,EAX
LAB_006e4e45:
006E4E45  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006E4E48  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E4E4B  50                        PUSH EAX
006E4E4C  E8 1F FF FF FF            CALL 0x006e4d70
006E4E51  85 C0                     TEST EAX,EAX
006E4E53  74 17                     JZ 0x006e4e6c
006E4E55  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E4E5B  68 93 02 00 00            PUSH 0x293
006E4E60  68 8C E7 7E 00            PUSH 0x7ee78c
006E4E65  51                        PUSH ECX
006E4E66  50                        PUSH EAX
006E4E67  E8 D4 0F FC FF            CALL 0x006a5e40
LAB_006e4e6c:
006E4E6C  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E4E6F  46                        INC ESI
006E4E70  3B F1                     CMP ESI,ECX
006E4E72  0F 8C 3B FF FF FF         JL 0x006e4db3
LAB_006e4e78:
006E4E78  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006E4E7B  33 C0                     XOR EAX,EAX
006E4E7D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E4E83  5F                        POP EDI
006E4E84  5E                        POP ESI
006E4E85  5B                        POP EBX
006E4E86  8B E5                     MOV ESP,EBP
006E4E88  5D                        POP EBP
006E4E89  C2 04 00                  RET 0x4
LAB_006e4e8c:
006E4E8C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E4E8F  68 3C EA 7E 00            PUSH 0x7eea3c
006E4E94  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E4E99  56                        PUSH ESI
006E4E9A  6A 00                     PUSH 0x0
006E4E9C  68 97 02 00 00            PUSH 0x297
006E4EA1  68 8C E7 7E 00            PUSH 0x7ee78c
006E4EA6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E4EAB  E8 20 86 FC FF            CALL 0x006ad4d0
006E4EB0  83 C4 18                  ADD ESP,0x18
006E4EB3  85 C0                     TEST EAX,EAX
006E4EB5  74 01                     JZ 0x006e4eb8
006E4EB7  CC                        INT3
LAB_006e4eb8:
006E4EB8  68 98 02 00 00            PUSH 0x298
006E4EBD  68 8C E7 7E 00            PUSH 0x7ee78c
006E4EC2  6A 00                     PUSH 0x0
006E4EC4  56                        PUSH ESI
006E4EC5  E8 76 0F FC FF            CALL 0x006a5e40
006E4ECA  8B C6                     MOV EAX,ESI
006E4ECC  5F                        POP EDI
006E4ECD  5E                        POP ESI
006E4ECE  5B                        POP EBX
006E4ECF  8B E5                     MOV ESP,EBP
006E4ED1  5D                        POP EBP
006E4ED2  C2 04 00                  RET 0x4
