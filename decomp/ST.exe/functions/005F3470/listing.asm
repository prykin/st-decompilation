STBHEShellC::sub_005F3470:
005F3470  55                        PUSH EBP
005F3471  8B EC                     MOV EBP,ESP
005F3473  83 EC 20                  SUB ESP,0x20
005F3476  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005F3479  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F347C  52                        PUSH EDX
005F347D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005F3484  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005F348B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F348E  E8 0D 2C 0F 00            CALL 0x006e60a0
005F3493  8B E5                     MOV ESP,EBP
005F3495  5D                        POP EBP
005F3496  C3                        RET
