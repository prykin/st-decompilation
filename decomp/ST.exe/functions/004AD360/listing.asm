FUN_004ad360:
004AD360  55                        PUSH EBP
004AD361  8B EC                     MOV EBP,ESP
004AD363  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD366  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
004AD369  5D                        POP EBP
004AD36A  C2 04 00                  RET 0x4
