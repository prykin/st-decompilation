FUN_0074b49d:
0074B49D  53                        PUSH EBX
0074B49E  8B 5C 24 0C               MOV EBX,dword ptr [ESP + 0xc]
0074B4A2  85 DB                     TEST EBX,EBX
0074B4A4  75 07                     JNZ 0x0074b4ad
0074B4A6  B8 03 40 00 80            MOV EAX,0x80004003
0074B4AB  EB 20                     JMP 0x0074b4cd
LAB_0074b4ad:
0074B4AD  57                        PUSH EDI
0074B4AE  56                        PUSH ESI
0074B4AF  8B 74 24 10               MOV ESI,dword ptr [ESP + 0x10]
0074B4B3  8D 7E B4                  LEA EDI,[ESI + -0x4c]
0074B4B6  57                        PUSH EDI
0074B4B7  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074B4BD  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0074B4C0  57                        PUSH EDI
0074B4C1  89 03                     MOV dword ptr [EBX],EAX
0074B4C3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074B4C9  5E                        POP ESI
0074B4CA  33 C0                     XOR EAX,EAX
0074B4CC  5F                        POP EDI
LAB_0074b4cd:
0074B4CD  5B                        POP EBX
0074B4CE  C2 08 00                  RET 0x8
