MMsgTy::DoneMMsg:
005B6F10  55                        PUSH EBP
005B6F11  8B EC                     MOV EBP,ESP
005B6F13  83 EC 48                  SUB ESP,0x48
005B6F16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B6F1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B6F1E  56                        PUSH ESI
005B6F1F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6F22  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6F25  6A 00                     PUSH 0x0
005B6F27  52                        PUSH EDX
005B6F28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B6F2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6F31  E8 BA 68 17 00            CALL 0x0072d7f0
005B6F36  8B F0                     MOV ESI,EAX
005B6F38  83 C4 08                  ADD ESP,0x8
005B6F3B  85 F6                     TEST ESI,ESI
005B6F3D  75 3D                     JNZ 0x005b6f7c
005B6F3F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B6F42  8B CE                     MOV ECX,ESI
005B6F44  E8 45 D6 E4 FF            CALL 0x0040458e
005B6F49  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B6F4E  8D 8E F7 1C 00 00         LEA ECX,[ESI + 0x1cf7]
005B6F54  C7 80 E6 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x2e6],0x0
005B6F5E  E8 4D EB 15 00            CALL 0x00715ab0
005B6F63  8D 8E 88 1D 00 00         LEA ECX,[ESI + 0x1d88]
005B6F69  E8 42 EB 15 00            CALL 0x00715ab0
005B6F6E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B6F71  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6F77  5E                        POP ESI
005B6F78  8B E5                     MOV ESP,EBP
005B6F7A  5D                        POP EBP
005B6F7B  C3                        RET
LAB_005b6f7c:
005B6F7C  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B6F7F  68 1C CC 7C 00            PUSH 0x7ccc1c
005B6F84  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B6F89  56                        PUSH ESI
005B6F8A  6A 00                     PUSH 0x0
005B6F8C  6A 31                     PUSH 0x31
005B6F8E  68 74 CB 7C 00            PUSH 0x7ccb74
005B6F93  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B6F99  E8 32 65 0F 00            CALL 0x006ad4d0
005B6F9E  83 C4 18                  ADD ESP,0x18
005B6FA1  85 C0                     TEST EAX,EAX
005B6FA3  74 01                     JZ 0x005b6fa6
005B6FA5  CC                        INT3
LAB_005b6fa6:
005B6FA6  6A 31                     PUSH 0x31
005B6FA8  68 74 CB 7C 00            PUSH 0x7ccb74
005B6FAD  6A 00                     PUSH 0x0
005B6FAF  56                        PUSH ESI
005B6FB0  E8 8B EE 0E 00            CALL 0x006a5e40
005B6FB5  5E                        POP ESI
005B6FB6  8B E5                     MOV ESP,EBP
005B6FB8  5D                        POP EBP
005B6FB9  C3                        RET
