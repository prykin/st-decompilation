FUN_006bb980:
006BB980  55                        PUSH EBP
006BB981  8B EC                     MOV EBP,ESP
006BB983  56                        PUSH ESI
006BB984  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BB987  8B 86 74 04 00 00         MOV EAX,dword ptr [ESI + 0x474]
006BB98D  85 C0                     TEST EAX,EAX
006BB98F  74 39                     JZ 0x006bb9ca
006BB991  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BB994  6A 00                     PUSH 0x0
006BB996  50                        PUSH EAX
006BB997  8B 08                     MOV ECX,dword ptr [EAX]
006BB999  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006BB99F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BB9A2  C7 86 74 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x474],0x0
006BB9AC  A9 00 00 00 04            TEST EAX,0x4000000
006BB9B1  C7 86 78 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x478],0x0
006BB9BB  74 0D                     JZ 0x006bb9ca
006BB9BD  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BB9C3  56                        PUSH ESI
006BB9C4  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bb9ca:
006BB9CA  5E                        POP ESI
006BB9CB  5D                        POP EBP
006BB9CC  C2 04 00                  RET 0x4
