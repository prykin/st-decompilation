FUN_005440c0:
005440C0  55                        PUSH EBP
005440C1  8B EC                     MOV EBP,ESP
005440C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005440C6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005440C9  56                        PUSH ESI
005440CA  8B 34 85 F6 7F 80 00      MOV ESI,dword ptr [EAX*0x4 + 0x807ff6]
005440D1  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
005440D4  8B 04 85 36 81 80 00      MOV EAX,dword ptr [EAX*0x4 + 0x808136]
005440DB  89 42 1C                  MOV dword ptr [EDX + 0x1c],EAX
005440DE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005440E1  52                        PUSH EDX
005440E2  6A 01                     PUSH 0x1
005440E4  6A 03                     PUSH 0x3
005440E6  E8 15 1F 1A 00            CALL 0x006e6000
005440EB  5E                        POP ESI
005440EC  5D                        POP EBP
005440ED  C2 0C 00                  RET 0xc
