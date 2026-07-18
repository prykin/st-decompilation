FUN_0074ec87:
0074EC87  55                        PUSH EBP
0074EC88  8B EC                     MOV EBP,ESP
0074EC8A  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EC8D  50                        PUSH EAX
0074EC8E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EC91  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EC94  E8 F5 FB FF FF            CALL 0x0074e88e
0074EC99  85 C0                     TEST EAX,EAX
0074EC9B  7C 1B                     JL 0x0074ecb8
0074EC9D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECA0  56                        PUSH ESI
0074ECA1  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074ECA4  8B 08                     MOV ECX,dword ptr [EAX]
0074ECA6  50                        PUSH EAX
0074ECA7  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
0074ECAA  8B F0                     MOV ESI,EAX
0074ECAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ECAF  50                        PUSH EAX
0074ECB0  8B 08                     MOV ECX,dword ptr [EAX]
0074ECB2  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074ECB5  8B C6                     MOV EAX,ESI
0074ECB7  5E                        POP ESI
LAB_0074ecb8:
0074ECB8  5D                        POP EBP
0074ECB9  C2 08 00                  RET 0x8
