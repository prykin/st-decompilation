FUN_00486a60:
00486A60  56                        PUSH ESI
00486A61  8B B1 16 07 00 00         MOV ESI,dword ptr [ECX + 0x716]
00486A67  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00486A6A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00486A6D  C1 E0 02                  SHL EAX,0x2
00486A70  99                        CDQ
00486A71  F7 B9 12 07 00 00         IDIV dword ptr [ECX + 0x712]
00486A77  85 F6                     TEST ESI,ESI
00486A79  5E                        POP ESI
00486A7A  7E 09                     JLE 0x00486a85
00486A7C  85 C0                     TEST EAX,EAX
00486A7E  75 05                     JNZ 0x00486a85
00486A80  B8 01 00 00 00            MOV EAX,0x1
LAB_00486a85:
00486A85  C3                        RET
