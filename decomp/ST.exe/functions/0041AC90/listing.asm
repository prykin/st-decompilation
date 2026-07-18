FUN_0041ac90:
0041AC90  55                        PUSH EBP
0041AC91  8B EC                     MOV EBP,ESP
0041AC93  57                        PUSH EDI
0041AC94  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041AC97  B9 4A 00 00 00            MOV ECX,0x4a
0041AC9C  33 C0                     XOR EAX,EAX
0041AC9E  F3 AB                     STOSD.REP ES:EDI
0041ACA0  AA                        STOSB ES:EDI
0041ACA1  5F                        POP EDI
0041ACA2  5D                        POP EBP
0041ACA3  C2 04 00                  RET 0x4
