FUN_0074c38f:
0074C38F  56                        PUSH ESI
0074C390  57                        PUSH EDI
0074C391  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074C395  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074C399  8B F1                     MOV ESI,ECX
0074C39B  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074C39F  8D 47 5C                  LEA EAX,[EDI + 0x5c]
0074C3A2  50                        PUSH EAX
0074C3A3  57                        PUSH EDI
0074C3A4  FF 74 24 1C               PUSH dword ptr [ESP + 0x1c]
0074C3A8  E8 D1 C1 FF FF            CALL 0x0074857e
0074C3AD  89 BE D8 00 00 00         MOV dword ptr [ESI + 0xd8],EDI
0074C3B3  C7 06 C8 17 7A 00         MOV dword ptr [ESI],0x7a17c8
0074C3B9  C7 46 0C 80 17 7A 00      MOV dword ptr [ESI + 0xc],0x7a1780
0074C3C0  C7 46 10 68 17 7A 00      MOV dword ptr [ESI + 0x10],0x7a1768
0074C3C7  C7 86 98 00 00 00 40 17 7A 00  MOV dword ptr [ESI + 0x98],0x7a1740
0074C3D1  8B C6                     MOV EAX,ESI
0074C3D3  5F                        POP EDI
0074C3D4  5E                        POP ESI
0074C3D5  C2 10 00                  RET 0x10
