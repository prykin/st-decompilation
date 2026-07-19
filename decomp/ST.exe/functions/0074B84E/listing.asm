FUN_0074b84e:
0074B84E  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074B852  56                        PUSH ESI
0074B853  8D 70 08                  LEA ESI,[EAX + 0x8]
0074B856  56                        PUSH ESI
0074B857  FF 15 78 BC 85 00         CALL dword ptr [0x0085bc78]
0074B85D  8B 36                     MOV ESI,dword ptr [ESI]
0074B85F  6A 01                     PUSH 0x1
0074B861  58                        POP EAX
0074B862  3B F0                     CMP ESI,EAX
0074B864  76 02                     JBE 0x0074b868
0074B866  8B C6                     MOV EAX,ESI
LAB_0074b868:
0074B868  5E                        POP ESI
0074B869  C2 04 00                  RET 0x4
