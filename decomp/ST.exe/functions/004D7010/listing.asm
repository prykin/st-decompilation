FUN_004d7010:
004D7010  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D7015  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004D701B  89 81 19 01 00 00         MOV dword ptr [ECX + 0x119],EAX
004D7021  89 81 15 01 00 00         MOV dword ptr [ECX + 0x115],EAX
004D7027  33 C0                     XOR EAX,EAX
004D7029  C3                        RET
