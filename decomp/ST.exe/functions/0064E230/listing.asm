FUN_0064e230:
0064E230  55                        PUSH EBP
0064E231  8B EC                     MOV EBP,ESP
0064E233  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0064E236  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064E239  50                        PUSH EAX
0064E23A  E8 EB 76 DB FF            CALL 0x0040592a
0064E23F  33 C0                     XOR EAX,EAX
0064E241  5D                        POP EBP
0064E242  C3                        RET
