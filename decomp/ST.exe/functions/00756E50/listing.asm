FUN_00756e50:
00756E50  55                        PUSH EBP
00756E51  8B EC                     MOV EBP,ESP
00756E53  56                        PUSH ESI
00756E54  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756E57  6A 1C                     PUSH 0x1c
00756E59  6A 01                     PUSH 0x1
00756E5B  8B 06                     MOV EAX,dword ptr [ESI]
00756E5D  56                        PUSH ESI
00756E5E  FF 10                     CALL dword ptr [EAX]
00756E60  89 86 92 01 00 00         MOV dword ptr [ESI + 0x192],EAX
00756E66  56                        PUSH ESI
00756E67  C7 00 F0 70 75 00         MOV dword ptr [EAX],0x7570f0
00756E6D  C7 40 04 50 72 75 00      MOV dword ptr [EAX + 0x4],0x757250
00756E74  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
00756E7B  E8 10 00 00 00            CALL 0x00756e90
00756E80  5E                        POP ESI
00756E81  5D                        POP EBP
00756E82  C2 04 00                  RET 0x4
