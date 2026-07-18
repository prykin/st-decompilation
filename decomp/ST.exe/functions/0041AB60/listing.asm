FUN_0041ab60:
0041AB60  55                        PUSH EBP
0041AB61  8B EC                     MOV EBP,ESP
0041AB63  57                        PUSH EDI
0041AB64  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0041AB67  B9 0D 00 00 00            MOV ECX,0xd
0041AB6C  33 C0                     XOR EAX,EAX
0041AB6E  F3 AB                     STOSD.REP ES:EDI
0041AB70  66 AB                     STOSW ES:EDI
0041AB72  5F                        POP EDI
0041AB73  5D                        POP EBP
0041AB74  C2 04 00                  RET 0x4
