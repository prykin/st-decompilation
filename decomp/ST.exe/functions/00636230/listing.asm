FUN_00636230:
00636230  8B D1                     MOV EDX,ECX
00636232  57                        PUSH EDI
00636233  B9 0D 00 00 00            MOV ECX,0xd
00636238  33 C0                     XOR EAX,EAX
0063623A  8B FA                     MOV EDI,EDX
0063623C  F3 AB                     STOSD.REP ES:EDI
0063623E  8B C2                     MOV EAX,EDX
00636240  5F                        POP EDI
00636241  C3                        RET
