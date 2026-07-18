FUN_0072e530:
0072E530  55                        PUSH EBP
0072E531  8B EC                     MOV EBP,ESP
0072E533  6A 01                     PUSH 0x1
0072E535  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E538  50                        PUSH EAX
0072E539  E8 EE 2B CD FF            CALL 0x0040112c
0072E53E  83 C4 08                  ADD ESP,0x8
0072E541  5D                        POP EBP
0072E542  C3                        RET
