FUN_005f1380:
005F1380  55                        PUSH EBP
005F1381  8B EC                     MOV EBP,ESP
005F1383  83 EC 20                  SUB ESP,0x20
005F1386  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005F1389  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F138C  52                        PUSH EDX
005F138D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
005F1394  C7 45 F0 0A 00 00 00      MOV dword ptr [EBP + -0x10],0xa
005F139B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F139E  E8 FD 4C 0F 00            CALL 0x006e60a0
005F13A3  8B E5                     MOV ESP,EBP
005F13A5  5D                        POP EBP
005F13A6  C3                        RET
