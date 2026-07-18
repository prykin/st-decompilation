FUN_006e8640:
006E8640  55                        PUSH EBP
006E8641  8B EC                     MOV EBP,ESP
006E8643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E8646  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E8649  89 81 A0 02 00 00         MOV dword ptr [ECX + 0x2a0],EAX
006E864F  89 91 A4 02 00 00         MOV dword ptr [ECX + 0x2a4],EDX
006E8655  5D                        POP EBP
006E8656  C2 08 00                  RET 0x8
