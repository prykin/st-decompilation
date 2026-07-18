FUN_006e5fe0:
006E5FE0  55                        PUSH EBP
006E5FE1  8B EC                     MOV EBP,ESP
006E5FE3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E5FE6  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E5FE9  50                        PUSH EAX
006E5FEA  89 10                     MOV dword ptr [EAX],EDX
006E5FEC  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E5FF3  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
006E5FF6  E8 B5 DD FF FF            CALL 0x006e3db0
006E5FFB  5D                        POP EBP
006E5FFC  C2 04 00                  RET 0x4
