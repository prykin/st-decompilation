FUN_0062e440:
0062E440  55                        PUSH EBP
0062E441  8B EC                     MOV EBP,ESP
0062E443  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0062E446  8D 45 1C                  LEA EAX,[EBP + 0x1c]
0062E449  56                        PUSH ESI
0062E44A  50                        PUSH EAX
0062E44B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062E44E  52                        PUSH EDX
0062E44F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062E452  50                        PUSH EAX
0062E453  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062E456  52                        PUSH EDX
0062E457  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062E45A  50                        PUSH EAX
0062E45B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E45E  52                        PUSH EDX
0062E45F  50                        PUSH EAX
0062E460  83 CE FF                  OR ESI,0xffffffff
0062E463  E8 11 4E DD FF            CALL 0x00403279
0062E468  85 C0                     TEST EAX,EAX
0062E46A  B8 01 00 00 00            MOV EAX,0x1
0062E46F  7D 02                     JGE 0x0062e473
0062E471  8B C6                     MOV EAX,ESI
LAB_0062e473:
0062E473  5E                        POP ESI
0062E474  5D                        POP EBP
0062E475  C2 1C 00                  RET 0x1c
