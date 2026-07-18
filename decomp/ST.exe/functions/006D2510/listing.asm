FUN_006d2510:
006D2510  55                        PUSH EBP
006D2511  8B EC                     MOV EBP,ESP
006D2513  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2516  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
006D251D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006D2523  5D                        POP EBP
006D2524  C2 04 00                  RET 0x4
