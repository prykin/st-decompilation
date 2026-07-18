FUN_0074abc4:
0074ABC4  56                        PUSH ESI
0074ABC5  8B F1                     MOV ESI,ECX
0074ABC7  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074ABCB  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074ABCF  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074ABD3  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074ABD7  E8 B7 EE FF FF            CALL 0x00749a93
0074ABDC  33 C0                     XOR EAX,EAX
0074ABDE  8B CE                     MOV ECX,ESI
0074ABE0  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
0074ABE6  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
0074ABEC  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
0074ABF2  C7 06 E8 15 7A 00         MOV dword ptr [ESI],0x7a15e8
0074ABF8  C7 46 0C A8 15 7A 00      MOV dword ptr [ESI + 0xc],0x7a15a8
0074ABFF  C7 46 10 90 15 7A 00      MOV dword ptr [ESI + 0x10],0x7a1590
0074AC06  C7 86 C8 00 00 00 68 15 7A 00  MOV dword ptr [ESI + 0xc8],0x7a1568
0074AC10  C7 86 CC 00 00 00 50 15 7A 00  MOV dword ptr [ESI + 0xcc],0x7a1550
0074AC1A  E8 4F 00 00 00            CALL 0x0074ac6e
0074AC1F  8B C6                     MOV EAX,ESI
0074AC21  5E                        POP ESI
0074AC22  C2 10 00                  RET 0x10
