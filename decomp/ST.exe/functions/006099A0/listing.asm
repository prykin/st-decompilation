FUN_006099a0:
006099A0  55                        PUSH EBP
006099A1  8B EC                     MOV EBP,ESP
006099A3  83 EC 20                  SUB ESP,0x20
006099A6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006099A9  8D 55 E0                  LEA EDX,[EBP + -0x20]
006099AC  52                        PUSH EDX
006099AD  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
006099B4  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
006099BB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006099BE  E8 DD C6 0D 00            CALL 0x006e60a0
006099C3  8B E5                     MOV ESP,EBP
006099C5  5D                        POP EBP
006099C6  C3                        RET
