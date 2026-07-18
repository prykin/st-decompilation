FUN_004df8c0:
004DF8C0  C7 81 D0 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d0],0x0
004DF8CA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DF8CF  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004DF8D5  33 C0                     XOR EAX,EAX
004DF8D7  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
004DF8DD  C3                        RET
