FUN_0065d480:
0065D480  85 C9                     TEST ECX,ECX
0065D482  74 0B                     JZ 0x0065d48f
0065D484  8D 41 20                  LEA EAX,[ECX + 0x20]
0065D487  50                        PUSH EAX
0065D488  E8 06 4E DA FF            CALL 0x00402293
0065D48D  59                        POP ECX
0065D48E  C3                        RET
LAB_0065d48f:
0065D48F  33 C0                     XOR EAX,EAX
0065D491  50                        PUSH EAX
0065D492  E8 FC 4D DA FF            CALL 0x00402293
0065D497  59                        POP ECX
0065D498  C3                        RET
