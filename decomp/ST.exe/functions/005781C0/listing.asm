FUN_005781c0:
005781C0  55                        PUSH EBP
005781C1  8B EC                     MOV EBP,ESP
005781C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005781C6  56                        PUSH ESI
005781C7  68 00 80 00 00            PUSH 0x8000
005781CC  8B F1                     MOV ESI,ECX
005781CE  50                        PUSH EAX
005781CF  E8 EC CF 16 00            CALL 0x006e51c0
005781D4  C7 06 0C B2 79 00         MOV dword ptr [ESI],0x79b20c
005781DA  8B C6                     MOV EAX,ESI
005781DC  5E                        POP ESI
005781DD  5D                        POP EBP
005781DE  C2 04 00                  RET 0x4
