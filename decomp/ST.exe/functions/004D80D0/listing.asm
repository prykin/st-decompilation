FUN_004d80d0:
004D80D0  55                        PUSH EBP
004D80D1  8B EC                     MOV EBP,ESP
004D80D3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D80D7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D80DA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D80DD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D80E0  C1 E1 04                  SHL ECX,0x4
004D80E3  03 C8                     ADD ECX,EAX
004D80E5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D80E8  8B D0                     MOV EDX,EAX
004D80EA  C1 E2 04                  SHL EDX,0x4
004D80ED  03 D0                     ADD EDX,EAX
004D80EF  C1 E2 02                  SHL EDX,0x2
004D80F2  8B 84 4A FA 55 7F 00      MOV EAX,dword ptr [EDX + ECX*0x2 + 0x7f55fa]
004D80F9  5D                        POP EBP
004D80FA  C2 08 00                  RET 0x8
