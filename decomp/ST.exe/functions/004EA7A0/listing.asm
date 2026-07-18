FUN_004ea7a0:
004EA7A0  33 C0                     XOR EAX,EAX
004EA7A2  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004EA7A8  89 81 61 02 00 00         MOV dword ptr [ECX + 0x261],EAX
004EA7AE  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EA7B3  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004EA7B9  33 C0                     XOR EAX,EAX
004EA7BB  89 91 EC 04 00 00         MOV dword ptr [ECX + 0x4ec],EDX
004EA7C1  C3                        RET
