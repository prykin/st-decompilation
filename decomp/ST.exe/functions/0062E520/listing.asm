FUN_0062e520:
0062E520  55                        PUSH EBP
0062E521  8B EC                     MOV EBP,ESP
0062E523  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062E526  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0062E529  50                        PUSH EAX
0062E52A  52                        PUSH EDX
0062E52B  E8 71 52 DD FF            CALL 0x004037a1
0062E530  5D                        POP EBP
0062E531  C2 08 00                  RET 0x8
