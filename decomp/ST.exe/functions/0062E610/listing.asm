FUN_0062e610:
0062E610  55                        PUSH EBP
0062E611  8B EC                     MOV EBP,ESP
0062E613  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062E616  8D 45 0C                  LEA EAX,[EBP + 0xc]
0062E619  50                        PUSH EAX
0062E61A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E61D  52                        PUSH EDX
0062E61E  50                        PUSH EAX
0062E61F  E8 07 77 DD FF            CALL 0x00405d2b
0062E624  5D                        POP EBP
0062E625  C2 08 00                  RET 0x8
