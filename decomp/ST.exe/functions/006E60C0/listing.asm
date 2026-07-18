FUN_006e60c0:
006E60C0  55                        PUSH EBP
006E60C1  8B EC                     MOV EBP,ESP
006E60C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E60C6  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E60C9  50                        PUSH EAX
006E60CA  89 10                     MOV dword ptr [EAX],EDX
006E60CC  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E60D3  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006E60D6  E8 D5 F7 FF FF            CALL 0x006e58b0
006E60DB  5D                        POP EBP
006E60DC  C2 04 00                  RET 0x4
