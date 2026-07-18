FUN_0074b7b8:
0074B7B8  56                        PUSH ESI
0074B7B9  8B F1                     MOV ESI,ECX
0074B7BB  57                        PUSH EDI
0074B7BC  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074B7C0  8D 7E 04                  LEA EDI,[ESI + 0x4]
0074B7C3  8B CF                     MOV ECX,EDI
0074B7C5  E8 99 FF FF FF            CALL 0x0074b763
0074B7CA  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0074B7CE  85 C0                     TEST EAX,EAX
0074B7D0  75 02                     JNZ 0x0074b7d4
0074B7D2  8B C6                     MOV EAX,ESI
LAB_0074b7d4:
0074B7D4  89 07                     MOV dword ptr [EDI],EAX
0074B7D6  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
0074B7DD  8B C6                     MOV EAX,ESI
0074B7DF  5F                        POP EDI
0074B7E0  5E                        POP ESI
0074B7E1  C2 08 00                  RET 0x8
