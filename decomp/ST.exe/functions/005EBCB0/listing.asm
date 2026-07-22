STArtiafactC::sub_005EBCB0:
005EBCB0  55                        PUSH EBP
005EBCB1  8B EC                     MOV EBP,ESP
005EBCB3  83 EC 20                  SUB ESP,0x20
005EBCB6  56                        PUSH ESI
005EBCB7  8B F1                     MOV ESI,ECX
005EBCB9  8D 4D E0                  LEA ECX,[EBP + -0x20]
005EBCBC  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005EBCC3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005EBCC6  51                        PUSH ECX
005EBCC7  8B CE                     MOV ECX,ESI
005EBCC9  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005EBCD0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005EBCD3  E8 C8 A3 0F 00            CALL 0x006e60a0
005EBCD8  C7 86 3A 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x23a],0x6
005EBCE2  5E                        POP ESI
005EBCE3  8B E5                     MOV ESP,EBP
005EBCE5  5D                        POP EBP
005EBCE6  C3                        RET
