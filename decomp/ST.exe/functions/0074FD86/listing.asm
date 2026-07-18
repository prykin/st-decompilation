FUN_0074fd86:
0074FD86  56                        PUSH ESI
0074FD87  8B F1                     MOV ESI,ECX
0074FD89  8D 4E 48                  LEA ECX,[ESI + 0x48]
0074FD8C  E8 7F E5 FF FF            CALL 0x0074e310
0074FD91  8D 4E 34                  LEA ECX,[ESI + 0x34]
0074FD94  E8 5D FE FF FF            CALL 0x0074fbf6
0074FD99  8B CE                     MOV ECX,ESI
0074FD9B  83 C6 04                  ADD ESI,0x4
0074FD9E  F7 D9                     NEG ECX
0074FDA0  1B C9                     SBB ECX,ECX
0074FDA2  23 CE                     AND ECX,ESI
0074FDA4  E8 CE B9 FF FF            CALL 0x0074b777
0074FDA9  5E                        POP ESI
0074FDAA  C3                        RET
