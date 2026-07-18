FUN_00761a00:
00761A00  55                        PUSH EBP
00761A01  8B EC                     MOV EBP,ESP
00761A03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00761A06  50                        PUSH EAX
00761A07  E8 A4 FF FF FF            CALL 0x007619b0
00761A0C  83 C4 04                  ADD ESP,0x4
00761A0F  5D                        POP EBP
00761A10  C3                        RET
