CreateEditor:
007233B0  68 18 02 00 00            PUSH 0x218
007233B5  E8 16 D1 F8 FF            CALL 0x006b04d0
007233BA  85 C0                     TEST EAX,EAX
007233BC  74 07                     JZ 0x007233c5
007233BE  8B C8                     MOV ECX,EAX
007233C0  E9 EB D5 FF FF            JMP 0x007209b0
LAB_007233c5:
007233C5  33 C0                     XOR EAX,EAX
007233C7  C3                        RET
