FUN_004d9790:
004D9790  56                        PUSH ESI
004D9791  33 F6                     XOR ESI,ESI
004D9793  89 B1 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],ESI
004D9799  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D979E  57                        PUSH EDI
004D979F  BF 4C 00 00 00            MOV EDI,0x4c
004D97A4  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004D97AA  89 91 D4 04 00 00         MOV dword ptr [ECX + 0x4d4],EDX
004D97B0  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
004D97B3  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004D97B9  05 39 30 00 00            ADD EAX,0x3039
004D97BE  33 D2                     XOR EDX,EDX
004D97C0  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
004D97C3  C1 E8 10                  SHR EAX,0x10
004D97C6  F7 F7                     DIV EDI
004D97C8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004D97CD  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
004D97D3  89 B1 DC 04 00 00         MOV dword ptr [ECX + 0x4dc],ESI
004D97D9  89 B1 E0 04 00 00         MOV dword ptr [ECX + 0x4e0],ESI
004D97DF  89 B1 E4 04 00 00         MOV dword ptr [ECX + 0x4e4],ESI
004D97E5  33 C0                     XOR EAX,EAX
004D97E7  03 D7                     ADD EDX,EDI
004D97E9  5F                        POP EDI
004D97EA  89 91 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EDX
004D97F0  5E                        POP ESI
004D97F1  C3                        RET
