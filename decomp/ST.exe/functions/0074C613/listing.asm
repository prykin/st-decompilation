FUN_0074c613:
0074C613  55                        PUSH EBP
0074C614  8B EC                     MOV EBP,ESP
0074C616  DD 45 1C                  FLD double ptr [EBP + 0x1c]
0074C619  56                        PUSH ESI
0074C61A  51                        PUSH ECX
0074C61B  51                        PUSH ECX
0074C61C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074C61F  DD 1C 24                  FSTP double ptr [ESP]
0074C622  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074C625  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074C628  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074C62B  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074C62E  56                        PUSH ESI
0074C62F  E8 A4 BC FF FF            CALL 0x007482d8
0074C634  8B 8E CC 00 00 00         MOV ECX,dword ptr [ESI + 0xcc]
0074C63A  DD 45 1C                  FLD double ptr [EBP + 0x1c]
0074C63D  51                        PUSH ECX
0074C63E  51                        PUSH ECX
0074C63F  8B 01                     MOV EAX,dword ptr [ECX]
0074C641  DD 1C 24                  FSTP double ptr [ESP]
0074C644  FF 75 18                  PUSH dword ptr [EBP + 0x18]
0074C647  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074C64A  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074C64D  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074C650  FF 50 64                  CALL dword ptr [EAX + 0x64]
0074C653  5E                        POP ESI
0074C654  5D                        POP EBP
0074C655  C2 1C 00                  RET 0x1c
