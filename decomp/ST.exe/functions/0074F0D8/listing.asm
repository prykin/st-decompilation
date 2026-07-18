FUN_0074f0d8:
0074F0D8  56                        PUSH ESI
0074F0D9  8B F1                     MOV ESI,ECX
0074F0DB  57                        PUSH EDI
0074F0DC  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0074F0DF  57                        PUSH EDI
0074F0E0  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F0E6  33 C0                     XOR EAX,EAX
0074F0E8  57                        PUSH EDI
0074F0E9  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074F0EC  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0074F0EF  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0074F0F2  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0074F0F5  C7 46 48 01 00 00 00      MOV dword ptr [ESI + 0x48],0x1
0074F0FC  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F102  5F                        POP EDI
0074F103  33 C0                     XOR EAX,EAX
0074F105  5E                        POP ESI
0074F106  C3                        RET
