BldLabPanelTy::Update:
004EFD10  55                        PUSH EBP
004EFD11  8B EC                     MOV EBP,ESP
004EFD13  83 EC 4C                  SUB ESP,0x4c
004EFD16  8B 81 7A 02 00 00         MOV EAX,dword ptr [ECX + 0x27a]
004EFD1C  56                        PUSH ESI
004EFD1D  85 C0                     TEST EAX,EAX
004EFD1F  57                        PUSH EDI
004EFD20  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004EFD23  0F 84 A3 00 00 00         JZ 0x004efdcc
004EFD29  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004EFD2C  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004EFD32  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EFD35  8D 45 B8                  LEA EAX,[EBP + -0x48]
004EFD38  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004EFD3B  6A 00                     PUSH 0x0
004EFD3D  50                        PUSH EAX
004EFD3E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
004EFD41  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EFD47  E8 A4 DA 23 00            CALL 0x0072d7f0
004EFD4C  8B F0                     MOV ESI,EAX
004EFD4E  83 C4 08                  ADD ESP,0x8
004EFD51  85 F6                     TEST ESI,ESI
004EFD53  75 3E                     JNZ 0x004efd93
004EFD55  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EFD58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EFD5E  8D BE 7A 02 00 00         LEA EDI,[ESI + 0x27a]
004EFD64  57                        PUSH EDI
004EFD65  6A 0C                     PUSH 0xc
004EFD67  E8 50 38 F1 FF            CALL 0x004035bc
004EFD6C  8B 17                     MOV EDX,dword ptr [EDI]
004EFD6E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004EFD71  51                        PUSH ECX
004EFD72  8B CE                     MOV ECX,ESI
004EFD74  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
004EFD77  50                        PUSH EAX
004EFD78  E8 96 2C F1 FF            CALL 0x00402a13
004EFD7D  8B CE                     MOV ECX,ESI
004EFD7F  E8 67 3B F1 FF            CALL 0x004038eb
004EFD84  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004EFD87  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EFD8D  5F                        POP EDI
004EFD8E  5E                        POP ESI
004EFD8F  8B E5                     MOV ESP,EBP
004EFD91  5D                        POP EBP
004EFD92  C3                        RET
LAB_004efd93:
004EFD93  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004EFD96  68 28 19 7C 00            PUSH 0x7c1928
004EFD9B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EFDA0  56                        PUSH ESI
004EFDA1  6A 00                     PUSH 0x0
004EFDA3  6A 30                     PUSH 0x30
004EFDA5  68 B4 18 7C 00            PUSH 0x7c18b4
004EFDAA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EFDB0  E8 1B D7 1B 00            CALL 0x006ad4d0
004EFDB5  83 C4 18                  ADD ESP,0x18
004EFDB8  85 C0                     TEST EAX,EAX
004EFDBA  74 01                     JZ 0x004efdbd
004EFDBC  CC                        INT3
LAB_004efdbd:
004EFDBD  6A 30                     PUSH 0x30
004EFDBF  68 B4 18 7C 00            PUSH 0x7c18b4
004EFDC4  6A 00                     PUSH 0x0
004EFDC6  56                        PUSH ESI
004EFDC7  E8 74 60 1B 00            CALL 0x006a5e40
LAB_004efdcc:
004EFDCC  5F                        POP EDI
004EFDCD  5E                        POP ESI
004EFDCE  8B E5                     MOV ESP,EBP
004EFDD0  5D                        POP EBP
004EFDD1  C3                        RET
