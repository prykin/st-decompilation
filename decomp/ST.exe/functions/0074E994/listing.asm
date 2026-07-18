FUN_0074e994:
0074E994  55                        PUSH EBP
0074E995  8B EC                     MOV EBP,ESP
0074E997  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E99A  8D 45 08                  LEA EAX,[EBP + 0x8]
0074E99D  50                        PUSH EAX
0074E99E  E8 3C FF FF FF            CALL 0x0074e8df
0074E9A3  85 C0                     TEST EAX,EAX
0074E9A5  7C 1B                     JL 0x0074e9c2
0074E9A7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E9AA  56                        PUSH ESI
0074E9AB  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E9AE  8B 08                     MOV ECX,dword ptr [EAX]
0074E9B0  50                        PUSH EAX
0074E9B1  FF 51 14                  CALL dword ptr [ECX + 0x14]
0074E9B4  8B F0                     MOV ESI,EAX
0074E9B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E9B9  50                        PUSH EAX
0074E9BA  8B 08                     MOV ECX,dword ptr [EAX]
0074E9BC  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E9BF  8B C6                     MOV EAX,ESI
0074E9C1  5E                        POP ESI
LAB_0074e9c2:
0074E9C2  5D                        POP EBP
0074E9C3  C2 08 00                  RET 0x8
