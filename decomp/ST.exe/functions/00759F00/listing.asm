FUN_00759f00:
00759F00  55                        PUSH EBP
00759F01  8B EC                     MOV EBP,ESP
00759F03  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00759F06  56                        PUSH ESI
00759F07  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00759F0A  57                        PUSH EDI
00759F0B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00759F0E  C1 E1 08                  SHL ECX,0x8
00759F11  8B C1                     MOV EAX,ECX
00759F13  C1 E9 02                  SHR ECX,0x2
00759F16  F3 A5                     MOVSD.REP ES:EDI,ESI
00759F18  8B C8                     MOV ECX,EAX
00759F1A  83 E1 03                  AND ECX,0x3
00759F1D  F3 A4                     MOVSB.REP ES:EDI,ESI
00759F1F  5F                        POP EDI
00759F20  5E                        POP ESI
00759F21  5D                        POP EBP
00759F22  C2 0C 00                  RET 0xc
