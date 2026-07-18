FUN_006e6020:
006E6020  55                        PUSH EBP
006E6021  8B EC                     MOV EBP,ESP
006E6023  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E6026  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006E6029  50                        PUSH EAX
006E602A  89 10                     MOV dword ptr [EAX],EDX
006E602C  C7 40 04 02 00 00 00      MOV dword ptr [EAX + 0x4],0x2
006E6033  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
006E6036  E8 75 DA FF FF            CALL 0x006e3ab0
006E603B  5D                        POP EBP
006E603C  C2 04 00                  RET 0x4
