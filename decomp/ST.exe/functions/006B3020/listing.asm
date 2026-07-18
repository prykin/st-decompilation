FUN_006b3020:
006B3020  55                        PUSH EBP
006B3021  8B EC                     MOV EBP,ESP
006B3023  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B3026  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B3029  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B302C  50                        PUSH EAX
006B302D  51                        PUSH ECX
006B302E  52                        PUSH EDX
006B302F  E8 EC EF FF FF            CALL 0x006b2020
006B3034  5D                        POP EBP
006B3035  C2 0C 00                  RET 0xc
