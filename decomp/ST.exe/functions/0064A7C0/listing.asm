FUN_0064a7c0:
0064A7C0  55                        PUSH EBP
0064A7C1  8B EC                     MOV EBP,ESP
0064A7C3  56                        PUSH ESI
0064A7C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0064A7C7  85 F6                     TEST ESI,ESI
0064A7C9  74 1D                     JZ 0x0064a7e8
0064A7CB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0064A7CE  8D 46 08                  LEA EAX,[ESI + 0x8]
0064A7D1  85 C9                     TEST ECX,ECX
0064A7D3  74 06                     JZ 0x0064a7db
0064A7D5  50                        PUSH EAX
0064A7D6  E8 85 08 06 00            CALL 0x006ab060
LAB_0064a7db:
0064A7DB  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
0064A7E1  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_0064a7e8:
0064A7E8  5E                        POP ESI
0064A7E9  5D                        POP EBP
0064A7EA  C3                        RET
