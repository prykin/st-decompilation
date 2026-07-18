FUN_0074ae67:
0074AE67  56                        PUSH ESI
0074AE68  8B F1                     MOV ESI,ECX
0074AE6A  FF B6 3C 01 00 00         PUSH dword ptr [ESI + 0x13c]
0074AE70  8B 06                     MOV EAX,dword ptr [ESI]
0074AE72  FF B6 38 01 00 00         PUSH dword ptr [ESI + 0x138]
0074AE78  FF 90 B4 00 00 00         CALL dword ptr [EAX + 0xb4]
0074AE7E  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0074AE84  89 86 E4 00 00 00         MOV dword ptr [ESI + 0xe4],EAX
0074AE8A  5E                        POP ESI
0074AE8B  C2 04 00                  RET 0x4
