FUN_0074a95f:
0074A95F  56                        PUSH ESI
0074A960  57                        PUSH EDI
0074A961  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074A965  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0074A969  8B F1                     MOV ESI,ECX
0074A96B  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074A96F  8D 47 7C                  LEA EAX,[EDI + 0x7c]
0074A972  50                        PUSH EAX
0074A973  57                        PUSH EDI
0074A974  6A 00                     PUSH 0x0
0074A976  E8 03 DC FF FF            CALL 0x0074857e
0074A97B  89 BE D8 00 00 00         MOV dword ptr [ESI + 0xd8],EDI
0074A981  C7 06 10 15 7A 00         MOV dword ptr [ESI],0x7a1510
0074A987  C7 46 0C C8 14 7A 00      MOV dword ptr [ESI + 0xc],0x7a14c8
0074A98E  C7 46 10 B0 14 7A 00      MOV dword ptr [ESI + 0x10],0x7a14b0
0074A995  C7 86 98 00 00 00 88 14 7A 00  MOV dword ptr [ESI + 0x98],0x7a1488
0074A99F  8B C6                     MOV EAX,ESI
0074A9A1  5F                        POP EDI
0074A9A2  5E                        POP ESI
0074A9A3  C2 0C 00                  RET 0xc
