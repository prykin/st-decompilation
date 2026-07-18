FUN_00629040:
00629040  8B D1                     MOV EDX,ECX
00629042  57                        PUSH EDI
00629043  B9 35 00 00 00            MOV ECX,0x35
00629048  33 C0                     XOR EAX,EAX
0062904A  8B FA                     MOV EDI,EDX
0062904C  F3 AB                     STOSD.REP ES:EDI
0062904E  66 AB                     STOSW ES:EDI
00629050  AA                        STOSB ES:EDI
00629051  C7 82 C6 00 00 00 FF FF FF FF  MOV dword ptr [EDX + 0xc6],0xffffffff
0062905B  8B C2                     MOV EAX,EDX
0062905D  5F                        POP EDI
0062905E  C3                        RET
