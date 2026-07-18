FUN_006e6040:
006E6040  55                        PUSH EBP
006E6041  8B EC                     MOV EBP,ESP
006E6043  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6046  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E6049  50                        PUSH EAX
006E604A  89 10                     MOV dword ptr [EAX],EDX
006E604C  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E6053  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
006E6056  E8 F5 DA FF FF            CALL 0x006e3b50
006E605B  5D                        POP EBP
006E605C  C2 04 00                  RET 0x4
