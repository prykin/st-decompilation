FUN_004d96b0:
004D96B0  55                        PUSH EBP
004D96B1  8B EC                     MOV EBP,ESP
004D96B3  51                        PUSH ECX
004D96B4  A1 6C A1 7F 00            MOV EAX,[0x007fa16c]
004D96B9  56                        PUSH ESI
004D96BA  85 C0                     TEST EAX,EAX
004D96BC  8B F1                     MOV ESI,ECX
004D96BE  75 11                     JNZ 0x004d96d1
004D96C0  6A 0A                     PUSH 0xa
004D96C2  6A 04                     PUSH 0x4
004D96C4  6A 0A                     PUSH 0xa
004D96C6  50                        PUSH EAX
004D96C7  E8 C4 4B 1D 00            CALL 0x006ae290
004D96CC  A3 6C A1 7F 00            MOV [0x007fa16c],EAX
LAB_004d96d1:
004D96D1  8D 4D FC                  LEA ECX,[EBP + -0x4]
004D96D4  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004D96D7  51                        PUSH ECX
004D96D8  50                        PUSH EAX
004D96D9  E8 E2 4A 1D 00            CALL 0x006ae1c0
004D96DE  33 C0                     XOR EAX,EAX
004D96E0  5E                        POP ESI
004D96E1  8B E5                     MOV ESP,EBP
004D96E3  5D                        POP EBP
004D96E4  C3                        RET
