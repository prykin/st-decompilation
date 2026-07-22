CreateSTBHEShell:
005F3410  68 75 01 00 00            PUSH 0x175
005F3415  E8 B6 D0 0B 00            CALL 0x006b04d0
005F341A  85 C0                     TEST EAX,EAX
005F341C  74 07                     JZ 0x005f3425
005F341E  8B C8                     MOV ECX,EAX
005F3420  E9 8D E3 E0 FF            JMP 0x004017b2
LAB_005f3425:
005F3425  33 C0                     XOR EAX,EAX
005F3427  C3                        RET
