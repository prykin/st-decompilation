FUN_006e60a0:
006E60A0  55                        PUSH EBP
006E60A1  8B EC                     MOV EBP,ESP
006E60A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E60A6  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E60A9  50                        PUSH EAX
006E60AA  89 10                     MOV dword ptr [EAX],EDX
006E60AC  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E60B3  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006E60B6  E8 55 F7 FF FF            CALL 0x006e5810
006E60BB  5D                        POP EBP
006E60BC  C2 04 00                  RET 0x4
