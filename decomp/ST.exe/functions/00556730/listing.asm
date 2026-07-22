CreateTraks:
00556730  68 2C 08 00 00            PUSH 0x82c
00556735  E8 96 9D 15 00            CALL 0x006b04d0
0055673A  85 C0                     TEST EAX,EAX
0055673C  74 07                     JZ 0x00556745
0055673E  8B C8                     MOV ECX,EAX
00556740  E9 C4 BD EA FF            JMP 0x00402509
LAB_00556745:
00556745  33 C0                     XOR EAX,EAX
00556747  C3                        RET
