FUN_0074bb83:
0074BB83  57                        PUSH EDI
0074BB84  8B D1                     MOV EDX,ECX
0074BB86  6A 12                     PUSH 0x12
0074BB88  33 C0                     XOR EAX,EAX
0074BB8A  59                        POP ECX
0074BB8B  8B FA                     MOV EDI,EDX
0074BB8D  6A 01                     PUSH 0x1
0074BB8F  F3 AB                     STOSD.REP ES:EDI
0074BB91  58                        POP EAX
0074BB92  5F                        POP EDI
0074BB93  89 42 28                  MOV dword ptr [EDX + 0x28],EAX
0074BB96  89 42 20                  MOV dword ptr [EDX + 0x20],EAX
0074BB99  C3                        RET
