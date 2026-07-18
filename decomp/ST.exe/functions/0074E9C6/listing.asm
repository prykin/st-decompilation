FUN_0074e9c6:
0074E9C6  55                        PUSH EBP
0074E9C7  8B EC                     MOV EBP,ESP
0074E9C9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E9CC  8D 45 08                  LEA EAX,[EBP + 0x8]
0074E9CF  50                        PUSH EAX
0074E9D0  E8 0A FF FF FF            CALL 0x0074e8df
0074E9D5  85 C0                     TEST EAX,EAX
0074E9D7  7C 1B                     JL 0x0074e9f4
0074E9D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E9DC  56                        PUSH ESI
0074E9DD  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E9E0  8B 08                     MOV ECX,dword ptr [EAX]
0074E9E2  50                        PUSH EAX
0074E9E3  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074E9E6  8B F0                     MOV ESI,EAX
0074E9E8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E9EB  50                        PUSH EAX
0074E9EC  8B 08                     MOV ECX,dword ptr [EAX]
0074E9EE  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E9F1  8B C6                     MOV EAX,ESI
0074E9F3  5E                        POP ESI
LAB_0074e9f4:
0074E9F4  5D                        POP EBP
0074E9F5  C2 08 00                  RET 0x8
