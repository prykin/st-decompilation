FUN_0074eacc:
0074EACC  55                        PUSH EBP
0074EACD  8B EC                     MOV EBP,ESP
0074EACF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EAD2  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EAD5  50                        PUSH EAX
0074EAD6  E8 04 FE FF FF            CALL 0x0074e8df
0074EADB  85 C0                     TEST EAX,EAX
0074EADD  7C 24                     JL 0x0074eb03
0074EADF  56                        PUSH ESI
0074EAE0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EAE3  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074EAE6  8B 08                     MOV ECX,dword ptr [EAX]
0074EAE8  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074EAEB  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074EAEE  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EAF1  50                        PUSH EAX
0074EAF2  FF 51 38                  CALL dword ptr [ECX + 0x38]
0074EAF5  8B F0                     MOV ESI,EAX
0074EAF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EAFA  50                        PUSH EAX
0074EAFB  8B 08                     MOV ECX,dword ptr [EAX]
0074EAFD  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EB00  8B C6                     MOV EAX,ESI
0074EB02  5E                        POP ESI
LAB_0074eb03:
0074EB03  5D                        POP EBP
0074EB04  C2 14 00                  RET 0x14
