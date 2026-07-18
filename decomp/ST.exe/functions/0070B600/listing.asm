FUN_0070b600:
0070B600  55                        PUSH EBP
0070B601  8B EC                     MOV EBP,ESP
0070B603  56                        PUSH ESI
0070B604  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070B607  8B 06                     MOV EAX,dword ptr [ESI]
0070B609  85 C0                     TEST EAX,EAX
0070B60B  74 12                     JZ 0x0070b61f
0070B60D  8D 48 0D                  LEA ECX,[EAX + 0xd]
0070B610  51                        PUSH ECX
0070B611  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
0070B614  E8 C7 6A FE FF            CALL 0x006f20e0
0070B619  56                        PUSH ESI
0070B61A  E8 41 FA F9 FF            CALL 0x006ab060
LAB_0070b61f:
0070B61F  5E                        POP ESI
0070B620  5D                        POP EBP
0070B621  C3                        RET
