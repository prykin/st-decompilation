FUN_00677f20:
00677F20  55                        PUSH EBP
00677F21  8B EC                     MOV EBP,ESP
00677F23  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00677F26  A3 84 19 81 00            MOV [0x00811984],EAX
00677F2B  83 C8 FF                  OR EAX,0xffffffff
00677F2E  5D                        POP EBP
00677F2F  C3                        RET
