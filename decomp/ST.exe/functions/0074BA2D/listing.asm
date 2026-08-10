FUN_0074ba2d:
0074BA2D  56                        PUSH ESI
0074BA2E  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074BA32  57                        PUSH EDI
0074BA33  8D 79 10                  LEA EDI,[ECX + 0x10]
0074BA36  A5                        MOVSD ES:EDI,ESI
0074BA37  A5                        MOVSD ES:EDI,ESI
0074BA38  A5                        MOVSD ES:EDI,ESI
0074BA39  A5                        MOVSD ES:EDI,ESI
0074BA3A  5F                        POP EDI
0074BA3B  5E                        POP ESI
0074BA3C  C2 04 00                  RET 0x4
