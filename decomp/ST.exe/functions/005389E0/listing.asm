FUN_005389e0:
005389E0  55                        PUSH EBP
005389E1  8B EC                     MOV EBP,ESP
005389E3  83 EC 54                  SUB ESP,0x54
005389E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005389E9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005389EC  85 D2                     TEST EDX,EDX
005389EE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
005389F1  56                        PUSH ESI
005389F2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005389F5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005389FC  74 11                     JZ 0x00538a0f
005389FE  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538A01  85 D2                     TEST EDX,EDX
00538A03  8B 10                     MOV EDX,dword ptr [EAX]
00538A05  75 0A                     JNZ 0x00538a11
00538A07  8B 35 30 67 80 00         MOV ESI,dword ptr [0x00806730]
00538A0D  EB 05                     JMP 0x00538a14
LAB_00538a0f:
00538A0F  8B 10                     MOV EDX,dword ptr [EAX]
LAB_00538a11:
00538A11  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
LAB_00538a14:
00538A14  2B D6                     SUB EDX,ESI
00538A16  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00538A19  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00538A1C  85 D2                     TEST EDX,EDX
00538A1E  74 21                     JZ 0x00538a41
00538A20  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00538A23  85 D2                     TEST EDX,EDX
00538A25  75 0D                     JNZ 0x00538a34
00538A27  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538A2A  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00538A30  2B C1                     SUB EAX,ECX
00538A32  EB 15                     JMP 0x00538a49
LAB_00538a34:
00538A34  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00538A37  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
00538A3A  2B D0                     SUB EDX,EAX
00538A3C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00538A3F  EB 0B                     JMP 0x00538a4c
LAB_00538a41:
00538A41  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00538A44  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
00538A47  2B C2                     SUB EAX,EDX
LAB_00538a49:
00538A49  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00538a4c:
00538A4C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00538A4F  85 C0                     TEST EAX,EAX
00538A51  0F 84 E2 00 00 00         JZ 0x00538b39
00538A57  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00538A5D  8D 45 B0                  LEA EAX,[EBP + -0x50]
00538A60  8D 55 AC                  LEA EDX,[EBP + -0x54]
00538A63  6A 00                     PUSH 0x0
00538A65  50                        PUSH EAX
00538A66  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
00538A69  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538A6F  E8 7C 4D 1F 00            CALL 0x0072d7f0
00538A74  8B F0                     MOV ESI,EAX
00538A76  83 C4 08                  ADD ESP,0x8
00538A79  85 F6                     TEST ESI,ESI
00538A7B  75 7E                     JNZ 0x00538afb
00538A7D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00538A80  6A 01                     PUSH 0x1
00538A82  50                        PUSH EAX
00538A83  51                        PUSH ECX
00538A84  FF 55 14                  CALL dword ptr [EBP + 0x14]
00538A87  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00538A8A  50                        PUSH EAX
00538A8B  6A 01                     PUSH 0x1
00538A8D  52                        PUSH EDX
00538A8E  E8 6D A1 1B 00            CALL 0x006f2c00
00538A93  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00538A96  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00538A9C  83 C4 10                  ADD ESP,0x10
00538A9F  50                        PUSH EAX
00538AA0  56                        PUSH ESI
00538AA1  E8 3A 92 1B 00            CALL 0x006f1ce0
00538AA6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00538AA9  50                        PUSH EAX
00538AAA  56                        PUSH ESI
00538AAB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00538AAE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00538AB1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00538AB4  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
00538AB7  50                        PUSH EAX
00538AB8  51                        PUSH ECX
00538AB9  52                        PUSH EDX
00538ABA  E8 6A A7 EC FF            CALL 0x00403229
00538ABF  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00538AC5  83 C4 14                  ADD ESP,0x14
00538AC8  8D 45 FC                  LEA EAX,[EBP + -0x4]
00538ACB  50                        PUSH EAX
00538ACC  E8 0F 96 1B 00            CALL 0x006f20e0
00538AD1  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00538AD4  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00538AD7  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00538ADA  51                        PUSH ECX
00538ADB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00538AE1  52                        PUSH EDX
00538AE2  6A FF                     PUSH -0x1
00538AE4  50                        PUSH EAX
00538AE5  51                        PUSH ECX
00538AE6  E8 55 AB 17 00            CALL 0x006b3640
00538AEB  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00538AEE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00538AF4  5E                        POP ESI
00538AF5  8B E5                     MOV ESP,EBP
00538AF7  5D                        POP EBP
00538AF8  C2 18 00                  RET 0x18
LAB_00538afb:
00538AFB  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00538AFE  68 2C 74 7C 00            PUSH 0x7c742c
00538B03  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538B08  56                        PUSH ESI
00538B09  6A 00                     PUSH 0x0
00538B0B  68 B2 00 00 00            PUSH 0xb2
00538B10  68 90 73 7C 00            PUSH 0x7c7390
00538B15  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00538B1A  E8 B1 49 17 00            CALL 0x006ad4d0
00538B1F  83 C4 18                  ADD ESP,0x18
00538B22  85 C0                     TEST EAX,EAX
00538B24  74 01                     JZ 0x00538b27
00538B26  CC                        INT3
LAB_00538b27:
00538B27  68 B2 00 00 00            PUSH 0xb2
00538B2C  68 90 73 7C 00            PUSH 0x7c7390
00538B31  6A 00                     PUSH 0x0
00538B33  56                        PUSH ESI
00538B34  E8 07 D3 16 00            CALL 0x006a5e40
LAB_00538b39:
00538B39  5E                        POP ESI
00538B3A  8B E5                     MOV ESP,EBP
00538B3C  5D                        POP EBP
00538B3D  C2 18 00                  RET 0x18
