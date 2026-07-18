FUN_0074cfc0:
0074CFC0  56                        PUSH ESI
0074CFC1  57                        PUSH EDI
0074CFC2  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CFC6  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074CFCA  8B F1                     MOV ESI,ECX
0074CFCC  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CFD0  57                        PUSH EDI
0074CFD1  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CFD5  E8 7E F6 FF FF            CALL 0x0074c658
0074CFDA  89 BE A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDI
0074CFE0  C7 06 F0 19 7A 00         MOV dword ptr [ESI],0x7a19f0
0074CFE6  C7 46 0C A8 19 7A 00      MOV dword ptr [ESI + 0xc],0x7a19a8
0074CFED  C7 46 10 90 19 7A 00      MOV dword ptr [ESI + 0x10],0x7a1990
0074CFF4  8B C6                     MOV EAX,ESI
0074CFF6  5F                        POP EDI
0074CFF7  5E                        POP ESI
0074CFF8  C2 10 00                  RET 0x10
