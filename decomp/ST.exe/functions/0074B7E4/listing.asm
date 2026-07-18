FUN_0074b7e4:
0074B7E4  56                        PUSH ESI
0074B7E5  8B F1                     MOV ESI,ECX
0074B7E7  57                        PUSH EDI
0074B7E8  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074B7EC  8D 7E 04                  LEA EDI,[ESI + 0x4]
0074B7EF  8B CF                     MOV ECX,EDI
0074B7F1  E8 6D FF FF FF            CALL 0x0074b763
0074B7F6  8B 44 24 10               MOV EAX,dword ptr [ESP + 0x10]
0074B7FA  85 C0                     TEST EAX,EAX
0074B7FC  75 02                     JNZ 0x0074b800
0074B7FE  8B C6                     MOV EAX,ESI
LAB_0074b800:
0074B800  89 07                     MOV dword ptr [EDI],EAX
0074B802  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
0074B809  8B C6                     MOV EAX,ESI
0074B80B  5F                        POP EDI
0074B80C  5E                        POP ESI
0074B80D  C2 0C 00                  RET 0xc
