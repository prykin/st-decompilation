FUN_004c5e60:
004C5E60  55                        PUSH EBP
004C5E61  8B EC                     MOV EBP,ESP
004C5E63  51                        PUSH ECX
004C5E64  56                        PUSH ESI
004C5E65  8B F1                     MOV ESI,ECX
004C5E67  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C5E6D  85 C0                     TEST EAX,EAX
004C5E6F  74 26                     JZ 0x004c5e97
004C5E71  8D 4D FC                  LEA ECX,[EBP + -0x4]
004C5E74  51                        PUSH ECX
004C5E75  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004C5E7B  50                        PUSH EAX
004C5E7C  E8 4F 04 22 00            CALL 0x006e62d0
004C5E81  85 C0                     TEST EAX,EAX
004C5E83  75 08                     JNZ 0x004c5e8d
004C5E85  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004C5E88  E8 C0 D7 F3 FF            CALL 0x0040364d
LAB_004c5e8d:
004C5E8D  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
LAB_004c5e97:
004C5E97  33 C0                     XOR EAX,EAX
004C5E99  5E                        POP ESI
004C5E9A  8B E5                     MOV ESP,EBP
004C5E9C  5D                        POP EBP
004C5E9D  C3                        RET
