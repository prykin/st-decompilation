STSharkC::sub_0058EFE0:
0058EFE0  55                        PUSH EBP
0058EFE1  8B EC                     MOV EBP,ESP
0058EFE3  83 EC 20                  SUB ESP,0x20
0058EFE6  8B D1                     MOV EDX,ECX
0058EFE8  57                        PUSH EDI
0058EFE9  B9 08 00 00 00            MOV ECX,0x8
0058EFEE  33 C0                     XOR EAX,EAX
0058EFF0  8D 7D E0                  LEA EDI,[EBP + -0x20]
0058EFF3  F3 AB                     STOSD.REP ES:EDI
0058EFF5  8D 4D E0                  LEA ECX,[EBP + -0x20]
0058EFF8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058EFFB  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0058EFFE  51                        PUSH ECX
0058EFFF  8B CA                     MOV ECX,EDX
0058F001  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0058F008  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058F00B  E8 90 70 15 00            CALL 0x006e60a0
0058F010  5F                        POP EDI
0058F011  8B E5                     MOV ESP,EBP
0058F013  5D                        POP EBP
0058F014  C3                        RET
