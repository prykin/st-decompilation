CreateAiBoss:
006483D0  68 5C 06 00 00            PUSH 0x65c
006483D5  E8 F6 80 06 00            CALL 0x006b04d0
006483DA  85 C0                     TEST EAX,EAX
006483DC  74 07                     JZ 0x006483e5
006483DE  8B C8                     MOV ECX,EAX
006483E0  E9 6F D8 DB FF            JMP 0x00405c54
LAB_006483e5:
006483E5  33 C0                     XOR EAX,EAX
006483E7  C3                        RET
