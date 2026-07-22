CreateTLOEmbryo:
004D6DC0  68 74 03 00 00            PUSH 0x374
004D6DC5  E8 06 97 1D 00            CALL 0x006b04d0
004D6DCA  85 C0                     TEST EAX,EAX
004D6DCC  74 07                     JZ 0x004d6dd5
004D6DCE  8B C8                     MOV ECX,EAX
004D6DD0  E9 3B D3 F2 FF            JMP 0x00404110
LAB_004d6dd5:
004D6DD5  33 C0                     XOR EAX,EAX
004D6DD7  C3                        RET
