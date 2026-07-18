FUN_0075aab0:
0075AAB0  55                        PUSH EBP
0075AAB1  8B EC                     MOV EBP,ESP
0075AAB3  83 EC 34                  SUB ESP,0x34
0075AAB6  53                        PUSH EBX
0075AAB7  56                        PUSH ESI
0075AAB8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075AABB  57                        PUSH EDI
0075AABC  33 DB                     XOR EBX,EBX
0075AABE  8B 86 36 01 00 00         MOV EAX,dword ptr [ESI + 0x136]
0075AAC4  8B BE 9A 01 00 00         MOV EDI,dword ptr [ESI + 0x19a]
0075AACA  3B C3                     CMP EAX,EBX
0075AACC  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0075AACF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075AAD2  7E 59                     JLE 0x0075ab2d
0075AAD4  8D 45 CC                  LEA EAX,[EBP + -0x34]
0075AAD7  8D 8E 3A 01 00 00         LEA ECX,[ESI + 0x13a]
0075AADD  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075AAE0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0075aae3:
0075AAE3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075AAE6  8B 9E 8C 00 00 00         MOV EBX,dword ptr [ESI + 0x8c]
0075AAEC  6A 01                     PUSH 0x1
0075AAEE  8B 02                     MOV EAX,dword ptr [EDX]
0075AAF0  8B 16                     MOV EDX,dword ptr [ESI]
0075AAF2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0075AAF5  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0075AAF8  0F AF D9                  IMUL EBX,ECX
0075AAFB  51                        PUSH ECX
0075AAFC  8B 4C 87 48               MOV ECX,dword ptr [EDI + EAX*0x4 + 0x48]
0075AB00  53                        PUSH EBX
0075AB01  51                        PUSH ECX
0075AB02  56                        PUSH ESI
0075AB03  FF 52 20                  CALL dword ptr [EDX + 0x20]
0075AB06  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0075AB09  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0075AB0C  83 C3 04                  ADD EBX,0x4
0075AB0F  89 01                     MOV dword ptr [ECX],EAX
0075AB11  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075AB14  83 C1 04                  ADD ECX,0x4
0075AB17  40                        INC EAX
0075AB18  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0075AB1B  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075AB21  3B C1                     CMP EAX,ECX
0075AB23  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075AB26  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075AB29  7C B8                     JL 0x0075aae3
0075AB2B  33 DB                     XOR EBX,EBX
LAB_0075ab2d:
0075AB2D  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0075AB30  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075AB33  3B C1                     CMP EAX,ECX
0075AB35  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075AB38  0F 8D 11 01 00 00         JGE 0x0075ac4f
LAB_0075ab3e:
0075AB3E  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0075AB41  8B 96 4A 01 00 00         MOV EDX,dword ptr [ESI + 0x14a]
0075AB47  3B CA                     CMP ECX,EDX
0075AB49  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0075AB4C  0F 83 EB 00 00 00         JNC 0x0075ac3d
LAB_0075ab52:
0075AB52  8B 86 36 01 00 00         MOV EAX,dword ptr [ESI + 0x136]
0075AB58  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075AB5B  3B C3                     CMP EAX,EBX
0075AB5D  0F 8E B0 00 00 00         JLE 0x0075ac13
0075AB63  8D 55 CC                  LEA EDX,[EBP + -0x34]
0075AB66  8D 86 3A 01 00 00         LEA EAX,[ESI + 0x13a]
0075AB6C  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0075AB6F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0075ab72:
0075AB72  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075AB75  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0075AB7C  8B 39                     MOV EDI,dword ptr [ECX]
0075AB7E  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
0075AB81  8B 57 38                  MOV EDX,dword ptr [EDI + 0x38]
0075AB84  8B C1                     MOV EAX,ECX
0075AB86  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
0075AB8A  85 D2                     TEST EDX,EDX
0075AB8C  7E 56                     JLE 0x0075abe4
0075AB8E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075AB91  C1 E0 08                  SHL EAX,0x8
0075AB94  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0075AB97  8B 02                     MOV EAX,dword ptr [EDX]
0075AB99  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075AB9C  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0075AB9F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0075aba2:
0075ABA2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075ABA5  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0075ABA8  03 02                     ADD EAX,dword ptr [EDX]
0075ABAA  33 D2                     XOR EDX,EDX
0075ABAC  85 C9                     TEST ECX,ECX
0075ABAE  7E 1D                     JLE 0x0075abcd
0075ABB0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0075ABB3  8D 74 99 20               LEA ESI,[ECX + EBX*0x4 + 0x20]
LAB_0075abb7:
0075ABB7  89 06                     MOV dword ptr [ESI],EAX
0075ABB9  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
0075ABBC  43                        INC EBX
0075ABBD  83 C6 04                  ADD ESI,0x4
0075ABC0  05 00 01 00 00            ADD EAX,0x100
0075ABC5  42                        INC EDX
0075ABC6  3B D1                     CMP EDX,ECX
0075ABC8  7C ED                     JL 0x0075abb7
0075ABCA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0075abcd:
0075ABCD  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075ABD0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0075ABD3  83 C2 04                  ADD EDX,0x4
0075ABD6  40                        INC EAX
0075ABD7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075ABDA  8B 57 38                  MOV EDX,dword ptr [EDI + 0x38]
0075ABDD  3B C2                     CMP EAX,EDX
0075ABDF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0075ABE2  7C BE                     JL 0x0075aba2
LAB_0075abe4:
0075ABE4  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0075ABE7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075ABEA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075ABED  B9 04 00 00 00            MOV ECX,0x4
0075ABF2  03 F9                     ADD EDI,ECX
0075ABF4  03 D1                     ADD EDX,ECX
0075ABF6  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075ABFC  40                        INC EAX
0075ABFD  3B C1                     CMP EAX,ECX
0075ABFF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075AC02  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0075AC05  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0075AC08  0F 8C 64 FF FF FF         JL 0x0075ab72
0075AC0E  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0075AC11  33 DB                     XOR EBX,EBX
LAB_0075ac13:
0075AC13  8B 96 AA 01 00 00         MOV EDX,dword ptr [ESI + 0x1aa]
0075AC19  8D 47 20                  LEA EAX,[EDI + 0x20]
0075AC1C  50                        PUSH EAX
0075AC1D  56                        PUSH ESI
0075AC1E  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075AC21  85 C0                     TEST EAX,EAX
0075AC23  74 57                     JZ 0x0075ac7c
0075AC25  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075AC28  8B 8E 4A 01 00 00         MOV ECX,dword ptr [ESI + 0x14a]
0075AC2E  40                        INC EAX
0075AC2F  3B C1                     CMP EAX,ECX
0075AC31  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075AC34  0F 82 18 FF FF FF         JC 0x0075ab52
0075AC3A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0075ac3d:
0075AC3D  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075AC40  40                        INC EAX
0075AC41  3B C1                     CMP EAX,ECX
0075AC43  89 5F 14                  MOV dword ptr [EDI + 0x14],EBX
0075AC46  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075AC49  0F 8C EF FE FF FF         JL 0x0075ab3e
LAB_0075ac4f:
0075AC4F  8B 96 8C 00 00 00         MOV EDX,dword ptr [ESI + 0x8c]
0075AC55  8B 8E 2E 01 00 00         MOV ECX,dword ptr [ESI + 0x12e]
0075AC5B  42                        INC EDX
0075AC5C  8B C2                     MOV EAX,EDX
0075AC5E  89 96 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EDX
0075AC64  3B C1                     CMP EAX,ECX
0075AC66  73 2B                     JNC 0x0075ac93
0075AC68  56                        PUSH ESI
0075AC69  E8 32 FB FF FF            CALL 0x0075a7a0
0075AC6E  5F                        POP EDI
0075AC6F  5E                        POP ESI
0075AC70  B8 03 00 00 00            MOV EAX,0x3
0075AC75  5B                        POP EBX
0075AC76  8B E5                     MOV ESP,EBP
0075AC78  5D                        POP EBP
0075AC79  C2 04 00                  RET 0x4
LAB_0075ac7c:
0075AC7C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075AC7F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075AC82  89 4F 18                  MOV dword ptr [EDI + 0x18],ECX
0075AC85  89 57 14                  MOV dword ptr [EDI + 0x14],EDX
0075AC88  5F                        POP EDI
0075AC89  5E                        POP ESI
0075AC8A  33 C0                     XOR EAX,EAX
0075AC8C  5B                        POP EBX
0075AC8D  8B E5                     MOV ESP,EBP
0075AC8F  5D                        POP EBP
0075AC90  C2 04 00                  RET 0x4
LAB_0075ac93:
0075AC93  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
0075AC99  56                        PUSH ESI
0075AC9A  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0075AC9D  5F                        POP EDI
0075AC9E  5E                        POP ESI
0075AC9F  B8 04 00 00 00            MOV EAX,0x4
0075ACA4  5B                        POP EBX
0075ACA5  8B E5                     MOV ESP,EBP
0075ACA7  5D                        POP EBP
0075ACA8  C2 04 00                  RET 0x4
