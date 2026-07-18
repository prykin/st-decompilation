CGenerate::CteateField:
00695A60  55                        PUSH EBP
00695A61  8B EC                     MOV EBP,ESP
00695A63  83 EC 4C                  SUB ESP,0x4c
00695A66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00695A6B  56                        PUSH ESI
00695A6C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00695A6F  57                        PUSH EDI
00695A70  8D 55 B8                  LEA EDX,[EBP + -0x48]
00695A73  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00695A76  6A 00                     PUSH 0x0
00695A78  52                        PUSH EDX
00695A79  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00695A80  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00695A83  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00695A89  E8 62 7D 09 00            CALL 0x0072d7f0
00695A8E  8B F0                     MOV ESI,EAX
00695A90  83 C4 08                  ADD ESP,0x8
00695A93  85 F6                     TEST ESI,ESI
00695A95  0F 85 C0 00 00 00         JNZ 0x00695b5b
00695A9B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00695A9E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00695AA1  8B CF                     MOV ECX,EDI
00695AA3  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
00695AA7  8B C1                     MOV EAX,ECX
00695AA9  51                        PUSH ECX
00695AAA  99                        CDQ
00695AAB  F7 FF                     IDIV EDI
00695AAD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00695AB0  89 8E 2F 58 00 00         MOV dword ptr [ESI + 0x582f],ECX
00695AB6  89 BE 33 58 00 00         MOV dword ptr [ESI + 0x5833],EDI
00695ABC  C7 86 3F 58 00 00 00 00 00 00  MOV dword ptr [ESI + 0x583f],0x0
00695AC6  89 96 43 58 00 00         MOV dword ptr [ESI + 0x5843],EDX
00695ACC  89 86 37 58 00 00         MOV dword ptr [ESI + 0x5837],EAX
00695AD2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00695AD5  89 86 3B 58 00 00         MOV dword ptr [ESI + 0x583b],EAX
00695ADB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00695ADE  89 86 47 58 00 00         MOV dword ptr [ESI + 0x5847],EAX
00695AE4  E8 87 51 01 00            CALL 0x006aac70
00695AE9  89 86 4B 58 00 00         MOV dword ptr [ESI + 0x584b],EAX
00695AEF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00695AF2  8B 8E 2F 58 00 00         MOV ECX,dword ptr [ESI + 0x582f]
00695AF8  F7 D8                     NEG EAX
00695AFA  1B C0                     SBB EAX,EAX
00695AFC  83 E0 07                  AND EAX,0x7
00695AFF  40                        INC EAX
00695B00  0F AF C8                  IMUL ECX,EAX
00695B03  D1 E1                     SHL ECX,0x1
00695B05  51                        PUSH ECX
00695B06  E8 65 51 01 00            CALL 0x006aac70
00695B0B  6A 0A                     PUSH 0xa
00695B0D  6A 1D                     PUSH 0x1d
00695B0F  6A 0A                     PUSH 0xa
00695B11  6A 00                     PUSH 0x0
00695B13  89 86 4F 58 00 00         MOV dword ptr [ESI + 0x584f],EAX
00695B19  E8 72 87 01 00            CALL 0x006ae290
00695B1E  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00695B21  89 86 53 58 00 00         MOV dword ptr [ESI + 0x5853],EAX
00695B27  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00695B2D  8B 86 4B 58 00 00         MOV EAX,dword ptr [ESI + 0x584b]
00695B33  85 C0                     TEST EAX,EAX
00695B35  74 19                     JZ 0x00695b50
00695B37  8B 86 4F 58 00 00         MOV EAX,dword ptr [ESI + 0x584f]
00695B3D  85 C0                     TEST EAX,EAX
00695B3F  74 0F                     JZ 0x00695b50
00695B41  8B 86 53 58 00 00         MOV EAX,dword ptr [ESI + 0x5853]
00695B47  85 C0                     TEST EAX,EAX
00695B49  B8 01 00 00 00            MOV EAX,0x1
00695B4E  75 4E                     JNZ 0x00695b9e
LAB_00695b50:
00695B50  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00695B53  5F                        POP EDI
00695B54  5E                        POP ESI
00695B55  8B E5                     MOV ESP,EBP
00695B57  5D                        POP EBP
00695B58  C2 18 00                  RET 0x18
LAB_00695b5b:
00695B5B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00695B5E  68 20 86 7D 00            PUSH 0x7d8620
00695B63  68 CC 4C 7A 00            PUSH 0x7a4ccc
00695B68  56                        PUSH ESI
00695B69  6A 00                     PUSH 0x0
00695B6B  68 30 03 00 00            PUSH 0x330
00695B70  68 FC 85 7D 00            PUSH 0x7d85fc
00695B75  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00695B7A  E8 51 79 01 00            CALL 0x006ad4d0
00695B7F  83 C4 18                  ADD ESP,0x18
00695B82  85 C0                     TEST EAX,EAX
00695B84  74 01                     JZ 0x00695b87
00695B86  CC                        INT3
LAB_00695b87:
00695B87  68 32 03 00 00            PUSH 0x332
00695B8C  68 FC 85 7D 00            PUSH 0x7d85fc
00695B91  6A 00                     PUSH 0x0
00695B93  56                        PUSH ESI
00695B94  E8 A7 02 01 00            CALL 0x006a5e40
00695B99  B8 FF FF 00 00            MOV EAX,0xffff
LAB_00695b9e:
00695B9E  5F                        POP EDI
00695B9F  5E                        POP ESI
00695BA0  8B E5                     MOV ESP,EBP
00695BA2  5D                        POP EBP
00695BA3  C2 18 00                  RET 0x18
