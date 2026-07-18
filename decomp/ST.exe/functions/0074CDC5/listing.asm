FUN_0074cdc5:
0074CDC5  56                        PUSH ESI
0074CDC6  57                        PUSH EDI
0074CDC7  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CDCB  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074CDCF  8B F1                     MOV ESI,ECX
0074CDD1  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CDD5  57                        PUSH EDI
0074CDD6  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074CDDA  E8 B0 F5 FF FF            CALL 0x0074c38f
0074CDDF  83 A6 E4 00 00 00 00      AND dword ptr [ESI + 0xe4],0x0
0074CDE6  89 BE E0 00 00 00         MOV dword ptr [ESI + 0xe0],EDI
0074CDEC  C7 06 50 19 7A 00         MOV dword ptr [ESI],0x7a1950
0074CDF2  C7 46 0C 08 19 7A 00      MOV dword ptr [ESI + 0xc],0x7a1908
0074CDF9  C7 46 10 F0 18 7A 00      MOV dword ptr [ESI + 0x10],0x7a18f0
0074CE00  C7 86 98 00 00 00 C8 18 7A 00  MOV dword ptr [ESI + 0x98],0x7a18c8
0074CE0A  8B C6                     MOV EAX,ESI
0074CE0C  5F                        POP EDI
0074CE0D  5E                        POP ESI
0074CE0E  C2 10 00                  RET 0x10
