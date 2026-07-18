FUN_006e5f00:
006E5F00  55                        PUSH EBP
006E5F01  8B EC                     MOV EBP,ESP
006E5F03  83 EC 48                  SUB ESP,0x48
006E5F06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E5F0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E5F0E  56                        PUSH ESI
006E5F0F  8D 55 BC                  LEA EDX,[EBP + -0x44]
006E5F12  8D 4D B8                  LEA ECX,[EBP + -0x48]
006E5F15  6A 00                     PUSH 0x0
006E5F17  52                        PUSH EDX
006E5F18  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006E5F1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5F21  E8 CA 78 04 00            CALL 0x0072d7f0
006E5F26  8B F0                     MOV ESI,EAX
006E5F28  83 C4 08                  ADD ESP,0x8
006E5F2B  85 F6                     TEST ESI,ESI
006E5F2D  75 2A                     JNZ 0x006e5f59
006E5F2F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5F32  83 78 10 0A               CMP dword ptr [EAX + 0x10],0xa
006E5F36  75 10                     JNZ 0x006e5f48
006E5F38  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
006E5F3B  85 C0                     TEST EAX,EAX
006E5F3D  74 09                     JZ 0x006e5f48
006E5F3F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006E5F42  50                        PUSH EAX
006E5F43  E8 68 F7 FF FF            CALL 0x006e56b0
LAB_006e5f48:
006E5F48  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006E5F4B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5F50  33 C0                     XOR EAX,EAX
006E5F52  5E                        POP ESI
006E5F53  8B E5                     MOV ESP,EBP
006E5F55  5D                        POP EBP
006E5F56  C2 04 00                  RET 0x4
LAB_006e5f59:
006E5F59  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006E5F5C  68 D4 EB 7E 00            PUSH 0x7eebd4
006E5F61  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5F66  56                        PUSH ESI
006E5F67  6A 00                     PUSH 0x0
006E5F69  68 A5 04 00 00            PUSH 0x4a5
006E5F6E  68 8C E7 7E 00            PUSH 0x7ee78c
006E5F73  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5F79  E8 52 75 FC FF            CALL 0x006ad4d0
006E5F7E  83 C4 18                  ADD ESP,0x18
006E5F81  85 C0                     TEST EAX,EAX
006E5F83  74 01                     JZ 0x006e5f86
006E5F85  CC                        INT3
LAB_006e5f86:
006E5F86  68 A6 04 00 00            PUSH 0x4a6
006E5F8B  68 8C E7 7E 00            PUSH 0x7ee78c
006E5F90  6A 00                     PUSH 0x0
006E5F92  56                        PUSH ESI
006E5F93  E8 A8 FE FB FF            CALL 0x006a5e40
006E5F98  8B C6                     MOV EAX,ESI
006E5F9A  5E                        POP ESI
006E5F9B  8B E5                     MOV ESP,EBP
006E5F9D  5D                        POP EBP
006E5F9E  C2 04 00                  RET 0x4
