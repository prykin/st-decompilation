FUN_00673160:
00673160  55                        PUSH EBP
00673161  8B EC                     MOV EBP,ESP
00673163  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00673166  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00673169  50                        PUSH EAX
0067316A  51                        PUSH ECX
0067316B  E8 B0 B4 0B 00            CALL 0x0072e620
00673170  83 C4 08                  ADD ESP,0x8
00673173  5D                        POP EBP
00673174  C3                        RET
