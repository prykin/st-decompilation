FUN_00632000:
00632000  8B D1                     MOV EDX,ECX
00632002  57                        PUSH EDI
00632003  B9 2C 00 00 00            MOV ECX,0x2c
00632008  33 C0                     XOR EAX,EAX
0063200A  8B FA                     MOV EDI,EDX
0063200C  F3 AB                     STOSD.REP ES:EDI
0063200E  AA                        STOSB ES:EDI
0063200F  8B C2                     MOV EAX,EDX
00632011  5F                        POP EDI
00632012  C3                        RET
