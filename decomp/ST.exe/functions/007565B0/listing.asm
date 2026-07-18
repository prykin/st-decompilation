FUN_007565b0:
007565B0  55                        PUSH EBP
007565B1  8B EC                     MOV EBP,ESP
007565B3  56                        PUSH ESI
007565B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007565B7  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007565BA  3D C8 00 00 00            CMP EAX,0xc8
007565BF  7C 07                     JL 0x007565c8
007565C1  3D D2 00 00 00            CMP EAX,0xd2
007565C6  7E 25                     JLE 0x007565ed
LAB_007565c8:
007565C8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007565CD  68 5E 01 00 00            PUSH 0x15e
007565D2  68 38 2D 7F 00            PUSH 0x7f2d38
007565D7  50                        PUSH EAX
007565D8  6A 12                     PUSH 0x12
007565DA  E8 61 F8 F4 FF            CALL 0x006a5e40
007565DF  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
007565E5  5E                        POP ESI
007565E6  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
007565E9  5D                        POP EBP
007565EA  C2 04 00                  RET 0x4
LAB_007565ed:
007565ED  8B 96 A2 01 00 00         MOV EDX,dword ptr [ESI + 0x1a2]
007565F3  5E                        POP ESI
007565F4  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
007565F7  5D                        POP EBP
007565F8  C2 04 00                  RET 0x4
