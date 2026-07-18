FUN_0075d350:
0075D350  55                        PUSH EBP
0075D351  8B EC                     MOV EBP,ESP
0075D353  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075D356  8B 88 B2 01 00 00         MOV ECX,dword ptr [EAX + 0x1b2]
0075D35C  8B 90 26 01 00 00         MOV EDX,dword ptr [EAX + 0x126]
0075D362  89 51 5C                  MOV dword ptr [ECX + 0x5c],EDX
0075D365  8B 40 6C                  MOV EAX,dword ptr [EAX + 0x6c]
0075D368  89 41 60                  MOV dword ptr [ECX + 0x60],EAX
0075D36B  5D                        POP EBP
0075D36C  C2 04 00                  RET 0x4
