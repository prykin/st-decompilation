FUN_0074e7b1:
0074E7B1  56                        PUSH ESI
0074E7B2  57                        PUSH EDI
0074E7B3  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E7B7  8B F1                     MOV ESI,ECX
0074E7B9  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E7BD  8D 7E 04                  LEA EDI,[ESI + 0x4]
0074E7C0  8B CF                     MOV ECX,EDI
0074E7C2  E8 BD FE FF FF            CALL 0x0074e684
0074E7C7  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
0074E7CB  C7 06 60 1C 7A 00         MOV dword ptr [ESI],0x7a1c60
0074E7D1  85 C0                     TEST EAX,EAX
0074E7D3  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0074E7D6  C7 07 18 1C 7A 00         MOV dword ptr [EDI],0x7a1c18
0074E7DC  C7 46 08 08 1C 7A 00      MOV dword ptr [ESI + 0x8],0x7a1c08
0074E7E3  75 0A                     JNZ 0x0074e7ef
0074E7E5  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074E7E9  C7 00 03 40 00 80         MOV dword ptr [EAX],0x80004003
LAB_0074e7ef:
0074E7EF  8B C6                     MOV EAX,ESI
0074E7F1  5F                        POP EDI
0074E7F2  5E                        POP ESI
0074E7F3  C2 10 00                  RET 0x10
