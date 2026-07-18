FUN_0041ab90:
0041AB90  55                        PUSH EBP
0041AB91  8B EC                     MOV EBP,ESP
0041AB93  57                        PUSH EDI
0041AB94  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041AB97  B9 17 00 00 00            MOV ECX,0x17
0041AB9C  33 C0                     XOR EAX,EAX
0041AB9E  F3 AB                     STOSD.REP ES:EDI
0041ABA0  5F                        POP EDI
0041ABA1  5D                        POP EBP
0041ABA2  C2 04 00                  RET 0x4
