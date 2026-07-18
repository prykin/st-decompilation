FUN_0074f86f:
0074F86F  56                        PUSH ESI
0074F870  8B F1                     MOV ESI,ECX
0074F872  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F876  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074F879  FF 74 24 0C               PUSH dword ptr [ESP + 0xc]
0074F87D  E8 36 BF FF FF            CALL 0x0074b7b8
0074F882  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
0074F886  8B C6                     MOV EAX,ESI
0074F888  5E                        POP ESI
0074F889  C2 08 00                  RET 0x8
