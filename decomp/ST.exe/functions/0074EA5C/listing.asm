FUN_0074ea5c:
0074EA5C  55                        PUSH EBP
0074EA5D  8B EC                     MOV EBP,ESP
0074EA5F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074EA62  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EA65  50                        PUSH EAX
0074EA66  E8 74 FE FF FF            CALL 0x0074e8df
0074EA6B  85 C0                     TEST EAX,EAX
0074EA6D  7C 1B                     JL 0x0074ea8a
0074EA6F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA72  56                        PUSH ESI
0074EA73  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074EA76  8B 08                     MOV ECX,dword ptr [EAX]
0074EA78  50                        PUSH EAX
0074EA79  FF 51 20                  CALL dword ptr [ECX + 0x20]
0074EA7C  8B F0                     MOV ESI,EAX
0074EA7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EA81  50                        PUSH EAX
0074EA82  8B 08                     MOV ECX,dword ptr [EAX]
0074EA84  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EA87  8B C6                     MOV EAX,ESI
0074EA89  5E                        POP ESI
LAB_0074ea8a:
0074EA8A  5D                        POP EBP
0074EA8B  C2 08 00                  RET 0x8
