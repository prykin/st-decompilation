FUN_00648ab0:
00648AB0  55                        PUSH EBP
00648AB1  8B EC                     MOV EBP,ESP
00648AB3  83 EC 4C                  SUB ESP,0x4c
00648AB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00648ABB  53                        PUSH EBX
00648ABC  56                        PUSH ESI
00648ABD  33 DB                     XOR EBX,EBX
00648ABF  57                        PUSH EDI
00648AC0  8D 55 B8                  LEA EDX,[EBP + -0x48]
00648AC3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00648AC6  53                        PUSH EBX
00648AC7  52                        PUSH EDX
00648AC8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00648ACB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00648ACE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00648AD1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648AD7  E8 14 4D 0E 00            CALL 0x0072d7f0
00648ADC  8B F0                     MOV ESI,EAX
00648ADE  83 C4 08                  ADD ESP,0x8
00648AE1  3B F3                     CMP ESI,EBX
00648AE3  75 6E                     JNZ 0x00648b53
00648AE5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00648AE8  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00648AEB  3B F3                     CMP ESI,EBX
00648AED  74 04                     JZ 0x00648af3
00648AEF  3B FB                     CMP EDI,EBX
00648AF1  75 14                     JNZ 0x00648b07
LAB_00648af3:
00648AF3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00648AF8  6A 29                     PUSH 0x29
00648AFA  68 80 28 7D 00            PUSH 0x7d2880
00648AFF  50                        PUSH EAX
00648B00  6A CC                     PUSH -0x34
00648B02  E8 39 D3 05 00            CALL 0x006a5e40
LAB_00648b07:
00648B07  53                        PUSH EBX
00648B08  6A 01                     PUSH 0x1
00648B0A  57                        PUSH EDI
00648B0B  56                        PUSH ESI
00648B0C  E8 7F A2 0A 00            CALL 0x006f2d90
00648B11  83 C4 10                  ADD ESP,0x10
00648B14  3B C3                     CMP EAX,EBX
00648B16  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00648B19  74 25                     JZ 0x00648b40
00648B1B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00648B1E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00648B21  3B CB                     CMP ECX,EBX
00648B23  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00648B26  75 06                     JNZ 0x00648b2e
00648B28  85 DB                     TEST EBX,EBX
00648B2A  74 14                     JZ 0x00648b40
00648B2C  EB 04                     JMP 0x00648b32
LAB_00648b2e:
00648B2E  85 DB                     TEST EBX,EBX
00648B30  74 0E                     JZ 0x00648b40
LAB_00648b32:
00648B32  6A 01                     PUSH 0x1
00648B34  57                        PUSH EDI
00648B35  56                        PUSH ESI
00648B36  E8 75 A4 0A 00            CALL 0x006f2fb0
00648B3B  83 C4 0C                  ADD ESP,0xc
00648B3E  89 03                     MOV dword ptr [EBX],EAX
LAB_00648b40:
00648B40  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00648B43  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648B46  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648B4C  5F                        POP EDI
00648B4D  5E                        POP ESI
00648B4E  5B                        POP EBX
00648B4F  8B E5                     MOV ESP,EBP
00648B51  5D                        POP EBP
00648B52  C3                        RET
LAB_00648b53:
00648B53  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00648B56  68 6C 28 7D 00            PUSH 0x7d286c
00648B5B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00648B60  56                        PUSH ESI
00648B61  53                        PUSH EBX
00648B62  6A 37                     PUSH 0x37
00648B64  68 80 28 7D 00            PUSH 0x7d2880
00648B69  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00648B6F  E8 5C 49 06 00            CALL 0x006ad4d0
00648B74  83 C4 18                  ADD ESP,0x18
00648B77  85 C0                     TEST EAX,EAX
00648B79  74 01                     JZ 0x00648b7c
00648B7B  CC                        INT3
LAB_00648b7c:
00648B7C  8D 45 F8                  LEA EAX,[EBP + -0x8]
00648B7F  50                        PUSH EAX
00648B80  E8 80 A2 DB FF            CALL 0x00402e05
00648B85  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00648B88  83 C4 04                  ADD ESP,0x4
00648B8B  3B C3                     CMP EAX,EBX
00648B8D  74 0E                     JZ 0x00648b9d
00648B8F  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
00648B92  74 09                     JZ 0x00648b9d
00648B94  8D 4D FC                  LEA ECX,[EBP + -0x4]
00648B97  51                        PUSH ECX
00648B98  E8 C3 24 06 00            CALL 0x006ab060
LAB_00648b9d:
00648B9D  6A 3A                     PUSH 0x3a
00648B9F  68 80 28 7D 00            PUSH 0x7d2880
00648BA4  53                        PUSH EBX
00648BA5  56                        PUSH ESI
00648BA6  E8 95 D2 05 00            CALL 0x006a5e40
00648BAB  5F                        POP EDI
00648BAC  5E                        POP ESI
00648BAD  33 C0                     XOR EAX,EAX
00648BAF  5B                        POP EBX
00648BB0  8B E5                     MOV ESP,EBP
00648BB2  5D                        POP EBP
00648BB3  C3                        RET
