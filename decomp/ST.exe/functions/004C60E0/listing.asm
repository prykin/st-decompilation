FUN_004c60e0:
004C60E0  55                        PUSH EBP
004C60E1  8B EC                     MOV EBP,ESP
004C60E3  83 EC 48                  SUB ESP,0x48
004C60E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004C60EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004C60EE  56                        PUSH ESI
004C60EF  8D 4D BC                  LEA ECX,[EBP + -0x44]
004C60F2  6A 00                     PUSH 0x0
004C60F4  51                        PUSH ECX
004C60F5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004C60F8  E8 F3 76 26 00            CALL 0x0072d7f0
004C60FD  8B F0                     MOV ESI,EAX
004C60FF  83 C4 08                  ADD ESP,0x8
004C6102  85 F6                     TEST ESI,ESI
004C6104  75 1A                     JNZ 0x004c6120
004C6106  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004C6109  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C610C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004C6111  89 15 AC B2 7F 00         MOV dword ptr [0x007fb2ac],EDX
004C6117  33 C0                     XOR EAX,EAX
004C6119  5E                        POP ESI
004C611A  8B E5                     MOV ESP,EBP
004C611C  5D                        POP EBP
004C611D  C2 04 00                  RET 0x4
LAB_004c6120:
004C6120  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004C6123  68 1C D3 7A 00            PUSH 0x7ad31c
004C6128  68 CC 4C 7A 00            PUSH 0x7a4ccc
004C612D  56                        PUSH ESI
004C612E  6A 00                     PUSH 0x0
004C6130  6A 2A                     PUSH 0x2a
004C6132  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6137  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004C613D  E8 8E 73 1E 00            CALL 0x006ad4d0
004C6142  83 C4 18                  ADD ESP,0x18
004C6145  85 C0                     TEST EAX,EAX
004C6147  74 01                     JZ 0x004c614a
004C6149  CC                        INT3
LAB_004c614a:
004C614A  6A 2B                     PUSH 0x2b
004C614C  68 F4 D2 7A 00            PUSH 0x7ad2f4
004C6151  6A 00                     PUSH 0x0
004C6153  56                        PUSH ESI
004C6154  E8 E7 FC 1D 00            CALL 0x006a5e40
004C6159  8B C6                     MOV EAX,ESI
004C615B  5E                        POP ESI
004C615C  8B E5                     MOV ESP,EBP
004C615E  5D                        POP EBP
004C615F  C2 04 00                  RET 0x4
