CreateTLOBldMark:
004C6B20  6A 3C                     PUSH 0x3c
004C6B22  E8 A9 99 1E 00            CALL 0x006b04d0
004C6B27  85 C0                     TEST EAX,EAX
004C6B29  74 07                     JZ 0x004c6b32
004C6B2B  8B C8                     MOV ECX,EAX
004C6B2D  E9 9E A7 F3 FF            JMP 0x004012d0
LAB_004c6b32:
004C6B32  33 C0                     XOR EAX,EAX
004C6B34  C3                        RET
