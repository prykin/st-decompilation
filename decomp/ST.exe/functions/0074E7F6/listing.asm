FUN_0074e7f6:
0074E7F6  8B C1                     MOV EAX,ECX
0074E7F8  56                        PUSH ESI
0074E7F9  8D 70 F8                  LEA ESI,[EAX + -0x8]
0074E7FC  83 C0 FC                  ADD EAX,-0x4
0074E7FF  8B CE                     MOV ECX,ESI
0074E801  F7 D9                     NEG ECX
0074E803  1B C9                     SBB ECX,ECX
0074E805  23 C8                     AND ECX,EAX
0074E807  83 C1 04                  ADD ECX,0x4
0074E80A  E8 14 00 00 00            CALL 0x0074e823
0074E80F  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074E814  74 07                     JZ 0x0074e81d
0074E816  56                        PUSH ESI
0074E817  E8 94 FA FD FF            CALL 0x0072e2b0
0074E81C  59                        POP ECX
LAB_0074e81d:
0074E81D  8B C6                     MOV EAX,ESI
0074E81F  5E                        POP ESI
0074E820  C2 04 00                  RET 0x4
