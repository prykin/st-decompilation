FUN_0074ef64:
0074EF64  56                        PUSH ESI
0074EF65  8B F1                     MOV ESI,ECX
0074EF67  8D 46 14                  LEA EAX,[ESI + 0x14]
0074EF6A  50                        PUSH EAX
0074EF6B  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
0074EF71  8D 4E F8                  LEA ECX,[ESI + -0x8]
0074EF74  83 C6 FC                  ADD ESI,-0x4
0074EF77  F7 D9                     NEG ECX
0074EF79  1B C9                     SBB ECX,ECX
0074EF7B  23 CE                     AND ECX,ESI
0074EF7D  83 C1 04                  ADD ECX,0x4
0074EF80  E8 9E F8 FF FF            CALL 0x0074e823
0074EF85  5E                        POP ESI
0074EF86  C3                        RET
