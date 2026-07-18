FUN_004c5eb0:
004C5EB0  55                        PUSH EBP
004C5EB1  8B EC                     MOV EBP,ESP
004C5EB3  51                        PUSH ECX
004C5EB4  56                        PUSH ESI
004C5EB5  8B F1                     MOV ESI,ECX
004C5EB7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C5EBD  8B 96 D4 04 00 00         MOV EDX,dword ptr [ESI + 0x4d4]
004C5EC3  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004C5EC9  3B C2                     CMP EAX,EDX
004C5ECB  72 37                     JC 0x004c5f04
004C5ECD  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C5ED3  8D 55 FC                  LEA EDX,[EBP + -0x4]
004C5ED6  52                        PUSH EDX
004C5ED7  50                        PUSH EAX
004C5ED8  E8 F3 03 22 00            CALL 0x006e62d0
004C5EDD  85 C0                     TEST EAX,EAX
004C5EDF  75 0F                     JNZ 0x004c5ef0
004C5EE1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C5EE4  8B 91 0F 02 00 00         MOV EDX,dword ptr [ECX + 0x20f]
004C5EEA  89 96 CD 02 00 00         MOV dword ptr [ESI + 0x2cd],EDX
LAB_004c5ef0:
004C5EF0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004C5EF5  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004C5EFB  83 C1 7D                  ADD ECX,0x7d
004C5EFE  89 8E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],ECX
LAB_004c5f04:
004C5F04  33 C0                     XOR EAX,EAX
004C5F06  5E                        POP ESI
004C5F07  8B E5                     MOV ESP,EBP
004C5F09  5D                        POP EBP
004C5F0A  C3                        RET
