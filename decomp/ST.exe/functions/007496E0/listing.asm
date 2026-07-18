FUN_007496e0:
007496E0  56                        PUSH ESI
007496E1  8B F1                     MOV ESI,ECX
007496E3  8D 46 0C                  LEA EAX,[ESI + 0xc]
007496E6  C7 06 C8 11 7A 00         MOV dword ptr [ESI],0x7a11c8
007496EC  50                        PUSH EAX
007496ED  C7 00 A0 11 7A 00         MOV dword ptr [EAX],0x7a11a0
007496F3  E8 A7 FC FF FF            CALL 0x0074939f
007496F8  8B CE                     MOV ECX,ESI
007496FA  E8 A2 FF FF FF            CALL 0x007496a1
007496FF  8B CE                     MOV ECX,ESI
00749701  E8 8B F9 FF FF            CALL 0x00749091
00749706  5E                        POP ESI
00749707  C3                        RET
