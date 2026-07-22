CreateTLOFake:
004D0ED0  68 51 02 00 00            PUSH 0x251
004D0ED5  E8 F6 F5 1D 00            CALL 0x006b04d0
004D0EDA  85 C0                     TEST EAX,EAX
004D0EDC  74 07                     JZ 0x004d0ee5
004D0EDE  8B C8                     MOV ECX,EAX
004D0EE0  E9 ED 38 F3 FF            JMP 0x004047d2
LAB_004d0ee5:
004D0EE5  33 C0                     XOR EAX,EAX
004D0EE7  C3                        RET
