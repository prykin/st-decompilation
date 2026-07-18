FUN_0074ea8e:
0074EA8E  55                        PUSH EBP
0074EA8F  8B EC                     MOV EBP,ESP
0074EA91  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EA94  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EA97  50                        PUSH EAX
0074EA98  E8 42 FE FF FF            CALL 0x0074e8df
0074EA9D  85 C0                     TEST EAX,EAX
0074EA9F  7C 27                     JL 0x0074eac8
0074EAA1  56                        PUSH ESI
0074EAA2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EAA5  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
0074EAA8  8B 08                     MOV ECX,dword ptr [EAX]
0074EAAA  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074EAAD  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074EAB0  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074EAB3  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EAB6  50                        PUSH EAX
0074EAB7  FF 51 34                  CALL dword ptr [ECX + 0x34]
0074EABA  8B F0                     MOV ESI,EAX
0074EABC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EABF  50                        PUSH EAX
0074EAC0  8B 08                     MOV ECX,dword ptr [EAX]
0074EAC2  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EAC5  8B C6                     MOV EAX,ESI
0074EAC7  5E                        POP ESI
LAB_0074eac8:
0074EAC8  5D                        POP EBP
0074EAC9  C2 18 00                  RET 0x18
