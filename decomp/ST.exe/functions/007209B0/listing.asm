FUN_007209b0:
007209B0  56                        PUSH ESI
007209B1  8B F1                     MOV ESI,ECX
007209B3  E8 48 AD 00 00            CALL 0x0072b700
007209B8  33 C0                     XOR EAX,EAX
007209BA  C7 06 B4 E2 79 00         MOV dword ptr [ESI],0x79e2b4
007209C0  89 86 00 02 00 00         MOV dword ptr [ESI + 0x200],EAX
007209C6  89 86 FC 01 00 00         MOV dword ptr [ESI + 0x1fc],EAX
007209CC  8B C6                     MOV EAX,ESI
007209CE  5E                        POP ESI
007209CF  C3                        RET
