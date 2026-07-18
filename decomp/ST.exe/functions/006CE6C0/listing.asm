FUN_006ce6c0:
006CE6C0  55                        PUSH EBP
006CE6C1  8B EC                     MOV EBP,ESP
006CE6C3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE6C6  85 C9                     TEST ECX,ECX
006CE6C8  76 26                     JBE 0x006ce6f0
006CE6CA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CE6CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE6D0  56                        PUSH ESI
006CE6D1  66 8B F0                  MOV SI,AX
006CE6D4  C1 E6 10                  SHL ESI,0x10
006CE6D7  66 8B F0                  MOV SI,AX
006CE6DA  57                        PUSH EDI
006CE6DB  8B FA                     MOV EDI,EDX
006CE6DD  8B C6                     MOV EAX,ESI
006CE6DF  D1 E9                     SHR ECX,0x1
006CE6E1  F3 AB                     STOSD.REP ES:EDI
006CE6E3  13 C9                     ADC ECX,ECX
006CE6E5  66 F3 AB                  STOSW.REP ES:EDI
006CE6E8  5F                        POP EDI
006CE6E9  8B C2                     MOV EAX,EDX
006CE6EB  5E                        POP ESI
006CE6EC  5D                        POP EBP
006CE6ED  C2 0C 00                  RET 0xc
LAB_006ce6f0:
006CE6F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CE6F3  5D                        POP EBP
006CE6F4  C2 0C 00                  RET 0xc
