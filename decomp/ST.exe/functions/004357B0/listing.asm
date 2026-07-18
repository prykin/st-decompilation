FUN_004357b0:
004357B0  55                        PUSH EBP
004357B1  8B EC                     MOV EBP,ESP
004357B3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004357B7  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004357BA  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004357BD  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004357C0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004357C3  C1 E1 04                  SHL ECX,0x4
004357C6  03 C8                     ADD ECX,EAX
004357C8  33 C0                     XOR EAX,EAX
004357CA  89 14 4D 21 4E 7F 00      MOV dword ptr [ECX*0x2 + 0x7f4e21],EDX
004357D1  5D                        POP EBP
004357D2  C2 08 00                  RET 0x8
