FUN_007576c0:
007576C0  55                        PUSH EBP
007576C1  8B EC                     MOV EBP,ESP
007576C3  56                        PUSH ESI
007576C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007576C7  6A 1C                     PUSH 0x1c
007576C9  6A 00                     PUSH 0x0
007576CB  8B 06                     MOV EAX,dword ptr [ESI]
007576CD  56                        PUSH ESI
007576CE  FF 10                     CALL dword ptr [EAX]
007576D0  89 86 A2 01 00 00         MOV dword ptr [ESI + 0x1a2],EAX
007576D6  C7 00 C0 79 75 00         MOV dword ptr [EAX],0x7579c0
007576DC  C7 40 04 90 7C 75 00      MOV dword ptr [EAX + 0x4],0x757c90
007576E3  C7 40 08 10 77 75 00      MOV dword ptr [EAX + 0x8],0x757710
007576EA  C7 40 0C A0 79 75 00      MOV dword ptr [EAX + 0xc],0x7579a0
007576F1  C7 40 10 00 00 00 00      MOV dword ptr [EAX + 0x10],0x0
007576F8  C7 40 14 00 00 00 00      MOV dword ptr [EAX + 0x14],0x0
007576FF  C7 40 18 01 00 00 00      MOV dword ptr [EAX + 0x18],0x1
00757706  5E                        POP ESI
00757707  5D                        POP EBP
00757708  C2 04 00                  RET 0x4
