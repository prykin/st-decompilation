FUN_0044e660:
0044E660  6A 20                     PUSH 0x20
0044E662  E8 69 1E 26 00            CALL 0x006b04d0
0044E667  85 C0                     TEST EAX,EAX
0044E669  74 07                     JZ 0x0044e672
0044E66B  8B C8                     MOV ECX,EAX
0044E66D  E9 D9 42 FB FF            JMP 0x0040294b
LAB_0044e672:
0044E672  33 C0                     XOR EAX,EAX
0044E674  C3                        RET
