FUN_00759f30:
00759F30  55                        PUSH EBP
00759F31  8B EC                     MOV EBP,ESP
00759F33  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00759F36  57                        PUSH EDI
00759F37  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00759F3A  8B D1                     MOV EDX,ECX
00759F3C  33 C0                     XOR EAX,EAX
00759F3E  C1 E9 02                  SHR ECX,0x2
00759F41  F3 AB                     STOSD.REP ES:EDI
00759F43  8B CA                     MOV ECX,EDX
00759F45  83 E1 03                  AND ECX,0x3
00759F48  F3 AA                     STOSB.REP ES:EDI
00759F4A  5F                        POP EDI
00759F4B  5D                        POP EBP
00759F4C  C2 08 00                  RET 0x8
