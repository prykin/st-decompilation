FUN_0041ade0:
0041ADE0  55                        PUSH EBP
0041ADE1  8B EC                     MOV EBP,ESP
0041ADE3  57                        PUSH EDI
0041ADE4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041ADE7  B9 90 00 00 00            MOV ECX,0x90
0041ADEC  33 C0                     XOR EAX,EAX
0041ADEE  F3 AB                     STOSD.REP ES:EDI
0041ADF0  5F                        POP EDI
0041ADF1  5D                        POP EBP
0041ADF2  C2 04 00                  RET 0x4
