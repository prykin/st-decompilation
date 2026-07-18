FUN_0074e962:
0074E962  55                        PUSH EBP
0074E963  8B EC                     MOV EBP,ESP
0074E965  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E968  8D 45 08                  LEA EAX,[EBP + 0x8]
0074E96B  50                        PUSH EAX
0074E96C  E8 6E FF FF FF            CALL 0x0074e8df
0074E971  85 C0                     TEST EAX,EAX
0074E973  7C 1B                     JL 0x0074e990
0074E975  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E978  56                        PUSH ESI
0074E979  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E97C  8B 08                     MOV ECX,dword ptr [EAX]
0074E97E  50                        PUSH EAX
0074E97F  FF 51 10                  CALL dword ptr [ECX + 0x10]
0074E982  8B F0                     MOV ESI,EAX
0074E984  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E987  50                        PUSH EAX
0074E988  8B 08                     MOV ECX,dword ptr [EAX]
0074E98A  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E98D  8B C6                     MOV EAX,ESI
0074E98F  5E                        POP ESI
LAB_0074e990:
0074E990  5D                        POP EBP
0074E991  C2 08 00                  RET 0x8
