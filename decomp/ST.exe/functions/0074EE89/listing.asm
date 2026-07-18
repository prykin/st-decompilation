FUN_0074ee89:
0074EE89  55                        PUSH EBP
0074EE8A  8B EC                     MOV EBP,ESP
0074EE8C  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EE8F  50                        PUSH EAX
0074EE90  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE93  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EE96  E8 F3 F9 FF FF            CALL 0x0074e88e
0074EE9B  85 C0                     TEST EAX,EAX
0074EE9D  7C 1B                     JL 0x0074eeba
0074EE9F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EEA2  56                        PUSH ESI
0074EEA3  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EEA6  8B 08                     MOV ECX,dword ptr [EAX]
0074EEA8  50                        PUSH EAX
0074EEA9  FF 51 40                  CALL dword ptr [ECX + 0x40]
0074EEAC  8B F0                     MOV ESI,EAX
0074EEAE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EEB1  50                        PUSH EAX
0074EEB2  8B 08                     MOV ECX,dword ptr [EAX]
0074EEB4  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EEB7  8B C6                     MOV EAX,ESI
0074EEB9  5E                        POP ESI
LAB_0074eeba:
0074EEBA  5D                        POP EBP
0074EEBB  C2 08 00                  RET 0x8
