FUN_004e4630:
004E4630  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E4635  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004E463B  33 C0                     XOR EAX,EAX
004E463D  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
004E4643  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004E4649  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004E464F  89 81 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],EAX
004E4655  C3                        RET
