FUN_004dc1e0:
004DC1E0  33 C0                     XOR EAX,EAX
004DC1E2  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004DC1E8  89 81 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EAX
004DC1EE  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DC1F4  8B 92 E4 00 00 00         MOV EDX,dword ptr [EDX + 0xe4]
004DC1FA  89 91 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EDX
004DC200  89 81 61 02 00 00         MOV dword ptr [ECX + 0x261],EAX
004DC206  C3                        RET
