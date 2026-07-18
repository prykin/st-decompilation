FUN_0074ff8c:
0074FF8C  56                        PUSH ESI
0074FF8D  8B F1                     MOV ESI,ECX
0074FF8F  57                        PUSH EDI
0074FF90  8D 46 08                  LEA EAX,[ESI + 0x8]
0074FF93  50                        PUSH EAX
0074FF94  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
0074FF9A  33 FF                     XOR EDI,EDI
0074FF9C  8D 4E 20                  LEA ECX,[ESI + 0x20]
0074FF9F  57                        PUSH EDI
0074FFA0  E8 BE DE FF FF            CALL 0x0074de63
0074FFA5  57                        PUSH EDI
0074FFA6  8D 4E 38                  LEA ECX,[ESI + 0x38]
0074FFA9  E8 B5 DE FF FF            CALL 0x0074de63
0074FFAE  6A 01                     PUSH 0x1
0074FFB0  8D 4E 50                  LEA ECX,[ESI + 0x50]
0074FFB3  E8 32 D2 FF FF            CALL 0x0074d1ea
0074FFB8  89 7E 54                  MOV dword ptr [ESI + 0x54],EDI
0074FFBB  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
0074FFBE  89 7E 5C                  MOV dword ptr [ESI + 0x5c],EDI
0074FFC1  89 7E 60                  MOV dword ptr [ESI + 0x60],EDI
0074FFC4  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
0074FFC7  89 7E 68                  MOV dword ptr [ESI + 0x68],EDI
0074FFCA  89 7E 6C                  MOV dword ptr [ESI + 0x6c],EDI
0074FFCD  8B C6                     MOV EAX,ESI
0074FFCF  5F                        POP EDI
0074FFD0  5E                        POP ESI
0074FFD1  C3                        RET
