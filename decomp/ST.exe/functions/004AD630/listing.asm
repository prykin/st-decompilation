FUN_004ad630:
004AD630  55                        PUSH EBP
004AD631  8B EC                     MOV EBP,ESP
004AD633  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD636  89 41 34                  MOV dword ptr [ECX + 0x34],EAX
004AD639  5D                        POP EBP
004AD63A  C2 04 00                  RET 0x4
