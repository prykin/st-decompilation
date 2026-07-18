FUN_00757c90:
00757C90  55                        PUSH EBP
00757C91  8B EC                     MOV EBP,ESP
00757C93  56                        PUSH ESI
00757C94  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757C97  56                        PUSH ESI
00757C98  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
00757C9E  C7 00 C0 79 75 00         MOV dword ptr [EAX],0x7579c0
00757CA4  C7 40 10 00 00 00 00      MOV dword ptr [EAX + 0x10],0x0
00757CAB  C7 40 14 00 00 00 00      MOV dword ptr [EAX + 0x14],0x0
00757CB2  C7 40 18 01 00 00 00      MOV dword ptr [EAX + 0x18],0x1
00757CB9  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
00757CBF  FF 10                     CALL dword ptr [EAX]
00757CC1  C7 86 98 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x98],0x0
00757CCB  5E                        POP ESI
00757CCC  5D                        POP EBP
00757CCD  C2 04 00                  RET 0x4
