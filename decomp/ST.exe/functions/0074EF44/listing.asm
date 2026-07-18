FUN_0074ef44:
0074EF44  56                        PUSH ESI
0074EF45  8B F1                     MOV ESI,ECX
0074EF47  E8 18 00 00 00            CALL 0x0074ef64
0074EF4C  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074EF51  74 0A                     JZ 0x0074ef5d
0074EF53  8D 46 F8                  LEA EAX,[ESI + -0x8]
0074EF56  50                        PUSH EAX
0074EF57  E8 54 F3 FD FF            CALL 0x0072e2b0
0074EF5C  59                        POP ECX
LAB_0074ef5d:
0074EF5D  8D 46 F8                  LEA EAX,[ESI + -0x8]
0074EF60  5E                        POP ESI
0074EF61  C2 04 00                  RET 0x4
