STFishC::sub_0057BF20:
0057BF20  55                        PUSH EBP
0057BF21  8B EC                     MOV EBP,ESP
0057BF23  83 EC 20                  SUB ESP,0x20
0057BF26  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0057BF29  8D 55 E0                  LEA EDX,[EBP + -0x20]
0057BF2C  52                        PUSH EDX
0057BF2D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0057BF34  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
0057BF3B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057BF3E  E8 5D A1 16 00            CALL 0x006e60a0
0057BF43  8B E5                     MOV ESP,EBP
0057BF45  5D                        POP EBP
0057BF46  C3                        RET
