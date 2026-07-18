FUN_004dea40:
004DEA40  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DEA46  85 C0                     TEST EAX,EAX
004DEA48  74 29                     JZ 0x004dea73
004DEA4A  48                        DEC EAX
004DEA4B  89 81 D0 04 00 00         MOV dword ptr [ECX + 0x4d0],EAX
004DEA51  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004DEA54  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DEA57  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DEA5A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DEA5D  C1 E1 04                  SHL ECX,0x4
004DEA60  03 C8                     ADD ECX,EAX
004DEA62  8D 04 4D F6 55 7F 00      LEA EAX,[ECX*0x2 + 0x7f55f6]
004DEA69  8B 0C 4D F6 55 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f55f6]
004DEA70  49                        DEC ECX
004DEA71  89 08                     MOV dword ptr [EAX],ECX
LAB_004dea73:
004DEA73  C3                        RET
