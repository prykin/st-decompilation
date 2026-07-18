FUN_0074ed9a:
0074ED9A  55                        PUSH EBP
0074ED9B  8B EC                     MOV EBP,ESP
0074ED9D  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EDA0  50                        PUSH EAX
0074EDA1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDA4  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EDA7  E8 E2 FA FF FF            CALL 0x0074e88e
0074EDAC  85 C0                     TEST EAX,EAX
0074EDAE  7C 1B                     JL 0x0074edcb
0074EDB0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDB3  56                        PUSH ESI
0074EDB4  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EDB7  8B 08                     MOV ECX,dword ptr [EAX]
0074EDB9  50                        PUSH EAX
0074EDBA  FF 51 30                  CALL dword ptr [ECX + 0x30]
0074EDBD  8B F0                     MOV ESI,EAX
0074EDBF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EDC2  50                        PUSH EAX
0074EDC3  8B 08                     MOV ECX,dword ptr [EAX]
0074EDC5  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EDC8  8B C6                     MOV EAX,ESI
0074EDCA  5E                        POP ESI
LAB_0074edcb:
0074EDCB  5D                        POP EBP
0074EDCC  C2 08 00                  RET 0x8
