FUN_00695140:
00695140  55                        PUSH EBP
00695141  8B EC                     MOV EBP,ESP
00695143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00695146  53                        PUSH EBX
00695147  56                        PUSH ESI
00695148  57                        PUSH EDI
00695149  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0069514C  B9 08 00 00 00            MOV ECX,0x8
00695151  8B F0                     MOV ESI,EAX
00695153  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00695156  8B 5F 1C                  MOV EBX,dword ptr [EDI + 0x1c]
00695159  F3 A5                     MOVSD.REP ES:EDI,ESI
0069515B  5F                        POP EDI
0069515C  89 58 1C                  MOV dword ptr [EAX + 0x1c],EBX
0069515F  5E                        POP ESI
00695160  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
00695163  5B                        POP EBX
00695164  5D                        POP EBP
00695165  C2 08 00                  RET 0x8
