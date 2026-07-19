FUN_005efa30:
005EFA30  8B 81 3E 02 00 00         MOV EAX,dword ptr [ECX + 0x23e]
005EFA36  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005EFA39  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005EFA3C  B8 D3 4D 62 10            MOV EAX,0x10624dd3
005EFA41  C1 E1 02                  SHL ECX,0x2
005EFA44  F7 E9                     IMUL ECX
005EFA46  8B C2                     MOV EAX,EDX
005EFA48  C1 F8 07                  SAR EAX,0x7
005EFA4B  8B C8                     MOV ECX,EAX
005EFA4D  C1 E9 1F                  SHR ECX,0x1f
005EFA50  03 C1                     ADD EAX,ECX
005EFA52  C3                        RET
