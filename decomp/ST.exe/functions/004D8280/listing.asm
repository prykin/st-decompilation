FUN_004d8280:
004D8280  8B 0D 44 A1 7F 00         MOV ECX,dword ptr [0x007fa144]
004D8286  85 C9                     TEST ECX,ECX
004D8288  74 12                     JZ 0x004d829c
004D828A  A1 48 A1 7F 00            MOV EAX,[0x007fa148]
004D828F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D8292  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004D8295  99                        CDQ
004D8296  F7 F9                     IDIV ECX
004D8298  85 C0                     TEST EAX,EAX
004D829A  7D 02                     JGE 0x004d829e
LAB_004d829c:
004D829C  33 C0                     XOR EAX,EAX
LAB_004d829e:
004D829E  C3                        RET
