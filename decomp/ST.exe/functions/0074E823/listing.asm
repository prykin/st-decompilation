FUN_0074e823:
0074E823  56                        PUSH ESI
0074E824  8B F1                     MOV ESI,ECX
0074E826  8D 4E 0C                  LEA ECX,[ESI + 0xc]
0074E829  E8 E2 FA FF FF            CALL 0x0074e310
0074E82E  8D 4E FC                  LEA ECX,[ESI + -0x4]
0074E831  F7 D9                     NEG ECX
0074E833  1B C9                     SBB ECX,ECX
0074E835  23 CE                     AND ECX,ESI
0074E837  8D 41 04                  LEA EAX,[ECX + 0x4]
0074E83A  F7 D9                     NEG ECX
0074E83C  1B C9                     SBB ECX,ECX
0074E83E  23 C8                     AND ECX,EAX
0074E840  E8 32 CF FF FF            CALL 0x0074b777
0074E845  5E                        POP ESI
0074E846  C3                        RET
