FUN_00757250:
00757250  55                        PUSH EBP
00757251  8B EC                     MOV EBP,ESP
00757253  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00757256  56                        PUSH ESI
00757257  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
0075725A  8B B0 92 01 00 00         MOV ESI,dword ptr [EAX + 0x192]
00757260  85 C9                     TEST ECX,ECX
00757262  74 0A                     JZ 0x0075726e
00757264  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075726A  50                        PUSH EAX
0075726B  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0075726e:
0075726E  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00757271  40                        INC EAX
00757272  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
00757275  5E                        POP ESI
00757276  5D                        POP EBP
00757277  C2 04 00                  RET 0x4
