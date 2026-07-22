FUN_00617810:
00617810  6A 6E                     PUSH 0x6e
00617812  E8 B9 8C 09 00            CALL 0x006b04d0
00617817  85 C0                     TEST EAX,EAX
00617819  74 07                     JZ 0x00617822
0061781B  8B C8                     MOV ECX,EAX
0061781D  E9 F0 A3 DE FF            JMP 0x00401c12
LAB_00617822:
00617822  33 C0                     XOR EAX,EAX
00617824  C3                        RET
