FUN_0061d5f0:
0061D5F0  68 DD 00 00 00            PUSH 0xdd
0061D5F5  E8 D6 2E 09 00            CALL 0x006b04d0
0061D5FA  85 C0                     TEST EAX,EAX
0061D5FC  74 07                     JZ 0x0061d605
0061D5FE  8B C8                     MOV ECX,EAX
0061D600  E9 C9 5C DE FF            JMP 0x004032ce
LAB_0061d605:
0061D605  33 C0                     XOR EAX,EAX
0061D607  C3                        RET
