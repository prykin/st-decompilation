FUN_004168b0:
004168B0  B8 01 00 00 00            MOV EAX,0x1
004168B5  88 81 E3 00 00 00         MOV byte ptr [ECX + 0xe3],AL
004168BB  89 41 7E                  MOV dword ptr [ECX + 0x7e],EAX
004168BE  C3                        RET
