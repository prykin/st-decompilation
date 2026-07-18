FUN_006c2390:
006C2390  55                        PUSH EBP
006C2391  8B EC                     MOV EBP,ESP
006C2393  51                        PUSH ECX
006C2394  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2397  85 C0                     TEST EAX,EAX
006C2399  74 44                     JZ 0x006c23df
006C239B  8B 48 46                  MOV ECX,dword ptr [EAX + 0x46]
006C239E  85 C9                     TEST ECX,ECX
006C23A0  7C 22                     JL 0x006c23c4
006C23A2  8D 45 FC                  LEA EAX,[EBP + -0x4]
006C23A5  6A 00                     PUSH 0x0
006C23A7  50                        PUSH EAX
006C23A8  51                        PUSH ECX
006C23A9  E8 52 FB FF FF            CALL 0x006c1f00
006C23AE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C23B1  85 C0                     TEST EAX,EAX
006C23B3  74 0C                     JZ 0x006c23c1
006C23B5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C23B8  8B 51 46                  MOV EDX,dword ptr [ECX + 0x46]
006C23BB  52                        PUSH EDX
006C23BC  E8 DF F7 FF FF            CALL 0x006c1ba0
LAB_006c23c1:
006C23C1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006c23c4:
006C23C4  8B 08                     MOV ECX,dword ptr [EAX]
006C23C6  F6 C5 80                  TEST CH,0x80
006C23C9  74 0B                     JZ 0x006c23d6
006C23CB  8B 40 42                  MOV EAX,dword ptr [EAX + 0x42]
006C23CE  6A 00                     PUSH 0x0
006C23D0  50                        PUSH EAX
006C23D1  E8 CA 22 01 00            CALL 0x006d46a0
LAB_006c23d6:
006C23D6  8D 4D 08                  LEA ECX,[EBP + 0x8]
006C23D9  51                        PUSH ECX
006C23DA  E8 81 8C FE FF            CALL 0x006ab060
LAB_006c23df:
006C23DF  8B E5                     MOV ESP,EBP
006C23E1  5D                        POP EBP
006C23E2  C2 04 00                  RET 0x4
