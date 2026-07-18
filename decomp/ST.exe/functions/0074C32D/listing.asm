FUN_0074c32d:
0074C32D  55                        PUSH EBP
0074C32E  8B EC                     MOV EBP,ESP
0074C330  8B 89 90 00 00 00         MOV ECX,dword ptr [ECX + 0x90]
0074C336  85 C9                     TEST ECX,ECX
0074C338  74 1B                     JZ 0x0074c355
0074C33A  DD 45 18                  FLD double ptr [EBP + 0x18]
0074C33D  51                        PUSH ECX
0074C33E  51                        PUSH ECX
0074C33F  8B 01                     MOV EAX,dword ptr [ECX]
0074C341  DD 1C 24                  FSTP double ptr [ESP]
0074C344  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074C347  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074C34A  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074C34D  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074C350  FF 50 58                  CALL dword ptr [EAX + 0x58]
0074C353  EB 02                     JMP 0x0074c357
LAB_0074c355:
0074C355  33 C0                     XOR EAX,EAX
LAB_0074c357:
0074C357  5D                        POP EBP
0074C358  C2 18 00                  RET 0x18
