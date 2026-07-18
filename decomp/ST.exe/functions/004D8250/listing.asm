FUN_004d8250:
004D8250  8B 0D 38 A1 7F 00         MOV ECX,dword ptr [0x007fa138]
004D8256  85 C9                     TEST ECX,ECX
004D8258  74 12                     JZ 0x004d826c
004D825A  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
004D825F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D8262  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D8265  99                        CDQ
004D8266  F7 F9                     IDIV ECX
004D8268  85 C0                     TEST EAX,EAX
004D826A  7D 02                     JGE 0x004d826e
LAB_004d826c:
004D826C  33 C0                     XOR EAX,EAX
LAB_004d826e:
004D826E  C3                        RET
