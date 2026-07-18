FUN_004be380:
004BE380  56                        PUSH ESI
004BE381  8B F1                     MOV ESI,ECX
004BE383  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE389  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004BE38F  50                        PUSH EAX
004BE390  E8 22 66 F4 FF            CALL 0x004049b7
004BE395  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004BE39B  8B B6 41 02 00 00         MOV ESI,dword ptr [ESI + 0x241]
004BE3A1  25 FF 00 00 00            AND EAX,0xff
004BE3A6  48                        DEC EAX
004BE3A7  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004BE3AA  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004BE3AD  03 CA                     ADD ECX,EDX
004BE3AF  5E                        POP ESI
004BE3B0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004BE3B3  C1 E0 02                  SHL EAX,0x2
004BE3B6  99                        CDQ
004BE3B7  F7 3C 8D 7C 41 7E 00      IDIV dword ptr [ECX*0x4 + 0x7e417c]
004BE3BE  C3                        RET
