FUN_0074ed2b:
0074ED2B  55                        PUSH EBP
0074ED2C  8B EC                     MOV EBP,ESP
0074ED2E  8D 45 08                  LEA EAX,[EBP + 0x8]
0074ED31  50                        PUSH EAX
0074ED32  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED35  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074ED38  E8 51 FB FF FF            CALL 0x0074e88e
0074ED3D  85 C0                     TEST EAX,EAX
0074ED3F  7C 1B                     JL 0x0074ed5c
0074ED41  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED44  56                        PUSH ESI
0074ED45  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074ED48  8B 08                     MOV ECX,dword ptr [EAX]
0074ED4A  50                        PUSH EAX
0074ED4B  FF 51 28                  CALL dword ptr [ECX + 0x28]
0074ED4E  8B F0                     MOV ESI,EAX
0074ED50  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074ED53  50                        PUSH EAX
0074ED54  8B 08                     MOV ECX,dword ptr [EAX]
0074ED56  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074ED59  8B C6                     MOV EAX,ESI
0074ED5B  5E                        POP ESI
LAB_0074ed5c:
0074ED5C  5D                        POP EBP
0074ED5D  C2 08 00                  RET 0x8
