FUN_006c14f0:
006C14F0  55                        PUSH EBP
006C14F1  8B EC                     MOV EBP,ESP
006C14F3  56                        PUSH ESI
006C14F4  57                        PUSH EDI
006C14F5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C14F8  8B 37                     MOV ESI,dword ptr [EDI]
006C14FA  85 F6                     TEST ESI,ESI
006C14FC  74 1F                     JZ 0x006c151d
LAB_006c14fe:
006C14FE  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C1501  8D 46 04                  LEA EAX,[ESI + 0x4]
006C1504  85 C9                     TEST ECX,ECX
006C1506  74 06                     JZ 0x006c150e
006C1508  50                        PUSH EAX
006C1509  E8 52 9B FE FF            CALL 0x006ab060
LAB_006c150e:
006C150E  8D 46 08                  LEA EAX,[ESI + 0x8]
006C1511  50                        PUSH EAX
006C1512  E8 49 9B FE FF            CALL 0x006ab060
006C1517  8B 36                     MOV ESI,dword ptr [ESI]
006C1519  85 F6                     TEST ESI,ESI
006C151B  75 E1                     JNZ 0x006c14fe
LAB_006c151d:
006C151D  57                        PUSH EDI
006C151E  E8 6D 83 FF FF            CALL 0x006b9890
006C1523  5F                        POP EDI
006C1524  5E                        POP ESI
006C1525  5D                        POP EBP
006C1526  C2 04 00                  RET 0x4
