FUN_004c2d40:
004C2D40  55                        PUSH EBP
004C2D41  8B EC                     MOV EBP,ESP
004C2D43  51                        PUSH ECX
004C2D44  56                        PUSH ESI
004C2D45  8B F1                     MOV ESI,ECX
004C2D47  8B 86 08 04 00 00         MOV EAX,dword ptr [ESI + 0x408]
004C2D4D  85 C0                     TEST EAX,EAX
004C2D4F  74 4A                     JZ 0x004c2d9b
004C2D51  8B 8E 0C 04 00 00         MOV ECX,dword ptr [ESI + 0x40c]
004C2D57  8D 45 FC                  LEA EAX,[EBP + -0x4]
004C2D5A  50                        PUSH EAX
004C2D5B  51                        PUSH ECX
004C2D5C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C2D62  E8 69 35 22 00            CALL 0x006e62d0
004C2D67  85 C0                     TEST EAX,EAX
004C2D69  75 26                     JNZ 0x004c2d91
004C2D6B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C2D6E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C2D74  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004C2D77  50                        PUSH EAX
004C2D78  E8 AF 15 F4 FF            CALL 0x0040432c
004C2D7D  C7 86 0C 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x40c],0x0
004C2D87  C7 86 08 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x408],0x0
LAB_004c2d91:
004C2D91  C7 86 08 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x408],0x0
LAB_004c2d9b:
004C2D9B  33 C0                     XOR EAX,EAX
004C2D9D  5E                        POP ESI
004C2D9E  8B E5                     MOV ESP,EBP
004C2DA0  5D                        POP EBP
004C2DA1  C3                        RET
