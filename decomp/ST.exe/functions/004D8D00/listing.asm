FUN_004d8d00:
004D8D00  33 C0                     XOR EAX,EAX
004D8D02  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004D8D08  89 81 F0 04 00 00         MOV dword ptr [ECX + 0x4f0],EAX
004D8D0E  89 81 EC 04 00 00         MOV dword ptr [ECX + 0x4ec],EAX
004D8D14  89 81 61 02 00 00         MOV dword ptr [ECX + 0x261],EAX
004D8D1A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D8D1F  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004D8D25  33 C0                     XOR EAX,EAX
004D8D27  89 91 F4 04 00 00         MOV dword ptr [ECX + 0x4f4],EDX
004D8D2D  C3                        RET
