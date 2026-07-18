FUN_0074fd6a:
0074FD6A  56                        PUSH ESI
0074FD6B  8B F1                     MOV ESI,ECX
0074FD6D  E8 14 00 00 00            CALL 0x0074fd86
0074FD72  F6 44 24 08 01            TEST byte ptr [ESP + 0x8],0x1
0074FD77  74 07                     JZ 0x0074fd80
0074FD79  56                        PUSH ESI
0074FD7A  E8 31 E5 FD FF            CALL 0x0072e2b0
0074FD7F  59                        POP ECX
LAB_0074fd80:
0074FD80  8B C6                     MOV EAX,ESI
0074FD82  5E                        POP ESI
0074FD83  C2 04 00                  RET 0x4
