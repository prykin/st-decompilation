FUN_004ad1a0:
004AD1A0  55                        PUSH EBP
004AD1A1  8B EC                     MOV EBP,ESP
004AD1A3  83 79 0C FF               CMP dword ptr [ECX + 0xc],-0x1
004AD1A7  7E 26                     JLE 0x004ad1cf
004AD1A9  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004AD1AD  56                        PUSH ESI
004AD1AE  8B 71 20                  MOV ESI,dword ptr [ECX + 0x20]
004AD1B1  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004AD1B4  6A FF                     PUSH -0x1
004AD1B6  50                        PUSH EAX
004AD1B7  66 81 64 96 0E FF FE      AND word ptr [ESI + EDX*0x4 + 0xe],0xfeff
004AD1BE  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AD1C1  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AD1C4  8D 54 96 0E               LEA EDX,[ESI + EDX*0x4 + 0xe]
004AD1C8  50                        PUSH EAX
004AD1C9  E8 F2 C1 23 00            CALL 0x006e93c0
004AD1CE  5E                        POP ESI
LAB_004ad1cf:
004AD1CF  5D                        POP EBP
004AD1D0  C2 04 00                  RET 0x4
