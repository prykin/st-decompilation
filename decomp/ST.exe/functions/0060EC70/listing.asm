FUN_0060ec70:
0060EC70  56                        PUSH ESI
0060EC71  57                        PUSH EDI
0060EC72  8B F1                     MOV ESI,ECX
0060EC74  E8 BA 2C DF FF            CALL 0x00401933
0060EC79  85 F6                     TEST ESI,ESI
0060EC7B  C7 06 94 CD 79 00         MOV dword ptr [ESI],0x79cd94
0060EC81  74 16                     JZ 0x0060ec99
0060EC83  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0060EC89  B9 45 00 00 00            MOV ECX,0x45
0060EC8E  33 C0                     XOR EAX,EAX
0060EC90  F3 AB                     STOSD.REP ES:EDI
0060EC92  66 AB                     STOSW ES:EDI
0060EC94  8B C6                     MOV EAX,ESI
0060EC96  5F                        POP EDI
0060EC97  5E                        POP ESI
0060EC98  C3                        RET
LAB_0060ec99:
0060EC99  33 FF                     XOR EDI,EDI
0060EC9B  B9 45 00 00 00            MOV ECX,0x45
0060ECA0  33 C0                     XOR EAX,EAX
0060ECA2  F3 AB                     STOSD.REP ES:EDI
0060ECA4  66 AB                     STOSW ES:EDI
0060ECA6  8B C6                     MOV EAX,ESI
0060ECA8  5F                        POP EDI
0060ECA9  5E                        POP ESI
0060ECAA  C3                        RET
