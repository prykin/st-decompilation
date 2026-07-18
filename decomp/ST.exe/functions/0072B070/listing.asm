FUN_0072b070:
0072B070  55                        PUSH EBP
0072B071  8B EC                     MOV EBP,ESP
0072B073  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072B076  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072B079  A3 30 71 85 00            MOV [0x00857130],EAX
0072B07E  89 0D 1C 71 85 00         MOV dword ptr [0x0085711c],ECX
0072B084  5D                        POP EBP
0072B085  C2 08 00                  RET 0x8
