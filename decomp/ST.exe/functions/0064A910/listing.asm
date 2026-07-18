FUN_0064a910:
0064A910  55                        PUSH EBP
0064A911  8B EC                     MOV EBP,ESP
0064A913  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0064A916  85 C0                     TEST EAX,EAX
0064A918  7C 12                     JL 0x0064a92c
0064A91A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064A91D  3B 41 04                  CMP EAX,dword ptr [ECX + 0x4]
0064A920  7D 0A                     JGE 0x0064a92c
0064A922  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0064A925  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0064A928  03 C2                     ADD EAX,EDX
0064A92A  5D                        POP EBP
0064A92B  C3                        RET
LAB_0064a92c:
0064A92C  33 C0                     XOR EAX,EAX
0064A92E  5D                        POP EBP
0064A92F  C3                        RET
