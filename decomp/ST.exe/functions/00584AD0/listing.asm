FUN_00584ad0:
00584AD0  55                        PUSH EBP
00584AD1  8B EC                     MOV EBP,ESP
00584AD3  83 EC 20                  SUB ESP,0x20
00584AD6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00584AD9  8D 55 E0                  LEA EDX,[EBP + -0x20]
00584ADC  52                        PUSH EDX
00584ADD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00584AE4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
00584AEB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00584AEE  E8 AD 15 16 00            CALL 0x006e60a0
00584AF3  8B E5                     MOV ESP,EBP
00584AF5  5D                        POP EBP
00584AF6  C3                        RET
