FUN_005f6ee0:
005F6EE0  8B 81 69 02 00 00         MOV EAX,dword ptr [ECX + 0x269]
005F6EE6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F6EE9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F6EEC  B8 B5 81 4E 1B            MOV EAX,0x1b4e81b5
005F6EF1  C1 E1 02                  SHL ECX,0x2
005F6EF4  F7 E9                     IMUL ECX
005F6EF6  8B C2                     MOV EAX,EDX
005F6EF8  C1 F8 06                  SAR EAX,0x6
005F6EFB  8B C8                     MOV ECX,EAX
005F6EFD  C1 E9 1F                  SHR ECX,0x1f
005F6F00  03 C1                     ADD EAX,ECX
005F6F02  C3                        RET
