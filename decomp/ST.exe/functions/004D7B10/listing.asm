FUN_004d7b10:
004D7B10  55                        PUSH EBP
004D7B11  8B EC                     MOV EBP,ESP
004D7B13  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D7B17  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D7B1A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D7B1D  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D7B20  C1 E1 04                  SHL ECX,0x4
004D7B23  03 C8                     ADD ECX,EAX
004D7B25  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D7B28  8B D0                     MOV EDX,EAX
004D7B2A  C1 E2 04                  SHL EDX,0x4
004D7B2D  03 D0                     ADD EDX,EAX
004D7B2F  C1 E2 02                  SHL EDX,0x2
004D7B32  8B 84 4A FE 55 7F 00      MOV EAX,dword ptr [EDX + ECX*0x2 + 0x7f55fe]
004D7B39  5D                        POP EBP
004D7B3A  C2 08 00                  RET 0x8
