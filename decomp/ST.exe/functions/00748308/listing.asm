CBaseOutputPin:
00748308  55                        PUSH EBP
00748309  8B EC                     MOV EBP,ESP
0074830B  56                        PUSH ESI
0074830C  6A 01                     PUSH 0x1
0074830E  FF 75 18                  PUSH dword ptr [EBP + 0x18]
00748311  8B F1                     MOV ESI,ECX
00748313  FF 75 14                  PUSH dword ptr [EBP + 0x14]
00748316  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00748319  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074831C  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074831F  E8 EE F7 FF FF            CALL 0x00747b12
00748324  83 A6 98 00 00 00 00      AND dword ptr [ESI + 0x98],0x0
0074832B  83 A6 9C 00 00 00 00      AND dword ptr [ESI + 0x9c],0x0
00748332  8B C6                     MOV EAX,ESI
00748334  5E                        POP ESI
00748335  5D                        POP EBP
00748336  C2 14 00                  RET 0x14
