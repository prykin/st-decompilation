FUN_0074ad32:
0074AD32  56                        PUSH ESI
0074AD33  8D B1 40 01 00 00         LEA ESI,[ECX + 0x140]
0074AD39  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0074AD3F  2B 06                     SUB EAX,dword ptr [ESI]
0074AD41  89 06                     MOV dword ptr [ESI],EAX
0074AD43  33 C0                     XOR EAX,EAX
0074AD45  5E                        POP ESI
0074AD46  C3                        RET
