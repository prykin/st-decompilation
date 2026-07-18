FUN_0041c6e0:
0041C6E0  55                        PUSH EBP
0041C6E1  8B EC                     MOV EBP,ESP
0041C6E3  56                        PUSH ESI
0041C6E4  8B F1                     MOV ESI,ECX
0041C6E6  E8 61 7F FE FF            CALL 0x0040464c
0041C6EB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041C6EE  8B CE                     MOV ECX,ESI
0041C6F0  50                        PUSH EAX
0041C6F1  E8 AB 5C FE FF            CALL 0x004023a1
0041C6F6  5E                        POP ESI
0041C6F7  5D                        POP EBP
0041C6F8  C2 04 00                  RET 0x4
