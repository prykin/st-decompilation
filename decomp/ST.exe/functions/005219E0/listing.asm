IntercomPanelTy::InitIntercomPanel:
005219E0  55                        PUSH EBP
005219E1  8B EC                     MOV EBP,ESP
005219E3  83 EC 48                  SUB ESP,0x48
005219E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005219EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005219EE  56                        PUSH ESI
005219EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005219F2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005219F5  6A 00                     PUSH 0x0
005219F7  52                        PUSH EDX
005219F8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005219FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00521A01  E8 EA BD 20 00            CALL 0x0072d7f0
00521A06  8B F0                     MOV ESI,EAX
00521A08  83 C4 08                  ADD ESP,0x8
00521A0B  85 F6                     TEST ESI,ESI
00521A0D  0F 85 DD 00 00 00         JNZ 0x00521af0
00521A13  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00521A16  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00521A1B  89 35 9C 16 80 00         MOV dword ptr [0x0080169c],ESI
00521A21  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
00521A24  51                        PUSH ECX
00521A25  68 9D 01 00 00            PUSH 0x19d
00521A2A  E8 D1 C4 1E 00            CALL 0x0070df00
00521A2F  83 C4 08                  ADD ESP,0x8
00521A32  89 86 80 01 00 00         MOV dword ptr [ESI + 0x180],EAX
00521A38  C7 40 58 00 00 00 00      MOV dword ptr [EAX + 0x58],0x0
00521A3F  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
00521A46  6A 01                     PUSH 0x1
00521A48  6A 00                     PUSH 0x0
00521A4A  6A 00                     PUSH 0x0
00521A4C  68 A0 40 7C 00            PUSH 0x7c40a0
00521A51  E8 26 3D EE FF            CALL 0x0040577c
00521A56  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00521A5C  83 C4 08                  ADD ESP,0x8
00521A5F  50                        PUSH EAX
00521A60  6A 01                     PUSH 0x1
00521A62  E8 79 02 1D 00            CALL 0x006f1ce0
00521A67  8D 50 28                  LEA EDX,[EAX + 0x28]
00521A6A  6A 01                     PUSH 0x1
00521A6C  52                        PUSH EDX
00521A6D  50                        PUSH EAX
00521A6E  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
00521A74  E8 67 35 19 00            CALL 0x006b4fe0
00521A79  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00521A7F  33 C9                     XOR ECX,ECX
00521A81  80 EA 03                  SUB DL,0x3
00521A84  50                        PUSH EAX
00521A85  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
00521A8B  F6 DA                     NEG DL
00521A8D  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00521A91  1B D2                     SBB EDX,EDX
00521A93  51                        PUSH ECX
00521A94  83 E2 32                  AND EDX,0x32
00521A97  6A 14                     PUSH 0x14
00521A99  81 C2 BC 02 00 00         ADD EDX,0x2bc
00521A9F  52                        PUSH EDX
00521AA0  E8 1B 36 19 00            CALL 0x006b50c0
00521AA5  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
00521AA8  89 86 9C 01 00 00         MOV dword ptr [ESI + 0x19c],EAX
00521AAE  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
00521AB4  50                        PUSH EAX
00521AB5  6A 01                     PUSH 0x1
00521AB7  6A 00                     PUSH 0x0
00521AB9  6A 00                     PUSH 0x0
00521ABB  51                        PUSH ECX
00521ABC  E8 68 17 EE FF            CALL 0x00403229
00521AC1  83 C4 14                  ADD ESP,0x14
00521AC4  6A 01                     PUSH 0x1
00521AC6  6A 01                     PUSH 0x1
00521AC8  6A 00                     PUSH 0x0
00521ACA  E8 21 3A 19 00            CALL 0x006b54f0
00521ACF  68 A0 16 80 00            PUSH 0x8016a0
00521AD4  6A 00                     PUSH 0x0
00521AD6  50                        PUSH EAX
00521AD7  89 86 98 01 00 00         MOV dword ptr [ESI + 0x198],EAX
00521ADD  E8 3E 45 19 00            CALL 0x006b6020
00521AE2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00521AE5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00521AEB  5E                        POP ESI
00521AEC  8B E5                     MOV ESP,EBP
00521AEE  5D                        POP EBP
00521AEF  C3                        RET
LAB_00521af0:
00521AF0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00521AF3  68 74 40 7C 00            PUSH 0x7c4074
00521AF8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00521AFD  56                        PUSH ESI
00521AFE  6A 00                     PUSH 0x0
00521B00  6A 34                     PUSH 0x34
00521B02  68 1C 40 7C 00            PUSH 0x7c401c
00521B07  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00521B0C  E8 BF B9 18 00            CALL 0x006ad4d0
00521B11  83 C4 18                  ADD ESP,0x18
00521B14  85 C0                     TEST EAX,EAX
00521B16  74 01                     JZ 0x00521b19
00521B18  CC                        INT3
LAB_00521b19:
00521B19  6A 34                     PUSH 0x34
00521B1B  68 1C 40 7C 00            PUSH 0x7c401c
00521B20  6A 00                     PUSH 0x0
00521B22  56                        PUSH ESI
00521B23  E8 18 43 18 00            CALL 0x006a5e40
00521B28  5E                        POP ESI
00521B29  8B E5                     MOV ESP,EBP
00521B2B  5D                        POP EBP
00521B2C  C3                        RET
