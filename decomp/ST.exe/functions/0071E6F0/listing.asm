FUN_0071e6f0:
0071E6F0  56                        PUSH ESI
0071E6F1  8B F1                     MOV ESI,ECX
0071E6F3  E8 08 D0 00 00            CALL 0x0072b700
0071E6F8  33 C0                     XOR EAX,EAX
0071E6FA  C7 06 98 E2 79 00         MOV dword ptr [ESI],0x79e298
0071E700  89 86 F0 01 00 00         MOV dword ptr [ESI + 0x1f0],EAX
0071E706  89 86 EC 01 00 00         MOV dword ptr [ESI + 0x1ec],EAX
0071E70C  89 86 B8 01 00 00         MOV dword ptr [ESI + 0x1b8],EAX
0071E712  89 86 B4 01 00 00         MOV dword ptr [ESI + 0x1b4],EAX
0071E718  89 86 C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EAX
0071E71E  8B C6                     MOV EAX,ESI
0071E720  5E                        POP ESI
0071E721  C3                        RET
