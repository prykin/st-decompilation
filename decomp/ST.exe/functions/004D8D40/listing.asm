FUN_004d8d40:
004D8D40  55                        PUSH EBP
004D8D41  8B EC                     MOV EBP,ESP
004D8D43  51                        PUSH ECX
004D8D44  56                        PUSH ESI
004D8D45  8B F1                     MOV ESI,ECX
004D8D47  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004D8D4E  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004D8D54  85 C0                     TEST EAX,EAX
004D8D56  74 2D                     JZ 0x004d8d85
004D8D58  8D 4D FC                  LEA ECX,[EBP + -0x4]
004D8D5B  51                        PUSH ECX
004D8D5C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D8D62  50                        PUSH EAX
004D8D63  E8 68 D5 20 00            CALL 0x006e62d0
004D8D68  85 C0                     TEST EAX,EAX
004D8D6A  75 0F                     JNZ 0x004d8d7b
004D8D6C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D8D6F  E8 3E CB F2 FF            CALL 0x004058b2
004D8D74  33 C0                     XOR EAX,EAX
004D8D76  5E                        POP ESI
004D8D77  8B E5                     MOV ESP,EBP
004D8D79  5D                        POP EBP
004D8D7A  C3                        RET
LAB_004d8d7b:
004D8D7B  C7 86 F0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4f0],0x0
LAB_004d8d85:
004D8D85  33 C0                     XOR EAX,EAX
004D8D87  5E                        POP ESI
004D8D88  8B E5                     MOV ESP,EBP
004D8D8A  5D                        POP EBP
004D8D8B  C3                        RET
