FUN_0074eebe:
0074EEBE  55                        PUSH EBP
0074EEBF  8B EC                     MOV EBP,ESP
0074EEC1  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EEC4  50                        PUSH EAX
0074EEC5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EEC8  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EECB  E8 BE F9 FF FF            CALL 0x0074e88e
0074EED0  85 C0                     TEST EAX,EAX
0074EED2  7C 1B                     JL 0x0074eeef
0074EED4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EED7  56                        PUSH ESI
0074EED8  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EEDB  8B 08                     MOV ECX,dword ptr [EAX]
0074EEDD  50                        PUSH EAX
0074EEDE  FF 51 44                  CALL dword ptr [ECX + 0x44]
0074EEE1  8B F0                     MOV ESI,EAX
0074EEE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EEE6  50                        PUSH EAX
0074EEE7  8B 08                     MOV ECX,dword ptr [EAX]
0074EEE9  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EEEC  8B C6                     MOV EAX,ESI
0074EEEE  5E                        POP ESI
LAB_0074eeef:
0074EEEF  5D                        POP EBP
0074EEF0  C2 08 00                  RET 0x8
