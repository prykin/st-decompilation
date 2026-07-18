FUN_005293c0:
005293C0  55                        PUSH EBP
005293C1  8B EC                     MOV EBP,ESP
005293C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005293C6  25 FF 00 00 00            AND EAX,0xff
005293CB  8B 04 85 34 45 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e4534]
005293D2  5D                        POP EBP
005293D3  C3                        RET
