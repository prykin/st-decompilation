FUN_00724310:
00724310  56                        PUSH ESI
00724311  8B F1                     MOV ESI,ECX
00724313  E8 98 1C FC FF            CALL 0x006e5fb0
00724318  33 C0                     XOR EAX,EAX
0072431A  C7 06 C8 E2 79 00         MOV dword ptr [ESI],0x79e2c8
00724320  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00724323  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
00724326  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00724329  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
0072432C  8B C6                     MOV EAX,ESI
0072432E  5E                        POP ESI
0072432F  C3                        RET
