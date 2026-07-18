FUN_0055a9d0:
0055A9D0  55                        PUSH EBP
0055A9D1  8B EC                     MOV EBP,ESP
0055A9D3  83 EC 68                  SUB ESP,0x68
0055A9D6  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055A9DC  56                        PUSH ESI
0055A9DD  85 C0                     TEST EAX,EAX
0055A9DF  57                        PUSH EDI
0055A9E0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055A9E3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0055A9EA  0F 84 F7 00 00 00         JZ 0x0055aae7
0055A9F0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055A9F3  85 C0                     TEST EAX,EAX
0055A9F5  0F 8C EC 00 00 00         JL 0x0055aae7
0055A9FB  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055AA00  8D 55 9C                  LEA EDX,[EBP + -0x64]
0055AA03  8D 4D 98                  LEA ECX,[EBP + -0x68]
0055AA06  6A 00                     PUSH 0x0
0055AA08  52                        PUSH EDX
0055AA09  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0055AA0C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055AA12  E8 D9 2D 1D 00            CALL 0x0072d7f0
0055AA17  8B F0                     MOV ESI,EAX
0055AA19  83 C4 08                  ADD ESP,0x8
0055AA1C  85 F6                     TEST ESI,ESI
0055AA1E  0F 85 84 00 00 00         JNZ 0x0055aaa8
0055AA24  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055AA27  8B 96 F4 00 00 00         MOV EDX,dword ptr [ESI + 0xf4]
0055AA2D  85 D2                     TEST EDX,EDX
0055AA2F  74 63                     JZ 0x0055aa94
0055AA31  B9 07 00 00 00            MOV ECX,0x7
0055AA36  8D 7D DC                  LEA EDI,[EBP + -0x24]
0055AA39  F3 AB                     STOSD.REP ES:EDI
0055AA3B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055AA3E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055AA41  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0055AA44  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055AA47  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0055AA4A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055AA4D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0055AA50  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0055AA53  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0055AA56  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055AA59  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0055AA5C  8D 4D DC                  LEA ECX,[EBP + -0x24]
0055AA5F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0055AA62  8B 86 08 01 00 00         MOV EAX,dword ptr [ESI + 0x108]
0055AA68  51                        PUSH ECX
0055AA69  52                        PUSH EDX
0055AA6A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0055AA6D  E8 4E 37 15 00            CALL 0x006ae1c0
0055AA72  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0055AA75  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0055AA78  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0055AA7B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0055AA7E  6A FF                     PUSH -0x1
0055AA80  6A FA                     PUSH -0x6
0055AA82  52                        PUSH EDX
0055AA83  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0055AA86  50                        PUSH EAX
0055AA87  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0055AA8A  51                        PUSH ECX
0055AA8B  52                        PUSH EDX
0055AA8C  50                        PUSH EAX
0055AA8D  8B CE                     MOV ECX,ESI
0055AA8F  E8 F8 8D EA FF            CALL 0x0040388c
LAB_0055aa94:
0055AA94  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0055AA97  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055AA9A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055AAA0  5F                        POP EDI
0055AAA1  5E                        POP ESI
0055AAA2  8B E5                     MOV ESP,EBP
0055AAA4  5D                        POP EBP
0055AAA5  C2 18 00                  RET 0x18
LAB_0055aaa8:
0055AAA8  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0055AAAB  68 64 94 7C 00            PUSH 0x7c9464
0055AAB0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0055AAB5  56                        PUSH ESI
0055AAB6  6A 00                     PUSH 0x0
0055AAB8  68 F0 03 00 00            PUSH 0x3f0
0055AABD  68 CC 92 7C 00            PUSH 0x7c92cc
0055AAC2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055AAC8  E8 03 2A 15 00            CALL 0x006ad4d0
0055AACD  83 C4 18                  ADD ESP,0x18
0055AAD0  85 C0                     TEST EAX,EAX
0055AAD2  74 01                     JZ 0x0055aad5
0055AAD4  CC                        INT3
LAB_0055aad5:
0055AAD5  68 F1 03 00 00            PUSH 0x3f1
0055AADA  68 CC 92 7C 00            PUSH 0x7c92cc
0055AADF  6A 00                     PUSH 0x0
0055AAE1  56                        PUSH ESI
0055AAE2  E8 59 B3 14 00            CALL 0x006a5e40
LAB_0055aae7:
0055AAE7  5F                        POP EDI
0055AAE8  83 C8 FF                  OR EAX,0xffffffff
0055AAEB  5E                        POP ESI
0055AAEC  8B E5                     MOV ESP,EBP
0055AAEE  5D                        POP EBP
0055AAEF  C2 18 00                  RET 0x18
