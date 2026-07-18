FUN_0074eef3:
0074EEF3  56                        PUSH ESI
0074EEF4  8B F1                     MOV ESI,ECX
0074EEF6  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074EEFA  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074EEFE  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074EF02  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
0074EF06  E8 A6 F8 FF FF            CALL 0x0074e7b1
0074EF0B  8D 46 1C                  LEA EAX,[ESI + 0x1c]
0074EF0E  50                        PUSH EAX
0074EF0F  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
0074EF15  33 C0                     XOR EAX,EAX
0074EF17  C7 46 48 01 00 00 00      MOV dword ptr [ESI + 0x48],0x1
0074EF1E  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074EF21  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0074EF24  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0074EF27  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0074EF2A  C7 06 10 1D 7A 00         MOV dword ptr [ESI],0x7a1d10
0074EF30  C7 46 04 C8 1C 7A 00      MOV dword ptr [ESI + 0x4],0x7a1cc8
0074EF37  C7 46 08 B8 1C 7A 00      MOV dword ptr [ESI + 0x8],0x7a1cb8
0074EF3E  8B C6                     MOV EAX,ESI
0074EF40  5E                        POP ESI
0074EF41  C2 10 00                  RET 0x10
