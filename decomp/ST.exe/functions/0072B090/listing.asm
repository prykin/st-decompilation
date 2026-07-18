FUN_0072b090:
0072B090  55                        PUSH EBP
0072B091  8B EC                     MOV EBP,ESP
0072B093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072B096  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072B099  A3 20 71 85 00            MOV [0x00857120],EAX
0072B09E  89 0D 24 71 85 00         MOV dword ptr [0x00857124],ECX
0072B0A4  5D                        POP EBP
0072B0A5  C2 08 00                  RET 0x8
