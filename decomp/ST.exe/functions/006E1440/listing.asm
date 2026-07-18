FUN_006e1440:
006E1440  55                        PUSH EBP
006E1441  8B EC                     MOV EBP,ESP
006E1443  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006E1446  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E1449  50                        PUSH EAX
006E144A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E144D  52                        PUSH EDX
006E144E  50                        PUSH EAX
006E144F  8D 55 10                  LEA EDX,[EBP + 0x10]
006E1452  8D 45 08                  LEA EAX,[EBP + 0x8]
006E1455  52                        PUSH EDX
006E1456  50                        PUSH EAX
006E1457  E8 C4 FE FF FF            CALL 0x006e1320
006E145C  5D                        POP EBP
006E145D  C2 1C 00                  RET 0x1c
